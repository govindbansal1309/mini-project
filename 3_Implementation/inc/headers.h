#ifndef headers_h
#define headers_h

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>

#define ENTER 13
#define BKSP 8
#define SPACE 32
#define TAB 9


/**
 * @brief structure for storing product details
 * 
 */
struct item
{
	char productname[40],productcomp[40],c;
	int productid;
	int price;
	int Qnt;
}st;


/**
 * @brief function to give user menu for choosing an operation
 * 
 */
void menu();


/**
 * @brief function to add items in the system
 * 
 */
void add_item();


/**
 * @brief function to display all the items in the system
 * 
 */
void read_item();


/**
 * @brief functionn to search for a particular item
 * 
 */
void search_item();


/**
 * @brief function to edit the details of a particular item
 * 
 */
void edit_item();


/**
 * @brief function to delete a particular item
 * 
 */
void delete_item();


/**
 * @brief function to go on a particular line in files for file handling
 * 
 */
void gotoxy(int, int);


#endif
