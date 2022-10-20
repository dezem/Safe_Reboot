#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <switch.h>
#include "unistd.h"

int main(int argc, char **argv)
{
    // Console init
    spsmInitialize();
    //sleep
    usleep(3000000);
    // AMS safe reboot
    spsmShutdown(true);
}