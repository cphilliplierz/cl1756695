/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 4 Average Rainfall
 * Created on July 1, 2014, 1:20 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare Variables
    const char MSIZE=10;//Includes the null terminator
    char month1[MSIZE];//Character array (i.e. character string)
    char month2[MSIZE];//Character array (i.e. character string)
    char month3[MSIZE];//Character array (i.e. character string)
    unsigned short rain1, rain2, rain3, aveRain;//First month's rainfall in inches, second month's rainfall in inches, third month's rainfall in inches
    
    //Inputs
    cout<<"Input the first month."<<endl;
    cin>>month1;
    cout<<"Input the rainfall in inches for the first month"<<endl;
    cin>>rain1;
    cout<<"Input the second month."<<endl;
    cin>>month2;
    cout<<"Input the rainfall in inches for the second month"<<endl;
    cin>>rain2;
    cout<<"Input the third month."<<endl;
    cin>>month3;
    cout<<"Input the rainfall in inches for the third month"<<endl;
    cin>>rain3;
    
    //Calculations
    aveRain=(rain1+rain2+rain3)/3;

    //Outputs
    cout.precision(2);
    cout<<fixed;
    cout<<"The average amount of rainfall for the months of "<<month1<<", "<<month2<<", and "<<month3<<" is "<<static_cast<float>(aveRain)<<" inches."<<endl;
    
    //Exit stage right!
    
    
    return 0;
}