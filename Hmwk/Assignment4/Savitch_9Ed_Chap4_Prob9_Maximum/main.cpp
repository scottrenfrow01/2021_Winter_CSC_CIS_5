/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 22, 2021, 5:52 PM
 * Purpose:  Maximum Problem
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
    float inp1, //The first inputted value
          inp2, //The second inputted value
          inp3; //The third inputted value
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Enter first number:"<<endl;
    cout<<endl;
    cin>>inp1;
    cout<<"Enter Second number:"<<endl;
    cout<<endl;
    cin>>inp2;
    cout<<"Enter third number:"<<endl;
    cout<<endl;
    cin>>inp3;
    
    //Display the outputs
    if (inp1>inp2)
    {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<inp1<<endl<<endl;
    }else if (inp2>inp1)
    {
        cout<<"Largest number from two parameter function:"<<endl;
        cout<<inp2<<endl<<endl;
    }
    
    if (inp1>inp2 && inp1>inp3)
    {
        cout<<"Largest number from three parameter function:"<<endl<<inp1<<endl;
    }else if (inp2>inp1 && inp2>inp3){
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<inp2<<endl;
    }else if (inp3>inp1 && inp3>inp2){
        cout<<"Largest number from three parameter function:"<<endl;
        cout<<inp3<<endl;
    }
    
    //Exit stage right or left!
    return 0;
}