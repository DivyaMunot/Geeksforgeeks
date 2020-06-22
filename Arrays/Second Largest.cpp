/*
Given an array A of size N, print second largest element from an array.

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. Each testcase contains two lines of input. The first line contains an integer N denoting the size of the array. The second line contains the N space seperated intgers of the array

Output:
For each testcase, in a new line, print the second largest element.

Constraints:
1 ≤ T ≤ 50
1 ≤ N ≤ 500
1 ≤ Ai ≤ 1200

Example:
Input
2
5
89 24 75 11 23
6
56 42 21 23 65 20
Output
75
56
*/

#include <iostream>
using namespace std;

int second(int arr[], int size){
    
    int max = -1;
    
    for(int i=0; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    
    for(int i=0; i<size; i++){
        if(arr[i] == max)
            arr[i] = -1;
    }
    max=-1;
    for(int i=0; i<size; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

int main() {
	//code
	
	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
	    int size;
	    cin >> size;
	    
	    int arr[size];
	    
	    for(int j=0; j<size; j++){
	        cin >> arr[j];
	    }
	    
	    int ans = second(arr, size);
	    cout << ans << endl;
	}
	
	return 0;
}
