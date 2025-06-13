#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp="";
    int i,j;
    for (i=0;i<s.size();i++){
        int found=0;

        for(j=0;j<temp.size();j++){
            if(s[i]==temp[j]){
                found=1;
                break;
            }
        }

        if(found==0){
            temp=temp+s[i];
        }
    }
    int len=temp.length();
    if(len%2==0){
        cout<< "CHAT WITH HER!"<<endl;
    }else{
        cout<< "IGNORE HIM!"<<endl;
    }

    return 0;
}
