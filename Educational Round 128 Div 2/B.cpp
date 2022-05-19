#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<string> FIELD(999);

int searchByCOl(int Rcol, int n)
{
    for(int col = Rcol-1; col >= 0; col--){
        for(int row = 0; row < n; row++){
            if(FIELD[row][col] == 'R') return 1;
        }
    }
    return 0;
}
void solve()
{
    int n, m;
    int topRow = 0, leftCol = 0, firstR = 0;
    int Rcol;
    int flag = 1;
    cin>>n>>m;
    for(int row = 0; row < n; row++){
        cin>>FIELD[row];
        for(int col = 0; col < m; col++){
            if(FIELD[0][col] == 'R' && !topRow) topRow = 1;
            if(FIELD[row][0] == 'R' && !leftCol) leftCol = 1;
            if(FIELD[row][col] == 'R' && !firstR){
                firstR = 1;
                Rcol = col;
            }
        }
    }
    if (FIELD[0][0] == 'R') cout<<"YES"<<endl;
    else if(topRow && leftCol) cout<<"NO"<<endl;
    else{
        flag = searchByCOl(Rcol, n);
        if(!flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    return 0;
}
