/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 7, 2021, 2:03 PM
 * Purpose:  Restaurant Bill Problem
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float mlCst, //Meal Cost
          tax, //Tax
          tip, //Tip Cost
          cstTax, //The price paid for tax
          cstTip, //The price paid for the tip
          ttlCst; //Total cost after tax and tip
            
    //Initialize Variables
          mlCst=88.67;
          tax=.0675;
          tip=.2;
                  
    //Map Inputs to Outputs -> Process
          cstTax=mlCst*tax;
          cstTip=(mlCst+cstTax)*tip;
          ttlCst=mlCst+cstTax+cstTip;
                  
    
    //Display Inputs/Outputs
          cout<<"The meal cost = $"<<mlCst<<endl;
          cout<<"The tax amount = $"<<cstTax<<endl;
          cout<<"The tip amount = $"<<cstTip<<endl;
          cout<<"The total bill = $"<<ttlCst<<endl;
    //Exit the Program - Cleanup
    return 0;
}