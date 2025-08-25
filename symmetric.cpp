# include <iostream>
using namespace std;
void symmertric (){
    int arr[3][3]={{1,5,6},{5,1,2},{6,2,1}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]!=arr[j][i]){
                cout<<"it is not symmetric"<<endl;
                
            }                
            }
        }
    

    
 cout<<"symmetric"<<endl;
}
int main (){
    symmertric ();
    return 0;

}