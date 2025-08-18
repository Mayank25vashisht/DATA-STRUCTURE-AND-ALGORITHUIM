#include <iostream>
using namespace std;
int duplicate(int arr[],int sz){
for(int i=0;i<sz;i++){
    for(int j=i+1;j<sz;j++){
        if(arr[i]==arr[j]){
            for(int k=j;k<sz-1;k++){arr[k]=arr[k+1];
               

            }sz--;j--;
        }
    }
}

return sz;
 }
int main()   {int arr[]={1,2,3,3,4};
int sz=5;
    int newsz =  duplicate(arr,sz);
    for(int i=0;i<newsz;i++){
        cout<<arr[i];
    }
    
     
    return 0;
}