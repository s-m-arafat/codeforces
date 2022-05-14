#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    int box, candy[50];
    int minimum, sum, i;
    scanf("%d", &test);
    while(test--){
        sum = 0;
        scanf("%d", &box);
        for (i = 0; i < box; i++){
            scanf("%d", &candy[i]);
            sum += candy[i];
        }
        minimum = *min_element(candy, candy+box);
        printf("%d\n", sum - minimum*box);
    }
    return 0;
}
