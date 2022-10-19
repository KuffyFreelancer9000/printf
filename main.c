#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
*main-Entrypoint
*
*Return:Always0
*/
intmain(void)
{
intlen;
intlen2;
unsignedintui;
void*addr;

len=_printf("Let'strytoprintfasimplesentence.\n");
len2=printf("Let'strytoprintfasimplesentence.\n");
ui=(unsignedint)INT_MAX+1024;
addr=(void*)0x7ffe637541f0;
_printf("Length:[%d,%i]\n",len,len);
printf("Length:[%d,%i]\n",len2,len2);
_printf("Negative:[%d]\n",-762534);
printf("Negative:[%d]\n",-762534);
_printf("Unsigned:[%u]\n",ui);
printf("Unsigned:[%u]\n",ui);
_printf("Unsignedoctal:[%o]\n",ui);
printf("Unsignedoctal:[%o]\n",ui);
_printf("Unsignedhexadecimal:[%x,%X]\n",ui,ui);
printf("Unsignedhexadecimal:[%x,%X]\n",ui,ui);
_printf("Character:[%c]\n",'H');
printf("Character:[%c]\n",'H');
_printf("String:[%s]\n","Iamastring!");
printf("String:[%s]\n","Iamastring!");
_printf("Address:[%p]\n",addr);
printf("Address:[%p]\n",addr);
len=_printf("Percent:[%%]\n");
len2=printf("Percent:[%%]\n");
_printf("Len:[%d]\n",len);
printf("Len:[%d]\n",len2);
_printf("Unknown:[%r]\n");
printf("Unknown:[%r]\n");
return(0);
}
