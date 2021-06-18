#include<iostream>
using namespace std;
//a dimple code for bubble sort alogrithm

//swapping the consecutive elements in the array
int swap(int *px,int *py){
int hold=*px;//a stray variable to hls the value of...
  *px=*py;
  *py=hold;
return 0;
}
//print the following array
void printArr(int arr[],int n){
  for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
  }
}

int main(){
int num[]={112,33,12,0};
  for(int i=0;i<=3;i++){
  if(num[i+1]<num[i]){
      swap(&num[i],&num[i+1]);
  }
  }
printArr(num,4);
}
