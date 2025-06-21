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
//    //��ΪҪ��������������Ҫ��֤ʣ�������������Ϊ��ʼ����x���������ܱ�֤��͵ȡ�����������ٵģ����������ٵ���ȡ͵
//    //����������ܵ�֪ÿ�ֽ���͵ȡ����������Ϊÿ����͵ȡ��������һ����������Щ����һ����ͬ�Ĺ�Լ����Ҫʹ�������٣������Լ����Ҫ�����ܴ������Լ����
//    int n = 0;
//    cin >> n;
//    vector<int> nums(n);
//    int num_max = 0;//��ʼ����x
//    for (int i = 0; i < n; ++i) {
//        cin >> nums[i];
//        num_max = max(num_max, nums[i]);
//    }
//    long long z = -1;//z-��͵ȡ�����������Լ��
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



////F.Array Stabilization(GCD version)����ʱ��
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
//    //�������е����Լ���������������ȵ�ֵ
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
//        int flag = 1;//�ж��Ƿ�һ��ʼ�������͵���g
//        while (count) {//countΪ��ʣ���ٸ�Ԫ�ز�Ϊg��ֻҪ��Ϊ��͵ü���
//            int front = nums[0];//��¼nums[0]����Ϊ����GCDʱ���õĵ�ǰδ�ı���Ǹ�Ԫ�أ����������Ϊ�Ǻ����һ��Ԫ�ؼ��㣬�Ե�ǰ��Ӱ�죬�����һ��Ԫ���Ǻ͵�һ��Ԫ�ؼ��㣬��ʱ��һ��Ԫ���Ѿ��仯
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