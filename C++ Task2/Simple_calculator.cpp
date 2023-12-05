#include<iostream>
using namespace std;
int main(){
    int option,a,b;
    cout<<endl;
    cout<<"**************************** SIMPLE CALCULATOR ****************************"<<endl;
        cout<<endl;
    int calculate=1;
    while(calculate==1){
        cout<<"Choose the operation to be performed : "<<endl;
        cout<<endl;
        cout<<"1.Addition    2.Subtraction    3.Multiplication    4.Division    ";
        cin>>option;
        cout<<endl;
        switch(option){
            case 1: cout<<"Enter first number : ";
                    cin>>a;
                    cout<<"Enter second number : ";
                    cin>>b;
                    cout<<"Addition : "<<a<<" + "<<b<<" = "<<a+b<<endl;
                    break;
            case 2: cout<<"Enter first number : ";
                    cin>>a;
                    cout<<"Enter second number : ";
                    cin>>b;
                    cout<<"Subtraction : "<<a<<" - "<<b<<" = "<<a-b<<endl;
                    break;
            case 3: cout<<"Enter first number : ";
                    cin>>a;
                    cout<<"Enter second number : ";
                    cin>>b;
                    cout<<"Multiplication : "<<a<<" * "<<b<<" = "<<a*b<<endl;
                    break;
            case 4: cout<<"Enter first number : ";
                    cin>>a;
                    cout<<"Enter second number : ";
                    cin>>b;
                    cout<<"Division : "<<a<<" / "<<b<<" = "<<a/b<<endl;
                    break;
            default: cout<<"Invalid option";

        }
        cout<<endl;
        cout<<"1.Continue   2.Quit   ";
        cin>>calculate;
        cout<<endl;
    }
}






