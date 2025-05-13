#define _CRT_SECURE_NO_WARNINGS

#include"leetcode.h"

//DP34 【模板】前缀和
//#include<iostream>
//using namespace std;
//
//int main() {
//    int n, q;
//    cin >> n >> q;
//    long long arr[n];
//    long long dp[n + 1];//arr的前i项和
//    dp[0] = 0;
//    for (int i = 0; i < n; ++i)
//    {
//        cin >> arr[i];
//        dp[i + 1] = dp[i] + arr[i];
//    }
//
//    while (q--) {
//        int l, r;
//        cin >> l >> r;
//        cout << dp[r] - dp[l - 1] << endl;
//    }
//    return 0;
//}



//DP35 【模板】二维前缀和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n, m, q;
//    cin >> n >> m >> q;
//    vector<vector<long long>> arr(n, vector<long long>(m));
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));//(0,0)到(i,j)的和
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 1; i < n; ++i)
//        dp[i][1] = dp[i - 1][1] + arr[i - 1][0];
//    for (int j = 1; j < m; ++j)
//        dp[1][j] = dp[1][j - 1] + arr[0][j - 1];
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i - 1][j - 1];
//
//        }
//    }
//    //打印dp，测试用
//    // for(int i = 0; i <= n; ++i){
//    //     for(int j = 0; j <= m; ++j){
//    //         cout << dp[i][j] << " ";
//    //     }
//    //     cout << endl;
//    // }
//    while (q--) {
//        int x1, y1, x2, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << endl;
//    }
//    return 0;
//}
//// 0 0 0 0 0 
//// 0 1 3 6 10 
//// 0 4 8 12 16 
//// 0 5 14 25 37 



//最长公共子序列(一)（重做，练习，空间复杂度优化）
//class Solution {
//public:
//    /**
//     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
//     *
//     * s1和s2最长公共子序列的长度
//     * @param s1 string字符串
//     * @param s2 string字符串
//     * @return int整型
//     */
//    int LCS(string s1, string s2) {
//        //dp[i][j]为s1的0~i与s2的0~j的最长公共子序列
//        //对于dp[i][j],若s1[i] == s2[j]，则dp[i][j] = dp[i - 1][j - 1] + 1，否则等于max(dp[i - 1][j],dp[i][j - 1])
//        //滚动数组优化
//        if (s1.size() < s2.size())
//            swap(s1, s2);
//        vector<int> dp(s2.size() + 1, 0);
//        for (int j = 1; j <= s2.size(); ++j) {
//            //初始化第一行
//            dp[j] = dp[j - 1];
//            if (s1[0] == s2[j - 1])
//                dp[j] = 1;
//        }
//        for (int i = 1; i < s1.size(); ++i) {
//            int temp = 0;//存储将会替换的值d[i - 1][j - 1]
//            for (int j = 1; j <= s2.size(); ++j) {
//                int cur = 0;
//                if (s1[i] == s2[j - 1]) {
//                    cur = 1 + temp;
//                }
//                else {
//                    cur = max(dp[j], dp[j - 1]);
//                }
//                temp = dp[j];
//                dp[j] = cur;
//            }
//        }
//        return dp[s2.size()];
//    }
//};
//
//int main() {
//    Solution sl;
//    string s1 = "abcde", s2 = "bdcaaa";
//    cout << sl.LCS(s1, s2);
//    return 0;
//}



//合唱团
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    //动态规划，dp[i][j]选取了j个学生且最后一个选取i位置的学生的最大能力乘积
//    //dp[i][j]就从前d组的dp[i][j]里找
//    //因为有负数的情况，创建一个最小能力乘积的dp，当前为负值时，乘以最小即为最大
//    int n;
//    cin >> n;
//    vector<int> stu(n);
//    for (int i = 0; i < n; ++i)
//        cin >> stu[i];
//    int k, d;
//    cin >> k >> d;
//    vector<vector<long long>> dp_max(n, vector<long long>(k + 1, -0x3f3f3f3f));
//    vector<vector<long long>> dp_min(n, vector<long long>(k + 1, 0x3f3f3f3f));
//    dp_max[0][1] = dp_min[0][1] = stu[0];
//    long long ret = stu[0];
//    for (int i = 1; i < n; ++i) {
//        //这里每次初始化只选当前位置的学生的dp，不这样操作的话就需要单独将所有dp[i][0]设置为1，否则选择当前学生时乘积会为0
//        dp_max[i][1] = dp_min[i][1] = stu[i];
//        for (int j = 1; j <= k; ++j) {
//            for (int z = i - 1; z >= max(0, i - d); --z) {
//                if (stu[i] < 0) {
//                    dp_max[i][j] = max(dp_max[i][j], dp_min[z][j - 1] * stu[i]);
//                    dp_min[i][j] = min(dp_min[i][j], dp_max[z][j - 1] * stu[i]);
//                }
//                else {
//                    dp_max[i][j] = max(dp_max[i][j], dp_max[z][j - 1] * stu[i]);
//                    dp_min[i][j] = min(dp_min[i][j], dp_min[z][j - 1] * stu[i]);
//                }
//            }
//        }
//        ret = max(ret, dp_max[i][k]);
//    }
//    cout << ret << endl;
//    return 0;
//}



//活动安排
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//    //贪心+动态规划+二分
//    //对于选择的最优情况的n个活动，因为是最优，所以后面遇见能接在后面的活动，此刻也是最优
//    //因为排序后开始时间为升序，所以若后面的活动结束时间大于前面的活动的结束时间，则选择当前活动优于选择前面的活动
//    //用一个数组记录选择n个活动的结束时间为k（因为根据可知排序后我们只需要关注结束时间即可），
//    //若当前活动能接在最后面，则接在最后，否则看看是否能优化之前记录的活动（开始时间都能接在同一个活动后，但结束时间优于所记录的那一个）
//    int n;
//    cin >> n;
//    vector<vector<int>> nums(n, vector<int>(2));
//    for (int i = 0; i < n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        nums[i] = { a, b };
//    }
//    sort(nums.begin(), nums.end(), [&nums](vector<int>& x, vector<int>& y)->bool {return x[0] < y[0]; });
//    vector<int> ret;//记录选择的活动，ret的size即为最多活动数
//    ret.push_back({ nums[0][1] });
//    for (int i = 1; i < n; ++i) {
//        int a = nums[i][0], b = nums[i][1];
//        if (a >= ret[ret.size() - 1])
//            ret.push_back(b);
//        else {
//            //寻找时用二分，因为存储的数据肯定有序
//            int left = 0, right = ret.size() - 1;
//            while (left <= right) {
//                int mid = (left + right) >> 1;
//                if (ret[mid] == a) {
//                    //刚好可以接在mid位置后面
//                    left = mid + 1;//left最后的位置是大于目标a的第一个，所以left的位置就是我们要替换的位置
//                    break;
//                }
//                else if (ret[mid] > a) right = mid - 1;
//                else left = mid + 1;
//            }
//            ret[left] = min(ret[left], b);
//        }
//    }
//    cout << ret.size() << endl;
//    return 0;
//}



//kotori和迷宫
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<utility>
//using namespace std;
//
//int n, m;
//int dir[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
//
//void BFS(vector<vector<char>>& grid, vector<vector<int>>& ret, queue<pair<int, int>>& q) {
//    while (!q.empty()) {
//        auto& [x, y] = q.front();
//        for (auto& e : dir) {
//            int a = x + e[0];
//            int b = y + e[1];
//            //若位置a,b为-1且不为*，则说明可以走
//            if (0 <= a && a < n && 0 <= b && b < m && grid[a][b] != '*' && ret[a][b] == -1) {
//                ret[a][b] = ret[x][y] + 1;
//                if (grid[a][b] == '.')//若为'.'还能继续走
//                    q.push({ a, b });
//            }
//        }
//        q.pop();
//    }
//}
//
//int main() {
//    //层序遍历，用一个二维数组记录走到此处需要的最少步数，不能走到则为-1
//    //遍历结果统计数量和最小
//    cin >> n >> m;
//    int ki, kj;//起始位置
//    vector<vector<char>> grid(n, vector<char>(m));
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cin >> grid[i][j];
//            if (grid[i][j] == 'k') {
//                ki = i, kj = j;
//            }
//        }
//    }
//    vector<vector<int>> ret(n, vector<int>(m, -1));
//    ret[ki][kj] = 0;
//    queue<pair<int, int>> q;
//    q.push({ ki, kj });
//    BFS(grid, ret, q);
//    int ret_count = 0;
//    int ret_min = 0x3f3f3f3f;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            if (grid[i][j] == 'e' && ret[i][j] != -1) {
//                ++ret_count;
//                ret_min = min(ret_min, ret[i][j]);
//            }
//        }
//    }
//    if (ret_count == 0)
//        cout << -1 << endl;
//    else
//        cout << ret_count << " " << ret_min << endl;
//    return 0;
//}