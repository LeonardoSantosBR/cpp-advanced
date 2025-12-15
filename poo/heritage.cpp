#include <iostream>
#include <string>
using namespace std;

class Player
{
public:
    string name;
    string club;
    int age;
    int shirt_number;
    Player(string pn, string pc, int pa, int ps) : name(pn), club(pc), age(pa), shirt_number(ps) {}
};

class Skills : public Player
{
public:
    int speed;
    int acceleration;
    int ball_pass;
    Skills(string pn, string pc, int pa, int ps, int ss, int sa, int sb) : Player(pn, pc, pa, ps), speed(ss), acceleration(sa), ball_pass(sb) {}
};

int main()
{
    Skills new_player("Messi", "Barcelona", 33, 10, 95, 94, 92);
    return 0;
}
