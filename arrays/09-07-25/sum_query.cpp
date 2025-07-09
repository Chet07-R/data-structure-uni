// using brute force

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {-3,8,0,5,-3,-2};
//     int query[][2] = {{0,2},{1,3},{2,5},{1,4}};

//     int n = sizeof(query)/sizeof(query[0]);  // because the final array will contain same no. of elements as query array

//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=query[i][0]; j<=query[i][1];j++){
//             sum+=arr[j];                      

//         }
//         cout << sum << " ";
//     }

//     return 0;
// }

// but this approach is not very efficient, instead we can use prefix array method:

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-3,8,0,5,-3,-2};
    int query[][2] = {{0,2},{1,3},{2,5},{1,4}};

    int n = sizeof(arr)/sizeof(arr[0]);
    int q = sizeof(query)/sizeof(query[0]);

    // now we want the prefix arr(it will have sum upto the index)

    int prefix[n+1];
    prefix[0]=0;
    for(int i=1;i<=n;i++){
        prefix[i]=prefix[i-1] + arr[i-1];
    }


    for(int i=0;i<q;i++){
        int l=query[i][0];
        int r=query[i][1];
        int sum = prefix[r+1] - prefix[l];
        cout << sum << " " ;
    }


    return 0;
}
