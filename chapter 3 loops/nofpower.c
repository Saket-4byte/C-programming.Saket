#include <stdio.h>

int main(){
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    int power =1;
    for(int i=1;i<=b;i++){
        power = power*a;
        printf("%d is raised to the power %d is %d\n",a,i,power);
    }
    return 0;
}