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

#include "File2Vector.hpp"
#include <istream>
#include <iostream>
#include <string>
#include <vector>

void ReadStream2DoubleVector(std::istream & in_str, std::vector<double> &vec) {
    if (!in_str.good()){
        std::cerr << "Stream is not good, unable to read!" << std::endl;
        return;
    }

    // TODO read the file in and store each number in vec.
    // Don't forget to check that the numbers read correctly (i.e. were doubles)

}