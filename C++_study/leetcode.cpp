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