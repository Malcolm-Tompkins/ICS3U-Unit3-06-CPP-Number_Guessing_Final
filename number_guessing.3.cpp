// Copyright (c) 2021 Malcolm Tompkins All rights reserved
//
// Created by Malcolm Tompkins
// Created on May 10, 2021
// Runs the Guess the numer game with random numbers

#include <iostream>
#include <random>
#include <string>


main() {
    // Function that runs the guess the number game
    int program_number , user_number;
    std::string user_input;
    // User input
    std::cout << "Welcome to Guess the number!\nInput a number from 0-9: ";
    std::cin >> user_input;
    // Process
        std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    program_number = idist(rgen);
    try {
        user_number = std::stoi(user_input);

        if (user_number == program_number) {
            // Output
        std::cout << "You have guessed the correct number, nice!";
    } else {
        std::cout << "You have guessed incorrectly\nThe correct number is: ";
        std::cout << program_number;
    }}catch (std::invalid_argument) {
        std::cout << user_input;
        std::cout << " is not an integer";
    }
    std::cout << "\nFinished successfully";
    }
