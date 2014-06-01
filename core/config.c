#include <stdio.h>
#include <stdlib.h>

int graphout;
char modlist[512][512];

void loadconf()
{
// This in the configuration loader for the OFFLINK CORE ONLY. The config for the actual game should be handled by the games configloader, which this should load. It should be defined as config(). It loads the config into global variables (rather than passing it back, as that could potentially be a lot of data.
fopen("./core.conf", "r");



}
