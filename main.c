#include <stdio.h>
#include <stdlib.h>



int main(int argv, char *argc[])
{
printf("Executing OFFLINK Coreloader\n");
loadcore();
printf("main1");
//at the present time, main is just a handoff. main1 indicates a failure to execute loadcore, because if it had begun to properly execute loadcore, an error in loadcore would crash the program, not break to main 
abort()

}

long unfortunate(errcode)
{
printf("There has been a fatal error that the autohandler could not not recover from. Error code %d", errcode);
abort(errcode);
}

long autohandler(errcode)
{
//Autohandler not yet implemented. I'll handle this after the core itself is finished

unfortunate(errcode);
}
