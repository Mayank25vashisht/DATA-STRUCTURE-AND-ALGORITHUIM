# include <iostream>
using namespace std;
void upper (){
   int arr[4][4];
   for(int i=0;i<4;i++){
    for (int j=0;j<4;j++){
        if (i-j>=0){
            arr[i][j]=5;
        }else{
            arr[i][j]=0;
        }
    }
   }

for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<"  ";
    }cout<<endl;
}}
int main(){
    upper ();

    return 0;
}