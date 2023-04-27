#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<string> account,password;
  string space,useless;
  int type,num=0,emailtype,year;
  bool logout=false,exist,loop=true;
  system("clear");
  while(logout==false){
    logout=false;
    cout<<'\n'<<"Sign up(1) or log in(2):";
    cin>>type;
    system("clear");
    if(type==1){
      cout<<'\n'<<"Create your accountname:";
      cin>>space;
      account.push_back(space);
      cout<<'\n'<<"Create your password:";
      cin>>space;
      password.push_back(space);
      system("clear");
      cout<<'\n'<<"Creation success,now log in again";
      // logout=true;
    }
    else{
      loop=true;
      while(loop==true){
        cout<<'\n'<<"Enter your accountname:";
        cin>>space;
        exist=false;
        for(int i=0;i<account.size();i++){
          if(space==account[i]){
            exist=true;
            num=i;
            break;
         }
        }
        if(exist==true){
          loop=false;
        }
        else{
          system("clear");
          cout<<'\n'<<"your account doesnt exist,please try again.";
        }
      }
      loop=true;
      while(loop==true){
        cout<<'\n'<<"Enter your password:";
        cin>>space;
        if(space==password[num]){
          loop=false;
        }
        else{
          system("clear");
          cout<<'\n'<<"your password isnt right,please try again.";
        }
      
      }
      system("clear");
      cout<<'\n'<<"Sign in success";
      loop=true;
      while(loop==true){
        cout<<'\n'<<"(1)change password"<<'\n'<<"(2)year calculate"<<'\n'<<"(-1)log out"<<"\n"<<":";
        cin>>emailtype;
        if(emailtype==1){
          cout<<'\n'<<"Enter new password:";
          cin>>space;
          password[num]=space;
          system("clear");
          cout<<'\n'<<"Password changed";
        }
        else if(emailtype==2){
          system("clear");
          cout <<'\n'<<"Enter year:";
          cin>>year;
          if (year%4 == 0 and year%400 != 0)
            cout<<"潤了";
          else
            cout<<"平年";
          cout<<'\n'<<"type any letter to go back to the menu:";
          cin>>useless;
          system("clear");
        }
        else if(emailtype==-1){
          system("clear");
          cout<<'\n'<<"log out success";
          loop=false;
        }
        else{
          system("clear");
          cout<<'\n'<<"selection unexist";
        }
      }
      
    }
  
  
  
  }
}