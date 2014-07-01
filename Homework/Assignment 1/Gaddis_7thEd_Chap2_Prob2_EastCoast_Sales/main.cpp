/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 2 Homework
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
    float ECSalesP=0.62f;//East Coast division sales percentage
    unsigned int TotSales=4600000;//Total sales for company
    unsigned int ECRev;//Total sales for the East Coast division
    
    //Calculations
    ECRev=TotSales*ECSalesP;
    
    //Output
    cout<<"The total sales for the East Coast division this year is "<<ECRev<<endl;

    return 0;
}

