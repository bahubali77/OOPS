/***
 * When we create an object of a class it has
 * Separate copy of all the data members of the class
 * They share a same copy/defination of all the member functions of the class.
 * Now this have a issue that if we are using same copy of function for all the object then how compiler figure out which object's data member used in that.
 */

/***
 * "this" is a pointer
 * For each member function compiler implicitly passed a hidden argument as this pointer which is present as local variable for that function.
 * That pointer points to the address of the current object which are used to call that function.
 * this pointer is available for non-static functions only as we are able to call static function member without an object.
 * Type of this pointer is same as pointer to class. If function is defined as const type of this becomes as const too.
 */

/***
 * USE of this pointer
 * When the arguments in a member function has same name as of data member.
 */

class thisPointerClass
{

public:
    int property1;
    int property2;
    string property3;

    thisPointerClass(int property1, int value2)
    {
        // Constructor 1
        this->property1 = property1;
        property2 = value2; // No need of use this pointer as argument name is not same as of data member
        property3 = "Default string";
    }

    int function1(int property1)
    {
        /**
         * as in this function both property1 as argument as well as data member is visible and both are of same name.
         * So, function is not able to distinguish between them it will consider the one which is near to its scope i.e. the argument one
         * To solve this problem we use this pointer to explicitly mention that which property1 is data member.
         */
        this->property1 = property1;
    }
};