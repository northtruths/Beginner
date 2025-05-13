#define _CRT_SECURE_NO_WARNINGS

#include"leetcode.h"

//DP34 ��ģ�塿ǰ׺��
//#include<iostream>
//using namespace std;
//
//int main() {
//    int n, q;
//    cin >> n >> q;
//    long long arr[n];
//    long long dp[n + 1];//arr��ǰi���
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



//DP35 ��ģ�塿��άǰ׺��
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int main()
//{
//    int n, m, q;
//    cin >> n >> m >> q;
//    vector<vector<long long>> arr(n, vector<long long>(m));
//    vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, 0));//(0,0)��(i,j)�ĺ�
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
//    //��ӡdp��������
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



//�����������(һ)����������ϰ���ռ临�Ӷ��Ż���
//class Solution {
//public:
//    /**
//     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
//     *
//     * s1��s2����������еĳ���
//     * @param s1 string�ַ���
//     * @param s2 string�ַ���
//     * @return int����
//     */
//    int LCS(string s1, string s2) {
//        //dp[i][j]Ϊs1��0~i��s2��0~j�������������
//        //����dp[i][j],��s1[i] == s2[j]����dp[i][j] = dp[i - 1][j - 1] + 1���������max(dp[i - 1][j],dp[i][j - 1])
//        //���������Ż�
//        if (s1.size() < s2.size())
//            swap(s1, s2);
//        vector<int> dp(s2.size() + 1, 0);
//        for (int j = 1; j <= s2.size(); ++j) {
//            //��ʼ����һ��
//            dp[j] = dp[j - 1];
//            if (s1[0] == s2[j - 1])
//                dp[j] = 1;
//        }
//        for (int i = 1; i < s1.size(); ++i) {
//            int temp = 0;//�洢�����滻��ֵd[i - 1][j - 1]
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



//�ϳ���
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    //��̬�滮��dp[i][j]ѡȡ��j��ѧ�������һ��ѡȡiλ�õ�ѧ������������˻�
//    //dp[i][j]�ʹ�ǰd���dp[i][j]����
//    //��Ϊ�и��������������һ����С�����˻���dp����ǰΪ��ֵʱ��������С��Ϊ���
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
//        //����ÿ�γ�ʼ��ֻѡ��ǰλ�õ�ѧ����dp�������������Ļ�����Ҫ����������dp[i][0]����Ϊ1������ѡ��ǰѧ��ʱ�˻���Ϊ0
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



//�����
//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//int main() {
//    //̰��+��̬�滮+����
//    //����ѡ������������n�������Ϊ�����ţ����Ժ��������ܽ��ں���Ļ���˿�Ҳ������
//    //��Ϊ�����ʼʱ��Ϊ��������������Ļ����ʱ�����ǰ��Ļ�Ľ���ʱ�䣬��ѡ��ǰ�����ѡ��ǰ��Ļ
//    //��һ�������¼ѡ��n����Ľ���ʱ��Ϊk����Ϊ���ݿ�֪���������ֻ��Ҫ��ע����ʱ�伴�ɣ���
//    //����ǰ��ܽ�������棬�������󣬷��򿴿��Ƿ����Ż�֮ǰ��¼�Ļ����ʼʱ�䶼�ܽ���ͬһ����󣬵�����ʱ����������¼����һ����
//    int n;
//    cin >> n;
//    vector<vector<int>> nums(n, vector<int>(2));
//    for (int i = 0; i < n; ++i) {
//        int a, b;
//        cin >> a >> b;
//        nums[i] = { a, b };
//    }
//    sort(nums.begin(), nums.end(), [&nums](vector<int>& x, vector<int>& y)->bool {return x[0] < y[0]; });
//    vector<int> ret;//��¼ѡ��Ļ��ret��size��Ϊ�����
//    ret.push_back({ nums[0][1] });
//    for (int i = 1; i < n; ++i) {
//        int a = nums[i][0], b = nums[i][1];
//        if (a >= ret[ret.size() - 1])
//            ret.push_back(b);
//        else {
//            //Ѱ��ʱ�ö��֣���Ϊ�洢�����ݿ϶�����
//            int left = 0, right = ret.size() - 1;
//            while (left <= right) {
//                int mid = (left + right) >> 1;
//                if (ret[mid] == a) {
//                    //�պÿ��Խ���midλ�ú���
//                    left = mid + 1;//left����λ���Ǵ���Ŀ��a�ĵ�һ��������left��λ�þ�������Ҫ�滻��λ��
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



//kotori���Թ�
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
//            //��λ��a,bΪ-1�Ҳ�Ϊ*����˵��������
//            if (0 <= a && a < n && 0 <= b && b < m && grid[a][b] != '*' && ret[a][b] == -1) {
//                ret[a][b] = ret[x][y] + 1;
//                if (grid[a][b] == '.')//��Ϊ'.'���ܼ�����
//                    q.push({ a, b });
//            }
//        }
//        q.pop();
//    }
//}
//
//int main() {
//    //�����������һ����ά�����¼�ߵ��˴���Ҫ�����ٲ����������ߵ���Ϊ-1
//    //�������ͳ����������С
//    cin >> n >> m;
//    int ki, kj;//��ʼλ��
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