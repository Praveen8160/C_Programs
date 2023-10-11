#include<stdio.h>

void main(){
    int n,a[n],key,flag=0;

    printf("Enter size of array = ");
    scanf("%d",&n);

    printf("Enter Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter Key = ");
    scanf("%d",&key);

    for(int i=0; i<n; i++){
        if(key==a[i]){
            flag=1;
            break;
        }
    }

    if(flag==1){
        printf("%d is found in array",key);
    }else{
        printf("%d is not found in array",key);
    }
    
}