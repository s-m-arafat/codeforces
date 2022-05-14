#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr;
    int length, queries, elem;

    cin>>length>>queries;
    while(length--){
        cin>>elem;
        arr.push_back(elem);
    }
    while(queries--){
        int lo = 0, hi = arr.size();
        int mid = (hi+lo)/2 ;
        int num;
        cin>>num;
        while(hi>=lo){
            mid = (hi+lo)/2;
            if(num == arr[mid]) break;
            else if(num>arr[mid]){
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        hi>=lo?
        cout<<"YES"<<endl
            :cout<<"NO"<<endl;
    }
    return 0;
}

