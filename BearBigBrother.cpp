#include<iostream>
using namespace std;

int main(){
    int l,b;
    cin>>l>>b;

    int y=0;
    while(l<=b){
        l*=3;
        b*=2;
        y++;
    }
    cout<<y<<endl;
}
