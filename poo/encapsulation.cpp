#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string cpf = "XXX.XXX.XXX-XX";

protected:
    double height = 1.90;

public:
    string name = "person";
};

class Habilities : public Person
{
public:
    string hability1 = "polyglot";
    string hability2 = "programmer";
};

class Datas : public Habilities
{
};

int main()
{
    Datas dados;
    return 0;
}