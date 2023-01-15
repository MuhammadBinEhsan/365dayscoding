#include <iostream>
using namespace std;
class Solution {
public:
           int multiply(string num1, string num2) {
int a=stoi(num1);
int b=stoi(num2);
return a*b;
    }
};
int main(){
string a,b;
cin>>a;
cin>>b;
Solution s;
cout<<a<<"x"<<b<<"="<<s.multiply(a,b);


}
