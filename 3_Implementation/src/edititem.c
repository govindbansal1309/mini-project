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

void edit_item()
{
	int index, valid;
	char target[40];
	FILE *fp, *rp;
	int a=0;
	int id;
	char edit;
	long int size=sizeof(st);
	if((fp=fopen("NextFile.dat","r+"))==NULL)
	{
		printf("NO RECORD ADDED.");
		menu();
	}
	else
	{
		rp = fopen("TempFile.dat","a");
		system("cls");
		printf("Enter Product Code for edit:");
		scanf("%i",&id);
		fflush(stdin);
		while(fscanf(fp,"%s %s %i %i %i\n", st.productname,st.productcomp, &st.price, &st.productid,&st.Qnt)!=EOF)
		{
			if(id==st.productid)
			{
				
				a=1;
				printf("\n\t*****  Record Found  *****");
				printf("\nProduct Name\t\t: %s",st.productname);
				printf("\nProduct Company\t\t: %s",st.productcomp);
				printf("\nPrice\t\t\t: %i",st.price);
				printf("\nProduct Code\t\t: %i",st.productid);
				printf("\nProduct Quantity\t:%i",st.Qnt);
			
				printf("\n\n\t*** New Record ***");
			do
				{
					
					fflush(stdin);
					printf("\nNew Product Name\t\t: ");
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
					printf("\nNew Product Company\t\t:");
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
				
					do
			{
				printf("\nNew Price in Rupees:");
				scanf("%i",&st.price);
				if(st.price==0)
				{
					printf("\n\tEnter Valid Price");
				}
			}while(!st.price);
			
				printf("\nEnter New Product Code\t\t:");
				scanf("%i",&st.productid); 
				
				do
			{
				printf("\nNew Quantity\t:");
				scanf("%i",&st.Qnt);
				if(st.Qnt==0)
				{
					printf("\n\tEnter Valid Quantity");
				}
			}while(!st.Qnt);
				
				
				printf("Press 'y' to edit the existing record or any key to cancel...");
				edit=getche();
				if(edit=='y' || edit=='Y')
				{
					fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
					fflush(stdin);
					printf("\n\n\t\tYOUR RECORD IS SUCCESSFULLY EDITED!!!");
				}
			}
			else
			{
				fprintf(rp,"%s %s %i %i %i\n", st.productname, st.productcomp, st.price, st.productid,st.Qnt);
				fflush(stdin);
			}
			
		}
		if(!a)
		{
			printf("\n\nTHIS PRODUCT DOESN'T EXIST!!!!");
		}
		fclose(rp);
		fclose(fp);
		remove("NextFile.dat");
		rename("TempFile.dat","NextFile.dat");
		getchar();
	}
	menu();
}
