#include <iostream>
using namespace std;

class Dad
{
public:
    int age()
    {
        return 35;
    }
    int age(int age)
    {
        return age;
    }
};

class Son : public Dad
{
public:
    int age()
    {
        return 10;
    }
    int age(int age)
    {
        return age;
    }
};

main()
{
    Dad new_dad;
    Son new_son;

    cout << '\n'
         << "age() de pai é: " << new_dad.age();
    cout << '\n'
         << "age(int age) de pai é: " << new_dad.age(45);
    cout << '\n'
         << "age() de filho é: " << new_son.age();
    cout << '\n'
         << "age(int age) de filho é: " << new_son.age(15);

    return 0;
}
