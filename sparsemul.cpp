#include <iostream>
using namespace std;
void mat(int a[3][2],int b[2][3],int c[3][3]){
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){  c[i][j] = 0 ;
        for(int k=0;k<2;k++){
            c[i] [j]=c[i] [j]+a[i][k]*b[k][j];
        }
    }
}
 cout<<"matric c:"<<endl;
 cout<<"rows\tcolumns\tvalue"<<endl;
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(c[i][j]!=0){
            cout<<i<<"\t"<<j<<"\t"<<c[i][j]<<endl;
        }
    }
 }
 }



int main(){
    int a [3][2]={{1,2},{1,0},{1,0}};
    int b [2][3]={{1,2,0},{1,2,0}};
    int c [3] [3];
    mat (a, b , c);
    
    return 0;

}