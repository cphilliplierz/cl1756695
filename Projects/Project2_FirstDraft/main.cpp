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

//Global Variables
unsigned short BarRice=10,CasWine=10,PitMilk=10,HeadCab=10;//Number of barrels of rice, casks of wine, pitchers of milk, and heads of cabbage
unsigned int IronOre=0;//Total kilograms of iron ore in storehouse

//Function Prototypes
void mine(int,int,int,int,int);
void marketplace(int,int,int,int,int);
void ricemarket (int,int);
void winemarket (int,int);
void milkmarket (int,int);
void cabbagemarket ();
void storehouse(int,int,int,int,int);
void homestead(int);
void ChnginIron(int);
void ChnginRice(int);
void ChnginWine(int);
void ChnginMilk(int);
void ChnginCabb(int);

//Execution
int main(int argc, char** argv) {
    //Declare Local Variables
    char choice;//menu choice
    
    cout<<"You are the Master of Irontown, but the iron will not last forever."<<endl;
    cout<<"Keep your people healthy and happy, and make Irontown sustainable to win the game."<<endl<<endl;
    
    //Display menu and ask for input
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
                mine(IronOre,BarRice,CasWine,PitMilk,HeadCab);
                break;
            }
        
            case '2'://marketplace
            {
                marketplace(IronOre,BarRice,CasWine,PitMilk,HeadCab);
                break;
            }
        
            case '3'://storehouse
            {
                storehouse(IronOre,BarRice,CasWine,PitMilk,HeadCab);
                break;
            }

            case '4'://homestead
            {
                homestead(IronOre);
                break;
            }
            default:
            {
                cout<<"Thank you for playing Master of Irontown!"<<endl<<endl;
            }
        }
    }
    while(choice>='1'&&choice<='4');
    return 0;
}

void mine(int num1,int num2,int num3,int num4,int num5)
{
    //Define local variables
    char confirm;//confirm yes or no
    bool hungry,unhappy,weak,unhealthy;//worker descriptions that effect production 
    cout<<"Would you like to work in the mine? Y N"<<endl;
    cin>>confirm;
    if (confirm=='Y'||confirm=='y')
    {
        while (num2>0)
        {
            num1+=12;
            num2--;
            while (num3>0)
            {
                num1+=8;
                num3--;
                while (num4>0)
                {
                    num1+=5;
                    num4--;
                    while (num5>0)
                    {
                        num1+=3;
                        num5--;
                    }
                }
            }
        }
        while (num3>0)
        {
            num1+=8;
            num3--;
            while (num4>0)
            {
                num1+=5;
                num4--;
                while (num5>0)
                {
                    num1+=3;
                    num5--;
                }
            }
        }
        while (num4>0)
        {
            num1+=5;
            num4--;
            while (num5>0)
            {
                num1+=3;
                num5--;
            }
        }
        while (num5>0)
        {
            num1+=3;
            num5--;
        }
    }
    
    ChnginIron(num1);
    ChnginRice(num2);
    ChnginWine(num3);
    ChnginMilk(num4);
    ChnginCabb(num5);
    
    cout<<"You have "<<num1<<" kilograms of iron ore."<<endl<<endl;
    
    hungry=(num2==0);
    unhappy=(num3==0);
    weak=(num4==0);
    unhealthy=(num5==0);
                
    if(hungry==true)
    {
        cout<<"Your workers are hungry. Buy rice to improve productivity."<<endl<<endl;
        if (unhappy==true)
        {
            cout<<"Your workers are unhappy. Buy wine to improve productivity."<<endl<<endl;
            if (weak==true)
            {
                cout<<"Your workers are weak. Buy milk to improve productivity."<<endl<<endl;
                if (unhealthy==true)
                    cout<<"Your workers are unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
            }
        }
    }
    else if (unhealthy==true)
    {
        cout<<"Your workers are unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
        if (weak==true)
        {
            cout<<"Your workers is weak. Buy milk to improve productivity."<<endl<<endl;
            if (unhealthy==true)
                cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
        }
    }
    else if (weak==true)
    {
        cout<<"Your worker is weak. Buy milk to improve productivity."<<endl<<endl;
        if (unhealthy==true)
            cout<<"Your worker is unhealthy. Buy cabbage to improve productivity."<<endl<<endl;
    }
}

void marketplace (int num1,int num2,int num3,int num4,int num5)
{
    //define local variables
    char choice;//local menu choice
    do
    {
        cout<<"Game Menu"<<endl;
        cout<<"Type 1 to buy rice."<<endl;//goes to rice buying function
        cout<<"Type 2 to buy wine."<<endl;//goes to wine buying function
        cout<<"Type 3 to buy milk."<<endl;//goes to milk buying function
        cout<<"Type 4 to buy cabbage."<<endl;//goes to cabbage buying function
        cout<<"Type 5 to leave the marketplace."<<endl;//leaves the marketplace
        cin>>choice;

        switch(choice)
        {
            case '1':
            {
                ricemarket(num1,num2);
                break;
            }
        
            case '2':
            {
                winemarket(num1,num3);
                break;
            }
        
            case '3':
            {
                milkmarket(num1,num4);
                break;
            }

            case '4':
            {
                cabbagemarket(num1,num5);
                break;
            }
            default:
            {
                cout<<"Thank you for shopping in the marketplace!"<<endl<<endl;
            }
        }
    }
    while(choice>='1'&&choice<='4');
}

void ricemarket(int num1,int num2)
{
    //Declare local variables
    unsigned short BuyRice;
    unsigned short CostBar=10;
    
    //Display prices
    cout<<"The cost of a barrel of rice is "<<CostBar<<" kg of iron ore."<<endl<<endl;
    
    //Buy food
    cout<<"How many barrels of rice do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyRice;
    cout<<endl;
    if(num1>=(BuyRice*CostBar))
    {
        IronOre-=(BuyRice*CostBar);
        BarRice+=(BuyRice);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much rice."<<endl<<endl;
}

void winemarket(int num1,int num3)
{
    //Declare local variables
    unsigned short BuyWine;
    unsigned short CostCas=5;
    
    //Display prices
    cout<<"The cost of a cask of wine is "<<CostCas<<" kg of iron ore"<<endl<<endl;
    
    //Buy food
    cout<<"How many casks of wine do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyWine;
    cout<<endl;
    if(num1>=(BuyWine*CostCas))
    {
        IronOre-=(BuyWine*CostCas);
        CasWine+=(BuyWine);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much wine."<<endl<<endl;
}

void milkmarket(int num1,int num4)
{
    //Declare local variables
    unsigned short BuyMilk;
    unsigned short CostPit=2;
    
    //Display prices
    cout<<"The cost of a pitcher of milk is "<<CostPit<<" kg of iron ore"<<endl<<endl;
    
    //Buy food
    cout<<"How many pitchers of milk do you buy? Iron Ore ";
    cout<<num1<<"kg"<<endl;
    cin>>BuyMilk;
    cout<<endl;
    if(num1>=(BuyMilk*CostPit))
    {
        IronOre-=(BuyMilk*CostPit);
        PitMilk+=(BuyMilk);
    }
    
    else
        cout<<"You do not have enough Iron Ore to buy that much milk."<<endl<<endl;
}

void cabbagemarket()
{
    //Declare local variables
    unsigned short BuyCabb;
    unsigned short CostHead=1;
    
    //Display prices
    cout<<"The cost of a head of cabbage is "<<CostHead<<" kg of iron ore"<<endl<<endl;
    
    //Buy food
    cout<<"How many heads of cabbage do you buy? Iron Ore ";
    cout<<IronOre<<"kg"<<endl;
    cin>>BuyCabb;
    cout<<endl;
    if(num1>=(BuyCabb*CostHead))
    {
        IronOre-=(BuyCabb*CostHead);
        HeadCab+=(BuyCabb);
    }
    
    else
    cout<<"You do not have enough Iron Ore to buy that much cabbage."<<endl<<endl;
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

void ChnginIron(int num1)
{
    IronOre=num1;
}

void ChnginRice(int num2)
{
    BarRice=num2;
}

void ChnginWine(int num3)
{
    CasWine=num3;
}

void ChnginMilk(int num4)
{
    PitMilk=num4;
}

void ChnginCabb(int num5)
{
    HeadCab=num5;
}

