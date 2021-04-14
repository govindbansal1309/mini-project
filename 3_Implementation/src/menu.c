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

void menu(void)
{
	int choice;
	system("cls");
	main:
	printf("\n======================== Product Management System ========================");
	printf("                                                                                          ");
	printf("                                                                                          ");
	printf("\n\t\tPress <1> Add Products");
	printf("\n\t\tPress <2> Delete Products");
	printf("\n\t\tPress <3> Search Products");
	printf("\n\t\tPress <4> Read Items");
	printf("\n\t\tPress <5> Edit Items");
	printf("\n\t\tPress <6> Exit!");	
	
	printf("\n\n\t\tEnter your choice[1-6]");
	scanf("%i", &choice);
	
	system("cls");
	
	switch(choice)	
	{
		case 1:
			add_item();
			break;
		case 2:
			delete_item();
			break;
		case 3:
			search_item();
			break;
		case 4:
			read_item();
			break;	
		case 5:
			edit_item();
			break;
		case 6:
		    printf("System Exit");
		    exit(0);
		    break;
		default:
		printf("Invalid Choice! System Exit\n");
			getchar();
	}
	
}
