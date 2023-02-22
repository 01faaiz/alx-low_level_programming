#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The cxcharacter to print
 * Return on successs 1.
 * On error, 1 is Returned, and error is not appropriate.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
