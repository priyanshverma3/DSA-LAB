#include<stdio.h>
int linear_Search(int A[],int n){
    int i,key;
    printf("\nEnter the key element:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(A[i]==key){
            printf("key element found at index : %d",(i));
            return 1;
        }
    }
    return -1;
}
void main(){
    int a[100],n;
    printf("Eneter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elemets of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    int linear=linear_Search(a,n);
    if(linear==1){
        printf("\nelement found");
    }
    else{
        printf("\nElement not found");
    }

}
