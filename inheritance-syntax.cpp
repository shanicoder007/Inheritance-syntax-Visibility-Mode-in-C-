#include <iostream>
using namespace std;

// Base Class
class Employee
{

    // int Id;        //NOTE:: private members kabhi bhi inherited nahi ho sakty
    //  float salary;

public:
    int id;
    float salary;
    Employee(int inpId)
    {

        id = inpId;
        salary = 45.5;
    }
    Employee() {}
};
/* Drive Class Syntax

class {{derived-class-name}} : {{visibility mode}}  {{ base class name}}

NOTE(IMPORTANT):

Visibility Mode :1: (public visibility mode) , 2: (private visibility mode)
public visibility mode : Public members of base class becomes public members of derived class
private visibility mode : Public members of base class becomes private members of derived class

creating Derived Syntax*/

class Programmer : Employee
{

public:
    Programmer(int inpId)
    {

        id = inpId;
    }
    int language = 10;
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee zeeshan(1), talha(2);
    cout << zeeshan.salary << endl;
    cout << talha.salary << endl;
    Programmer skillF(20);
    cout << skillF.language << endl;
    skillF.getData();

    return 0;
}