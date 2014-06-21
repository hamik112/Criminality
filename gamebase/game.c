#include <stdio.h>
#include <stdlib.h>


gameload()
{
/*==============================================*/
/*      Criminality Initial Gameloader          */
/*  WARNING: Configuration files should NEVER,  */
/*  under ANY CIRCUMSTANCES, be stored outside  */
/*  of ".". EVER!!!!! No official support will  */
/*  be given to modified gameloaders that have  */
/*  this feature, as configuration is supposed  */
/*  to be drop-in, and using system or external */
/*  directories for this can break this feature.*/
/*          YOU HAVE BEEN WARNED!!!!!!          */
/*                                              */
/* Gameload should use the OFFLINK core builtin */
/* configuration loader, but custom confloaders */
/*   are fine as long as they meet the OFFLINK  */
/* modularity standards. Hey, you're the dev.   */
/*     I just designed the core engine.         */
/*==============================================*/
printf("game1");
gameconf();
printf("game2");
modload();
printf("game3");


}
