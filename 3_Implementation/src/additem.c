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

void add_item()
{
	int index, valid;
	char c;
	int a=0;

	FILE *fp;
	

	do
	{
		system("cls");
		printf("============ Enter Product Detail ============");
		int ID;//for comparing staff ID if file isnot NULL
		//declaration of file variable named as sfile
		fp = fopen("NextFile.dat","a+");//opening file and creating a staff.txt file to append or write
		
		if((fp = fopen("NextFile.dat","a+"))!=NULL)//if condition to check file is NULL or not
		{
			I:
			printf("\nProduct Code\t :");
			scanf("%i",&ID);
			while(fscanf(fp,"%s %s %i %i %i", st.productname, st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
			{
				/*
				fscanf reads every data stored in the file
				if entered staffID already exist then jumps to
				position I declared inside if(sfile!=NULL) at top
				*/
				if(ID == st.productid)
				{
					printf("\n\tTHE PRODUCT CODE ALREADY EXIST.\n");
					goto I;
				}
			}
			st.productid = ID;
		}
		else//runs if sfile is empty
		{
			printf("\nProduct Code\t :");
			scanf("%i",&st.productid);
		}
		
	//add product name
		do
		{
		
			//printf("<<<<<<<<<<<<<<Enter Product Detail>>>>>>>>>>>>>");
			fflush(stdin);
			printf("\nProduct Name\t :");
			gets(st.productname); // get input string
			st.productname[0]=toupper(st.productname[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productname); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productname[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getchar();
			
				
			}
		}while(!valid);	//while end here
		

		//Product Company
			do
		{
			char productcomp[40];
			fflush(stdin);
			printf("\nProduct Company\t :");
			gets(st.productcomp); // get input string
			st.productcomp[0]=toupper(st.productcomp[0]);
			//iterate for every character in string
			for (index=0; index<strlen(st.productcomp); ++index)
			{	//check if character is valid or not
				if(isalpha(st.productcomp[index]))
					valid = 1;
				else
				{
					valid = 0;
					break;
				}
			}
			if (!valid)
			{
				printf("\n Name contain invalid character. Please 'Enter' again");
				getchar();
			
				
			}
		}while(!valid);
		
		//productid
		do
			{
				printf("\nPrice in Rupees:");
				scanf("%i",&st.price);
				if(st.price==0)
					printf("Price cannot be zero");
			}while(st.price);
			
				do
			{
				printf("\nQuantity\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt==0)
					printf("Quantity cannot be zero");
			}while(st.Qnt);
		
		fp=fopen("NextFile.dat","a");
		fprintf(fp,"\n%s %s %i %i %i", st.productname, st.productcomp,st.price, st.productid,st.Qnt);
		fclose(fp);
		printf("\nPress 'Enter' to add more item and any other key to go to main menu");
		
	}
	while((c = getchar()) =='\r');
	menu();
}
