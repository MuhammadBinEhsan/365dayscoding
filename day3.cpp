#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
cin>>n;
int space=n;
int a=n-1;
for(int i=1;i<=n;i++){
    for(int k=1; k<space; k++)
            cout<<" ";
        space = space-1;
    for(int j=1;j<=i;j++){
         
        cout<<"#";
    }
    cout<<endl;
}
}
int main(){
    staircase(10);
}

//for(int i=1;i<=n;i++){
    //for(int j=1;j<=i;j++){
