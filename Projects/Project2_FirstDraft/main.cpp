/* 
 * File:   main.cpp
 * Author: C. Phillip Lierz
 * Purpose: Project 2
 * Created on July 29, 2014, 12:38 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void showMenu(int,int,int,int,int);
void mine(int,int,int,int,int);
void marketplace(int,int,int,int,int);
void storehouse(int,int,int,int,int);
void homestead(int);

//Execution
int main(int argc, char** argv) {
    //Declare Variables
    char           choice,//menu choice
                   Confirm;//confirm Yes or No
    bool           hungry=true,//character descriptions effect production
                   unhappy=true,//character descriptions effect production
                   weak=true,//character descriptions effect production
                   unhealthy=true;//character descriptions effect production
    unsigned short BarRice=10,//Number of barrels of rice.
                   CasWine=10,//CosGood;//Number of casks of wine
                   PitMilk=10,//Number of pitchers of milk
                   HeadCab=10,//Number of heads of cabbage
                   BuyRice,//Number of barrels of rice being bought
                   BuyWine,//Number of casks of wine being bought
                   BuyMilk,//Number of pitchers of milk being bought
                   BuyCabb,//Number of heads of cabbage being bought
                   CostBar=10,//Staring cost for a barrel of rice in kg of iron ore
                   CostCas=5,//Starting cost for a cask of wine in kg of iron ore
                   CostPit=2,//Starting cost for a pitcher of milk in kg of iron ore
                   CostHead=1,//Starting cost for a head of cabbage in kg of iron ore
                   nDays;//Number of day working in the mine.
    unsigned int   IronOre=0;//Total kilograms of iron ore in storehouse

    cout<<"You are the Master of Irontown, but the iron will not last forever."<<endl;
    cout<<"Keep your people healthy and happy, and make Irontown sustainable to win the game."<<endl<<endl;
    
    showMenu(IronOre,BarRice,CasWine,PitMilk,HeadCab);//Go to Game Menu

    do{
        //Output the menu and input the choice
        
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

    return 0;
}

void showMenu(int num1,int num2,int num3,int num4,int num5)
{
    //Declare Local Variables
    char choice;//menu choice
    
    //Display menu and ask of input
    do
    {
    cout<<"Game Menu"<<endl;
    cout<<"Type 1 to work in the mine."<<endl;//Basis game mechanic where players mine iron ore so they can buy goods. Can be risky.
    cout<<"Type 2 to go to the marketplace."<<endl;//Place where players can buy more goods.
    cout<<"Type 3 to inspect the storehouse."<<endl;//Place where players can inspect the goods they already have.
    cout<<"Type 4 to go to the homestead."<<endl;//Place where players can buy a ricefield to end the game
    cout<<"Type 5 to leave the game world."<<endl;//
    cin>>choice;

        switch(choice)
        {
            case '1'://iron mine
            {
                mine(num1,num2,num3,num4,num5);
                break;
            }
        
            case '2'://marketplace
            {
                marketplace(num1,num2,num3,num4,num5);
                break;
            }
        
            case '3'://storehouse
            {
                storehouse(num1,num2,num3,num4,num5);
                break;
            }

            case '4'://homestead
            {
                homestead(num1);
                break;
            }
            default:
            {
                cout<<"Thank you for playing Master of Irontown!"<<endl<<endl;
            }
        }
    }
    while(choice>='1'&&choice<='4');
}

void mine(int num1,int num2,int num3,int num4,int num5)
{
    
}

void marketplace(int num1,int num2,int num3,int num4,int num5)
{
    //Define Local Variables
    unsigned short CostBar=10,
                   CostCas=5,
                   CostPit=2,
                   CostHead=1,
                   BuyRice,//Number of barrels of rice being bought
                   BuyWine,//Number of casks of wine being bought
                   BuyMilk,//Number of pitchers of milk being bought
                   BuyCabb;//Number of heads of cabbage being bought
    
    //Display prices
    cout<<"The cost of a barrel of rice is "<<CostBar<<" kg of ";
    cout<<"iron ore"<<endl;
    cout<<"The cost of a cask of wine is "<<CostCas<<" kg of ";
    cout<<"iron ore"<<endl;
    cout<<"The cost of a pitcher of milk is "<<CostPit<<" kg of ";
    cout<<"iron ore"<<endl;
    cout<<"The cost of a head of cabbage is "<<CostHead<<" kg of ";
    cout<<"iron ore"<<endl<<endl;
    
    //Buy food
    cout<<"How many barrels of rice do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyRice;
    cout<<endl;
    if(num1>=(BuyRice*CostBar))
    {
        num1-=(BuyRice*CostBar);
        num2+=(BuyRice);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much rice."<<endl<<endl;
                    
    cout<<"How many casks of wine do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyWine;
    cout<<endl;
    if(num1>=(BuyWine*CostCas))
    {
        num1-=(BuyWine*CostCas);
        num3+=(BuyWine);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much wine."<<endl<<endl;
                    
    cout<<"How many pitchers of milk do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyMilk;
    cout<<endl;
    if(num1>=(BuyMilk*CostPit))
    {
        num1-=(BuyMilk*CostPit);
        num4+=(BuyMilk);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much milk."<<endl<<endl;
                   
    cout<<"How many heads of cabbage do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyCabb;
    cout<<endl;
    if(num1>=(BuyCabb*CostHead))
    {
        num1-=(BuyCabb*CostHead);
        num5+=(BuyCabb);
    }
    
    else
    cout<<"You do not have enough Iron Ore to buy that much cabbage."<<endl<<endl;    
    
    cout<<"You have "<<num1<<"kg of Iron Ore remaining in your storehouse."<<endl<<endl;
}

void storehouse(int num1,int num2,int num3,int num4,int num5)
{
    //Pass values to function and Output
    cout<<"You have "<<num1<<" kilograms of iron ore."<<endl;
    cout<<"You have "<<num2<<" barrels of rice."<<endl;
    cout<<"You have "<<num3<<" casks of wine."<<endl;
    cout<<"You have "<<num4<<" pitchers of milk."<<endl;
    cout<<"You have "<<num5<<" heads of cabbage."<<endl<<endl;
}

void homestead(int num1)
{
    //Define Local Variables
    char confirm;//confirm yes or no
    
    //Evaluate and Output
    if(num1<1000)
        cout<<"You do not have enough money to buy a rice field. Return when you have 1000 KG of Iron Ore"<<endl<<endl;
    else
    {
        cout<<"Would you like to buy a rice field and win the game? Y N"<<endl;
        cin>>confirm;
        if(confirm=='Y'||confirm=='y')
            cout<<"Congratulations. You have made Irontown sustainable."<<endl<<endl;
    }
}

