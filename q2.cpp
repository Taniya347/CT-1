//Taniya
//2010992468
//Set5
//q2

#include <bits/stdc++.h>
using namespace std;
void printallsubarray(int nums[], int n)
{
    // consider all subarrays starting from `i`
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        // consider all subarrays ending at `j`
        for (int j = i; j < n; j++)
        {
            // sum of elements so far
            sum += nums[j];

            // if the sum is seen before, we have found a subarray
            // with zero-sum
            if (sum == 0) {
                for (int d = i; d< j; ++d)
                {
                    cout<<nums[d]<<" " ;
                    /* code */
                }
                cout<<endl;
            }
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int nums[n];
    for (int i = 0; i < n; ++i)
    {
      cin>>nums[i];
  }

  printallsubarray(nums, n);

  return 0;
}
