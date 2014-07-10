/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: First Project
 * Created on July 10, 2014, 9:39 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    unsigned short BarRice=0;//Number of barrels of rice.
    unsigned short CasWine=0;//CosGood;//Number of casks of wine
    unsigned short PitMilk=0;//Number of pitchers of milk
    unsigned short HeadCab=0;//Number of heads of cabbage
    unsigned short BuyRice, BuyWine, BuyMilk, BuyCabb;//Number of barrels of rice, casks of wine, pitchers of milk, and heads of cabbage being bought
    unsigned short CostBar=10;//Staring cost for a barrel of rice in kg of iron ore
    unsigned short CostCas=5;//Starting cost for a cask of wine in kg of iron ore
    unsigned short CostPit=2;//Starting cost for a pitcher of milk in kg of iron ore
    unsigned short CostHead=1;//Starting cost for a head of cabbage in kg of iron ore
    unsigned int IronOre=1000;//Total kilograms of iron ore in storehouse
    
    //Beginning of Game Prompt
    cout<<"You are the Master of Irontown, but the iron will not last forever."<<endl;
    cout<<"Keep your people healthy and happy, and make Irontown sustainable to win the game."<<endl<<endl;
    
    //Game Menu
    do{
        //Output the menu and input the choice
        cout<<"Game Menu"<<endl;
        cout<<"Type 1 to work in the mine."<<endl;//Basis game mechanic where players mine iron ore so they can buy goods. Can be risky.
        cout<<"Type 2 to go to the marketplace."<<endl;//Place where players can buy more goods.
        cout<<"Type 3 to inspect the storehouse."<<endl;//Place where players can inspect the goods they already have.
        cin>>choice;
        
        //Different areas the player can go is set up as a switch statement. 
        cout<<endl;
        switch(choice){
            case '1':{
                cout<<"Main Game Here!"<<endl<<endl;//iron mine
                break;
            }case '2':{//marketplace
                cout<<"The cost of a barrel of rice is "<<CostBar<<" kg of ";
                cout<<"iron ore"<<endl;
                cout<<"The cost of a cask of wine is "<<CostCas<<" kg of ";
                cout<<"iron ore"<<endl;
                cout<<"The cost of a pitcher of milk is "<<CostPit<<" kg of ";
                cout<<"iron ore"<<endl;
                cout<<"The cost of a head of cabbage is "<<CostHead<<" kg of ";
                cout<<"iron ore"<<endl<<endl;
                
                cout<<"How many barrels of rice do you buy? Iron Ore ";
                cout<<IronOre<<"kg"<<endl;
                cin>>BuyRice;
                cout<<endl;
                if(IronOre>=BuyRice){
                    IronOre-=(BuyRice*CostBar);
                    BarRice+=(BuyRice);
                }else
                    cout<<"You do not have enough Iron Ore to buy that much rice."<<endl<<endl;
                    
                cout<<"How many casks of wine do you buy? Iron Ore ";
                cout<<IronOre<<"kg"<<endl;
                cin>>BuyWine;
                cout<<endl;
                if(IronOre>=BuyWine){
                    IronOre-=(BuyWine*CostCas);
                    CasWine+=(BuyWine);
                }else
                    cout<<"You do not have enough Iron Ore to buy that much wine."<<endl<<endl;
                    
                cout<<"How many pitchers of milk do you buy? Iron Ore ";
                cout<<IronOre<<"kg"<<endl;
                cin>>BuyMilk;
                cout<<endl;
                if(IronOre>=BuyMilk){
                    IronOre-=(BuyMilk*CostPit);
                    PitMilk+=(BuyMilk);
                }else
                    cout<<"You do not have enough Iron Ore to buy that much milk."<<endl<<endl;
                   
                cout<<"How many heads of cabbage do you buy? Iron Ore ";
                cout<<IronOre<<"kg"<<endl;
                cin>>BuyCabb;
                cout<<endl;
                if(IronOre>=BuyCabb){
                    IronOre-=(BuyCabb*CostHead);
                    HeadCab+=(BuyCabb);
                }else
                    cout<<"You do not have enough Iron Ore to buy that much cabbage."<<endl<<endl;
                
                cout<<"You have "<<IronOre<<"kg of Iron Ore remaining in your storehouse."<<endl<<endl;
                break;
            }case '3':{//storehouse
                cout<<"You have "<<IronOre<<" kilograms of iron ore."<<endl;
                cout<<"You have "<<BarRice<<" barrels of rice."<<endl;
                cout<<"You have "<<CasWine<<" casks of wine."<<endl;
                cout<<"You have "<<PitMilk<<" pitchers of milk."<<endl;
                cout<<"You have "<<HeadCab<<" heads of cabbage."<<endl<<endl;
            }default:{
                cout<<"Back to Menu!"<<endl<<endl;
            }
        };
    }while(choice>='1'&&choice<='4');

    
    //Calculations
    
    //Outputs

    return 0;
}

