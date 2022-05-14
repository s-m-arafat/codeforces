#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a , b ,c ,d;
    cin>>a>>b>>c>>d;
    if(a>=c && a<=d) cout<<a<<endl;
    else if (c>=a && c<=d) cout<<c<<endl;
    else cout<<a+c<<endl;
}
int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}

