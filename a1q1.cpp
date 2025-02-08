#include<iostream>
using namespace std;
int main(){
    //1 no is prime or not:  2 if not prime display factors 3 if number is prime display the next prime number:
    int num,f=0;
    cout<<"enter the number:"<<endl;
    cin>>num;
    for(int i=2;i<num-1;i++){
        if(num%i==0){
            cout<<"not prime"<<endl;
            for(int j=2;j<num-1;j++){
                if(num%i==0){
                  cout<<i<<endl; 
                  f=1;      
                }
            }
        }
    }
    if(f==0){
        int p=0;
        cout<<"its prime"<<endl;
        cout<<"the next prime number will be "<<endl;
        for(int i=num+1;i<num+20;i++){
            for(int j=2;j<i-1;j++){
                if(i%j==0){
                    p=1;
                    break;
                }
                else{
                    p=2;
                }
            }
            if(p==2){
                cout<<i<<endl;
                break;
            }
        }
    }
}