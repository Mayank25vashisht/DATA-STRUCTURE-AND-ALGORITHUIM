# include <iostream>
using namespace std;
# define n 5
int stack [n];
int top=-1;
void push(){
    int x;
    cout<<"enter the data";
    cin>>x;
    if(top==n-1){
        cout<<"overflow"<<endl;

    } else{
        top ++;
        stack[top] =x; 
    }


}
void pop(){
    int item;
    if(top ==-1){
        cout<<"under flow"<<endl;
    } 
    else {
        item =stack[top];
        cout<<"popped item is :"<<item<<endl;
;        top--;
 }
}
void peek(){
    if(top==-1){
        cout<<"no element"<<endl;
    }
    else{
        cout<<"your top number is :"<<stack[top];
    }
}void display(){
    for (int i=top;i>=0;i--){
        cout<<stack[i];
    }
}
int main(){
    int c;do{
    
    cout<<"enter choice from 1 to 4"<<endl;
    cin>>c;
    switch(c){
        case 1 : push();
        break;
        case 2: pop();
        break;
        case 3 : peek();
        break;
        case 4: display();

    }

 } while(c!=0);

return 0;


}