#include <iostream>
#include <vector>
using namespace std;
vector<string> account;
vector<string> code;
bool check(string j){
      for (int i = 0; i < account.size(); i++) {
        if (j == account[i]) {

          return true;
        }
      } 
  return false;
}
int main() {


  while (true) {
    int a;
    cout << "登入按1，註冊按2\n";
    cin >> a;
    if (a == 1) {
      string q;
      cout << "輸入帳號\n";
      cin >> q;
      string z;
      cout << "輸入密碼\n";
      cin >> z;
      int f=0;
      for (int i = 0; i < account.size(); i++) {
        if (q == account[i]) {
          if (z == code[i]) {
            string newcode;
            cout << "登入成功\n輸入新密碼\n";
            cin >> newcode;
            code[i] = newcode;
            f=1;
          }
          
          break;
        }
      }
      if(f==0){
        cout << "登入失敗\n";
      }
    } else if (a == 2) {
      string creataccount;
      do{
        cout << "帳號名稱\n";
        cin >> creataccount;
      }while(check(creataccount));
      
      account.push_back(creataccount);
      cout << "密碼\n";
      string creatcode;
      cin >> creatcode;
      code.push_back(creatcode);
    }
  }
}
