/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on March 23, 2021, 9:10 PM
 * Purpose: Menu to be used for Assignment #4
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <string>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGLLN=.264179f; //The conversion from liters to gallons
const int CNVPRCT=100;

//Function Prototypes
float mpgCnv (float galGas, float ltrGas, float mpg, int miles);
float mpgCnv1 (float galGas1, float ltrGas1, float mpg1, int miles1);
float mpgCnv2 (float galGas2, float ltrGas2, float mpg2, int miles2);
int fuelEco (float mpg1, float mpg2);
float inflate (float crPrc, float oldPr);
float predict (float oldPrc, float inflRt);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Assignment #4"<<endl;
    cout<<"Type 1 for Gaddis_9thEd_Chap5_Prob1_Sum"<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap5_Prob7_PayInPennies"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap5_Prob13_MinMax"<<endl;
    cout<<"Type 4 for Gaddis_9thEd_Chap5_Prob22_Rectangle"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap5_Prob23_Pattern"<<endl;
    cout<<"Type 6 for Savitch_9Ed_Chap4_Prob1_MPG1"<<endl;
    cout<<"Type 7 for Savitch_9Ed_Chap4_Prob2_MPG2"<<endl;
    cout<<"Type 8 for Savitch_9Ed_Chap4_Prob4_Inflation1"<<endl;
    cout<<"Type 9 for Savitch_9Ed_Chap4_Prob5_Inflation2"<<endl;
    cout<<"Type 0 for Savitch_9Ed_Chap4_Prob9_Maximum"<<endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variables
    int  nmr, //The inputted number
         sum=0; //The calculated sum of the current number
         
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>nmr;
    
    //Display the outputs
for (int count=1;count<=nmr;count++)
{
    sum+=count;
}
    
cout<<"Sum = "<<sum;
    //Exit stage right or left!
    
}
        
    else if(choice=='2'){
        //Declare Variables
    unsigned int  nmrDays, //The number of days worked
                  payRt=1, //The amount of money the person earns each day
                  dayPay=2,
                  penny; //The total amount of money earned
    
    //Initialize or input i.e. set variable values
            cin>>nmrDays;
            
    //Map inputs -> outputs
    while(nmrDays<1)
    {
        cout<<"Number of days Inputted is Invalid."<<endl;
        cout<<"Please Input integer greater than or equal to one.";
        cin>>nmrDays;
    }
    for (int i=0;i<nmrDays;i++)
    {
        penny+=payRt;
        payRt=payRt*dayPay;
    }
    cout<<"Pay = $"<<penny/100<<".";
    if((payRt%100)<10) {
        cout<<"0"<<penny%100;
    }
    else if((penny%100)>=10)
    {
        cout<<penny%100;
    }
    
    //Display the outputs
        
    //Exit stage right or left!
    
}
    else if(choice=='3'){
        //Declare Variables
    int smallNmr, //The smallest number
        lrgNmr, //The largest number
        inp; //The inputted numbers
    
    //Initialize or input i.e. set variable values
    cin>>inp;
    smallNmr=lrgNmr=inp;
    
    //Map inputs -> outputs
    while (inp!=-99) {
        if (inp<smallNmr)
        smallNmr=inp;
        if (inp>lrgNmr)
        lrgNmr=inp;
        cin>>inp;
    }
    
    //Display the outputs
    cout<<"Smallest number in the series is "<<smallNmr<<endl;
    cout<<"Largest  number in the series is "<<lrgNmr;

    //Exit stage right or left!
    

    }else if(choice=='4'){
        //Declare Variables
    unsigned int   inpSz; //The inputted size of the Rectangle
    char           inpLtr; //The inputted letter which makes the rectangle 
    
    //Initialize or input i.e. set variable values
    cin>>inpSz;
    cin>>inpLtr;
    
    //Map inputs -> outputs
    for (int x=1; x<inpSz; x++)
    {
        for (int y=1; y<inpSz; y++)
        {
            cout<<inpLtr;
        }
        cout<<inpLtr<<endl;
    }
    for (int z=1; z<inpSz+1; z++)
    {
        cout<<inpLtr;
    }
    
    //Display the outputs
    
    //Exit stage right or left!
    
    }else if(choice=='5'){
        //Declare Variables
    int   inp; //The inputted number
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cin>>inp;
    
    //Display the outputs
    for (int x=1; x<=inp; x++) 
    {
        for (int y=1; y<=x; y++)
        {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    for (int x=inp; x>=2; x--)
    {
        for (int y=1; y<=x; y++)
        {
            cout<<"+";
        }
        cout<<endl<<endl;
    }
    cout<<"+";
    //Exit stage right
    //Exit stage right or left!
   
    }else if(choice=='6'){
        //Declare Variables
    float     ltrGas,
              galGas,
              mpg;
    int       miles;
    char      inp;    //The inputted yes or no to continue
    
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Enter number of liters of gasoline:"<<endl;
        cout<<endl;
        cin>>ltrGas;
        cout<<"Enter number of miles traveled:"<<endl;
        cout<<endl;
        cin>>miles;
        mpg=mpgCnv(galGas, ltrGas, mpg, miles);
        cout<<"miles per gallon:"<<showpoint<<setprecision(2)<<fixed<<endl;
        cout<<mpg<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while(inp=='y');
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    }else if(choice=='7'){
        //Declare Variables
    float     ltrGas1,
              galGas1,
              mpg1,
              ltrGas2,
              galGas2,
              mpg2;
    int       miles1,
              miles2;
    char      inp;    //The inputted yes or no to continue
    
    //Initialize or input i.e. set variable values
    do
    {
        cout<<"Car 1"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>ltrGas1;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles1;
        mpg1=mpgCnv1(galGas1, ltrGas1, mpg1, miles1);
        cout<<"miles per gallon: "<<showpoint<<setprecision(2)<<fixed<<mpg1<<endl;
        cout<<endl;
        cout<<"Car 2"<<endl;
        cout<<"Enter number of liters of gasoline:"<<endl;
        cin>>ltrGas2;
        cout<<"Enter number of miles traveled:"<<endl;
        cin>>miles2;
        mpg2=mpgCnv2(galGas2, ltrGas2, mpg2, miles2);
        cout<<"miles per gallon: "<<showpoint<<setprecision(2)<<fixed<<mpg2<<endl;
        cout<<endl;
        fuelEco (mpg1, mpg2);
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while(inp=='y');
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    }else if(choice=='8'){
        //Declare Variables
    char  inp;     //Yes or No
    float crPrc, //The current price of the item
          oldPrc, //The year-ago pruce of the item
          infl,
          difrnc, //The difference in price
          inflRt; //The rate of inflation as a percent
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {   cout<<"Enter current price:"<<endl;
        cin>>crPrc;
        cout<<"Enter year-ago price:"<<endl;
        cin>>oldPrc;
        inflRt=inflate(crPrc, oldPrc);
        cout<<"Inflation rate: "<<showpoint<<setprecision(2)<<fixed<<inflRt<<"%"<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while (inp=='y');

    //Exit stage right or left!
    }else if(choice=='9'){
        //Declare Variables
    float crPrc, //The current price in dollars
          oldPrc, //The old price in dollars
          infl,
          inflRt; //The inflation rate as a percentage
    char  inp; //The inputted choice "y" or "n" 
        
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    do
    {   cout<<"Enter current price:"<<endl;
        cin>>crPrc;
        cout<<"Enter year-ago price:"<<endl;
        cin>>oldPrc;
        inflRt=inflate(crPrc,oldPrc);
        cout<<fixed;
        cout<<"Inflation rate: "<<setprecision(2)<<inflRt<<"%"<<endl;
        cout<<endl;
        oldPrc=crPrc;
        oldPrc=predict(oldPrc,inflRt);
        cout<<"Price in one year: $"<<oldPrc<<endl;
        oldPrc=predict(oldPrc,inflRt);
        cout<<"Price in two year: $"<<oldPrc<<endl;
        cout<<endl;
        cout<<"Again:"<<endl;
        cin>>inp;
        if (inp=='y')
        {
            cout<<endl;
        }
    } while (inp=='y');

    //Exit stage right or left!
    }else if(choice=='0'){
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
    }else {
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}

float mpgCnv (float galGas, float ltrGas, float mpg, int miles)
{
    galGas=ltrGas*CNVGLLN;
    mpg=miles/galGas;
    return mpg;
    
}
int fuelEco (float mpg1, float mpg2)
{
    if (mpg1>mpg2)
    {
        cout<<"Car 1 is more fuel efficient"<<endl;
        cout<<endl;
    }if (mpg1<mpg2)
    {
        cout<<"Car 2 is more fuel efficient"<<endl;
        cout<<endl;
    }
}

float mpgCnv1 (float galGas1, float ltrGas1, float mpg1, int miles1)
{
    galGas1=ltrGas1*CNVGLLN;
    mpg1=miles1/galGas1;
   
    return mpg1;
   
}    
float mpgCnv2 (float galGas2, float ltrGas2, float mpg2, int miles2)
{
    galGas2=ltrGas2*CNVGLLN;
    mpg2=miles2/galGas2;
    
    return mpg2;
}
float inflate (float crPrc, float oldPrc)
{   float difrnc,
          infl;
    difrnc=crPrc-oldPrc;
    infl=(difrnc/oldPrc)*CNVPRCT;
    return infl;
    
}
float predict (float oldPrc, float inflRt) 
{
    inflRt=inflRt/CNVPRCT;
    oldPrc=oldPrc+(oldPrc*inflRt);
    
}