/***
 * Destructor is a function same as constructor its just constructor is used to create object destructor is used to destroy an object
 * syntax:
     * ~<className>(){
     *
     * }

 * A class can only have one destructor declared in public section.
 * It is same name of class with no arguments and no return type
 * It destroy an obejct just before the scope of that object is supposed to end.
 * It is called in reverse order of object creation. (last created obejct destroyed first).
 * It cannot be static or const.
 * We can create our own destructor only one for a classbut then default constructor will not call.
     * Defalut constructor is not able to destroy object created by new (dynamically created objects) as they resides in heap memory.
     * It is our responsiblity to clean that memory so thats why we can create coustmized destructors.
*/

class DestructorClass
{

public:
    DestructorClass()
    {
        // constructor
    }

    ~DestructorClass()
    {
        // destructor
    }
};
