#include <stdio.h>
#include <stdlib.h>

int graphout;
FILE mconf;
char modlist[512][512];

void loadconf()
{
if( access( "./core.conf", F_OK ) = -1 ) [
mconf = fopen("./core.conf", "a");
fprintf(mconf,"#configuration file for OFFLINK core\n\n#modules\nVideoMod=Textonly\nAudioMod=NullSound\n\n#other options to be configured later, as features are implemented.",);
fclose(mconf);
}
// This in the configuration loader for the OFFLINK CORE ONLY. The config for the actual game should be handled by the games configloader, which this should load. It should be defined as config(). It loads the config into global variables (rather than passing it back, as that could potentially be a lot of data.
mconffopen("./core.conf", "r");



}
