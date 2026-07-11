#include<iostream>
using namespace std;
int main(){
    int i=0,n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<"*";
            j+=1;

        }
        cout<<endl;
        i+=1;
    }
    
}