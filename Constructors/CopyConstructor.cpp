/***
 * Copy Constructor is a constructor that are implicitly created by compiler like default constructor through which we are able to create an object similar to other already created object
 */

/***
 * Copy Assignment OPerator(=)
 * When objects are already created and we want to copy one object into another we use copy assignment operator
 * It work same as copy constructor it just used for already created objects.
 */

class CopyConstrcutorClass
{
};

int main()
{

    CopyConstrcutorClass object1;
    // Static to Static
    CopyConstrcutorClass object2(object1); // Can be intrepeted as object2.CopyConstrcutorClass(object1)

    // Static to Dynamic
    CopyConstrcutorClass *pointer1 = new CopyConstrcutorClass(object1);

    // Dynamic to Static
    CopyConstrcutorClass *pointer2 = new CopyConstrcutorClass;
    CopyConstrcutorClass *pointer3 = new CopyConstrcutorClass(*pointer2);

    // Dynamic to Dynamic
    CopyConstrcutorClass object3(*pointer2);

    // Copy Assignment Operator
    CopyConstrcutorClass object4;

    CopyConstrcutorClass object5;
    CopyConstrcutorClass *pointer4 = new CopyConstrcutorClass;

    // Copies right hand side object's data member in right hand object data members
    object4 = object5;
    *pointer4 = object5;
    object5 = *pointer3;

    /**
     * Special case
     * It is same as
     * CopyConstrcutorClass object6
     * object6 = object5;
     * But It will be interpted as object6.CopyConstrcutorClass(object7) to optimize the calls hence copy constructor is called
     */
    CopyConstrcutorClass object6 = object5;
}