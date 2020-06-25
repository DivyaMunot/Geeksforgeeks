'''
Given two strings A and B, find if A is a subsequence of B.

Input:
The first line of input contains an integer T denoting the no of test cases. Then T test cases follow. Each test case contains two space separated strings A and B.

Output:
For each test case, in a new line, print 1 if a is sub-sequences of b else print 0.

Constraints:
1 <= T <= 900
1<= |A|,|B| <=104

Example:
Input:
2
AXY YADXCP
gksrek geeksforgeeks

Output:
0
1

Explanation:
Testcase1:
Input: A = "axy", B = "yadxcp"
Output: 0 (A is not a subsequence of B)
Testcase2:
Input: A = "gksrek", B = "geeksforgeeks"
Output: 1 (str1 is a subsequence of str2)
'''

t = int(input())

for item in range(t):
    str1, str2 = input().split()
    
    i = 0
    j = 0
    n = len(str1)
    m = len(str2)
    
    while i < n and j < m :
        if str1[i] == str2[j]:
            i += 1
            j += 1
        else:
            j += 1
        
    if i == n:
        print(1)
    else:
        print(0)
