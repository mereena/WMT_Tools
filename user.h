#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;

class User
{
private:
    int userID;
    string name;
    string password;
    int numbOfAttempt;
    bool lock_status;
public:
    User();
    static void lockAccount(string username);
    static User* verifyPassword(string username,string password);

    //setters
    void setUserID(int id){
        this->userID=id;
    }
    void setPassword(string password){
        this->password=password;
    }
    void setName(string name){
        this->name=name;
    }

    void incrementNumbOfAttempts(){
        this->numbOfAttempt++;
    }

    void setNumberOfAttempts(int num){
        this->numbOfAttempt=num;
    }

    //getters
    int getUserID(){
        return this->userID;
    }

    string getName(){
        return this->name;
    }

    string getPassword(){
        return this->password;
    }

    int getNumberOfAttempts(){
        return this->numbOfAttempt;
    }

    bool isLocked(){
        return this->lock_status;
    }

    void lock(){
        this->lock_status=true;
    }
    void unLock(){
        this->lock_status=false;
    }

    friend ostream &operator<<(std::ostream &output,User &user){
        output<<user.userID<<":"<<user.name<<":"<<user.password<<":"<<user.numbOfAttempt;
        return output;
    }
};

#endif // USER_H
