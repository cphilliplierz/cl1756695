/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 2 Roman Numeral Converter 
 * Created on July 7, 2014, 10:54 AM
 * The date June 10, 1960 is special because when we write it in the following format,
 * the month times the day equals the year.
 * 6/10/60
 * Write a program that asks the user to enter a month (in numeric form), a day, and a
 * two-digit year. The program should then determine whether the month times the day
 * is equal to the year. If so, it should display a message saying the date is magic. Otherwise
 * it should display a message saying the date is not magic.
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
    unsigned short Month, Day, Year;//Numerical value of the month, day, and year
    
    //Inputs
    cout<<"Input the month as 1 to 12."<<endl;
    cin>>Month;
    
    cout<<"Input the day as 1 to 31."<<endl;
    cin>>Day;
    
    cout<<"Input the year as 00 to 99."<<endl;
    cin>>Year;
    
    //Calculations and Outputs
    if(Month*Day==Year){
        cout<<"The date "<<Month<<"/"<<Day<<"/"<<Year<<" is a magic date."<<endl;
    }else{
        cout<<"The date "<<Month<<"/"<<Day<<"/"<<Year<<" is a not magic date."<<endl;
    }

return 0;
}

