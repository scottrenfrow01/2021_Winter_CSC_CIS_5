/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 4, 2021, 10:50 AM
 * Purpose:  CPP Template 
 *           To be copied for each Assignment Problem
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
    float item1, //The price of item 1 in dollars
          item2, //The price of item 2 in dollars
          item3, //The price of item 3 in dollars
          item4, //The price of item 4 in dollars
          item5, //The price of item 5 in dollars
          slsTax, //Sales Tax percentage
          subttl, //Subtotal in dollars
          cstTax, //The total cost of sales tax in dollars
          ttl; //End total in dollars
            
    //Initialize Variables
          item1=15.95;
          item2=24.95;
          item3=6.95;
          item4=12.95;
          item5=3.95;
          slsTax=.07;
                  
    //Map Inputs to Outputs -> Process
          subttl=item1+item2+item3+item4+item5;
          cstTax=subttl*slsTax;
          ttl=subttl+cstTax;    
                  
    //Display Inputs/Outputs
          cout<<"Item 1 costs $"<<item1<<endl;
          cout<<"Item 2 costs $"<<item2<<endl;
          cout<<"Item 3 costs $"<<item3<<endl;
          cout<<"Item 4 costs $"<<item4<<endl;
          cout<<"Item 5 costs $"<<item5<<endl;
          cout<<"The subtotal = $"<<subttl<<endl;
          cout<<"Sales Tax = $"<<cstTax<<endl;
          cout<<"Total Cost = $"<<ttl<<endl;
    //Exit the Program - Cleanup
    return 0;
}