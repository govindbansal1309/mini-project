#ifndef headers_h
#define headers_h

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9


struct item
{
	char productname[40],productcomp[40],c;
	int productid;
	int price;
	int Qnt;
}st;

void menu();
void add_item();
void read_item();
void search_item();
void edit_item();
void delete_item();
void gotoxy(short, short);

#endif