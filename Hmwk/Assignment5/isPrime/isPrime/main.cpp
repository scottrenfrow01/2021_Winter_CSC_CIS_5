/* 
 * Author: Scott Renfrow
 * Created on: January 24, 2021, 6:27 PM
 * Purpose:  Prime Number Problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
bool isPrime(int inp);//Determine if the input number is prime.

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int   inp;   //The inputted number which will be tested 
    bool  test; //A true or false test
    
    //Initialize Variables
    cout<<"Input a number to test if Prime."<<endl;
    cin>>inp;
    test=isPrime(inp);
    if (test==true)
    {
        cout<<inp<<" is prime.";
    }
    else {
        cout<<inp<<" is not prime.";
    }
    
    //Process/Map inputs to outputs
    
    //Output data
    
    //Exit stage right!
    return 0;
}

bool isPrime(int inp){
    bool test=true;
    for (int x=2; x<inp; x++)
    {
        if (inp%x==0)
        {
            test=false;
            break;
        }
    } return test;
}