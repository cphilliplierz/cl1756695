/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 3 Problem 9 Automobile Costs
 * Created on July 2, 2014, 5:02 PM
 * Automobile Costs
 * Write a program that asks the user to enter the monthly costs for the following
 * expenses incurred from operating his or her automobile: loan payment, insurance,
 * gas, oil, tires, and maintenance. The program should then display the total monthly
 * cost of these expenses, and the total annual cost of these expenses.
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
    unsigned short loanP, insur, gas, oil, tires, maint;//cost of loan payment, insurance, gas, oil, tires, and maintenance
    unsigned int totMon, totAnn;//Total monthly and annual costs for the vehicle
    
    //Inputs
    cout<<"How much does it cost each month for your vehicle's loan payment?"<<endl;
    cin>>loanP;
    
    cout<<"How much does it cost each month for your vehicle's insurance?"<<endl;
    cin>>insur;
    
    cout<<"How much does it cost each month for your vehicle's gas?"<<endl;
    cin>>gas;
    
    cout<<"How much does it cost each month for your vehicle's oil?"<<endl;
    cin>>oil;
    
    cout<<"How much does it cost each month for your vehicle's tires?"<<endl;
    cin>>tires;
    
    cout<<"How much does it cost each month for your vehicle's maintenance?"<<endl;
    cin>>maint;
    
    //Calculations
    totMon=loanP+insur+gas+oil+tires+maint;
    totAnn=totMon*12;
    
    //Outputs
    cout<<"The total monthly cost of operating your vehicle is $"<<totMon<<endl;
    cout<<"The total annual cost of operating your vehicle is $"<<totAnn<<endl;
    return 0;
}
