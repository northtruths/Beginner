#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, int i);
vector<vector<int>> subsets(vector<int>& nums) {
	vector<int> cur;
	vector<vector<int>> ret;
	return Func(nums, cur, ret, 0);
}
vector<vector<int>> Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, int i)
{
	for (i; i < nums.size(); ++i)
	{
		cur.push_back(nums[i]);
		ret.push_back(cur);
		Func(nums, cur, ret, i + 1);
		cur.pop_back();
	}
	return ret;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		v[i] = i + 1;
	}
	vector<vector<int>> ret = subsets(v);
	for (vector<int>& e : ret) {
		for (int i = 0; i < e.size(); ++i)
		{
			i && cout << ' ';
			cout << e[i];
		}
		cout << endl;
	}
	return 0;
}