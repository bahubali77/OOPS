/***
 * Static Variable in Function
 * The variable is created only once which means its memory is allocated only once throughout the scope of the whole program.
 * The value of that variable is also preserved throughtout the scope of program doesn't matter how many calls are made.
 */

/***
 * Static VAriable in CLass
 * In class only cone copy of static variable is created and shared by all the objects
 * As it is not unique to object it is not initialized by constructor.
 * We initialize it outside the class using scope resolution operator (::).
 * syntax : <dataType> <className> :: <variableName> = value;

 * We can access and update it through class as well as object too, but its good practice to use only class.
 * We are also able to create static objects for a class.
*/

#include <iostream>
using namespace std;

class StaticVariableClass
{
public:
    static int staticVarClass;

    StaticVariableClass()
    {
        staticVarClass++;
    }
};

int StaticVariableClass ::staticVarClass = 0;

void function1()
{
    static int staticVariable = 0;
    cout << staticVariable << " ";

    staticVariable++;
}
int main()
{

    // Static Variable in Function
    function1();
    function1();
    function1();

    // Sttaic Variable in Class
    // Accessing through class
    cout << StaticVariableClass ::staticVarClass << endl;

    StaticVariableClass obj1;
    // accessing and updating through object
    cout << obj1.staticVarClass << endl;
    StaticVariableClass obj2;
    obj2.staticVarClass = 20;
    cout << obj2.staticVarClass << endl;

    // Static object
    static StaticVariableClass obj;
}