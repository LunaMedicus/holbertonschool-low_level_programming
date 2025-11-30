#include <unistd.h> /* REQUIRED for write and STDERR_FILENO */

int main(void)
{
    /* * 1. Use STDERR_FILENO for standard error.
     * 2. Escape the internal double quote with a backslash: \"
     * 3. Keep the whole string on one line.
     */
    write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

    return (1);
}
