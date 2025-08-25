# include <iostream>
using namespace std;
void add(int a[][3],int b[][3]){
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]= a[i][j]+b[i][j];

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
int main (){
    int a[3][3]={{1,0,0},{0,0,0},{1,0,0}};
    int b [3][3]={{3,0,0},{0,0,0},{0,9,0}};
    add(a,b);
    return 0;

}
