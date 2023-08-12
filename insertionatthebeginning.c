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

    int x;
    printf("enter the element you want to enter: ");
    scanf("%d",&x);

    nu++;

    for(int i = nu-1;i >= 0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;

    for(int i = 0;i<nu;i++){
        
        printf("%d ",arr[i]);
        
    }

}
