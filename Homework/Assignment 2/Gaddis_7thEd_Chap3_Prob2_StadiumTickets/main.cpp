/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 2 Stadium Tickets
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
    unsigned short ClassA=1500;//Price of Class A tickets for a softball game
    unsigned short ClassB=1200;//Price of Class B tickets for a softball game
    unsigned short ClassC=900;//Price of Class C tickets for a softball game
    unsigned short NumA, NumB, NumC;//Number of Class A tickets sold, number of Class B tickets sold, number of Class C tickets sold
    unsigned int InGen;//Income generated from ticket sales
    
    //Inputs
    cout<<"How many Class A tickets were sold for the softball game?"<<endl;
    cin>>NumA;
    cout<<"How many Class B tickets were sold for the softball game?"<<endl;
    cin>>NumB;
    cout<<"How many Class C tickets were sold for the softball game?"<<endl;
    cin>>NumC;

    //Calculations
    InGen=(ClassA*NumA)+(ClassB*NumB)+(ClassC*NumC);
    
    //Outputs
    cout.precision(2);
    cout<<fixed;
    cout<<"The total income generated from softball game ticket sales was $"<<static_cast<float>(InGen)/100.0<<endl;
        
    return 0;
}