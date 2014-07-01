/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 2 Problem 8 Homework
 * Created on June 26, 2014, 10:23 AM
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
    unsigned short ItmOne=1295;//Cost of item one in pennies
    unsigned short ItmTwo=2495;//Cost of item two in pennies
    unsigned short ItmThree=695;//Cost of item three in pennies
    unsigned short ItmFour=1495;//Cost of item four in pennies
    unsigned short ItmFive=395;//Cost of item five in pennies
    float salesTxP=0.06f;//Sales Tax percentage
    unsigned int subTot, sTax, TotCost;//Cost of the sale before taxes, cost of sales tax, total cost of the sale 

    //Calculations
    subTot=ItmOne+ItmTwo+ItmThree+ItmFour+ItmFive;
    sTax=subTot*salesTxP;
    TotCost=subTot+sTax;
            
    //Output
    cout.precision(2);
    cout<<fixed;
    cout<<"Item One costs $"<<static_cast<float>(ItmOne)/100.0<<endl;
    cout<<"Item Two costs $"<<static_cast<float>(ItmTwo)/100.0<<endl;
    cout<<"Item Three costs $"<<static_cast<float>(ItmThree)/100.0<<endl;
    cout<<"Item Four costs $"<<static_cast<float>(ItmFour)/100.0<<endl;
    cout<<"Item Five costs $"<<static_cast<float>(ItmFive)/100.0<<endl;
    cout<<"The subtotal of the sale is $"<<static_cast<float>(subTot)/100.0<<endl;
    cout<<"The cost of the sales tax is $"<<static_cast<float>(sTax)/100.0<<endl;
    cout<<"The total cost of the sale is $"<<static_cast<float>(TotCost)/100.0<<endl;

    return 0;
}

