//1 reverse user array and display the array  2 display 2nd largest and 2nd smallest element of array
#include<iostream>
using namespace std;
int main(){
int n,a;
cout<<"enter the size of array:"<<endl;
cin>>n;
int arr[n];
int temp[n];
for(int i=0;i<n;i++){
    cout<<"enter the element:"<<i+1<<endl;
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    temp[i]=arr[n-i-1];
}
cout<<"reverse of the array is:"<<endl;
for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
}
cout<<"2 largest and 2 smallest element:"<<arr[n-2]<<" "<<arr[1];
return 0;
}