//WAP that takes 3 inputs a character, an integer and a floating point number. Display them in a formatted table.
#include<iostream>
using namespace std;    
int main()
{
    int a;
    char b;
    float c;
    cout<<"Enter an integer : ";
    cin>>a;
    cout<<"Enter a character: ";
    cin>>b;
    cout<<"Enter a floating point number: ";
    cin>>c;
    cout<<"Integer\tCharacter\tFloating Point\n";
    cout<<a<<"\t"<<b<<"\t\t"<<c;
} 