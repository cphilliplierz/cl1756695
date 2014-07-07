/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 6 Time Calculator  
 * Created on July 7, 2014, 12:22PM
 * Write a program that asks the user to enter a number of seconds.
 * There are 60 seconds in a minute. If the number of seconds entered by the user is
 * greater than or equal to 60, the program should display the number of minutes in
 * that many seconds.
 * There are 3,600 seconds in an hour. If the number of seconds entered by the user
 * is greater than or equal to 3,600, the program should display the number of hours
 * in that many seconds.
 * There are 86,400 seconds in a day. If the number of seconds entered by the user is
 * greater than or equal to 86,400, the program should display the number of days
 * in that many seconds.
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
    unsigned int secs, mins, hrs, days;//number of seconds, minutes, hours, and days
    
    //Inputs
    cout<<"Input the number of seconds."<<endl;
    cin>>secs;
    
    //Calculations
    mins=secs/60;
    hrs=secs/3600;
    days=secs/86400;
    
    //Outputs
    cout<<"The number of seconds is "<<secs<<", ";
    if(secs<3600){
        cout<<"and the number of minutes is "<<mins<<"."<<endl;
    }else if(secs<8400){
        cout<<"the number of minutes is "<<mins<<", and the number of";
        cout<<" hours is "<<hrs<<"."<<endl;
    }else{
        cout<<"the number of minutes is "<<mins<<", the number of";
        cout<<" hours is "<<hrs<<", and the number of days is "<<days;
        cout<<"."<<endl;
    }

    return 0;
}

