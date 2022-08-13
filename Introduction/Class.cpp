/*
* class: Keyword
* FirstClass: CLass Name
* syntax:
    class <Class Name> {

    };
*/

/***
 * ACCESS MODIFIERS
 * These are used to specify the accessibilty of data members in a class.
 * There are three types of access modifiers
     * Public : All the data members under this tag are acessible everywhere or everyone.
     * Private : Only accessible with in class
     * Protected : Same as private but can be accessed by subclass (friend class or dervied class) of class.

 * By default if anything not mentioned the membres are assigned as Private
***/

class FirstClass
{

public: /* Access Modifier */
    int property1;
    int property2;
    string property3;
};