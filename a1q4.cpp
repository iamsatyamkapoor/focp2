
    //4 spiral pattern in matrix
    #include<iostream>
    using namespace std;
    int main(){
    int n;
    cout<<"Enter size of square matrix: "; cin>>n;
    int a[n][n];int t=1;
    int top=0,bottom=n-1,left=0,right=n-1;
    while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        a[top][i]=t;
        t++;
    }
    top++;
    for(int i=top;i<=bottom;i++){
        a[i][right]=t;
        t++;
    }
    right--;
    for(int i=right;i>=left;i--){
        a[bottom][i]=t;
        t++;
    }
    bottom--;
    for(int i=bottom;i>=top;i--){
        a[i][left]=t;
        t++;
    }
    left++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]/10==0)
            cout<<"0"<<a[i][j]<<" ";
            else
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}