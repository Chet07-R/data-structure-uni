#include <iostream>
using namespace std;
int main()
{
    int n=10;
    int arr[]={1,2,3,4,5,6,8,9,10};
    int missing=0;
    for(int i=1;i<=n;i++){
        missing ^=i;
    }
    for(int i=0;i<n-1;i++){
        missing ^=arr[i];
    }
    cout << missing;
    return 0;
}