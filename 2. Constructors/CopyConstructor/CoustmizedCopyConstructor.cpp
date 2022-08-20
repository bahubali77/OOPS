/***
 * In built copy constructor do shallow copy
 * SO if there is dynamically allocated data members present we have to make sure to create our own copy constructor which preform deep copy
 */

/***
 * We are not able to pass argument in copy constructor directly as of class type. For eg: <className>(<className> obj) this is wrong
 * Becoz when we pass argument as pass by value it creates a separate copy of that argument.
 * So it means our copy constructor calls copy constructor again to copy the obj in argument.
 * As we created our own copy constructor hence deafult one is not available which causes an infinite loop as copy constructor keeps calling its self to copy the argument.
 * To avoid that we pass argument as pass by refrence which do not make the copy of the object.
 * We send the refrence as const type so that noone will able to make the changes in the original object.
 */

class CoustmizedCopyConstructorClass
{
private:
public:
    int property1;
    int *deepProperty;

    CoustmizedCopyConstructorClass(CoustmizedCopyConstructorClass const &obj)
    {
        this->property1 = obj.property1;

        // Deep Copy
        // Assigning new memory in heap than copy the actual value pointed by the function argument.
        this->deepProperty = new int;
        *(this->deepProperty) = *(obj.deepProperty);
    }
};
