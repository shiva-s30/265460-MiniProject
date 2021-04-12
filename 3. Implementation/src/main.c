#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct Players
{
    char name[20];
    char branch[20];
    int age;
    char college[50];
} Player;


int main()
{
    //int score;
    int test = 5;   
    int t_score = 0;
    int index = 1;
    char var;
    
    printf("\t\t\t\t Welcome to Tecquizz!!!\n ");
    printf("\t\t\t\t ----------------------\n ");
    printf("**********************************************************************************************\n");
    printf("\t\t ""Here are a few Instructions before you begin the game"":\n");
    printf("\t\t << The questions that you will be quizzed are based on the \n"); 
    printf("\t\t   latest and emerging technolgy trends of this decade >>\n");
    printf("\t\t  << There are 3 rounds in the game namely 1. Prelims 2. Advanced\n");
    printf("\t\t\t\t 3. Finals >>\n");
    printf("\t\t << Each Round is an elimination round and the scores at every stage will be tabulated >>\n ");
    printf("\t\t << The Player to clear all the rounds wins the game! >>\n");
    printf("\t\t << May the best player win!!!!! >>\n");
    printf("**********************************************************************************************\n");        
    
    
    printf("Press Enter to Continue\n");

    if(getchar()==10)
    system("CLS");
    
    Player p;
    
    printf("Enter your name, branch, age and college\n");
    scanf("%s %s %d %s", p.name, p.branch, &p.age, p.college);
    //printf("%s %s %d %s\n",p.name, p.branch, p.age, p.college);
    printf("***********************************************************************************************\n");
    printf("--------------------------------------Round 1: Prelims-----------------------------------------\n");
    printf("***********************************************************************************************\n");
    getchar();


    if(getchar()==10)
    system("CLS");

    while(test--)
    {
    switch (index)
        {
          case 1:
                    printf("Question 1\n");
                    printf("A. option a           B. option B\n");
                    printf("C. option c           D. option D\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                        t_score += 10;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score -=2;
                        getchar();
                    }

                     index++;
                     if(getchar()==10)
                     system("CLS");
                     break;
       
        case 2:
                    printf("Question 2\n");
                    printf("A. option a           B. option B\n");
                    printf("C. option c           D. option D\n");
                    
                    printf("Enter the answer\n");
                   
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                        t_score += 10;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score -=2;
                        getchar();
                    }

                     index++;
                     if(getchar()==10)
                     system("CLS");
                     break;
        
        case 3:
                    printf("Question 3\n");
                    printf("A. option a           B. option B\n");
                    printf("C. option c           D. option D\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                        t_score += 10;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score -=2;
                        getchar();
                    }

                     index++;
                     if(getchar()==10)
                     system("CLS");
                     break;

        case 4:
                    printf("Question 4\n");
                    printf("A. option a           B. option B\n");
                    printf("C. option c           D. option D\n");
                    
                    printf("Enter the answer\n");
                    
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                        t_score += 10;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score -=2;
                        getchar();
                    }

                     index++;
                     if(getchar()==10)
                     system("CLS");
                     break;      

        case 5:
                    printf("Question 5\n");
                    printf("A. option a           B. option B\n");
                    printf("C. option c           D. option D\n");
                    
                    printf("Enter the answer\n");
                   
                    var = getchar();

                    if(toupper(var)=='A')
                    
                    {
                        printf("Correct Answer\n");
                        t_score += 10;
                        getchar();
                    }
                    else
                    {
                        printf("Wrong Answer\n");
                        t_score -=2;
                        getchar();
                    }

                     index++;
                     if(getchar()==10)
                     system("CLS");
                     break;        
        
        default:
                    printf("Out of bounds\n");
          }
    }
          
   printf("Round 1: Prelims Complete!\n");
   printf("Player Score : %d", t_score); 
   return 0;
}           