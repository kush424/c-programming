#include<stdio.h>
    void printString(char str[])
    {
        int i;

        printf("%s",str);
            for(i=0 ; str[i]!='\0';i++);
            printf("\n %d",i);
    }

    void main()
    {
        char str[]="development";
        printString(str);
    }
