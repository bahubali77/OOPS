/***
 * It is simmilar as Default constructor its just we are able to pass the arguments just like any other function
 * Can be useful when we try to pass certain value as argument on the time of object creation itslef.
 * It is useful as to avoid storing garbage value in data members at the time of object creation.
 * We can have more than one paramerized constructor. It will be distinguished on the basis of type of arguments or no of arguments.

 * Once we created a paramaterized constructor default constructor will not call implictly hence it through an error if we initialize a simple object.
*/

#include <iostream>
using namespace std;

class ParamerterizedConstructorClass
{

public:
    int property1;
    int property2;
    string property3;

    ParamerterizedConstructorClass(int value1)
    {
        // Constructor 1
        property1 = value1;
        property3 = "Default string";
    }

    ParamerterizedConstructorClass(int value1, int value2)
    {
        // Constructor 2
        property1 = value1;
        property2 = value2;
    }

    ParamerterizedConstructorClass(int value1, string value3)
    {
        // Constructor 3
        property1 = value1;
        property3 = value3;
    }
};

int main()
{
    ParamerterizedConstructorClass object1(10);
    ParamerterizedConstructorClass object2(10, 20);
    ParamerterizedConstructorClass object3(10, "string");

    cout << "Static Object " << endl;
    cout << "Constructor 1 : " << object1.property1 << " " << object1.property2 << " " << object1.property3 << endl;
    cout << "Constructor 2 : " << object2.property1 << " " << object2.property2 << " " << object2.property3 << endl;
    cout << "Constructor 3 : " << object3.property1 << " " << object3.property2 << " " << object3.property3 << endl;

    ParamerterizedConstructorClass *pointer1 = new ParamerterizedConstructorClass(10);
    ParamerterizedConstructorClass *pointer2 = new ParamerterizedConstructorClass(10, 20);
    ParamerterizedConstructorClass *pointer3 = new ParamerterizedConstructorClass(10, "string");

    cout << "Dynamic Object " << endl;
    cout << "Constructor 1 : " << pointer1->property1 << " " << pointer1->property2 << " " << pointer1->property3 << endl;
    cout << "Constructor 2 : " << pointer2->property1 << " " << pointer2->property2 << " " << pointer2->property3 << endl;
    cout << "Constructor 3 : " << pointer3->property1 << " " << pointer3->property2 << " " << pointer3->property3 << endl;
}