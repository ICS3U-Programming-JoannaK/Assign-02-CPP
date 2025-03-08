// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 7, 2025
// This program asks the user for the major radius
// and minor radius of a Torus then calculates
// the surface area and volume using PI

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
    float majorRadius, minorRadius;
    std::string units;

    std::cout << "Welcome to the Torus Calculator!" << std::endl;

    while (true) {
        std::cout << "Please enter the major radius (R): ";
        std::cin >> majorRadius;
        std::cout << "Please enter the minor radius (r): ";
        std::cin >> minorRadius;

        if (majorRadius > minorRadius) {
            break;  // the program doesn't go further if conditions aren't met
        } else {
            std::cout << "The major radius must be greater than the minor radius. Please input new digits." << std::endl;
        }
    }

    std::cout << "Please enter the units (e.g., cm, m): ";
    std::cin >> units;

    float volume = 2 * M_PI * M_PI * majorRadius * minorRadius * minorRadius;
    float area = 4 * M_PI * M_PI * majorRadius * minorRadius;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The volume of the torus is: " << volume << " " << units << "^3" << std::endl;
    std::cout << "The surface area of the torus is: " << area << " " << units << "^2" << std::endl;

    std::string showFormulas;
    std::cout << "Do you want to see the formulas used? (yes/no): ";
    std::cin >> showFormulas;

    if (showFormulas == "yes") {
        std::cout << "Volume formula= 2π²Rr²" << std::endl;
        std::cout << "Area formula= 4π²Rr" << std::endl;
    } else {
        std::cout << "Alright, no codes will be shown." << std::endl;
    }

    std::cout << "Thank you for using the Torus Calculator! Goodbye!" << std::endl;
}
