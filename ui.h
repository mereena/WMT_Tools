#ifndef UI_H
#define UI_H
#include <iostream>
using namespace std;

class UI
{
public:
    UI();
    static string encryptAccount(string password);
    void mainMenu(bool);
};

#endif // UI_H
