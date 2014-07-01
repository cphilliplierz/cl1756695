/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 4 Homework
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
    unsigned int Bill=4450;//Cost of restaurant bill in pennies
    float TaxP=0.0675f;//Tax on the bill
    float TipP=0.15f;//Tip on the bill
    unsigned int TaxOnBill, TipOnBill, TotBill;//Tax on the bill, tip on the bill, total cost of the bill
    
    //Calculations
    TaxOnBill=Bill*TaxP;
    TipOnBill=Bill*TipP;
    TotBill=Bill+TaxOnBill+TipOnBill;
            
    //Output
    cout<<"The total cost of the bill in pennies is "<<TotBill<<endl;

    return 0;
}

