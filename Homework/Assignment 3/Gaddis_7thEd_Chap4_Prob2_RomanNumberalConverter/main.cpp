/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 2 Roman Numeral Converter 
 * Created on July 7, 2014, 10:29 AM
 * Write a program that asks the user to enter a number within the range of 1 through
 * 10. Use a switch statement to display the Roman numeral version of that number.
 * Input Validation: Do not accept a number less than 1 or greater than 10.
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
    short RomNum;//Number to be converted

    //Inputs
    cout<<"Input a number 1 to 10"<<endl;
    cin>> RomNum;
    
    //Calculations and Outputs
    cout<<"The Roman Numeral for the number, "<<RomNum<<", is ";
    if(RomNum==1){
        cout<<"I"<<endl;
    }else if(RomNum==2){
        cout<<"II"<<endl;
    }else if(RomNum==3){
        cout<<"III"<<endl;
    }else if(RomNum==4){
        cout<<"IV"<<endl;
    }else if(RomNum==5){
        cout<<"V"<<endl;
    }else if(RomNum==6){
        cout<<"VI"<<endl;
    }else if(RomNum==7){
        cout<<"VII"<<endl;
    }else if(RomNum==8){
        cout<<"VIII"<<endl;
    }else if(RomNum==9){
        cout<<"IX"<<endl;
    }else if(RomNum==10){
        cout<<"X"<<endl;
    }else if(RomNum<1||RomNum>10){
        cout<<"unlisted here. Re-enter a number between 1 to 10"<<endl;
    }

    return 0;
}

