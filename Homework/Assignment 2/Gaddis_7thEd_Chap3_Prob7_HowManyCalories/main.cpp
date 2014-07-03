/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 7 How Many Calories
 * Created on July 2, 2014, 4:48 PM
 * How Many Calories?
 * A bag of cookies holds 40 cookies. The calorie information on the bag claims that
 * there are 10 servings in the bag and that a serving equals 300 calories. Write a program
 * that asks the user to input how many cookies he or she actually ate and then
 * reports how many total calories were consumed.
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
unsigned short CNVSRV2CK=(300*10)/40;//Conversion serving size to single cookie

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    unsigned short numCk, totCal;//number of cookies eaten, total calories
    
    //Inputs
    cout<<"How many cookies did you eat?"<<endl;
    cin>>numCk;
    
    //Calculations
    totCal=numCk*CNVSRV2CK;
    
    //Output
    cout<<"You consumed "<<totCal<<" total calories"<<endl;

    return 0;
}

