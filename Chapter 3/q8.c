#include <stdio.h>
int main(){
    int a;
    printf("enter the value of a :");
    scanf("%d",&a);
    if(a>0){
        printf("absolute value is :%d",a);
    }
    else if(a<0){
        a =-(a);
        printf("absolute value is :%d",a);
    }
    return 0;
}