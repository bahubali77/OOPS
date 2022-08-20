/***
 *
 * CONST OBJECT
 * Like normal variable we are also able to make objects as const
 * They are not allowed to change any of its data member value.
 * They are not able to any normal function of class
     * As compiler through error becuase it sees that object is const but the function is normal so there is a chance we can make change inside of that function.
 * So we have to make those functions const which donot make any change to any data member. It is good practice to make appropiate function const.

 * Const object only able to call const function but normal object can call any function, const or non cont function.
*/

#include <iostream>
using namespace std;

class ConstFunctionCLass
{

public:
    int property1;

    ConstFunctionCLass()
    {
    }

    ConstFunctionCLass(int property1) : property1(property1)
    {
        // this->property1 = property1;
    }

    // Const function
    int example() const
    {
        cout << this->property1;
    }
};

int main()
{
    // Const Object
    ConstFunctionCLass const obj1(10);
    obj1.example();
}