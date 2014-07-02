/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 6 How Many Widgets
 * Created on July 2, 2014, 1:23 PM
 * How Many Widgets?
 * The Yukon Widget Company manufactures widgets that weigh 9.2 pounds each.
 * Write a program that calculates how many widgets are stacked on a pallet, based on
 * the total weight of the pallet. The program should ask the user how much the pallet
 * weighs by itself and with the widgets stacked on it. It should then calculate and display
 * the number of widgets stacked on the pallet.
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
    float widget=9.2f;//weight of one widget in lbs
    unsigned short MTpallet, FLpallet, numWidg;//weight of the empty and full pallets in lbs, number of widgets
    
    //Inputs
    cout<<"What is the weight in pounds of the empty pallet and the full pallet"<<endl;
    cin>>MTpallet>>FLpallet;
    
    //Calculations
    numWidg=(FLpallet-MTpallet)/widget;
    
    //Outputs
    cout<<"The number of widgets on the pallet is "<<numWidg<<endl;

    return 0;
}

