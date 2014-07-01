/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 1 Miles Per Gallon
 * Created on July 1, 2014, 9:58 AM
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
    unsigned short GPT, MPT, MPG;//Gallons per tank, Miles per tank, Miles per gallon
    
    //Inputs
    cout<<"How many gallons of fuel does your vehicle's gastank hold?"<<endl;
    cin>>GPT;
    cout<<"How many miles will your vehicle drive with a full tank of fuel?"<<endl;
    cin>>MPT;
        
    //Calculations
    MPG=MPT/GPT;
    
    //Outputs
    cout<<"Your vehicle's miles per gallon (MPG) is "<<MPG<<endl;
        
    return 0;
}