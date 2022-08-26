//Taniya
//2010992468
//set5
//q1

#include <bits/stdc++.h>
using namespace std;

// function to find the length of longest
// subarray having sum k
int lengthoflongsubarray(int A[], int N, int K)
{

    int i = 0, j = 0, sum = 0;
    int maxlength = INT_MIN;

    while (j < N) {
        sum += A[j];
        if (sum < K) {
            j++;
        }
        else if (sum == K) {
            maxlength = max(maxlength, j-i+1);
            j++;
        }
        else if (sum > K) {
            while (sum > K) {
                sum -= A[i];
                i++;
            }
            if(sum == K){
                maxlength = max(maxlength, j-i+1);
            }
            j++;
        }
    }
    return maxlength;
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
      cin>>arr[i];
  }
  int k;
  cin>>k;
  cout << "Length = " << lengthoflongsubarray(arr, n, k);
  return 0;
}
