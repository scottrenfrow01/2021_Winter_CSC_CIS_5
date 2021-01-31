/* 
 * Author: 
 * Created on 
 * Purpose:  
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
int fctrl(int inp);//Function to write for this problem

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inp, //The inputted number
        ans; //The answer to the factorial
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the factorial using a function prototype ";
    cout<<"found in the template for this problem."<<endl;
    cout<<"Input the number for the function."<<endl;
    cin>>inp;
    ans=fctrl(inp);
    
    //Output data
    cout<<inp<<"! = "<<ans;
    
    //Exit stage right!
    return 0;
}

int fctrl(int inp)
{ int ans=1;
    for (int x=2; x<=inp; x++)
    {
        ans*=x;
    }
    return ans;
}