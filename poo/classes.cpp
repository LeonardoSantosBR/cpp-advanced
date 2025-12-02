#include <iostream>
using namespace std;

class FirstRule
{
public:
    void helloWorld()
    {
        cout << '\n'
             << "Olá Mundo!" << '\n';
    }
};

int main()
{
    FirstRule firstRule;
    firstRule.helloWorld();
    return 0;
}
