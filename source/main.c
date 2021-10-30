#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <switch.h>

int main(int argc, char **argv)
{
    // Console init
    spsmInitialize();
    // AMS safe reboot
    spsmShutdown(true);
    spsmExit();
    return 0;
}