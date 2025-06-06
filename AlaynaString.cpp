#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int u=0,l=0;
    for (int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            l++;
        }else if(s[i]>='A' && s[i]<='Z'){
            u++;
        }else{
            continue;
        }
    }
    cout<<u<< " "<<l<<endl;
    return 0;
}
