// Q.1 Alphabet Skipper
// Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a
// do-while loop.

#include <stdio.h>

int main()
{
   char ch = 'a';
do{
   printf("%c", ch);

   ch+=4;
}
while(ch<='z');
}
