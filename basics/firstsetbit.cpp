#include <iostream>
using namespace std;
int main()
{
    int n;
    int ans=1;
    cin >> n;

    if(n%2==1){
        cout << 1;
        return 0;
    }
    while(n%2!=1){
        n=n >> 1;
        ans+=1;

    }
    cout << ans;

    return 0;
}