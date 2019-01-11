#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <cstring>
#include <string>


using namespace std;
using std::setw;

#define WIDTH 5
#define HEIGHT 10

extern int a, b;
extern int c;
extern float f;
static int num = 10;


void func_static(void);

int func();

extern void write_extern();

int num_extern;

int sum(int a, int b = 20);

const int MAX = 3;

double getAverage(double arr[], int size);

int *getRandom();

int main() {
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值：" << (numeric_limits<char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值：" << (numeric_limits<signed char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    cout << "type: \t\t" << "************size**************" << endl;

    typedef int feet;
    feet afeet = 1;
    cout << "a =" << afeet << endl;

    enum color {
        red, green = 5, blue
    };
    color color1;
    color1 = blue;
    cout << "c = " << color1 << endl;

    int a, b;
    int c;
    float f;

    a = 10;
    b = 20;
    c = a + b;

    cout << "c = " << c << endl;

    f = 70.0 / 3.0;
    cout << "f = " << f << endl;

    int i = func();
    cout << "i = " << i << endl;

    cout << "Hello\tWorld\n\n";

    int area1 = WIDTH * HEIGHT;
    cout << "area1 = " << area1 << endl;

    const int CONST_WIDTH = 20;
    const int CONST_HEIGHT = 30;
    int area2 = CONST_WIDTH * CONST_HEIGHT;
    cout << "area2 = " << area2 << endl;

    short int i_short;
    short unsigned int j;
    j = 50000;
    i_short = j;
    cout << "i_short = " << i_short << ", j = " << j << endl;

    while (num--) {
        func_static();
    }

    num_extern = 5;
    write_extern();

    cout << "a + b = " << sum(20, 30) << endl;
    cout << "a + b = " << sum(20) << endl;

    vector<int> some_list;
    int total = 0;
    int value = 5;
    for (int i = 0; i < 5; ++i) {
        some_list.push_back(i);
    }
    for_each(begin(some_list), end(some_list), [&, value](int x) {
        total += x * value;
    });
    cout << "total = " << total << endl;

    short s = 10;
    int i_math = -1000;
    long l = 100000;
    float f_math = 230.47;
    double d = 200.374;
    cout << "sin(d) = " << sin(d) << endl;
    cout << "abs(i) = " << abs(i_math) << endl;
    cout << "floor(d) = " << floor(d) << endl;
    cout << "sqrt(f) = " << sqrt(f_math) << endl;
    cout << "pow(d,2) = " << pow(d, 2) << endl;

    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        j = rand();
        cout << "随机数：" << j << endl;
    }

    int n[10];
    for (int k = 0; k < 10; ++k) {
        n[k] = k + 100;
    }
    cout << "Element" << setw(13) << "Value" << endl;
    for (int j = 0; j < 10; ++j) {
        cout << setw(7) << j << setw(13) << n[j] << endl;
    }

    int a_2[5][2] = {{0, 0},
                     {1, 2},
                     {2, 4},
                     {3, 6},
                     {4, 8}};
    for (int m = 0; m < 5; ++m) {
        for (int k = 0; k < 2; ++k) {
            cout << "a[" << m << "][" << k << "]=" << a_2[m][k] << endl;
        }
    }

    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    p = balance;
    cout << "使用指针的数组值" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "*(p +" << i << ")=" << *(p + i) << endl;
    }
    cout << "使用 balance 作为地址的数组值 " << endl;
    for (int k = 0; k < 5; ++k) {
        cout << "*(balance + " << k << ")=" << *(balance + k) << endl;
    }
    size_t balance_size = sizeof(balance) / sizeof(double);
    size_t pt1_size = sizeof(p);
    cout << "balance size: " << balance_size << ", pt1_size:" << pt1_size << endl;
    double avg;
    avg = getAverage(balance, 5);
    cout << "平均值：" << avg << endl;

    char var[MAX] = {'a', 'b', 'c'};
    char *ptr;
    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++) {

        cout << "Address of var[" << i << "] = ";
        // 输出整个字符串
//        cout << ptr << endl;
        // 输出地址
        cout << (int *) ptr << endl;

        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }

    int *p_return;
    p_return = getRandom();
    for (int i = 0; i < 10; ++i) {
        cout << "*(p + " << i << ") = " << *(p_return + i) << endl;
    }

    char str1[11] = "Hello";
    char str2[11] = "World";
    char str3[11];
    strcpy(str3, str1);
    cout << "strcpy( str3, str1) : " << str3 << endl;

    // 连接 str1 和 str2
    cout << "str1 len = " << strlen(str1) << endl;
    strcat(str1, str2);
    cout << "strcat( str1, str2): " << str1 << endl;

    int len = strlen(str1);
    cout << "strlen(str1) : " << len << endl;

    string string1 = "Hello";
    string string2 = "World";
    string string3;
    // 复制 str1 到 str3
    string3 = string1;
    cout << "string3 : " << string3 << endl;

    // 连接 str1 和 str2
    string3 = string1 + string2;
    cout << "string1 + string2 : " << string3 << endl;

    // 连接后，str3 的总长度
    int lenStr = string3.size();
    cout << "str3.size() :  " << lenStr << endl;

    // c++字符串
    return 0;
}

int func() {
    return 0;
}

void func_static(void) {
    static int i = 5;
    i++;
    cout << "变量i为 " << i;
    cout << "，变量num为 " << num << endl;
}

int sum(int a, int b) {
    return a + b;
}

double getAverage(double arr[], int size) {
    double avg, sum;
    for (int j = 0; j < size; ++j) {
        sum += arr[j];
    }
    avg = double(sum) / size;
    return avg;
}

int *getRandom() {
    static int r[10];
    srand((unsigned) time(NULL));
    for (int i = 0; i < 10; ++i) {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}
