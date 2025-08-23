# include <iostream>
using namespace std;
 void bubblesort ( int arr[],int sz){
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }


 }
int main(){
    int arr[]={1,2,4,10,5,9,8};
    int sz=7;
bubblesort(arr,sz);
for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}