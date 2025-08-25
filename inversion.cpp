# include <iostream>
using namespace std;
void inversion(int arr[],int sz){int sum=0;
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz;j++){
            if(i<j&&arr[i]>arr[j]){
                sum=sum+1;
            }
        }
    }

 cout<<"total inversion are:"<<sum;}
int main(){
    int arr[]={3,1,2,4,6,5};
    int sz=6;
    inversion(arr,sz);
    return 0;
}