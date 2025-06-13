#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;

    char firstChar=s[0];

    if(firstChar>='A' && firstChar<='Z'){
        cout<< s<<endl;
    }else{
        firstChar=s[0]-32;
        cout<<firstChar;
        for (int i=1;i<s.size();i++){
            cout<<s[i];
        }
        cout<<endl;
    }

}
