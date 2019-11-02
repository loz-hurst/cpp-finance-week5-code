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

#ifndef CPP_FINANCE_WEEK5_CODE_FILE2VECTOR_HPP
#define CPP_FINANCE_WEEK5_CODE_FILE2VECTOR_HPP

#include <istream>
#include <vector>

/* Reads doubles from the open input stream to the vector, provided.
 * Uses emplace_back internally to add doubles to the vector.
 * Will print an error and return is input stream is not good or
 * anything that cannot be converted to a double is encountered.
 */
void ReadStream2DoubleVector(std::istream &, std::vector<double> &);

#endif //CPP_FINANCE_WEEK5_CODE_FILE2VECTOR_HPP
