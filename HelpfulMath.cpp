#include<iostream>
using namespace std;

int main(){
    string s,t(100,' ');//t(100, ' ') mean that Initial big size in t case
    cin>>s;

    int counter=0;
    for (int i=0;i<s.size();i++){
        if(s[i] !='+'){
            t[counter]=s[i];
            counter++;
        }
    }

    for (int i=0;i<counter;i++){
        for (int j=i+1;j<counter;j++){
            if(t[i]>t[j]){
                char temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }
    for (int i=0;i<counter;i++){
        cout<<t[i];
        if(i<counter-1){
            cout<< "+";
        }
    }
    cout<<endl;

    return 0;

}
