#include <unistd.h>

int main(void)
{
    const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 0;

    while (msg[len])
        len++;

    len = write(2, msg, len);

    return (len == -1 ? 1 : 0);
}

