# include <iostream>
using namespace std;
void distinct(int arr[],int sz){int sum =0;
    for (int i=0;i<sz;i++){
        for(int j=i+1;j<sz;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<sz-1;k++){
                    swap(arr[k],arr[k+1]);
                } 
            sz--;j--;}
        }
    }

for(int i=0;i<sz;i++){
    cout<<arr[i]<<" ";sum=sum+1;
} cout<<"\ndistinct element are:"<<sum;}
int main (){
    int arr[]={1,2,2,2,3,3,3,4,4,4};
    int sz=10;
    distinct(arr,sz);
    return 0;
}