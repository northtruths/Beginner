#define _CRT_SECURE_NO_WARNINGS

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