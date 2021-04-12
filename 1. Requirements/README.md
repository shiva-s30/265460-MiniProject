
#  Requirements

The project aims to build a multiplayer quiz game with 3 Rounds and 5 Players. The quiz is based on the latest technology trends and questions of MCQ type are asked to each user and based on the answer provided the points are tabulated acccording to the marking scheme and the player with the best score wins the game.


## SWOT Analysis
![SWOT for Miniproject](https://user-images.githubusercontent.com/65439506/114442148-dea56a80-9be9-11eb-8f50-07878f49d74c.jpg)
## Features

 - Multiplayer quiz game 
 - 3 Rounds:
   - Prelims
   - Advanced
   - Finals
- Questions Based on Latest Trends in the Tech Ecosystem
- Compact User Interface to play

## High Level Requirements
 - All the necessary rules that are required to play the game must be printed in the console window and made available to the user.
 
 - The Source Code requires a structure to obtain the details of each player playing the game.
 
 
 - The necessary header files must be added to perform dynamic memory allocation, standard input/output functions, structures, pointers, looping statements such as `for`, `while`, `switch-case`, `if` and `else-if` ladder.
 
 - Necessary variables must be declared for tabulating the score, indexing, obtaining inputs from the console window etc. 
 
 - Requires the computation and calculation of score obtained for each Right and Wrong answer and tabulate a detailed scoresheet to present to the players post the game.
 
 - Need to use sorting algorithms to identify top performers at the end of the game.
 
## Low Level Requirements
1. In the source code, the `main()` file requires a structure defined  using `typedef struct` < structure name > to obtain player details that has the following fields:
								
   -  Name :  Array of `char` type
   -  Branch : Array of `char` type
   -  Age : Variable of `int` type
   - College Name :  Array of `char` type

2. The header files required for the project are: 

    -  <stdio.h> to utilize standard input/output functions
   - <stdlib.h> for Dynamic Memory Allocation, pointers and                 system functions for the console window.
   - <ctype.h> for in-built to utilize variables of char type to obtain inputs from the console window.
  
 3.  The important variables required for implementation include:
  
     -  r1, r2, r3 - To define no. of questions asked in each round
     - temp variables to monitor the score
     - char type variables for procuring the answer from end user through system console window
 
 4. The rules defined for the game include:
    - There are three rounds in the game namely  1. Prelims 2.    Advanced 3. Finals
    - Each Round is an elimination round and the scores at every stage will be tabulated
    - The Player to clear all the rounds wins the game!
5.  To use looping statements such as while, for loop to iterate which is equal to the number of questions asked in each round
6. To use switch case statements to print the questions and obtain answers from the user. The required functions are defined in this block
7. Based on the response of the user, the console must display right or wrong answer and compute the score
8. The Scores are evaulated and displayed in the form of a table.

