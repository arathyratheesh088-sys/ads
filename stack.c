#include<stdio.h>
#define size 5
 int stack[size]={};
 int top=-1;
 int value;
 
 void push(){
 if(top==4){
 printf("overflow");
 }
 else{
 printf("enter the value");
 scanf("%d",&value);
 top++;
 stack[top]=value;
 }}
 void pop(){
 if(top==-1){
 printf("under flow");
 }
 else{
 
 printf("element pop=%d",stack[top]);
 top--;
 }
 }
 int main(){
 
 
for(int i=0;i<size-1;i++){
 push();
 }
 for(int i=0;i<size-1;i++){
 printf("%d",stack[i]);
 }
 pop();
 for(int i=top;i>=0;i--){
 printf("%d",stack[i]);
 
 }
 for(int i=0;i<=top;i++){
 printf("%d",stack[i]);
 
 }
 return 0;
 }
