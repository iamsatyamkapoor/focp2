
/*Checks whether the string is a palindrome (ignoring spaces and case sensitivity).
Counts and displays the frequency of each character in the string (caseinsensitive).
Replace all vowels in the string with a specific character (e.g., )./   */
#include<iostream>
using namespace std;
int main(){
int n;
    cout<<"enter the length of string:"<<endl;
    cin>>n;
    char s[n];
    int q=0;
    cout<<"enter the string:"<<endl;
    cin>>s;
    for(int i=0;i<n/2;i++){
        if(s[i]==s[n-1-i]){
            q=1;
        }
        else{
            q=2;
            break;
        }
    }
    if(q==1){
        cout<<"its palindrome"<<endl;
    }
    else{
        cout<<"its not palindrome"<<endl;
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[j]==s[i]){
                count++;
            }
        }
        cout<<"frequency of chracter "<<s[i]<<" in string is "<<count<<endl;
        count=0;
    }
    cout<<"replacing all vowels in string by #"<<endl;
    cout<<"so the string after replacement of vowels by # will be:"<<endl;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            s[i]='#';
        }
    }
    cout<<s<<endl; 
    return 0;
}