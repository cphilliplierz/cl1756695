/* File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 10 Software Sales  
 * Created on July 7, 2014, 01:34PM
 * A software company sells a package that retails for $99. Quantity discounts are given
 * according to the following table.
 * Quantity Discount
 * 10-19       20%
 * 20-49       30%
 * 50-99       40%
 * 100 or more 50%
 * Write a program that asks for the number of units sold and computes the total cost of
 * the purchase.
 * Input Validation: Make sure the number of units is greater than 0.
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
    unsigned int amount, discount, discost;//number of units bought, discount in pennies, discounted cost in pennies
    unsigned short basecost=9900;//base cost of the purchase in pennies discount
    
    //Inputs and Calculations
    cout<<"How many units of the software will you be buying?"<<endl;
    cin>>amount;
    
    if(amount<10){
        discount=0;
    }else if(amount>9&&amount<20){
        discount=basecost*0.2;
    }else if(amount>19&&amount<50){
        discount=basecost*0.3;
    }else if(amount>49&&amount<100){
        discount=basecost*0.4;
    }else if(amount>99){
        discount=basecost*0.5;
    }
    
    discost=(basecost-discount)*amount;
                
    //Output
    cout.precision(2);
    cout<<fixed;
    cout<<"The total amount of your discount is $"<<static_cast<float>(discount)/100.0<<endl;
    cout<<"The total cost of your purchase is $"<<static_cast<float>(discost)/100.0<<endl;

    return 0;
}

