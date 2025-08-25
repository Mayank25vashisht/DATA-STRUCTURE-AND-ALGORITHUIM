# include <iostream>
using namespace std;
void linearsearch (int arr[],int sz){
    int n;
    n=sz;
    int real =(n*(n+1))/2;
    int sum=0;
    for(int i=0;i<sz-1;i++){
        sum=sum+arr[i]; 
    }   
        real=real-sum;
    cout<<"missing number is :"<<real;

}
int main(){
    int arr[]={1,2,3,5};
    int sz=5;
    linearsearch (arr,sz);
    return 0;
}