/***
 * Static Member Funtion
 * We can create  static member function in class, its scope is same as static variable.
 * Only one copy is created and dont depends on objects
 * Can be call through class as well as objects, but its good practice to call using class.
 * It is only able to access static variables and static member functions.
 * It is not have this pointer.
 */

#include <iostream>
using namespace std;

class StaticFunctionClass
{
public:
    static void function()
    {
        cout << "I am static funtion";
    }
};

int main()
{
    StaticFunctionClass ::function();
}