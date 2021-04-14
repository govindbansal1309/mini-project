#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include"headers.h"
#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9

void gotoxy(int x,int y)	
{
	printf("%c[%d;%df",0x1B,y,x);
}
