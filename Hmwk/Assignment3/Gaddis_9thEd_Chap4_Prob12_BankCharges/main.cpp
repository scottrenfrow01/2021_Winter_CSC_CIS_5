/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 12, 2021, 7:49 PM
 * Purpose:  Bank Charges Problem
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    float begBal, //The beginning balance in dollars
          nmrChec, //The number of checks written
          chkRt, //The cost per check in dollars
          chkFee, //The check fee in dollars
          lowBal, //The low balance fee
          mnthFee, //The monthly fee in dollars
          newBal; //The new bank balance
    
    //Initialize or input i.e. set variable value
        cout<<"Monthly Bank Fees"<<endl;
        cout<<"Input Current Bank Balance and Number of Checks"<<endl;
        cin>>begBal;
        cin>>nmrChec;
       
    //Map inputs -> output
        if (nmrChec<0)
        {
            cout<<"Number of checks inputted is invalid";
        }
        else if (nmrChec>0)
        {
            if (begBal<0)
            {
                cout<<"ACCOUNT IS OVERDRAWN";
            }
            else if (begBal>0)
            {
                if (nmrChec>=0 && nmrChec<20)
                {
                    chkFee=nmrChec*.1f;
                }
                else if (nmrChec<=20 && nmrChec<=39)
                {
                    chkFee=nmrChec*.08f;
                }
                else if (nmrChec>=40 && nmrChec<=59)
                {
                    chkFee=nmrChec*.06f;
                }
                else if (nmrChec>=60)
                {
                    chkFee=nmrChec*.04f;
                }
            }
            if (begBal<400)
            {
                lowBal=15.00f;
            }mnthFee=10.00f;
        }newBal=begBal-chkFee-mnthFee-lowBal;
       
    //Display the outputs
        cout<<"Balance     $"<<setw(9)<<showpoint<<setprecision(2)<<fixed<<begBal<<endl;
        cout<<"Check Fee   $"<<setw(9)<<showpoint<<setprecision(2)<<fixed<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<showpoint<<setprecision(2)<<fixed<<mnthFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<showpoint<<setprecision(2)<<fixed<<lowBal<<endl;
        cout<<"New Balance $"<<setw(9)<<showpoint<<setprecision(2)<<fixed<<newBal;

    //Exit stage right or left!
    return 0;
}