#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if(n==0){
        return -1;
    }
    int ans=1;
    while(n%2 !=1){
        n=n>>1;
        ans+=1;
    }
    cout << ans;
    return 0;
}

// for odd numbers first bit is always set so the answer will always be 1.