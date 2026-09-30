// Copyright (c) 2026 Alex OBrien All rights reserved
// .
// Created by : Alex OBrien
// Created on : September 30, 2026
// This program calculates the area and circumference of a circle
// by asking the user for the radius
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    double radius = 0.0;

    // Prompt user for the radius of the circle in cm
    std::cout << "Enter the radius of your circle (cm): ";

    std::cin >> radius;

    // Calculate the Circumference & Area
    double circumference = 2 * M_PI * radius;
    double area = M_PI * std::pow(radius, 2);

    // 2 decimal spaces
    std::cout << std::fixed << std::setprecision(2);

    // Display results formatted to 2nd decimal point
    std::cout << "The Circumference and the Area are:" << std::endl;
    std::cout << "Circumference: " << circumference << "cm" << std::endl;
    std::cout << "Area: " << area << "cm²" << std::endl;

    return 0;
}