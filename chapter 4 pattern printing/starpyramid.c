#include<stdio.h>
int main(){
    int n;
    printf("enter no. of lines:");
    scanf("%d",&n);
    // int nst=1;
    // for(int i=1;i<=n;i++){
    //     for(int k=1;k<=n-i;k++){
    //         printf("  ");
    //     }
    //     for(int j=1;j<=nst;j++){
    //         printf("* ");
    //     }
    //     nst=nst+2;
    //     printf("\n");
    // }
    int nst=1;
    int nsp=3;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        nsp=nsp-1;
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
}