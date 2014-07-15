/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Assignment 4 Gaddis 7th Edition Chapter 5 Problems 1-10
 * Created on July 15, 2014, 10:29 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    cout<<"Hello!\nThis is Assignment 4."<<endl;
    cout<<"\nProblem One: Sum of Numbers."<<endl;
    
    //Declare Variables
    unsigned int posint;//Positive integer input by user
    unsigned int sumint=0;//Sum of the posint and all its subordinate integers
    
    //Inputs
    cout<<"Input a positive integer"<<endl;
    cin>>posint;
    
    //Calculations
    for(int count=0; count<=posint; count++)
    {
        sumint+=count;
    }
    
    //Outputs
    cout<<"The sum of the positive integer you inputed and all the positive ";
    cout<<"integers of lesser value to it is "<<sumint<<"."<<endl;
    
    cout<<"\nProblem Two: Characters for the ASCII Codes."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    cout<<"\nProblem Three: Ocean Levels."<<endl;
    //Declare Variables
    unsigned short FirstYear=1,//First year of Ocean Rise recorded
    LastYear=25;//Last year of Ocean Rise recorded
    unsigned short OceanRise=FirstYear;//Counter
    
    //Calculations and Output
    cout<<"Years         Ocean Rise"<<endl;
    cout<<"------------------------"<<endl;
    while (OceanRise<=LastYear)
    {
    cout<<OceanRise<<"\t\t"<<(OceanRise*1.5)<<" mm"<<endl;
    OceanRise++; //Increment the counter.
    }  
    
    cout<<"\nProblem Four: Calories Burned"<<endl;
    //Declare Variables
    unsigned short FirstIncr=10,//First increment of time while exercising
    LastIncr=30;//Last increment of time while exercising
    unsigned short Minutes=FirstIncr;//Counter
    
    //Calculations and Output
    cout << "Minutes        Calories Burned"<<endl;
    cout << "------------------------------"<<endl;
    while (Minutes<=LastIncr)
    {
    cout<<Minutes<<"\t\t"<<(Minutes*3.9)<<" calories"<<endl;
    Minutes+=5; //Increment the counter.
    }  

    cout<<"\nProblem Five: Membership Fees Increase."<<endl;
    //Declare Variables
    unsigned short FirstRise=1,//First increment of time while exercising
    LastRise=6,//Last increment of time while exercising
    MemFee=2500,//Membership fee
    FeeIncr;//Fee Increase
    unsigned short Period=FirstRise;//Counter
    
    //Calculations and Output
    cout << "Year          Fee Increase     New Annual Fee"<<endl;
    cout << "---------------------------------------------"<<endl;
    while (Period<=LastRise)
    {
    cout<<Period<<"\t\t$"<<(MemFee*0.06)<<"\t\t$"<<(MemFee+(MemFee*0.06))<<endl;
    Period++; //Increment the counter.
    MemFee+=(MemFee*0.06);
    }  

    cout<<"\nProblem Six: Distance Traveled."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    cout<<"\nProblem Seven: Pennies for Pay."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    cout<<"\nProblem Eight: Math Tutor."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    cout<<"\nProblem Nine: Horel Occupancy."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    cout<<"\nProblem Ten: Average Rainfall."<<endl;
    
    //Declare Variables
    
    //Inputs
    
    //Calculations
    
    //Outputs
    
    return 0;
}

