//
//  main.cpp
//  Book Exercise 3.17
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Wind chill calculator 2.0
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate The Wind Chill \n";
    
    // D
    double temp_input = 0.0;
    double wind_speed_input = 0.0;
    double wind_chill_temp = 0.0;
    
    // I
    cout << "Enter the temperature in Farenheit: ";
    cin >> temp_input;
    
    cout << "Enter the wind speed in miles per hour: ";
    cin >> wind_speed_input;
    
    // P
    // NWS formula
    wind_chill_temp = 35.74 + (0.6215 * temp_input) - (35.75 * pow(wind_speed_input, 0.16)) + (0.4275 * temp_input * pow(wind_speed_input, 0.16));
    
    // O
    cout << "The wind chill index is " << wind_chill_temp << endl;
    
    return 0;
    
}