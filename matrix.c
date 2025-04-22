#include <stdio.h>
#include <math.h>
int main (){

 int a[2][2], b[2][2], s[2][2], d[2][2], i, j, k;
 printf("enter the elements of a:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &a[i][j]);
        }   
    }
    printf("enter the elements of b:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d", &b[i][j]);
        }   
    }
    printf("the sum of matrix :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            s[i][j]=a[i][j]+b[i][j];
            printf("%d\t", s[i][j]);
        }
        printf("\n");
    }
    return 0;
}