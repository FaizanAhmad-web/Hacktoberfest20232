#include<stdio.h>


int main()
{
  
    int n; //number of rows
    printf("Enter number of rows :");
    scanf("%d",&n);
   /*/ int m; //number of rows
    printf("Enter number of rows :");
    scanf("%d",&m);*/

    for (int i = 1; i <=n; i++) {
        for (int j = 1; j <=n; j++) {
        
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
