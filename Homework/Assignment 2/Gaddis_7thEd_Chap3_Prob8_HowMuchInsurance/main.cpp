/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 8 How Much Insurance
 * Created on July 2, 2014, 5:02 PM
 * How Much Insurance?
 * Many financial experts advise that property owners should insure their homes or buildings
 * for at least 80 percent of the amount it would cost to replace the structure. Write a
 * program that asks the user to enter the replacement cost of a building and then displays
 * the minimum amount of insurance he or she should buy for the property.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    unsigned int liab, insur;//Replacement cost of property, minimum insurance suggested
    float inPer=0.8f;//insurance percentage
    //Inputs
    cout<<"How much would it cost to replace the building you wish to insure?"<<endl;
    cin>>liab;
    
    //Calculations
    insur=liab*inPer;
    
    //Outputs
    cout<<"The minimum amount of insurance you should purchase for this property is $"<<insur<<endl;

    return 0;
}

