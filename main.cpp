#include <iostream>

using namespace std;

int main()
{
int n,t;
cin>>n>>t;
// 3   2
string result ="";
if (n<2&&t==10){
    cout<<-1;
}
else if(n>=2&&t==10)
{
    for(int i =0;i<n-1;i++){
        result +=1+ '0';
    }
    result += 0 + '0';
    cout<<result;
}
else{
for(int i =0;i<n;i++){
    result +=t+'0';
}
cout<<result;
}



    return 0;
}
