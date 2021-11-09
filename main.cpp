#include<bits/stdc++.h>

using namespace std;

class trio{
    public:
    int x;
    int y;
    int gcd;
};

trio extendedEuclids( int a, int b){
    
    if( b == 0) return { 1 , 0 , a};
    
    trio ans = extendedEuclids(b , a%b);
    
    return { ans.y , ans.x - ( a/b)*ans.y , ans.gcd};
}


int main(){
    
    int a,b;
    cin>>a>>b;
    
    trio res = extendedEuclids(a,b);
    
    cout<<" value for X : "<<res.x<<" "<<"Value for Y: "<<res.y<<" Value for GCD: "<<res.gcd;
    return 0;
}
