/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 3 Test Averages
 * Created on July 2, 2014, 12:22 PM
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
    //Declare Variables
    float test1, test2, test3, test4, test5;//test scores for five tests 
    float testAve;
    
    //Inputs
    cout<<"Input score of the first test."<<endl;
    cin>>test1;
    
    cout<<"Input score of the second test."<<endl;
    cin>>test2;
    
    cout<<"Input score of the third test."<<endl;
    cin>>test3;
    
    cout<<"Input score of the fourth test."<<endl;
    cin>>test4;
    
    cout<<"Input score of the fifth test."<<endl;
    cin>>test5;
    
    //Calculations
    testAve=(test1+test2+test3+test4+test5)/5;
    
    //Outputs
    cout.precision(2);
    cout<<fixed;
    cout<<"The average of the five test scores is "<<static_cast<float>(testAve)<<endl;

    return 0;
}

