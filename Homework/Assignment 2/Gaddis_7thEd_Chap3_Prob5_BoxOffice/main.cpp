/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 5 Box Office
 * Created on July 2, 2014, 12:34 PM
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
    const int MNSIZE=50;//Includes the null terminator
    char movname[MNSIZE];//name of the movie
    unsigned short adTics, chTics;//adult tickets sold, child tickets sold
    unsigned int groProf, netProf, disProf;//gross profits, net profits, distributor profits
    unsigned short adPrice=600;//adult ticket price in pennies
    unsigned short chPrice=300;//child ticket price in pennies
    float disCutP=0.75f;//distributor cut percentage
    
    //Inputs
    cout<<"What is the name of the movie?"<<endl;
    cin.getline(movname,MNSIZE);
    cout<<"How many adult tickets were sold?"<<endl;
    cin>>adTics;
    cout<<"How many child tickets were sold?"<<endl;
    cin>>chTics;
    
    //Calculations
    groProf=(adTics*adPrice)+(chTics*chPrice);
    disProf=groProf*disCutP;
    netProf=groProf-disProf;
   
    
    //Outputs
    cout.precision(2);
    cout<<fixed;
    cout<<"Movie Name: "<<movname<<endl;
    cout<<"Adult Tickets Sold: "<<adTics<<endl;
    cout<<"Child Tickets Sold: "<<chTics<<endl;
    cout<<"Gross Box Office Profit: "<<static_cast<float>(groProf)/100.0<<endl;
    cout<<"Net Box Office Profit: "<<static_cast<float>(netProf)/100.0<<endl;
    cout<<"Amount Paid to Distributor: "<<static_cast<float>(disProf)/100.0<<endl;
   
 /* 
 * Gross Box Office Profit: $ 2673.00
 * Net Box Office Profit: $ 534.60
 * Amount Paid to Distributor: $ 2138.40 
 */
    
    return 0;
}

