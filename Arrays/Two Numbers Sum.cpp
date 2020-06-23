/*
Given an array A of N positive integers and another number X. Determine whether or not there exist two elements in A whose sum is exactly X.

Input:
The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N and X, N is the size of array. The second line of each test case contains N integers representing array elements A[i].

Output:
Print "Yes" if there exist two elements in A whose sum is exactly X, else "No" (without quotes).

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 105
1 ≤ A[i] ≤ 105

Example:
Input:
2
6 16
1 4 45 6 10 8
5 10
1 2 4 3 6

Output:
Yes
Yes

Explanation:
Testcases 1: 10 and 6 are numbers making a pair whose sum is equal to 16.
*/

#include <iostream>
using namespace std;

bool find(int arr[], int N, int X){
    
    for(int i=0; i<N-1; i++){
	   for(int j=i+1; j<N; j++){
	        if(arr[i]+arr[j] == X)
	            return 1;
	   }
	}
	return 0;
}

int main() {
	//code
	int t;
	cin >> t;
	
	while(t--){
	    int N, X;
	    cin >> N >> X;
	    
	    int arr[N];
	    for(int i=0; i<N; i++)
	        cin >> arr[i];
	  
	    if(find(arr, N, X))
	        cout << "Yes" << endl;
	    else
	        cout << "No" << endl;
	}
	return 0;
}
