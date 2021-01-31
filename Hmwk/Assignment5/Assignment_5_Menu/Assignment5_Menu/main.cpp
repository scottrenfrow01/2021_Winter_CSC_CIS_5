/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on March 26th, 2021, 10:24 PM
 * Purpose: Menu for Assignment #5
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const int CNVSEC=60;

//Function Prototypes
void minmax(int,int,int,int&,int&);//Function to find the min and max
int fctrl(int inp);//Function to write for this problem
bool isPrime(int inp);//Determine if the input number is prime.
int collatz(int);//3n+1 sequence
int getTime(int &, char, int &, bool &);
int timeCnv(int &, int &, char &);
int output(int &, int &, int &, char &);
float psntVal(float,float,float);
void getScre(int &,int &,int &,int &,int &);
float calcAvg(int,int,int,int,int);
int fndLwst(int,int,int,int,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for MinMax problem"<<endl;
    cout<<"Type 2 for Factorial problem"<<endl;
    cout<<"Type 3 for isPrime problem"<<endl;
    cout<<"Type 4 for Collatz Sequence problem"<<endl;
    cout<<"Type 5 for Collatz Sequence with Output of Sequence problem"<<endl;
    cout<<"Type 6 for Sav9EdC5P12 problem"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap5_Prob1_TimeConverter problem"<<endl;
    cout<<"Type 8 for Gaddis_9thEd_Chap6_Prob9_Present_Value problem"<<endl;
    cout<<"Type 9 for Gaddis_9thEd_Chap6_Prob10_Average problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
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
    }else if(choice=='2'){
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
    }else if(choice=='3'){
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
    }else if(choice=='4'){
//Declare Variables
    int n;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    cout<<"Sequence start of "<<n<<" cycles to 1 in "<<
            collatz(n)<<" steps";
    
    //Output data
    
    //Exit stage right!
    }else if(choice=='5'){
//Declare Variables
    int n,ns;
    
    //Initialize Variables
    cout<<"Collatz Conjecture Test"<<endl;
    cout<<"Input a sequence start"<<endl;
    cin>>n;
    
    //Process/Map inputs to outputs
    ns=collatz(n);
    
    //Output data
    cout<<endl<<"Sequence start of "<<n<<" cycles to 1 in "<<
            ns<<" steps";
    
    //Exit stage right!
    }else if(choice=='6'){
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
    }else if(choice=='7'){
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
    }else if(choice=='8'){
//Declare Variables
    float futVal,intRate,prVal;
    int nYrs;
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    
    //Display the outputs
    prVal=psntVal(futVal,nYrs,intRate);
    cout<<"The Present Value = $"<<showpoint<<setprecision(2)<<fixed<<prVal;

    //Exit stage right or left!
    }else if(choice=='9'){
//Declare Variables
    int inp1, inp2, inp3, inp4, inp5;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(inp1,inp2,inp3,inp4,inp5);
    calcAvg(inp1,inp2,inp3,inp4,inp5);
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup    }
    else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
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
   
    int fctrl(int inp)
{ int ans=1;
    for (int x=2; x<=inp; x++)
    {
        ans*=x;
    }
    return ans;
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
    
    int collatz (int n)
{
    int x=1;
    while (n>1)
    {
        if (n%2==0)
        {
            n=n/2;
        }
        else 
        {
            n=(n*3)+1;
        }
        x++;
    }
    return x;
}
    
    int collatz (int n)
{
    cout<<n<<",";
    int x=1;
    while (n>1)
    {
        if (n%2==0)
        {
            n=n/2; 
            cout<<" "<<n;
            if (n!=1)
            {
                cout<<",";
            }
        }
        else 
        {
            n=(n*3)+1;
            cout<<" "<<n;
            if (n!=1)
            {
                cout<<",";
            }
        }
        x++;
        
        
    }return x;
}
    
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
   
float psntVal(float futVal,float intRate,float nYrs)
{
    cout<<"This is a Present Value Computation"<<endl;
    cout<<"Input the Future Value in Dollars"<<endl;
    cin>>futVal;
    cout<<"Input the Number of Years"<<endl;
    cin>>nYrs;
    cout<<"Input the Interest Rate %/yr"<<endl;
    cin>>intRate;
    intRate=(intRate/100)+1;
    return (futVal)/(pow(intRate,nYrs));
}

void getScre(int &inp1,int &inp2,int &inp3,int &inp4,int &inp5)
{
    cout<<"Input the 5 test scores."<<endl;
    cin>>inp1;
    cin>>inp2;
    cin>>inp3;
    cin>>inp4;
    cin>>inp5;
    
    while (inp1<0 || inp1>100)
    {
        cout<<"Invalid test score!"<<endl;
    }
}

float calcAvg(int inp1,int inp2,int inp3,int inp4,int inp5)
{
    float avg = (inp1+inp2+inp3+inp4+inp5)-fndLwst(inp1,inp2,inp3,inp4,inp5);
    avg/=4.0f;
    cout<<"The average test score = "<<setprecision(1)<<fixed<<avg;
}

int fndLwst(int inp1,int inp2,int inp3,int inp4,int inp5) 
{
    if (inp1<inp2 && inp1<inp3 && inp1<inp4 && inp1<inp5)
    {
        return inp1;
    }if (inp2<inp1 && inp2<inp3 && inp2<inp4 && inp2<inp5)
    {
        return inp2;
    }if (inp3<inp2 && inp3<inp1 && inp3<inp4 && inp3<inp5)
    {
        return inp3;
    }if (inp4<inp2 && inp4<inp3 && inp4<inp1 && inp4<inp5)
    {
        return inp4;
    }if (inp5<inp2 && inp5<inp3 && inp5<inp4 && inp5<inp1)
    {
        return inp5;
    }
}