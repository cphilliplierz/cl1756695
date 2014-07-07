/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 6 Mass and Weight  
 * Created on July 7, 2014, 11:32 AM
 * Scientists measure an object's mass in kilograms and its weight in newtons. If you
 * know the amount of mass that an object has, you can calculate its weight, in newtons,
 * with the following formula:
 * Weight = mass × 9.8
 * Write a program that asks the user to enter an object's mass, and then calculates and
 * displays its weight. If the object weighs more than 1,000 newtons, display a message
 * indicating that it is too heavy. If the object weighs less than 10 newtons, display a
 * message indicating that the object is too light.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    float mass, weight;//mass in kg, weight in newtons
    
    //Inputs
    cout<<"Input the mass of the object in kilograms"<<endl;
    cin>>mass;
    
    //Calculations
    weight=mass*9.8;
    
    //Outputs
    if(weight<10.0){
        cout<<"The object's weight, "<<weight<<" newtons, is too light."<<endl;
    }else if(weight>1000.0){
        cout<<"The object's weight, "<<weight<<" newtons, is too heavy."<<endl;
    }else{
        cout<<"The object's weight is "<<weight<<" newtons."<<endl;
    }

    return 0;
}

