#include<bits/stdc++.h>

using namespace std;

class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    // code here
	    vector<int> ans;
	    
int s = 0, e = n-1, i, max, min; 
 
for (s = 0; s < n-1; s++)
{
    if (arr[s] > arr[s+1])
    break;
}
if (s == n-1)
{
    ans.push_back(0);
    ans.push_back(0);
}
 
for(e = n - 1; e > 0; e--)
{
    if(arr[e] < arr[e-1])
    break;
}
 
max = arr[s]; min = arr[s];
for(i = s + 1; i <= e; i++)
{
    if(arr[i] > max)
    max = arr[i];
    if(arr[i] < min)
    min = arr[i];
}
 
for( i = 0; i < s; i++)
{
    if(arr[i] > min)
    { 
    s = i;
    break;
    }     
} 
 
for( i = n -1; i >= e+1; i--)
{
    if(arr[i] < max)
    {
    e = i;
    break;
    } 
} 

ans.push_back(s);
ans.push_back(e);

return ans;
	}


};

int main()
{
 int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}