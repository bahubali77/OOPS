/***
 * Whenever we create an object of any class a special function is called automatically to initialize its property called as constructor
 * For eg:
     *  FirstClass object1;  //Creating an object of class FirstClass
     *  So it will be compiled as
         *  object1.FirstClass();  , where FirstClass() is a default constructor of class FirstClass.
     *  Same in static and dynamic both cases

 * Default constructor are present by default in class we dont have to crete it but we are able to coutmise construtor according to our need.

 *  Important points of Constructor :
     * It is of same name as of the class
     * It has no return type
     * If we dont create any constructor, Compiler automatically generate default constructor
     * It has no arguments
     * It is declared in public section
     * It is called automatically when object is created. For an object only one constructor is called at the time of object's creation.

 * We are able to define our own constructor. When we create our construtor default constructor will not be called.
*/

#include <iostream>
using namespace std;

class DefaultConstructorClass
{
public:
    int a;
    int b;

    /*
    Constructor
    Intialize a with 10 and b with 20
    */
    DefaultConstructorClass()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    DefaultConstructorClass object1;

    cout << "Static Object" << endl;
    cout << "a : " << object1.a << endl;
    cout << "b : " << object1.b << endl;

    DefaultConstructorClass *pointer1 = new DefaultConstructorClass;
    cout << "Dynamic Object" << endl;
    cout << "a : " << pointer1->a << endl;
    cout << "b : " << pointer1->b << endl;
}