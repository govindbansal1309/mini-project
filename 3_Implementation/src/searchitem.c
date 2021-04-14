#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include"headers.h"
#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9

void search_item()
{
	char target[40];
	int found=0;
	FILE *sfile;
	sfile=fopen("NextFile.dat","r");
	printf("\nEnter name to search:");
	fflush(stdin);
	gets(target);
	target[0]=toupper(target[0]);
	while (!feof(sfile) && found==0)
	{
		fscanf(sfile,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt);
		if(strcmp(target, st.productname)==0)
		{
			found=1;		
		}
	}
	
	if(found)
	{
		printf("\n Record found");
		printf("\nProduct Name\t\t:%s  \nProduct Company\t\t:%s \nProduct Price\t\t:%i \nProduct ID\t\t:%i \nProduct Quantity\t:%i", st.productname, st.productcomp, st.price, st.productid, st.Qnt);
	
	}
	else 
		printf("Noo Record found");
		fclose(sfile);
		printf("\nPress any key to go to Main Menu!");
		while((st.c = getchar()) =='\r');
		menu();
		
}
