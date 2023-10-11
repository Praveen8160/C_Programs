#include<stdio.h>

void main(){
    int n,a[n];

    printf("Enter size of array = ");
    scanf("%d",&n);

    printf("Enter Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Sorted array = ");
    for(int i=0; i<n; i++){
        printf(" %d",a[i]);
    }
}