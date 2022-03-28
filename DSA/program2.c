/* 
__EXPERIMENT - 02__
Design, Develop and Implement a program in C for the following operations on Strings
a. Read a Main String (STR), a Pattern String (PAT) and a Replace String (REP).
b. Perform Pattern Matching Operation: Find and Replace all occurrences of PAT in STR with
REP if PAT exists in STR. Repost suitable messages in case PAT does not exist in STR
ALGORITHM:
Step 1: start
Step 2: read main string STR, patter string PAT and replace string REP.
Step 3: Search / find the pattern string PAT in the main string
Step 4: if PAT is found then replace all occurrences of PAT in main string STR with REP string
Step 5: if PAT is not found give a suitable error message.
Step 6: Stop
*/



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    char str[20];
    char srch[20];
    char rep[20];
    int i,j;
    printf("enter a string \n");
    gets(str);
    printf("enter a search string \n");
    gets(srch);
    printf("enter string to b replaced \n");
    gets(rep);
    for(i=0;i<strlen(str);i++){
        for(j=0;j<strlen(srch);j++){
            if(srch[j]==str[i]){
                str[i]=rep[j];
            }
        }
    }
    printf("%s",str);
}
