#include "main.h"
#include <stdlib.h>

/**
*print_c-printsachar
*@c:chartoprint
*
*Return:always1
*/
int print_c(va_listc)
{
char ch=(char)va_arg(c,int);

_putchar(ch);
return(1);
}

/**
*print_s-printsastring
*@s:stringtoprint
*
*Return:numberofcharsprinted
*/
int print_s(va_lists)
{
int count;
char *str=va_arg(s,char*);

if(str==NULL)
str="(null)";
for(count=0;str[count];count++)
{
_putchar(str[count]);
}
return(count);
}

/**
*hex_print-printsachar'sasciivalueinuppercasehex
*@c:chartoprint
*
*Return:numberofcharsprinted(always2)
*/
static int hex_print(charc)
{
int count;
char diff='A'-':';
char d[2];

d[0]=c/16;
d[1]=c%16;
for(count=0;count<2;count++)
{
if(d[count]>=10)
_putchar('0'+diff+d[count]);
else
_putchar('0'+d[count]);
}
return(count);
}

/**
*print_S-printsastringandnonprintablecharacterasciivalues
*@S:stringtoprint
*
*Return:numberofcharsprinted
*/
int print_S(va_listS)
{
unsigned int i;
int count=0;
char *str=va_arg(S,char*);

if(str==NULL)
str="(null)";
for(i=0;str[i];i++)
{
if(str[i]<32||str[i]>=127)
{
_putchar('\\');
_putchar('x');
count+=2;
count+=hex_print(str[i]);
}
else
{
_putchar(str[i]);
count++;
}
}
return(count);
}

/**
*print_r-printsastringinreverse
*@r:stringtoprint
*
*Return:numberofcharsprinted
*/
int print_r(va_listr)
{
char *str;
int i, count=0;

str=va_arg(r,char*);
if(str==NULL)
str=")llun(";
for(i=0;str[i];i++)
;
for(i-=1;i>=0;i--)
{
_putchar(str[i]);
count++;
}
return(count);
}
