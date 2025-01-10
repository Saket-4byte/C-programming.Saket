#include <stdio.h>
void reverse(int arr[],int si,int ei){ //reversing part of array
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};   
    // index 1->4 reverse
    reverse (arr,1,4);
    for (int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}