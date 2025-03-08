//Copyright 2025 Joanna Keza All rights reserved
//
// Created by:
// Date:
// This 

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

int main () {
    // Greeting card
    std::cout << "************************************" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "* Welcome to the Torus calculator !*" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "************************************" << std::endl;

    // Declare variables
    float majorRadius, minorRadius;

    // Get the user input for major and minor radius
    std::cout << "Enter the major radius: ";
    std::cin >> majorRadius;
    std::cout << "Enter the minor radius: ";
    std::cin >> minorRadius;

    // Check if the major radius is greater than the minor radius
    if (majorRadius <= minorRadius) {
        std::cout << "Error: The major radius should be larger than minor radius.\n" std::endl;
        std::cout << "Please try again. \n" std::endl;
    } else {
        break; // The program won't continue if this isn't met
    }

    // Calculate the volume and area
    float volume = 2 * M_PI ^ 2 * majorRadius * minorRadius ^ 2;
    float area = 4 * M_PI ^ 2 * majorRadius * minorRadius;

    // Display results
    std::cout << "Volume of the Torus: " << volume << "(cm^3)" << std::endl;
    std::cout << "Area of the Torus: " << area << "(cm^2)" << endl;

    // Ask user if they want to see the formulas used
    string showFormula;
    std::cout << "Would you like to see the formulas used? (yes/no)\n";
    std::cin >> showFormula;

    // This is used to display the formulas used
