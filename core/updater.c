#include <stdio.h>
#include <http.h>

int countdown;
char response;

int coreup()
{
// Core Updater Initialization. At the present time, there are no URLs to querry, so lets check localhost's HTTP server.
if(__LINUX__)
{
printf("Checking for precompiled binaries for Linux host systems.");



}
ifdef(__WIN32__)
{
printf("Checking for precompiled CORE binaries for 32-bit Windows systems.");
}
ifdef(__WIN64__)
{
printf("Checking for precompiled CORE binaries for 64-bit Windows systems."); 
}
ifdef(__BSD__)
{
printf("Checking for precompiled CORE binaries for BSD/Unix/Mac based systems.");
} 

}



}
