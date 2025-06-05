#define _CRT_SECURE_NO_WARNINGS
#include"leetcode.h"

//力扣汉诺塔
//class Solution {
//public:
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        Func(A.size(), A, B, C);
//    }
//    void Func(int n, vector<int>& A, vector<int>& B, vector<int>& C)
//    {
//        if (n == 0)
//            return;
//        if (n == 1)
//        {
//            C.push_back(A.back());
//            A.pop_back();
//        }
//        else if (n == 2)
//        {
//            B.push_back(A.back());
//            A.pop_back();
//            C.push_back(A.back());
//            A.pop_back();
//            C.push_back(B.back());
//            B.pop_back();
//        }
//        else
//        {
//            Func(n - 1, A, C, B);
//            C.push_back(A.back());
//            A.pop_back();
//            Func(n - 1, B, A, C);
//        }
//
//    }
//};



//力扣：21. 合并两个有序链表
//class Solution {
//public:
//    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//        ListNode ret;
//        Func(&ret, list1, list2);
//        return ret.next;
//    }
//    void Func(ListNode* head, ListNode* list1, ListNode* list2)
//    {
//        if (list1 == nullptr)
//        {
//            head->next = list2;
//            return;
//        }
//        if (list2 == nullptr)
//        {
//            head->next = list1;
//            return;
//        }
//        if (list1->val <= list2->val)
//        {
//            head->next = list1;
//            head = head->next;
//            list1 = list1->next;
//            Func(head, list1, list2);
//        }
//        else
//        {
//            head->next = list2;
//            head = head->next;
//            list2 = list2->next;
//            Func(head, list1, list2);
//        }
//    }
//};


//力扣：206：反转链表
//#include<utility>
//using namespace std;
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        return Func(head).first;
//    }
//
//   pair< ListNode*, ListNode*> Func(ListNode* head)//first是头，sencond是尾
//    {
//        if (head == nullptr)
//            return {nullptr, nullptr};
//        else if (head->next == nullptr)
//            return { head , head };
//        else if (head->next->next == nullptr)
//        {
//            head->next->next = head;
//            ListNode* pre = head->next;
//            head->next = nullptr;
//            return { pre, head };
//        }
//        else
//        {
//            auto temp = Func(head->next);
//            head->next = temp.first;
//            ListNode* end = temp.second;
//            ListNode* ret = head->next;
//            end->next = head;
//            head->next = nullptr;
//            return {ret, head};
//        }
//
//    }
//};
//
//int main()
//{
//    ListNode* head = new ListNode(1);
//    ListNode* cur = head;
//    int t = 4;
//    while (t--)
//    {
//        ListNode* newnode = new ListNode(5 - t);
//        cur->next = newnode;
//        cur = cur->next;
//    }
//
//    Solution s;
//    s.reverseList(head);
//    return 0;
//}



//力扣：24：两两交换链表中的节点
//class Solution {
//public:
//    ListNode* swapPairs(ListNode* head) {
//        ListNode* pre = new ListNode;
//        return Func(head, pre);
//    }
//
//    ListNode* Func(ListNode* head, ListNode* pre)
//    {
//        if (head == nullptr)
//            return nullptr;
//        else if (head->next == nullptr)
//            return head;
//        else
//        {
//            ListNode* _next = head->next->next;
//            head->next->next = head;
//            pre->next = head->next;
//            head->next = Func(_next, head);
//            return pre->next;
//        }
//    }
//};


//力扣：50、快速幂Pow(x,n)
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    double myPow(double x, int n) {
//        if (x == 1 || x == 0)
//            return x == 1 ? 1 : 0;
//        long long new_n = n;
//        if (new_n < 0)
//        {
//            x = 1 / x;
//            new_n *= -1;
//        }
//        double ret = Func(x, new_n);
//        return ret;
//    }
//
//    double Func(double x, long long n)
//    {
//        if (n == 0)
//            return 1;
//        else if (n == 1)
//            return x;
//        else if (n == 2)
//            return x * x;
//        else
//        {
//            int flag = 0;
//            if (n % 2 == 1)
//            {
//                flag = 1;
//                --n;
//            }
//            double num = Func(Func(x, n / 2), 2);
//            double ret = flag ? num * x : num;
//           return ret;
//        }
//    }
//};
//
//int main()
//{
//
//    Solution s;
//    cout << s.myPow(2, -2147483648);
//    return 0;
//}




//力扣：2331：计算布尔二叉树的值
//class Solution {
//public:
//    bool evaluateTree(TreeNode* root) {
//        return Func(root);
//    }
//    bool Func(TreeNode* root)
//    {
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            return root->val;
//        }
//        if (root->val == 2)
//            return Func(root->left) || Func(root->right);
//        else
//            return Func(root->left) && Func(root->right);
//    }
//};


//力扣：814：二叉树剪枝
//  struct TreeNode {
//      int val;
//     TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//
//
//class Solution {
//public:
//    TreeNode* pruneTree(TreeNode* root) {
//        TreeNode* parent = new TreeNode(-1);
//        parent->left = root;
//        parent->right = root;
//        dfs(root, parent);
//        return parent->left;
//    }
//
//    TreeNode* dfs(TreeNode* root, TreeNode* parent)
//    {
//        if (root == nullptr)
//            return nullptr;
//        dfs(root->left, root);
//        dfs(root->right, root);
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            if (root->val == 0)
//            {
//                if (root == parent->left)
//                    parent->left = nullptr;
//                else
//                    parent->right = nullptr;
//            }
//        }
//        return root;
//    }
//};
//
//int main()
//{
//    TreeNode* root = new TreeNode(1);
//    TreeNode* r = new TreeNode(0);
//    TreeNode* rr = new TreeNode(1);
//    TreeNode* rl = new TreeNode(0);
//    root->right = r;
//    root->right->right = rr;
//    root->right->left = rl;
//    Solution s;
//    TreeNode* ret = s.pruneTree(root);
//    return 0;
//}

//98.验证二叉搜索树
//#include<utility>
//#include<iostream>
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      TreeNode() : val(0), left(nullptr), right(nullptr) {}
//      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  };
//
//  class Solution {
//  public:
//      bool isValidBST(TreeNode* root) {
//          return dfs(root);
//      }
//
//      bool dfs(TreeNode* root)
//      {
//          if (root == nullptr)
//              return true;
//          long l_max = max_order(root->left);
//          long r_min = min_order(root->right);
//          if (root->val <= l_max)
//              return false;
//          if (root->val >= r_min)
//              return false;
//          return dfs(root->left) && dfs(root->right);
//      }
//
//      long max_order(TreeNode* root)
//      {
//          if (root == nullptr)
//              return LONG_MIN;
//          if (root->left == nullptr && root->right == nullptr)
//          {
//              return  root->val;
//          }
//          long ret = root->val;
//          long l = max_order(root->left);
//          long r = max_order(root->right);
//          return max(max(l, r), ret);
//      }
//
//      long min_order(TreeNode* root)
//      {
//          if (root == nullptr)
//              return LONG_MAX;
//          if (root->left == nullptr && root->right == nullptr)
//          {
//              return  root->val;
//          }
//          long ret = root->val;
//          long l = min_order(root->left);
//          long r = min_order(root->right);
//          return min(min(l, r), ret);
//      }
//  };


//230.二叉搜索树中的第K小的元素
//class Solution {
//public:
//    int kthSmallest(TreeNode* root, int k) {
//        vector<int> ret;
//        dfs(root, k, ret);
//        return ret[k - 1];
//    }
//
//    void dfs(TreeNode* root, int k, vector<int>& ret)
//    {
//        if (root == nullptr)
//            return;
//        if (ret.size() == k)
//            return;
//        dfs(root->left, k, ret);
//        ret.push_back(root->val);
//        dfs(root->right, k, ret);
//    }
//};



//257.二叉树的所有路径
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//class Solution {
//public:
//    vector<string> binaryTreePaths(TreeNode* root) {
//        vector<string> ret;
//        string cur;
//        dfs(root, cur, ret);
//        for (auto& e : ret)
//        {
//            for (auto& ee : e)
//            {
//                if (ee == '<')
//                    ee = '-';
//            }
//        }
//        return ret;
//    }
//
//    void dfs(TreeNode* root, string& cur, vector<string>& ret)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            cur += to_string(root->val);
//            ret.push_back(cur);
//            while (!cur.empty() && cur.back() != '<' && cur.back() != '>')
//                cur.pop_back();
//            return;
//        }
//        cur += to_string(root->val);
//        cur += "<>";
//        dfs(root->left, cur, ret);
//        dfs(root->right, cur, ret);
//
//            while (!cur.empty() && cur.back() == '<' || cur.back() == '>')
//                cur.pop_back();
//            while (!cur.empty() && cur.back() != '<' && cur.back() != '>')
//                cur.pop_back();
//    }
//};
//
//int main()
//{
//    TreeNode* root = new TreeNode(-1);
//    TreeNode* l = new TreeNode(-2);
//    TreeNode* lr = new TreeNode(-5);
//    TreeNode* r = new TreeNode(-3);
//    root->left = l;
//    root->left->right = lr;
//    root->right = r;
//    Solution s;
//    auto ret = s.binaryTreePaths(root);
//    for (auto& e : ret)
//    {
//        cout << e << endl;
//    }
//    return 0 ;
//}


//46.全排列
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> ret;
//        vector<int> cur;
//        return Func(nums, cur, ret);
//    }
//    vector<vector<int>> Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret)
//    {
//        if (cur.size() == nums.size())
//            return ret;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            int flag = 0;
//            for (auto e : cur)
//            {
//                if (e == nums[i])
//                {
//                    flag = 1;
//                    break;
//                }
//            }
//            if (flag) continue;
//            cur.push_back(nums[i]);
//            if (cur.size() == nums.size())
//                ret.push_back(cur);
//            Func(nums, cur, ret);
//            cur.pop_back();
//        }
//        return ret;
//    }
//};
// 优化后，用state数组存储每个数字的使用情况，但效率似乎没变？
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        vector<vector<int>> ret;
//        vector<int> cur;
//        vector<int> state(nums.size() + 5);
//        return Func(nums, cur, ret, state);
//    }
//    vector<vector<int>> Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, vector<int>& state)
//    {
//        if (cur.size() == nums.size())
//            return ret;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (state[i] == 1)
//                continue;
//            cur.push_back(nums[i]);
//            state[i] = 1;
//            if (cur.size() == nums.size())
//                ret.push_back(cur);
//            Func(nums, cur, ret, state);
//            cur.pop_back();
//            state[i] = 0;
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> v(3);
//    for (int i = 0; i < v.size(); ++i)
//    {
//        v[i] = i + 1;
//    }
//    Solution s;
//    auto ret = s.permute(v);
//    for (auto& e : ret)
//    {
//        for (auto& ee : e)
//        {
//            cout << ee << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


//78.子集
//class Solution {
//public:
//    vector<vector<int>> subsets(vector<int>& nums) {
//        vector<int> cur;
//        vector<vector<int>> ret;
//        ret.push_back(vector<int>());
//        return Func(nums, cur, ret, 0);
//    }
//    vector<vector<int>> Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, int i)
//    {
//        for (i; i < nums.size(); ++i)
//        {
//            cur.push_back(nums[i]);
//            ret.push_back(cur);
//            Func(nums, cur, ret, i + 1);
//            cur.pop_back();
//        }
//        return ret;
//    }
//};


//1863.找出所有子集的异或总和再求和
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int subsetXORSum(vector<int>& nums) {
//        vector<int> cur;
//        int ret = 0;
//        Func(nums, cur, ret, 0);
//        return ret;
//    }
//
//    void Func(vector<int>& nums, vector<int>& cur, int& ret, int i)
//    {
//        for (i; i < nums.size(); ++i)
//        {
//            cur.push_back(nums[i]);
//            int temp = 0;
//            for (auto e : cur)
//            {
//                temp ^= e;
//            }
//            ret += temp;
//            Func(nums, cur, ret, i + 1);
//            cur.pop_back();
//        }
//    }
//};
//
//int main()
//{
//    vector<int> nums = { 5, 1, 6};
//    Solution s;
//    cout << s.subsetXORSum(nums);
//	return 0;
//}


//47.全排列Ⅱ
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        vector<int> cur;
//        vector<vector<int>> ret;
//        vector<int> state(8 + 5);
//        Func(nums, cur, ret, state);
//        return ret;
//    }
//
//    void Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, vector<int>& state)
//    {
//        if (cur.size() == nums.size())
//            return;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (state[i] == 1)
//                continue;
//            cur.push_back(nums[i]);
//            state[i] = 1;
//            if (cur.size() == nums.size())
//            {
//                int flag1 = 1;
//                for (auto& e : ret)
//                {
//                    int flag2 = 0;
//                    for (int j = 0; j < e.size(); ++j)
//                    {
//                        if (e[j] != cur[j])
//                        {
//                            flag2 = 1;
//                            break;
//                        }
//                    }
//                    if (flag2 == 0)
//                    {
//                        flag1 = 0;
//                        break;
//                    }
//                }
//                if (flag1)
//                {
//                    ret.push_back(cur);
//                }
//            }
//            Func(nums, cur, ret, state);
//            cur.pop_back();
//            state[i] = 0;
//        }
//    }
//};
//通过判断是否进行了回溯，来决定是否对当前的元素操作，先排序，
// 在相同的元素下，若当前元素的前面的元素状态为未使用，或后面的元素已使用，则为已回溯，则跳过操作
//class Solution {
//public:
//    vector<vector<int>> permuteUnique(vector<int>& nums) {
//        vector<int> cur;
//        vector<vector<int>> ret;
//        vector<int> state(8 + 5);
//        sort(nums.begin(), nums.end());
//        Func(nums, cur, ret, state);
//        return ret;
//    }
//
//    void Func(vector<int>& nums, vector<int>& cur, vector<vector<int>>& ret, vector<int>& state)
//    {
//        if (cur.size() == nums.size())
//            return;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (state[i] == 1)
//                continue;
//            if (i < nums.size() - 1)
//            {
//                if (nums[i] == nums[i + 1] && state[i + 1] == 1)
//                    continue;
//            }
//            cur.push_back(nums[i]);
//            state[i] = 1;
//            if (cur.size() == nums.size())
//                ret.push_back(cur);
//            Func(nums, cur, ret, state);
//            cur.pop_back();
//            state[i] = 0;
//        }
//    }
//};
//int main()
//{
//    vector<int> v({ 1, 2, 3 });
//    Solution s;
//    auto ret = s.permuteUnique(v);
//    return 0;
//}


//17.电话号码的数字组合
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    vector<string> letterCombinations(string digits) {
//        string cur;
//        vector<string> ret;
//        vector<string> map{ "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//        Func(digits, cur, ret, map, 0);
//        return ret;
//    }
//
//    void Func(string& digits, string& cur, vector<string>& ret, vector<string>& map, int i)
//    {
//        if (cur.size() == digits.size())
//            return;
//        for (i; i < digits.size(); ++i)
//        {
//            for (char e : map[digits[i] - 48])
//            {
//                cur += e;
//                if (cur.size() == digits.size())
//                    ret.push_back(cur);
//                Func(digits, cur, ret, map, i + 1);
//                cur.pop_back();
//            }
//        }
//    }
//};
//
//int main()
//{
//    string digits("23");
//    Solution s;
//    auto ret = s.letterCombinations(digits);
//    return 0;
//}



//22.括号生成
//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    vector<string> generateParenthesis(int n) {
//        string cur;
//        vector<string> ret;
//        int left = 0, right = 0;
//        vector<char> map({ '(', ')' });
//        Func(n, cur, ret, left, right, map);
//
//        return ret;
//    }
//    //left/right为左右括号数量
//    void Func(int n, string& cur, vector<string> &ret, int& left, int& right, vector<char>& map)
//    {
//        if (left == n && right == n)
//        {
//            ret.push_back(cur);
//            return;
//        }
//        for (char e : map)
//        {
//            int flag = 0;
//            if (e == '(')
//            {
//                if (left < n)
//                {
//                    cur += e;
//                    ++left;
//                    flag = 1;
//                }
//            }
//            else
//            {
//                if (right < left)
//                {
//                    cur += e;
//                    ++right;
//                    flag = 1;
//                }
//            }
//            if(flag)
//                Func(n, cur, ret, left, right, map);
//            if (flag && !cur.empty() && cur.back() == '(')
//            {
//                --left;
//                cur.pop_back();
//            }
//            else if (flag && !cur.empty() && cur.back() == ')')
//            {
//                --right;
//                cur.pop_back();
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto ret = s.generateParenthesis(3);
//    for (auto e : ret)
//    {
//        cout << e << endl;
//    }
//    return 0;
//}



//77.组合
//class Solution {
//public:
//    vector<vector<int>> combine(int n, int k) {
//        vector<int> cur;
//        vector<vector<int>> ret;
//        dfs(n, k, cur, ret, 1);
//        return ret;
//    }
//
//    void dfs(int n, int k, vector<int>& cur, vector<vector<int>>& ret, int i)
//    {
//        if (cur.size() == k)
//        {
//            ret.push_back(cur);
//            return;
//        }
//        for (i; i <= n; ++i)
//        {
//            cur.push_back(i);
//            dfs(n, k, cur, ret, i + 1);
//            cur.pop_back();
//        }
//    }
//};


//494.目标和/数组总和（bit）
// 看样子这道题最优解是动态规划、背包问题啥的，回溯不剪枝的化复杂度有点高
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        int ret = 0;
//
//        dfs(nums, target, 0, ret, 0);
//
//        return ret;
//    }
//
//    void dfs(vector<int>& nums, int target, int cur, int& ret, int i)
//    {
//        if (i == nums.size())
//        {
//            if (cur == target)
//                ++ret;
//            return;
//        }
//        //+
//        cur += nums[i];
//        dfs(nums, target, cur, ret, i + 1);
//        cur -= nums[i];
//
//        //-
//        cur -= nums[i];
//        dfs(nums, target, cur, ret, i + 1);
//        cur += nums[i];
//    }
//};



//784.字母大小全排列
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    vector<string> letterCasePermutation(string s) {
//        for (char& e : s)
//        {
//            if (e < 65)  continue;
//            else if (e < 97)
//            {
//                e += 32;
//            }
//        }
//        vector<string> ret;
//        Func(s, ret, 0);
//        return ret;
//    }
//
//    void Func(string& cur, vector<string>& ret, int i)
//    {
//        if (i == cur.size())
//        {
//            ret.push_back(cur);
//            return;
//        }
//        for (i; i < cur.size(); ++i)
//        {
//            if (cur[i] < 65)   continue;
//            cur[i] -= 32;
//            Func(cur, ret, i + 1);
//            cur[i] += 32;
//        }
//        if (i == cur.size())
//        {
//            ret.push_back(cur);
//            return;
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto ret = s.letterCasePermutation({ "a1b2" });
//    return 0;
//}



//526.优美的排列
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    int countArrangement(int n) {
//        vector<int> cur;
//        cur.push_back(0);
//        vector<int> state(15 + 5, 0);
//        int ret = 0;
//        Func(n, cur, ret, state);
//        return ret;
//    }
//
//    void Func(int n, vector<int>& cur, int& ret, vector<int>& state)
//    {
//        if (cur.size() - 1 == n)
//        {
//            ++ret;
//            return;
//        }
//        for (int i = 1; i <= n; ++i)
//        {
//            if (state[i] == 1)   continue;
//            cur.push_back(i);
//            state[i] = 1;
//            if (i / (cur.size() - 1) == (double)i / (cur.size() - 1)
//                || (cur.size() - 1) / i == (cur.size() - 1) / (double)i)
//            {
//                Func(n, cur, ret, state);
//            }
//            cur.pop_back();
//            state[i] = 0;
//        }
//    }
//};
//int main()
//{
//    Solution s;
//    cout << s.countArrangement(3) << endl;
//    return 0;
//}


//51.N皇后
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    vector<vector<string>> solveNQueens(int n) {
//        vector<string> cur(n, string(n, '.'));
//        vector<vector<string>> ret;
//        vector<vector<int>> map(n, vector<int>(n, 0));
//        Func(n, cur, ret, map, 0, 0);
//        return ret;
//    }
//private:
//    void Func(int n, vector<string>& cur, vector<vector<string>>& ret, vector<vector<int>>& map, int row, int num)
//    {
//        if (num == n)
//        {
//            ret.push_back(cur);
//            return;
//        }
//        if (row == n)
//            return;
//        for (int i = 0; i < n; ++i)
//        {
//            if (map[row][i] == 1)
//                continue;
//            cur[row][i] = 'Q';
//            vector<vector<int>> pre_map = map;
//            set_map(row, i, map);
//            ++num;
//            Func(n, cur, ret, map, row + 1, num);
//            cur[row][i] = '.';
//            map = pre_map;
//            --num;
//        }
//    }
//    void set_map(int row, int col, vector<vector<int>>& map)
//    {
//        int n = map.size();
//        for (int i = 0; i < n; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (i == row)
//                    map[i][j] = 1;
//                if (j == col)
//                    map[i][j] = 1;
//                int t = 0;
//                while (t < n)
//                {
//                    if ((i + t == row && j + t == col) || (i - t == row && j - t == col)
//                        || (i + t == row && j - t == col) || (i - t == row && j + t == col))
//                    {
//                        map[i][j] = 1;
//                        break;
//                    }
//                    ++t;
//                }
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    auto ret = s.solveNQueens(4);
//    int a = 0;
//    return 0;
//}



//36.有效的数独
//class Solution {
//public:
//    bool isValidSudoku(vector<vector<char>>& board) {
//        vector<vector<int>> row_map(9, vector<int>(9 + 5, 0));
//        vector<vector<int>> col_map(9, vector<int>(9 + 5, 0));
//        return Func1(board, row_map, col_map, 0, 9, 0, 9) && Func2(board, 0, 3, 0, 3);
//    }
//
//    bool Func1(vector<vector<char>>& board, vector<vector<int>>& row_map, vector<vector<int>>& col_map, int row_begin, int row_end, int col_begin, int col_end)
//    {
//
//        for (int i = row_begin; i < row_end; ++i)
//        {
//            for (int j = col_begin; j < col_end; ++j)
//            {
//                if (board[i][j] != '.')
//                {
//                    if (++row_map[i][board[i][j] - 48] > 1)
//                        return false;
//                    if (++col_map[j][board[i][j] - 48] > 1)
//                        return false;
//                }
//            }
//        }
//        return true;
//    }
//
//    bool Func2(vector<vector<char>>& board, int row_begin, int row_end, int col_begin, int col_end)
//    {
//        if (row_end > 9 || col_end > 9)
//            return true;
//        int arr[10 + 5] = { 0 };
//        if (row_end > 9 || col_end > 9)
//            return true;
//        for (int i = row_begin; i < row_end; ++i)
//        {
//            for (int j = col_begin; j < col_end; ++j)
//            {
//                if (board[i][j] != '.')
//                {
//                    if (++arr[board[i][j] - 48] > 1)
//                        return false;
//                }
//            }
//        }
//        return Func2(board, row_begin + 3, row_end + 3, col_begin, col_end)
//            && Func2(board, row_begin, row_end, col_begin + 3, col_end + 3);
//    }
//};

//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 0;
//	while(cin >> i)
//	{
//		int row = i >= 6 ? 6 : i < 3 ? 0 : 3;
//		cout << row << endl;
//	}
//	return 0;
//}


//37.解数独
//#include<vector>
//#include<string>
//using namespace std;
//class Solution {
//public:
//    void solveSudoku(vector<vector<char>>& board) {
//        vector<vector<int>> row_map(9, vector<int>(10, 0));
//        vector<vector<int>> col_map(9, vector<int>(10, 0));
//        int num = 0;
//        for (int i = 0; i < 9; ++i)
//        {
//            for (int j = 0; j < 9; ++j)
//            {
//                if (board[i][j] != '.')
//                {
//                    row_map[i][board[i][j] - 48] = 1;
//                    col_map[j][board[i][j] - 48] = 1;
//                    ++num;
//                }
//            }
//        }
//        int flag = 0;
//        Func1(board, row_map, col_map, 0, 0, num, flag);
//    }
//
//    void Func1(vector<vector<char>>& board, vector<vector<int>>& row_map, vector<vector<int>>& col_map, int i, int j, int num, int& flag)
//    {
//        if (num == 81)
//        {
//            flag = 1;
//            return;
//        }
//        while (i < 9 && j < 9 && board[i][j] != '.')
//        {
//            if (j == 8)
//            {
//                i = i + 1;
//                j = 0;
//            }
//            else
//            {
//                i = i;
//                j = j + 1;
//            }
//        }
//
//        if (i < 9 && j < 9 && board[i][j] == '.')
//        {
//            for (int n = 1; n <= 9; ++n)//n为要填的数字
//            {
//                if (row_map[i][n] == 0
//                    && col_map[j][n] == 0)
//                {
//                    board[i][j] = n + 48;
//                    row_map[i][n] = 1;
//                    col_map[j][n] = 1;
//                    ++num;
//                    int row = i >= 6 ? 6 : i < 3 ? 0 : 3;
//                    int col = j >= 6 ? 6 : i < 3 ? 0 : 3;
//                    if (Func2(board, row, row + 3, col, col + 3))//判断九宫格是否合法
//                    {
//                        int next_i, next_j;
//                        if (j == 8)
//                        {
//                            next_i = i + 1;
//                            next_j = 0;
//                        }
//                        else
//                        {
//                            next_i = i;
//                            next_j = j + 1;
//                        }
//                        Func1(board, row_map, col_map, next_i, next_j, num, flag);
//                        if (flag)    return;
//                        board[i][j] = '.';
//                        row_map[i][n] = 0;
//                        col_map[j][n] = 0;
//                        --num;
//                    }
//                    else {
//                        board[i][j] = '.';
//                        row_map[i][n] = 0;
//                        col_map[j][n] = 0;
//                        --num;
//                    }
//                }
//            }
//        }
//
//
//    }
//    bool Func2(vector<vector<char>>& board, int row_begin, int row_end, int col_begin, int col_end)
//    {
//        int arr[10 + 5] = { 0 };
//        for (int i = row_begin; i < row_end; ++i)
//        {
//            for (int j = col_begin; j < col_end; ++j)
//            {
//                if (board[i][j] != '.')
//                {
//                    if (++arr[board[i][j] - 48] > 1)
//                        return false;
//                }
//            }
//        }
//        return true;
//    }
//};
//
//int main()
//{
//    vector<vector<char>> board(9);
//    board[0] = vector<char>({'5', '3', '.', '.', '7', '.', '.', '.', '.'});
//    board[1] = vector<char>({ '6', '.', '.', '1', '9', '5', '.', '.', '.' });
//    board[2] = vector<char>({ '.', '9', '8', '.', '.', '.', '.', '6', '.' });
//    board[3] = vector<char>({ '8', '.', '.', '.', '6', '.', '.', '.', '3' });
//    board[4] = vector<char>({ '4', '.', '.', '8', '.', '3', '.', '.', '1' });
//    board[5] = vector<char>({ '7', '.', '.', '.', '2', '.', '.', '.', '6' });
//    board[6] = vector<char>({ '.', '6', '.', '.', '.', '.', '2', '8', '.' });
//    board[7] = vector<char>({ '.', '.', '.', '4', '1', '9', '.', '.', '5' });
//    board[8] = vector<char>({ '.', '.', '.', '.', '8', '.', '.', '7', '9' });
//    Solution s;
//    s.solveSudoku(board); 
//    int a = 0;
//    return 0;
//}

//[['5', '3', '.', '.', '7', '.', '.', '.', '.'], 
//['6', '.', '.', '1', '9', '5', '.', '.', '.'], 
//['.', '9', '8', '.', '.', '.', '.', '6', '.'], 
//['8', '.', '.', '.', '6', '.', '.', '.', '3'], 
//['4', '.', '.', '8', '.', '3', '.', '.', '1'], 
//['7', '.', '.', '.', '2', '.', '.', '.', '6'], 
//['.', '6', '.', '.', '.', '.', '2', '8', '.'], 
//['.', '.', '.', '4', '1', '9', '.', '.', '5'], 
//['.', '.', '.', '.', '8', '.', '.', '7', '9']]






//79.单词搜索
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    bool exist(vector<vector<char>>& board, string word) {
//        vector<vector<int>> map(board.size(), vector<int>(board[0].size(), 0));
//        int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//        for (int i = 0; i < board.size(); ++i)
//        {
//            for (int j = 0; j < board[0].size(); ++j)
//            {
//                if (board[i][j] == word[0])
//                {
//                    if(dfs(board, word, 0, map, i, j, dir))
//                        return true;
//                }
//            }
//        }
//        return false;
//    }
//private:
//    bool dfs(vector<vector<char>>& board, string& word, int pos, vector<vector<int>>& map, int i, int j, int(&dir)[4][2])
//    {
//        if (pos == word.size())
//        {
//            return true;
//        }
//        if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size())
//            return false;
//        if (board[i][j] == word[pos] && map[i][j] == 0)
//        {
//            map[i][j] = 1;
//            for (int k = 0; k < 4; ++k)
//            {
//                int x = i + dir[k][0];
//                int y = j + dir[k][1];
//                if (dfs(board, word, pos + 1, map, x, y, dir))
//                    return true;
//            }
//            map[i][j] = 0;
//        }
//        return false;
//    }
//};
////["A", "B", "C", "E"], 
////["S", "F", "C", "S"],
////["A", "D", "E", "E"]
//int main()
//{
//    vector<vector<char>> board(3);
//    board[0] = { 'A', 'B', 'C', 'E' };
//    board[1] = { 'S', 'F', 'C', 'S' };
//    board[2] = { 'A', 'D', 'E', 'E' };
//    Solution s;
//    if (s.exist(board, "SEE"))
//        cout << "yes" << endl;
//    else cout << "No" << endl;
//    return 0;
//}



//1219.黄金矿工
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int getMaximumGold(vector<vector<int>>& grid) {
//        int ret = 0;
//        int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//        vector<vector<int>> map(grid);
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[0].size(); ++j)
//            {
//                if (grid[i][j] == 0) continue;
//                dfs(grid, map, dir, i, j, 0, ret);
//            }
//        }
//        return ret;
//    }
//
//    int dfs(vector<vector<int>>& grid, vector<vector<int>>& map, int(&dir)[4][2], int x, int y, int cur, int& ret)
//    {
//        if (x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size()
//            || map[x][y] == 0)
//        {
//            ret = cur > ret ? cur : ret;
//            return ret;
//        }
//        cur += grid[x][y];
//        map[x][y] = 0;
//        for (int k = 0; k < 4; ++k)
//        {
//            int nx = x + dir[k][0];
//            int ny = y + dir[k][1];
//            dfs(grid, map, dir, nx, ny, cur, ret);
//        }
//        cur -= grid[x][y];
//        map[x][y] = 1;
//
//        return ret;
//    }
//};
//
//int main()
//{
//
//    return 0;
//}



//980.不同路径Ⅲ
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int uniquePathsIII(vector<vector<int>>& grid) {
//        int x = 0, y = 0;
//        int ret = 0;
//        int need = grid.size() * grid[0].size();
//        int dir[4][2] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[0].size(); ++j)
//            {
//                if (grid[i][j] == 0) continue;
//                else if (grid[i][j] == 1)
//                {
//                    x = i;
//                    y = j;
//                    grid[i][j] = 0;
//                }
//                else if (grid[i][j] == -1)
//                    --need;
//            }
//        }
//        dfs(grid, x, y, dir, need, ret);
//        return ret;
//    }
//
//    void dfs(vector<vector<int>>& map, int x, int y, int(&dir)[4][2], int need, int& ret)
//    {
//        if (x < 0 || y < 0 || x >= map.size() || y >= map[0].size())
//            return;
//        if (map[x][y] == -1)
//            return;
//        if (map[x][y] == 2)
//        {
//            if (need == 1)
//                ++ret;
//            return;
//        }
//        map[x][y] = -1;
//        for (int k = 0; k < 4; ++k)
//        {
//            int nx = x + dir[k][0];
//            int ny = y + dir[k][1];
//            dfs(map, nx, ny, dir, need - 1, ret);
//        }
//        map[x][y] = 0;
//    }
//};
////[[1, 0, 0, 0], 
////[0, 0, 0, 0], 
////[0, 0, 2, -1]]
//int main()
//{
//    vector<vector<int>> grid(3);
//    grid[0] = { 1, 0, 0, 0 };
//    grid[1] = { 0, 0, 0, 0 };
//    grid[2] = { 0, 0, 2, -1 };
//    Solution s;
//    cout << s.uniquePathsIII(grid) << endl;
//    return 0;
//}





//动态规划

//1137.第N个泰波那契数
//class Solution {
//public:
//    int tribonacci(int n) {
//        vector<int> dp(n + 5);
//        dp[0] = 0;
//        dp[1] = dp[2] = 1;
//        for (int i = 3; i <= n; ++i)
//        {
//            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
//        }
//        return dp[n];
//    }
//};


//08.01.三步问题
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int waysToStep(int n) {
//        long long dp[n + 5];//上第i个台阶的方法
//        dp[0] = 1;
//        dp[1] = 1;
//        dp[2] = 2;
//        dp[3] = 4;
//        for (int i = 4; i <= n; ++i)
//        {
//            dp[i] = (dp[i - 1] % 1000000007 + dp[i - 2] % 1000000007 + dp[i - 3] % 1000000007) % 1000000007;
//        }
//        return dp[n];
//    }
//};


//746.使用最小花费爬楼梯
//class Solution {
//public:
//    int minCostClimbingStairs(vector<int>& cost) {
//        cost.push_back(0);
//        int dp[cost.size() + 5];//到第i层的最小费用
//        dp[0] = cost[0];
//        dp[1] = cost[1];
//        for (int i = 2; i < cost.size(); ++i)
//        {
//            dp[i] = dp[i - 1] < dp[i - 2] ? dp[i - 1] + cost[i] : dp[i - 2] + cost[i];
//        }
//        return dp[cost.size() - 1];
//    }
//};



//91.解码方法
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int numDecodings(string s) {
//        vector<int> dp(s.size() + 5);
//        if (s[0] - 48 == 0)   return 0;
//        dp[0] = 1;
//        bool _s = solo(s, 1);
//        bool _d = dble(s, 1);
//        if (_s == false && _d == false) return 0;
//        if (_s && _d) dp[1] = 2;
//        else if (_s) dp[1] = 1;
//        else dp[1] = 1;
//        for (int i = 2; i < s.size(); ++i)
//        {
//            _s = solo(s, i);
//            _d = dble(s, i);
//            if (_s == false && _d == false) return 0;
//            if (_s && _d) dp[i] = dp[i - 1] + 1;
//            else if (_s) dp[i] = dp[i - 1];
//            else dp[i] = dp[i - 2];
//        }
//        return dp[s.size() - 1];
//    }
//
//    bool solo(string& s, int i)
//    {
//        if (s[i] - 48 == 0) return false;
//        return true;
//    }
//
//    bool dble(string& s, int i)
//    {
//        if (10 <= (s[i - 1] - 48) * 10 + s[i] - 48 && (s[i - 1] - 48) * 10 + s[i] - 48 <= 26)
//            return true;
//        return false;
//    }
//};
//
//int main()
//{
//    Solution s;
//    string str("2101");
//    s.numDecodings(str);
//    return 0;
//}


//62.不同路径
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        int dp[m + 5][n + 5];
//        for (int i = 0; i < n; ++i)
//            dp[0][i] = 1;
//        for (int i = 0; i < m; ++i)
//            dp[i][0] = 1;
//        for (int i = 1; i < m; ++i)
//        {
//            for (int j = 1; j < n; ++j)
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//        return dp[m - 1][n - 1];
//    }
//};



//63.不同路径Ⅱ
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        vector<vector<int>>& map = obstacleGrid;
//        int m = obstacleGrid.size();
//        int n = obstacleGrid[0].size();
//        if (map[m - 1][n - 1])
//            return 0;
//        vector<vector<int>> dp(m + 5, vector<int>(n + 5, 0));
//        for (int i = 0; i < n; ++i)
//        {
//            if (map[0][i] == 1)
//            {
//                for (i + 1; i < n; ++i)
//                {
//                    map[0][i] = 1;
//                }
//            }
//            else
//                dp[0][i] = 1;
//        }
//        for (int i = 0; i < m; ++i)
//        {
//            if (map[i][0] == 1)
//            {
//                for (i + 1; i < m; ++i)
//                {
//                    map[i][0] = 1;
//                }
//            }
//            else
//                dp[i][0] = 1;
//        }
//
//        for (int i = 1; i < m; ++i)
//        {
//            for (int j = 1; j < n; ++j)
//            {
//                dp[i][j] += map[i - 1][j] ? 0 : dp[i - 1][j];
//                dp[i][j] += map[i][j - 1] ? 0 : dp[i][j - 1];
//            }
//        }
//        return dp[m - 1][n - 1];
//
//    }
//};




//LCR 166.珠宝的最高价值
//class Solution {
//public:
//    int jewelleryValue(vector<vector<int>>& frame) {
//        vector<vector<int>> dp(frame.size(), vector<int>(frame[0].size(), 0));
//        dp[0][0] = frame[0][0];
//        for (int i = 0; i < frame.size(); ++i)
//        {
//            for (int j = 0; j < frame[0].size(); ++j)
//            {
//                if (i == 0 && j == 0) continue;
//                else if (i == 0) dp[i][j] = frame[i][j] + dp[i][j - 1];
//                else if (j == 0) dp[i][j] = frame[i][j] + dp[i - 1][j];
//                else dp[i][j] = frame[i][j] + (dp[i][j - 1] > dp[i - 1][j] ? dp[i][j - 1] : dp[i - 1][j]);
//            }
//        }
//        return dp[frame.size() - 1][frame[0].size() - 1];
//    }
//};


//931.下降路径最小和
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int minFallingPathSum(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        vector<vector<int>> dp(n, vector<int>(n, 0));
//        for (int i = 0; i < n; ++i)
//            dp[0][i] = matrix[0][i];
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                int _min = INT_MAX;
//                if (j == 0)
//                    _min = min(dp[i - 1][j], dp[i - 1][j + 1]);
//                else if (j == n - 1)
//                    _min = min(dp[i - 1][j], dp[i - 1][j - 1]);
//                else
//                    _min = min(min(dp[i - 1][j], dp[i - 1][j + 1]), dp[i - 1][j - 1]);
//                dp[i][j] = matrix[i][j] + _min;
//            }
//        }
//        int ret = INT_MAX;
//        for (int e : dp[n - 1])
//        {
//            ret = e < ret ? e : ret;
//        }
//        return ret;
//    }
//};
//
//int main()
//{ 
//    vector<vector<int>> v({ { 2, 1, 3 }, { 6, 5, 4 }, { 7, 8, 9 } });
//    Solution s;
//    cout << s.minFallingPathSum(v) << endl;
//
//    return 0;
//}


//64.最小路径和
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        vector<vector<int>> dp(m, vector<int>(n, 0));
//        dp[0][0] = grid[0][0];
//        for (int i = 1; i < n; ++i)
//            dp[0][i] = grid[0][i] + dp[0][i - 1];
//        for (int i = 1; i < m; ++i)
//            dp[i][0] = grid[i][0] + dp[i - 1][0];
//        for (int i = 1; i < m; ++i)
//        {
//            for (int j = 1; j < n; ++j)
//            {
//                dp[i][j] = grid[i][j] + (dp[i - 1][j] < dp[i][j - 1] ? dp[i - 1][j] : dp[i][j - 1]);
//            }
//        }
//        return dp[m - 1][n - 1];
//    }
//};



//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int calculateMinimumHP(vector<vector<int>>& dungeon) {
//        int m = dungeon.size();
//        int n = dungeon[0].size();
//        vector<vector<int>> dp(m, vector<int>(n, 0));
//        dp[0][0] = dungeon[0][0];
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (i == 0 && j == 0) continue;
//                else if (i == 0)
//                    dp[i][j] = dungeon[i][j] + dp[i][j - 1];
//                else if (j == 0)
//                    dp[i][j] = dungeon[i][j] + dp[i - 1][j];
//                else
//                    dp[i][j] = dungeon[i][j] + (dp[i][j - 1] > dp[i - 1][j] ? dp[i][j - 1] : dp[i - 1][j]);
//            }
//        }
//        if (dp[m - 1][n - 1] > 0)
//            return 1;
//        else
//            return -1 * dp[m - 1][n - 1] + 1;
//    }
//};
//
//int main()
//{
//    vector<vector<int>> v({ {-2, -3, 3}, {-5, -10, 1}, {10, 30, -5} });
//    Solution s;
//    printf("%d", s.calculateMinimumHP(v));
//    return 0;
//}



//174.地下城游戏（思路错误，该从后面往起点走，这样才不会被后面影响）
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int calculateMinimumHP(vector<vector<int>>& dungeon) {
//        int m = dungeon.size();
//        int n = dungeon[0].size();
//        vector<vector<int>> dp(m, vector<int>(n, 0));//状态表示为到 i j所要的最低健康值
//        vector<vector<int>> hp(m, vector<int>(n, 0));//到i j加上初始值所剩的最多健康值
//        if (dungeon[0][0] <= 0)
//            dp[0][0] = abs(dungeon[0][0]) + 1;
//        else
//            dp[0][0] = 1;
//        hp[0][0] = 1;
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (i == 0 && j == 0) continue;
//                else if (i == 0)
//                {
//                    if (hp[i][j - 1] + dungeon[i][j] <= 0)
//                    {
//                        dp[i][j] = dp[i][j - 1] + abs(dungeon[i][j]);
//                        hp[i][j] = 1;
//                    }
//                    else
//                    {
//                        dp[i][j] = dp[i][j - 1];
//                        hp[i][j] = hp[i][j - 1] + dungeon[i][j];
//                    }
//
//                }
//                else if (j == 0)
//                {
//                    if (hp[i - 1][j] + dungeon[i][j] <= 0)
//                    {
//                        dp[i][j] = dp[i - 1][j] + abs(dungeon[i][j]);
//                        hp[i][j] = 1;
//                    }
//                    else
//                    {
//                        dp[i][j] = dp[i - 1][j];
//                        hp[i][j] = hp[i - 1][j] + dungeon[i][j];
//                    }
//                }
//                else
//                {
//                    if (dp[i][j - 1] < dp[i - 1][j])
//                    {
//                        if (hp[i][j] = dungeon[i][j] + hp[i][j - 1] <= 0)
//                        {
//                            dp[i][j] = dp[i][j - 1] + abs(dungeon[i][j]);
//                            hp[i][j] = 1;
//                        }
//                        else
//                            dp[i][j] = dp[i][j - 1];
//                    }
//                    else
//                    {
//                        if (hp[i][j] = dungeon[i][j] + hp[i - 1][j] <= 0)
//                        {
//                            dp[i][j] = dp[i - 1][j] + abs(dungeon[i][j]);
//                            hp[i][j] = 1;
//                        }
//                        else
//                            dp[i][j] = dp[i - 1][j];
//                    }
//                }
//            }
//        }
//        return dp[m - 1][n - 1];
//    }
//};
////174.地下城游戏（√）
//class Solution {
//public:
//    int calculateMinimumHP(vector<vector<int>>& dungeon) {
//        int m = dungeon.size();
//        int n = dungeon[0].size();
//        vector<vector<int>> dp(m, vector<int>(n, 0));//状态表示为 i j 到终点所要的最低健康值
//        dp[m - 1][n - 1] = dungeon[m - 1][n - 1] > 0 ? 1 : abs(dungeon[m - 1][n - 1]) + 1;
//        for (int i = m - 1; i >= 0; --i)
//        {
//            for (int j = n - 1; j >= 0; --j)
//            {
//                if (i == m - 1 && j == n - 1) continue;
//                if (i == m - 1)
//                    dp[i][j] = dp[i][j + 1] - dungeon[i][j] <= 0 ? 1 : dp[i][j + 1] - dungeon[i][j];
//                else if (j == n - 1)
//                    dp[i][j] = dp[i + 1][j] - dungeon[i][j] <= 0 ? 1 : dp[i + 1][j] - dungeon[i][j];
//                else
//                {
//                    if (dp[i][j + 1] < dp[i + 1][j])
//                        dp[i][j] = dp[i][j + 1] - dungeon[i][j] <= 0 ? 1 : dp[i][j + 1] - dungeon[i][j];
//                    else
//                        dp[i][j] = dp[i + 1][j] - dungeon[i][j] <= 0 ? 1 : dp[i + 1][j] - dungeon[i][j];
//                }
//            }
//        }
//
//        return dp[0][0];
//    }
//};


//面试题 17.16.按摩师
//class Solution {
//public:
//    int massage(vector<int>& nums) {
//        if (nums.size() == 0) return 0;
//        if (nums.size() == 1) return nums[0];
//        if (nums.size() == 2) return max(nums[0], nums[1]);
//        int dp[nums.size() + 5];//到 i(0) + 1 号及之前的最长时间
//        dp[0] = nums[0];
//        dp[1] = max(nums[0], nums[1]);
//        dp[2] = dp[0] + nums[2] > dp[1] ? dp[0] + nums[2] : dp[1];
//        for (int i = 3; i < nums.size(); ++i)
//        {
//            dp[i] = dp[i - 2] + nums[i] > dp[i - 1] ? dp[i - 2] + nums[i] : dp[i - 1];
//        }
//        return dp[nums.size() - 1];
//    }
//};





//213.打家劫舍Ⅱ
//当前重点关注思想，不要像这道题，明明早就想到正确做法，却因为感觉要计算两次（偷不偷一号），
// 想写出一个只需循环一次的代码，搞半天没搞好，最后又回到计算两次
//class Solution {
//public:
//    int rob(vector<int>& nums) {
//        if (nums.size() == 0) return 0;
//        if (nums.size() == 1) return nums[0];
//        if (nums.size() == 2) return max(nums[0], nums[1]);
//        if (nums.size() == 3) return max(max(nums[0], nums[1]), nums[2]);
//        vector<int> dp1(3);//到 i(0) + 1 号及之前的最长时间,偷一号
//        vector<int> dp2(4);//不偷一号
//        dp1[0] = nums[0];
//        dp1[1] = max(nums[0], nums[1]);
//        dp1[2] = dp1[0] + nums[2] > dp1[1] ? dp1[0] + nums[2] : dp1[1];
//        for (int i = 3; i < nums.size() - 1; ++i)
//        {
//            dp1.push_back(dp1[i - 2] + nums[i] > dp1[i - 1] ? dp1[i - 2] + nums[i] : dp1[i - 1]);
//        }
//        dp2[1] = nums[1];
//        dp2[2] = max(nums[1], nums[2]);
//        dp2[3] = dp2[1] + nums[3] > dp2[2] ? dp2[1] + nums[3] : dp2[2];
//        for (int i = 4; i < nums.size(); ++i)
//        {
//            dp2.push_back(dp2[i - 2] + nums[i] > dp2[i - 1] ? dp2[i - 2] + nums[i] : dp2[i - 1]);
//        }
//        return max(dp1.back(), dp2.back());
//    }
//};



//LCR 091. 粉刷房子(失败)
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        if (costs.size() == 1)
//            return min(min(costs[0][0], costs[0][1]), costs[0][2]);
//        vector<int> dp(costs.size());//到第i号房子所花最低成本
//        vector<int> map(costs.size());//i号房涂的颜色，0红1蓝2绿
//        int arr[6];//红-》蓝绿，蓝-》红绿，绿-》红蓝，计算前两个房子的最低费用
//        arr[0] = costs[0][0] + costs[1][1];
//        arr[1] = costs[0][0] + costs[1][2];
//        arr[2] = costs[0][1] + costs[1][0];
//        arr[3] = costs[0][1] + costs[1][2];
//        arr[4] = costs[0][2] + costs[1][0];
//        arr[5] = costs[0][2] + costs[1][1];
//        int cur = 0;
//        for (int i = 1; i < 6; ++i)
//        {
//            if (arr[i] < arr[cur])
//                cur = i;
//        }
//        map[0] = cur / 2;
//        if (map[0] == 0) map[1] = costs[1][1] < costs[1][2] ? 1 : 2;
//        else if (map[0] == 1) map[1] = costs[1][0] < costs[1][2] ? 0 : 2;
//        else map[1] = costs[1][0] < costs[1][1] ? 0 : 1;
//        //前面0号房子的颜色和费用都是为了保证到1号房子费用最少，但并不是说之前的0号房单独费用最少
//        map[0] = (costs[0][0] < costs[0][1] && costs[0][0] < costs[0][2]) ? (0) : (costs[0][1] < costs[0][2]) ? 1 : 2;
//        dp[0] = costs[0][map[0]];
//        dp[1] = arr[cur];
//        //[13, 8, 17], 
//        // [6, 8, 19], 
//        // [5, 1, 7], 
//        // [5, 18, 2], 
//        // [12, 3, 4], 
//        // [12, 7, 10], 
//        // [14, 16, 7], 
//        // [19, 17, 19]]
//        for (int i = 2; i < costs.size(); ++i)
//        {
//            if (map[i - 1] == 0)
//            {
//                if (costs[i][1] < costs[i][2])
//                {
//                    dp[i] = dp[i - 1] + costs[i][1];
//                    map[i] = 1;
//                }
//                else
//                {
//                    dp[i] = dp[i - 1] + costs[i][2];
//                    map[i] = 2;
//                }
//                //考虑这里涂与上个房子相同颜色的情况
//                int pre_change_map = map[i - 2] == 1 ? 2 : 1;
//                int pre_change_cost = costs[i - 1][pre_change_map];
//                if (dp[i - 2] + pre_change_cost + costs[i][0] < dp[i])
//                {
//                    dp[i] = dp[i - 2] + pre_change_cost + costs[i][0];
//                    map[i] = 0;
//                }
//            }
//            else if (map[i - 1] == 1)
//            {
//                if (costs[i][0] < costs[i][2])
//                {
//                    dp[i] = dp[i - 1] + costs[i][0];
//                    map[i] = 0;
//                }
//                else
//                {
//                    dp[i] = dp[i - 1] + costs[i][2];
//                    map[i] = 2;
//                }
//
//                int pre_change_map = map[i - 2] == 0 ? 2 : 0;
//                int pre_change_cost = costs[i - 1][pre_change_map];
//                if (dp[i - 2] + pre_change_cost + costs[i][1] < dp[i])
//                {
//                    dp[i] = dp[i - 2] + pre_change_cost + costs[i][1];
//                    map[i] = 1;
//                }
//            }
//            else
//            {
//                if (costs[i][0] < costs[i][1])
//                {
//                    dp[i] = dp[i - 1] + costs[i][0];
//                    map[i] = 0;
//                }
//                else
//                {
//                    dp[i] = dp[i - 1] + costs[i][1];
//                    map[i] = 1;
//                }
//
//                int pre_change_map = map[i - 2] == 0 ? 1 : 0;
//                int pre_change_cost = costs[i - 1][pre_change_map];
//                if (dp[i - 2] + pre_change_cost + costs[i][2] < dp[i])
//                {
//                    dp[i] = dp[i - 2] + pre_change_cost + costs[i][2];
//                    map[i] = 2;
//                }
//            }
//        }
//
//        return dp[costs.size() - 1];
//    }
//};
////[13, 8, 17], 
//// [6, 8, 19], 
//// [5, 1, 7], 
//// [5, 18, 2], 
//// [12, 3, 4], 
//// [12, 7, 10], 
//// [14, 16, 7], 
//// [19, 17, 19]]
//int main()
//{
//    vector<vector<int>> v(8);
//    v[0] = { 13, 8, 17 };
//    v[1] = { 6, 8, 19 };
//    v[2] = { 5, 1, 7 };
//    v[3] = { 5, 18, 2 };
//    v[4] = { 12, 3, 4 };
//    v[5] = { 12, 7, 10 };
//    v[6] = { 14, 16, 7 };
//    v[7] = { 19, 17, 19 };
//
//    Solution s;
//    cout << s.minCost(v);
//    int a = 0;
//    return 0;
//}

//LCR 091. 粉刷房子(√)
// 正着不行反着来，合着不行分开来
//class Solution {
//public:
//    int minCost(vector<vector<int>>& costs) {
//        //三个dp分别为到i位置且最后涂红/蓝/绿的最小费用，dp[i]等于对应颜色加上上一个其他颜色的最小
//        int dp0[costs.size()];
//        int dp1[costs.size()];
//        int dp2[costs.size()];
//        dp0[0] = costs[0][0];
//        dp1[0] = costs[0][1];
//        dp2[0] = costs[0][2];
//        for (int i = 1; i < costs.size(); ++i)
//        {
//            dp0[i] = costs[i][0] + min(dp1[i - 1], dp2[i - 1]);
//            dp1[i] = costs[i][1] + min(dp0[i - 1], dp2[i - 1]);
//            dp2[i] = costs[i][2] + min(dp1[i - 1], dp0[i - 1]);
//        }
//        return min(min(dp0[costs.size() - 1], dp1[costs.size() - 1]), dp2[costs.size() - 1]);
//    }
//};



//309. 买卖股票的最佳时机含冷冻期
// 搞了很久，感觉还是没理解透
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        if (n == 1)   return 0;
//        vector<vector<int>> dp(n, vector<int>(3));
//        dp[0][0] = -prices[0];//持有股票
//        dp[0][1] = 0;//未持有股票,且不为冷冻
//        dp[0][2] = 0;//冷冻期
//        for (int i = 1; i < n; ++i)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][2]);
//            dp[i][2] = dp[i - 1][0] + prices[i];
//        }
//        return max(max(dp[n - 1][0], dp[n - 1][1]), dp[n - 1][2]);
//    }
//};
//
//int main()
//{
//    vector<int> v({ 1,2,4 });
//    Solution s;
//    s.maxProfit(v);
//    return 0;
//}


//714.买卖股票的最佳时机包含手续费
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int maxProfit(vector<int>& prices, int fee) {
//        int n = prices.size();
//        vector<vector<int>> dp(n, vector<int>(2));
//        dp[0][0] = 0 - prices[0];//持有的最大利润
//        dp[0][1] = 0;//第i天后是售出状态(未持有)的最大利润
//        for (int i = 1; i < n; ++i)
//        {
//            dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] - prices[i]);
//            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + prices[i] - fee);
//        }
//        return max(dp[n - 1][0], dp[n - 1][1]);
//    }
//};
//int main()
//{
//    vector<int> v({ 1,3,2,8,4,9 });
//    Solution s;
//    cout << s.maxProfit(v, 2);
//    return 0;
//}


//123.买卖股票的最佳时机Ⅲ（未掌握透彻）
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> g(n, vector<int>(3, -9999));//第i天后为购入,012,分别为完成了几次交易(卖出), 的最大利润
//        vector<vector<int>> m(n, vector<int>(3, -9999));//第i天后为未持有
//        g[0][0] = 0 - prices[0];
//        m[0][0] = 0;
//        //3,3,5,0,0,3,1,4 
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j = 0; j <= 2; ++j)
//            {
//                g[i][j] = max(g[i - 1][j], m[i - 1][j] - prices[i]);
//                m[i][j] = m[i - 1][j];
//                if (j >= 1)
//                    m[i][j] = max(m[i - 1][j], g[i - 1][j - 1] + prices[i]);
//            }
//        }
//        int a = 1;
//        return max(m[n - 1][2], max(m[n - 1][0], m[n - 1][1]));
//    }
//};
//int main()
//{
//    vector<int> v({ 3,3,5,0,0,3,1,4 });
//    Solution s;
//    cout << s.maxProfit(v);
//    return 0;
//}


//123.买卖股票的最佳时机Ⅳ
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        int n = prices.size();
//        k = min(k, n / 2);
//        vector<vector<int>> g(n, vector<int>(k + 1, -99999));//第i天第几次交易(未卖出)的最大利润
//        vector<vector<int>> m(n, vector<int>(k + 1, -99999));//第i天第几次交易(未持有、已卖出)的最大利润
//        g[0][0] = 0 - prices[0];
//        m[0][0] = 0;
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j = 0; j <= k; ++j)
//            {
//                g[i][j] = max(g[i - 1][j], m[i - 1][j] - prices[i]);
//                m[i][j] = m[i - 1][j];
//                if (j >= 1)
//                {
//                    m[i][j] = max(m[i - 1][j], g[i - 1][j - 1] + prices[i]);
//                }
//            }
//        }
//
//        int ret = INT_MIN;
//        for (int i = 0; i <= k; ++i)
//            ret = max(ret, m[n - 1][i]);
//        return ret;
//    }
//};
//int main()
//{
//    vector<int> v({ 2,4,1 });
//    Solution s;
//    cout << s.maxProfit(2, v);
//    return 0;
//}


//53. 最大子数组和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//
//        int n = nums.size();
//        int dp[n];//以i为结尾的子数组的最大和
//        dp[0] = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < n; ++i)
//        {
//            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
//            ret = max(ret, dp[i]);
//        }
//        return ret;
//    }
//};



//918. 环形子数组的最大和
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//class Solution {
//public:
//    int maxSubarraySumCircular(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1) return nums[0];
//        int dp[n];//以i为结尾的子数组的最大和
//        dp[0] = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < n; ++i)
//        {
//            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
//            ret = max(ret, dp[i]);
//        }
//
//        int left[n];
//        left[0] = nums[0];
//        int left_dp[n];//0到i的最大
//        left_dp[0] = nums[0];
//        for (int i = 1; i < n; ++i)
//        {
//            left[i] = left[i - 1] + nums[i];
//            if (left[i] > left_dp[i - 1])
//                left_dp[i] = left[i];
//            else
//                left_dp[i] = left_dp[i - 1];
//        }
//
//        int right_dp[n];//i到 n - 1 的序列和
//        right_dp[n - 1] = nums[n - 1];
//        int ret2 = right_dp[n - 1] + left_dp[n - 2];
//        for (int i = n - 2; i > 0; --i)
//        {
//            right_dp[i] = right_dp[i + 1] + nums[i];
//            int cur = right_dp[i] + left_dp[i - 1];
//            ret2 = max(cur, ret2);
//        }
//
//        return max(ret, ret2);
//    }
//};
//int main()
//{
//    vector<int> v({ -2,4,-5,4,-5,9,4 });
//    Solution s;
//    cout << s.maxSubarraySumCircular(v);
//    return 0;
//}



//152. 乘积最大子数组（真的感觉好难，自己完全搞不明白状态表示，想用自己的方法，写了很多，但是错的，累）
//#include<vector>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int maxProduct(vector<int>& nums) {
//        int n = nums.size();
//        int dp_max[n];//以i为结尾的子数组的最大
//        int dp_min[n];//以i为结尾的子数组的最小
//        dp_max[0] = dp_min[0] = nums[0];
//        int ret = nums[0];
//        for (int i = 1; i < n; ++i)
//        {
//            dp_max[i] = max(max(dp_max[i - 1] * nums[i], dp_min[i - 1] * nums[i]), nums[i]);
//            dp_min[i] = min(min(dp_max[i - 1] * nums[i], dp_min[i - 1] * nums[i]), nums[i]);
//            ret = max(ret, dp_max[i]);
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    vector<int> v({ -3,0,1,-2 });
//    Solution s;
//    cout << s.maxProduct(v);
//    return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int getMaxLen(vector<int>& nums) {
//        long long n = nums.size();
//        vector<long long> dp(n);
//        dp[0] = nums[0];//当前子数组乘积，碰见0清除
//        long long cur = nums[0] == 0 ? 0 : 1;//当前长度
//        long long ret = 0;//最长正乘积长度
//        if (dp[0] > 0)
//            ret = cur;
//        for (long long i = 0; i < n; ++i)
//        {
//            while (i < n - 1 && dp[i] == 0)
//            {
//                ++i;
//                dp[i] = nums[i];
//                cur = 1;
//                if (dp[i] > 0)
//                    ret = max(ret, cur);
//                if (nums[i] > 0)
//                    ret = max((long long)1, ret);
//                ++i;
//            }
//            if (0 < i && i < n)
//            {
//                dp[i] = dp[i - 1] * nums[i];
//                if (dp[i] != 0)
//                {
//                    ++cur;
//                    if (dp[i] > 0)
//                        ret = max(ret, cur);
//                }
//                if (nums[i] > 0)
//                    ret = max((long long)1, ret);
//            }
//            while (i < n - 1 && dp[i] == 0)
//            {
//                ++i;
//                dp[i] = nums[i];
//                cur = 1;
//                if (dp[i] > 0)
//                    ret = max(ret, cur);
//                if (nums[i] > 0)
//                    ret = max((long long)1, ret);
//            }
//        }
//
//        return ret;
//    }
//};



//1567. 乘积为正数的最长子数组长度
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int getMaxLen(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp1(n);//以i结尾的数组的乘积为正最长子数组长度
//        vector<int> dp2(n);//以i结尾的数组的乘积为负最长子数组长度
//        int ret = 0;
//        int i = 0;
//        while (nums[i] == 0)
//        {
//            ++i;
//        }
//        if (i < n)
//        {
//            dp1[i] = nums[i] > 0 ? 1 : 0;
//            dp2[i] = nums[i] < 0 ? 1 : 0;
//            ret = max(dp1[i], ret);
//        }
//        for (i = i + 1; i < n; ++i)
//        {
//            if (nums[i] == 0)
//            {
//                while (i < n && nums[i] == 0)
//                {
//                    ++i;
//                }
//                if (i < n)
//                {
//                    dp1[i] = nums[i] > 0 ? 1 : 0;
//                    dp2[i] = nums[i] < 0 ? 1 : 0;
//                    ret = max(dp1[i], ret);
//                }
//            }
//            else
//            {
//                if (nums[i] > 0)
//                {
//                    dp1[i] = max(dp1[i - 1] + 1, 1);
//                    dp2[i] = dp2[i - 1] == 0 ? 0 : dp2[i - 1] + 1;
//                    ret = max(ret, dp1[i]);
//                }
//                else
//                {
//                    if (dp2[i - 1] == 0)
//                    {
//                        dp1[i] = 0;
//                        dp2[i] = dp1[i - 1] + 1;
//                    }
//                    else
//                    {
//                        dp1[i] = dp2[i - 1] + 1;
//                        dp2[i] = dp1[i - 1] + 1;
//                    }
//                    ret = max(ret, dp1[i]);
//                }
//            }
//        }
//
//        return ret;
//    }
//};



//413. 等差数列划分
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        int n = nums.size();
//        if (n < 3)   return 0;
//        vector<int> dp(n);//以i为结尾的子序列的等差个数
//        dp[0] = dp[1] = 0;
//        int ret = 0;
//        //初始化第一个等差数列
//        int i = 1;
//        int dif = nums[i] - nums[i - 1];
//        ++i;
//        int num = 2;//当前等差数列长度
//        while (i < n && num < 3)
//        {
//            if (i < n && nums[i] - nums[i - 1] == dif)
//            {
//                ++num;
//                dp[i] = num == 3 ? 1 : 0;
//                ++i;
//            }
//            else if (i < n)
//            {
//                dif = nums[i] - nums[i - 1];
//                num = 2;
//                dp[i] = 0;
//                ++i;
//            }
//        }
//        for (i; i < n; ++i)
//        {
//            if (nums[i] - nums[i - 1] == dif)
//            {
//                ++num;
//                dp[i] = dp[i - 1] + num - 2;
//            }
//            else
//            {
//                dif = nums[i] - nums[i - 1];
//                num = 2;
//                ret += dp[i - 1];
//                dp[i] = 0;
//            }
//        }
//
//        if (nums[n - 1] - nums[n - 2] == dif)
//            ret += dp[n - 1];
//        return ret;
//
//
//    }
//};
//int main()
//{
//    vector<int> v({ 1, 2, 3, 8, 9, 10 });
//    Solution s;
//    cout << s.numberOfArithmeticSlices(v) << endl;
//    return 0;
//}



//978. 最长湍流子数组
//class Solution {
//public:
//    int maxTurbulenceSize(vector<int>& arr) {
//        int n = arr.size();
//        if (n == 1) return 1;
//        vector<int> dp(n);//当前以i结尾的子数组的最长
//        dp[0] = 1;
//        vector<int> map(n);//当前位置与前一个位置的大小关系，-1小于，0等于，1大于
//        if (arr[1] > arr[0])
//            map[1] = 1;
//        else if (arr[1] < arr[0])
//            map[1] = -1;
//        else
//            map[1] = 0;
//        dp[1] = map[1] == 0 ? 1 : 2;
//        int ret = dp[1];
//        for (int i = 2; i < n; ++i)
//        {
//            if (arr[i] == arr[i - 1])
//            {
//                map[i] = 0;
//                dp[i] = 1;
//            }
//            else if (arr[i] > arr[i - 1])
//            {
//                map[i] = 1;
//                if (map[i - 1] == -1)
//                    dp[i] = dp[i - 1] + 1;
//                else
//                    dp[i] = 2;
//                ret = max(dp[i], ret);
//            }
//            else
//            {
//                map[i] = -1;
//                if (map[i - 1] == 1)
//                    dp[i] = dp[i - 1] + 1;
//                else
//                    dp[i] = 2;
//                ret = max(dp[i], ret);
//            }
//        }
//
//        return ret;
//    }
//};

//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;


//int main()
//{
//	int n;
//	cin >> n;
//	cout << pow(3, n) << endl;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	string s1;
//	string s2;
//	//cin >> n >> s1 >> s2;
//	int n1 = 0;
//	//for (int i = s1.size() - 1; i >= 0; --i)
//	//	n1 += (s1[i] - 48) * pow(3, s1.size() - 1 - i);
//	int n2 = 0;
//	//for (int i = s2.size() - 1; i >= 0; --i)
//	//	n2 += (s2[i] - 48) * pow(3, s2.size() - 1 - i);
//	cin >> n >> n1 >> n2;
//	int map[3][3] = { {0,1,0}, {1, 1, 1}, {0, 1, 0} };
//	int ret = 0;
//				double cur_n = n;
//				double cur_i = n1;
//				double cur_j = n2;
//				while (cur_n > 1 &&
//					((pow(3, cur_n - 1) <= cur_i && cur_i < 2 * pow(3, cur_n - 1))
//						|| (pow(3, cur_n - 1) <= cur_j && cur_j < 2 * pow(3, cur_n - 1))))
//				{
//					cur_i %= pow(3, cur_n - 1);
//					cur_j %= pow(3, cur_n - 1);
//					--cur_n;
//				}
//				if (cur_n == 1)
//				{
//					ret = map[cur_i][cur_j];
//				}
//				else
//				{
//					ret = 0;
//				}
//		
//	
//	cout << ret << endl;
//	return 0;
//}

//139. 单词拆分
//#include<string>
//#include<vector>
//#include<unordered_set>
//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        //建个哈希表，查询时更高效
//        unordered_set<string> hash;
//        for (string& e : wordDict)
//        {
//            hash.insert(e);
//        }
//        int n = s.size();
//        s = ' ' + s;//给s前加个空格，所有字符下标加一方便理清思路
//        vector<bool> dp(n + 1, false);
//        dp[0] = true;
//        for (int i = 1; i < n + 1; ++i)//填dp
//        {
//            for (int j = i; j >= 1; --j)
//            {
//                if (dp[j - 1] && hash.count(s.substr(j, i - j + 1)))
//                {
//                    dp[i] = true;
//                    break;
//                }
//            }
//        }
//
//        return dp[n];
//    }
//};
//
//int main()
//{
//
//    string s = "applepenapple";
//    vector<string> v({ "apple","pen" });
//    Solution ret;
//    cout << ret.wordBreak(s, v) << endl;
//    return 0;
//}


//70. 爬楼梯
//class Solution {
//public:
//    int climbStairs(int n) {
//        if (n == 1) return 1;
//        int dp[n + 1];
//        dp[0] = 0;
//        dp[1] = 1;
//        dp[2] = 2;
//        for (int i = 3; i <= n; ++i)
//        {
//            dp[i] = dp[i - 2] + dp[i - 1];
//        }
//        return dp[n];
//    }
//};


//467. 环绕字符串中唯一的子字符串
//class Solution {
//public:
//    int findSubstringInWraproundString(string s) {
//        //以i的位置为结尾，有多少个不同非空字串
////思路：记录每个以某个字母结尾的字串的最长长度，这样相当于用这个字母往前计数字串（不会重复的原因），
////每个都是最长以这个字母为结尾，所以它就是最多以这个字母为结尾的最大字符串，再26个字母的加起来
//        int n = s.size();
//        vector<int> dp(26, 0);
//        dp[s[0] - 97] = 1;
//        int l = 1;//当前字串长度
//        for (int i = 1; i < n; ++i)
//        {
//            if (s[i] - 1 == s[i - 1] || (s[i] == 'a' && s[i - 1] == 'z'))
//            {
//                ++l;
//                dp[s[i] - 97] = max(l, dp[s[i] - 97]);
//            }
//            else
//            {
//                l = 1;
//                dp[s[i] - 97] = max(l, dp[s[i] - 97]);
//            }
//        }
//
//        int ret = 0;
//        for (int i = 0; i < 26; ++i)
//        {
//            ret += dp[i];
//        }
//
//        return ret;
//    }
//};


//300. 最长递增子序列(逻辑与思维还是不够强啊，这道题花了1.5h，得练)
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        //dp[i]是指 以nums[i] 结尾的最长严格递增子序列的末尾的长度
//        //找出前面nums[k]比nums[i]小且dp[k]最大的k
//        //dp[i] = dp[k] + 1;
//        int n = nums.size();
//        vector<int> dp(n);
//        dp[0] = 1;
//        for (int i = 1; i < n; ++i)
//        {
//            int k = -1;
//            int kl = -1;
//            for (int j = i - 1; j >= 0; --j)
//            {
//                if (nums[i] > nums[j] && dp[j] > kl)
//                {
//                    k = j;
//                    kl = dp[j];
//                }
//
//            }
//            if (k == -1)
//                dp[i] = 1;
//            else
//                dp[i] = dp[k] + 1;
//        }
//
//        int ret = INT_MIN;
//        for (int e : dp)
//            ret = e > ret ? e : ret;
//        return ret;
//    }
//
//};
//
//int main()
//{
//    Solution s;
//    vector<int> nums({ 0,1,0,3,2,3 });// 1 2 1
//    cout << s.lengthOfLIS(nums) << endl;
//    return 0;
//}

//376. 摆动序列
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//
//        if (n <= 2)
//        {
//            if (n == 1)
//                return 1;
//            else if (nums[0] == nums[1])
//                return 1;
//            else
//                return n;
//        }
//        //dp[i][j]表示，以i为末尾位置的最长子序列长度，j为0则nums下标j-(j-1)为正，j为1则负
//        //dp[i][0]为dp[i - 1][1]与 计算所有i以前nums[i]大于nums[k]的拼装到后面，的较大值，dp[i][1]同理
//        vector<vector<int>> dp(n, vector<int>(2, 1));
//        dp[0][0] = 1;
//        dp[0][1] = 1;
//        dp[1][0] = nums[1] - nums[0] > 0 ? 2 : 1;
//        dp[1][1] = nums[1] - nums[0] < 0 ? 2 : 1;
//        for (int i = 2; i < n; ++i)
//        {
//            for (int k = i - 1; k >= 0; --k)
//            {
//                if (nums[i] == nums[k])
//                {
//                    dp[i][0] = max(dp[i][0], dp[k][0]);
//                    dp[i][1] = max(dp[i][1], dp[k][1]);
//                }
//                else if (nums[i] > nums[k])
//                {
//                    dp[i][0] = max(dp[i][0], dp[k][1] + 1);
//                    dp[i][1] = max(dp[i][1], dp[k][1]);
//                }
//                else
//                {
//                    dp[i][1] = max(dp[i][1], dp[k][0] + 1);
//                    dp[i][0] = max(dp[i][0], dp[k][0]);
//                }
//            }
//        }
//
//        int ret = 0;
//        for (auto e : dp)
//        {
//            ret = max(ret, max(e[0], e[1]));
//        }
//        return ret;
//    }
//};

//673. 最长递增子序列的个数 
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//    int findNumberOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1) return 1;
//        vector<int> dp(n, 1);//以i为结尾的最长子序列长度
//        vector<int> ret(n, 0);//以i为结尾的最长子序列长度的个数
//        dp[0] = 1;
//        dp[1] = nums[1] > nums[0] ? 2 : 1;
//        for (int i = 2; i < n; ++i)
//        {
//            for (int j = i - 1; j >= 0; --j)
//            {
//                if (nums[i] > nums[j])
//                    dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//        ret[0] = 1;
//        ret[1] = 1;
//        for (int i = 2; i < n; ++i)
//        {
//            if (dp[i] == 1)
//            {
//                ret[i] = 1;
//                continue;
//            }
//            for (int j = i - 1; j >= 0; --j)
//            {
//                if (nums[i] > nums[j] && dp[j] + 1 == dp[i])
//                    ret[i] += ret[j];
//            }
//        }
//
//        int _len = 0, _max = 0;
//        for (int i = 0; i < n; ++i)
//        {
//            if (dp[i] > _len)
//            {
//                _len = dp[i];
//                _max = ret[i];
//            }
//            else if (dp[i] == _len)
//            {
//                _max += ret[i];
//            }
//        }
//        return _max;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> nums = {2,2,2,2,2};
//    cout << s.findNumberOfLIS(nums);
//    return 0;
//}



//646. 最长数对链（dfs超时，但是还是没明白数组长度最多1000，为什么n方会超时）
//class Solution {
//public:
//
//    void dfs(vector<vector<int>>& pairs, vector<bool>& map, int pre, int cur, int& ret)
//    {
//        ret = max(ret, cur);
//        for (int i = 0; i < pairs.size(); ++i)
//        {
//            if (map[i] == false)
//            {
//                if (pre < pairs[i][0])
//                {
//                    map[i] = true;
//                    dfs(pairs, map, pairs[i][1], cur + 1, ret);
//                    map[i] = false;
//                }
//            }
//        }
//    }
//    int findLongestChain(vector<vector<int>>& pairs) {
//        int ret = 0;
//        vector<bool> map(pairs.size(), false);
//        dfs(pairs, map, -1001, 0, ret);
//        return ret;
//    }
//
//};
// 
//646. 最长数对链（dp）
//class Solution {
//public:
//    struct compare
//    {
//        bool operator()(vector<int>& a, vector<int>& b)
//        {
//            return a[0] < b[0];
//        }
//    };
//    int findLongestChain(vector<vector<int>>& pairs) {
//        auto& v = pairs;
//        sort(pairs.begin(), pairs.end(), compare());
//        int n = pairs.size();
//        if (n == 1) return 1;
//        vector<int> dp(n, 1);//以i为结尾的最长
//        dp[0] = 1;
//        dp[1] = v[0][1] < v[1][0] ? 2 : 1;
//        for (int i = 2; i < n; ++i)
//        {
//            for (int j = 0; j <= i - 1; ++j)
//            {
//                if (v[j][1] < v[i][0])
//                    dp[i] = max(dp[i], dp[j] + 1);
//            }
//        }
//        int ret = 0;
//        for (int e : dp)
//            ret = max(ret, e);
//        return ret;
//    }
//
//};


//1218. 最长定差子序列
//class Solution {
//public:
//    int longestSubsequence(vector<int>& arr, int difference) {
//        int& dif = difference;
//        int n = arr.size();
//        if (n == 1) return 1;
//        int ret = 1;
//        unordered_map<int, int> dp;//用哈希表作dp，dp为以i为结尾的最长等差子序列
//        //因为dif确定，所有第i个位置的上个等差数已知，所以将dp放进哈希表，能快速找到目标dp[k]
//        //first为元素，second为长度
//        dp.insert({ arr[0], 1 });
//        for (int i = 1; i < n; ++i)
//        {
//            int temp = arr[i] - dif;
//            if (dp.count(temp))
//            {
//                dp[arr[i]] = max(dp[arr[i]], dp[temp] + 1);
//                ret = max(ret, dp[arr[i]]);
//            }
//            else
//                dp[arr[i]] = 1;
//        }
//
//        return ret;
//    }
//};

//873. 最长的斐波那契子序列的长度
//#include<iostream>
//#include<unordered_map>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int lenLongestFibSubseq(vector<int>& arr) {
//        int n = arr.size();
//        vector<vector<int>> dp(n, vector<int>(n, 2));//dp[i][j]是以i和j为结尾的最长，j < i
//        unordered_map<int, int> map;//first为元素，second为对应下标
//        map[arr[0]] = 0;
//        map[arr[1]] = 1;
//        int ret = 0;
//        //1,2,3,4,5,6,7,8
//        for (int i = 2; i < n; ++i)
//        {
//            map[arr[i]] = i;
//            for (int j = i - 1; j >= 1; --j)
//            {
//                if (arr[j] < arr[i] / 2 + 1) break;
//                int temp1 = arr[i] - arr[j];
//                if (map.count(temp1))
//                {
//                    int temp2 = arr[j] - arr[map[temp1]];
//                    if (map.count(temp2))
//                    {
//                        dp[i][j] = max(dp[i][j], dp[j][map[temp1]] + 1);
//                        ret = max(dp[i][j], ret);
//                    }
//                    else
//                    {
//                        dp[i][j] = max(dp[i][j], 3);
//                        ret = max(dp[i][j], ret);
//                    }
//                }
//            }
//        }
//
//        return ret;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> arr = { 1,2,3,4,5,6,7,8 };
//    cout << s.lenLongestFibSubseq(arr);
//	return 0;
//}


//1027. 最长等差数列（未ac）
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;

//超时
//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        //是中间会有删除的子序列，所以dp为以i为结尾的最长
//        //因为是等差，所以只需两个元素即可确定 
//        //dp[i][j]为以i和j为结尾，j < i
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n, 1));
//        unordered_multimap<int, int> map;//first为元素，second为对应下标，方便快速找到目标元素
//        dp[0][0] = 1;
//        map.insert({ nums[0], 0 });
//        int ret = 2;
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j = i - 1; j >= 0; --j)
//            {
//                int seq = nums[i] - nums[j];
//                if (map.count(nums[j] - seq))
//                {
//                    auto range1 = map.equal_range(nums[j] - seq);
//                    for(auto it1 = range1.first; it1 != range1.second; ++it1)
//                    {
//                        if (it1->second < j && map.count(nums[j] - seq - seq))
//                        {
//                            auto range2 = map.equal_range(nums[j] - seq - seq);
//                            for(auto it2 = range2.first; it2 != range2.second; ++it2)
//                            {
//                                if(it2->second < it1->second)
//                                {
//                                    dp[i][j] = max(dp[i][j], dp[j][it1->second] + 1);
//                                    ret = max(ret, dp[i][j]);
//                                }
//                                else if(it2->second > it1->second)
//                                {
//                                    dp[i][j] = max(dp[i][j], 3);
//                                    ret = max(ret, dp[i][j]);
//                                }
//                            }
//                        }
//                        else if(it1->second < j)
//                        {
//                            dp[i][j] = max(dp[i][j], 3);
//                            ret = max(ret, dp[i][j]);
//                        }
//                        else if (it1->second > j)
//                        {
//                            dp[i][j] = max(dp[i][j], 2);
//                        }
//                    }
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i][j], 2);
//                }
//            }
//            map.insert({ nums[i], i });
//        }
//
//        return ret;
//    }
//};

//class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        //是中间会有删除的子序列，所以dp为以i为结尾的最长
//        //因为是等差，所以只需两个元素即可确定 
//        //dp[i][j]为以i和j为结尾，j < i
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n, 1));
//        unordered_map<int, int> map;//first为元素，second为对应下标，方便快速找到目标元素
//        dp[0][0] = 1;
//        dp[1][0] = 2;
//        dp[1][1] = 2;
//        map.insert({ nums[0], 0 });
//        map.insert({ nums[1], 1 });
//        int ret = 2;
//        for (int i = 2; i < n; ++i)
//        {
//            for (int j = i - 1; j >= 0; --j)
//            {
//                int seq = nums[i] - nums[j];
//                if (map.count(nums[j] - seq) && map[nums[j] - seq] <= j)
//                {
//                    if (map.count(nums[j] - seq - seq))
//                    {
//                        if (map[nums[j] - seq - seq] <= map[nums[j] - seq])
//                        {
//                            dp[i][j] = max(dp[i][j], dp[j][map[nums[j] - seq]] + 1);
//                            if (seq == 0)
//                                dp[i][i] = max(dp[i][i], dp[i][j]);
//                            else
//                                dp[i][i] = max(dp[i][i], 2);
//                            ret = max(ret, dp[i][j]);
//                        }
//                        else
//                        {
//                            dp[i][j] = max(dp[i][j], 3);
//                            if (seq == 0)
//                                dp[i][i] = max(dp[i][i], dp[i][j]);
//                            else
//                                dp[i][i] = max(dp[i][i], 2);
//                            ret = max(ret, dp[i][j]);
//                        }
//                    }
//                    else
//                    {
//                        dp[i][j] = max(dp[i][j], 3);
//                        if (seq == 0)
//                            dp[i][i] = max(dp[i][i], dp[i][j]);
//                        else
//                            dp[i][i] = max(dp[i][i], 2);
//                        ret = max(ret, dp[i][j]);
//                    }
//                }
//            }
//
//            map[nums[i]] = i;
//        }
//
//        return ret;
//    }
//};
//
// 
// //转变题解思路，过
// class Solution {
//public:
//    int longestArithSeqLength(vector<int>& nums) {
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n, 2));//dp[i][j]为以ij为末尾的最长目标，i < j
//        unordered_map<int, int> hash;//first为元素，second为下标
//        hash.insert({ nums[0], 0 });
//        int ret = 2;
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j = i + 1; j < n; ++j)
//            {
//                int seq = nums[j] - nums[i];
//                if (hash.count(nums[i] - seq))
//                {
//                    dp[i][j] = max(dp[i][j], dp[hash[nums[i] - seq]][i] + 1);
//                    ret = max(ret, dp[i][j]);
//                }
//            }
//            hash[nums[i]] = i;
//        }
//        return ret;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> nums = { 1,1,1,1,1};
//    cout << s.longestArithSeqLength(nums);
//	return 0;
//}


//446. 等差数列划分 II - 子序列
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int numberOfArithmeticSlices(vector<int>& nums) {
//        long long n = nums.size();
//        vector<vector<long long>> dp(n, vector<long long>(n, 0));//以ij结尾的最长等差子序列，因为ij一直往后走，所以每更新一次，对应dp就要增加
//        unordered_map<long long, vector<long long>> hash;//first为元素，second为对应下标，新的元素下标会覆盖旧的
//        hash[nums[0]].push_back(0);
//        long long ret = 0;
//        for (long long i = 1; i < n; ++i)
//        {
//            for (long long j = i + 1; j < n; ++j)
//            {
//                long long seq = (long long)nums[j] - nums[i];
//                if (hash.count(nums[i] - seq))
//                {
//                    for (long long k : hash[nums[i] - seq])
//                    {
//                        dp[i][j] += dp[k][i] + 1;
//                    }
//                    ret += dp[i][j];
//                }
//            }
//            hash[nums[i]].push_back(i);
//        }
//        return ret;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> v = { 7,7,7,7,7 };
//    cout << s.numberOfArithmeticSlices(v);
//	return 0;
//}


//647. 回文子串
//#include<iostream>
//#include<string>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int countSubstrings(string s) {
//        //dp[i][j]判断以i、j为头尾的字符串是否为回文，i <= j
//        //用一个哈希将所有元素与对应下标存起来
//        //若s[i] == s[j] 并且dp[i + 1][j - 1]是回文，则dp[i][j]是回文
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        unordered_map<char, vector<int>> hash;//first为元素，second为下标
//        int ret = 0;
//        for (int j = 0; j < n; ++j)
//        {
//            hash[s[j]].push_back(j);
//            dp[j][j] = true;
//            for (int i : hash[s[j]])
//            {
//                //如果i==j,i + 1 == j,i + 1 == j - 1则直接为回文
//                if (i == j || i + 1 == j || i + 1 == j - 1)
//                {
//                    dp[i][j] = true;
//                    ++ret;
//                }
//                else if (dp[i + 1][j - 1])
//                {
//                    dp[i][j] = true;
//                    ++ret;
//                }
//            }
//        }
//
//        return ret;
//    }
//};



//5. 最长回文子串
//#include<string>
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        //dp[i][j]判断以i、j为头尾的字符串是否为回文，i <= j
//       //用一个哈希将所有元素与对应下标存起来
//       //若s[i] == s[j] 并且dp[i + 1][j - 1]是回文，则dp[i][j]是回文
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        vector<vector<int>> l_dp(n, vector<int>(n, 1));//以i、j为首尾的最长
//        unordered_map<char, vector<int>> hash;//first为元素，second为下标
//        pair<int, int> ret{ 0, 0 };//最长回文头尾下标
//        for (int j = 0; j < n; ++j)
//        {
//            hash[s[j]].push_back(j);
//            dp[j][j] = true;
//            for (int i : hash[s[j]])
//            {
//                //如果i==j,i + 1 == j,i + 1 == j - 1则直接为回文
//                if (i == j || i + 1 == j)
//                {
//                    dp[i][j] = true;
//                    if (i != j)
//                    {
//                        if (l_dp[i][j] < 2)
//                        {
//                            l_dp[i][j] = 2;
//                            if(j - i > ret.second - ret.first)
//                            {
//                                ret.first = i;
//                                ret.second = j;
//                            }
//                        }
//                    }
//                }
//                else if (dp[i + 1][j - 1])
//                {
//                    dp[i][j] = true;
//                    if (l_dp[i][j] <= l_dp[i + 1][j - 1] + 2)
//                    {
//                        l_dp[i][j] = l_dp[i + 1][j - 1] + 2;
//                        if (j - i > ret.second - ret.first)
//                        {
//                            ret.first = i;
//                            ret.second = j;
//                        }
//                    }
//                }
//            }
//        }
//
//        return s.substr(ret.first, ret.second - ret.first + 1);
//    }
//
//};
//
//int main()
//{
//	string s = "ccc";
//    Solution t;
//    cout << t.longestPalindrome(s);
//	return 0;
//}


//1745. 分割回文串 IV
//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    bool checkPartitioning(string s) {
//        //dp[i][j]为首尾为ij的字符串是否为回文，i < j
//        //hash存储元素与对应下标，优化时间
//        //最后将元素分为三部分，判断
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        unordered_map<char, vector<int>> hash;//first为元素，second为下标
//        for (int j = 0; j < n; ++j)
//        {
//            hash[s[j]].push_back(j);
//            for (int i : hash[s[j]])
//            {
//                if (i == j || i + 1 == j)
//                    dp[i][j] = true;
//                else
//                    dp[i][j] = dp[i + 1][j - 1];
//            }
//        }
//        //三回文串下标为：[0][i] - [i + 1][j] - [j + 1][n - 1]
//        for (int i : hash[s[0]])
//        {
//            if (dp[0][i])//第一段是回文
//            {
//                for (int j : hash[s[i + 1]])
//                {
//                    if (j < i + 1 || j + 1 > n - 1)
//                        continue;
//                    if (dp[i + 1][j])//第二段是回文
//                    {
//                        if (dp[j + 1][n - 1])//最后一段是回文
//                            return true;
//                    }
//                }
//            }
//        }
//        return false;
//    }
//};



//132. 分割回文串 II
//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//超时，但思路基本和题解一样，不过我最初用的递归，dp就能过
//class Solution {
//public:
//
//    void Func(string& s, vector<vector<bool>>& dp, unordered_map<char, vector<int>>& hash, int& ret, int cur = 0, int begin = 0)
//    {
//        if (begin >= s.size())
//            return;
//        vector<int>& v = hash[s[begin]];
//        for (int& k : v)
//        {
//            if (k < begin)
//                break;
//            if (dp[begin][k])
//            {
//                if (k == s.size() - 1)
//                {
//                    ret = min(ret, cur);
//                    return;
//                }
//                if (begin <= 200)
//                    int a = 0;
//                Func(s, dp, hash, ret, cur + 1, k + 1);
//            }
//        }
//    }
//    int minCut(string s) {
//        //dp[i][j]为首尾为ij的字符串是否为回文，i < j
//        //hash存储元素与对应下标，优化时间
//        //判断0~n-1（i）是否为回文（i为从大到小下标），是则递归i+1 ~ n-1，不是则--i
//        //递归函数可以用hash和dp直接判断去找回文，不用再所有遍历
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        unordered_map<char, vector<int>> hash;//first为元素，second为下标
//        for (int j = 0; j < n; ++j)
//        {
//            hash[s[j]].push_back(j);
//            for (int i : hash[s[j]])
//            {
//                if (i == j || i + 1 == j)
//                    dp[i][j] = true;
//                else
//                    dp[i][j] = dp[i + 1][j - 1];
//            }
//        }
//        for (auto& e : hash)
//            sort(e.second.rbegin(), e.second.rend());
//        int ret = INT_MAX;
//        Func(s, dp, hash, ret);
//        return ret;
//    }
//};
//
//class Solution {
//public:
//
//    int minCut(string s) {
//        //dp[i][j]为首尾为ij的字符串是否为回文，i < j
//        //hash存储元素与对应下标，优化时间
//        //判断0~n-1（i）是否为回文（i为从大到小下标），是则递归i+1 ~ n-1，不是则--i
//        //递归函数可以用hash和dp直接判断去找回文，不用再所有遍历
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n, false));
//        unordered_map<char, vector<int>> hash;//first为元素，second为下标
//        for (int j = 0; j < n; ++j)
//        {
//            hash[s[j]].push_back(j);
//            for (int i : hash[s[j]])
//            {
//                if (i == j || i + 1 == j)
//                    dp[i][j] = true;
//                else
//                    dp[i][j] = dp[i + 1][j - 1];
//            }
//        }
//        for (auto& e : hash)
//            sort(e.second.begin(), e.second.end());
//        vector<int> ret(n);//dp_ret，以0~i的最少次数
//        for (int i = 0; i < n; ++i)
//            ret[i] = i;
//        ret[0] = 0;
//        //把0~i的ret分为0 - j - i，若遍历dp[j][i],若为回文，ret[i] = ret[j - 1] + 1;
//        for (int i = 1; i < n; ++i)
//        {
//            for (int j : hash[s[i]])
//            {
//                if (j == 0 && dp[j][i])
//                {
//                    ret[i] = 0;
//                    break;
//                }
//                if (j > i)
//                    break;
//                if (dp[j][i])
//                {
//                    ret[i] = min(ret[i], ret[j - 1] + 1);
//                }
//            }
//        }
//        return ret[n - 1];
//    }
//};
//int main()
//{
//    string s = "aab";
//    cout << "size:" << s.size() << endl;
//    Solution t;
//    cout << t.minCut(s);
//    return 0;
//}


//516. 最长回文子序列
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int longestPalindromeSubseq(string s) {
//        //dp[i][j]为以i到j的字符串的最长回文子序列的长度
//        //如果i == j，dp[i][j] = dp[i + 1][j - 1] + 2,否则d[i][j] = dp[i + 1][j - 1]
//        int n = s.size();
//        if (n == 1)  return 1;
//        vector<vector<int>> dp(n, vector<int>(n));
//        dp[0][0] = 1;
//        dp[1][1] = 1;
//        dp[0][1] = s[0] == s[1] ? 2 : 1;
//        int ret = max(dp[0][0], dp[0][1]);
//        for (int j = 2; j < n; ++j)
//        {
//            for (int i = j; i >= 0; --i)
//            {
//                if (i == j)
//                    dp[i][j] = 1;
//                else if (i + 1 == j)
//                {
//                    dp[i][j] = s[i] == s[j] ? 2 : 1;
//                    ret = max(ret, dp[i][j]);
//                }
//                else if (s[i] == s[j])
//                {
//                    dp[i][j] = dp[i + 1][j - 1] + 2;
//                    ret = max(ret, dp[i][j]);
//                }
//                else
//                {
//
//                    dp[i][j] = max(dp[i][j - 1], dp[i + 1][j]);
//                    ret = max(ret, dp[i][j]);
//                }
//            }
//        }
//
//        return ret;
//
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s = "bbbab";
//    cout << t.longestPalindromeSubseq(s);
//    return 0;
//}


//1312. 让字符串成为回文串的最少插入次数
//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int minInsertions(string s) {
//        //dp[i][j]为以i、j为范围的字符串的最少插入次数，i < j
//        //
//        int n = s.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        // dp[0][0] = 0;
//        // dp[0][1] = s[0] == s[1] ? 0 : 1:
//        for (int j = 0; j < n; ++j)
//        {
//            for (int i = j; i >= 0; --i)
//            {
//                if (i == j)
//                    dp[i][j] = 0;
//                else if (i + 1 == j)
//                    dp[i][j] = s[i] == s[j] ? 0 : 1;
//                else if (s[i] == s[j])
//                    dp[i][j] = dp[i + 1][j - 1];
//                else
//                    dp[i][j] = min(dp[i + 1][j] + 1, dp[i][j - 1] + 1);
//            }
//        }
//        return dp[0][n - 1];
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s = "leetcode";
//    cout << t.minInsertions(s);
//    return 0;
//}


//1143. 最长公共子序列
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        //dp[i][j]是t1以i结尾，t2以j结尾的最长公共子序列长度
//        //如果 t1[i] == t2[j]，dp[i][j]为dp[m][n] + 1, m <= i && n < j 或者m < i && n <= j，dp[m][m]为之前所有的最大
//        //否则，dp[i][j] = 0
//        string& t1 = text1;
//        string& t2 = text2;
//        int m = text1.size();
//        int n = text2.size();
//        vector<vector<int>> dp(m, vector<int>(n, 0));
//        //record记录dp[i][j]及之前的最大
//        vector<vector<int>> record(m + 1, vector<int>(n + 1, 0));
//        int ret = 0;
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (i == 0 || j == 0)
//                {
//                    dp[i][j] = t1[i] == t2[j] ? 1 : 0;
//                    if (i == 0 && j == 0)
//                        record[i][j] = dp[i][j];
//                    else if (i == 0)
//                        record[i][j] = max(dp[i][j], record[i][j - 1]);
//                    else
//                        record[i][j] = max(dp[i][j], record[i - 1][j]);
//
//                    ret = max(ret, dp[i][j]);
//                }
//                else
//                {
//                    if (t1[i] == t2[j])
//                    {
//                        dp[i][j] = record[i - 1][j - 1] + 1;
//                        ret = max(ret, dp[i][j]);
//                    }
//                    else
//                        dp[i][j] = 0;
//                    record[i - 1][j] = max(record[i - 1][j], max(dp[i - 1][j], record[i - 1][j - 1]));
//                    record[i][j - 1] = max(record[i][j - 1], max(dp[i][j - 1], record[i - 1][j - 1]));
//                    record[i][j] = max(dp[i][j], max(record[i - 1][j], record[i][j - 1]));
//                }
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s1 = "abcde";
//    string s2 = "ace";
//    cout << t.longestCommonSubsequence(s1, s2);
//    return 0;
//}



//1035. 不相交的线
//#include<iostream>
//#include<vector>
//using  namespace std;
//
//class Solution {
//public:
//    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
//        //dp[i][j]是以0~i、j的最大
//        //nums1[i] == nums2[j]则，dp[i][j] = dp[i - 1][j - 1] + 1;
//        //否则，取前面或当前与前面交叉的最大
//        int n1 = nums1.size();
//        int n2 = nums2.size();
//        vector<vector<int>> dp(n1, vector<int>(n2, 0));
//        int ret = 0;
//        for (int i = 0; i < n1; ++i)
//        {
//            for (int j = 0; j < n2; ++j)
//            {
//                if (i == 0 || j == 0)
//                {
//                    int temp = nums1[i] == nums2[j] ? 1 : 0;
//                    if (i == 0 && j == 0)
//                        dp[i][j] = temp;
//                    else if (i == 0)
//                        dp[i][j] = max(temp, dp[i][j - 1]);
//                    else
//                        dp[i][j] = max(temp, dp[i - 1][j]);
//                    ret = max(ret, dp[i][j]);
//                }
//                else if (nums1[i] == nums2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                    ret = max(ret, dp[i][j]);
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1]));
//                    ret = max(ret, dp[i][j]);
//                }
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> n1 = {1, 4, 2};
//    vector<int> n2 = {1, 2, 4};
//    cout << s.maxUncrossedLines(n1, n2);
//    return 0;
//}


//115. 不同的子序列
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    int numDistinct(string s, string t) {
//        //dp[i][j]为s的0~j范围的子序列出现t的0~i的字串的最大个数
//        //遍历0~i，如果s[i] == t[j]的话，dp[i][j]等于dp[i][j - 1] 加上 dp[i - 1][j - 1]
//        //也就是，用t[i]这个字母，插入到之前所有记录的0~i-1的字符串后面，就组成所需要的0~i的字符串了
//        //否则不等于的话，dp[i][j]和dp[i][j - 1]一样
//        int n = s.size();
//        int m = t.size();
//        vector<vector<long long>> dp(m, vector<long long>(n));
//        dp[0][0] = s[0] == t[0] ? 1 : 0;
//        for (int j = 1; j < n; ++j)//初始化，记录t的第一个字符的情况
//        {
//            if (s[j] == t[0])
//                dp[0][j] = dp[0][j - 1] + 1;
//            else
//                dp[0][j] = dp[0][j - 1];
//        }
//        long long mod = pow(10, 9) + 7;
//        for (int i = 1; i < m; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                if (j < i)//s给出的字串长度j 比t需要的字串长度i还小的话直接dp为0
//                    continue;
//                else if (s[j] == t[i])
//                {
//                    //要确保s的j-1及之前是存在 t的0~i-1的字符串，不然组成不了目标字符串
//                    if (dp[i - 1][j - 1])
//                        dp[i][j] = (dp[i][j - 1] + dp[i - 1][j - 1]) % mod;
//                    else
//                        dp[i][j] = dp[i][j - 1];
//                }
//                else
//                    dp[i][j] = dp[i][j - 1];
//            }
//        }
//
//        return dp[m - 1][n - 1];
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s1 = "rabbbit";
//    string s2 = "rabbit";
//
//    cout << t.numDistinct(s1, s2);
//    return 0;
//}



//44. 通配符匹配 
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        //dp[i][j]表示s的0~i与p的0~j是否匹配
//        //若p[j] == *, 只要dp[0~i][j - 1]有任一匹配，则匹配
//        //若p[j] == ?, dp[i - 1][j - 1]匹配，则匹配
//        //若p[j]为英文字符, 则必须s[i] == p[j],并且dp[i - 1][j - 1]匹配，则匹配
//        int n = s.size();
//        int m = p.size();
//        if (m == 0)
//        {
//            if (n == 0) return true;
//            return false;
//        }
//        if (n == 0)
//        {
//            for (auto e : p)
//                if (e != '*')
//                    return false;
//            return true;
//        }
//        vector<vector<bool>> dp(n, vector<bool>(m, false));
//        for (int i = 0; i < n; ++i)
//        {
//            for (int j = 0; j < m; ++j)
//            {
//                if (p[j] == '?')
//                {
//                    if (i == 0)
//                    {
//                        if (j == 0)
//                            dp[i][j] = true;
//                        else
//                        {
//                            int flag = 1;
//                            for (int k = 0; k < j; ++k)
//                            {
//                                if (p[k] != '*')
//                                {
//                                    flag = 0;
//                                    break;
//                                }
//                            }
//                            if (flag)
//                                dp[i][j] = true;
//                        }
//
//                    }
//                    else if (j == 0)
//                    {
//                        if (i == 0)
//                            dp[i][j] = true;
//                    }
//                    else if (dp[i - 1][j - 1])
//                        dp[i][j] = true;
//                }
//                else if (p[j] != '*')
//                {
//                    if (i == 0)
//                    {
//                        if (j == 0 && s[i] == p[j])
//                            dp[i][j] = true;
//                        else if (s[i] == p[j])
//                        {
//                            int flag = 1;
//                            for (int k = 0; k < j; ++k)
//                            {
//                                if (p[k] != '*')
//                                {
//                                    flag = 0;
//                                    break;
//                                }
//                            }
//                            if (flag)
//                                dp[i][j] = true;
//                        }
//
//                    }
//                    else if (j == 0)
//                    {
//                        if (i == 0 && s[i] == p[j])
//                            dp[i][j] = true;
//                    }
//                    else if (s[i] == p[j] && dp[i - 1][j - 1])
//                        dp[i][j] = true;
//                }
//                else
//                {
//                    if (j == 0)
//                        dp[i][j] = true;
//                    else
//                    {
//                        for (int k = 0; k <= i; ++k) {
//                            if (dp[k][j - 1]) {
//                                dp[i][j] = true;
//                                break;
//                            }
//                        }
//                    }
//                }
//            }
//        }
//
//        return dp[n - 1][m - 1];
//
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s = "abcabczzzde";
//    string p = "*abc???de*";
//    if (t.isMatch(s, p))
//        cout << "Y";
//    else
//        cout << "N";
//    return 0;
//}



//322. 零钱兑换
//class Solution {
//public:
//    int coinChange(vector<int>& coins, int amount) {
//        //dp为组成金钱为x的最少硬币数
//        //用当前金钱数，减去每一种硬币的面值，就可以得当前金钱之前的某一个金钱数，加上这种的一个硬币，
//        //而dp[i]就为之前的某一个金钱数的dp[j]加上这个硬币(也就是1)，所有情况中的最小值就为dp[i]
//        //一个bool数组判断当前金额是否能组成，如果不能，用这个金额组成的新金额也不能组成，所dp[j]以只看能组成的dp，
//        //如果都不能，则dp[i]也不能
//        vector<int> dp(amount + 1, -1);
//        vector<bool> hash(amount + 1, 0);
//        dp[0] = 0;
//        hash[0] = true;
//        sort(coins.begin(), coins.end());
//        for (int i = 1; i <= amount; ++i)
//        {
//            int temp_min = INT_MAX;//记录i之前的最小且有效的dp值
//            int flag = 0;//记录dp[i]是否有效
//            for (int m : coins)
//            {
//                if (m > i) break;
//                int j = i - m;
//                if (hash[j])//判断dp[j]是否有效（能否组成）
//                {
//                    temp_min = min(temp_min, dp[j]);
//                    flag = 1;
//                }
//            }
//            if (flag)
//            {
//                dp[i] = temp_min + 1;
//                hash[i] = 1;
//            }
//        }
//        return dp[amount];
//    }
//};


//75. 颜色分类
//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int arr[3];
//        for (auto e : nums)
//            ++arr[e];
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (arr[0])
//            {
//                nums[i] = 0;
//                --arr[0];
//            }
//            else if (arr[1])
//            {
//                nums[i] = 1;
//                --arr[1];
//            }
//            else
//                nums[i] = 2;
//        }
//    }
//};



//正则（什么的，忘了）（未ac）
//#include<iostream>
//#include<vector>
//#include<string>
//using namespace std;
//
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        //状态表示为s的前i个与p的前j个是否匹配
//        //若新增的是s，两种情况：新增与前一个字符相同或不同
//        //情况一下：p的末尾为*则匹配，p末尾为.则看dp的s-1和p-1是否匹配，p末尾为确定字符则对比是否一样然后和.一样处理
//        //情况二下：p的末尾为*则不匹配，其他情况和情况一一样
//        //若新增的是p，三种情况：新增一个明确字符/ . / * 
//        //明确字符：末尾比较是否相同，然后看dp的s-1与p-1是否匹配
//        //. ：看dp的s-1与p-1是否匹配
//        //* ：若dp的s与p-1匹配则匹配，不匹配情况下：p-1为*则不匹配，
//        //若为其他(确定字符和.)，确保p-1与s-k匹配且s-1到s-k都是相同字符，则匹配
//        int n = s.size();
//        int m = p.size();
//        vector<vector<bool>> dp(n, vector<bool>(m, false));
//        if (p[0] == '.' || s[0] == p[0])
//            dp[0][0] = true;
//        for (int i = 0; i < n; ++i)
//        {
//            for (int j = 0; j < m; ++j)
//            {
//                if (i == 0 && j == 0) continue;
//                else if (i == 0 && p[j] != '*') continue;
//                else if (j == 0) continue;
//
//                if (p[j] == '.')
//                    dp[i][j] = dp[i - 1][j - 1];
//                else if (p[j] == '*')
//                {
//                    if (dp[i][j - 1] == true)
//                        dp[i][j] = true;
//                    else
//                    {
//                        for (int k = i - 1; k >= 0; --k)
//                        {
//                            if (s[k] != s[k + 1]) break;
//                            else if (p[j - 1] == '.' || p[j - 1] == s[k])
//                            {
//                                if (dp[k][j - 1])
//                                {
//                                    dp[i][j] = true;
//                                    break;
//                                }
//                            }
//                            else break;
//                        }
//                    }
//                }
//                else
//                {
//                    if (s[i] == p[j])
//                        dp[i][j] = dp[i - 1][j - 1];
//                }
//            }
//        }
//
//        return dp[n - 1][m - 1];
//    }
//};
//
//int main()
//{
//    Solution t;
//    string s = "ab";
//    string p = ".*";
//    if (t.isMatch(s, p))
//        cout << "YES";
//    else
//        cout << "NO";
//    return 0;
//}



//518. 零钱兑换 II
//class Solution {
//public:
//    int change(int amount, vector<int>& coins) {
//        //dp[i]为凑成金额为i的组合数
//        //计算dp[i + 1]时，视为最后一个硬币为x(遍历coins)，然后找到dp[i + 1 - x]，这个dp合法则直接加上
//        //组合数为零则表示无法凑出
//        //不过先遍历硬币，再内嵌循环金钱，因为一种硬币组合所对应的金钱是固定的，但反过来内嵌硬币循环的话，
//        //一个金钱数额所对应的硬币组合却不止一种，而且还可能重复，所以先循环遍历coins
//        sort(coins.begin(), coins.end());
//        vector<long long> dp(amount + 1, 0);
//        dp[0] = 1;
//        for (int x : coins)
//        {
//            for (int i = 1; i <= amount; ++i)
//            {
//                if (i < x) continue;
//                dp[i] += dp[i - x];
//            }
//        }
//        return dp[amount];
//    }
//};


//279. 完全平方数
//class Solution {
//public:
//    int numSquares(int n) {
//        //dp[i]为和为i的完全平方数的最少数量
//        //每隔一定时间，i都会变为一个更大的完全平方数，此时dp[i]为1
//        //dp[i+1]从dp[i]+dp[1]、dp[i-1]+dp[2]、dp[i-2]+dp[3]...这些中最小的
//        if (sqrt(n) == (int)sqrt(n))
//            return 1;
//        vector<int> dp(n + 1, 0);
//        dp[1] = 1;
//        for (int i = 2; i <= n; ++i)
//        {
//            if (sqrt(i) == (int)sqrt(i))
//            {
//                dp[i] = 1;
//                continue;
//            }
//            int left = 1, right = i - 1;
//            int cur = INT_MAX;//当前最小
//            while (left <= right)
//            {
//                cur = dp[left] + dp[right] < cur ? dp[left] + dp[right] : cur;
//                ++left;
//                --right;
//            }
//            dp[i] = cur;
//        }
//        return dp[n];
//    }
//};

//474. 一和零
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int findMaxForm(vector<string>& strs, int m, int n) {
//        //dp[i][j][k]为只找strs的前i个子集，且子集中0的个数最多为j、1的个数最多为k的最长长度
//        //dp[i][j][k] = max(dp[i-1][j][k], dp[i-1][j-cur_0][k-cur_1] + 1),cur_0、cur_1当前子集01个数
//        //i这一维可以省略
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//        for (int i = 0; i < strs.size(); ++i)
//        {
//            int cur_0 = 0, cur_1 = 0;
//            for (char e : strs[i])
//            {
//                if (e == '1') ++cur_1;
//                else if (e == '0') ++cur_0;
//            }
//            for (int j = m; j >= 0; --j)
//            {
//                for (int k = n; k >= 0; --k)
//                {
//                    if (j >= cur_0 && k >= cur_1)
//                        dp[j][k] = max(dp[j][k], dp[j - cur_0][k - cur_1] + 1);
//                }
//            }
//        }
//        return dp[m][n];
//
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<string> strs = { "10", "0001", "111001", "1", "0" };
//    int m = 5, n = 3;
//    cout << s.findMaxForm(strs, m, n);
//    return 0;
//}

//879. 盈利计划
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
//        //dp[i][j][k]为只看前i种工作并且员工最多为j名、利润至少为k的计划数量
//        //状态转移方程：dp[i][j][k] += dp[i-1][j-g[i]][k-p[i]],这是当前工作能选择的情况下
//        //如果不能选择，则直接等于上一个，或者当前利润大于等于目标，加上至少为0的利润那个dp，就至少为k了
//        //省略i这一维
//        vector<vector<int>> dp(n + 1, vector<int>(minProfit + 1, 0));
//        for (int i = 0; i <= n; ++i)//初始化利润至少为0时，有什么都不做这一种计划可选择
//            dp[i][0] = 1;
//        for (int i = 0; i < group.size(); ++i)
//        {
//            for (int j = n; j >= 0; --j)
//            {
//                for (int k = minProfit; k >= 0; --k)
//                {
//                    if (j >= group[i])//做当前工作人数够
//                    {
//                        if (profit[i] >= k)
//                            dp[j][k] += dp[j - group[i]][0];
//                        else
//                            dp[j][k] += dp[j - group[i]][k - profit[i]];
//                    }
//                    dp[j][k] %= (int)pow(10, 9) + 7;
//                }
//            }
//        }
//
//        return dp[n][minProfit];
//    }
//};
//int main()
//{
//    Solution s;
//    int n = 5, minProfit = 0;
//    vector<int> group = { 10, 2 }, profit = { 2, 3 };
//    cout << s.profitableSchemes(n, minProfit, group, profit);
//    return 0;
//}



//DP41 【模板】01背包（牛客）
//#include <iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int main() {
//    //dp[i][j]为只看前i个物品，且重量最多为j的背包价值
//    //i这一维可省略
//    int n, V;
//    cin >> n >> V;
//    vector<pair<int, int>> it(n);
//    for (auto& t : it)
//    {
//        int a, b;
//        cin >> a >> b;
//        t = { a, b };
//    }
//    vector<int> dp(V + 1, 0);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = V; j >= 0; --j)
//        {
//            if (it[i].first > j) continue;
//            dp[j] = max(dp[j], dp[j - it[i].first] + it[i].second);
//        }
//    }
//    cout << dp[V] << endl;
//    //dp1[i][j]为只看前i个物品，重量刚好为j的最大物品价值
//    //状态转移时，必须确定前面一个背包里重量是真实的，若价值为0则不真实
//    vector<int> dp1(V + 1, 0);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = V; j >= 0; --j)
//        {
//            if (it[i].first > j) continue;
//            else if (it[i].first == j)
//                dp1[j] = max(dp1[j], it[i].second);
//            else if (dp1[j - it[i].first] > 0)
//                dp1[j] = max(dp1[j], dp1[j - it[i].first] + it[i].second);
//        }
//    }
//    cout << dp1[V] << endl;
//}



//416. 分割等和子集
//class Solution {
//public:
//    bool canPartition(vector<int>& nums) {
//        long long sum = 0;
//        for (int e : nums)
//            sum += e;
//        if (sum % 2 == 1)    return false;
//        sum /= 2;//需要的目标值
//        //dp[i][j]为只看前i项而值是否能为j
//        //状态转移：dp[i][j] = dp[i - 1][j - nums[i]] == true ? true : false;
//        //省略i这一维
//        vector<bool> dp(sum + 1, false);
//        dp[0] = true;//空集和为0，也就是必定存在为0
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            for (int j = sum; j >= 0; --j)
//            {
//                if (j >= nums[i])
//                    dp[j] = dp[j - nums[i]] == true ? true : false || dp[j];
//            }
//        }
//        return dp[sum];
//    }
//};



//494. 目标和
//class Solution {
//public:
//    int findTargetSumWays(vector<int>& nums, int target) {
//        //设我们的选择中所有+的加起来为a，-的加起来为b
//        //可得a + b 等于 sum(nums[i])，a - b 等于 target
//        //所有 a 等于 (sum + target) / 2
//        //因此找到所有加起来结果为a的情况就是答案
//        int sum = 0;
//        for (auto& e : nums)
//            sum += e;
//        int a = (sum + target) / 2;
//        if (a < 0 || (sum + target) % 2) return 0;
//        //dp[i][j]为只看前i项和为j的数目, 省略i这一维
//        vector<int> dp(a + 1, 0);
//        dp[0] = 1;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            for (int j = a; j >= 0; --j)
//            {
//                if (j >= nums[i])
//                {
//                    dp[j] += dp[j - nums[i]];
//                }
//            }
//        }
//        return dp[a];
//    }
//};



//1049. 最后一块石头的重量 II
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int lastStoneWeightII(vector<int>& stones) {
//        //因为两块石头重量相同则为0，不同则取差值，可以看作是石头前面加上+-
//        //要最后最小，就是要所有+的石头和-的石头总共重量最相近，所有问题就转换为：
//        //找到最接近sum/2的石头总和，差值*2即为答案
//        //dp[i][j]为只看前i个，和为j的可能性
//        //省略i这一维
//        float sum = 0;
//        for (auto& e : stones)
//            sum += e;
//        sum /= 2;
//        vector<bool> dp((int)sum + 1, false);
//        dp[0] = true;
//        for (int i = 0; i < stones.size(); ++i)
//        {
//            for (int j = (int)sum; j >= 0; --j)
//            {
//                if (j - stones[i] >= 0)
//                    dp[j] = dp[j] || dp[j - stones[i]];
//            }
//        }
//        for (int j = (int)sum; j >= 0; --j)
//        {
//            if (dp[j])
//                return (sum - j) * 2;
//        }
//        return 0;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> stones = { 21,60,61,20,31 };
//    cout << s.lastStoneWeightII(stones) << endl;
//    return 0;
//}




//DP42 【模板】完全背包（牛客）
//#include <iostream>
//#include<vector>
//using namespace std;
//
//int main() {
//    int n = 0, V = 0;
//    cin >> n >> V;
//    vector<int> vol(n);
//    vector<int> val(n);
//    for (int i = 0; i < n; ++i)
//        cin >> vol[i] >> val[i];
//    //dp[i][j]为只看前i个，体积最多为j的最大价值
//    vector<int> dp(V + 1, 0);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j <= V; ++j)
//        {
//            if (vol[i] <= j)
//                dp[j] = max(dp[j], dp[j - vol[i]] + val[i]);
//        }
//    }
//    cout << dp[V] << endl;
//    //dp1[i][j]为只看前i个，体积刚好为j的最大价值
//    //更新状态时，要确保所用的前面的dp1是存在的，也就是体积不为0，但dp1[0][0]是存在的
//    vector<int> dp1(V + 1, 0);
//    for (int i = 0; i < n; ++i)
//    {
//        for (int j = 0; j <= V; ++j)
//        {
//            if (vol[i] <= j && dp1[j - vol[i]])
//                dp1[j] = max(dp1[j], dp1[j - vol[i]] + val[i]);
//            if (vol[i] == j)//当前一个物品刚好装下
//                dp1[j] = max(dp1[j], val[i]);
//        }
//    }
//    cout << dp1[V] << endl;
//}




//377. 组合总和 Ⅳ
//class Solution {
//public:
//    int combinationSum4(vector<int>& nums, int target) {
//        sort(nums.begin(), nums.end());
//        //dp[i]为组合为i的排列个数
//        //hash
//        vector<int> dp(target + 1, 0);
//        dp[0] = 1;
//        for (int i = 0; i <= target; ++i)
//        {
//            for (auto& e : nums) {
//                if (i >= e)
//                    dp[i] += dp[i - e];
//            }
//        }
//        return dp[target];
//    }
//};



//96. 不同的二叉搜索树
//class Solution {
//public:
//    int numTrees(int n) {
//        //以i为根的左子树有由 i-1 到 0 个节点的树的和数量
//        //以i为根的右子树有由 i_max-i 到 0 个节点的树的和数量
//        //节点有i个节点的树，一共就有 以i为根的 左子树*右子树的数量
//        //root[i]为以i为根的二叉搜索树的种数(i为最大节点数)
//        //dp[i]为由i个节点组成的二叉搜索树的种数
//        if (n == 1) return 1;
//        if (n == 2) return 2;
//        vector<int> root(n + 1, 0);
//        vector<int> dp(n + 1, 0);
//        root[0] = root[1] = 1;
//        dp[0] = dp[1] = 1;
//        for (int i = 2; i <= n; ++i) {
//            for (int j = 0; j < i; ++j)
//            {
//                dp[i] += root[j] * root[i - j - 1];
//            }
//            root[i] = dp[i];
//        }
//
//        return dp[n];
//    }
//};


//733. 图像渲染
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//        int init = image[sr][sc];
//        int dir[4][2] = { {-1, 0}, {0, 1}, {1, 0}, {0, -1} };
//        vector<vector<int>> hash(image.size(), vector<int>(image[0].size(), 0));
//        dfs(image, hash, sr, sc, color, init, dir);
//        if (init == color)
//        {
//            for (int i = 0; i < image.size(); ++i)
//            {
//                for (int j = 0; j < image[0].size(); ++j)
//                {
//                    if (hash[i][j])
//                        image[i][j] = color;
//                }
//            }
//        }
//        return image;
//
//    }
//    void dfs(vector<vector<int>>& image, vector<vector<int>>& hash, int sr, int sc, int color, int init, int(&dir)[4][2])
//    {
//        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != init)
//            return;
//        else
//        {
//            if (init == color)
//                image[sr][sc] = color + 1;//避免需要改的颜色和改成颜色相同而死循环
//            else
//                image[sr][sc] = color;
//            hash[sr][sc] = 1;
//            for (int i = 0; i < 4; ++i)
//            {
//                dfs(image, hash, sr + dir[i][0], sc + dir[i][1], color, init, dir);
//            }
//        }
//    }
//};
//
//
//int main()
//{
//    Solution s;
//    vector < vector<int>> image = { {1,1,1} ,{1,1,0},{1,0,1} };
//    int sr = 1, sc = 1;
//    int color = 2;
//    s.floodFill(image, sr, sc, color);
//    int a = 1;
//    return 0;
//}




//200. 岛屿数量
//class Solution {
//public:
//    int numIslands(vector<vector<char>>& grid) {
//        //遍历扫描网格，每遇见一个陆地就搜索相邻所有陆地，并将其改为水，当一个块搜索完就数量加一
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        int ret = 0;
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[0].size(); ++j)
//            {
//                if (grid[i][j] == '1')
//                {
//                    ++ret;
//                    dfs(grid, i, j, dir);
//                }
//            }
//        }
//        return ret;
//    }
//
//    void dfs(vector<vector<char>>& grid, int row, int col, int(&dir)[4][2])
//    {
//        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == '0')
//            return;
//        else
//        {
//            grid[row][col] = '0';
//            for (auto& d : dir)
//            {
//                dfs(grid, row + d[0], col + d[1], dir);
//            }
//        }
//    }
//
//};



//695. 岛屿的最大面积
//class Solution {
//public:
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        //floodfill法，记录最大
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        int ret = 0;
//        for (int i = 0; i < grid.size(); ++i)
//        {
//            for (int j = 0; j < grid[0].size(); ++j)
//            {
//                int cur = 0;
//                dfs(grid, i, j, dir, cur);
//                ret = max(ret, cur);
//            }
//        }
//        return ret;
//    }
//
//    int dfs(vector<vector<int>>& grid, int row, int col, int(&dir)[4][2], int& cur)
//    {
//        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size() || grid[row][col] == 0)
//            return 0;
//        else
//        {
//            grid[row][col] = 0;
//            ++cur;
//            for (auto& e : dir)
//            {
//                dfs(grid, row + e[0], col + e[1], dir, cur);
//            }
//            return cur;
//        }
//    }
//};





//130. 被围绕的区域
//class Solution {
//public:
//    void solve(vector<vector<char>>& board) {
//        //因为未被捕获的区域，与其相连的所有格子中一定会至少有一个在矩阵边缘，
//        //所以我只找边缘的0，并将与其相连的区域标记，这块区域将不会被捕获，而其他所有0都会被捕获
//        vector<vector<bool>> hash(board.size(), vector<bool>(board[0].size(), true));//记录当前格子是否会被捕获，false则不会
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        int row = board.size(), col = board[0].size();
//        for (int i = 0; i < col; ++i)//第一行和最后一行
//        {
//            dfs(board, 0, i, dir, hash);
//            dfs(board, row - 1, i, dir, hash);
//        }
//        for (int i = 0; i < row; ++i)//第一列和最后一列
//        {
//            dfs(board, i, 0, dir, hash);
//            dfs(board, i, col - 1, dir, hash);
//        }
//        for (int i = 0; i < row; ++i)
//        {
//            for (int j = 0; j < col; ++j)
//            {
//                if (board[i][j] == 'O' && hash[i][j] == true)
//                    board[i][j] = 'X';
//            }
//        }
//    }
//
//    void dfs(vector<vector<char>>& board, int row, int col, int(&dir)[4][2], vector<vector<bool>>& hash)
//    {
//        if (row < 0 || col < 0 || row >= board.size() || col >= board[0].size()
//            || board[row][col] == 'X' || hash[row][col] == false)//若当前位置不合法，或已经捕获，或已确定不能捕获则跳过
//            return;
//        else
//        {
//            hash[row][col] = false;//因为初始格子是从边缘来，所以不能捕获
//            for (auto& e : dir)
//            {
//                dfs(board, row + e[0], col + e[1], dir, hash);
//            }
//        }
//    }
//};


//417. 太平洋大西洋水流问题
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
//        //从上下左右这四边，分别开始遍历搜索，搜索条件为大于等于当前位置
//        //左上和右下分别计算，若能流入大海记录，获得两个记录的格子及为答案
//        int row = heights.size(), col = heights[0].size();
//        vector<vector<bool>> lh(row, vector<bool>(col, false));//左上太平洋
//        vector<vector<bool>> rd(row, vector<bool>(col, false));//右下大西洋
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        for (int i = 0; i < col; ++i)
//        {
//            dfs(heights, 0, i, dir, lh, 0);
//            dfs(heights, row - 1, i, dir, rd, 0);
//        }
//        for (int i = 0; i < row; ++i)
//        {
//            dfs(heights, i, 0, dir, lh, 0);
//            dfs(heights, i, col - 1, dir, rd, 0);
//        }
//        vector<vector<int>> ret;
//        for (int i = 0; i < row; ++i)
//        {
//            for (int j = 0; j < col; ++j)
//            {
//                if (lh[i][j] && rd[i][j])
//                {
//                    ret.push_back({ i, j });
//                }
//            }
//        }
//        return ret;
//    }
//
//    void dfs(vector<vector<int>>& heights, int row, int col, int (&dir)[4][2], vector<vector<bool>>& hash, int pre)
//    {
//        if (row < 0 || col < 0 || row >= heights.size() || col >= heights[0].size() || heights[row][col] < pre)
//            return;
//        else
//        {
//            hash[row][col] = true;
//            int cur = heights[row][col];
//            for (auto& e : dir)
//            {
//                dfs(heights, row + e[0], col + e[1], dir, hash, cur);
//            }
//        }
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<vector<int>> heights = {{1, 2, 2, 3, 5}, {3, 2, 3, 4, 4}, {2, 4, 5, 3, 1}, {6, 7, 1, 4, 5}, {5, 1, 1, 2, 4}};
//    s.pacificAtlantic(heights);
//    return 0;
//}




//529. 扫雷游戏
//class Solution {
//public:
//    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
//        int dir[8][2] = { {1, 1}, {1, -1}, {1, 0}, {0, 1}, {0, -1}, {-1, 1}, {-1, 0}, {-1, -1} };
//        bool game_state = true;
//        dfs(board, click[0], click[1], dir, game_state);
//        return board;
//    }
//
//    void dfs(vector<vector<char>>& board, int r, int c, int(&dir)[8][2], bool& game)
//    {
//        if (r < 0 || c < 0 || r >= board.size() || c >= board[0].size() || game == false)
//            return;
//        if (board[r][c] == 'M')
//        {
//            board[r][c] = 'X';
//            game = false;
//            return;
//        }
//        if (board[r][c] == 'E')
//        {
//            int count = Count(board, r, c, dir);
//            if (count == 0)
//            {
//                board[r][c] = 'B';
//                for (auto& e : dir)
//                    dfs(board, r + e[0], c + e[1], dir, game);
//            }
//            else
//                board[r][c] = 48 + count;
//        }
//
//    }
//
//    //计算当前位置周围的地雷数量
//    int Count(vector<vector<char>>& board, int r, int c, int(&dir)[8][2])
//    {
//        int ret = 0;
//        for (auto& e : dir)
//        {
//            int nr = r + e[0];
//            int nc = c + e[1];
//            if (!(nr < 0 || nc < 0 || nr >= board.size() || nc >= board[0].size()))
//            {
//                if (board[nr][nc] == 'M')
//                    ++ret;
//            }
//        }
//        return ret;
//    }
//};



//LCR 130. 衣橱整理
//#include<iostream>
//#include<vector>
//using namespace std;

//class Solution {
//public:
//    int wardrobeFinishing(int m, int n, int cnt) {
//        int count = 0;
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        vector<vector<int>> grid(m, vector<int>(n, 0));
//        for (int i = 0; i < m; ++i)
//            for (int j = 0; j < n; ++j)
//                grid[i][j] = digit(i) + digit(j);
//
//        dfs(grid, dir, 0, 0, count, cnt);
//        return count;
//    }
//
//private:
//
//    void dfs(vector<vector<int>>& grid, int(&dir)[4][2], int row, int col, int& count, int cnt)
//    {
//        if (row < 0 || col < 0 || row >= grid.size() || col >= grid[0].size()
//            || grid[row][col] > cnt)
//            return;
//        ++count;
//        grid[row][col] = cnt + 1;
//        for (auto& e : dir)
//        {
//            dfs(grid, dir, row + e[0], col + e[1], count, cnt);
//        }
//    }
//    int digit(int x)
//    {
//        int ret = 0;
//        while (x)
//        {
//            ret += x % 10;
//            x /= 10;
//        }
//        return ret;
//    }
//
//};
//
//int main()
//{
//    Solution s;
//    cout << s.wardrobeFinishing(16, 16, 4);
//    return 0;
//}



//509. 斐波那契数(记忆化搜索)
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    Solution()
//    {
//        arr.resize(31, -1);
//    }
//    int fib(int n) {
//        if (arr[n] != -1)
//            return arr[n];
//        if (n == 1 || n == 0)
//        {
//            arr[n] = n;
//            return n;
//        }
//        arr[n] = fib(n - 1) + fib(n - 2);
//        return arr[n];
//    }
//private:
//    vector<int> arr;
//
//};



//62. 不同路径(记忆化搜索)
//#include<iostream>
//#include<vector>
//using namespace std;
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        //记忆化搜索
//        //递归，start到终点的路径等于右边到和下边到加起来，问题分解为右边和下边加起来的和，递归下去
//        //dfs就为 (x, y)到终点的路径
//        vector<vector<int>> grid(m, vector<int>(n, 0));
//        grid[m - 1][n - 1] = 1;//终点到终点的路径只有一条，就是不动
//        return dfs(grid, 0, 0);
//    }
//
//    int dfs(vector<vector<int>>& grid, int r, int c)
//    {
//        if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size())
//            return 0;
//        if (grid[r][c] != 0)//已经来过
//            return grid[r][c];
//        grid[r][c] = dfs(grid, r + 1, c) + dfs(grid, r, c + 1);
//        return grid[r][c];
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout << s.uniquePaths(3, 7);
//    return 0;
//}


//300. 最长递增子序列(记忆化搜索)
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        //记忆化搜索，遍历数组，从每个元素开始，再遍历这个元素后面的所有元素，
//        //若这个元素大于上个元素，则长度等于1 + 从个元素开始的最长长度
//        //dfs为从下标为i的元素开始，这个序列的最长子序列长度
//        vector<int> memory(nums.size());
//        memory[memory.size() - 1] = 1;
//        int ret = 1;
//        for (int i = nums.size() - 1; i >= 0; --i)
//        {
//            ret = max(ret, dfs(nums, i, memory));
//        }
//        return ret;
//    }
//
//    int dfs(vector<int>& nums, int i, vector<int>& memory)
//    {
//        if (memory[i])
//            return memory[i];
//        for (int j = i + 1; j < nums.size(); ++j)
//        {
//            if (nums[j] > nums[i]) {
//                memory[i] = max(memory[i], dfs(nums, j, memory) + 1);
//            }
//        }
//        return max(1, memory[i]);
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { 1,3,6,7,9,4,10,5,6 };
//    cout << s.lengthOfLIS(nums);
//    return 0;
//}


//375. 猜数字大小 II
//#include<vector>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    int getMoneyAmount(int n) {
//        //遍历1~n，初始数字选择，然后二分，计算每个不同的初始位置的最终结果，最后找最小值
//        //dfs就为区间[left, right]最坏情况最小金额， 答案为两边较大的加上选择的初始节点
//        int memory[205][205] = { 0 };
//        return dfs(memory, 1, n);
//    }
//
//    int dfs(int(&memory)[205][205], int left, int right)
//    {
//        if (left >= right)
//            return 0;
//        if (memory[left][right])
//            return memory[left][right];
//        int ret = INT_MAX;
//        for (int i = left; i <= right; ++i)
//        {
//            ret = min(ret, max(dfs(memory, left, i - 1), dfs(memory, i + 1, right)) + i);
//        }
//        memory[left][right] = ret;
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//void f()
//{
//	int t = 2;
//	static int a = 1;
//	cout << a << endl;
//}
//int main()
//{
//	int t = 2;
//	f();
//	return 0;
//}





//#include<iostream>
//#include<string>
//#include<unordered_map> 
//
//using namespace std;
//
//int main() {
//	string S = "ANQNANBNQNANQNQNBNINQNQNANQNINANQNANBNQNANQNQNBNBNQNQNANQNINANQNANBNQNANQNQNBNINQNQNANQNINBNQNANBNQN";
//	//从第i个位置起,获取以它为头的1~10长度的字串，然后遍历计数 
//	//设置一个hash判断这个字串是否找过
//	unordered_map <string> hash
//		return 0;
//}


//#include<iostream>
//#include<string>
//#include<unordered_map>
//using namespace std;
//class Solution {
//public:
//    int longestPalindromicSubsequence(string s, int k) {
//        //寻找以i为中心和以 i、i+1为中心的回文
//        //中心两边的字符差就是需要的操作次数，只要操作次数还够，就可以变为回文
//        int n = s.size();
//        unordered_map<int, int> hash;//两字符差值的最小距离
//        for (int i = 0; i < 26; ++i) {
//            if (i <= 13)
//                hash[i] = i;
//            else
//                hash[i] = hash[i - 1] - 1;
//        }
//        int ret = 1;
//        //中心为单个
//        for (int i = 0; i < n; ++i) {
//            int cur_k = k;
//            int cur_ret = 1;
//            int left = i - 1, right = i + 1;
//            while (left >= 0 && right < n && cur_k >= 0) {
//                cur_k -= hash[abs(s[left] - s[right])];
//                if (cur_k >= 0) {
//                    cur_ret += 2;
//                }
//                --left; ++right;
//            }
//            ret = max(ret, cur_ret);
//        }
//        //中心为两个
//        for (int i = 0; i < n - 1; ++i) {
//            int cur_k = k - hash[abs(s[i] - s[i + 1])];
//            if (cur_k < 0) continue;
//            int cur_ret = 2;
//            int left = i - 1, right = i + 2;
//            while (left >= 0 && right < n && cur_k >= 0) {
//                cur_k -= hash[abs(s[left] - s[right])];
//                if (cur_k >= 0) {
//                    cur_ret += 2;
//                }
//                --left; ++right;
//            }
//            ret = max(ret, cur_ret);
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    cout << s.longestPalindromicSubsequence("wehzr", 3);
//    return 0;
//}


//class Solution {
//public:
//    int minCost(vector<int>& nums) {
//        //dfs为前两个元素下标为i、j的最小值
//        int n = nums.size();
//        vector<vector<int>> dp(n, vector<int>(n));
//        return dfs(nums, dp, 0, 1);
//
//    }
//    int dfs(vector<int>& nums, vector<vector<int>>& dp, int i, int j)
//    {
//        if (j >= nums.size() - 1)
//        {
//            if (j == nums.size() - 1) return max(nums[i], nums[j]);
//            else return nums[i];
//        }
//        if (dp[i][j]) return dp[i][j];
//        int a = max(nums[j], nums[j + 1]) + dfs(nums, dp, i, j + 2);
//        int b = max(nums[i], nums[j]) + dfs(nums, dp, j + 1, j + 2);
//        int c = max(nums[i], nums[j + 1]) + dfs(nums, dp, j, j + 2);
//        dp[i][j] = min(min(a, b), c);
//        return dp[i][j];
//
//    }
//};


//#include<iostream>
//using namespace std;
//// decltype的一些使用使用场景
//template<class T1, class T2>
//void F(T1 t1, T2 t2)
//{
//	decltype(t1 * t2) ret;
//	cout << typeid(ret).name() << endl;
//}
//int main()
//{
//
//	return 0;
//}



//329. 矩阵中的最长递增路径
//class Solution {
//public:
//    int longestIncreasingPath(vector<vector<int>>& matrix) {
//        //dfs为从ij位置开始的最长路径，并且用个哈希将这个位置的最长路径记录
//        //当遇到有存储路径长度的地方，当前方向的最长路径直接为 当前已有长度加上hash[当前位置]
//        //因为移动条件是值递增，所以衔接以前记录的路径时，之前走过的路径不会再走，因为之前走过的都是比当前小的，后面要走的都是比当前大的
//        int m = matrix.size(), n = matrix[0].size();
//        vector<vector<int>> hash(m, vector<int>(n));
//        int dir[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
//        int ret = 0;
//        for (int i = 0; i < m; ++i)
//        {
//            for (int j = 0; j < n; ++j)
//            {
//                ret = max(ret, dfs(matrix, i, j, dir, hash, -1));
//            }
//        }
//        return ret;
//    }
//    int dfs(vector<vector<int>>& matrix, int i, int j, int(&dir)[4][2], vector<vector<int>>& hash, int pre)
//    {
//        if (i < 0 || j < 0 || i >= matrix.size() || j >= matrix[0].size()
//            || matrix[i][j] <= pre)
//            return 0;
//        if (hash[i][j])  return hash[i][j];
//        int ret = 0;
//        for (auto& e : dir)
//        {
//            ret = max(ret, 1 + dfs(matrix, i + e[0], j + e[1], dir, hash, matrix[i][j]));
//        }
//        hash[i][j] = ret;
//        return ret;
//    }
//};



//2208. 将数组和减半的最少操作次数
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int halveArray(vector<int>& nums) {
//        priority_queue<double> pq;
//        double sum = 0;
//        for (auto& e : nums)
//        {
//            sum += e;
//            pq.push(e);
//        }
//        double need = sum / 2;
//        int ret = 0;
//        while (need > 0)
//        {
//            ++ret;
//            double half = pq.top() / 2;
//            need -= half;
//            pq.pop();
//            pq.push(half);
//        }
//        return ret;
//    }
//};
//int main()
//{
//    Solution s;
//    vector<int> v = { 6,58,10,84,35,8,22,64,1,78,86,71,77 };
//    cout << s.halveArray(v);
//    return 0;
//}


//179. 最大数
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    string largestNumber(vector<int>& nums) {
//        int zero = 0;
//        int n = nums.size();
//        vector<string> vs(n);
//        for (int i = 0; i < n; ++i)
//        {
//            vs[i] = to_string(nums[i]);
//            if (nums[i] == 0) ++zero;
//        }
//        if (zero == n)
//            return "0";
//        sort(vs.begin(), vs.end(), [](string& s1, string& s2)->bool {return s1 + s2 > s2 + s1; });
//        string ret;
//        for (auto& e : vs)
//            ret += e;
//        return ret;
//
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { 34323,3432 };
//    cout << s.largestNumber(nums) << endl;
//    return 0;
//}



//376. 摆动序列（贪心策略）
//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        //贪心策略：当前减去前面是正则尽可能大，是负则尽可能小，如：9 5 10 优先度高于 9 8 10
//        //遍历数组，找到转折点，转折点的位置为前面所有的最大/最小,相等则忽略
//        if (nums.size() == 1) return 1;
//        int ret = 1;//初始长度为1，为数组第一个元素
//        int pre = nums[0];
//        bool flag = 0;//正负，1正 0负
//        int i = 1;//当前位置（下标）
//        for (i; i < nums.size(); ++i)//寻找第一个转折点确定初始正负
//        {
//            if (nums[i] == nums[i - 1]) continue;
//            else if (nums[i] > nums[i - 1])
//            {
//                flag = 1;
//                pre = nums[i];
//                ++ret;
//                ++i;
//                break;
//            }
//            else
//            {
//                flag = 0;
//                pre = nums[i];
//                ++ret;
//                ++i;
//                break;
//            }
//        }
//        for (i; i < nums.size(); ++i)
//        {
//            if (nums[i] == pre) continue;
//            if (flag)//如果前面为正
//            {
//                if (nums[i] < pre)
//                {
//                    flag = 0;
//                    ++ret;
//                }
//            }
//            else//如果前面为负
//            {
//                if (nums[i] > pre)
//                {
//                    flag = 1;
//                    ++ret;
//                }
//            }
//            pre = nums[i];
//        }
//        return ret;
//    }
//};

//#include<iostream>
//#include<vector>
//#include<cstdlib>
//#include<time.h>
//using namespace std;
//
//int main()
//{
//	cout << rand();
//	srand((unsigned int)time(0));
//	int a = 1;
//	while (a)
//	{
//		cout << rand() << endl;
//		cin >> a;
//	}
//	//int a = 0;
//	//cin >> a;
//	//switch (a)
//	//{
//	//case 1:
//	//	printf("111");
//	//	cout << "test" << endl;
//	//	break;
//	//case 2:
//	//	cout << "222" << endl;
//	//case 3:
//	//	cout << "333" << endl;
//	//}
//	return 0;
//}

//int get_rand(int a)
//{
//	char arr;
//	long long p = (long long)&arr;
//	if (p < 0) p *= -1;
//	p /= a;
//	p %= 8;
//	return p % 8;
//}
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 1;
//	while (a++)
//		cout << get_rand(a) + 1 << endl;
//	return 0;
//}


//300. 最长递增子序列（贪心）
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        //贪心策略：在动态规划时，发现我们只考虑最后一个元素是否能接在后面，然后如果想后面能接更多元素，当前最后一个元素要尽可能小
//        //这样我们就记录长度为i的子序列，末尾元素的最小值为d[i]
//        //遍历数组，再遍历记录数组，当前元素小于等于某个长度并小于那个长度的之前最小值时，就替换，若都大于则新增一个最长长度
//        int n = nums.size();
//        vector<int> v(1);
//        v[0] = nums[0];
//        for (int i = 1; i < n; ++i)
//        {
//            if (nums[i] > v[v.size() - 1])
//            {
//                v.push_back(nums[i]);
//                continue;
//            }
//            for (auto& e : v)
//            {
//                if (nums[i] <= e)
//                {
//                    e = nums[i];
//                    break;
//                }
//            }
//        }
//        return v.size();
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { 4,10,4,3,8,9 };
//    cout << s.lengthOfLIS(nums);
//    return 0;
//}



//334. 递增的三元子序列
//class Solution {
//public:
//    bool increasingTriplet(vector<int>& nums) {
//        //贪心策略：记录长度为i的子序列的最小末尾，
//        //遍历数组，依次比较，若大于前一个长度的末尾小于当前长度的末尾，则当前长度末尾更新为这个更小的
//        //若都大于，则总长度加一
//        vector<int> v(1);
//        v[0] = nums[0];
//        int n = nums.size();
//        for (int i = 1; i < n; ++i)
//        {
//            if (nums[i] > v[v.size() - 1])
//            {
//                v.push_back(nums[i]);
//                if (v.size() >= 3) return true;
//                continue;
//            }
//            for (int j = 0; j < v.size(); ++j)
//            {
//                if (nums[i] <= v[j])
//                {
//                    v[j] = nums[i];
//                    break;
//                }
//            }
//        }
//        return false;
//    }
//};


//674. 最长连续递增序列
//class Solution {
//public:
//    int findLengthOfLCIS(vector<int>& nums) {
//        int ret = 1;
//        int cur = 1;
//        int pre = nums[0];
//        for (int i = 1; i < nums.size(); ++i)
//        {
//            if (pre < nums[i])
//            {
//                ++cur;
//            }
//            else
//            {
//                ret = max(ret, cur);
//                cur = 1;
//            }
//            pre = nums[i];
//        }
//        ret = max(ret, cur);
//        return ret;
//    }
//};



//121. 买卖股票的最佳时机
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        //贪心策略：低买高卖
//        //对于每个位置，只需知道它前面最小的值，即可知道当前能赚的最多，每个位置的最大即为答案
//        int n = prices.size();
//        if (n == 1) return 0;
//        int ret = 0;
//        vector<int> lowest(n);
//        lowest[0] = prices[0];
//        for (int i = 1; i < n; ++i)
//        {
//            lowest[i] = min(prices[i], lowest[i - 1]);
//            ret = max(ret, prices[i] - lowest[i]);
//        }
//        return ret;
//    }
//};


//122. 买卖股票的最佳时机 II
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        //贪心策略：低买高卖
//        int n = prices.size();
//        if (n == 1) return 0;
//        int ret = 0, max, min, pre = prices[0];
//        if (prices[1] > prices[0])
//        {
//            min = prices[0];
//            max = prices[1];
//        }
//        else
//        {
//            min = prices[1];
//            max = INT_MIN;
//        }
//        for (int i = 1; i < prices.size(); ++i)
//        {
//            if (prices[i] < pre && pre == max)//pre即为峰值，此时卖出
//            {
//                ret += max - min;
//                min = prices[i];
//                max = INT_MIN;
//            }
//            if (prices[i] < min)
//                min = prices[i];
//            else if (prices[i] > max)
//                max = prices[i];
//            pre = prices[i];
//        }
//        if (prices[n - 2] <= prices[n - 1] && prices[n - 1] == max)
//            ret += max - min;
//        return ret;
//    }
//};


//1005. K 次取反后最大化的数组和
//class Solution {
//public:
//    int largestSumAfterKNegations(vector<int>& nums, int k) {
//        //升序排序，从小开始翻转，若为负翻转，然后下一个，记录不论是否翻转的最小正值(含0)，若数组所有元素都不为负，则一直翻转最小正值那个
//        sort(nums.begin(), nums.end());
//        int min_i = 0;
//        for (int i = 0; i < nums.size(); ++i)
//        {
//            if (nums[i] >= 0)
//            {
//                min_i = i;
//                break;
//            }
//        }
//        int i = 0;
//        while (k > 0 && i < nums.size())
//        {
//            if (nums[i] <= 0)
//            {
//                nums[i] *= -1;
//                --k;
//                min_i = nums[i] < nums[min_i] ? i : min_i;
//                ++i;
//            }
//            else
//            {
//                nums[min_i] *= -1;
//                --k;
//            }
//        }
//        while (k > 0)
//        {
//            nums[min_i] *= -1;
//            --k;
//        }
//        long long ret = 0;
//        for (auto& e : nums)
//            ret += e;
//        return ret;
//    }
//};



//2418. 按身高排序
//class Solution {
//public:
//    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//        int n = names.size();
//        vector<pair<int, int>> vp(n);
//        for (int i = 0; i < n; ++i)
//        {
//            vp[i].first = heights[i];
//            vp[i].second = i;
//        }
//        sort(vp.begin(), vp.end(),
//            [](pair<int, int>& x, pair<int, int>& y)->bool {return x.first > y.first; });
//        vector<string> ret(n);
//        for (int i = 0; i < n; ++i)
//        {
//            ret[i] = names[vp[i].second];
//        }
//        return ret;
//    }
//};



//870. 优势洗牌
//class Solution {
//public:
//    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size();
//        vector<int> hash1(n);//nums1的元素对应下标，用于排序
//        vector<int> hash2(n);//nums2的
//        for (int i = 0; i < n; ++i)
//            hash1[i] = hash2[i] = i;
//        sort(hash1.begin(), hash1.end(), [&nums1](int i, int j)->bool {return nums1[i] < nums1[j]; });
//        sort(hash2.begin(), hash2.end(), [&nums2](int i, int j)->bool {return nums2[i] < nums2[j]; });
//
//        vector<int> ret(n);
//        int begin2 = 0;
//        int end2 = n - 1;
//        for (int i = 0; i < n; ++i)
//        {
//            if (nums1[hash1[i]] <= nums2[hash2[begin2]]) {
//                ret[hash2[end2]] = nums1[hash1[i]];
//                --end2;
//            }
//            else {
//                ret[hash2[begin2]] = nums1[hash1[i]];
//                ++begin2;
//            }
//        }
//
//        return ret;
//    }
//};



//409. 最长回文串
//class Solution {
//public:
//    int longestPalindrome(string s) {
//        int hash[52] = { 0 };//26个字母的大小写数量
//        for (auto& e : s) {
//            if (e >= 'a') {
//                ++hash[e - 'a'];
//            }
//            else {
//                ++hash[e - 'A' + 26];
//            }
//        }
//        int len = 0;
//        for (auto& e : hash) {
//            len += 2 * (e / 2);
//        }
//        if (len < s.size()) {
//            len += 1;
//        }
//        return len;
//    }
//};



//942. 增减字符串匹配
//class Solution {
//public:
//    vector<int> diStringMatch(string s) {
//        //一个最小i，一个最大j, 若当前为I且下个为I,则当前为未用的最小
//        //若当前为D则为未用最大
//        int i = 0;
//        int j = s.size();
//        vector<int> ret;
//        for (auto& e : s) {
//            if (e == 'I') {
//                ret.push_back(i++);
//            }
//            else {
//                ret.push_back(j--);
//            }
//        }
//        ret.push_back(i);
//        return ret;
//    }
//};


//455. 分发饼干
//class Solution {
//public:
//    int findContentChildren(vector<int>& g, vector<int>& s) {
//        int ret = 0;
//        sort(g.begin(), g.end());
//        sort(s.begin(), s.end());
//        //贪心策略，若饼干能满足多个孩子，则给最大胃口的那个
//        int gi = 0;//当前孩子的下标
//        for (int i = 0; i < s.size(); ++i)
//        {
//            if (gi >= g.size())
//                break;
//            if (s[i] >= g[gi]) {
//                ++ret;
//                ++gi;
//            }
//        }
//        return ret;
//    }
//};



//553. 最优除法
//class Solution {
//public:
//    string optimalDivision(vector<int>& nums) {
//        //因为要尽可能大，所以被除数尽可能大，除数尽可能小
//        //因为所有元素都大于等于2，所以首元素单独为被除数为最大情况，
//        //而后面按顺序连着除，就一直会使分母变小，如果改变顺序，可能会出现除以小数的情况，
//        //使最终除数变大，所以按顺序除就行
//        if (nums.size() == 1)
//            return to_string(nums[0]);
//        if (nums.size() == 2)
//        {
//            string ret;
//            ret += to_string(nums[0]);
//            ret += '/';
//            ret += to_string(nums[1]);
//            return ret;
//        }
//        string ret;
//        ret += to_string(nums[0]);
//        ret += '/';
//        ret += '(';
//        for (int i = 1; i < nums.size(); ++i)
//        {
//            if (i == nums.size() - 1)
//            {
//                ret += to_string(nums[i]);
//                ret += ')';
//            }
//            else {
//                ret += to_string(nums[i]);
//                ret += '/';
//            }
//        }
//        return ret;
//    }
//};


//45. 跳跃游戏 II（dp解法）
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        //dp[i]为到当前位置的最小次数，遍历dp[i 到 i + nums[i] ]，取最小
//        int n = nums.size();
//        vector<int> dp(n, INT_MAX);
//        dp[0] = 0;
//        for (int i = 0; i < n; ++i) {
//            for (int j = i + 1; j <= min(i + nums[i], n - 1); ++j)
//            {
//                dp[j] = min(dp[j], dp[i] + 1);
//            }
//        }
//        return dp[n - 1];
//    }
//};



//移动零
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        //双指针，一个指向待换位置(元素为0)，一个寻找非零，找到就交换
//        int cur, next;
//        cur = next = 0;
//        while (cur < nums.size())
//        {
//            if (nums[cur])
//                ++cur;
//            else
//            {
//                break;
//            }
//        }
//        next = cur + 1;
//        while (cur < nums.size() && next < nums.size())
//        {
//            while (next < nums.size() && nums[next] == 0)
//                ++next;
//            if (cur < nums.size() && next < nums.size())
//                swap(nums[cur], nums[next]);
//            ++cur;
//            ++next;
//        }
//    }
//};



//1089. 复写零
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr) {
//        vector<int> ret;
//        for (int i = 0; i < arr.size(); ++i)
//        {
//            if (ret.size() == arr.size())
//                break;
//            if (arr[i])
//                ret.push_back(arr[i]);
//            else
//            {
//                ret.push_back(0);
//                if (ret.size() == arr.size())
//                    break;
//                ret.push_back(0);
//            }
//        }
//        swap(arr, ret);
//    }
//};


//1089. 复写零（ 空间复杂度为O(1) ）
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    void duplicateZeros(vector<int>& arr) {
//        int pre = 0;
//        int cur = 0;
//        for (pre = 0; pre < arr.size(); ++pre)
//        {
//            if (arr[pre] == 0)
//                ++cur;
//            if (cur >= arr.size() - 1)
//                break;
//            ++cur;
//        }
//        if (cur == arr.size())
//        {
//            arr[arr.size() - 1] = 0;
//            cur -= 2;
//            --pre;
//        }
//        while (pre < cur)
//        {
//            if (arr[pre]) {
//                arr[cur] = arr[pre];
//                --pre;
//                --cur;
//            }
//            else {
//                arr[cur] = arr[cur - 1] = arr[pre];
//                --pre;
//                cur -= 2;
//            }
//        }
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> arr = { 1,0,2,3,0,4,5,0 };
//    s.duplicateZeros(arr);
//    return 0;
//}



//202. 快乐数
//class Solution {
//public:
//    bool isHappy(int n) {
//        unordered_set<int> hash;
//        int cur = 0;
//        while (n != 1)
//        {
//            int temp = 0;
//            while (n)
//            {
//                temp += pow(n % 10, 2);
//                n /= 10;
//            }
//            n = temp;
//            if (hash.count(n))
//                return false;
//            else
//                hash.insert(n);
//        }
//        return true;
//    }
//};



//盛最多水的容器
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        //双指针，一首一尾，较小那个先动，找到大于等于另一边的位置
//        int right = height.size() - 1;
//        int left = 0;
//        int ret = 0;
//        ret = max(ret, abs(right - left) * min(height[right], height[left]));
//        while (left < right)
//        {
//            if (height[left] < height[right])
//            {
//                while (left < right && height[left] < height[right])
//                {
//                    ret = max(ret, abs(right - left) * min(height[right], height[left]));
//                    ++left;
//                }
//            }
//            else if (height[left] > height[right])
//            {
//                while (left < right && height[left] > height[right])
//                {
//                    ret = max(ret, abs(right - left) * min(height[right], height[left]));
//                    --right;
//                }
//            }
//            else
//                ++left;
//            ret = max(ret, abs(right - left) * min(height[right], height[left]));
//        }
//        return ret;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> v = { 1,8,6,2,5,4,8,3,7 };
//    cout << s.maxArea(v) << endl;
//    return 0;
//}



//611. 有效三角形的个数
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int triangleNumber(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int ret = 0;
//        int n = nums.size();
//        for (int i = 0; i <= n - 3; ++i)
//        {
//            int k = i;//k在这赋值则复杂度为 n^2 ，很精妙
//            for (int j = i + 1; j <= n - 2; ++j)
//            {
//                //int k = j + 1;//若k在这赋值则时间复杂度为( O(n^3) )
//                while (k <= n - 1 && nums[i] + nums[j] > nums[k])
//                    ++k;
//                ret += max(k - j - 1, 0);
//            }
//        }
//        return ret;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> v = { 48,66,61,46,94,75 };
//    cout << s.triangleNumber(v) << endl;
//    return 0;
//}


//LCR 179. 查找总价格为目标值的两个商品(哈希做法)
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& price, int target) {
//        unordered_set<int> hash;
//        for (auto& e : price)
//            hash.insert(e);
//        for (auto& e : price)
//        {
//            if (hash.count(target - e))
//                return { e, target - e };
//        }
//        return vector<int>();
//    }
//};


//LCR 179. 查找总价格为目标值的两个商品（双指针）
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& price, int target) {
//        int left = 0;
//        int right = price.size() - 1;
//        while (left <= right)
//        {
//            if (price[left] + price[right] == target)
//                return { price[left], price[right] };
//            else if (price[left] + price[right] > target)
//                --right;
//            else
//                ++left;
//        }
//        return {};
//    }
//};


//三数之和
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        //因为要和为零，所以排序，从正负和0中选择
//        int n = nums.size();
//        vector<vector<int>> ret;
//        //遍历数组每个元素a，从a后面找到 和为 -a
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < n; ++i)
//        {
//            if ((i != 0 && nums[i] == nums[i - 1]))
//                continue;
//            if (nums[i] > 0)
//                break;
//            int left = i + 1;
//            int right = n - 1;
//            int target = -nums[i];
//            while (left < right)
//            {
//                if (nums[left] + nums[right] == target) {
//                    ret.push_back({ nums[i], nums[left], nums[right] });
//                    ++left;
//                }
//                else if (nums[left] + nums[right] > target)
//                    --right;
//                else
//                    ++left;
//                while (i < left - 1 && left < right && nums[left] == nums[left - 1])
//                    ++left;
//                while (left < right && right + 1 < n && nums[right] == nums[right + 1])
//                    --right;
//            }
//
//        }
//
//        return ret;
//    }
//};



//18. 四数之和
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        //思路和三数求和相同，不过这次先固定一个数，然后求三数和为 target - 这个数
//        sort(nums.begin(), nums.end());
//        vector<vector<int>> ret;
//        int n = nums.size();
//        for (int i = 0; i < n; ++i) {
//            if (i - 1 >= 0 && nums[i] == nums[i - 1])    continue;
//            for (int j = i + 1; j < n; ++j) {
//                if (j - 1 >= i + 1 && nums[j] == nums[j - 1])   continue;
//                long long sum = (long long)target - (long long)nums[i] - (long long)nums[j];
//                if (nums[j] >= 0 && sum < 0) break;
//                int left = j + 1, right = n - 1;
//                while (left < right) {
//                    if (nums[left] + nums[right] == sum)
//                    {
//                        ret.push_back({ nums[i], nums[j], nums[left], nums[right] });
//                        ++left;
//                    }
//                    else if (nums[left] + nums[right] < sum)
//                        ++left;
//                    else
//                        --right;
//                    while (left < right && left - 1 > j && nums[left] == nums[left - 1])
//                        ++left;
//                    while (left < right && right + 1 < n && nums[right] == nums[right + 1])
//                        --right;
//                }
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = { 1,0,-1,0,-2,2 };
//    s.fourSum(nums, 0);
//    return 0;
//}



//209. 长度最小的子数组
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        //滑动窗口，先从开头找到满足条件的数组，然后每次添加一个元素，并在满足条件的情况下从最前面一直减去元素
//        int len = 0;
//        int cur = 0;//当前长度
//        int sum = 0;//当前滑动窗口的数组和
//        int i = 0;
//        int front = 0;//滑动窗口的开头
//        while (sum < target && i < nums.size()) {
//            sum += nums[i];
//            ++cur;
//            ++i;
//        }
//        len = sum >= target ? cur : 0;
//        for (i; i < nums.size(); ++i) {
//            sum += nums[i];
//            ++cur;
//            while (sum - nums[front] >= target) {
//                sum -= nums[front];
//                --cur;
//                ++front;
//            }
//            len = min(len, cur);
//        }
//        while (sum - nums[front] >= target) {
//            sum -= nums[front];
//            --cur;
//            ++front;
//        }
//        len = min(len, cur);
//        return len;
//    }
//};



//无重复字符的最长字串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        //哈希+滑动窗口，看当前字符是否有了，没有则直接添加，有了则从窗口开头删除，直到删除和当前一样的字符
//        int ret = 0;
//        int front = 0;//窗口的头下标
//        int cur = 0;//当前长度
//        unordered_set<char> hash;
//        for (int i = 0; i < s.size(); ++i) {
//            if (hash.count(s[i]))
//            {
//                while (hash.count(s[i]))
//                {
//                    hash.erase(s[front++]);
//                    --cur;
//                }
//                hash.insert(s[i]);
//                ++cur;
//            }
//            else {
//                hash.insert(s[i]);
//                ++cur;
//                ret = max(ret, cur);
//            }
//        }
//
//        return ret;
//    }
//};



//最大连续1的个数Ⅲ
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int longestOnes(vector<int>& nums, int k) {
//        //滑动窗口，遇到零还有次数的话就变1，遇到1直接加上
//        //记录原本的零和一，当次数不够时，一直删除窗口开头直到删到变化后的一就有次数了
//
//        int ret = 0;
//        int cur = 0;//当前长度
//        int front = 0;//窗口开头
//        vector<int> hash(nums);
//        for (int i = 0; i < nums.size(); ++i) {
//            if (nums[i] == 1) {//为1直接++
//                ++cur;
//                ret = max(ret, cur);
//            }
//            else {
//                if (k) {//次数还有则变0为1
//                    nums[i] = 1;
//                    ++cur;
//                    --k;
//                    ret = max(ret, cur);
//                }
//                else {
//                    //找到为最初为0的位置，还回变化次数
//                    while (front < i && hash[front])
//                    {
//                        ++front;
//                        --cur;
//                    }
//                    //这里两种情况，一种是这里已经变化，还回变化次数即可，
//                    //另一种是这里变化前后都是0，因为到这里已经没有变化次数（实际这种情况只会存在于k最初就为0）
//                    //情况二直接跳过不操作即可
//                    if (nums[front] == 1)//情况一
//                    {
//                        nums[front] = 0;
//                        ++front;
//                        nums[i] = 1;
//                    }
//                    else
//                        ++front;
//                }
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = { 1,1,1,0,0,0,1,1,1,1,0 };
//    cout << s.longestOnes(nums, 2) << endl;
//    return 0;
//}


//1658. 将 x 减到 0 的最小操作数
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int minOperations(vector<int>& nums, int x) {
//        //滑动窗口，求和为sum(nums) - x的最长长度的子数组，最小操作数就为nums的长度减去这个最长长度
//        long long sum = 0;
//        for (auto& e : nums)
//            sum += e;
//        long long target = sum - x;
//        if (target == 0) return nums.size();//target为0说明整个数组加起来刚好为x
//        int len = 0;//最长长度
//        int cur = 0;//当前长度
//        sum = 0;//当前窗口数组和
//        int front = 0;//窗口开始
//        for (int i = 0; i < nums.size(); ++i) {
//            sum += nums[i];
//            ++cur;
//            if (sum == target) {
//                len = max(len, cur);
//            }
//            else if (sum > target) {
//                while (front <= i && sum > target) {
//                    sum -= nums[front];
//                    --cur;
//                    ++front;
//                }
//                if (sum == target)
//                    len = max(len, cur);
//            }
//        }
//        if (len)
//            return nums.size() - len;
//        else
//            return -1;
//    }
//};
//int main() {
//    Solution s;
//    vector<int> nums = { 8828,9581,49,9818,9974,9869,9991,10000,10000,10000,9999,9993,9904,8819,1231,6309 };
//    int x = 134365;
//    cout << s.minOperations(nums, x) << endl;
//
//    return 0;
//}




//904. 水果成篮
//class Solution {
//public:
//    int totalFruit(vector<int>& fruits) {
//        //1 1 2 2 2 1 2 3 3 3
//        //两个滑动窗口，第一个只存储一种果子，如上面的1，第二个窗口紧随其后，但存储两种果子1和2
//        //遇到第三种果子后，结算最大数量，然后第一个窗口变为之前的后面一种果子2，然后重复上面的步骤
//        //滑动窗口左闭右开 [l, r)
//        int ret = 0;
//        int left1 = 0, right1 = 0;
//        int left2 = 0, right2 = 0;
//        int kind1 = fruits[0];
//        int kind2 = -1;
//        while (right1 < fruits.size() && right2 < fruits.size()) {
//            if (fruits[right1] == kind1)
//                ++right1;
//            else {
//                left2 = right2 = right1;
//                kind2 = fruits[left2];
//                while (right2 < fruits.size() && (fruits[right2] == kind1 || fruits[right2] == kind2))
//                    ++right2;
//                //两种情况，right2到末尾了，此时循环也该结束了
//                //情况二是遇到第三种水果，此时记录数量，然后将第一个篮子(窗口)从right1从新开始
//                ret = max(ret, right2 - left1);
//                if (right2 < fruits.size()) {
//                    left1 = right1;
//                    kind1 = fruits[right1];
//                }
//            }
//        }
//        ret = max(ret, right1 - left1);
//        return ret;
//    }
//};


//30. 串联所有单词的子串
//#include<iostream>
//#include<vector>
//#include<string>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        // 因为words组成的序列长度是固定的，所以可以维护一共固定长度的滑动窗口，判断是否满足条件
//        // 因为wrods中所有字符串长度相等，所以可以直接用哈希记录个数的方式，判断窗口中字符串是否成立
//        int m = words[0].size();  // words中每个字符串的长度
//        int n = words.size() * m; // 窗口长度
//        if (n > s.size())
//            return vector<int>();
//
//        vector<int> ret;
//        unordered_map<string, int> hash;
//        for (auto& e : words)
//            ++hash[e];
//
//        for (int i = 0; i < n; ++i) // 每个窗口初始位置都要试一下
//        {
//            Func(s, words, hash, ret, i);
//        }
//        return ret;
//    }
//
//    void Func(string& s, vector<string>& words,
//        unordered_map<string, int>& hash, vector<int>& ret,
//        int begin_front = 0) {
//        int m = words[0].size();  // words中每个字符串的长度
//        int n = words.size() * m; // 窗口长度
//        if (n + begin_front > s.size())
//            return;
//        unordered_map<string, int> cur; // 当前窗口的字符串存储情况
//        int front = begin_front;
//        for (int i = begin_front; i < n + begin_front; i += m) {
//            ++cur[s.substr(i, m)];
//        }
//        int flag = 1; // 判断当前窗口是否成立
//        for (auto& e : cur) {
//            if (e.second != hash[e.first]) {
//                flag = 0;
//                break;
//            }
//        }
//        cur.clear();
//        if (flag)
//            ret.push_back(front);
//        for (int i = n + begin_front; i < s.size(); i += n) {
//            if (i + n > s.size())
//                break;
//            for (int j = i; j < i + n; j += m) {
//                ++cur[s.substr(j, m)];
//            }
//            front += n;
//            int flag = 1; // 判断当前窗口是否成立
//            for (auto& e : cur) {
//                if (e.second != hash[e.first]) {
//                    flag = 0;
//                    break;
//                }
//            }
//            cur.clear();
//            if (flag)
//                ret.push_back(front);
//        }
//    }
//};
//
//int main() {
//    Solution t;
//    string s = "aaaaaaaaaaaaaa";
//    vector<string> words = { "aa","aa" };
//    t.findSubstring(s, words);
//    return 0;
//}


//76. 最小覆盖子串
//#include<string>
//#include<unordered_map>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    string minWindow(string s, string t) {
//        // 记录t的各个字母数量
//        // 从左到右滑动窗口，每次右端进入，若满足条件则可以一直pop左端
//        if (t.size() > s.size())
//            return string();
//        unordered_map<char, int> hash;
//        for (auto& e : t)
//            ++hash[e];
//        unordered_map<char, int> cur; // 当前窗口情况
//        int front = 0;                // 窗口头下标
//        int cur_len = 0;              // 当前窗口(字串)长度
//        int ret_len = INT_MAX;        // 返回字串长度
//        int ret_head = 0;             // 返回字串头下标
//        int i = 0;
//        for (i; i < s.size(); ++i) {
//            ++cur[s[i]];
//            int flag = 1; // 判断当前是否已经满足条件
//            for (auto& e : hash) {
//                if (cur[e.first] < e.second) // 当前窗口还不满足条件，一直进入
//                {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag) {
//                cur_len = ++i;
//                ret_len = min(ret_len, cur_len);
//                break;
//            }
//        }
//        while (cur[s[front]] - 1 >= hash[s[front]]) {
//            --cur[s[front]];
//            ++front;
//            --cur_len;
//        }
//        if (cur_len < ret_len) {
//            ret_head = front;
//            ret_len = cur_len;
//        }
//        for (i; i < s.size(); ++i) {
//            ++cur[s[i]];
//            ++cur_len;
//            // 因为前面已经满足条件，只需判断pop掉的头是否满足对应字符的数量即可
//            while (cur[s[front]] - 1 >= hash[s[front]]) {
//                --cur[s[front]];
//                ++front;
//                --cur_len;
//            }
//            if (cur_len < ret_len) {
//                ret_head = front;
//                ret_len = cur_len;
//            }
//        }
//        while (cur[s[front]] - 1 >= hash[s[front]]) {
//            --cur[s[front]];
//            ++front;
//            --cur_len;
//        }
//        if (cur_len < ret_len) {
//            ret_head = front;
//            ret_len = cur_len;
//        }
//
//        if (ret_len > s.size())
//            return string();
//        else
//            return s.substr(ret_head, ret_len);
//    }
//};
//
//int main() {
//    Solution st;
//    string s = "abc";
//    string t = "b";
//    cout << st.minWindow(s, t) << endl;
//
//    return 0;
//}



//704. 二分查找
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int first = 0;
//        int last = nums.size() - 1;
//        int mid = (first + last) / 2;
//        while (first <= last) {
//            if (nums[mid] == target)
//                return mid;
//            if (nums[mid] > target)
//                last = mid - 1;
//            else
//                first = mid + 1;
//            mid = (first + last) / 2;
//        }
//        return -1;
//    }
//};



//34. 在排序数组中查找元素的第一个和最后一个位置
//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size() - 1;
//        int mid = (left + right) / 2;
//        while (left <= right) {
//            if (nums[mid] == target)
//                break;
//            if (nums[mid] > target)
//                right = mid - 1;
//            else
//                left = mid + 1;
//            mid = (left + right) / 2;
//        }
//        if (left <= right)
//        {
//            int first = mid;
//            int last = mid;
//            while (first - 1 >= 0 && nums[first - 1] == target)
//                --first;
//            while (last + 1 < nums.size() && nums[last + 1] == target)
//                ++last;
//            return { first, last };
//        }
//        else
//            return { -1, -1 };
//    }
//};



//35. 搜索插入位置
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int left = 0;
//        int right = nums.size() - 1;
//        int mid = (left + right) / 2;
//        while (left <= right) {
//            if (nums[mid] == target)
//                return mid;
//            if (left == right)
//            {
//                if (target > nums[left])
//                    return left + 1;
//                else
//                    return left;
//            }
//            if (nums[mid] > target)
//                right = mid - 1;
//            else
//                left = mid + 1;
//            mid = (left + right) / 2;
//        }
//
//        return left;
//    }
//};



//852. 山脉数组的峰顶索引
//class Solution {
//public:
//    int peakIndexInMountainArray(vector<int>& arr) {
//        //二分，找到数组中间，若是山峰，则应该大于左边和右边,若不是，哪边有更大的就去计算那边
//        int left = 0;
//        int right = arr.size() - 1;
//        int mid = (left + right) / 2;
//        while (left <= right) {
//            if (mid - 1 >= 0 && mid + 1 < arr.size()
//                && arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
//                return mid;
//            if (arr[mid - 1] > arr[mid])
//                right = mid - 1;
//            else
//                left = mid + 1;
//            if (left + 1 == right)
//                return arr[left] > arr[right] ? left : right;
//            mid = (left + right) / 2;
//        }
//        return -1;
//    }
//};



//162. 寻找峰值
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        if (nums.size() == 1) return 0;
//        if (nums[0] >= nums[1]) return 0;
//        if (nums[nums.size() - 1] >= nums[nums.size() - 2]) return nums.size() - 1;
//        int left = 0;
//        int right = nums.size() - 1;
//        int mid = (left + right) / 2;
//        while (left < right)
//        {
//            if (nums[mid] >= nums[mid - 1] && nums[mid] >= nums[mid + 1])
//                return mid;
//            if (nums[mid] < nums[mid - 1])
//                right = mid;
//            else
//                left = mid;
//            mid = (left + right) / 2;
//        }
//        return left;
//    }
//};


//153. 寻找旋转排序数组中的最小值
//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    int findMin(vector<int>& nums) {
//        //由题可知：数组被分为两个升序数组，左一个右一个，并且其中一个数组所有元素都大于另一个的所有元素
//        //当包含两个数组时，左右边界为一个数组的最大和一个数组的最小
//        //但不论最大最小，大的数组总是大于小的数组，所以新的查询界限就向小的那边收缩
//        //mid用于判断当前查询范围是否包含两个数组，
//        //若包含两个数组，则mid大于两界限较大那边，或小于两界限较小那边，
//        //否则就只包含一个数组，这样左边边界就是最小
//
//        int left = 0;
//        int right = nums.size() - 1;
//        int mid = (left + right) / 2;
//        if (left + 1 == right)
//            return min(nums[left], nums[right]);
//        while (nums[mid] > max(nums[left], nums[right])
//            || nums[mid] < min(nums[left], nums[right]))
//        {
//            if (nums[mid] > max(nums[left], nums[right]))
//                left = mid;
//            else
//                right = mid;
//            mid = (left + right) / 2;
//            if (left + 1 == right)
//                return min(nums[left], nums[right]);
//        }
//        return nums[left];
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> n = { 3,4,5,1,2 };
//    cout << s.findMin(n) << endl;
//    return 0;
//}


//LCR 173. 点名
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int takeAttendance(vector<int>& records) {
//        //二分，因为不缺失的话下标和学号一一对应，
//        //所以，缺失的学号左边会对应，右边不对应
//        //找到中间点，中间点对应且右边不对应，或中间点不对应且左边对应
//        if (records[0] != 0) return 0;
//        if (records[records.size() - 1] == records.size() - 1) return records.size();
//        int left = 1;
//        int right = records.size() - 1;
//        int mid = (left + right) / 2;
//        while (left <= right) {
//            if (records[mid] == mid && records[mid + 1] != mid + 1)
//                return mid + 1;
//            if (records[mid] != mid && records[mid - 1] == mid - 1)
//                return mid;
//            if (records[mid] == mid)
//                left = mid;
//            else
//                right = mid - 1;
//            mid = (left + right) / 2;
//            if (left == right)
//            {
//                if (records[left] == left)
//                    return left + 1;
//                else
//                    return left;
//            }
//        }
//        return records.size();
//    }
//};
//int main() {
//    Solution s;
//    vector<int> v = { 0,2,3 };
//    cout << s.takeAttendance(v) << endl;
//    return 0;
//}



//724. 寻找数组的中心下标
//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    int pivotIndex(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);//下标0~i的元素和
//        int sum = 0;//总的元素和
//        dp[0] = nums[0];
//        sum += dp[0];
//        for (int i = 1; i < n; ++i) {
//            dp[i] = dp[i - 1] + nums[i];
//            sum += nums[i];
//        }
//        if (0 == dp[n - 1] - nums[0]) return 0;
//        for (int i = 1; i < n; ++i)
//        {
//            if (dp[i - 1] == sum - dp[i])
//                return i;
//        }
//        return -1;
//    }
//};
//
//int main()
//{
//    Solution s;
//    vector<int> nums = { 0,-1,-1,-1,-1,-1 };
//    cout << s.pivotIndex(nums) << endl;
//    return 0;
//}



//238. 除自身以外数组的乘积
//class Solution {
//public:
//    vector<int> productExceptSelf(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp_left(n, 1);//下标0~i的乘积
//        dp_left[0] = nums[0];
//        vector<int> dp_right(n, 1);//下标i~n-1的乘积
//        dp_right[n - 1] = nums[n - 1];
//        for (int i = 1; i < n; ++i) {
//            dp_left[i] = dp_left[i - 1] * nums[i];
//        }
//        for (int i = n - 2; i >= 0; --i) {
//            dp_right[i] = dp_right[i + 1] * nums[i];
//        }
//
//        vector<int> answer(n);
//        answer[0] = dp_right[1];
//        answer[n - 1] = dp_left[n - 2];
//        for (int i = 1; i < n - 1; ++i) {
//            answer[i] = dp_left[i - 1] * dp_right[i + 1];
//        }
//        return answer;
//    }
//};


//560. 和为 K 的子数组
//#include<iostream>
//#include<vector>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    int subarraySum(vector<int>& nums, int k) {
//        //dp[i]为前缀和
//        //dp[i][j] = dp[0][j] - dp[0][i]
//        int n = nums.size();
//        int ret = 0;
//        vector<int> dp(n);
//        unordered_map<int, int> hash;
//        hash[0] = 1;
//        dp[0] = nums[0];
//        ++hash[dp[0]];
//        if (dp[0] == k)  ++ret;
//        for (int i = 1; i < n; ++i)
//        {
//            dp[i] = dp[i - 1] + nums[i]; 
//            ret += hash[dp[i] - k];
//            ++hash[dp[i]];
//        }
//
//        return ret;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = { -1, -1, 1 };
//    cout << s.subarraySum(nums, 0) << endl;
//    return 0;
//}



//974. 和可被 K 整除的子数组
//class Solution {
//public:
//    int subarraysDivByK(vector<int>& nums, int k) {
//        //前缀和dp
//        //根据同余原理：(a - b) % n == 0可得a % n == b % n
//        int n = nums.size();
//        long long sum = 0;
//        sum = nums[0];
//        unordered_map<int, int> hash;
//        ++hash[(sum % k + k) % k];
//        int ret = sum % k == 0 ? 1 : 0;
//        for (int i = 1; i < n; ++i) {
//            sum += nums[i];
//            ret += hash[(sum % k + k) % k];
//            if (sum % k == 0)
//                ++ret;
//            ++hash[(sum % k + k) % k];
//        }
//
//        return ret;
//    }
//};


//525. 连续数组
//class Solution {
//public:
//    int findMaxLength(vector<int>& nums) {
//        //前缀和+哈希，哈希记录0比1多的数量和此前缀和的长度
//        //一边进行前缀和的记录，一边用前面的哈希
//        //当前前缀和的01数量相同的话当前就是最大值，否则减去对应哈希记录的前缀和
//        //若有相同01数量的前缀和，哈希只记录较小那个，因为哈希记录的是将会被减去的，越小越好
//        int n = nums.size();
//        vector<int> dp0(n), dp1(n);//前缀和
//        unordered_map<int, int> hash;//first为0的数量-1的数量，second为此前缀和的长度
//        nums[0] == 0 ? (dp0[0] = 1, dp1[0] = 0) : (dp0[0] = 0, dp1[0] = 1);
//        hash[dp0[0] - dp1[0]] = 1;
//        int ret = 0;
//        for (int i = 1; i < n; ++i) {
//            nums[i] == 0 ? (dp0[i] = dp0[i - 1] + 1, dp1[i] = dp1[i - 1])
//                : (dp0[i] = dp0[i - 1], dp1[i] = dp1[i - 1] + 1);
//            if (dp0[i] == dp1[i])
//                ret = max(ret, i + 1);
//            else {
//                if (hash.count(dp0[i] - dp1[i])) {
//                    ret = max(ret, i + 1 - hash[dp0[i] - dp1[i]]);
//                }
//            }
//            if (hash.count(dp0[i] - dp1[i]) == 0)//若已经存在，因为前面的前缀和肯定比现在的短，所以省略
//                hash[dp0[i] - dp1[i]] = i + 1;
//        }
//
//        return ret;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = { 0,1,1,1,1,1,0,0,0 };
//    cout << s.findMaxLength(nums) << endl;
//    return 0;
//}



//1314. 矩阵区域和
//class Solution {
//public:
//    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
//        //dp[i][j]为(0, 0)到(i, j)的矩阵和
//        int m = mat.size(), n = mat[0].size();
//        vector<vector<int>> answer(m, vector<int>(n));
//        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
//        for (int i = 1; i <= m; ++i) {
//            for (int j = 1; j <= n; ++j) {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + mat[i - 1][j - 1];
//            }
//        }
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                int r_1 = max(0, i - k) + 1, r_2 = min(m - 1, i + k) + 1;
//                int c_1 = max(0, j - k) + 1, c_2 = min(n - 1, j + k) + 1;
//                answer[i][j] = dp[r_2][c_2] - dp[r_1 - 1][c_2] - dp[r_2][c_1 - 1] + dp[r_1 - 1][c_1 - 1];
//            }
//        }
//        return answer;
//    }
//};
//
//int main() {
//    Solution s;
//    vector<vector<int>> mat = { {1,2,3}, {4,5,6}, {7,8,9} };
//    s.matrixBlockSum(mat, 1);
//    return 0;
//}


//面试题 01.01. 判定字符是否唯一
//class Solution {
//public:
//    bool isUnique(string astr) {
//        //根据鸽巢原理，大于26必定重复
//        if (astr.size() > 26)
//            return false;
//        //位图
//        int bitmap = 0;
//        for (auto& e : astr) {
//            if ((bitmap & (1 << (e - 'a'))) != 0)
//                return false;
//            bitmap |= 1 << (e - 'a');
//        }
//        return true;
//    }
//};



//371. 两整数之和
//class Solution {
//public:
//    int getSum(int a, int b) {
//        //^本质是无进位加法
//        //&可以获得进位
//        //先^得到无进位加法的结果，然后算出进位，两者再无进位地加(^)直到无进位
//        while (b) {
//            int x = a ^ b;
//            unsigned int c = (unsigned)(a & b) << 1;
//            a = x;
//            b = c;
//        }
//        return a;
//    }
//};


//137. 只出现一次的数字 II
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int ret = 0;
//        for (int i = 0; i < 32; ++i) {
//            int sum = 0;//每一位的和
//            for (auto& e : nums) {
//                sum += (e >> i) & 1;
//            }
//            ret += sum % 3 << i;
//        }
//        return ret;
//
//    }
//};


//260. 只出现一次的数字 III
//class Solution {
//public:
//    vector<int> singleNumber(vector<int>& nums) {
//        //所有数异或后得到的是缺少的那两个数的异或
//        //当这个数的某一位为1时，说明两个答案中这一位有一个为1，一个为0
//        //将nums中的数分为两种，一种是这一位为1，另一种是这一位为0
//        //若一个数出现两次，则这两次都会在同一区分的组中，而只出现一次的两个数将在不同组
//        int sum = 0;
//        for (auto& e : nums)
//            sum ^= e;
//        int l = 0;//哪一比特位出现了1
//        for (l; l < 32; ++l) {
//            if (sum & (1 << l))
//                break;
//        }
//        int x = 0;
//        int y = 0;
//        for (auto& e : nums) {
//            if (e & (1 << l))
//                x ^= e;
//            else
//                y ^= e;
//        }
//        return { x, y };
//    }
//};



//面试题 17.19. 消失的两个数字
//class Solution {
//public:
//    vector<int> missingTwo(vector<int>& nums) {
//        //1~N的异或再异或nums，得到两个缺少值的异或
//        //再以“260. 只出现一次的数字 III”的思想把这两个值拆分开来得到即可
//        int sum = 0;
//        for (int i = 1; i <= nums.size() + 2; ++i)
//            sum ^= i;
//        for (auto& e : nums)
//            sum ^= e;
//        int l = 0;//哪一比特位出现了1
//        for (l; l < 32; ++l) {
//            if (sum & (1 << l))
//                break;
//        }
//        int x = 0;
//        int y = 0;
//        for (auto& e : nums) {
//            if (e & (1 << l))
//                x ^= e;
//            else
//                y ^= e;
//        }
//        for (int i = 1; i <= nums.size() + 2; ++i) {
//            if (i & (1 << l))
//                x ^= i;
//            else
//                y ^= i;
//        }
//        return { x, y };
//    }
//};
//
//int main() {
//    Solution s;
//    s.missingTwo({2, 3});
//    return 0;
//}



//1576. 替换所有的问号
//class Solution {
//public:
//    string modifyString(string s) {
//        s = '0' + s + '0';
//        for (int i = 0; i < s.size(); ++i) {
//            if (s[i] == '?') {
//                for (int j = 0; j < 26; ++j) {
//                    if (j + 'a' != s[i - 1] && j + 'a' != s[i + 1]) {
//                        s[i] = j + 'a';
//                        break;
//                    }
//                }
//            }
//        }
//        return s.substr(1, s.size() - 2);
//    }
//};



//495. 提莫攻击
//class Solution {
//public:
//    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
//        int ret = 0;
//        for (int i = 0; i < timeSeries.size() - 1; ++i) {
//            int next = timeSeries[i + 1];//下一次攻击在什么时候
//            int cur = timeSeries[i];//这次攻击在什么时候
//            int time = duration;//持续时间
//            while (cur < next && time > 0) {
//                ++ret;
//                ++cur;
//                --time;
//            }
//        }
//
//        ret += duration;
//        return ret;
//    }
//};



//6. Z 字形变换
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        string ret;
//        int n = s.size();
//        for (int i = 0; i < numRows; ++i) {
//            for (int j = 0; j < n; j += max(2 * numRows - 2, 1)) {
//                if (i == 0)
//                    ret += s[j];
//                else {
//                    if (j + i < n)
//                        ret += s[j + i];
//                    if (j + i != j + i + 2 * numRows - 2 - 2 * i && j + i + 2 * numRows - 2 - 2 * i < n)
//                        ret += s[j + i + 2 * numRows - 2 - 2 * i];
//                }
//            }
//        }
//        return ret;
//    }
//};
//int main() {
//    Solution s;
//    cout << s.convert("A", 1) << endl;
//    return 0;
//}



//38. 外观数列
//class Solution {
//public:
//    string countAndSay(int n) {
//        if (n == 1)
//            return "1";
//        return Func(countAndSay(n - 1));
//    }
//
//    string Func(string&& s) {
//        string ret;
//        int num = 1;
//        char ch = s[0];
//        for (int i = 1; i < s.size(); ++i) {
//            if (s[i] == ch)
//                ++num;
//            else {
//                ret += to_string(num);
//                ret += ch;
//                ch = s[i];
//                num = 1;
//            }
//        }
//        ret += to_string(num);
//        ret += ch;
//        return ret;
//    }
//};



//1419. 数青蛙（O(n)复杂度超时）
//class Solution {
//public:
//    int minNumberOfFrogs(string croakOfFrogs) {
//        //用数组模拟青蛙，每一个元素就是一只青蛙，并且存储当前这只青蛙的叫声，若青蛙处于空闲则为'0'
//        vector<char> gg;
//        char arr[6] = "croak";
//        for (auto& e : croakOfFrogs) {
//            if (e == 'c') {//某只青蛙开始叫，若有之前发现的空闲青蛙，则让它叫，没有的话就加一只青蛙
//                int flag1 = 0;//判断是否是之前的青蛙叫
//                for (auto& g : gg) {
//                    if (g == '0') {
//                        g = 'c';
//                        flag1 = 1;
//                        break;
//                    }
//                }
//                if (flag1 == 0)
//                    gg.push_back('c');
//            }
//            else {
//                char pre;//当前叫声的前一声
//                for (int i = 1; i < 5; ++i) {
//                    if (arr[i] == e) {
//                        pre = arr[i - 1];
//                        break;
//                    }
//                }
//                int flag2 = 0;//判断声音是否合法
//                for (auto& g : gg) {
//                    if (g == pre) {
//                        g = e;
//                        flag2 = 1;
//                        if (g == 'k')//这只青蛙叫完了
//                            g = '0';
//                        break;
//                    }
//                }
//                if (flag2 == 0)
//                    return -1;
//            }
//        }
//        for (auto& g : gg)
//            if (g != '0')
//                return -1;
//        return gg.size();
//    }
//};
//int main() {
//    Solution s;
//    string str = "ccckkk";
//
//    return 0;
//}
//
//
//1419. 数青蛙（O(n)复杂度超时）
//1419. 数青蛙
//class Solution {
//public:
//    int minNumberOfFrogs(string croakOfFrogs) {
//        //用数组模拟青蛙，每一个元素就是一只青蛙，并且存储当前这只青蛙的叫声，若青蛙处于空闲则为'k'（最后的叫声）
//        unordered_multiset<char> gg;
//        unordered_map<char, char> hash;//当前叫声对应的前一个叫声
//        hash.insert({ 'c', 'k' });
//        hash.insert({ 'r', 'c' });
//        hash.insert({ 'o', 'r' });
//        hash.insert({ 'a', 'o' });
//        hash.insert({ 'k', 'a' });
//        hash.insert({ 'r', 'c' });
//        for (auto& e : croakOfFrogs) {
//            //某只青蛙开始叫，若有之前发现的空闲青蛙，则让它叫，没有的话就加一只青蛙
//            char pre = hash[e];//前面的叫声
//            if (pre == 'k') {
//                if (gg.count(pre)) {
//                    auto it = gg.find(pre);
//                    gg.erase(it);
//                }
//                gg.insert(e);
//            }
//            else {
//                if (gg.count(pre)) {
//                    auto it = gg.find(pre);
//                    gg.erase(it);
//                    gg.insert(e);
//                }
//                else
//                    return -1;
//            }
//        }
//        for (auto& g : gg)
//            if (g != '0')
//                return -1;
//        return gg.size();
//    }
//};
//
//
//
//1419. 数青蛙
//class Solution {
//public:
//    int minNumberOfFrogs(string croakOfFrogs) {
//        string s = "croak";
//        vector<int> gg(5);//croak的叫声
//        unordered_map<char, int> hash;//叫声对应gg的下标
//        for (int i = 0; i < 5; ++i)
//            hash[s[i]] = i;
//        int ret = 0;
//        for (auto& e : croakOfFrogs) {
//            ++gg[hash[e]];
//            if (e != 'c') {
//                if (gg[hash[e]] > gg[hash[e] - 1])
//                    return -1;
//            }
//            if (gg[4] == 1) {//k为1，有一只青蛙叫完了
//                for (int i = 0; i < 5; ++i)
//                    --gg[i];
//            }
//            ret = max(ret, gg[0]);
//        }
//        for (int i = 0; i < 5; ++i)
//            if (gg[i])
//                return -1;
//        return ret;
//    }
//};



//912. 排序数组（未ac，这题就是自己写个快排，但搞了半天，还是超时，
// 看了笔记、问了ai，还是半懂不懂，真不清楚之前是怎么在赛场上手搓快排的，是已经没以前思想灵活了吗，暂时放弃）
//class Solution {
//public:
//    vector<int> sortArray(vector<int>& nums) {
//        mysort(nums, 0, nums.size() - 1);
//        return nums;
//    }
//
//    void mysort(vector<int>& nums, int begin, int end) {
//        if (begin > end)
//            return;
//        if (end - begin < 2) {
//            if (nums[begin] > nums[end])
//                swap(nums[begin], nums[end]);
//            return;
//        }
//        int key = nums[begin];
//        int left = begin, right = begin + 1;
//        while (right <= end) {
//            if (nums[right] < key) {
//                ++left;
//                swap(nums[left], nums[right]);
//            }
//            ++right;
//        }
//        swap(nums[left], nums[begin]);
//        mysort(nums, begin, left - 1);
//        mysort(nums, left + 1, end);
//    }
//};
//
//int main() {
//    Solution s;
//    vector<int> nums = { 5,2,3,1 };
//    s.sortArray(nums);
//    return 0;
//}


//215. 数组中的第K个最大元素
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        vector<int> arr(2 * 10e4 + 5);
//        for (auto& e : nums) {
//            ++arr[e + 10e4];
//        }
//        --k;
//        int cur = arr.size() - 1;
//        while (k--) {
//            while (arr[cur] == 0)
//                --cur;
//            --arr[cur];
//        }
//        while (arr[cur] == 0)
//            --cur;
//        return cur - 10e4;
//    }
//};




//面试题 17.14.最小K个数
//class Solution {
//public:
//    vector<int> smallestK(vector<int>& arr, int k) {
//        //快排，统计key前面的数，当key前面的元素个数大于k时，找它左边，小于等于时这些数就是答案
//        //若小于，则会提前入一些元素，剩下比较k时都应减去这些元素来比较
//        if (arr.size() == 0)
//            return vector<int>();
//        vector<int> ret(k);
//        my_half_sort(arr, 0, arr.size() - 1, k, ret);
//        return ret;
//    }
//
//    void my_half_sort(vector<int>& arr, int begin, int end, int k, vector<int>& ret) {
//        int key = arr[begin];
//        int left = begin, right = left + 1;
//        while (right <= end) {
//            if (arr[right] < key) {
//                ++left;
//                swap(arr[left], arr[right]);
//            }
//            ++right;
//        }
//        swap(arr[left], arr[begin]);
//
//        if (left == k) {
//            for (int i = 0; i < k; ++i)
//                ret[i] = arr[i];
//            return;
//        }
//        else if (left < k)
//            my_half_sort(arr, left + 1, end, k, ret);
//        else
//            my_half_sort(arr, begin, left - 1, k, ret);
//
//    }
//};
//
//int main() {
//    Solution sl;
//    vector<int> arr = { 1,3,5,7,2,4,6,8 };
//    sl.smallestK(arr, 4);
//    return 0;
//}



//912. 排序数组
//class Solution {
//public:
//    vector<int> sortArray(vector<int>& nums) {
//        mysort(nums, 0, nums.size() - 1);
//        return nums;
//    }
//
//    void mysort(vector<int>& nums, int begin, int end) {
//        if (begin > end)
//            return;
//        int key = nums[begin];
//        int left = begin, right = end;
//        while (left < right) {
//            while (left < right && nums[right] >= key)
//                --right;
//            while (left < right && nums[left] <= key)
//                ++left;
//            if (left < right)
//                swap(nums[left], nums[right]);
//        }
//        swap(nums[left], nums[begin]);
//        mysort(nums, begin, left - 1);
//        mysort(nums, left + 1, end);
//    }
//};
//
//
//int main() {
//    Solution sl;
//    vector<int> nums = { 5,2,3,1 };
//    sl.sortArray(nums);
//    return 0;
//}


//912. 排序数组（归并排序）
//class Solution {
//public:
//    vector<int> sortArray(vector<int>& nums) {
//        vector<int> temp(nums.size());
//        my_sort(nums, 0, nums.size() - 1, temp);
//        return nums;
//    }
//
//private:
//    void my_sort(vector<int>& nums, int left, int right, vector<int>& temp) {
//        if (left >= right)//自然有序
//            return;
//        my_sort(nums, left, (left + right) / 2, temp);//排左边
//        my_sort(nums, (left + right) / 2 + 1, right, temp);//排右边
//        int l = left;
//        int r = (left + right) / 2 + 1;
//        //合并
//
//        int cur = left;
//        while (l <= (left + right) / 2 && r <= right) {
//            if (nums[l] <= nums[r])
//                temp[cur++] = nums[l++];
//            else
//                temp[cur++] = nums[r++];
//        }
//        while (l <= (left + right) / 2)
//            temp[cur++] = nums[l++];
//        while (r <= right)
//            temp[cur++] = nums[r++];
//        for (int i = left; i <= right; ++i)
//            nums[i] = temp[i];
//    }
//};




//LCR 170. 交易逆序对的总数（完美利用归并排序，真要多多试下分解问题和做出假设之类的东西，说不定哪天我自己就能想出这种有难度极其考验思维的题呢）
//class Solution {
//public:
//    int temp[50005];
//    long long ret;
//    int reversePairs(vector<int>& record) {
//        //利用归并排序和分治思想，将数组分为左右部分，分别找出全为左边部分的逆序和右边部分的逆序还有左边对于右边的逆序
//        //对于左边于右边，因为已经左右两边已经有序，所以可以通过比较某一个数，快速统计出后面所有逆序数，并且这一步也和归并排序完美契合
//
//        my_sort(record, 0, record.size() - 1);
//        return ret;
//
//    }
//private:
//    void my_sort(vector<int>& record, int left, int right) {
//        if (left >= right)
//            return;
//        int mid = (left + right) >> 1;
//        my_sort(record, left, mid);
//        my_sort(record, mid + 1, right);
//        int cur1 = left, cur2 = mid + 1;
//        int i = left;
//        while (cur1 <= mid && cur2 <= right) {
//            if (record[cur1] > record[cur2]) {
//                ret += mid - cur1 + 1;
//                temp[i++] = record[cur2++];
//            }
//            else
//                temp[i++] = record[cur1++];
//        }
//        while (cur1 <= mid)
//            temp[i++] = record[cur1++];
//        while (cur2 <= right)
//            temp[i++] = record[cur2++];
//        for (left; left <= right; ++left) {
//            record[left] = temp[left];
//        }
//    }
//};



//315. 计算右侧小于当前元素的个数
//class Solution {
//public:
//    int temp[100005];
//    int temp_hash[100005];
//    vector<int> countSmaller(vector<int>& nums) {
//        //归并排序降序，当左右两边有序时，可以用左边比较右边快速进行统计，这也是求全左全右中的右侧小于数
//        //因为和归并排序契合，只是在排序中加些统计，复杂度和归并排序一样
//        //一个哈希记录排序后的下标，因为返回的是最开始数的右侧最小数
//        vector<int> ret(nums.size());
//        vector<int> hash(nums.size());
//        for (int i = 0; i < hash.size(); ++i)
//            hash[i] = i;
//        my_sort(nums, 0, nums.size() - 1, ret, hash);
//        return ret;
//    }
//
//private:
//    void my_sort(vector<int>& nums, int left, int right, vector<int>& ret, vector<int>& hash) {
//        if (left >= right)
//            return;
//        int mid = (left + right) >> 1;
//        my_sort(nums, left, mid, ret, hash);
//        my_sort(nums, mid + 1, right, ret, hash);
//        int cur1 = left, cur2 = mid + 1, i = left;
//        while (cur1 <= mid && cur2 <= right) {
//            if (nums[cur1] > nums[cur2]) {
//                temp[i] = nums[cur1];
//                temp_hash[i] = hash[cur1];//因为是排序下标，当前下标已排好的顺序是存在hash里的，所以要通过hash映射才能获得正确结果
//                ret[hash[cur1]] += right - cur2 + 1;//记录真正位置
//
//                ++i; ++cur1;
//            }
//            else {
//                temp[i] = nums[cur2];
//                temp_hash[i] = hash[cur2];
//                ++i; ++cur2;
//            }
//        }
//        while (cur1 <= mid) {
//            temp[i] = nums[cur1];
//            temp_hash[i] = hash[cur1];
//            ++i; ++cur1;
//        }
//        while (cur2 <= right) {
//            temp[i] = nums[cur2];
//            temp_hash[i] = hash[cur2];
//            ++i; ++cur2;
//        }
//        for (left; left <= right; ++left) {
//            nums[left] = temp[left];
//            hash[left] = temp_hash[left];
//        }
//    }
//};
//int main() {
//    Solution sl;
//    vector<int> nums = { 1,9,7,8,5 };
//    sl.countSmaller(nums);
//    return 0;
//}



//493. 翻转对（大道至简，别老想着全用什么高级算法，像这道题想要计算正确的数量，
//    因为条件原因，只能在排序前硬算，而不能边排序边算，而你就陷入困境觉得必须找办法使得能一起算，最后不了了之只能又去看题解）
//class Solution {
//public:
//    int temp[50005];
//    int ret = 0;
//    int reversePairs(vector<int>& nums) {
//        //和归并排序契合，归并排序分组时左边下标小于右边下标，满足i<j,只要再满足nums[i] > 2*nums[j]则成立
//        //单左边和单右边逻辑和上面一样，将左边和右边看作一个单独数组即可
//        my_sort(nums, 0, nums.size() - 1);
//        return ret;
//    }
//
//private:
//    void my_sort(vector<int>& nums, int left, int right) {
//        if (left >= right)
//            return;
//        int mid = (left + right) >> 1;
//        my_sort(nums, left, mid);
//        my_sort(nums, mid + 1, right);
//        int cur1 = left, cur2 = mid + 1, i = left;
//        //因为即便nums[cur1]大于nums[cur2]，但此时却不满足翻转对，而提前将cur2放进数组可能会导致少计算的情况，所以直接先计算翻转对数量，这步骤复杂度为O(2n)，和合并数组是同一量级，不影响最终复杂度
//        while (cur1 <= mid && cur2 <= right) {
//            while (cur1 <= mid && nums[cur1] / 2.0 <= nums[cur2])
//                ++cur1;
//            if (cur1 <= mid) {
//                ret += mid - cur1 + 1;
//                ++cur2;
//            }
//        }
//        cur1 = left, cur2 = mid + 1;
//        while (cur1 <= mid && cur2 <= right) {
//            if (nums[cur1] > nums[cur2])
//                temp[i++] = nums[cur2++];
//            else
//                temp[i++] = nums[cur1++];
//        }
//        while (cur1 <= mid)
//            temp[i++] = nums[cur1++];
//        while (cur2 <= right)
//            temp[i++] = nums[cur2++];
//        for (left; left <= right; ++left)
//            nums[left] = temp[left];
//    }
//};
//int main() {
//    Solution sl;
//    vector<int> nums = { 1,3,2,3,1 };
//    sl.reversePairs(nums);
//    return 0;
//}



//2. 两数相加
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//};
//
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* cur1 = l1;//当前位置
//         ListNode* cur2 = l2;
//         ListNode* ret_head = new ListNode();
//         ListNode* ret = ret_head;
//         int add = 0;//进位
//         while (cur1 && cur2) {
//             int sum = cur1->val + cur2->val + add;
//             add = sum / 10;
//             ret->val = sum % 10;
//             cur1 = cur1->next;
//             cur2 = cur2->next;
//             if (cur1 || cur2 || add)
//                 ret->next = new ListNode();
//             ret = ret->next;
//         }
//         while (cur1) {
//             int sum = cur1->val + add;
//             add = sum / 10;
//             ret->val = sum % 10;
//             cur1 = cur1->next;
//             if (cur1 || add)
//                 ret->next = new ListNode();
//             ret = ret->next;
//         }
//         while (cur2) {
//             int sum = cur2->val + add;
//             add = sum / 10;
//             ret->val = sum % 10;
//             cur2 = cur2->next;
//             if (cur2 || add)
//                 ret->next = new ListNode();
//             ret = ret->next;
//         }
//         if (add) {
//             ret->val = add;
//             ret = ret->next;
//         }
//         ret = nullptr;
//         return ret_head;
//     }
// };
//
//int main() {
//    ListNode* l1 = new ListNode(2);
//    l1->next = new ListNode(4);
//    l1->next->next = new ListNode(3);
//    ListNode* l2= new ListNode(5);
//    l2->next = new ListNode(6);
//    l2->next->next = new ListNode(4);
//    Solution sl;
//    sl.addTwoNumbers(l1, l2);
//    return 0;
//}


//876. 链表的中间结点
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* middleNode(ListNode* head) {
//        int count = 0;
//        ListNode* cur = head;
//        while (cur) {
//            ++count;
//            cur = cur->next;
//        }
//        int mid = count / 2;
//        ListNode* ret = head;
//        while (mid--)
//            ret = ret->next;
//        return ret;
//    }
//};



//206. 反转链表
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        //若左右两边已经翻转，则将左边的头接上右边的尾即可完成翻转
//        //左右两边也如此递归解决
//        ListNode* ret = head;
//        while (ret && ret->next)
//            ret = ret->next;
//        my_reverse(head);
//        return ret;
//    }
//
//    void my_reverse(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)//一个节点或空节点
//            return;
//        ListNode* mid = head;//链表中间点，并且翻转后为右边尾节点
//        ListNode* pre = nullptr;//mid的前面一个节点，并且翻转后为左边头节点
//        ListNode* cur = head;
//        while (cur && cur->next) {
//            pre = mid;
//            mid = mid->next;
//            cur = cur->next->next;
//        }
//        pre->next = nullptr;//将链表分割
//        my_reverse(head);//翻转左边
//        my_reverse(mid);//翻转右边
//        mid->next = pre;//连接
//    }
//};



//143. 重排链表
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//
//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        // 找到中间点，将链表分割两部分，后面部分反转，然后两链表从头开始一个一个连起来即可
//        ListNode* cur = head;
//        ListNode* mid = head;    // 中间节点
//        ListNode* pre = nullptr; // 中间节点前面一个
//        while (cur && cur->next) {
//            pre = mid;
//            mid = mid->next;
//            cur = cur->next->next;
//        }
//        if (pre == nullptr) // 只有一个节点，直接返回
//            return;
//        pre->next = nullptr;            // 断开连接，避免形成环路
//        ListNode* L2 = my_reverse(mid); // 链表2开头
//        ListNode* L1 = head;
//        ListNode* N_L1 = L1->next; // 链表的下一个节点，避免前面连接后找不到下一个节点了
//        ListNode* N_L2 = L2->next;
//
//        do {
//            // 因为中间节点mid的选取原因，L2长度要么等于L1要么多一个，所以当N_L1为空时，L1为尾节点
//            //此时L1连接剩下的L2即可
//            if (N_L1 == nullptr) {
//                L1->next = L2;
//                break;
//            }
//            L1->next = L2;
//            L2->next = N_L1;
//            L1 = N_L1;
//            L2 = N_L2;
//            N_L1 = N_L1->next;
//            N_L2 = N_L2->next;
//        } while (L1 && L2);
//    }
//
//    ListNode* my_reverse(ListNode* head) {            // 反转链表
//        if (head == nullptr || head->next == nullptr) // 一个节点或空节点
//            return head;
//        ListNode* mid = head; // 链表中间点，并且翻转后为右边尾节点
//        ListNode* pre = nullptr; // mid的前面一个节点，并且翻转后为左边头节点
//        ListNode* cur = head;
//        ListNode* ret = cur; // 链表尾节点，反转后就是头节点
//        while (cur && cur->next) {
//            pre = mid;
//            mid = mid->next;
//            cur = cur->next->next;
//            if (cur == nullptr)
//                ret =
//                ret->next; // 因为cur是两个两个走，若此时cur为kong则说明ret走一个就为尾节点
//            else
//                ret = cur;
//        }
//        pre->next = nullptr; // 将链表分割
//        my_reverse(head);    // 翻转左边
//        my_reverse(mid);     // 翻转右边
//        mid->next = pre;     // 连接
//        return ret;
//    }
//};
//
//int main() {
//    ListNode* l1 = new ListNode(1);
//    l1->next = new ListNode(2);
//    l1->next->next = new ListNode(3);
//    l1->next->next->next = new ListNode(4);
//    l1->next->next->next->next = new ListNode(5);
//
//    Solution sl;
//    sl.reorderList(l1);
//    return 0;
//}



//23. 合并 K 个升序链表（遍历做法，时间复杂度为 logN * N 空间复杂度为 N）
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    vector<int> arr;
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        for (int i = 0; i < lists.size(); ++i) {
//            ListNode* cur = lists[i];
//            while (cur) {
//                arr.push_back(cur->val);
//                cur = cur->next;
//            }
//        }
//        if (arr.size() == 0)
//            return nullptr;
//        sort(arr.begin(), arr.end());
//
//        ListNode* head = new ListNode();
//        ListNode* cur = head;
//        for (int i = 0; i < arr.size(); ++i) {
//            cur->val = arr[i];
//            if (i != arr.size() - 1) {
//                cur->next = new ListNode();
//                cur = cur->next;
//            }
//        }
//
//        return head;
//    }
//};



//23. 合并 K 个升序链表（空间复杂度O(1)做法，时间复杂度nlogn）
///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode() : val(0), next(nullptr) {}
// *     ListNode(int x) : val(x), next(nullptr) {}
// *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// * };
// */
//class Solution {
//public:
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        //遍历数组，每个链表都和上个链表相加的结果相加
//        if (lists.size() == 0)
//            return nullptr;
//        ListNode* ret = nullptr;
//        for (int i = 0; i < lists.size(); ++i) {
//            ret = ListAdd(ret, lists[i]);
//        }
//        return ret;
//    }
//
//    ListNode* ListAdd(ListNode* L1, ListNode* L2) {
//        if (L1 == nullptr)
//            return L2;
//        if (L2 == nullptr)
//            return L1;
//        ListNode* head = new ListNode();//哨兵节点
//        ListNode* cur = head;
//        while (L1 && L2) {
//            if (L1->val < L2->val) {
//                cur->next = L1;
//                cur = cur->next;
//                L1 = L1->next;
//            }
//            else {
//                cur->next = L2;
//                cur = cur->next;
//                L2 = L2->next;
//            }
//        }
//
//        if (L1)
//            cur->next = L1;
//        if (L2)
//            cur->next = L2;
//        ListNode* ret = head->next;
//        delete head;
//        return ret;
//    }
//};


//LCR 159. 库存管理 III
//class Solution {
//public:
//    vector<int> inventoryManagement(vector<int>& stock, int cnt) {
//        my_sort(stock, 0, stock.size() - 1, cnt);
//        vector<int> ret(cnt);
//        for (int i = 0; i < cnt; ++i)
//            ret[i] = stock[i];
//        return ret;
//    }
//
//    void my_sort(vector<int>& stock, int begin, int end, int cnt) {
//        if (begin >= end)
//            return;
//        int key = stock[begin];
//        int left = begin, right = end;
//        while (left < right) {
//            while (left < right && stock[right] > key)
//                --right;
//            while (left < right && stock[left] <= key)
//                ++left;
//            swap(stock[left], stock[right]);
//        }
//        swap(stock[left], stock[begin]);
//        if (left - begin + 1 == cnt)
//            return;
//        else if (left - begin + 1 > cnt)
//            my_sort(stock, begin, left - 1, cnt);
//        else
//            my_sort(stock, left + 1, end, cnt - (left - begin + 1));
//    }
//};


//25. K 个一组翻转链表
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
//
//class Solution {
//public:
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        //将链表按k的长度截断，每段分别反转，然后连接
//        ListNode* cur = head;
//        ListNode* preTail = nullptr;//上一段链表反转后的尾节点，用于连接
//        ListNode* next = cur;//下一截链表的开头
//        ListNode* prev = nullptr;//next的前面一个节点，用于截断链表
//        ListNode* ret = head;
//        int n = k - 1;
//        while (n && ret) {
//            ret = ret->next;
//            --n;
//        }
//        if (n)
//            ret = head;
//        while (next) {
//            n = k;
//            while (n && next) {
//                prev = next;
//                next = next->next;
//                --n;
//            }
//            if (n)//如果n不为0则说明到最后一段了，且长度不够k
//            {
//                preTail->next = cur;
//                break;
//            }
//            prev->next = nullptr;//截断
//            if (preTail)
//                preTail->next = ListReverse(cur);
//            else
//                ListReverse(cur);
//            preTail = cur;
//            cur = next;
//        }
//
//        return ret;
//    }
//
//    ListNode* ListReverse(ListNode* head) {
//        ListNode* retHead = new ListNode();//哨兵节点
//        ListNode* cur = head;
//        ListNode* next = head->next;
//        while (cur) {
//            cur->next = retHead->next;
//            retHead->next = cur;
//            cur = next;
//            if(next)
//                next = next->next;
//        }
//        ListNode* ret = retHead->next;
//        delete retHead;
//        return ret;
//    }
//};
//
//int main() {
//    ListNode* l1 = new ListNode(1);
//    l1->next = new ListNode(2);
//    l1->next->next = new ListNode(3);
//    l1->next->next->next = new ListNode(4);
//    l1->next->next->next->next = new ListNode(5);
//
//    Solution sl;
//    sl.reverseKGroup(l1, 2);
//    return 0;
//}



//1. 两数之和
//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        //根据题意，答案只有一个，所以若出现重复元素，要么这两个元素就是答案，要么这两个或以上元素都不是答案
//        //第一种情况，hash里还没有存第二个，之间正常逻辑，第二种情况，其元素是无效值，直接替换即可
//        unordered_map<int, int> hash;//first为已出现数字，second为其下标
//        for (int i = 0; i < nums.size(); ++i) {
//            int cur = nums[i];
//            if (hash.count(target - cur)) {
//                return { hash[target - cur], i };
//            }
//            hash[cur] = i;
//        }
//        return vector<int>();
//    }
//};



//面试题 01.02.判定是否互为字符重排
//class Solution {
//public:
//    int arr1[26];
//    int arr2[26];
//    bool CheckPermutation(string s1, string s2) {
//        //因为是重排，所以字符顺序无所谓，两个哈希记录出现的字符个数
//        if (s1.size() != s2.size())
//            return false;
//        for (int i = 0; i < s1.size(); ++i) {
//            ++arr1[s1[i] - 'a'];
//            ++arr2[s2[i] - 'a'];
//        }
//        for (int i = 0; i < 26; ++i)
//            if (arr1[i] != arr2[i])
//                return false;
//        return true;
//    }
//};


//217. 存在重复元素
//class Solution {
//public:
//    bool containsDuplicate(vector<int>& nums) {
//        unordered_set<int> hash;
//        for (auto& e : nums) {
//            if (hash.count(e))
//                return true;
//            hash.insert(e);
//        }
//        return false;
//    }
//};


//219. 存在重复元素 II
//class Solution {
//public:
//    bool containsNearbyDuplicate(vector<int>& nums, int k) {
//        //哈希表，因为条件需要两相等元素下标的尽可能小，所以出现重复元素并判断后，
//        //这次出现的元素下标覆盖上次的即可，因为下一次再遇见重复元素，k - j 肯定比 k - i小， i < j
//        unordered_map<int, int> hash;//first为元素，second为其下标
//        for (int i = 0; i < nums.size(); ++i) {
//            if (hash.count(nums[i]) && i - hash[nums[i]] <= k)
//                return true;
//            hash[nums[i]] = i;
//        }
//        return false;
//    }
//};



//49. 字母异位词分组
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        //创建一个哈希数组，每次统计当前字符串字符个数，然后对比哈希数组，
//        //若存在，就属于对应下标那一组吗，若不存在，就创建一个新组
//        vector<vector<string>> ret;
//        vector<array<int, 26>> hash;
//        for (auto& s : strs) {
//            array<int, 26> tempArray = { 0 };
//            for (auto& ch : s)
//                ++tempArray[ch - 'a'];
//            int flag = -1;//判断是否有和tempArray完全相同的，有就flag赋值对应下标
//            for (int i = 0; i < hash.size(); ++i) {
//                int tempFlag = 1;//判断当前的哈希是否相等，0不等，1等
//                for (int j = 0; j < 26; ++j) {
//                    if (tempArray[j] != hash[i][j]) {
//                        tempFlag = 0;
//                        break;
//                    }
//                }
//                if (tempFlag) {
//                    flag = i;
//                    break;
//                }
//            }
//            if (flag == -1) {//新的字母异位词
//                hash.push_back(tempArray);
//                ret.push_back(vector<string>(1, s));
//            }
//            else {
//                ret[flag].push_back(s);
//            }
//        }
//
//        return ret;
//    }
//};
//
//int main() {
//    Solution sl;
//    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
//    sl.groupAnagrams(strs);
//    return 0;
//}



//14. 最长公共前缀
//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        //每次遍历数组第n个字符，若全都相等，则公共前缀加长
//        string ret;
//        int n = 0;
//        int nmax = 0x3f3f;
//        for (auto& s : strs)
//            nmax = min((int)s.size(), nmax);
//        while (n < nmax) {
//            int flag = 1;//判断当前字符是否全都相等
//            for (int i = 1; i < strs.size(); ++i)
//            {
//                if (strs[i][n] != strs[i - 1][n]) {
//                    flag = 0;
//                    break;
//                }
//            }
//            if (flag == 0)
//                break;
//            ++n;
//        }
//        return strs[0].substr(0, n);
//    }
//};


//5. 最长回文子串
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int retIndex = 0;//最长回文子串的中间下标
//        int numMax = 0;//最长回文子串的长度，奇数说明retIndex只有一个，偶数就有retIndex和它后面的一个
//        for (int i = 0; i < s.size(); ++i) {
//            int left = i - 1, right = i + 1;//回文子串长度为奇数的情况
//            int curNum = 1;//当前回文子串最长长度
//            while (left >= 0 && right < s.size() && s[left] == s[right]) {
//                --left; ++right;
//                curNum += 2;
//            }
//            if (curNum > numMax) {
//                numMax = curNum;
//                retIndex = i;
//            }
//            if (i + 1 < s.size() && s[i] == s[i + 1]) {//回文子串长度为偶数的情况
//                left = i - 1, right = i + 2;
//                curNum = 2;
//                while (left >= 0 && right < s.size() && s[left] == s[right]) {
//                    --left; ++right;
//                    curNum += 2;
//                }
//                if (curNum > numMax) {
//                    numMax = curNum;
//                    retIndex = i;
//                }
//            }
//        }
//        //通过回文子串中间点确定回文子串头节点，具体自己举例看看，回文子串长度奇偶不同计算稍有不同，
//        //为偶数时retIndex要后移一位
//        if ((numMax & 1) == 0)
//            retIndex++;
//        string retStr = s.substr(retIndex - numMax / 2, numMax);
//        return retStr;
//    }
//};
//
//int main() {
//    Solution sl;
//    string s = "cbbd";
//    sl.longestPalindrome(s);
//    return 0;
//}


//67. 二进制求和
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        string ret;
//        reverse(a.begin(), a.end());
//        reverse(b.begin(), b.end());
//        int i = 0;
//        int add = 0;
//        for (i; i < min(a.size(), b.size()); ++i) {
//            int cur = a[i] + b[i] - 96 + add;
//            add = cur / 2;
//            ret.push_back(cur % 2 + 48);
//        }
//        while (i < a.size()) {
//            int cur = a[i] - 48 + add;
//            add = cur / 2;
//            ret.push_back(cur % 2 + 48);
//            ++i;
//        }
//        while (i < b.size()) {
//            int cur = b[i] - 48 + add;
//            add = cur / 2;
//            ret.push_back(cur % 2 + 48);
//            ++i;
//        }
//        if (add)
//            ret.push_back(add + 48);
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};
//
//int main() {
//    Solution sl;
//    string a = "11";
//    string b = "1";
//    cout << sl.addBinary(a, b);
//    return 0;
//}

//1047. 删除字符串中的所有相邻重复项
//class Solution {
//public:
//    string removeDuplicates(string s) {
//        stack<char> st;
//        for (int i = 0; i < s.size(); ++i) {
//            char cur = s[i];
//            bool flag = 0;//判断当前字符是否被删除，没有就push
//            while (!st.empty() && st.top() == cur) {
//                flag = true;
//                st.pop();
//            }
//            if (flag == false)
//                st.push(cur);
//        }
//        string ret;
//        while (!st.empty()) {
//            ret.push_back(st.top());
//            st.pop();
//        }
//        reverse(ret.begin(), ret.end());
//        return ret;
//    }
//};



//844. 比较含退格的字符串
//class Solution {
//public:
//    bool backspaceCompare(string s, string t) {
//        vector<char> a(200);
//        vector<char> b(200);
//        int ai = 0, bi = 0;
//        for (auto& e : s) {
//            if (e == '#')
//                ai = max(ai - 1, 0);
//            else
//                a[ai++] = e;
//        }
//        for (auto& e : t) {
//            if (e == '#')
//                bi = max(bi - 1, 0);
//            else
//                b[bi++] = e;
//        }
//        if (ai != bi)
//            return false;
//        for (int i = 0; i < ai; ++i)
//            if (a[i] != b[i])
//                return false;
//        return true;
//    }
//};



//227. 基本计算器 II（处理了很久细节问题过了，但逻辑还是写得很乱，都是看哪错就改哪补哪，该改）
//class Solution {
//public:
//    int calculate(string s) {
//        vector<int> nums(3e5);
//        int nums_i = 0;//nums的尾下标，用于出入栈使用
//        int i = 0;
//        while (s[i] == ' ')
//            ++i;
//        while (i < s.size() && ('0' <= s[i] && s[i] <= '9'))
//            ++i;
//        string temp = s.substr(0, i);
//        nums[nums_i++] = my_stoi(temp);//将第一个数字放入数组，后面每次碰见运算符则操作
//        while (i < s.size()) {
//            if (s[i] == ' ') {
//                ++i;
//                continue;
//            }
//            int j = i + 1;
//            while (j < s.size() && (s[j] != '+' && s[j] != '-' && s[j] != '*' && s[j] != '/'))
//                ++j;
//            int len = j - i - 1;//当前运算符后面的数字的长度，用于后面遍历
//            temp = s.substr(i + 1, len);
//            int cur = my_stoi(temp);
//            if (s[i] == '*')
//                nums[nums_i - 1] *= cur;
//            else if (s[i] == '/')
//                nums[nums_i - 1] /= cur;
//            else if (s[i] == '-')
//                nums[nums_i++] = -1 * cur;
//            else
//                nums[nums_i++] = cur;
//            i = j;
//        }
//        long long ret = 0;
//        for (i = 0; i < nums_i; ++i)
//            ret += nums[i];
//        return ret;
//
//    }
//
//    int my_stoi(string& s) {
//        int sum = 0;
//        int index = 0;
//        int n = s.size();
//        for (int i = n - 1; i >= 0; --i) {
//            if (s[i] == ' ')
//                continue;
//            sum += (s[i] - 48) * pow(10, index++);
//        }
//        return sum;
//    }
//};
//
//int main() {
//    Solution sl;
//    string s = " 3+5 / 2 ";
//    cout << sl.calculate(s);
//    return 0;
//}


//227. 基本计算器 II（搞清晰每一步需要什么后，如何得到后，优化成功）
//class Solution {
//public:
//    int calculate(string s) {
//        //栈模拟，每次从当前（运算符）开始，遇到下一个运算符或者结尾，中间的即为本次需要处理的数字
//        vector<int> nums;
//        int i = 0;
//        while (i < s.size() && (s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/'))
//            ++i;
//        string temp = s.substr(0, i);
//        nums.push_back(my_stoi(temp));//将第一个数字放入数组，后面每次碰见运算符则操作
//        while (i < s.size()) {
//            int j = i + 1;
//            while (j < s.size() && (s[j] != '+' && s[j] != '-' && s[j] != '*' && s[j] != '/'))
//                ++j;
//            int len = j - i - 1;//两运算符间的距离，即待处理数字
//            temp = s.substr(i + 1, len);
//            int cur = my_stoi(temp);
//            if (s[i] == '*')
//                nums[nums.size() - 1] *= cur;
//            else if (s[i] == '/')
//                nums[nums.size() - 1] /= cur;
//            else if (s[i] == '-')
//                nums.push_back(-1 * cur);
//            else
//                nums.push_back(cur);
//            i = j;
//        }
//        long long ret = 0;
//        for (auto& e : nums)
//            ret += e;
//        return ret;
//
//    }
//
//    int my_stoi(string& s) {
//        int sum = 0;
//        int index = 0;
//        int n = s.size();
//        for (int i = n - 1; i >= 0; --i) {
//            if (s[i] == ' ')
//                continue;
//            sum += (s[i] - 48) * pow(10, index++);
//        }
//        return sum;
//    }
//};




//394. 字符串解码
//class Solution {
//public:
//    string ret;
//
//    string decodeString(string s) {
//        //若遇到数字，则一直遍历到']'以操作当前的k[encoded_string]
//        int i = 0;
//        while (i < s.size()) {
//            int j = i;
//            if ('0' <= s[i] && s[i] <= '9') {
//                int count = 0;//记录遇到的'['个数，若遇到过的话，']'也应相应地跳过几次
//                while (s[j] != ']' || count != 1) {
//                    if (s[j] == '[')
//                        ++count;
//                    if (s[j] == ']')
//                        --count;
//                    ++j;
//                }
//                //循环结束j将会指在对应最后一个']'的位置
//                //取得[]里的编码，递归解决括号里的问题
//                Func(s.substr(i, j - i + 1));
//            }
//            else
//                ret += s[i];
//            i = j + 1;//不论那种情况，现在i位于带处理的位置
//        }
//        return ret;
//    }
//
//    //处理k[encoded_string ]
//    void Func(const string& s) {
//        int num = 0;//数字的长度
//        while (s[num] != '[')
//            ++num;
//        int k = stoi(s.substr(0, num));
//        //num此时的值也标志着'['的位置
//        string add = s.substr(num + 1, s.size() - num - 2);//减去数字的长度和[]的长度就为需要添加的字符串的长度
//        while (k--)
//            decodeString(add);
//    }
//};
//
//int main() {
//    Solution sl;
//    string s = "3[a]2[bc]";
//    cout << sl.decodeString(s);
//    return 0;
//}




//946. 验证栈序列
//class Solution {
//public:
//    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
//        //模拟,当前栈顶不是popped对应的数据，就push，是的话就pop
//        //若pushed走完，poped却没能走完，或走完栈不为空，则false
//        if (pushed.size() != popped.size())  return false;
//        stack<int> st;
//        int pop_i = 0;//popped的下标
//        for (int i = 0; i < pushed.size(); ++i) {
//            if (st.empty() || st.top() != popped[pop_i])
//                st.push(pushed[i]);
//            while (!st.empty() && st.top() == popped[pop_i]) {
//                st.pop();
//                ++pop_i;
//            }
//        }
//        if (st.empty())
//            return true;
//        else
//            return false;
//    }
//};




//429. N 叉树的层序遍历（还是要加强对边界和特殊情况的处理能力）
///*
//// Definition for a Node.
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//*/
//
//class Solution {
//public:
//    vector<vector<int>> levelOrder(Node* root) {
//        queue<pair<Node*, int>> q; // first为节点，second为层数
//        q.push({ root, 0 });
//        vector<vector<int>> ret;
//        while (!q.empty()) {
//            Node* cur = q.front().first;
//            int floor = q.front().second;
//            if (cur) {
//                for (auto& e : cur->children) {
//                    if (e) {
//                        q.push({ e, floor + 1 });
//                    }
//                }
//            }
//            if (cur && floor >= ret.size()) {
//                ret.push_back({ cur->val });
//            }
//            else if (cur) {
//                ret[floor].push_back(cur->val);
//            }
//            q.pop();
//        }
//        return ret;
//    }
//};



//103. 二叉树的锯齿形层序遍历
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//        //层序遍历，偶数层逆序
//        vector<vector<int>> ret;
//        queue<TreeNode*> q;
//        q.push(root);
//        while (!q.empty()) {
//            int n = q.size();//这一层节点个数
//            vector<int> temp;
//            for (int i = 0; i < n; ++i) {
//                TreeNode* cur = q.front();
//                q.pop();
//                if (cur) {
//                    temp.push_back(cur->val);
//                    q.push(cur->left);
//                    q.push(cur->right);
//                }
//            }
//            if (ret.size() % 2 == 1)//若ret的size为奇数，说明当前插入的为偶数层，逆序
//                reverse(temp.begin(), temp.end());
//            if (!temp.empty())
//                ret.push_back(temp);
//        }
//        return ret;
//    }
//};



//662. 二叉树最大宽度（直接层序，简单优化后还是超时， 再次优化后有超空间）
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    int widthOfBinaryTree(TreeNode* root) {
//        //层序遍历
//        //每一层从遇到非空才开始push，双指针去寻找下一个非空，push两指针之间的节点，空节点需要push的话还是push空
//        int ret = 0;
//        deque<TreeNode*> dq;
//        dq.push_back(root);
//        while (!dq.empty()) {
//            int n = dq.size();//当前层的节点个数
//
//            int dis = 0;//当前层的有效节点个数
//            while (n && dq[0] == nullptr)//找第一个非空
//            {
//                dq.pop_front();
//                --n;
//            }
//            if (n) {
//                //此时n不为0说明必定有一个非空节点
//                ++dis;
//                dq.push_back(dq[0]->left);
//                dq.push_back(dq[0]->right);
//                dq.pop_front();
//                --n;
//            }
//            while (n) {
//                int temp = 0;//记录当前非空节点到下一个非空节点的距离，能找到则给dis加上
//                deque<TreeNode*> add;//入队列的元素，必须得是有效元素区间才入队
//                while (n && dq[0] == nullptr) {
//                    ++temp;
//                    add.push_back(nullptr);
//                    add.push_back(nullptr);
//                    dq.pop_front();
//                    --n;
//                }
//                if (n) {
//                    dis += temp + 1;
//                    dq.insert(dq.end(), add.begin(), add.end());
//                    dq.push_back(dq[0]->left);
//                    dq.push_back(dq[0]->right);
//                    dq.pop_front();
//                    --n;
//                }
//            }
//            ret = max(ret, dis);
//        }
//        return ret;
//    }
//};



////二叉树最大宽度(未活用之前已学知识，还有就是这个测试用例卡得真死，用了long long还是数据溢出，想着是不是有其他方法减少数据大小，而不是unsigned，结果题解还真是)
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
// *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// * };
// */
//class Solution {
//public:
//    int widthOfBinaryTree(TreeNode* root) {
//        //层序遍历+二叉树知识(二叉树数组)
//        //在数组二叉树中，每个子节点的下标都按照父节点的下标存储在数组中，对于同一层的节点，它们的下标之差就是它们的宽度距离
//        //所以给每个节点加上一个下标编号，根节点为0，左子节点为2*n+1,右子节点为2*n+2
//        if (root == nullptr) return 0;
//        unsigned long long ret = 0;
//        queue<TreeNode*> q;
//        deque<unsigned long long> index;//对应下标
//        q.push(root);
//        index.push_back(0);
//        while (!q.empty()) {
//            int n = q.size();
//            ret = max(ret, index[n - 1] - index[0] + 1);//因为是从左往右push的，所以最右边减去最左边为最大差值
//            while (n--) {
//                if (q.front()) {
//                    if (q.front()->left) {
//                        q.push(q.front()->left);
//                        index.push_back(index.front() * 2 + 1);
//                    }
//                    if (q.front()->right) {
//                        q.push(q.front()->right);
//                        index.push_back(index.front() * 2 + 2);
//                    }
//                }
//                q.pop();
//                index.pop_front();
//            }
//        }
//        return (int)ret;
//    }
//};



//227. 基本计算器 II（复习）
//class Solution {
//public:
//    int calculate(string s) {
//        stack<int> sum; // 提取所有数字
//        string cur;     // 当前数字
//        int pre = 0;    // 当前数字前面的一个符号是什么，0为+，1为-，2为*，3为/
//        for (auto& e : s) {
//            if (('0' <= e && e <= '9') || e == ' ') {
//                cur += e;
//            }
//            else {
//                if (pre == 1)
//                    sum.push(-1 * stoi(cur));
//                else
//                    sum.push(stoi(cur));
//                if (pre == 2) {
//                    int a = sum.top();
//                    sum.pop();
//                    int b = sum.top();
//                    sum.pop();
//                    sum.push(a * b);
//                }
//                else if (pre == 3) {
//                    int a = sum.top();
//                    sum.pop();
//                    int b = sum.top();
//                    sum.pop();
//                    sum.push(b / a);
//                }
//                pre = e == '+' ? 0 : e == '-' ? 1 : e == '*' ? 2 : 3;
//                cur.clear();
//            }
//        }
//        if (pre == 1)
//            sum.push(-1 * stoi(cur));
//        else
//            sum.push(stoi(cur));
//        if (pre == 2) {
//            int a = sum.top();
//            sum.pop();
//            int b = sum.top();
//            sum.pop();
//            sum.push(a * b);
//        }
//        else if (pre == 3) {
//            int a = sum.top();
//            sum.pop();
//            int b = sum.top();
//            sum.pop();
//            sum.push(b / a);
//        }
//
//        int ret = 0;
//        while (sum.size()) {
//            ret += sum.top();
//            sum.pop();
//        }
//        return ret;
//    }
//};




class Solution {
public:
    string decodeString(string s) {
        //栈，当遇到']'时，就一直出栈处理直到遇到'['，再计算前面的数字
        deque<char> st;//用双端队列模拟栈，便于最后输出

        for (auto& ch : s) {
            if (ch == ']') {
                string temp;
                while (st.back() != '[') {//处理括号里的，因为用的栈结构，所以这个括号里不会有重复的括号
                    temp += st.back();
                    st.pop_back();
                }
                st.pop_back();//出栈'['
                string number;//数字k
                while (st.size() && '0' <= st.back() && st.back() <= '9') {
                    number += st.back();
                    st.pop_back();
                }
                reverse(number.begin(), number.end());
                int k = 1;
                k = number.empty() ? 1 : stoi(number);
                if (k != 1)
                    reverse(temp.begin(), temp.end());
                while (k--) {
                    for (auto& e : temp)
                        st.push_back(e);
                }
            }
            else {
                st.push_back(ch);
            }
        }

        string ret;
        for (auto& e : st) {
            ret += e;
        }
        return ret;
    }
};

int main() {
    Solution sl;
    string s = "1[4[2[a]ff]]";
    cout << sl.decodeString(s) << endl;
    return 0;
}