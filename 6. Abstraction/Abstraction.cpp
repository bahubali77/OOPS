/***
 * Abstraction is refred to data hiding
 * In simple words, When we only show the data that is relevant to the user.
 * For eg: For a TV, we have a remote we know what a particular button do but we dont know the inner working of the same because it is not relevant to the user.
 *
 * In OOPS we achieve abstraction using data specifiers (Private, Protected, Public).
 * It also makes the system secure as we are able to hide or put check on the crucial information so that any outsider not able to make any difference in it
 */

#include <string>
using namespace std;

class AbstractionClass
{

private:
    // We are making password and username as private becuase it is classified information and we dont want that these can be accessed or modified by anyone.
    // This process is termed as Abstraction.
    string password;
    string username;

public:
    AbstractionClass()
    {
    }
};
