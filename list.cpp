// Copyright (c) 2022 Nicolas Riscalas All rights reserved.
//
// Created by: Nicolas Riscalas
// Created on:April 25 2022
// This program calculates the average

#include <iostream>
#include <list>
#include <cmath>

using std::cin;
using std::cout;
using std::stof;
using std::stoi;
using std::string;

float AverageCalculator(std::list<float> listOfMarks) {
    // this functions calculates the average

    float average = 0;
    int intProcess;
    float roundedAverage;

    for (float singleElement : listOfMarks) {
        average = average + singleElement;
    }

    average = average/listOfMarks.size();

    roundedAverage = (average*pow(10, 0));
    intProcess = (static_cast<int>(roundedAverage + 0.5));
    roundedAverage = intProcess *pow(10, -0);

    return roundedAverage;
}


main() {
    // this function uses a list

    std::list<float> markList;
    string singleMark;
    float intSingleMark;
    float average;

    cout << "Please enter 1 mark at a time. Enter -1 to end."
              << "\n";
    // input
    while (singleMark != "-1") {
        cout << "What is your mark? (as %): \n";
        cin >> singleMark;
        try {
            intSingleMark = stoi(singleMark.c_str());

            markList.push_back(intSingleMark);
        } catch (...) {
            cout << "Please enter in a number\n";
        }
    }
    markList.pop_back();

    // call functions
    average = AverageCalculator(markList);
    // output
    cout << "Your average is: " << average << "%\n";
}
