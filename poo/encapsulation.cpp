#include <iostream>
#include <string>
using namespace std;

class User
{
public:
    string name;
    string email;
    int age;
    User(string un, string ue, int ua, string uccn, string ups) : name(un), email(ue), age(ua), credit_card_number(uccn), password(ups) {}

private:
    string credit_card_number;
    string password;
};

main()
{
    User new_user("user1", "user1@gmail.com", 30, "XXXXXXX", "YYYYY");
    return 0;
}