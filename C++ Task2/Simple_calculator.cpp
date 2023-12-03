#include<iostream>
using namespace std;
int main(){
    int option,a,b;
    cout<<endl;
    cout<<"Choose the operation to be performed : "<<endl;
    cout<<endl;
    cout<<"1.Addition    2.Subtraction    3.Multiplication    4.Division    ";
    cin>>option;
    cout<<endl;
    switch(option){
        case 1: cout<<"Enter two numbers : ";
                cin>>a>>b;
                cout<<"Addition : "<<a<<" + "<<b<<" = "<<a+b<<endl;
                break;
        case 2: cout<<"Enter two numbers : ";
                cin>>a>>b;
                cout<<"Subtraction : "<<a<<" - "<<b<<" = "<<a-b<<endl;
                break;
        case 3: cout<<"Enter two numbers : ";
                cin>>a>>b;
                cout<<"Multiplication : "<<a<<" * "<<b<<" = "<<a*b<<endl;
                break;
        case 4: cout<<"Enter two numbers : ";
                cin>>a>>b;
                cout<<"Division : "<<a<<" / "<<b<<" = "<<a/b<<endl;
                break;
        default: cout<<"Invalid option";
    }
}