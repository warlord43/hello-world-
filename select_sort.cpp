
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

int main(){
  int name[]={2,83,5,6,35,12,478,-35};
  int min_idx;
  for(int i=0;i<8;i++){
    min_idx=i;
    for(int j=i+1;j<8;j++){
      if(name[i]>name[j]){
        min_idx=j;
    if(min_idx!=i){
        swap(name[i], name[j]);
    }
    }
  }
  }
for(int i=0;i<8;i++){
    cout<<name[i]<<" ";
  }
  }
