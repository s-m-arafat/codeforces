#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int  half, sum1 = 0, sum2 = 0;
        cin >> s;
        half = s.size()/2;
        for(int i=0; i<half; i++)
        {
            sum1 = sum1+s[i];
        }
        for(int i=half; i<s.size(); i++)
        {
            sum2 = sum2 + s[i];
        }
        if(sum1==sum2)
        {
            cout << "YES" << endl;
        }else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
