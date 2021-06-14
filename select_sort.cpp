#include <iostream>
using namespace std;
int  swap(int *px, int *py)
{
  int temp;
  temp=*px;
  *px=*py;
  *py=temp;
  return 0;
}

int selec_sort(int num[],int n){
   int min_idx;
  for(int i=0;i<n-1;i++){
    min_idx=i;
    for(int j=i+1;j<n-1;j++){
      if(num[i]>num[j]){
        min_idx=j;
    if(min_idx!=i){
        swap(num[i], num[j]);
    }
    }
  }
  }
  for(int i=0;i<n-1;i++){
  cout<<num[i]<<" ";}
return 0;
}


int main(){
  int name[]={2,83,5,6,35,12,478,-35};
  selec_sort(name,8);
 }
