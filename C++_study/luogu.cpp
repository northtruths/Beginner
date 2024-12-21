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


//P8772 [蓝桥杯 2022 省 A] 求和
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    int n;
//    long long s = 0;
//    cin >> n;
//    long long cur = 0;
//    cin >> cur;
//    for (int i = 1; i < n; ++i)
//    {
//        int num = 0;
//        cin >> num;
//        s += cur * num;
//        cur += num;
//    }
//    cout << s << endl;
//    return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//bool is_ret1(string& s)
//{
//    int i1 = 0, i2 = 7;
//    while (i1 < i2)
//    {
//        if (s[i1] != s[i2])
//            return false;
//        ++i1;
//        --i2;
//    }
//    return true;
//}
//
//bool is_ret2(string& s)
//{
//    int i1 = 0, i2 = 7;
//    char a = s[0];
//    char b = s[1];
//    while (i1 < i2)
//    {
//        if (s[i1] != s[i2])
//            return false;
//        if (i1 == 0 || i1 == 2)
//        {
//            if (s[i1] != a)
//                return false;
//        }
//        else
//        {
//            if (s[i1] != b)
//                return false;
//        }
//        ++i1;
//        --i2;
//    }
//    return true;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    ++n;
//    int flag1 = 0;
//    int ret1 = 0;
//    int ret2 = 0;
//    while (1)
//    {
//        string s = to_string(n);
//        if (flag1 == 0)
//        {
//            if (is_ret1(s))
//            {
//                ret1 = atoi(s.c_str());
//                flag1 = 1;
//            }
//        }
//
//        if (is_ret2(s))
//        {
//            ret2 = atoi(s.c_str());
//            break;
//        }
//        ++n;
//    }
//    cout << ret1 << endl << ret2 << endl;
//    return 0;
//}


//#include<string>
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string s("123");
//	string sadd("456");
//
//	s += sadd;
//	cout << s << endl;
//	return 0;
//}

//P8716 [蓝桥杯 2020 省 AB2] 回文日期
//#include<iostream>
//#include<string>
//using namespace std;
//
//bool is_ret1(string& s)
//{
//    int i1 = 0, i2 = 7;
//    while (i1 < i2)
//    {
//        if (s[i1] != s[i2])
//            return false;
//        ++i1;
//        --i2;
//    }
//    return true;
//}
//
//bool is_ret2(string& s)
//{
//    int i1 = 0, i2 = 7;
//    char a = s[0];
//    char b = s[1];
//    while (i1 < i2)
//    {
//        if (s[i1] != s[i2])
//            return false;
//        if (i1 == 0 || i1 == 2)
//        {
//            if (s[i1] != a)
//                return false;
//        }
//        else
//        {
//            if (s[i1] != b)
//                return false;
//        }
//        ++i1;
//        --i2;
//    }
//    return true;
//}
//
//bool is_s_year(int year)
//{
//    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//        return true;
//    else
//        return false;
//}
//
//
//void right_year(string& s)
//{
//    int year = (s[0] - 48) * 1000 + (s[1] - 48) * 100
//        + (s[2] - 48) * 10 + (s[3] - 48);
//    int m = (s[4] - 48) * 10 + (s[5] - 48);
//    int day = (s[6] - 48) * 10 + (s[7] - 48);
//    ++day;
//    if (day <= 28)
//    {
//        ++s[7];
//        if (s[7] > '9')
//        {
//            ++s[6];
//            s[7] = '0';
//        }
//        return;
//    }
//    if (day == 32)
//    {
//        if (m == 12)
//        {
//            ++year;
//            m = 1;
//            day = 1;
//        }
//        else
//        {
//            ++m;
//            day = 1;
//        }
//
//    }
//    else if (day == 31)
//    {
//        if (!(m == 1 || m == 3 || m == 5 || m == 7 || m == 8
//            || m == 10 || m == 12))
//        {
//            ++m;
//            day = 1;
//        }
//    }
//    else if (day == 30)
//    {
//        if (m == 2 && is_s_year(year))
//        {
//            ++m;
//            day = 1;
//        }
//    }
//    else if (day == 29)
//    {
//        if (m == 2 && !is_s_year(year))
//        {
//            ++m;
//            day = 1;
//        }
//    }
//    s = to_string(year);
//    if (m < 10)
//    {
//        s += '0';
//        s += m + 48;
//    }
//    else
//        s += to_string(m);
//    if (day < 10)
//    {
//        s += '0';
//        s += day + 48;
//    }
//    else
//        s += to_string(day);
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    string s = to_string(n + 1);
//    int flag1 = 0;
//    string ret1;
//    string ret2;
//    while (1)
//    {
//        if (flag1 == 0)
//        {
//            if (is_ret1(s))
//            {
//                ret1 = s;
//                flag1 = 1;
//            }
//        }
//
//        if (is_ret2(s))
//        {
//            ret2 = s;
//            break;
//        }
//        right_year(s);
//    }
//    cout << ret1 << endl << ret2 << endl;
//    return 0;
//}

//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cmath>
//using namespace std;
//
////把数字转换为字符串，遍历所有字符串分为两部分的情况，
////看是否有两部分都是平方数的可能 
//bool Func(string&& s)
//{
//	int curi = 1;//分割位置，这个位置归属右部分 
//	int endi = s.size() - 1;//末尾 
//	int ll = 1;//左部分长度 
//	while (curi <= endi)
//	{
//			string left(s.substr(0, ll));
//			string right(s.substr(curi, s.size() - ll));
//			double l = sqrt(atoi(left.c_str()));
//			double r = sqrt(atoi(right.c_str()));
//			if ((l != 0 && r != 0) && (l == (int)l && r == (int)r))
//				return true;
//		++curi;
//		++ll;
//	}
//	return false;
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	for (int i = a; i <= b; ++i)
//	{
//		double sqrt_i = sqrt(i);
//		if (sqrt_i == (int)sqrt_i && Func(to_string(i)))
//			cout << i << endl;
//	}
//	return 0;
//}



//#include<iostream>
//using namespace std;

//int main()
//{
//    int k, n;
//    cin >> n >> k;
//    if (n == k)
//    {
//        cout << 0 << endl;
//        return 0;
//    }
//    if (k == 1)
//    {
//        cout << 2 << endl;
//        return 0;
//    }
//    long long dp = 1;//1到i的k单调排列数量,初始i为k + 1,因为i <= k的情况排列数量都为0
//    int tempi = k / 2 + 1;
//    for (int i = 2; i <= tempi; ++i)
//    {
//        dp *= i * i;
//    }
//    dp *= 2;;
//    if (k % 2 == 0)
//        dp /= tempi;
//    long long dp_next = dp;//没 % 的dp
//    dp %= 123456;
//    long long ret = dp;
//    for (int i = k + 1; i <= n; ++i)
//    {
//        ret = dp;
//        dp_next = dp + (dp_next * k) % 123456;
//        dp = (dp_next) % 123456;
//    }
//    //37296
//    cout << ret << endl;
//    return 0;
//}

//#define mod 123456 // 模数
//using namespace std;
//int n, m, dp[505][505]; // dp 数组
//int main()
//{
//    scanf("%d%d", &n, &m); // 输入
//    if (n == 1) // 因为 dp 是从 2 开始的，所以 n=1 的情况特判一下
//    {
//        if (m == 1) puts("1");
//        else puts("0");
//        return 0;
//    }
//    dp[2][1] = 2; // 初始值，n=2 时不管是 1,2 还是 2,1 都是 1 单调排列
//    for (int i = 2; i < n; i++)
//        for (int j = 1; j <= m; j++)
//        {
//            //            printf ("dp[%d][%d]=%d\n",i,j,dp[i][j]); // 调试用
//            dp[i + 1][j] = (dp[i + 1][j] + dp[i][j] * j) % mod; // 转移
//            dp[i + 1][j + 1] = (dp[i + 1][j + 1] + dp[i][j] * 2) % mod;
//            dp[i + 1][j + 2] = (dp[i + 1][j + 2] + dp[i][j] * (i - j - 1)) % mod;
//        }
//    printf("%d\n", dp[n][m] % mod); // 输出
//    return 0;
//}




//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<unordered_map>
//#include<cmath>
//using namespace std;
//
//string Func(int x, int p, unordered_map<int, int>& m, unordered_map<int, int>& n)
//{
//	//x为进位个数 
//	string s;
//	int index = 0;//权
//	while (x != 0)
//	{
//		s += n[x % (int)(pow(p, index) * p)];
//		x = x / (pow(p, index) * p);
//		++index;
//	}
//	reverse(s.begin(), s.end());
//	return s;
//}
//
//int main()
//{
//	int p;
//	cin >> p;
//	unordered_map<int, int> m;//ASCII码映射数字 A(65)->10
//	unordered_map<int, int> n;//数字映射ASCII码 10->A(65)
//	int ch = 65;
//	for (int i = 0; i <= 36; ++i)
//	{
//		if (i < 10)
//		{
//			m.insert({ i + 48, i});
//			n.insert({ i, i + 48});
//		}
//		else
//		{
//			m.insert({ ch, i });
//			n.insert({ i, ch });
//			++ch;
//		}
//	}
//	for (int i = 1; i < p; ++i)
//	{
//		for (int j = 1; j <= i; ++j)
//		{
//			cout << char(n[i]) << '*' << char(n[j]) << '=' << Func(i * j, p, m, n) << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}

//P8780 [蓝桥杯 2022 省 B] 刷题统计
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//    long long a, b, n;
//    cin >> a >> b >> n;
//    long long day = 0;
//    long long week = n / (5 * a + 2 * b);
//    n %= (5 * a + 2 * b);
//    int s = 5;
//    while (s && n > 0)
//    {
//        n -= a;
//        --s;
//        ++day;
//    }
//    if (n > 0)
//    {
//        n -= b;
//        ++day;
//    }
//    if (n > 0)
//        ++day;
//    day += week * 7;
//    cout << day << endl;
//    return 0;
//}

//P8795[蓝桥杯 2022 国 A] 选素数（什么数论题，搞半天弱化了题意，还不是现在的我能做的）
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//bool is_prime(int x)
//{
//    if (x == 2)  return true;
//    if (x % 2 == 0)  return false;
//    for (int i = 3; i <= sqrt(x); i += 2)
//    {
//        if (x % i == 0)
//            return false;
//    }
//    return true;
//}
//
//int main()
//{
//    //n/2 ~ n的 二分之一若有素数，则这个素数+1满足条件,
//    //若没有，n/2 ~ n间有素数，则加一也满足
//    int n = 0;
//        cin >> n;
//        if (n % 2 == 1)
//        {
//            cout << -1 << endl;
//            return 0;
//        }
//        int flag1 = 0, flag2 = 0;//判断情况一和二，二优于一
//        int ret = -2;
//        for (int i = n / 2 + 1; i < n; ++i)
//        {
//            if (flag1 == 0)
//            {
//                if (is_prime(i))
//                {
//                    flag1 = 1;
//                    ret = i;
//                }
//            }
//            if (i % 2 == 0)
//            {
//                if (is_prime(i / 2))
//                {
//                    ret = i / 2;
//                    break;
//                }
//            }
//        }
//        if (is_prime(n / 2))
//            ret = min(ret, n / 2);
//        cout << ret + 1 << endl;
//    return 0;
//}
// 97:-1
// 98:48
// 99:48
// 100:54

//#include<iostream>
//
//#define ll long long
//using namespace std;
//ll x, ans = 1e13;
//bool jug(ll x)
//{
//    if (x == 1 || x == 0)	return 0;
//    for (int i = 2; i * i <= x; i++)
//        if (x % i == 0)	return 0;
//    return 1;
//}
//void subdosth(ll p)
//{
//    for (ll i = (p + 1) / 2; i < p; i++)
//        if (jug(i)) { ans = min(ans, i + 1);	break; }
//}
//void dosth(ll pr)
//{
//    if (jug(pr))	subdosth((x / pr - 1) * pr + 1);
//    if (jug(x / pr))	subdosth((pr - 1) * x / pr + 1);
//}
//int main()
//{
//    //for (int k = 1; k <= 100; ++k) {
//        cin >> x;
//        //x = k;
//        for (int i = 2; i * i <= x; i++)	if (x % i == 0)	dosth(i), dosth(x / i);
//        if (ans != (ll)1e13)	cout << ans << endl;
//        else	cout << -1 << endl;
//    //}
//    return 0;
//}


//P9241 [蓝桥杯 2023 省 B] 飞机降落
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//struct fly
//{
//	int t;//到达时间
//	int d;//盘旋时间
//	int l;//降落时间
//};
//
//bool compare(fly& a, fly& b)
//{
//	return a.t < b.t;
//}
//
//void judge(vector<fly>& v, vector<bool>& map, bool& ret, int cur = -1, int num = 0, int cost = 0)
//{
//	//cost为到目前为止消耗的时间，若消耗的时间大于到达时间+盘旋时间则无法安全降落
//	//cur为当前要降落的飞机的下标
//	//num为当前安全降落数量
//	if (cur != -1 && v[cur].t + v[cur].d < cost)
//		return;
//	else if(cur != -1)
//	{
//		map[cur] = true;
//		cost += v[cur].l;
//		++num;
//	}
//	if (num == v.size() || ret == true)
//	{
//		ret = true;
//		return;
//	}
//	for (int i = 0; i < v.size(); ++i)
//	{
//		if (map[i] == true)
//			continue;
//		int pre_cost = cost;
//		if (cost < v[i].t)
//			cost = v[i].t;
//		judge(v, map, ret, i, num, cost);
//		cost = pre_cost;
//		map[i] = false;
//		if (ret == true)
//			return;
//	}
//
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n = 0;
//		cin >> n;
//		vector<fly> v(n);
//		for (int i = 0; i < n; ++i)
//			cin >> v[i].t >> v[i].d >> v[i].l;
//		sort(v.begin(), v.end(), compare);
//		vector<bool> map(n, false);//记录飞机是否降落
//		bool ret = 0;
//		judge(v, map, ret);
//		if (ret)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}
//1
//3
//10 20 10
//10 30 20
//10 50 99999


//P8796 [蓝桥杯 2022 国 AC] 替换字符（未ac）
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    string s;
//    cin >> s;
//    int m = 0;
//    cin >> m;
//    while (m--)
//    {
//        int l, r;
//        char x, y;
//        cin >> l >> r >> x >> y;
//        for (int i = l - 1; i < r; ++i)
//        {
//            if (s[i] == x)
//                s[i] = y;
//        }
//    }
//    cout << s << endl;
//    return 0;
//}


//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//
//void Find_index(int& index, int n)
//{
//    while (1)
//    {
//        if (pow(10, index) <= n && n < pow(10, index + 1))
//            return;
//        else
//            ++index;
//    }
//}
//
//bool Func(int x)
//{
//    int flag1 = 1;//奇数
//    int flag2 = 0;//偶数
//    while (x)
//    {
//        if (flag1 && x % 10 % 2 == 0)
//            return false;
//        if (flag2 && x % 10 % 2 == 1)
//            return false;
//        x /= 10;
//        if (flag1)
//        {
//            flag1 = 0;
//            flag2 = 1;
//        }
//        else
//        {
//            flag1 = 1;
//            flag2 = 0;
//        }
//    }
//    return true;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    int ret = 0;
//    if (n < 10)
//    {
//        for (int i = 1; i <= n; ++i)
//            if (i % 2 == 1)
//                ++ret;
//        cout << ret << endl;
//        return 0;
//    }
//    int index = 0;
//    Find_index(index, n);
//    vector<int> dp(index);
//    dp[0] = 5;
//    for (int i = 1; i < index; ++i)
//    {
//        if (i % 2 == 1)
//            dp[i] = 4 * dp[i - 1];
//        else
//            dp[i] = 5 * (dp[i - 1] + dp[i - 2]);
//    }
//
//    for (int i = 0; i < index; ++i)
//        ret += dp[i];
//
//    for (int i = pow(10, index) + 1; i <= n; ++i)
//    {
//        if (Func(i))
//            ++ret;
//    }
//    cout << ret << endl;
//    return 0;
//}



//#include <iostream>
//using namespace std;
//bool good(int x)
//{
//    int i = 1;
//    while (x > 0)
//    {
//        if (i % 2 == 1)
//        {
//            if ((x % 10) % 2 == 0)return 0;
//        }
//        else
//        {
//            if ((x % 10) % 2 == 1)return 0;
//        }
//        x /= 10, i++;
//    }
//    return 1;
//}
//int main()
//{
//            int N , ans = 0;//ans存储答案（“好数”个数）
//            cin >> N;
//            for (int i = 1; i <= N; i++)
//            {
//                if (good(i) == 1)
//                {
//                    ans++;
//                    cout << i << endl;
//
//                }
//                //满足“好数”，答案加1
//            }
//            //cout << ans << endl;
//    return 0;
//}



#include<iostream>
#include<cmath>
#include<string>
using namespace std;


void r_add(string& s1, string& s2)
{
    int l = 0, r = 0;//第一个数和第二个数的位置
    int add = 0;
    int s1_len = s1.size();
    int s2_len = s2.size();

    while (l < s1_len && r < s2_len)
    {
        int temp = s1[l] - 48 + s2[r] - 48;
        s1[l] = (temp + add) % 10 + 48;
        add = (temp + add) / 10;
        ++l; ++r;
    }
    while (l < s1_len)
    {
        int temp = s1[l] - 48;
        s1[l] = (temp + add) % 10 + 48;
        add = (temp + add) / 10;
        ++l;
    }
    while (r < s2_len)
    {
        int temp = s2[r] - 48;
        s1 += (temp + add) % 10 + 48;
        add = (temp + add) / 10;
        ++r;
    }
    if (add != 0)
        s1 += add + 48;
}

void r_mul(string& s1, string& s2)
{
    int index = 0;
    string new_s = "0";
    for (index; index < s2.size(); ++index)
    {
        //单次乘法
        int add = 0;
        string temp;
        for (int i = 0; i < index; ++i)
            temp += '0';
        int x_temp = s2[index] - 48;
        for (int i = 0; i < s1.size(); ++i)
        {
            int cur = s1[i] - 48;
            cur = cur * x_temp + add;
            temp += cur % 10 + 48;
            add = cur / 10;
        }
        if (add != 0)
            temp += add + 48;
        r_add(new_s, temp);
    }
    s1 = new_s;
}

int main()
{
    int n = 0;
    long double d = 0;
    cin >> n >> d;
    if (n == 0)
    {
        cout << (int)(d + 0.5) << endl;
    }
    int len = 0;
    while (d * pow(10, len) != (long long)(d * pow(10, len)))
    {
        ++len;
    }
    string s1("2");
    string temp("2");
    string s2(to_string((long long)(d * pow(10, len))));
    for (int i = 2; i <= n; ++i)
    {
        r_mul(s1, temp);
    }
    reverse(s2.begin(), s2.end());
    int flag = 1;
    if (s1.size() > s2.size())
    {
        r_mul(s1, s2);
    }
    else
    {
        r_mul(s2, s1);
        flag = 2;
    }

    if (flag == 1)
    {
        reverse(s1.begin(), s1.end());
        for (int i = 1; i <= len - 1; ++i)
            s1.pop_back();
        if (s1.back() >= 5 + 48)
        {
            s1.pop_back();
            reverse(s1.begin(), s1.end());
            string a("1");
            r_add(s1, a);
            reverse(s1.begin(), s1.end());
            cout << s1 << endl;
        }
        else
        {
            s1.pop_back();
            cout << s1 << endl;
        }
    }
    else
    {
        reverse(s2.begin(), s2.end());
        for (int i = 1; i <= len - 1; ++i)
            s2.pop_back();
        if (s2.back() >= 5 + 48)
        {
            s2.pop_back();
            reverse(s2.begin(), s2.end());
            string a("1");
            r_add(s2, a);
            reverse(s2.begin(), s2.end());
            cout << s2 << endl;
        }
        else
        {
            s2.pop_back();
            cout << s2 << endl;
        }
    }
    return 0;
}