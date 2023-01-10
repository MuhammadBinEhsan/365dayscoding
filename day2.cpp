#include <iostream>
#include <cstdio>
using namespace std;
#include<map>
int main() {
    int a,b;
  cin>>a;
   cin>>b;
    map<int,string> arr={{1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},{6,"six"},{7,"seven"},{8,"eight"},{9,"nine"}};

for(int i=a;i<=b;i++){
    if(i>=1 && i<=9){
        cout<<arr[i]<<endl;
    }else{
        if(i%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
    
}
return 0;
}
