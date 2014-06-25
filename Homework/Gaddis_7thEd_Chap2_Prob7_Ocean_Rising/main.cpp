/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Ed Chap 2 Prob 7 Homework
 * Created on June 25, 2014, 1:43 PM
 */

//System Library
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare and initialize variables
    float mmPerYear=1.5f;
    unsigned short NumHiFiv, NumHiSev, NumHiTen;
    
    //Calculate the number of energy and citrus drinkers
    NumHiFiv=mmPerYear*5;
    NumHiSev=mmPerYear*7;
    NumHiTen=mmPerYear*10;
    
    //Output the results
    cout<<"Number of millimeters the oceans have risen in five years = "<<NumHiFiv<<endl;
    cout<<"Number of millimeters the oceans have risen in seven years = "<<NumHiSev<<endl;
    cout<<"Number of millimeters the oceans have risen in ten years = "<<NumHiTen<<endl;
    
    //Exit Stage Right!
    return 0;
}