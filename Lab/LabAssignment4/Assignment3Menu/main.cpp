/* 
 * File:   main.cpp
 * Author: Scott Renfrow
 * Created on January 17th, 2021, 11:52 AM
 * Purpose: Assignment #3 Menu
 */

//System Level Libraries
#include <iostream>   //I/O Library
#include <string>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu Example for Homework"<<endl;
    cout<<"Type 1 for Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
    cout<<"Type 2 for Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
    cout<<"Type 3 for Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
    cout<<"Type 4 for Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
    cout<<"Type 5 for Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
    cout<<"Type 6 for Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
    cout<<"Type 7 for Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
    cout<<"Type 8 for Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
    cin>>choice;
    
    if(choice=='1')
    {
        //Declare Variables
    string inp1, //The first inputted name 
           inp2, //The second inputted name
           inp3; //The third inputted name
    
    //Initialize or input i.e. set variable values
        cout<<"Sorting Names"<<endl;
        cout<<"Input 3 names"<<endl;
        cin>>inp1>>inp2>>inp3;
    
    //Map inputs -> outputs
    
    //Display the outputs
        if (inp1>inp2 && inp2>inp3) {
            cout<<inp3<<endl;
            cout<<inp2<<endl;
            cout<<inp1;
        } else if (inp1>inp3 && inp3>inp2) {
            cout<<inp2<<endl;
            cout<<inp3<<endl;
            cout<<inp1;
        } else if (inp3>inp2 && inp2>inp1) {
            cout<<inp1<<endl;
            cout<<inp2<<endl;
            cout<<inp3;
        } else if (inp3>inp1 && inp1>inp2) {
            cout<<inp2<<endl;
            cout<<inp1<<endl;
            cout<<inp3;
        } else if (inp2>inp1 && inp1>inp3) {
            cout<<inp3<<endl;
            cout<<inp1<<endl;
            cout<<inp2;
        } else if (inp2>inp3 && inp3>inp1) {
            cout<<inp1<<endl;
            cout<<inp3<<endl;
            cout<<inp2;
        }
    }else if(choice=='2')
    {
        //Declare Variables
    int inp, //The inputted number of books purchased
        nmrPnt; //The number points earned
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Book Worm Points"<<endl;
    cout<<"Input the number of books purchased this month."<<endl;
    cin>>inp;
    cout<<"Books purchased ="<<setw(3)<<inp<<endl;
    
    //Determine the number of books purchased
    if (inp>=4) 
    {
        nmrPnt=60;
        cout<<"Points earned   = 60";
    }
    else 
    {
        if (inp=3) 
        {
            nmrPnt=30;
            cout<<"Points earned   = 30";
        }
        else 
        {
            if (inp=2) 
            {
                nmrPnt=15;
                cout<<"Points earned   = 15";
            }
            else 
            {
                if (inp=1) 
                {
                    nmrPnt=5;
                    cout<<"Points earned   = 5";
                }
                else
                {
                    if (inp=0) 
                    {
                        nmrPnt=0;
                        cout<<"Points earned   = 0";
                    }
                
                }
            }
        }
    }
    }else if(choice=='3')
    {
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
    }else if(choice=='4') 
    {
    //Declare Variables
    string     name1, //The name of the first runner
               name2, //The name of the second runner
               name3; //The name of the the third runner
    float      rnr1T, //The time of runner 1
               rnr2T, //The time of runner 2
               rnr3T; //The time of runner 3
               
    
    
    //Initialize or input i.e. set variable values
        cout<<"Race Ranking Program"<<endl;
        cout<<"Input 3 Runners"<<endl;
        cout<<"Their names, then their times"<<endl;
        cin>>name1;
        cin>>rnr1T;
        cin>>name2;
        cin>>rnr2T;
        cin>>name3;
        cin>>rnr3T;
        
        
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (rnr3T<rnr1T && rnr1T<rnr2T) {
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T;
    } else if (rnr3T<rnr2T && rnr2T<rnr1T) {
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T;
    } else if (rnr2T<rnr3T && rnr3T<rnr1T) {
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T;
    } else if (rnr2T<rnr1T && rnr1T<rnr3T) {
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T;
    } else if (rnr1T<rnr2T && rnr2T<rnr3T) {
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T;
    } else if (rnr1T<rnr3T && rnr3T<rnr2T) {
        cout<<name1<<"\t"<<setw(3)<<rnr1T<<endl;
        cout<<name3<<"\t"<<setw(3)<<rnr3T<<endl;
        cout<<name2<<"\t"<<setw(3)<<rnr2T;
    }
        
    }else if(choice=='5')
    {//Declare Variable
    float mnthBl; //The monthly Bill
    int   hours; //Hours used 
    char  package, //The inputted package
          hrLmt, //The hour limit 
          addHrs; //The additional number of hours after the limit has been reached
    
    //Initialize or input i.e. set variable values
    cout<<"ISP Bill"<<endl;
    cout<<"Input Package and Hours"<<endl;
    cin>>package>>hours;
    
    //Map inputs -> outputs
    switch(package) {
        case 'A': 
        {
            mnthBl=9.95f;
            hrLmt=10;
            addHrs=2;
            break;
        }
        case 'B': 
        {
            mnthBl=14.95f;
            hrLmt=20;
            addHrs=1;
            break;
        }
        case'C':
        {
            mnthBl=19.95f;
            hrLmt=0;
            addHrs=0;
            break;
        }
    }
    if(hours>hrLmt)
    {
        mnthBl+=(hours-hrLmt)*addHrs;
    }
    
    
    //Display the outputs
    cout<<"Bill = $ "<<setw(5)<<showpoint<<setprecision(2)<<fixed<<mnthBl;
        
    }else if(choice=='6')
    {//Declare Variables
     char ply1, //Player one's input of rock, paper, or scissors
          ply2; //Player two's input of rock, paper, or scissors
     
    //Initialize or input i.e. set variable values
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Input Player 1 and Player 2 Choices"<<endl;
    cin>>ply1>>ply2;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (ply1 == 'P') 
    {
        if (ply2 == 'R') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'R') 
    {
        if(ply2 == 'P')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'P')
    {
        if (ply2 == 'P')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 'S')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 == 'R')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 =='S')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'R')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 =='P')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'S')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'r') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'r') 
    {
        if(ply2 == 'p')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 == 'p')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 's')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 == 'r')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 =='s')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'r')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 =='p')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 's')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 'r') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'R') 
    {
        if(ply2 == 'p')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'P')
    {
        if (ply2 == 'p')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'P') 
    {
        if (ply2 == 's')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 == 'r')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'R')
    {
        if (ply2 =='s')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 'r')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 =='p')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'S')
    {
        if (ply2 == 's')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'R') 
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'r') 
    {
        if(ply2 == 'P')
        {
            cout<<"Paper covers rock.";
        }
    } if (ply1 == 'p')
    {
        if (ply2 == 'P')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'p') 
    {
        if (ply2 == 'S')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 == 'R')
        {
            cout<<"Nobody wins.";
        }
    } if (ply1 == 'r')
    {
        if (ply2 =='S')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'R')
        {
            cout<<"Rock breaks scissors.";
        }
    } if (ply1 == 's')
    {
        if (ply2 =='P')
        {
            cout<<"Scissors cuts paper.";
        }
    } if (ply1 == 's')
    {
        if (ply2 == 'S')
        {
            cout<<"Nobody wins.";
        }
    }
        
    }else if(choice=='7')
    {//Declare Variables
    unsigned short n2Cnvrt;
    
    //Initialize or input i.e. set variable values
    cout<<"Arabic to Roman numeral conversion."<<endl;
    cout<<"Input the integer to convert."<<endl;
    cin>>n2Cnvrt;
    
    //Map inputs -> outputs
    
    //Display the outputs
    if (n2Cnvrt>=1000 && n2Cnvrt<=3000) {
    // process or map Inputs to Outputs
        //Determine 1000's, 100's, 10's, 1's 
        unsigned char n1000s, n100s, n10s, n1s;
        n1000s=n2Cnvrt/1000;     //Shift 3 places to the left
        n100s=n2Cnvrt%1000/100; //Remainder of division of 1000 then shift 2 left
        n10s=n2Cnvrt%100/10;    //Remainder of division of 100 then shift 1 left
        n1s=n2Cnvrt%10;         //Remainder of division by 10
        
        //Output the number of 1000's in Roman Numerals
        if (n1000s==3)cout<<n2Cnvrt<<" is equal to MMM";
        if (n1000s==2)cout<<n2Cnvrt<<" is equal to MM";
        if (n1000s==1)cout<<n2Cnvrt<<" is equal to M";
            
        
        
        cout<<(n100s==9?"CM":
               n100s==8?"DCCC":
               n100s==7?"DCC":
               n100s==6?"DC":
               n100s==5?"D":
               n100s==4?"CD":
               n100s==3?"CCC":
               n100s==2?"CC":
               n100s==1?"C":"");
       
        
        if (n10s==9)cout<<"XC";
        if (n10s==8)cout<<"LXXX";
        if (n10s==7)cout<<"LXX";
        if (n10s==6)cout<<"LX";
        if (n10s==5)cout<<"L";
        if (n10s==4)cout<<"XL";
        if (n10s==3)cout<<"XXX";
        if (n10s==2)cout<<"XX";
        if (n10s==1)cout<<"X";
        
        if (n1s==9)cout<<"IX";
        else if (n1s==8)cout<<"VIII";
        else if (n1s==7)cout<<"VII";
        else if (n1s==6)cout<<"VI";
        else if (n1s==5)cout<<"V";
        else if (n1s==4)cout<<"IV";
        else if (n1s==3)cout<<"III";
        else if (n1s==2)cout<<"II";
        else if (n1s==1)cout<<"I";
    }
    else {
        cout<<n2Cnvrt<<" is Out of Range!";
    }
        
    }else if(choice=='8')
    {//Declare Variables
    string inp1, //The first inputted Earth sign 
           inp2; //The second inputted Earth sign
    
    //Initialize or input i.e. set variable values
    cout<<"Horoscope Program which examines compatible signs."<<endl;
    cout<<"Input 2 signs."<<endl;
    cin>>inp1;
    cin>>inp2;

    //Map inputs -> outputs
    
    //Display the outputs
    
    if (inp1=="Taurus" && inp2=="Aries") {
        cout<<"Taurus and Aries are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Leo") {
        cout<<"Taurus and Leo are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Sagittarius") {
        cout<<"Taurus and Sagittarius are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Virgo") {
        cout<<"Taurus and Virgo are compatible Earth signs.";
    }if (inp1=="Taurus" && inp2=="Capricorn") {
        cout<<"Taurus and Capricorn are compatible Earth signs.";
    }if (inp1=="Taurus" && inp2=="Gemini") {
        cout<<"Taurus and Gemini are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Libra") {
        cout<<"Taurus and Libra are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Aquarius") {
        cout<<"Taurus and Aquarius are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Cancer") {
        cout<<"Taurus and Cancer are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Scorpio") {
        cout<<"Taurus and Scorpio are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Pisces") {
        cout<<"Taurus and Pisces are not compatible signs.";
    }if (inp1=="Taurus" && inp2=="Taurus") {
        cout<<"Taurus and Taurus are compatible Earth signs.";
    }if (inp1=="Aries" && inp2=="Taurus") {
        cout<<"Aries and Taurus are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Leo") {
        cout<<"Aries and Leo are compatible Earth signs.";
    }if (inp1=="Aries" && inp2=="Sagittarius") {
        cout<<"Aries and Sagittarius are compatible Fire signs.";
    }if (inp1=="Aries" && inp2=="Virgo") {
        cout<<"Aries and Virgo are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Capricorn") {
        cout<<"Aries and Capricorn are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Gemini") {
        cout<<"Aries and Gemini are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Libra") {
        cout<<"Aries and Libra are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Aquarius") {
        cout<<"Aries and Aquarius are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Cancer") {
        cout<<"Aries and Cancer are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Scorpio") {
        cout<<"Aries and Scorpio are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Pisces") {
        cout<<"Aries and Pisces are not compatible signs.";
    }if (inp1=="Aries" && inp2=="Aries") {
        cout<<"Aries and Aries are compatible Fire signs.";
    }if (inp1=="Leo" && inp2=="Taurus") {
        cout<<"Leo and Taurus are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Aries") {
        cout<<"Leo and Aries are compatible Fire signs.";
    }if (inp1=="Leo" && inp2=="Sagittarius") {
        cout<<"Leo and Sagittarius are compatible Fire signs.";
    }if (inp1=="Leo" && inp2=="Virgo") {
        cout<<"Leo and Virgo are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Capricorn") {
        cout<<"Leo and Capricorn are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Gemini") {
        cout<<"Leo and Gemini are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Libra") {
        cout<<"Leo and Libra are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Aquarius") {
        cout<<"Leo and Aquarius are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Cancer") {
        cout<<"Leo and Cancer are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Scorpio") {
        cout<<"Leo and Scorpio are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Pisces") {
        cout<<"Leo and Pisces are not compatible signs.";
    }if (inp1=="Leo" && inp2=="Leo") {
        cout<<"Leo and Leo are compatible Fire signs.";
    }if (inp1=="Sagittarius" && inp2=="Taurus") {
        cout<<"Sagittarius and Taurus are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Aries") {
        cout<<"Sagittarius and Aries are compatible Fire signs.";
    }if (inp1=="Sagittarius" && inp2=="Leo") {
        cout<<"Sagittarius and Leo are compatible Fire signs.";
    }if (inp1=="Sagittarius" && inp2=="Virgo") {
        cout<<"Sagittarius and Virgo are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Capricorn") {
        cout<<"Sagittarius and Capricorn are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Gemini") {
        cout<<"Sagittarius and Gemini are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Libra") {
        cout<<"Sagittarius and Libra are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Aquarius") {
        cout<<"Sagittarius and Aquarius are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Cancer") {
        cout<<"Sagittarius and Cancer are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Scorpio") {
        cout<<"Sagittarius and Scorpio are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Pisces") {
        cout<<"Sagittarius and Pisces are not compatible signs.";
    }if (inp1=="Sagittarius" && inp2=="Sagittarius") {
        cout<<"Sagittarius and Sagittarius are compatible Fire signs.";
    }if (inp1=="Virgo" && inp2=="Aries") {
        cout<<"Virgo and Aries are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Leo") {
        cout<<"Virgo and Leo are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Sagittarius") {
        cout<<"Virgo and Sagittarius are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Taurus") {
        cout<<"Virgo and Tarus are compatible Earth signs.";
    }if (inp1=="Virgo" && inp2=="Capricorn") {
        cout<<"Virgo and Capricorn are compatible Earth signs.";
    }if (inp1=="Virgo" && inp2=="Gemini") {
        cout<<"Virgo and Gemini are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Libra") {
        cout<<"Virgo and Libra are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Aquarius") {
        cout<<"Virgo and Aquarius are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Cancer") {
        cout<<"Virgo and Cancer are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Scorpio") {
        cout<<"Virgo and Scorpio are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Pisces") {
        cout<<"Virgo and Pisces are not compatible signs.";
    }if (inp1=="Virgo" && inp2=="Virgo") {
        cout<<"Virgo and Virgo are compatible Earth signs.";
    }if (inp1=="Capricorn" && inp2=="Aries") {
        cout<<"Capricorn and Aries are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Leo") {
        cout<<"Capricorn and Leo are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Sagittarius") {
        cout<<"Capricorn and Sagittarius are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Taurus") {
        cout<<"Capricorn and Taurus are compatible Earth signs.";
    }if (inp1=="Capricorn" && inp2=="Virgo") {
        cout<<"Capricorn and Virgo are compatible Earth signs.";
    }if (inp1=="Capricorn" && inp2=="Gemini") {
        cout<<"Capricorn and Gemini are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Libra") {
        cout<<"Capricorn and Libra are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Aquarius") {
        cout<<"Capricorn and Aquarius are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Cancer") {
        cout<<"Capricorn and Cancer are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Scorpio") {
        cout<<"Capricorn and Scorpio are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Pisces") {
        cout<<"Capricorn and Pisces are not compatible signs.";
    }if (inp1=="Capricorn" && inp2=="Capricorn") {
        cout<<"Capricorn and Capricorn are compatible Earth signs.";
    }if (inp1=="Gemini" && inp2=="Aries") {
        cout<<"Gemini and Aries are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Leo") {
        cout<<"Gemini and Leo are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Sagittarius") {
        cout<<"Gemini and Sagittarius are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Taurus") {
        cout<<"Gemini and Taurus are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Virgo") {
        cout<<"Gemini and Virgo are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Capricorn") {
        cout<<"Gemini and Capricorn are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Libra") {
        cout<<"Gemini and Libra are compatible Air signs.";
    }if (inp1=="Gemini" && inp2=="Aquarius") {
        cout<<"Gemini and Aquarius are compatible Air signs.";
    }if (inp1=="Gemini" && inp2=="Cancer") {
        cout<<"Gemini and Cancer are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Scorpio") {
        cout<<"Gemini and Scorpio are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Pisces") {
        cout<<"Gemini and Pisces are not compatible signs.";
    }if (inp1=="Gemini" && inp2=="Gemini") {
        cout<<"Gemini and Gemini are compatible Air signs.";
    }if (inp1=="Libra" && inp2=="Aries") {
        cout<<"Libra and Aries are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Leo") {
        cout<<"Libra and Leo are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Sagittarius") {
        cout<<"Libra and Sagittarius are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Taurus") {
        cout<<"Libra and Taurus are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Virgo") {
        cout<<"Libra and Virgo are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Capricorn") {
        cout<<"Libra and Capricorn are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Gemini") {
        cout<<"Libra and Gemini are compatible Air signs.";
    }if (inp1=="Libra" && inp2=="Aquarius") {
        cout<<"Libra and Aquarius are compatible Air signs.";
    }if (inp1=="Libra" && inp2=="Cancer") {
        cout<<"Libra and Cancer are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Scorpio") {
        cout<<"Libra and Scorpio are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Pisces") {
        cout<<"Libra and Pisces are not compatible signs.";
    }if (inp1=="Libra" && inp2=="Libra") {
        cout<<"Libra and Libra are compatible Air signs.";
    }if (inp1=="Aquarius" && inp2=="Aries") {
        cout<<"Aquarius and Aries are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Leo") {
        cout<<"Aquarius and Leo are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Sagittarius") {
        cout<<"Aquarius and Sagittarius are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Taurus") {
        cout<<"Aquarius and Taurus are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Virgo") {
        cout<<"Aquarius and Virgo are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Capricorn") {
        cout<<"Aquarius and Capricorn are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Gemini") {
        cout<<"Aquarius and Libra are compatible Air signs.";
    }if (inp1=="Aquarius" && inp2=="Libra") {
        cout<<"Aquarius and Libra are compatible Air signs.";
    }if (inp1=="Aquarius" && inp2=="Cancer") {
        cout<<"Aquarius and Cancer are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Scorpio") {
        cout<<"Aquarius and Scorpio are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Pisces") {
        cout<<"Aquarius and Pisces are not compatible signs.";
    }if (inp1=="Aquarius" && inp2=="Aquarius") {
        cout<<"Aquarius and Aquarius are compatible Air signs.";
    }if (inp1=="Cancer" && inp2=="Aries") {
        cout<<"Cancer and Aries are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Leo") {
        cout<<"Cancer and Leo are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Sagittarius") {
        cout<<"Cancer and Sagittarius are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Taurus") {
        cout<<"Cancer and Taurus are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Virgo") {
        cout<<"Cancer and Virgo are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Capricorn") {
        cout<<"Cancer and Capricorn are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Gemini") {
        cout<<"Cancer and Libra are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Libra") {
        cout<<"Cancer and Libra are not compatible  signs.";
    }if (inp1=="Cancer" && inp2=="Aquarius") {
        cout<<"Cancer and Aquarius are not compatible signs.";
    }if (inp1=="Cancer" && inp2=="Scorpio") {
        cout<<"Cancer and Scorpio are compatible Water signs.";
    }if (inp1=="Cancer" && inp2=="Pisces") {
        cout<<"Cancer and Pisces are compatible Water signs.";
    }if (inp1=="Cancer" && inp2=="Cancer") {
        cout<<"Cancer and Cancer are compatible Water signs.";
    }if (inp1=="Scorpio" && inp2=="Aries") {
        cout<<"Scorpio and Aries are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Leo") {
        cout<<"Scorpio and Leo are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Sagittarius") {
        cout<<"Scorpio and Sagittarius are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Taurus") {
        cout<<"Scorpio and Taurus are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Virgo") {
        cout<<"Scorpio and Virgo are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Capricorn") {
        cout<<"Scorpio and Capricorn are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Gemini") {
        cout<<"Scorpio and Libra are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Libra") {
        cout<<"Scorpio and Libra are not compatible  signs.";
    }if (inp1=="Scorpio" && inp2=="Aquarius") {
        cout<<"Scorpio and Aquarius are not compatible signs.";
    }if (inp1=="Scorpio" && inp2=="Cancer") {
        cout<<"Scorpio and Cancer are compatible Water signs.";
    }if (inp1=="Scorpio" && inp2=="Pisces") {
        cout<<"Scorpio and Pisces are compatible Water signs.";
    }if (inp1=="Scorpio" && inp2=="Scorpio") {
        cout<<"Scorpio and Scorpio are compatible Water signs.";
    }if (inp1=="Pisces" && inp2=="Aries") {
        cout<<"Pisces and Aries are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Leo") {
        cout<<"Pisces and Leo are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Sagittarius") {
        cout<<"Pisces and Sagittarius are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Taurus") {
        cout<<"Pisces and Taurus are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Virgo") {
        cout<<"Pisces and Virgo are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Capricorn") {
        cout<<"Pisces and Capricorn are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Gemini") {
        cout<<"Pisces and Libra are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Libra") {
        cout<<"Pisces and Libra are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Aquarius") {
        cout<<"Pisces and Aquarius are not compatible signs.";
    }if (inp1=="Pisces" && inp2=="Cancer") {
        cout<<"Pisces and Cancer are compatible Water signs.";
    }if (inp1=="Pisces" && inp2=="Scorpio") {
        cout<<"Pisces and Scorpio are compatible Water signs.";
    }if (inp1=="Pisces" && inp2=="Pisces") {
        cout<<"Pisces and Pisces are compatible Water signs.";
    }
        
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}