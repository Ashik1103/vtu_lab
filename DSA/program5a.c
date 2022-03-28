/*
Design, Develop and Implement a Program in C for the following Stack Applications
a. Evaluation of Suffix expression with single digit operands and operators: +, -, *, /, %, ^
b. Solving Tower of Hanoi problem with n disks.
*/
/*
ALGORITHM: (suffix expression)
Step 1: Start.
Step 2: Read the postfix/suffix expression.
Step 3: Evaluate the postfix expression based on the precedence of the operator.
step 4: Stop.
*/


#include <stdio.h>
#include <ctype.h>
#define MAXSTACK 100 /* for max size of stack */
#define POSTFIXSIZE 100 /* define max number of charcters in postfix expression */

int stack[MAXSTACK];
int top = -1;
void push(int item)
{
    if (top >= MAXSTACK - 1) {
        printf("stack over flow");
        return;
    }
    else {
        top = top + 1;
        stack[top] = item;
    }
}
int pop()
{
    int item;
    if (top < 0) {
        printf("stack under flow");
    }
    else {
        item = stack[top];
        top = top - 1;
        return item;
    }
}
void EvalPostfix(char postfix[])
{
    int i;
    char ch;
    int val;
    int A, B;

    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            A = pop();
            B = pop();

            switch (ch) /* ch is an operator */
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }
            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}

int main()
{
    int i;
    char postfix[POSTFIXSIZE];
    printf(" \nEnter postfix expression : ");
    for (i = 0; i <= POSTFIXSIZE - 1; i++) {
        scanf("%c", &postfix[i]);
        if (postfix[i] == ')')
        {
            break;
        }
    }
    EvalPostfix(postfix);
    return 0;
}