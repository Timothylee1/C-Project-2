/*!
@file       q.c
@author     Timothy Lee Ke Xin (timothykexin.lee@digipen.edu.sg)
@course     CS120
@section    Assignment 
@assignment 2 
@date       21/09/2021
@brief      This file contains code that print out multiple string 
            literal to present the user the images of a tree and an 
            animal.
*//*__________________________________________________________________*/

#include <stdio.h> //for printf

/*!
@brief draw_tree prints out multiple string literal which looks similar
       a christmas tree. 

The output of this function should look like this
    *
   ***
  *****
 *******
*********
    #
    #
    #
    #

@param void - this indicates that the function takes in no values
@return returns no value
*//*__________________________________________________________________*/

void draw_tree(void) { 
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("    #\n");
    printf("    #\n");
    printf("    #\n");
    printf("    #\n");
}

/*!
@brief draw_animal prints out multiple string literal which looks similar
       an animal greeting the junior coder. It uses puts which only permits
       a printed string on the output screen while creating a new line
       at the end.

The output of this function should look like this

  /\     /\
 /  \___/  \
(           )    -------
(   '   '   )   / Hello  \
(     _     )  <  Junior  |
(           )   \ Coder! /
 |         |     -------
 |    |    |
 |    |    |
(_____|_____)

@param void - this indicates that the function takes in no values
@return returns no value
*//*__________________________________________________________________*/

void draw_animal(void) {
    puts("  /\\     /\\");
    puts(" /  \\___/  \\");
    puts("(           )    -------");
    puts("(   '   '   )   / Hello  \\");
    puts("(     _     )  <  Junior  |");
    puts("(           )   \\ Coder! /");
    puts(" |         |     -------");
    puts(" |    |    |");
    puts(" |    |    |");
    puts("(_____|_____)");
}
