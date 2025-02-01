#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
string str[n];
for(int i =0;i<n;i++){
    cin>>str[i];
}
if(n==1){
    for(int i =0;i<n;i++){
        cout<<str[i];
    }

}
else{
int str2=0;
string hos ;
for(int i =0;i<n;i++){
int str1=0;

    for(int j =0;j<n;j++){
        if(i==j){
            continue;
        }
        if(str[i]==str[j]){
            str1++;
        }
        if(str1>str2){
            str2=str1;
            hos=str[i];
        }
    }
}cout<<hos;}
}
