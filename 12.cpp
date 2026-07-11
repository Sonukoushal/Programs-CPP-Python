#include<iostream>;
using namespace std;
int main(){
    int n,i=2,f=0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    while(i<n){
        if (n%i==0){
            f+=1;
            break;
        }
        i+=1;
    }
    if(f>0){
        cout<<"number is not prime"<<endl;
    }
    else{
        cout<<"number is prime"<<endl;
    }

}