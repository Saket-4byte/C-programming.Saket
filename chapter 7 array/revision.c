#include <stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={3,3,3,5,5,6,5};
    for(int i=0;i<7;i++){
        bool flag=false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
               flag=true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }   
    return 0;
}