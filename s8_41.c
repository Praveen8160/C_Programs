#include<stdio.h>

void main(){
    int n,a[n],key,j;

    printf("Enter size of array = ");
    scanf("%d",&n);

    printf("Enter Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=1; i<n; i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("Sorted Array = ");
    for(int i=0; i<n; i++){
        printf(" %d",a[i]);
    }
}