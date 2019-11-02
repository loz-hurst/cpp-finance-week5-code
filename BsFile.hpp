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

#ifndef CPP_FINANCE_WEEK5_CODE_BSFILE_HPP
#define CPP_FINANCE_WEEK5_CODE_BSFILE_HPP

#include <istream>

namespace BS {
    struct bs_data {
        double value;
        double strike;
        double maturity;
        double rate;
        double sigma;
    };

    // Old, monolithic method - to be replaced
    void CalculateAndDisplayValues(std::istream &);

    // New methods:

    // Reads in BS values from input stream to struct, provided
    void ReadData(std::istream &, bs_data &);

    // Calculate and return the option value from the data provided
    double OptionValue(const bs_data &);

    // Print out the data about and value of the option
    void PrintOption(const bs_data &);
}

#endif //CPP_FINANCE_WEEK5_CODE_BSFILE_HPP
