/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 15, 2021, 8:57 PM
 * Purpose:  Roman Numeral Conversion Problem
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
    unsigned short n2Cnvrt;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (n2Cnvrt>=1000 && n2Cnvrt<=3000) {
    // process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's 
        unsigned char n1000s, n100s, n10s, n1s;
        n1000s=n2Cnvrt/1000;     //Shift 3 places to the left
        n100s=n2Cnvrt%1000/100; //Remainder of division of 1000 then shift 2 left
        n10s=n2Cnvrt%100/10;    //Remainder of division of 100 then shift 1 left
        n1s=n2Cnvrt%10;         //Remainder of division by 10
        
        //Output the number of 1000's in Roman Numerals
        if (n1000s==3)cout<<n2Cnvrt<<" is equal to MMM";
        if (n1000s==2)cout<<n2Cnvrt<<" is equal to MM";
        if (n1000s==1)cout<<n2Cnvrt<<" is equal to M";
            
        
        
        cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
       
        
        if (n10s==9)cout<<"XC";
        if (n10s==8)cout<<"LXXX";
        if (n10s==7)cout<<"LXX";
        if (n10s==6)cout<<"LX";
        if (n10s==5)cout<<"L";
        if (n10s==4)cout<<"XL";
        if (n10s==3)cout<<"XXX";
        if (n10s==2)cout<<"XX";
        if (n10s==1)cout<<"X";
        
        if (n1s==9)cout<<"IX";
        else if (n1s==8)cout<<"VIII";
        else if (n1s==7)cout<<"VII";
        else if (n1s==6)cout<<"VI";
        else if (n1s==5)cout<<"V";
        else if (n1s==4)cout<<"IV";
        else if (n1s==3)cout<<"III";
        else if (n1s==2)cout<<"II";
        else if (n1s==1)cout<<"I";
    }
    else {
        cout<<n2Cnvrt<<" is Out of Range!";
    }
    
    //Exit stage right or left!
    return 0;
}