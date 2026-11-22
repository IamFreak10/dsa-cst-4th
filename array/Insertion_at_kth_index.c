#include<stdio.h>

int main(){
   int n,k,item,j;
   //N=Size of the array
   //k=The positon you wanna insert the data
   //Item=The value you want to insert
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   int arr[100];
   for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }


   printf("Enter The positin (K) to insert:  ");
   scanf("%d",&k);

   printf("Enter the value to insert: ");
   scanf("%d",&item);


   //----Stating of our Algorithm----//
   for(j=n-1;j>=k-1;j--){
      arr[j+1]=arr[j];
   }
   arr[k-1]=item;

   for(int i=0;i<n+1;i++){
    printf("%d ",arr[i]);
   }
   return 0;

}