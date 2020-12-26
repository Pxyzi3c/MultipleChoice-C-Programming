#include <stdio.h>
#include <conio.h>
#define p printf
#define s scanf


int main()
{   int answer;
    char fname[17],mname[17],lname[17];

    p("\n==========================WELCOME TO C LANGUAGE QUIZ GAME!=====================\n\n");
    p(" ENTER NAME: ");
    s("%s %s %s",&fname, &mname, &lname);

    p("\n\t\t\t\t  WELCOME %s!\n",fname);
    p("\n\t\t* * * * * * * * * * * * * * * * * * * * * * * * ");
    p("\n\t\t*\tAnswer Codes: \t\t\t      *\n");
    p("\t\t*\t\t\t\t\t      *\n");
    p("\t\t*\t1 for A");
    p("\t\t\t3 for C\t      *\n");
    p("\t\t*\t2 for B");
    p("\t\t\t4 for D\t      *\n");
    p("\t\t*\t\t\t\t\t      *\n");
    p("\t\t* * * * * * * * * * * * * * * * * * * * * * * * \n");
    p("\n================================================================================");


    p(" 1. When is C Programming created or developed?\n");
    p("\n A. 1963");
    p("\t\t B. 1962");
    p("\n C. 19673");
    p("\t\t D. 1972");
    p("\n\n Enter answer here: ");
    s("%d",&answer);

    if(answer==4)
        p("CORRECT!\n");
    else if((answer==2)||(answer==1)||(answer==3))
        p("WRONG! Correct answer is D. 1972\n");
    else
        p("INVALID ENTRY!\n");
    p("\n--------------------------------------------------------------------------------");

    p("\n 2. Who hailed as the \"Father of C Language\"?\n");
    p("\n A. Dennis Ritchie");
    p("\t\t B. Albert Einstein");
    p("\n C. Ken Thompson");
    p("\t\t D. Blaise Pascal");
    p("\n\n Enter answer here: ");
    s("%d",&answer);

    if(answer==1)
        p("Correct!");
    else if((answer==2)||(answer==3)||(answer==4))
        p("Wrong! Correct answer is A. Dennis Ritchie");
    else
        p("Invalid Entry!");
    p("\n--------------------------------------------------------------------------------");

    getch();
}
