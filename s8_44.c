#include<stdio.h>

void main(){
    int n,a[n],key,first,last,mid;

    printf("Enter size of array = ");
    scanf("%d",&n);

    printf("Enter Elements = ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter Key = ");
    scanf("%d",&key);

    first=0;
    last=n-1;
    mid=(first+last)/2;

    while (first<=last)
    {
        if(a[mid]<key){
            first=mid+1;
        }else if(a[mid] == key){
            printf("%d is found in array", key);
            break;
        }else{
            last=mid-1;
        }
        mid=(first+last)/2;
    }

    if(first>last){
        printf("%d is not found in array",key);
    }
    

}