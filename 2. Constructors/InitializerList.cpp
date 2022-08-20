/***
 * INITIALIZATION LIST
 * It is used to initialize data member on the time of memory allocation.
 */

/***
 * In constructor, memory of data members are allocated when we just enter it and then values are assigned to them.
 * These causes trouble when we have to deal with data member which are defined as const or refrence as they need to be initialize at the time of memory allocation itself.
 * CONST Variable : We cannot change its value once its created. So we have to assign value on the time of declaration itself otherwise compiler assign garbage value which gives error
 * Similar case with refrence variable as it is used as alias to already created variable so if compiler assign garbage value it is also of no use.

 * So we used to assign value to this type of variables as initalizer list assign value on the time of memory allocation itself.
*/

class InitializationListClass
{

public:
    int property1;
    int const constVariable;
    int &refrenceVariable; // refrence to property1

    // we dont have to use this operator in initialization list, but in reference variable we use this when we refer to another data member to distinguish.
    InitializationListClass(int constVariable, int property1) : property1(property1), constVariable(constVariable), refrenceVariable(this->property1)
    {
    }
};