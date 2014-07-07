/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 8 Change for the Dollar Game  
 * Created on July 7, 2014, 12:53PM
 * Create a change-counting game that gets the user to enter the number of coins
 * required to make exactly one dollar. The program should ask the user to enter the
 * number of pennies, nickels, dimes, and quarters. If the total value of the coins entered
 * is equal to one dollar, the program should congratulate the user for winning the game.
 * Otherwise, the program should display a message indicating whether the amount
 * entered was more than or less than one dollar.
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Define Variables
    unsigned short penns, nicks, dimes, quarts, total;//number of pennies, nickels, dimes, quarters, and the total value of the coins
    
    //Inputs
    cout<<"Input the number of pennies, nickels, dimes, and quarters"<<endl;
    cin>>penns>>nicks>>dimes>>quarts;
    
    //Calculations
    total=penns+(nicks*5)+(dimes*10)+(quarts*25);
    
    //Outputs
    if(total<100){
        cout<<"Sorry, the total value of your coins is less than a dollar."<<endl;
    }else if(total>100){
        cout<<"Sorry, the total value of you coins is more than a dollar."<<endl;
    }else{
        cout<<"Congratulations! You have won the Dollar Game."<<endl;
    }
    return 0;
}

