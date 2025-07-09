// find sum of arrays by combining them

#include <iostream>
using namespace std;
int main()
{
    int arr1[]={9,2,8};
    int arr2[]={1,3,9,2,5};
    int sum=0;

    int n1= sizeof(arr1)/sizeof(arr1[0]);
    int n2= sizeof(arr2)/sizeof(arr2[0]);

    int n3 = n1 + n2;
    int ans[3];

    int i =0 , j=0 , k=0;

    while(i < n1){
        ans[k++] = arr1[i++];
    }
    while (j<n1){
        ans[k++] = arr2[j++];
    }

    for(int k=0;k<n3;k++){
        sum+=ans[k];
    }

    cout << sum;

    
    return 0;
}