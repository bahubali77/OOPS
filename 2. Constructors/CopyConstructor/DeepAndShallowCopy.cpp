/***
 * SHALLOW COPY
 * It copies all the values in the data members
 * Suitable when none of the values is initialized dynamicaaly in heap memory.
 * In case of heap memory only the pointer is copied and it points to the same memory location. Hence if change created in one object also reflects in other one.
 */

/***
 * In deep copy we copy all data members as well as allocate simmilar memory locations and values to the object.
 */

/***
 * For eg :
 * If we created a int variable in heap memory and create an object by passing that variable as a data member.
 * In shallow copy : It only copies the pointer, and pointed to same memory in heap so if I change the value at that memory, It will change for all object.
 * In deep copy : we copied all the data members. For dynamically allocate one , we allocate the new memory and then copied the pointed value in it.
 */

#include <iostream>
using namespace std;
class CopyType
{
private:
public:
    int property1;
    int *shallowProperty;
    int *deepProperty;
    CopyType(int property1, int *shallowProperty, int *deepProperty)
    {
        this->property1 = property1;

        // Shallow Copy
        // Only copies the value of data members, not allocating separate memory.
        this->shallowProperty = shallowProperty;

        // Deep Copy
        // Assigning new memory in heap than copy the actual value pointed by the function argument.
        this->deepProperty = new int;
        *(this->deepProperty) = *deepProperty;
    }
};

int main()
{
    int *value2 = new int(10);
    int *value3 = new int(20);
    CopyType obj1(1, value2, value3);
    cout << obj1.property1 << " " << *(obj1.shallowProperty) << " " << *(obj1.deepProperty) << endl;

    // reassigning value to same pointers
    // value2 will be changed for obj1 as shallow copy but not value3 as deep copied.
    *value2 = 20;
    *value3 = 40;
    CopyType obj2(1, value2, value3);
    cout << obj2.property1 << " " << *(obj2.shallowProperty) << " " << *(obj2.deepProperty) << endl;
    cout << obj1.property1 << " " << *(obj1.shallowProperty) << " " << *(obj1.deepProperty) << endl;
}