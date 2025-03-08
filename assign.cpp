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

#ifdef _WIN32
#include <windows.h>
#endif

void setColor(int color) {
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
#else
    std::cout << "\033[" << color << "m";
#endif
}

int main() {
    setColor(34);  // Set text color to blue
    std::cout << "Welcome to the Torus Calculator!" << std::endl;
    setColor(37);  // Reset to default color

    float majorRadius, minorRadius;
    std::string unit;

    std::cout << "Enter the major radius: ";
    std::cin >> majorRadius;
    std::cout << "Enter the minor radius: ";
    std::cin >> minorRadius;
    std::cout << "Enter the unit of measurement (meters, centimeters, etc): ";
    std::cin >> unit;

    float area = 4 * M_PI^2 * majorRadius * minorRadius;
    float volume = 2 * M_PI^2 * majorRadius * minorRadius * minorRadius;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area: " << area << " " << unit << "^2" << std::endl;
    std::cout << "Volume: " << volume << " " << unit << "^3" << std::endl;

    std::string showFormulas;
    std::cout << "Do you want to see the formulas used? (yes/no): ";
    std::cin >> showFormulas;

    if (showFormulas == "yes") {
        setColor(32);  // Set text color to green
        std::cout << "Formulas used:" << std::endl;
        std::cout << "Surface Area = 4π2Rr" << std::endl;
        std::cout << "Volume = 2π2Rr2" << std::endl;
    } else {
        setColor(31);  // Set text color to red
        std::cout << "Alright, no formulas will be shown." << std::endl;
    }

    setColor(34);  // Set text color to blue
    std::cout << "Thank you for using the Torus Calculator! Goodbye!" << std::endl;
    setColor(37);  // Reset to default color

}
