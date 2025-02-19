#include<stdio.h>
#include<stdlib.h>
#define MAX 500000
int main()
{
    int crnt_users;
    printf("Enter the number of users using amazon's platform\n");
    if(scanf("%d",&crnt_users)!=1)
    {
        printf("Invalid input\n");
        return 1 ;
    }
    else if(crnt_users>MAX)
    {
        printf("sytem crashes");
    }
    else
    {
        printf("system running with %d users\n",crnt_users);
    }
    exit(0);
    
}
