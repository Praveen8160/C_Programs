#include<stdio.h>

void main(){
    int n,a[n],min,j,pos;

    printf("Enter size of array = ");
    scanf("%d",&n);

    printf("Enter Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(int i=0; i<n; i++){
        min=a[i];
        j=i+1;
        pos=i;
        while (j<n)
        {
            if(a[j]<min){
                min=a[j];
                pos=j;
            }
            j++;
        }
        a[pos]=a[i];
        a[i]=min;
    }

    printf("Sorted Array = ");
    for(int i=0; i<n; i++){
        printf(" %d",a[i]);
    }
}