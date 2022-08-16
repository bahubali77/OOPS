/**
 * Getter and Setter are class functions which are public to access private properties outside of class.
 * Now The ques arises why we need them if we have to access private member just make them public and access it. It is easier.
 *  It is Good practice to make required properties as private to protect data.
 *  Through Getter and Setter we give a way to user to access private properties only through our defined functions which put restriction on them
 *  So we are able to add any kind of conditions in these function which helps us to protect data.
 *
 */

class GetterAndSetterClass
{
private:
    int privateProperty;

public: /* Access Modifier */
    int property1;
    int property2;

    int getFunction()
    {

        return privateProperty;
    }

    int getFunctionWithPassword(int password)
    {
        // Checking for password to get the value.
        if (password != 1234)
        {
            return -1;
        }
        return privateProperty;
    }

    void setFunction(int value)
    {
        // Adding condition so that privateProperty can not have value < 10
        if (value < 10)
        {
            return;
        }
        privateProperty = value;
    }
};