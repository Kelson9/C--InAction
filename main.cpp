#include <iostream>
#include <fstream>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <string>
using namespace std;
void welcome();
void create();
void withdraw();
void deposit();
void help();
void check();
int menu();
void exit();
void open();
int x,y,z,num,m,date,date1,date2;
string u,v,a,b,name,name1,name2,password,email;

int main()
{
    welcome();
    menu();

    return 0;
}

//WELCOME function
void welcome(){
    cout<<"HI---------------------"<<endl;
    cout<<endl<<endl<<endl;
    system("color 2a");
    system("color 0d");
system("Timeout 1");
cout<<endl<<endl<<endl;
cout<<"W";
system("Timeout 1");
system("cls");
cout<<"WE";
system("Timeout 1");
system("cls");
cout<<"WEL";
system("Timeout 1");
system("cls");
cout<<"WELC";
system("Timeout 1");
system("cls");
cout<<"WELCO";
system("Timeout 1");
system("cls");
cout<<"WELCOM";
system("Timeout 1");
system("cls");
cout<<"WELCOME";
system("Timeout 1");
system("cls");
    cout<<"WELCOME TO KELSON'S  BANKING SOFTWARE"<<endl;
    system("TIMEOUT 4");
    system("cls");
    system("color 1e");
    cout<<"K.T.B"<<endl;
        cout<<"K.T.B"<<endl;    cout<<"K.T.B"<<endl;    cout<<"K.T.B"<<endl;    cout<<"K.T.B"<<endl;    cout<<"K.T.B"<<endl;
    system("TIMEOUT 1");

    system("color 2a");
    system("cls");
}

//TO CREATE AN ACCOUNT
void create(){
    system("cls");

system("color 1a");
ofstream bankA("KELSON.txt",ios::app);
cout<<"PLEASE ENTER YOUR FIRST NAME"<<endl;
cin>>name;
cout<<"PLEASE ENTER YOUR SECOND NAME"<<endl;
cin>>name1;
cout<<"PLEASE ENTER YOUR LAST NAME"<<endl;
cin>>name2;
cout<<"PLEASE ENTER YOUR DAY OF BIRTH IN FIGURES"<<endl;
cin>>date;
cout<<"ENTER YOUR MONTH OF BIRTH IN FIGURES"<<endl;
cin>>date1;
cout<<"ENTER YOUR YEAR OF BIRTH"<<endl;
cin>>date2;
cout<<"PLEASE ENTER YOUR EMAIL ADDRESS"<<endl;
cin>>email;
cout<<endl;
cout<<"PLEASE ENTER YOUR PASSWORD.(Password should be atleast 8 characters and should contain letters and numbers)"<<endl;
cin>>password;
cout<<endl;
cout<<"THIS QUESTIONS ARE ASKED INCASE YOU FORGET YOUR PASSWORD.PLEASE GIVE A RESPONSE TO THEM"<<endl;
cout<<"WHAT IS YOUR FAVORITE MEAL?"<<endl;
cin>>u;
cout<<"WHAT IS YOUR FAVOURITE COLOR?"<<endl;
cin>>v;
cout<<endl<<endl<<endl<<endl;
cout<<"HELLO\t"   <<name<<  "\t your account has been successfully created.PLease check the other options to either deposit or if you need help"<<endl;
cout<<"PRESS 1 TO GO TO MAIN MENU OR 0 TO EXIT"<<endl;
cin>>z;
if(z==1){
    menu();
}
else{
        exit();
    cout<<"THANKS FOR TRUSTING US YOU HAVE SUCCESSFULLY CLOSE THE PROGRAM"<<endl;
}
while(cin>>name>>name1>>name2>>date>>date1>>date2>>email>>password>>u>>v){
    bankA<<name<<name1<<name2<<date<<date1<<date2<<email<<password<<u<<v<<endl;
}
  if(bankA.is_open()){
    cout<<"YOU HAVE SUCCESSFULLY CREATED YOUR ACCOUNT:"<<endl;
}
else{
    cout<<"SORRY, YOUR FILE WASN'T OPEN IN OUR DATABASE"<<endl;

}

system("cls");

bankA.close();
}


//DEPOSIT
void deposit(){
system("cls");
    cout<<endl<<endl<<endl<<endl<<endl;
    ofstream bankA("KELSON.txt");
    cout<<"ENTER THE AMOUNT in figures YOU WISH TO DEPOSIT:"<<endl;
    cin>>x;
    cout<<" you have successfully deposited\t" <<x<< "\tin your account"<< "PRESS 1 TO GO TO MAIN MENU OR 0 TO EXIT"<<endl;
cin>>z;
if(z==1){
    menu();
}
else{
        exit();
    cout<<"THANKS FOR TRUSTING US YOU HAVE SUCCESSFULLY CLOSE THE PROGRAM"<<endl;
system("cls");
}
while(cin>>x){
        bankA<<x<<endl;

    }
    }

//MENU
 int menu(){
       int n;
    cout<<"WELCOME DEAR CUSTOMER!! PLEASE SELECT:"<<endl;
    cout<<1<<  "\t-- To create an account"<<endl;
    cout<<2<< "\t-- To deposit"<<endl;
    cout<<3<< "\t--To withdraw"<<endl;
    cout<<4<< "\t--To check your balance"<<endl;
    cout<<5<< "\t--To ask for help"<<endl;
    cout<<6<<"\t--choose this if you already have an account and you wish to see your credentials"<<endl;
    cin>>n;
    switch(n){

case 1:create();
             break;
case 2: deposit();
              break;
case 3:withdraw();
             break;
case 4:check();
             break;
case 5:help();
             break;
case 6: open();
             break;
default:cout<<"INVALID INPUT"<<endl;}
cout<<"PRESS 0 TO RETURN TO MAIN MENU:"<<endl;
cin>>m;
if(m==0){
    menu();
}
else{
    cout<<"INVALID ENTRY"<<endl;}
    return 0;
    }

//TO WITHDRAW
void withdraw(){
    system("cls");

    cout<<endl<<endl<<endl<<endl;

cout<<"ENTER THE AMOUNT YOU WISH TO WITHDRAW"<<endl;
cin>>y;
if(y>x){
    cout<<"SORRY YOU DON'T HAVE UPTO THAT AMOUNT"<<endl;
}
else{
    cout<<"YOU HAVE SUCCESSFULLY WITHDRAWN\t" <<y<< "from your account . YOUR CURRENT BALANCE IS:\t"<<x-y<<endl;
}

    cout<< "PRESS 1 TO GO TO MAIN MENU OR 0 TO EXIT"<<endl;
cin>>z;
if(z==1){
    menu();
}
else{
        exit();
    cout<<"THANKS FOR TRUSTING US YOU HAVE SUCCESSFULLY CLOSE THE PROGRAM"<<endl;
    }

    }

//check account
void check(){
    system("cls");
    cout<<endl<<endl<<endl<<endl;
cout<<"YOUR CURRENT BALANCE IS:"<<x-y<<endl;

    cout<< "PRESS 1 TO GO TO MAIN MENU OR 0 TO EXIT"<<endl;
cin>>z;
if(z==1){
    menu();
}
else{
        exit();
    cout<<"THANKS FOR TRUSTING US YOU HAVE SUCCESSFULLY CLOSE THE PROGRAM"<<endl;
}

}

//help
void help(){
system("cls");
    cout<<endl<<endl<<endl<<endl;
    cout<<"SELECT AN  OPTION YOU NEED OUR HELP IN:"<<endl;
    cout<<1 <<"\tif you forgot password"<<endl;
    cout<<2<<"\tif you need information about the developer"<<endl;
    cout<<3<<"\tif you need a manual guide for the software"<<endl;
    int c;
    cin>>c;
    switch(c){
case 1:
          cout<<"FORGOT PASSWORD?"<<endl;
          cout<<"PLEASE TELL US WHAT YOUR FAVORITE MEAL IS:"<<endl;
           cin>>a;
            cout<<"PLEASE TELL US WHAT  YOUR FAVORITE COLOR IS:"<<endl;
           cin>>b;
if(a==u && b==v){
    cout<<" YOUR ANSWERS MATCH CORRECTLY....PLEASE ENTER A NEW PASSWORD"<<endl;
    cin>>password;
}
else{
    cout<<"OOPSSS!! YOUR ANSWERS DIDN'T MATCH"<<endl;

}
break;
case 2:
       cout<<"THERE IS NOTHING MUCH ABOUT THE DEVELOPERS. IT'S A JOINT PROJECT CREATED BY,\n" "KELSON,BIZZOLA AND TEDDY. THEY ARE A GROUP OF VERY CREATIVE AND ASPIRING ENGINEERS\n" "THANKS FOR USING OUR PRODUCT."<<endl;
       cout<<"COMPANY NAME:K.T.B\t"  "TEL:+237682818678\t" "ADDRESS:UB JUNCTION"<<endl;
       break;
case 3:
    cout<<"WE ARE SORRY THE MANUAL ISN'T AVAILABLE NOW. WE ARE ON THE GO IN PRODUCING A SIMPLIFIED MANUAL. YOUR PATIENCE WILL BE APPRECIATED"<<endl;
    break;
    }
    cout<<"PRESS 1 TO GO TO MAIN MENU OR 0 TO EXIT"<<endl;
cin>>z;
if(z==1){
    menu();
}
else{
        exit();
    cout<<"THANKS FOR TRUSTING US YOU HAVE SUCCESSFULLY CLOSE THE PROGRAM"<<endl;

}

}
void exit(){
cout<<"THE PROGRAM WILL EXIT IN 3 SECONDS-------"<<endl;
system("timeout 3");
system("cls");
}
void open(){
    string fname,pass;
    ifstream bankA("KELSON.txt");
cout<<"ENTER YOUR FIRST NAME"<<endl;
cin>>fname;
cout<<"ENTER YOUR PASSWORD"<<endl;
cin>>pass;
if(fname==name && password==pass){
        while(bankA>>name>>name1>>name2>>date>>date1>>date2>>email>>password>>u>>v){
            cout<<name<<","<<name1<<","<<name2<<","<<date<<","<<date1<<","<<date2<<","<<email<<","<<password<<","<<u<<","<<v<<endl;
        cout<<"YOUR CURRENT BALANCE IS:"<<x-y<<endl;
}
}
}
