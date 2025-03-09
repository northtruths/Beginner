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