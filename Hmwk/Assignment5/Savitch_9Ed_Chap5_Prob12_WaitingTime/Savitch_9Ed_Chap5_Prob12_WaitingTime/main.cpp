/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 26, 2021, 4:45 PM
 * Purpose:  Timer Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const int CNVSEC=60;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int    hr,
           min,
           waitTm,
           fHour,
           fMin,
           minHold,
           hrHold;
    string iampm,
           fampm,
           inp;
    
    //Initialize or input i.e. set variable values
    do 
    {
        cout<<"Enter hour:"<<endl<<endl;
        cin>>hr;
        fHour=hr;
        cout<<"Enter minutes:"<<endl<<endl;
        cin>>min;
        fMin=min;
        cout<<"Enter A for AM, P for PM:"<<endl<<endl;
        cin>>iampm;
        cout<<"Enter waiting time:"<<endl<<endl;
        cin>>waitTm;
        
        if (iampm=="A")
        {
            iampm="AM";
        }else if (iampm=="P")
        {
            iampm="PM";
        }
        
        if (waitTm+min>CNVSEC)
        {
            hrHold=(waitTm/CNVSEC);
            fHour+=hrHold;
            minHold=waitTm-(hrHold*CNVSEC);
            if (fMin+minHold>CNVSEC)
            {
                fHour++;
                fMin+=minHold-CNVSEC;
            }
            else
            {
                fMin+=minHold;
            }
        }
        if (fHour>12)
        {
            fHour-=12;
            if (iampm=="AM")
            {
                fampm="PM";
            }else if (iampm=="PM")
            {
                fampm="AM";
            }
        }else 
        {
            if (iampm=="AM")
            {
                fampm="AM";
            }else 
            {
                fampm="PM";
            }
        }
        cout<<setfill('0')<<setw(2)<<fixed;
        cout<<"Current time = "             <<setfill('0')<<setw(2)<<hr<<":"<<setfill('0')<<setw(2)<<min<<" "<<iampm<<endl;
        cout<<"Time after waiting period = "<<setfill('0')<<setw(2)<<fHour<<":"<<setfill('0')<<setw(2)<<fMin<<" "<<fampm<<endl<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=="y")
        {
            cout<<endl;
        }
    }while (inp=="y");
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}