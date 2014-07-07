/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 4 Area of Rectangle 
 * Created on July 7, 2014, 11:13 AM
 * The area of a rectangle is the rectangle's length times its width. Write a program that
 * asks for the length and width of two rectangles. The program should tell the user
 * which rectangle has the greater area, or if the areas are the same.
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
    unsigned int length1, length2, width1, width2;//lengths of the first and second rectangle, and widths of the first and second rectangles
    unsigned int area1, area2;//Area of the first and second rectangles
    //Inputs
    cout<<"Input the length and width of the first rectangle."<<endl;
    cin>>length1>>width1;

    cout<<"Input the length and width of the second rectangle."<<endl;
    cin>>length2>>width2;
    
    //Calculations
    area1=length1*width1;
    area2=length2*width2;
    
    //Outputs
    if(area1>area2){
        cout<<"The area of the first rectangle, "<<area1<<", is greater";
        cout<<" than the area of the second rectangle, "<<area2<<"."<<endl;
    }else if(area1==area2){
        cout<<"The area of the first rectangle, "<<area1<<", is equivalent";
        cout<<" to the area of the second rectangle, "<<area2<<"."<<endl;
    }else{
        cout<<"The area of the first rectangle, "<<area1<<", is lesser";
        cout<<" than the area of the second rectangle, "<<area2<<"."<<endl;
    }

    return 0;
}

