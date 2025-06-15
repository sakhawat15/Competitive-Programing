#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    for(int i=0;i<k;i++){
        int mod=n%10;
        if(mod!=0){
            n-=1;
        }else{
            n/=10;
        }
    }
    cout<<n<<endl;
}
