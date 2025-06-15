#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    long long int m=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            m+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<m<<endl;
    return 0;
}

