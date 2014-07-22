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
    char choice;//menu choice
    unsigned short BarRice=10;//Number of barrels of rice.
    unsigned short CasWine=10;//CosGood;//Number of casks of wine
    unsigned short PitMilk=10;//Number of pitchers of milk
    unsigned short HeadCab=10;//Number of heads of cabbage
    unsigned short BuyRice, BuyWine, BuyMilk, BuyCabb;//Number of barrels of rice, casks of wine, pitchers of milk, and heads of cabbage being bought
    unsigned short CostBar=10;//Staring cost for a barrel of rice in kg of iron ore
    unsigned short CostCas=5;//Starting cost for a cask of wine in kg of iron ore
    unsigned short CostPit=2;//Starting cost for a pitcher of milk in kg of iron ore
    unsigned short CostHead=1;//Starting cost for a head of cabbage in kg of iron ore
    unsigned int IronOre=0;//Total kilograms of iron ore in storehouse
    char Confirm;//confirm Yes or No
    bool hungry=true,unhappy=true,weak=true,unhealthy=true;//character descriptions effect production
    unsigned short Productivity;//Number of KG of Iron Ore the worker will mine in a day
    unsigned short nDays;//Number of day working in the mine.
    
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
        cout<<"Type 4 to go to the homestead."<<endl;//Place where players can buy a ricefield to end the game
        cout<<"Type 5 to leave the game world."<<endl;//
        cin>>choice;
        
        //Different areas the player can go is set up as a switch statement. 
        cout<<endl;
        switch(choice){
            case '1':{//iron mine
                cout<<"Would you like to work in the mine? Y N"<<endl;
                cin>>Confirm;
                if (Confirm=='Y'||Confirm=='y'){
                while (BarRice>0){
                    IronOre+=12;
                    BarRice--;
                    while (CasWine>0){
                        IronOre+=8;
                        CasWine--;
                        while (PitMilk>0){
                            IronOre+=5;
                            PitMilk--;
                        }while (HeadCab>0){
                            IronOre+=3;
                            HeadCab--;
                        }
                    }while (PitMilk>0){
                        IronOre+=5;
                        PitMilk--;
                        while (HeadCab>0){
                            IronOre+=3;
                            HeadCab--;
                        }
                    }while (HeadCab>0){
                        IronOre+=3;
                        HeadCab--;
                    }
                }while (CasWine>0){
                    IronOre+=8;
                    CasWine--;
                    while (PitMilk>0){
                        IronOre+=5;
                        PitMilk--;
                        while (HeadCab>0){
                            IronOre+=3;
                            HeadCab--;
                        }
                    }while (HeadCab>0){
                        IronOre+=3;
                        HeadCab--;
                    }
                }while (PitMilk>0){
                    IronOre+=5;
                    PitMilk--;
                    while (HeadCab>0){
                        IronOre+=3;
                        HeadCab--;
                    }
                }while (HeadCab>0){
                    IronOre+=3;
                    HeadCab--;
                }cout<<"You have "<<IronOre<<" KG of Iron Ore."<<endl<<endl;
                if (BarRice==0){
                    hungry=true;
                }else{
                    hungry=false;
                }if (CasWine==0){
                    unhappy=true;
                }else{
                    unhappy=false;
                }if (PitMilk==0){
                    weak=true;
                }else{
                    weak=false;
                }if (HeadCab==0){
                    unhealthy=true;
                }else{
                    unhealthy=false;
                }if(hungry==true){
                    cout<<"Your workers are hungry. Buy rice to improve productivity."<<endl<<endl;
                    if (unhappy==true){
                        cout<<"Your workers are unhappy. Buy wine to improve productivity."<<endl<<endl;
                            if (weak==true){
                                cout<<"Your workers are weak. Buy milk to improve productivity."<<endl<<endl;
                                if (unhealthy==true){
                                    cout<<"Your workers are unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                                }else{
                                    break;
                                }
                            }else if (unhealthy==true){
                                cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                            }else {
                                break;
                            }
                    }else if (weak==true){
                        cout<<"Your worker is weak. Buy milk to improve productivity."<<endl<<endl;
                    }else if (unhealthy==true){
                        cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                    }else {
                        break;
                }
                }else if (unhappy==true){
                    cout<<"Your worker is unhappy. Buy wine to improve productivity."<<endl<<endl;
                    if (weak==true){
                        cout<<"Your worker is weak. Buy milk to improve productivity."<<endl<<endl;
                    }else if (unhealthy==true){
                        cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                    }else {
                        cout<<"Your productivity is good!"<<endl<<endl;
                    }
                }else if (weak==true){
                    cout<<"Your worker is weak. Buy milk to improve productivity."<<endl<<endl;
                    if (unhealthy==true){
                        cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                    }else {
                        cout<<"Your productivity is good!"<<endl<<endl;
                    }
                }else if (unhealthy==true){
                    cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
                    cout<<"Your productivity is good!"<<endl<<endl;
                }else {
                    cout<<"Your productivity is great!!!"<<endl<<endl;
                }
                }else {
                    break;
                }
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
                break;
            }case '4':{//Homestead
                if(IronOre<999){
                    cout<<"You do not have enough money to buy a rice field. ";
                    cout<<"Return when you have 1000 KG of Iron Ore"<<endl<<endl;
                }else{
                    cout<<"Would you like to buy a rice field and win the game? Y N"<<endl;
                    cin>>Confirm;
                    if(Confirm=='Y'||Confirm=='y'){
                        cout<<"Congradulations. You have made Irontown sustainable."<<endl<<endl;;
                    }else{
                        break;
                    }
                }
                break;
            }default:{
                cout<<"Thank you for playing Master of Irontown!"<<endl<<endl;
            }
        };
    }while(choice>='1'&&choice<='4');
    return 0;
}