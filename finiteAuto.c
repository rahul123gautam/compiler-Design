// string that accept '011'

#include <stdio.h>
#include<string.h>
// #define size 100
int main() {
   char inptStr[100];
   char state ='a';
   printf("--------enter the string to be checked--------- ");
   scanf("%s",inptStr);
   for(int i = 0; inptStr[i] != '\0'; i++) {
      char ch = inptStr[i];
      if(state == 'd'){
        state = 'a';
        break;
      }
      switch(state) {
         case 'a' : if(ch == '0') state = 'b';
         break;
         case 'b' : if(ch == '1') state = 'c';
         break;
         case 'c' : if(ch == '1') state = 'd';
         break;
      }

   }
   if(state=='d')
      printf("\nGiven string is accepted");
   else printf("\nGiven string is not accepted");
      return 0;
}