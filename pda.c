// pushdown automata for ( a^nb^n|n>=0 )

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char arrStack[100];
int top=-1;

void push(char val){
   arrStack[++top] == val;
   return;
}
char peek(){
return arrStack[top];
}

char pop(){
   return arrStack[top--];
}

void main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    char input[n+1];
    printf("Enter the String : ");
    scanf("%s",input);

    //int n =strlen(input);

    for(int i=0 ; i<n ;i++){
        if(input[i]=='a'){
            printf("%c pushed to stack !\n",input[i]);
            push(input[i]);
        }
        if(input[i]=='b'){
            printf("%c poped from stack !\n",input[i]);
            pop();
            if(input[i+1]=='a'){
                printf(".....String Rejected........");
                return;
            }
        }

    }                 
    if(top==-1){
        printf(".......String is Accepted !......");
    }
    else{
        printf("....String is Rejected !......");
    }

}