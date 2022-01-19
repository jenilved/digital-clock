/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{ int h=0,m=0,s=0,i;
printf("please enter a time formate in HH:MM:SS\n");
scanf("%d%d%d",&h,&m,&s);
start :
for (h;h<24;h++)
{  
    for(m;m<60;m++)
    { 
        for(s;s<60;s++)
        {   
         
            printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);
            if(h<12)
            printf("AM");
            else
            printf("PM");
            for(double i=0;i<3619999;i++)
            i++;
            i--;
            
        }
        s=0;
    }
    m=0;
}
h=0;
goto start;
return 0;
}
