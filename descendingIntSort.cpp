#include <iostream>
#include <cmath>
using namespace std;

int main(){
int array[7] = {4,5,3,6,2,1,7};
int x,y,j=1, i=0;

for (size_t i = 0; i < 7; i++) {
  if (array[i]<array[j]) {
    x= array[i];
    y= array[j];
    array[i]=y;
    array[j]=x;

    if(i!=0 && j!=1){
      i--;
      i--;
      j--;
      }
      else
      i--;
  }
  else
  j++;
}
for (int i = 0; i < 7; i++) {
  cout<<array[i];
}
return 0;
}
