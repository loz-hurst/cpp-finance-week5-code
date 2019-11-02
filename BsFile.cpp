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
#include <istream>
#include <iostream>
#include <cmath>

namespace BS {
    void CalculateAndDisplayValues(std::istream &in_str) {
        // Step 1 - read in the data
        if (!in_str.good()) {
            std::cerr << "input stream is not good while reading BS data" << std::endl;
            return;
        }

        bs_data data {0, 0, 0, 0, 0};

        in_str >> data.value;
        if (in_str.fail()) {
            std::cerr << "Unable to read asset value - not a double?" << std::endl;
            return;
        }
        in_str >> data.strike;
        if (in_str.fail()) {
            std::cerr << "Unable to read strike price - not a double?" << std::endl;
            return;
        }
        in_str >> data.maturity;
        if (in_str.fail()) {
            std::cerr << "Unable to read maturity time - not a double?" << std::endl;
            return;
        }
        in_str >> data.rate;
        if (in_str.fail()) {
            std::cerr << "Unable to read risk-free rate - not a double?" << std::endl;
            return;
        }
        in_str >> data.sigma;
        if (in_str.fail()) {
            std::cerr << "Unable to read volatility - not a double?" << std::endl;
            return;
        }

        // Step 2 - calculate the option value
        // This value gets used a couple of times, so calculate it once
        const double sig_sqrt_t {data.sigma*std::sqrt(data.maturity)};

        // PV(K)
        const double pv_k {data.strike*std::exp(-data.rate*data.maturity)};

        // d1
        const double d1 {(std::log(data.value/data.strike) + (data.rate + 0.5*data.sigma*data.sigma) * data.maturity)/sig_sqrt_t};

        // d2
        const double d2 {d1 - sig_sqrt_t};

        const double n1 {0.5 * (1 + std::erf(d1 / std::sqrt(2)))};
        const double n2 {0.5 * (1 + std::erf(d2 / std::sqrt(2)))};

        const double option_value {data.value*n1 - pv_k*n2};

        // Step 3 - print it out
        std::cout << "Asset value:\t" << data.value << "\n"
                  << "Strike price:\t" << data.strike << "\n"
                  << "Maturity time:\t" << data.maturity << "\n"
                  << "Risk free rate:\t" << data.rate << "\n"
                  << "Volitility:\t" << data.sigma << "\n"
                  << "Option value:\t" << option_value << std::endl;
    }

    void ReadData(std::istream & in_str, bs_data & data) {
        // TODO write method to read data from in_str and store it in data
    }

    double OptionValue(const bs_data & data) {
        // TODO write method to calculate and return the value of the option
        return 0;
    }

    void PrintOption(const bs_data & data) {
        // TODO write method to print all the data about the option
        // HINT: this method is where you should call OptionValue() from to get the information to print
    }
}