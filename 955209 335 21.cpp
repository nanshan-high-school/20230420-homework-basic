#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> account, password, name;
  while(true){
    cout << "登入按1  註冊按2  修改密碼按3  結束按4\n";
    int a;
    cin >> a;
    if(a==2){
      bool a=true;
      string x, y, z;
      cout << "帳號：";
      cin >> y;
      for(int i=0;i<account.size();i++){
        if (y == account[i]){
          cout << "此帳號已經存在\n";
          a=false;
          break;
        }
      }
      if(a==true){
        cout << "密碼：";
        cin >> z;
        cout << "姓名：";
        cin >> x;
        account.push_back(y);
        password.push_back(z);
        name.push_back(x);
      }
    }
    if(a==1){
      bool a=false;
      string y, z;
      cout << "帳號：";
      cin >> y;
      cout << "密碼：";
      cin >> z;
      for(int i=0;i<account.size();i++){
        if (y == account[i] && z == password[i]){
          cout << "歡迎第" << name[i] << "使用者\n";
          a=true;
          break;
        }
      }
      if(a==false){
        cout << "帳號或密碼錯誤\n";
      }
    }
    if(a==3){
      bool a=false;
      string x, y, z;
      cout << "帳號：";
      cin >> y;
      cout << "密碼：";
      cin >> z;
      for(int i=0;i<account.size();i++){
        if (y == account[i] && z == password[i]){
          cout << "歡迎第" << name[i] << "個使用者\n";
          cout << "修改密碼：";
          cin >> x;
          password[i]=x;
          a=true;
        }
      }
      if(a==false){
        cout << "帳號或密碼錯誤\n";
      }
    }
    if(a==4){
      return 0;
    }
  }
  return 0;
}
