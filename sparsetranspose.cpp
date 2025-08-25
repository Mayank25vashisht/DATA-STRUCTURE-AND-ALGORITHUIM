# include <iostream>
using namespace std;
int transpose(int arr[][3],int rows,int columns){
    for(int i=0;i<columns;i++){
        for(int j=0;j<rows;j++){
            cout<<arr[j] [i];
        }
    cout<<endl;}
 cout<<"matric c:"<<endl;
 cout<<"rows\tcolumns\tvalue"<<endl;
 for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        if(arr[j][i]!=0){
            cout<<i<<"\t"<<j<<"\t"<<arr[j][i]<<endl;
        }
    }
 }
}
int main(){
    int arr[2] [3]={{1,2,3},{2,3,3}};
    
    int rows=2;
    int columns=3;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl; 
    }
    transpose(arr,rows,columns);
    return 0;
}