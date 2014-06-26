/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 3 Homework
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
    float StSaTxP=0.04f;//Percentage of State Sales Tax
    float CoSaTxP=0.02f;//Percentage of County Sales Tax
    unsigned short CostPur=5200;//Cost of purchase in pennies
    unsigned short StSalesTx, CoSalesTx, TotWTx;//State Sales Tax on Purchase, County Sales Tax on Purchase, and total cost with taxes
    
    //Calculations
    StSalesTx=CostPur*StSaTxP;
    CoSalesTx=CostPur*CoSaTxP;
    TotWTx=CostPur+StSalesTx+CoSalesTx;
    
    //Output
    cout<<"The total cost of the purchase with taxes in pennies is "<<TotWTx<<endl;
    
    return 0;
}

