#include<stdio.h>
#include<stdlib.h>

int main(){

    int arr[100] = {0};
    int nu,ab;
    printf("number of elements to enter");
    scanf("%d",&nu);
    for(int i = 0;i <nu ;i++){
        printf("enter the value of the element: ");
        scanf("%d",&ab);
        arr[i]=ab;
    }

        
    for(int i = 0;i < nu;i++){
        
        printf("%d ",arr[i]);
        
    }

    int x,pos;
    printf("enter the element you want to enter: ");
    scanf("%d",&x);

    printf("enter the position: ");
    scanf("%d",&pos);

    nu++;

    for(int i = nu-1;i >= pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=x;

    for(int i = 0;i<nu;i++){
        
        printf("%d ",arr[i]);
        
    }

}
