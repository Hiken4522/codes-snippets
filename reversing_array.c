#include<stdio.h>
#include<stdlib.h>

void reverse(int a[],int start,int end){
    int temp;
    while(start < end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    
}

void printarray(int s,int a[]){
    for(int i = 0;i<s;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[]={1,2,3,4,5};
    int si = sizeof(a)/sizeof(a[0]);
    printf("before reversing\n");
    printarray(si,a);
    printf("after reversing\n");
    reverse(a,0,si-1);
    printarray(si,a);
}
