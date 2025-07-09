
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {-3,8,4,-2,5,6,12,18,-9,6};
//     int n= 10;
//     int sum=0;
//     int target;
//     cin >> target;

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             sum = arr[i] + arr[j];
//             if(sum==target){
//                 cout << "Yes" << "\n";
//                 cout << i << " ";
//                 cout << j;
//                 return 0;
//             }
//         }
//     }

//     return 0;
// }

// time complexity O(n)

// using linear sorting (time complexity is O(n)):


#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]= {-8,-5,7,6,4,-6};
    int n=6;
    bool is_ans_possible = false;
    int target;
    cin >> target;
    sort(arr,arr+n);

    for(int i=0;i<n;){
        for(int j=n;j>0;){
            if(arr[i] + arr[j] == target ){
                cout << true << "\n" ;
                cout << i << " ";       // try -14 answer 0 and 1 index ?? Dude we sorted the array remember??
                cout << j;
                return 0;
            }
            else if( arr [i] + arr[j] < target){
                i++;
            }else{
                j--;
            }
        }
    }

    if(is_ans_possible== false){
        cout << false;
    }

    return 0;
}