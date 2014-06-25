/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Ed Chap 2 Prob 17
 * Created on June 25, 2014, 10:29 AM
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
    unsigned short shares=600;//Number of shares bought
    float shrPrice=21.77f;//Price per share
    float commP=0.02f;//Percentage of commission
    unsigned short stckCost, commCost, totCost;//Cost of stock only, Cost of Commission only, and total cost of both stock and commission
    
    //Calculate the number of energy and citrus drinkers
    stckCost=shares*shrPrice;
    commCost=stckCost*commP;
    totCost=stckCost+commCost;
    
    //Output the results
    cout<<"Cost of Stock Only = "<<stckCost<<endl;
    cout<<"Cost of Commission Only = "<<commCost<<endl;
    cout<<"Total Cost of Stock and Commission = "<<totCost<<endl;
    
    //Exit Stage Right!
    return 0;
}

