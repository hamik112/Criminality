#include <stdio.h>
#include <stdlib.h>

int loadcore(int argc, char *argv[])
{
printf("core1");
// load configuration
loadconf();
printf("core2");
// Load Core Modules
coremod();
printf("core3");
// Check for updates to the Core, and if found, ask to install them
coreup();
printf("core4");
// Transfer load of game to initial noncore loader
gameload();
printf("core5");
// If core5 is printed, something is wrong. loadcore should never execute anything past gameload, as the rest of the loader is in gameload and should hand off to the actual game rather than return to loadcore.
autohandler("69");
}
