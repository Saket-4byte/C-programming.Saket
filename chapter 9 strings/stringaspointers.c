#include <stdio.h>
#include<string.h>
int main(){
    char str[]="college wallah";
    // char* ptr=&str[0];
    char* ptr=str; //ptr now points to str[0]
    printf("%p\n",&str[0]); //address ko dusre method se print karsakte hai
    printf("%p",str);// kisi bhi array or string ka 0th index ka address hota hai
    return 0;
}
