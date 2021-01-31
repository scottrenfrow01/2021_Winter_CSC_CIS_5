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
void minmax(int,int,int,int&,int&);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int inp1,
        inp2,
        inp3,
        min,
        max;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    minmax(inp1, inp2, inp3, min, max);
    
    //Output data
    
    //Exit stage right!
    return 0;
}

void minmax (int inp1,int inp2,int inp3,int &min,int &max)
{
    cout<<"Input 3 numbers"<<endl;
    cin>>inp1;
    cin>>inp2;
    cin>>inp3;
    if (inp1<inp2 && inp2>inp3)
    {
        max=inp2;
    }if (inp2<=inp1 && inp1>=inp3)
    {
        max=inp1;
    }if (inp3<=inp2 && inp2>=inp1)
    {
        max=inp2;
    }if (inp3<=inp1 && inp1>=inp2)
    {
        max=inp1;
    }if (inp2<=inp3 && inp3>=inp1)
    {
        max=inp3;
    }if (inp1<=inp3 && inp3>=inp2)
    {
        max=inp3;
    }else if (inp1>=inp2 && inp2<=inp3)
    {
        min=inp2;
    }if (inp2>=inp1 && inp1<=inp3)
    {
        min=inp1;
    }if (inp3>=inp2 && inp2<=inp1)
    {
        min=inp2;
    }if (inp3>=inp1 && inp1<=inp2)
    {
        min=inp1;
    }if (inp2>=inp3 && inp3<=inp1)
    {
        min=inp3;
    }if (inp1>=inp3 && inp3<=inp2)
    {
        min=inp3;
    }
    cout<<"Min = "<<min<<endl;
    cout<<"Max = "<<max;
}