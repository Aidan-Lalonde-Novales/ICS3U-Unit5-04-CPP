// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-05-10
// This program calculates volume of a cylinder using multiple parameters.

#include <iostream>
#include <cmath>

float CylinderVolume(float height, float radius) {
    // this function calculates volume of a cylinder
    float volume;

    // process
    volume = (M_PI * pow(radius, 2) * height);

    return volume;
}


int main() {
    // this function gets input, calls a function, gives output
    std::string heightString;
    float heightValue;
    std::string radiusString;
    float radiusValue;
    float volume;

    std::cout << "This program calculates the volume of a cylinder " <<
    "using radius and height." << std::endl;
    std::cout << "" << std::endl;


    // input
    std::cout << "Enter a radius (mm): ";
    std::cin >> radiusString;
    std::cout << "Enter a height (mm): ";
    std::cin >> heightString;

    try {
        heightValue = std::stof(heightString);
        radiusValue = std::stof(radiusString);
        // call function
        volume = CylinderVolume(heightValue, radiusValue);

        // output
        std::cout << "\nThe volume of this cylinder is "
        << volume << " mm²." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "\nYour values are invalid. Please Re-Run." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
