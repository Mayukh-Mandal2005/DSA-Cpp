#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {1,1,2,2,3,4,4,5,5};

    // other cases ; Unique at start: {0, 1, 1, 2, 2, 3, 3}
    // Unique at end: {1, 1, 2, 2, 3, 3, 9}

    int n = nums.size();

    //brute force
    // for (int i = 0; i < n; i++)
    // {
    //     int num = nums[i];
    //     int counter = 0;
    //     for(int j = 0; j < n; j++){
    //         if(nums[j] == num){
    //             counter++;
    //         }
    //     }
    //     if(counter == 1){
    //         cout << num << endl;;
    //     }
    // }


    //Better approach using hashing
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, nums[i]);
    }
    hash[maxi + 1] = [0];



}
