//5 rotation of matrix by 90 degree
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter size of Square Matrix: "; cin>>n;
cout<<"Enter elements: ";
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
cin>>a[i][j];
    }
}
cout<<"Original Matrix: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
int b[n][n];
for(int i=0;i<n;i++){ 
    for(int j=0;j<n;j++){
       b[i][j]=a[j][i];
    }
}
int flag = 0;
for(int i=0;i<n;i++){ 
    for(int j=0;j<n/2;j++){
      flag = b[i][j];
      b[i][j] = b[i][n-1-j];
      b[i][n-1-j] = flag;
    }
}
cout<<"Rotated Matrix: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}