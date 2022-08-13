#include <iostream>
using namespace std;

/***
 * We have to include our class file in this file so that our code is able to figure out that we are talking about that particular class.
 * We also can write the class code here directly but its good practice to make it separate as a component so we are able to use it in different files.
 ***/
#include "Class.cpp"

int main()
{

    // Statically
    /***
     * syntax:
     *  Type <name>
     * It is same as decalring an int variable
     * In case of Classes we called them Object
     ***/

    int intTypeVariable;
    FirstClass FirstClassTypeObject;

    // Assiging Values to properties of Obejct
    /***
     * As there can be many properties in a particular class so we need to specify which property we are talking about
     * syntax:
     *  <Object Name>.<property name> = value
     * If we dont assign specifficaly, on creation of object compiler assign garbage values to them implicitly
     ***/

    FirstClassTypeObject.property1 = 1;
    FirstClassTypeObject.property2 = 2;
    FirstClassTypeObject.property3 = "string";

    // Dynamically
    /***
     * syntax:
     *  Type* <pointer name> = new <Type>
     * It is same as decalring an int variable
     * In case of Classes we called them Object
     ***/

    int *intTypePointer = new int;
    FirstClass *FirstClassTypePointer = new FirstClass;

    // Assiging Values to properties of Object
    /***
     * syntax:
     *  (*<Pointer Name>).<property name> = value
     *  <Pointer Name> -> <property name> = value
     * We need to first destructure the pointer and then specify the property.
     * If we dont assign specifficaly, on creation of object compiler assign garbage values to them implicitly
     ***/

    (*FirstClassTypePointer).property1 = 1;
    FirstClassTypePointer->property2 = 2;
    FirstClassTypePointer->property3 = "string";
}