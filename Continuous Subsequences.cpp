

#include<bits/stdc++.h>
using namespace std;
int main() {

	ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n, count=0;
    cin>>n;
    vector<int>vect(n);
    for(int i=0;i<n;i++)
    {
        cin>>vect[i];
    }
    int k;
    cin>>k;
    sort(vect.begin(),vect.end());
    for(int i=0;i<n-1;i++)
    {
        count++;
        for(int j=i+1;j<n;j++)
        {
            if(abs(vect[i]-vect[j])<=k)
            {
                count++;
            }
            else{
                break;
            }
        }
    }
    cout<<++count<<endl;


}

/*
Continuous Subsequences
Send Feedback
You are given a sequence S which consists of N integers. You have to count all such subsequences which satisfy following conditions:
1. The subsequence must be continuous.
2. The absolute difference between the first and the last element of the subsequence must be less than or equal to K.
Input Format:
The first line of input contains a single integer, that denotes the value of N.
The following line contains N space separated integers.
The following line of input contains an integer that denotes the value of K.
Constraints:
N lies in the range [1, 10000]
S[i] lies in the range [1, 1000000], where i lies in the range [1, N]
K lies in the range: [0, 1000000]
Output format:
The first and only line of output contains count of subsequences, as described in the task.
Sample Input 1:
7
11 5 2 15 25 1 3
3
Sample Output 1:
12
Explanation:
The required number of subsequences are: {11}, {5}, {5, 2}, {2}, {15}, {25}, {1}, {2, 1}, {3}, {1, 3}, {2, 3}, {5, 3}.
*/
