#include "main.h"
#include <unistd.h>

/**
 *  * _putchar - write the character c to stdout
 *   * @c: The character to print
 *    *
 *     * On success 1
 *      * On error, -1 is returned , and error is a set of aproprietely
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
