#include "ui.h"
#include "printer.h"
#include "interfacecontroller.h"
#include <stdlib.h>

UI::UI()
{
   this->mainMenu(false);
}

void UI::mainMenu(bool loggedIn){
    if(!loggedIn){
        Printer::logInHeader();

        string username,password;
        cout<<"Enter username: ";
        cin>>username;
        cout<<"Enter password: ";
        cin>>password;

        InterfaceController controller;
        bool result = controller.login(username,UI::encryptAccount(password));
        mainMenu(result);
    }else{
        system("clear");
        Printer::printMainHeader();
        Printer::menu();
    }
}

string UI::encryptAccount(string strTarget){
    int len = strTarget.length();
    char a;
    string strFinal(strTarget);

    for (int i = 0; i <= (len-1); i++)
    {
        a = strTarget.at(i);
        int b = (int)a; //get the ASCII value of 'a'
        b += 2; //Mulitply the ASCII value by 2
        if (b > 254) { b = 254; }
        a = (char)b; //Set the new ASCII value back into the char
        strFinal.insert(i , 1, a); //Insert the new Character back into the string
    }
    string strEncrypted(strFinal, 0, len);
    strTarget = strEncrypted;

    return strTarget;
}
