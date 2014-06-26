/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 5 Homework
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
    unsigned char A=28;
    unsigned char B=32;
    unsigned char C=37;
    unsigned char D=24;
    unsigned char E=33;
    unsigned short sum, average;//Sum of the variables, and average of the variables
    
    //Calculations
    sum=A+B+C+D+E;
    average=sum/5;
            
    //Output
    cout<<"The sum of the five variables is "<<sum<<endl;
    cout<<"The average of the five variables is "<<average<<endl;

    return 0;
}

