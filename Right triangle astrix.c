#include<stdio.h>
void main()
{
        int rows,i,j;
        printf("Enter the number of rows\n");
        scanf("%d",&rows);
        for(i=0;i<=rows;i++){
            for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
