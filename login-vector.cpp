#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool found;
    int acc, login, change;
    string rU, rP, rFN, rLN, lU, lP;
    vector <string> Usernames;
    vector <string> Passwords;
    vector <string> FirstNames;
    vector <string> LastNames;

    cout << "Count: ";
    cin >> acc;

    for (int i = acc; i >= 1; i--) {
        if (i == 1) {
            cout << endl << "(" << i << " remaining account can be registered)" << endl;
        } else if (i > 1) {
            cout << endl << "(" << i << " remaining accounts can be registered)" << endl;
        }
        cout << "First Name: ";
        cin >> rFN;
        FirstNames.push_back(rFN);
        cout << "Last Name: ";
        cin >> rLN;
        LastNames.push_back(rLN);
        cout << "Username: ";
        cin >> rU;
        for (int j = 0; j < Usernames.size(); j++) {
            if (rU == Usernames[j]) {
                cout << "That username is taken. Try another." << endl;
                break;
            }
        }
        Usernames.push_back(rU);
        cout << "Password: ";
        cin >> rP;
        Passwords.push_back(rP);
        cout << "REGISTRATION SUCCESSFUL" << endl << "---" << endl;
    }

    cout << endl << "Login? (Yes:1 / No:0)" << endl;
    cin >> login;
    if (login == 0) {
        cout << "(EXIT SYSTEM)" << endl;
    } else if (login == 1) {
        cout << "Username: ";
        cin >> lU;
        cout << "Password: ";
        cin >> lP;
        cout << endl;
        for (int i = 0; i < Usernames.size(); i++) {
            if ((lU == Usernames[i]) && (lP == Passwords[i])) {
                cout << "Welcome, " << LastNames[i] << endl << "You're user " << i+1 << endl << endl;
                found = true;
                cout << "Change Password? (Yes:1 / No:0)" << endl;
                cin >> change;
                if (change == 0) {
                    cout << "(EXIT SYSTEM)" << endl;
                } else if (change == 1) {
                    cout << "Old Password: ";
                    string oldPw, newPw;
                    cin >> oldPw;
                    if (oldPw == Passwords[i]) {
                        cout << "New Password: ";
                        cin >> newPw;
                        Passwords[i] = newPw;
                        cout << "PASSWORD CHANGED" << endl;
                        cout << "Account" << i+1 << endl;
                        cout << "Username: " << Usernames[i] << endl;
                        cout << "Password: " << Passwords[i] << endl;
                    } else {
                        cout << "Password incorrect" << endl;
                    }
                }
                break;
            }
         
            if ((i == Usernames.size() - 1) && (found == false)) {
                cout << "Incorrect username or password." << endl;
                break;
            }
        }
    }
}