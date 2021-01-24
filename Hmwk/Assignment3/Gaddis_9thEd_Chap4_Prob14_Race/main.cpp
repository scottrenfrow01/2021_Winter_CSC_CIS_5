/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:32 PM
 * Purpose:  Race Ranking Program
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string     name1, //The name of the first runner
               name2, //The name of the second runner
               name3; //The name of the the third runner
    float      rnr1T, //The time of runner 1
               rnr2T, //The time of runner 2
               rnr3T; //The time of runner 3
               
    
    
    //Initialize or input i.e. set variable values
        cout<<"Race Ranking Program"<<endl;
        cout<<"Input 3 Runners"<<endl;
        cout<<"Their names, then their times"<<endl;
        cin>>name1;
        cin>>rnr1T;
        cin>>name2;
        cin>>rnr2T;
        cin>>name3;
        cin>>rnr3T;
        
        
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (rnr3T<rnr1T && rnr1T<rnr2T) {
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T;
    } else if (rnr3T<rnr2T && rnr2T<rnr1T) {
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T;
    } else if (rnr2T<rnr3T && rnr3T<rnr1T) {
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T;
    } else if (rnr2T<rnr1T && rnr1T<rnr3T) {
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T;
    } else if (rnr1T<rnr2T && rnr2T<rnr3T) {
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T;
    } else if (rnr1T<rnr3T && rnr3T<rnr2T) {
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T;
    }

    //Exit stage right or left!
    return 0;
}