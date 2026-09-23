#include<stdio.h>
int main(){
int arr[50],size,i,p,ele;
printf("enter the size:");
scanf("%d",&size);
printf("enter the element:");
 for(i=0;i<size;i++){
 scanf("%d",&arr[i]);
 }
  for(i=0;i<size;i++){
 printf("%d",arr[i]);
 }
 
 printf("enter the position of element");
 scanf("%d",&p);
 printf("enter the element:");
 scanf("%d",&ele);
 
 if(p<=0||p>size){
 printf("invalide position");
 }
 else{
 for(i=size-1;i>=p-1;i--){
 arr[i+1]=arr[i];
 }
 arr[p-1]=ele;
 size++;
 }
 for(i=0;i<size;i++){
 printf("%d",arr[i]);
 }
 int e;
 printf("enter the number to search:");
 scanf("%d",&e);
 for(i=0;i<size;i++){
 if(arr[i]==e){
 printf("element found");
 }
 else {
 printf("not found");
 }
 }
 
 
 return 0;
}
