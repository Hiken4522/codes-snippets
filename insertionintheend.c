#include<stdio.h>
#include<stdlib.h>

int main(){
    int d[100] = {0};
    int a,b,e;
    printf("enter the number of values you want to enter: ");
    scanf("%d",&a);
    for(int i = 0; i<a;i++){
        printf("enter the values: ");
        scanf("%d",&b);
        d[i] = b;
    }
    for(int i = 0; i<a;i++){
        printf("%d ",d[i]);
    }

    a++;
    printf("enter the value you want to add in the end: ");
    scanf("%d", &e);
    d[a-1]=e;

    for(int i = 0; i<a;i++){
        printf("%d ",d[i]);
    }


}
