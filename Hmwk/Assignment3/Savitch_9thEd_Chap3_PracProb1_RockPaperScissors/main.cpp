/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 15, 2021, 9:49 PM
 * Purpose:  Rock Paper Scissors Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
     char ply1, //Player one's input of rock, paper, or scissors
          ply2; //Player two's input of rock, paper, or scissors
     
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>ply1>>ply2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (ply1 == 'P') 
    {
        if (ply2 == 'R') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'R') 
    {
        if(ply2 == 'P')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'P')
    {
        if (ply2 == 'P')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 'S')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 == 'R')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 =='S')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'R')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 =='P')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'S')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'r') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'r') 
    {
        if(ply2 == 'p')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 == 'p')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 's')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 == 'r')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 =='s')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'r')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 =='p')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 's')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 'r') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'R') 
    {
        if(ply2 == 'p')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'P')
    {
        if (ply2 == 'p')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 's')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 == 'r')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 =='s')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'r')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 =='p')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 's')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'R') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'r') 
    {
        if(ply2 == 'P')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 == 'P')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'S')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 == 'R')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 =='S')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'R')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 =='P')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'S')
        {
            cout<<"Nobody wins.";
        }
    }


    //Exit stage right or left!
    return 0;
}