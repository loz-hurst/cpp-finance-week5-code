/*
 * Code for week 5 exercises of C++ for Finance.
 *
 * Copyright 2019 Laurence Alexander Hurst
 *
 * This file is part of C++ for Finance.
 *
 *     C++ for Finance is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     C++ for Finance is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *
 * See the file LICENCE in the original source code repository for the
 * full licence.
 */

#include "BsFile.hpp"
#include "File2Vector.hpp"
#include <algorithm>
#include <fstream>
#include <iterator>
#include <iostream>
#include <string>
#include <vector>

int main() {

    // Exercise 2
    // CLion will run program in cmake-build-debug directory, so .. will refer to the project's root
    const std::string numbers_filename {"../numbers.dat"};

    std::ifstream in_str {numbers_filename};
    std::vector<double> numbers;
    ReadStream2DoubleVector(in_str, numbers);
    in_str.close();
    // Print what the method put into the vector
    std::ostream_iterator<double> out_itr {std::cout, " "};
    std::copy(std::begin(numbers), std::end(numbers), out_itr);
    std::cout << std::endl;

    // Exercise 3
    const std::string bs_datafile {"../bs.dat"};
    in_str.open(bs_datafile); // Re-use the existing ifstream object
    BS::CalculateAndDisplayValues(in_str);
    in_str.close();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}