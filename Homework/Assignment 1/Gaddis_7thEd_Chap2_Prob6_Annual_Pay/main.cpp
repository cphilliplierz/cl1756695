/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 6 Homework
 * Created on June 26, 2014, 10:23 AM
 */

//System Libraries
#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    
    //Define Variables
    unsigned short payAmount=1700.0;//Amount of pay pay period
    unsigned short payPeriods=26;//Number of pay periods per year
    signed int annualPay;//Amount of pay per year
    
    //Calculations
    annualPay=payAmount*payPeriods;
            
    //Output
    cout<<"The total annual pay of this employee is "<<annualPay<<endl;

    return 0;
}

