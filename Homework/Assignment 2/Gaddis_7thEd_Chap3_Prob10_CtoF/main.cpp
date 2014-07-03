/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 10 Celsius to Fahrenheit
 * Created on July 2, 2014, 5:26 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

int main(int argc, char** argv) {
    //Declare Variables
    int Celsius, Fahrenheit;//Temperature in Celsius and Fahrenheit
    
    //Inputs
    cout<<"Input the temperature in Celsius."<<endl;
    cin>>Celsius;
    
    //Calculations
    Fahrenheit=(Celsius*9)/5+32;//conversion from Celsius to Fahrenheit
    
    //Outputs
    cout<<"The temperature in Fahrenheit is "<<Fahrenheit<<" degrees"<<endl;   

    return 0;
}

