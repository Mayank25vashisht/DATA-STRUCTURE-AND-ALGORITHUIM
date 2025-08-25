# include<iostream>
using namespace std;
void tri (){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i-j<=1&&i-j>=-1){
             arr[i][j] =2;
            }else{
                arr[i][j]=0;
            }
        }
    }
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<arr[i][j];
  cout<<"   ";   }
  cout<<endl;
 
}
}
int main(){
    tri ();
    return 0;

}