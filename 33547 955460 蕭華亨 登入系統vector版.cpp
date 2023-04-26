#include <iostream>
#include <vector>
using namespace std;
int main() {

int i = 0;
vector<string> name;
vector<string> secret;
bool test = false;
    string change;
    string sign;
    string fill;
    string newsign;
    string newsecret;
    string newpassword;
    while(true){
    cout << "請輸入帳號(若沒有帳號請輸入我要創建新帳號):";
    cin >> sign;
        if(sign == "我要創建新帳號"){
        test = true;
        cout << "請設定您的新帳號:";
        cin >> newsign;
        if(newsign != "我要創建新帳號"){
            name.push_back(newsign);
            cout << "請設定您的新密碼:";
            cin >> newsecret;
            secret.push_back(newsecret);
            i += 1;
                    }else{
            cout << "不可為系統內建功能文字!!!";
                    }
        cout << "請輸入帳號(若沒有帳號請輸入我要創建新帳號):";
        cin >> sign;
    }
    for(int a = 0; a < i; a++){
        if(sign == name[a]){
            test = true;
            cout << "請輸入密碼:";
            cin >> fill;
            if(fill == secret[a]){
            cout << "成功登入!";
            cout << "是否修改密碼(按1為是，其他按鈕為否)";
            cin >> change;
            if(change == "1"){
                cout << "請輸入您要修改的新密碼:";
                cin >> newpassword;
                secret[a] = newpassword;
                 
            }
            change = '0';
            break;
            }else{
            cout <<"帳號或密碼錯誤";
            break;
        } 
            
        
    }

        }
    if(test == false){
        cout << "請輸入密碼:";
        cin >> fill;
        cout << "帳號或密碼錯誤";
    }
    test = false;
    
    
}    }
