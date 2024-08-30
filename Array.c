#include <stdio.h>
void main(){
    int n,a[100],i;
    printf("Enter the Array Size:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The array elements are: ");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}