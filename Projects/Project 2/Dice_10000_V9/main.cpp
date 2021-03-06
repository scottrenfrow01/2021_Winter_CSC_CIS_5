/*
 * 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on February 10, 2021, 9:02 PM
 * Purpose:  Designing the game using arrays
 */

//System Libraries
#include <iostream>  //I/O Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time to set the seed
#include <iomanip>   //Allows  for organization
#include <cmath>     //Math Library
#include <string>    //String Library
#include <fstream>   //File I/O
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void intro(); //Display the menu
void rl (unsigned int [], int); //Roll the six dice
bool play(unsigned int); //Ask the player if they would like to play
void pnt(unsigned int [],int,float &); //Function which adds the points
void nRl(unsigned int [],int,unsigned char); //Counts the sum of the dice

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned char min, //The minimum value
                  max, //The maximum value
                  sum1, //The sum of all 6 die
                  dice; //The dice value for the output file
    unsigned int  nLoop, //The number of Loops
                  count,
                  inp1;
    float         points1, //The accumulated number of points
                  add1;   //The added number of points for just one round
    bool          again; //Allows the user to decide if they would like to play
    string        strPnts1;
    fstream       inp;
    string        fn="points.dat";
    const int     NDICE=6; //The number of dice
    string        number1="1",//The rolled number
                  number2="2",
                  number3="3",
                  number4="4",
                  number5="5",
                  number6="6";
    fstream       out;
    string        fileNm;
    
    const int SIZENR1=30; //The size of the nRoll1 array
    unsigned int nRoll1[SIZENR1]; //holds the sum of all numbers rolled
    const int SIZEDIE=7; //The size of the nums and nTime1 arrays
    unsigned int nums[SIZEDIE]; //An array which holds the number rolled
    unsigned int nTime1[SIZEDIE];  //Displays the amount a number was rolled
    
    
    
    //Initialize file parameters
    nums[0]=0;
    fileNm="die.dat";
    out.open(fileNm,ios::out);
    
    cout<<right;
    for(unsigned char dice=0;dice<NDICE;dice++){
        string strDie;
        strDie=rand()%6+1;
    }
    
    //Initialize Variables
    min=max=(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+(rand()%6+1)+
            (rand()%6+1);
    nLoop=1;
    strPnts1="points";
    
    //Output the Menu
    intro();
        //Map Inputs to Outputs -> Process
        //Continue Looping until the user would like to stop
    while(play(inp1)){
        inp.open(fn,ios::in);
        points1=0; //Set points equal to zero
        inp>>points1; //Read in the number of points at the start of each round
        count=0;
        nRoll1[0]=nRoll1[1]=nRoll1[2]=nRoll1[3]=nRoll1[4]=nRoll1[5]=0;
        nRoll1[6]=nRoll1[7]=nRoll1[8]=nRoll1[9]=nRoll1[10]=0;
        nRoll1[11]=nRoll1[12]=nRoll1[13]=nRoll1[14]=nRoll1[15]=0;
        nRoll1[16]=nRoll1[17]=nRoll1[18]=nRoll1[19]=nRoll1[20]=0;
        nRoll1[21]=nRoll1[22]=nRoll1[23]=nRoll1[24]=nRoll1[25]=0;
        nRoll1[26]=nRoll1[27]=nRoll1[28]=nRoll1[29]=nRoll1[30]=0;
        do{
            for(int thrw=1;thrw<=nLoop;thrw++){
                rl(nums,SIZEDIE); //A function which rolls the dice
                sum1=nums[1]+nums[2]+nums[3]+nums[4]+nums[5]+nums[6]; //The sum
                
                //Determine the minimum and maximum values
                min>sum1? min=sum1: min=min;
                max<sum1? max=sum1: max=max;

                //Display the frequencies of the numbers thrown
                nRl(nRoll1,SIZENR1,sum1);
                
                pnt(nums,SIZEDIE,points1); //A function which adds the points

            }
        }while (points1<10000); //Continue this loop until 10000 points 
       
        //Output "You Won!" and frequencies
        //Display Inputs/Outputs
        cout<<"The Maximum Value Thrown = "<<static_cast<int>(max)<<endl;
        cout<<"The Minimum Value Thrown = "<<static_cast<int>(min)<<endl;
        cout<<"The Frequency of Rolling a 6 = "<<nRoll1[0]<<endl;
        cout<<"The Frequency of Rolling a 7 = "<<nRoll1[1]<<endl;
        cout<<"The Frequency of Rolling a 8 = "<<nRoll1[2]<<endl;
        cout<<"The Frequency of Rolling a 9 = "<<nRoll1[3]<<endl;
        cout<<"The Frequency of Rolling a 10 = "<<nRoll1[4]<<endl;
        cout<<"The Frequency of Rolling a 11 = "<<nRoll1[5]<<endl;
        cout<<"The Frequency of Rolling a 12 = "<<nRoll1[6]<<endl;
        cout<<"The Frequency of Rolling a 13 = "<<nRoll1[7]<<endl;
        cout<<"The Frequency of Rolling a 14 = "<<nRoll1[8]<<endl;
        cout<<"The Frequency of Rolling a 15 = "<<nRoll1[9]<<endl;
        cout<<"The Frequency of Rolling a 16 = "<<nRoll1[10]<<endl;
        cout<<"The Frequency of Rolling a 17 = "<<nRoll1[11]<<endl;
        cout<<"The Frequency of Rolling a 18 = "<<nRoll1[12]<<endl;
        cout<<"The Frequency of Rolling a 19 = "<<nRoll1[13]<<endl;
        cout<<"The Frequency of Rolling a 20 = "<<nRoll1[14]<<endl;
        cout<<"The Frequency of Rolling a 21 = "<<nRoll1[15]<<endl;
        cout<<"The Frequency of Rolling a 22 = "<<nRoll1[16]<<endl;
        cout<<"The Frequency of Rolling a 23 = "<<nRoll1[17]<<endl;
        cout<<"The Frequency of Rolling a 24 = "<<nRoll1[18]<<endl;
        cout<<"The Frequency of Rolling a 25 = "<<nRoll1[19]<<endl;
        cout<<"The Frequency of Rolling a 26 = "<<nRoll1[20]<<endl;
        cout<<"The Frequency of Rolling a 27 = "<<nRoll1[21]<<endl;
        cout<<"The Frequency of Rolling a 28 = "<<nRoll1[22]<<endl;
        cout<<"The Frequency of Rolling a 29 = "<<nRoll1[23]<<endl;
        cout<<"The Frequency of Rolling a 30 = "<<nRoll1[24]<<endl;
        cout<<"The Frequency of Rolling a 31 = "<<nRoll1[25]<<endl;
        cout<<"The Frequency of Rolling a 32 = "<<nRoll1[26]<<endl;
        cout<<"The Frequency of Rolling a 33 = "<<nRoll1[27]<<endl;
        cout<<"The Frequency of Rolling a 34 = "<<nRoll1[28]<<endl;
        cout<<"The Frequency of Rolling a 35 = "<<nRoll1[29]<<endl;
        cout<<"The Frequency of Rolling a 36 = "<<nRoll1[30]<<endl;
        cout<<endl<<"You Won!"<<endl;
        
        //Ask the user if they would like to play again
         //A function which asks the player if they would play again
    
    }
    //Exit the Program - Cleanup
    inp.close();
    out.close();
    return 0;
}

//Displays the menu 
void intro(){
    cout<<"This program simulates a game of 10000"<<endl;
}

//Rolls the random six dice
void rl(unsigned int die[],int size1){
    
    die[1]=(rand()%6+1); //The value for die 1
    die[2]=(rand()%6+1); //The value for die 2
    die[3]=(rand()%6+1); //The value for die 3
    die[4]=(rand()%6+1); //The value for die 4
    die[5]=(rand()%6+1); //The value for die 5
    die[6]=(rand()%6+1); //The value for die 6
}

//A function which asks the player if they want to play again
bool play(unsigned int val){
    bool again;
    cout<<"If you would like to play input '1' or '0' if you do";
    cout<<" not wish to play."<<endl<<endl;
    cin>>val;
    if (val==1){
        again=true;
        return again;
    }else {
        again=false;
        return again;
        exit;
    }
    
}

//The function that adds up the total points until 10,000 points is reached
void pnt (unsigned int die[], int size1,float &points){
    static float add;
    string strPnts;
    strPnts="points";
    //Start adding points
    //Points added if a one is rolled
    if (die[1]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }
    if (die[2]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }
    if (die[3]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }
    if (die[4]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }
    if (die[5]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }
    if (die[6]==1){
        add=pow(10,2);
        points+=100.0f;
        cout<<"Added number of points from rolling a one =";
        cout<<setw(4)<<add<<"               Total number of ";
        cout<<strPnts<<" = "<<points<<endl;
    }

    //Points added if a 5 is rolled
    else if (die[1]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }
    else if (die[2]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }
    else if (die[3]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }
    else if (die[4]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }
    else if (die[5]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }
    else if (die[6]==5){
        add=50.0f;
        points+=50.0f;
        cout<<"Added number of points from rolling a five = ";
        cout<<add<<"               Total number of ";
        cout<<"points = "<<points<<endl;
    }

    //Points added if a 3 of a kind is rolled
    if (die[1]==die[2] && die[2]==die[3])
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
        add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three";
        cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
   if (die[1]==die[2] && die[2]==die[4])
    {
       if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
           add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a";
        cout<<" three of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }

    }
    if (die[1]==die[2] && die[2]==die[5])
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three of a";
            cout<<" kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[1]==die[2] && die[2]==6)
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[1]==die[3] && die[3]==die[4])
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[1]==die[3] && die[3]==die[5])
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[1]*100.0f);
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[1]==die[3] && die[3]==die[6])
    {
        if (die[1]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
        points=points+(die[1]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[2]==die[3] && die[3]==die[4])
    {
        if (die[2]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[2]*100.0f);
        points=points+(die[2]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[2]==die[3] && die[3]==die[5])
    {
        if (die[2]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[2]*100.0f);
        points=points+(die[2]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[2]==die[3] && die[3]==die[6])
    {
        if (die[2]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[2]*100.0f);
        points=points+(die[2]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[2]==die[4] && die[4]==die[5])
    {
        if (die[2]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[2]*100.0f);
        points=points+(die[2]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[2]==die[4] && die[4]==die[6])
    {
        if (die[2]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[2]*100.0f);
        points=points+(die[2]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[3]==die[4] && die[4]==die[5])
    {
        if (die[3]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[3]*100.0f);
        points=points+(die[3]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[3]==die[4] && die[4]==die[6])
    {
        if (die[3]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[3]*100.0f);
        points=points+(die[3]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }
    if (die[3]==die[5] && die[5]==die[6])
    {
        if (die[3]==1)
        {
            add=1000.0f;
            points+=1000.0f;
            cout<<"Added number of points from rolling three ones";
            cout<<" = "<<add<<"         Total number of ";
            cout<<"points = "<<points<<endl;
        }
        else{
            add=(die[3]*100.0f);
        points=points+(die[3]*100.0f);
        cout<<"Added number of points from rolling a three";
            cout<<" of a kind";
            cout<<" = "<<add<<"   Total number of ";
            cout<<"points = "<<points<<endl;
        }
    }

    //The points added if a four of a kind is rolled
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[4]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[5]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[4] && die[4]==die[5]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind ";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[4] && die[4]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind ";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[5] && die[5]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[3] && die[3]==die[4] && die[4]==die[5]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[3] && die[3]==die[4] && die[4]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[3] && die[3]==die[5] && die[5]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
        cout<<" of a kind";
        cout<<" = "<<add<<"    Total number of ";
        cout<<"points = "<<points<<endl;
        }
    if (die[1]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[2]==die[3] && die[3]==die[4] && die[4]==die[5]){
        add=(die[2]*200.0f)-(die[2]*100.0f);
        points=points+(die[2]*200.0f)-(die[2]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[2]==die[3] && die[3]==die[4] && die[4]==die[6]){
        add=(die[2]*200.0f)-(die[2]*100.0f);
        points=points+(die[2]*200.0f)-(die[2]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[2]==die[3] && die[3]==die[5] && die[5]==die[6]){
        add=(die[2]*200.0f)-(die[2]*100.0f);
        points=points+(die[2]*200.0f)-(die[2]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[2]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[2]*200.0f)-(die[2]*100.0f);
        points=points+(die[2]*200.0f)-(die[2]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[3]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[3]*200.0f)-(die[3]*100.0f);
        points=points+(die[3]*200.0f)-(die[3]*100.0f);
        cout<<"Added number of points from rolling a four";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }    

    //The points added if a five of a kind is rolled
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[4] && die[4]==die[5]){
        add=(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[4] && die[4]==die[6]){
        add=(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[3] && die[3]==die[5] && die[5]==die[6]){
        add=(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[2] && die[2]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[1]==die[3] && die[3]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
    if (die[2]==die[3] && die[3]==die[4] && die[4]==die[5] && die[5]==die[6]){
        add=(die[2]*400.0f)-(die[2]*200.0f)-(die[2]*100.0f);
        points=points+(die[2]*400.0f)-(die[2]*200.0f)-(die[2]*100.0f);
        cout<<"Added number of points from rolling a five";
            cout<<" of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }

    //The points added if a six of a kind is rolled
    if (die[1]==die[2]&&die[2]==die[3]&&die[3]==die[4]&&die[4]==die[5]&&die[5]==die[6]){
        add=(die[1]*800.0f)-(die[1]*400.0f)-(die[1]*200.0f)-(die[1]*100.0f);
        points=points+(die[1]*800.0f)-(die[1]*400.0f)-(die[1]*200.0f);
        points=points-(die[1]*200.0f);
        cout<<"Added number of points from rolling a six of a kind";
            cout<<" = "<<add<<"    Total number of ";
            cout<<"points = "<<points<<endl;
    }
}

//A function which counts the number of times the dice sum was roled
void nRl (unsigned int nRoll[],int SIZENR,unsigned char sum){
    //Display the frequencies of the numbers thrown
    switch(sum)
    {
        case 6: nRoll[0]++;break;
        case 7: nRoll[1]++;break;
        case 8: nRoll[2]++;break;
        case 9: nRoll[3]++;break;
        case 10: nRoll[4]++;break;
        case 11: nRoll[5]++;break;
        case 12: nRoll[6]++;break;
        case 13: nRoll[7]++;break;
        case 14: nRoll[8]++;break;
        case 15: nRoll[9]++;break;
        case 16: nRoll[10]++;break;
        case 17: nRoll[11]++;break;
        case 18: nRoll[12]++;break;
        case 19: nRoll[13]++;break;
        case 20: nRoll[14]++;break;
        case 21: nRoll[15]++;break;
        case 22: nRoll[16]++;break;
        case 23: nRoll[17]++;break;
        case 24: nRoll[18]++;break;
        case 25: nRoll[19]++;break;
        case 26: nRoll[20]++;break;
        case 27: nRoll[21]++;break;
        case 28: nRoll[22]++;break;
        case 29: nRoll[23]++;break;
        case 30: nRoll[24]++;break;
        case 31: nRoll[25]++;break;
        case 32: nRoll[26]++;break;
        case 33: nRoll[27]++;break;
        case 34: nRoll[28]++;break;
        case 35: nRoll[29]++;break;
        case 36: nRoll[30]++;break;
        default:
            cout<<"You Don't Know What is Happening"<<endl;
    }
}


