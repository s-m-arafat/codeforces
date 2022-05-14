#include <bits/stdc++.h>
using namespace std;
char FIELD[100][5];

int searchByCOl(int Rx, int n, int m)
{
    for(int j = Rx-1; j >= 0; j--){
        for(int i = 0; i < m; i++){
            if(FIELD[i][j] == 'R') return 1;
        }
    }
    return 0;
}
void solve()
{
    int n, m;
    int topRow = 0, leftCol = 0, firstR = 0;
    int Rx;
    int flag = 1;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>FIELD[i][j];
            if(FIELD[0][j] == 'R' && !topRow) topRow = 1;
            if(FIELD[i][0] == 'R' && !leftCol) leftCol = 1;
            if(FIELD[i][j] == 'R' && !firstR){
                firstR = 1;
                Rx = j;
            }
        }
    }
    if (FIELD[0][0] == 'R') cout<<"YES"<<endl;
    else if(topRow && leftCol) cout<<"NO"<<endl;
    else{
        flag = searchByCOl(Rx, n, m);
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
