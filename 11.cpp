#include<iostream>;
using namespace std;
int main(){
    int i=1,sum=0,n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    while(i<=n){
        if (i%2==0){
            sum+=i;
            
        }
        i=i+1;
    }
    cout<<sum<<endl;
}