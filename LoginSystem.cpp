#include <iostream>
#include <vector>
using namespace std;

void registor();
void login();
void change();

vector<string> accounts;
vector<string> passwords;
vector<string> changepassword;

int main() {
    while (true) {
        cout << "註冊(1) 或 登入(2) 或 改密碼(3)\n";
        char option;
        cin >> option;
    
        if (option == '1') {
            registor();
        } else if (option == '2') {
            login();
        } else if (option == '3') {
            change();
        } else {
            cout << "無效的指令，請重新輸入：\n";
        }
    }
}

void registor() {
    cout << "請輸入帳號：\n";
    string input_account;
    cin >> input_account;
    accounts.push_back(input_account);

    cout << "請輸入密碼：\n";
    string input_password;
    cin >> input_password;
    passwords.push_back(input_password);
}

void login() {
    cout << "請輸入帳號：\n";
    string login_account;
    cin >> login_account;

    cout << "請輸入密碼：\n";
    string login_password;
    cin >> login_password;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
        if (login_account == accounts[i] && login_password == passwords[i]) {
            cout << "歡迎第" << i + 1 << "個使用者\n";
            found = true;
            break;
        }
    }
    if (found == false) {
        cout << "無效的帳號或密碼\n";
    }
}
void change() {
    cout << "請輸入帳號：\n";
    string login_account;
    cin >> login_account;

    cout << "請輸入密碼：\n";
    string login_password;
    cin >> login_password;

    bool found = false;
    for (int i = 0; i < accounts.size(); i++) {
         if (login_account == accounts[i] && login_password == passwords[i]) {
             cout << "請輸入你想改的密碼：\n";
             string newpassword;
             cin >> newpassword;
             passwords[i] = newpassword;
         }
    }
}
    
