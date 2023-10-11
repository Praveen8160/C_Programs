#include<stdio.h>

void main(){
    int a[10];

    printf("Enter Elements = ");
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    int max=a[0],min=a[0];

    for(int i=0; i<10; i++){
        if(a[i]>max){
            max=a[i];
        }

        if(a[i]<min){
            min=a[i];
        }
    } 

    printf("Largest element of array is %d \n",max);
    printf("Smallest element of array is %d \n",min);
}

