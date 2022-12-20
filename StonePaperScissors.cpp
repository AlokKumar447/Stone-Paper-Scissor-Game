#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
 
 int main(){

    int n;
    cout<<"How many times you want to play!  ";
    cin>>n;
    int cs=0,us=0;
    for(int i=1;i<=n;i++){
    string u;
    cout<<"What do you choose ! : ";
    cin>>u;
    string arr[3]={"stone","scissors","paper"};
    srand(time(0));
    int a=rand()%3;
    string s=arr[a];
    if(u=="stone" && s=="stone"){
        cout<<"computer: STONE";
        cout<<endl;
        //cout<<"Tie"<<endl;
        cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;

    }
    else if(u=="stone" && s=="scissors"){
        cout<<"computer: SCISSORS ";
        cout<<endl;
        //cout<<"YOU WON!"<<endl;
        us++; 
        cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
    }
     else if(u=="stone" && s=="paper"){
        cout<<"computer: PAPER";
        cout<<endl;
       // cout<<"YOU LOOSED"<<endl;
        cs++;
        cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
    } 
    else if(u=="scissors" && s=="stone"){
        cout<<"computer: STONE";
        cout<<endl;
        // cout<<"YOU LOOSED"<<endl;
        cs++;
        cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
        
    }

 else if(u=="scissors" && s=="scissors"){
       cout<<"computer: SCISSORS ";
       cout<<endl;
       //cout<<"Tie"<<endl; 
       cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
    }

 else if(u=="scissors" && s=="paper"){
   cout<<"computer: PAPER"; 
   cout<<endl;
      // cout<<"YOU WON!"<<endl;
      us++; 
      cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
      
    }


 else if(u=="paper" && s=="stone"){
     
       cout<<"computer: STONE";
       cout<<endl; 
       //cout<<"YOU WON!"<<endl;  
       us++;
       cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
    }

     else if(u=="paper" && s=="scissors") {
        cout<<"computer: SCISSORS ";
        cout<<endl; 
        //cout<<"YOU LOOSED"<<endl;
        cs++;
        cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
    }


     else if(u=="paper" && s=="paper"){
       cout<<"computer: PAPER"<<endl;  
       cout<<endl;
       cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
   //cout<<"Tie"<<endl; 
    }
    }
    cout<<"================================================"<<endl;
    cout<<"Overall Score:"<<endl;
cout<<"computer:"<<cs<<endl;
cout<<"yours:"<<us<<endl;
if(us>cs){ cout<<"overall winner is YOU !  congrats!!!"<<endl;}
else if(cs>us){ cout<<"overall winner is COMPUTER!";}
else { cout<<"Match was a TIE!";}
return 0;


 }