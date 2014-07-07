/* File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Gaddis 7th Edition Chapter 4 Problem 8 Change for the Dollar Game  
 * Created on July 7, 2014, 01:11PM
 * 9. Math Tutor
 * This is a modi cation of Programming Challenge 15 from Chapter 3. Write a program
 * that can be used as a math tutor for a young student. The program should display
 * two random numbers that are to be added, such as:
 *   247
 * + 129
 * The program should wait for the student to enter the answer. If the answer is correct,
 * a message of congratulations should be printed. If the answer is incorrect, a message
 * should be printed showing the correct answer.
 */

//System Libraries
#include <cstdlib> //Setting the Random number seed
#include <iostream>
#include <ctime> //Utilize time as input to seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
//Declare variables
    float firstNum, secondNum, userSum, realSum;//first number, second number, user input sum, real sum of the two numbers
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Input the number
    firstNum=rand()%499+1;
    secondNum=rand()%499+1;
    
    cout<<"Add these two numbers."<<endl;
    cout<<" "<<firstNum<<endl;
    cout<<"+"<<secondNum<<endl;
    cin>>userSum;
    
    //Calculations
    realSum=firstNum+secondNum;
    
    //Outputs
    if(userSum==realSum){
        cout<<"Correct!"<<endl;
    }else{
        cout<<"Try again."<<endl;
    }
    
    return 0;
}

