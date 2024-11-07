#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//int compare(const void* a, const void* b)
//{
//    return *((int*)a) - *((int*)b);
//}
//int main()
//{
//    int arr[3] = { 0 };
//    for (int i = 0; i < 3; ++i)
//    {
//        cin >> arr[i];
//    }
//    qsort(arr, 3, 4, compare);
//    char sort[3] = { 0 };
//    for (int i = 0; i < 3; ++i)
//    {
//        cin >> sort[i];
//        sort[i] -= 65;
//    }
//    for (int i = 0; i < 3; ++i)
//    {
//        cout << arr[sort[i]] << " ";
//    }
//    return 0;
//}


//#include<iostream>
//#include<vector>
//#include<limits.h>
//using namespace std;
//
////cur为当前次数，ret为最小次数, pre 为之前的楼层
//int solution(vector<int>& K, int cur, int& ret, int a, int b, int pre)
//{
//
//	if (cur > ret)
//		return ret;
//	if (a == b)
//	{
//		if (cur < ret)
//			ret = cur;
//	}
//	if (K[a] == 0)
//		return ret;
//	if (a + K[a] < K.size() && a + K[a] != pre)
//	{
//		solution(K, cur + 1, ret, a + K[a], b, a);
//	}
//	else if (a - K[a] > 0 && a - K[a] != pre)
//	{
//		solution(K, cur + 1, ret, a - K[a], b, a);
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	cin >> n >> a >> b;
//	vector<int> K;
//	K.resize(n + 1);
//	for (int i = 1; i <= n; ++i)
//	{
//		cin >> K[i];
//	}
//	int ret = INT_MAX;
//	solution(K, 0, ret, a, b, 0);
//	if (ret != INT_MAX)
//		cout << ret << endl;
//	else
//		cout << -1 << endl;
//	return 0;
//}
//
////5 1 5
////1 2 3 3 5


//哈希练习

//P3370 【模板】字符串哈希
//#include<iostream>
//#include<unordered_set>
//#include<vector>
//#include<string>
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//    vector<string> v(n);
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> v[i];
//    }
//    unordered_set<string> s;
//    for (auto& e : v)
//    {
//        s.insert(e);
//    }
//    cout << s.size() << endl;
//    return 0;
//}



//[ARC172C] Election
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//int main()
//{
//	//10
//	//BBBAAABBAA
//	int n = 0;
//	cin >> n;
//	vector<char> v(n);
//	vector<int> prefi(n);//记录到这的投票情况，正为a负为b
//	for (int i = 0; i < n; ++i)
//		cin >> v[i];
//	prefi[0] = v[0] == 'A' ? 1 : -1;
//	for (int i = 1; i < n; ++i)
//	{
//		prefi[i] = prefi[i - 1] + (v[i] == 'A' ? 1 : -1);
//	}
//	int ret = 1;
//	for (int i = 1; i < n; ++i)
//	{
//		int temp1 = prefi[i];
//		int temp2 = prefi[i - 1];
//		char pre1 = prefi[i] == 0 ? 'C' : prefi[i] > 0 ? 'A' : 'B';
//		char pre2 = prefi[i - 1] == 0 ? 'C' : prefi[i - 1] > 0 ? 'A' : 'B';
//		swap(prefi[i], prefi[i - 1]);
//		prefi[i] += (v[i] == 'A' ? 1 : -1);
//		prefi[i - 1] -= (v[0] == 'A' ? 1 : -1);
//		char now1 = prefi[i] == 0 ? 'C' : prefi[i] > 0 ? 'A' : 'B';
//		char now2 = prefi[i - 1] == 0 ? 'C' : prefi[i - 1] > 0 ? 'A' : 'B';
//		if (pre1 == now1 && pre2 == now2)
//			;
//		else
//			++ret;
//	}
//	cout << ret << endl;
//	return 0;
//}

//#include<algorithm>
//#include<unordered_map>
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int deleteAndEarn(vector<int>& nums) {
//        unordered_map<int, int> map;//计数
//        vector<pair<int, int>> count;//按升序记录删除这个位置能获得的点数
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            ++map[nums[i]];
//        }
//        for (auto& e : map)
//        {
//            count.push_back(pair<int, int>(e.first, e.first * e.second));
//        }
//        sort(count.begin(), count.end(), compare());
//        if (count.size() == 0) return 0;
//        if (count.size() == 1) return count[0].second;
//        vector<int> dp(count.size());//到 i 位置所能获得的最大点数
//        dp[0] = count[0].second;
//        if (count[1].first == count[0].first + 1)
//            dp[1] = count[1].second > count[0].second ? count[1].second : count[0].second;
//        else
//            dp[1] = dp[0] + count[1].second;
//        for (int i = 2; i < count.size(); ++i)
//        {
//            if (count[i].first == count[i - 1].first + 1)
//            {
//                if (dp[i - 2] + count[i].second > dp[i - 1])
//                {
//                    dp[i] = dp[i - 2] + count[i].second;
//                }
//                else
//                {
//                    dp[i] = dp[i - 1];
//                }
//            }
//            else
//            {
//                dp[i] = dp[i - 1] + count[i].second;
//            }
//        }
//        return dp[count.size() - 1];
//    }
//private:
//    struct compare
//    {
//        bool operator()(pair<int, int>& p1, pair<int, int>& p2)
//        {
//            return p1.first < p2.first;
//        }
//    };
//};
//
//int main()
//{
//    vector<int> v({ 3,4,2 });
//    Solution s;
//    cout << s.deleteAndEarn(v) << endl;
//    return 0;
//}