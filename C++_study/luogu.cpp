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


