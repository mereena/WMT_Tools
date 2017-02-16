#include "user.h"
#include "database.h"

User::User()
{
    this->lock_status=false;
    this->numbOfAttempt=0;
}


User* User::verifyPassword(string username, string password){
    return Database::checkUser(username);
}

void User::lockAccount(string username){
    Database::lockUser(username);
}
