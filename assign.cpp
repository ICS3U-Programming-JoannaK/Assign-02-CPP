// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 7, 2025
// This program asks the user for the major radius
// and minor radius of a Torus then calculates
// the surface area and volume using PI

// modules used for this program
#include <cmath>
#include <iomanip>
#include <iostream>

// This displays the greeting card in color
int color() {
    std::cout << "\033[1;35m";  // the greeting card will be purple !

    // Display greeting card
    std::cout << "************************************" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "* Welcome to the Torus Calculator! *" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "************************************" << std::endl;

    // Reset to default color
    std::cout << "\033[0m";

    return 0;
}

int main() {
    // Display greeting card in color
    color();

    // Declare variables
    float majorRadius, minorRadius;
    std::string units;

    // Ask user to enter the major and minor radius
    std::cout << "Please make sure your major radius is larger than minor radius." << std::endl;
    std::cout << "Please enter the major radius (R): ";
    std::cin >> majorRadius;
    std::cout << "Please enter the minor radius (r): ";
    std::cin >> minorRadius;

    // Get units from the user
    std::cout << "Please enter the units (e.g., cm, m): ";
    std::cin >> units;

    // Calculate volume and area of a Torus
    float volume = 2 * M_PI * M_PI * majorRadius * minorRadius * minorRadius;
    float area = 4 * M_PI * M_PI * majorRadius * minorRadius;

    // Set the output to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The volume of the torus is: "
              << volume << " " << units << "^3" << std::endl;
    std::cout << "The surface area of the torus is: "
              << area << " " << units << "^2" << std::endl;

    // Display formulas used
    std::cout << "Volume formula= 2π²Rr²" << std::endl;
    std::cout << "Area formula= 4π²Rr" << std::endl;

    // Display more information about the Torus
    std::cout << "------More on the Torus shape------\n"
    << std::endl;
    std::cout << "A Torus is a 3D shape that resembles \n"
    << "a donut. It has two radius:\n"
    << std::endl;
    std::cout << "1. Major Radius (R): This is the distance from \n"
    << "the center of hole to the center of the tube\n"
    << std::endl;
    std::cout << "Minor radius (r): This is the radius of the tube itself"
    << std::endl;
    std::cout << "the distance from the center of the"
    << "tube to the surface of the Torus\n"
    << std::endl;
    std::cout << "Thank you for using the Torus calculator ! Goodbye!\n"
    << std::endl;

    // Display exit card
    std::cout << "\033[1;35m";  // the greeting card will be purple !
    std::cout << "**********************8***************" << std::endl;
    std::cout << "*                                    *" << std::endl;
    std::cout << "* Thank you for using the calculator!*" << std::endl;
    std::cout << "*                                    *" << std::endl;
    std::cout << "**************************************" << std::endl;
    }
