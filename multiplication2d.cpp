#include <iostream>
using namespace std;
int mat(int a[][2],int b[][2],int c[][2]){
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){  c[i][j] = 0 ;
        for(int k=0;k<2;k++){
            c[i] [j]=c[i] [j]+a[i][k]*b[k][j];
        }
    }
}
}



int main(){
    int a [2][2]={{1,2},{1,2}};
    int b [2][2]={{1,2},{1,2}};
    int c [2] [2];
    mat (a, b , c);
    cout<<"new matrix is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<c [i] [j];

        }cout<<endl;
    }
    return 0;

}