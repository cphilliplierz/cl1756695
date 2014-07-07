/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 1 Minimum Maximum 
 * Created on July 7, 2014, 10:06 AM
 * Write a program that asks the user to enter two numbers. The program should use the
 * conditional operator to determine which number is the smaller and which is the larger.
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
    int A, B;//First number and second number
    
    //Inputs
    cout<<"Input the first number"<<endl;
    cin>>A;
    
    cout<<"Input the second number"<<endl;
    cin>>B;
    
    //Calculations and Outputs
    if(A>B){
        cout<<"The first number, "<<A<<", is larger than the second number, "<<B<<"."<<endl;
    }else if(A==B){
        cout<<"The first number, "<<A<<", is equivalent to the second number, "<<B<<"."<<endl;
    }else{
        cout<<"The first number, "<<A<<", is smaller than the second number, "<<B<<"."<<endl;
    }

    return 0;
}

