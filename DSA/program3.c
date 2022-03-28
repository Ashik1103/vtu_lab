/*
Design, Develop and Implement a menu driven program in C for the following operations on
STACK of integers (Array implementation of stack with maximum size MAX)
a. Push an element on to stack
b. Pop an element from stack.
c. Demonstrate how stack can be used to check palindrome.
d. Demonstrate Overflow and Underflow situations on stack.
e. Display the status of stack.
f. Exit.
*/

/*
ALGORITHM:
Step 1: Start.
Step 2: initialize stack size MAX and top of the stack -1.
Step 3: Push integer element on to stack and display the contents of the stack.
        if stack is full give a message as 'stack is overflow'.
Step 4: Pop element form stack along with display the stack contents.
        if stack id empty give a message as 'stack us underflow'.
step 5: check wheather the stack contents are palindrome or not.
step 6: Stop.
*/   




#define max 20
#include <stdio.h>
#include <stdlib.h>

int top = -1;
int front = 0;
int a[max];
size = max;
int n;

void push(n){
    // int n;

    a[top+1]=n;
    top=top+1;
}

void pop(){
    if (top==-1){
        printf("\nstack is empty\n");
    }
    else{
        printf("\n%d is getting popped", a[top]);
        top=top-1;
    }
}

void display(){
    int i;
    for (i=0;i<top+1;i++)
    printf("%d\t",a[i]);
}

void palindrome(){
    int i;
    char s[100],b;
    printf("Enter the String\n");
    scanf("%s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        b = s[i];
        push(b);
    }
    for (i = 0;i < (strlen(s) / 2);i++)
    {
        if (a[top] == a[front])
        {
            pop();
            front++;
        }
        
    }
    if ((strlen(s) / 2)  ==  front)
        printf("\n%s is palindrome\n",  s);
    else
        {
            printf("\n%s is not a palindrome\n", s);
        }
    front  =  0;
    top  =  -1;
}

void overflow(){
    if (top>size)
    {
        printf("overflow\n");
    }else{
        if(top<=-1){
            printf("underflow\n");
        }
    }
}

void main(){
    int ch;
    while(1){
        printf("\n1.push\n");
        printf("2.pop\n");
        printf("3.palindrome check\n");
        printf("4.overflow underflow check\n");
        printf("5.display \n");
        printf("6.exit\n");
        printf("enter your choice\n");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
            printf("enter a num");
            scanf("%d",&n);
            push(n);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            palindrome();
            break;
            
            case 4:
            overflow();
            break;
            
            case 5:
            display();
            break;
            
            default:
            exit(0);
        }
    }
}