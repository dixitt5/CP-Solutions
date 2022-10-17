// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find last remaining index
// after repeated removal of perfect
// square indices
int findRemainingIndex(int N)
{
	// Initialize the ans variable as N
	int ans = N;

	// Iterate a while loop and discard
	// the possible values
	while (N > 1) {

		// Total discarded values
		int discard = int(sqrt(N));

		// Check if this forms a
		// perfect square
		if (discard * discard == N) {

			// Decrease answer by 1
			ans--;
		}

		// Subtract the value from
		// the current value of N
		N -= discard;
	}

	// Return the value remained
	return ans;
}

// Function to find last remaining element
// after repeated removal of array element
// at perfect square indices
void findRemainingElement(int arr[], int N)
{

	// Find the remaining index
	int remainingIndex = findRemainingIndex(N);

	// Print the element at that
	// index as the result
	cout << arr[remainingIndex - 1];
}

// Driver Code
signed main()
{
	int arr[] = { 2, 3, 4, 4, 2, 4, -3, 1, 1 };
	int N = sizeof(arr) / sizeof(arr[0]);
	findRemainingElement(arr, N);

	return 0;
}
