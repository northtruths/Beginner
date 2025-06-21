#define _CRT_SECURE_NO_WARNINGS


//A.Complicated GCD
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main() {
//    string s1, s2;
//    cin >> s1 >> s2;
//    if (s1 == s2)
//        cout << s1 << endl;
//    else
//        cout << 1 << endl;
//    return 0;
//}




//A.Maximum GCD
//#include<iostream>
//using namespace std;
//
//int main() {
//    int t = 0;
//    cin >> t;
//    while (t--) {
//        int n = 0;
//        cin >> n;
//        if (n % 2 == 0)
//            cout << n / 2 << endl;
//        else
//            cout << (n - 1) / 2 << endl;
//    }
//    return 0;
//}






//D.Swords
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//long long GCD(long long a, long long b) {
//    long long c = a % b;
//    while (c) {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    return b;
//}
//
//int main() {
//    //因为要最少人数，所以要保证剩余的数中最大的数为初始数量x，这样才能保证被偷取的数量是最少的，就能用最少的人取偷
//    //根据上面就能得知每种剑被偷取的数量，因为每个人偷取的数量都一样，所以这些数有一个共同的公约数，要使人数最少，这个公约数就要尽可能大（求最大公约数）
//    int n = 0;
//    cin >> n;
//    vector<int> nums(n);
//    int num_max = 0;//初始数量x
//    for (int i = 0; i < n; ++i) {
//        cin >> nums[i];
//        num_max = max(num_max, nums[i]);
//    }
//    long long z = -1;//z-被偷取的数量的最大公约数
//    for (auto& e : nums) {
//        if (z == -1 && e != num_max)
//            z = num_max - e;
//        else if (e != num_max)
//            z = GCD(z, num_max - e);
//    }
//    long long y = 0;
//    for (auto& e : nums) {
//        y += (num_max - e) / z;
//    }
//    cout << y << " " << z << endl;
//    return 0;
//}



////F.Array Stabilization(GCD version)（超时）
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int GCD(int a, int b) {
//    if (a < b)
//        swap(a, b);
//    int c = a % b;
//    while (c) {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    return b;
//}
//
//int main() {
//    //整个序列的最大公约数就是最后它们相等的值
//    int t = 0;
//    cin >> t;
//    while (t--) {
//        int n = 0;
//        cin >> n;
//        vector<int> nums(n);
//        cin >> nums[0];
//        int g = nums[0];
//        for (int i = 1; i < n; ++i) {
//            cin >> nums[i];
//            g = GCD(g, nums[i]);
//        }
//        int step = 0;
//        int count = n;
//        vector<bool> hash(n, false);
//        int flag = 1;//判断是否一开始所有数就等于g
//        while (count) {//count为还剩多少个元素不为g，只要不为零就得继续
//            int front = nums[0];//记录nums[0]，因为计算GCD时是用的当前未改变的那个元素，正常情况因为是后后面一个元素计算，对当前不影响，但最后一个元素是和第一个元素计算，此时第一个元素已经变化
//            for (int i = 0; i < n; ++i) {
//                if (nums[i] == g && hash[i] == false) {
//                    --count;
//                    hash[i] = true;
//                }
//                else if (hash[i] == false && (nums[i] = GCD(nums[i], i == n - 1 ? front : nums[i + 1])) == g) {
//                    --count;
//                    hash[i] = true;
//                    flag = 0;
//                }
//            }
//            ++step;
//        }
//        if (flag)
//            cout << 0 << endl;
//        else
//            cout << step << endl;
//    }
//    return 0;
//}