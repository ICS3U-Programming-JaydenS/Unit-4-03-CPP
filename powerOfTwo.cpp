// Copyright (c) 2024 Jayden Smith All rights reserved.
// Created by: Jayden Smith
// Date: April 6, 2024
// This program calculates the square of every number up to the user`s number

#include <iostream>
#include <string>
#include <cmath>


int main() {
    int loopCounter;
    std::string userNum;

    // get the user's number
    std::cout << "Enter a whole number: ";
    std::cin >> userNum;

    try {
        // Converts userNum to integer
        int userNumAsInt = std::stoi(userNum);
        float userNumAsFloat = std::stof(userNum);

        // Checks if userNum is a decimal
        if (userNumAsInt != userNumAsFloat) {
            std::cout << userNumAsFloat << " is not an integer!" << std::endl;

            // Checks if userNum is negative
        } else if (userNumAsInt < 0) {
            std::cout << userNumAsInt <<
            " is not a positive integer!" << std::endl;

            // If none of those, calculates squares up to the users number
        } else {
            for (loopCounter = 0; loopCounter <= userNumAsInt; loopCounter++) {
            std::cout << loopCounter <<
            "^2 = " << pow(loopCounter , 2) << std::endl;
        }

        // What happens if it is not a valid integer
        }
    } catch (std::invalid_argument) {
        std::cerr << userNum << " is not a valid integer." << std::endl;
    }
}
