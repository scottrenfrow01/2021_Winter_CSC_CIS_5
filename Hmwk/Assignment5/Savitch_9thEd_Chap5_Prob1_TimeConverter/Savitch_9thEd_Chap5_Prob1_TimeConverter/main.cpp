/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on: January 25, 2021, 2:16 PM
 * Purpose:  Time Converter Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes
int getTime(int &, char, int &, bool &);
int timeCnv(int &, int &, char &);
int output(int &, int &, int &, char &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   milHr, //The hour portion of the time in military time
          stHr, //The hour portion of the time in standard time
          min; //The minute portion of the time
    char  c=':',
          day, //Determines whether the time is in AM or PM
          inp; //Determines whether or not the user would like to continue
    bool  valTime;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Military Time Converter to Standard Time"<<endl;
    cout<<"Input Military Time hh:mm"<<endl;
    do{
        getTime(milHr, c, min, valTime);
        if (valTime==true)
        {
            timeCnv(milHr, stHr, day);
            output(milHr, min, stHr, day);
        }
    //Display the outputs
        cout<<"Would you like to convert another time (y/n)"<<endl;
        cin>>inp;
    }while (inp=='Y' || inp=='y');

    //Exit stage right or left!
    return 0;
}


//The getTime function instructs the user to enter the military time and returns that value 
int getTime(int &milHr,char c, int &min, bool &valTime)
{
    valTime=true;
    cin>>milHr>>c>>min;
    if (milHr>24 || min>59)
    {
        cout<<milHr<<":"<<min<<" is not a valid time"<<endl;
        valTime=false;
    }
}

//The timeCnv function accepts a military time as an argument and returns the equivalent standard time
int timeCnv(int &milHr, int &stHr, char &day)
{
    if (milHr==0)
    {
        stHr=12;
        day='A';
    }
    else if (milHr==12)
    {
        stHr=12;
        day='P';
    }
    else if (milHr>=13)
    {
        stHr=milHr-12;
        day='P';
    }
    else if (milHr<12)
    {
        stHr=milHr;
        day='A';
    }
}
int output(int &milHr, int &min, int &stHr, char &day)
{
    string half;
    if (day=='A'){
        half=" AM";
    }if (day=='P')
    {
        half=" PM";
    }if (milHr==0)
    {
        cout<<"00:"<<min<<" = "<<stHr<<":"<<min<<half<<endl;
    }else {
        cout<<milHr<<":"<<min<<" = "<<stHr<<":"<<min<<half<<endl;
    }
}
   