#include<stdio.h>
#include<stdlib.h>
int a[100],n;
void create()
{
    int i;
    printf("enter %d elements \n", n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    int i;
    printf("elements in the current array are :\n");
    for (i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
}

void insert(int pos, int value){
    int i;
    for (i=n; i>=pos; i--)
    {
        a[i+1]=a[i];
    }
    n+=1;
    a[pos] = value;
    printf("array elements is hence updated \n");
    
}


void delete( int pos){
    int i;
    if (pos >= n+1){
        printf("overflow \n");
    }
    else{
        for (i=pos; i<n; i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        printf("removed \n");
    }
}

void main(){
    int ch, pos , value;
    while(1){
        printf("\n1. create \n");
        printf("2. display \n");
        printf("3. insert \n");
        printf("4. delete\n");
        printf("5. exit\n");
        scanf("%d",&ch);

        switch(ch){
          case 1:
          printf("enter no. of elements \n");
          scanf("%d",&n);
          create();
          break; 
           
          case 2:
          printf("displaying!! \n");
          display();
          break;

          case 3:
          printf("enter the location and value at which insertion is to be performed \n");
          scanf("%d%d",&pos,&value);
          insert(pos,value);
          break;

          case 4:
          printf("enter the location of element u want to delete\n");
          scanf("%d",pos);
          delete(pos);
          break;

          default: 
          exit(0);
        }
    }
}