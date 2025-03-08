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
#include <string>

// This displays the greeting card in color
void color() {
    std::cout << "\033[1;35m";  // the greeting card will be purple !
    
    // Display greeting card
    std::cout << "************************************" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "* Welcome to the Torus Calculator! *" << std::endl;
    std::cout << "*                                  *" << std::endl;
    std::cout << "************************************" << std::endl;

    // Reset to default color
    std::cout << "\033[0m";
} 

int main() {
    //Display greeting card in color
    color();

    // Declare variables
    float majorRadius, minorRadius;
    std::string units;

    // Ask user to enter the major and minor radius
    while (true) {
        std::cout << "Please enter the major radius (R): ";
        std::cin >> majorRadius;
        std::cout << "Please enter the minor radius (r): ";
        std::cin >> minorRadius;

        // This makes sure the program won't run if the minor radius is greater than the major radius
        if (majorRadius > minorRadius) {
            break;  // the program won't go further if conditions aren't met
        } else {
            std::cout << "The major radius must be greater than the minor radius." << std::endl;
            std::cout << "Please input new digits." << std::endl;
        }
    }

    // Get units from the user 
    std::cout << "Please enter the units (e.g., cm, m): ";
    std::cin >> units;

    // Calculate volume and area of a Torus
    float volume = 2 * M_PI * M_PI * majorRadius * minorRadius * minorRadius;
    float area = 4 * M_PI * M_PI * majorRadius * minorRadius;

    // Set the output to 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The volume of the torus is: " << volume << " " << units << "^3" << std::endl;
    std::cout << "The surface area of the torus is: " << area << " " << units << "^2" << std::endl;

    // The user is able to see what formulas were used to calculate the area and volume
    std::string showFormulas;
    std::cout << "Do you want to see the formulas used? (yes/no): ";
    std::cin >> showFormulas;

    // The user will only be able to see the formulas if they type yes
    if (showFormulas == "yes") {
        std::cout << "Volume formula= 2π²Rr²" << std::endl;
        std::cout << "Area formula= 4π²Rr" << std::endl;
    } else {
        std::cout << "Alright, no codes will be shown." << std::endl; // This will display when the user types no
    }

    // Ask the user if they want to know more about the Torus shape
    std::string displayInfo;
    std::cout << "Do you want to learn more about the shape? (yes/no): ";
    std::cin >> displayInfo;

    // The user will only be able to learn more if they type yes
    if (displayInfo == "yes") {
        std::cout << "------More on the Torus shape------\n"
                  << std::endl;
        std::cout << "A Torus is a 3D shape that resembles a donut. It has two radius:\n"
                  << std::endl;
        std::cout << "1. Major Radius (R): This is the distance from the center of hole to the center of the tube\n"
                  << std::endl;
        std::cout << "Minor radius (r): This is the radius of the tube itself"
                  << std::endl;
        std::cout << "the distance from the center of the tube to the surface of the Torus"
                  << std::endl;
        std::cout << "Minor radius (r): This is the radius of the tube itself,"
                  << std::endl;
        std::cout << "the distance from the center of the tube to the surface of the Torus\n"
                  << std::endl;
        std::cout << "Thank you for using the Torus calculator ! Goodbye!\n"
                  << std::endl;

    } else {  // Only displays exit card if user types no
        std::cout << "********************************************" << std::endl;
        std::cout << "*                                          *" << std::endl;
        std::cout << "* Thank you for using the Torus Calculator!*" << std::endl;
        std::cout << "*                                          *" << std::endl;
        std::cout << "********************************************" << std::endl;
    }
}
