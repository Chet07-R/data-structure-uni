#include <iostream>
using namespace std;
int main()
{
    int getAns(int ele, int wholeXor){
        int exceptXOR = wholeXor ^ele;
        if(exceptXor > ele) return -1;
        return ele-exceptXor;
    }


    return 0;
}