#include<bits/stdc++.h>

using namespace std;

int sum(int num)
{
    int val = 0;
    while(num){
        val += num%10;
        num /= 10;
    }
    return val;
}
int main()
{
    char S[6], d[1];
    int num, num1, num2;
    int tests;
    scanf("%d", &tests);
    gets(d);
    while(tests--){
        gets(S);
        num = atoi(S);
        num1 = num / 1000;
        num2 = num % 1000;
        if(sum(num1)== sum(num2))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

