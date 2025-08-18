#include<iostream>
using namespace std;
int sumofrows (int arr[][3],int rows,int columns){int sum;
    for(int i=0;i<rows;i++){int sum =0;
        for(int j=0;j<columns;j++){
            sum=sum+arr[i][j];
        }cout<<sum<<endl;
    }

return 0;}
int sumofcolumns(int arr[][3],int rows,int columns){int sumc;
    for(int i=0;i<rows;i++){int sumc=0;
        for(int j=0;j<columns;j++){
            sumc=sumc+arr[j][i];

        }
    }

}



int main(){int rows =3;int columns=3;
    int arr[3][3];
    cout<<"write your elements"<<endl;
    for(int i =0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }
    cout<<sumofrows(arr,rows,columns);
     cout<<sumofcolumns(arr,rows,columns);
    
    
    return 0;

}