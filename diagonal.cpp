# include <iostream>
using namespace std;
void diagonal(){
    int arr[3][3];
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                arr[i][j]=3-j;
            }
            else{
                arr[i][j]=0;
            }
        }
    }

for (int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
        
        }cout<<endl;
    }
}



int main(){
    diagonal();

    return 0;

}