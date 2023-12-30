// Coding Ninjas
// Cut Into Segments
// BY Recursion
// T.C. = O(3^N) S.C = O(1);

#include<iostream> 
using namespace std;
#include<limits.h>
#include<vector>
int solve(int n,int x,int y,int z)
{
	if(n<0)
	{
		return INT_MIN;
	}
	if(n==0)
	{
		return 0;
	}

	int ans1 = solve(n-x,x,y,z)+1;
	int ans2 = solve(n-y,x,y,z)+1;
	int ans3 = solve(n-z,x,y,z)+1;

	return max(ans1,max(ans2,ans3));

}

int cutSegments(int n, int x, int y, int z) {
	int ans = solve(n,x,y,z);
	if(ans < 0)
	{
		return 0;
	}
	return ans;
}

int main()
{
    cout << "Cut Into Segments" << endl;
}
