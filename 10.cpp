#include<iostream>;
using namespace std;
int main(){
    int n,i=1,sum=0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<sum;


}