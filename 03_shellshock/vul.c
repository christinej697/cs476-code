#include <unistd.h>
#include <stdlib.h>

int main()
{
    setuid(geteuid());
    system("/bin/ls -l");
    return 0;
}
