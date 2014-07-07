/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 4 Area of Rectangle 
 * Created on July 7, 2014, 11:32 AM
 * 5. Body Mass Index
 * Write a program that calculates and displays a person s body mass index (BMI). The
 * BMI is often used to determine whether a person with a sedentary lifestyle is overweight
 * or underweight for his or her height. A person's BMI is calculated with the following
 * formula:
 * BMI = weight × 703 / height^2
 * where weight is measured in pounds and height is measured in inches. The program
 * should display a message indicating whether the person has optimal weight, is underweight,
 * or is overweight. A sedentary person's weight is considered to be optimal if his
 * or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
 * to be underweight. If the BMI value is greater than 25, the person is considered
 * to be overweight.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variable
    unsigned short weight, height;//weight in lbs, height in inches
    float BMI;//Body Mass Index
    
    //Inputs
    cout<<"Input your weight in pounds and your height in inches."<<endl;
    cin>>weight>>height;
    
    //Calculations
    BMI=(weight*703)/(height*height);
    
    //Outputs
    if(BMI<18.5){
        cout<<"You are underweight."<<endl;
    }else if(BMI>25){
        cout<<"You are overweight."<<endl;
    }else{
        cout<<"You are of optimal weight"<<endl;
    }

    return 0;
}

