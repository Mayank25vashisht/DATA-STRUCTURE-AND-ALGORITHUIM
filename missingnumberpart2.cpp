# include <iostream>
using namespace std;
int binarysearch (int arr[],int sz){
    int st=0;int end=sz-1;
    while(st<=end){
    int mid=(st+end)/2;
    if(arr[mid]==mid+1){
        st=mid+1;
    }
      else {
        end=mid-1;
      }
    }
    cout<<st+1<<endl;
    return st+1;}
int main(){
    int arr[]={1,2,3,5};
    int sz=5;
    binarysearch (arr,sz);
    return 0;
}