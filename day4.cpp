#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d){
    cin>>a>>b>>c>>d;
int big=a;
        if(b>big){
            big=b;
        }if(c>big){
            big=c;
        }if(d>big){
            big=d;
        }
        return big;
    
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

