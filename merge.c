#include<stdio.h>
void merge(int arr[],int left,int mid,int right){
int i=left;
int j=mid+1;
int k=left;
int temp[100];
while(i<=mid&&j<=right){
if(arr[i]<arr[j]){
temp[k]=arr[i];
i++;
}
else{
temp[k]=arr[j];
j++;
}
k++;
}
 while (i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }
while(j<=right){
temp[k]=arr[j];
j++;
k++;
}
for(i=left;i<=right;i++){
arr[i]=temp[i];
}
}
void mergesort(int arr[],int left,int right){
if(left<right){
int mid=(left+right)/2;
 mergesort(arr, left, mid);
mergesort(arr, mid + 1, right); // FIXED: Corrected the right half boundaries        
// Merge the sorted halves
merge(arr, left, mid, right);
}

}
int main(){
int arr[]={38,12,10,1,20};
int n=5;
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
printf("%d",arr[i]);
}
return 0;

}
