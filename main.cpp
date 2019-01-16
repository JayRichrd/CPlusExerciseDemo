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

void getSeconds(unsigned long *par);

void swap(int &x, int &y);

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double &setValues(int i);

typedef struct Books {
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} book;

class Box {
    double width;
public:
    double length;
    double breadth;
    double height;

    friend void printWidth(Box box);

    void setWidth(double wid);

    double getVolume(void);
};

double Box::getVolume() {
    return length * breadth * height;
}

void printWidth(Box box) {
    cout << "Width of box: " << box.width << endl;
}

void Box::setWidth(double wid) {
    width = wid;
}

class Line {
public:
    void setLength(double len);

    double getLength(void);

    int getLengthPtr(void);

    Line();

    Line(double len);

    Line(int len);

    Line(const Line &obj);

    ~Line();


private:
    double length;
    int *ptr;
};

Line::Line(void) {
    cout << "Object is being created" << endl;
}

Line::Line(double len) : length(len) {
    cout << "Object is being created, length = " << len << endl;
}

Line::Line(int len) {
    cout << "Object is being created, length = " << len << endl;
    // 为指针分配内存
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj) {
    cout << "调用拷贝构造函数并为指针 ptr 分配内存" << endl;
    ptr = new int;
    *ptr = *(obj.ptr);
}

Line::~Line() {
    cout << "Object is being deleted" << endl;
    delete ptr;
}

void Line::setLength(double len) {
    length = len;
}

double Line::getLength() {
    return length;
}

int Line::getLengthPtr() {
    return *ptr;
}

void printBook(struct Books books);

void printBookPoint(struct Books *books);

inline int Max(int x, int y) {
    return (x > y) ? x : y;
}

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

    int var1;
    char var2[10];
    cout << "var1 变量的地址：" << &var1 << endl;
    cout << "var2 变量的地址：" << &var2 << endl;

    int var3 = 20;
    int *var3_ip;
    var3_ip = &var3;
    cout << "Value of var3 variable:" << var3 << endl;
    cout << "Address stored in ip varable：" << var3_ip << endl;
    cout << "Value of *ip varable：" << *var3_ip << endl;

    int *null_ip = NULL;
    cout << "null_ip的值是：" << null_ip << endl;

    cout << endl;
    int var_array[MAX] = {10, 100, 200};
    int *var_address[MAX];
    int *array_ip;
    array_ip = var_array;
    for (int i = 0; i < MAX; ++i) {
        cout << "Address of var[" << i << "] = " << array_ip << endl;
        cout << "Value of var[" << i << "] = " << *array_ip << endl;
        array_ip++;
    }

    for (int i = 0; i < MAX; ++i) {
        *(var_array + i) = i;
    }

    for (int i = 0; i < MAX; ++i) {
        var_address[i] = &var_array[i];
    }

    cout << endl;
    for (int j = 0; j < MAX; ++j) {
        cout << "Value of var[" << j << "] = " << *var_address[j] << endl;
    }

    cout << endl;
    int index_array = 0;
    array_ip = var_array;
    while (array_ip <= &var_array[MAX - 1]) {
        cout << "Address of var[" << index_array << "] = " << array_ip << endl;
        cout << "Value of var[" << index_array << "] = " << *array_ip << endl;
        array_ip++;
        index_array++;
    }

    /**
     * 字符串类型有所不同
     */
    const char *names[MAX] = {"Zara Ali",
                              "Hina Ali",
                              "Nuha Ali"};
    cout << endl;
    for (int k = 0; k < MAX; ++k) {
        cout << "Value of name[" << k << "] = " << names[k] << endl;
    }

    int var4;
    int *ptr1;
    int **pptr1;
    var4 = 3000;
    ptr1 = &var4;
    pptr1 = &ptr1;
    cout << endl;
    cout << "var4 值为：" << var4 << endl;
    cout << "*ptr1 值为：" << *ptr1 << endl;
    cout << "**ptr1 值为：" << **pptr1 << endl;

    cout << endl;
    unsigned long sec;
    getSeconds(&sec);
    cout << "Number of seconds：" << sec << endl;

    cout << endl;
    int i_1;
    double d_1;
    int &r_i_1 = i_1;
    double &d_d_1 = d_1;
    i_1 = 5;
    d_1 = 11.7;
    cout << "Value of i_1 : " << i_1 << endl;
    cout << "Value of i_1 reference : " << r_i_1 << endl;
    cout << "Value of d_1 : " << d_1 << endl;
    cout << "Value of d_1 reference : " << d_d_1 << endl;

    cout << endl;
    int x = 100;
    int y = 200;
    cout << "交换前，x的值：" << x << endl;
    cout << "交换前，y的值：" << y << endl;
    swap(x, y);
    cout << "交换后，x的值：" << x << endl;
    cout << "交换后，y的值：" << y << endl;

    cout << endl;
    cout << "改变前的值：" << endl;
    for (int m = 0; m < 5; ++m) {
        cout << "vals[" << m << "] = " << vals[m] << endl;
    }
    setValues(1) = 20.23;
    setValues(3) = 70.8;
    cout << "改变后的值：" << endl;
    for (int n = 0; n < 5; ++n) {
        cout << "vals[" << n << "] = " << vals[n] << endl;

    }

    cout << endl;
    time_t now = time(0);
    cout << "1970 到目前经过的秒数：" << now << endl;
    tm *ltm = localtime(&now);
    cout << "年：" << 1900 + ltm->tm_year << endl;
    cout << "月：" << 1 + ltm->tm_mon << endl;
    cout << "日：" << ltm->tm_mday << endl;
    cout << "时间：" << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;
    char *dt = ctime(&now);
    cout << "本地日期和时间：" << dt << endl;
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC日期和时间：" << dt << endl;

//    char name[50];
//    int age;
//    cout << "请输入姓名和年龄：";
//    cin >> name >> age;
//    cout << "您的姓名：" << name << ", 您的年龄：" << age << endl;

    char str[] = "unable to read ……";
    cerr << "Error msg: " << str << endl;
    clog << "Error msg: " << str << endl;

    cout << endl;
//    Books books1, books2;
    book books1, books2;
    strcpy(books1.title, "c++ 教材");
    strcpy(books1.author, "Runoob");
    strcpy(books1.subject, "编程语言");
    books1.book_id = 12345;

    strcpy(books2.title, "css 教材");
    strcpy(books2.author, "Runoob");
    strcpy(books2.subject, "前端技术");
    books2.book_id = 12346;

    cout << "第一本书标题：" << books1.title << endl;
    cout << "第一本书作者：" << books1.author << endl;
    cout << "第一本书类目：" << books1.subject << endl;
    cout << "第一本书ID：" << books1.book_id << endl;

    cout << endl;
    cout << "第二本书标题：" << books2.title << endl;
    cout << "第二本书作者：" << books2.author << endl;
    cout << "第二本书类目：" << books2.subject << endl;
    cout << "第二本书ID：" << books2.book_id << endl;

    cout << endl;
    printBook(books1);

    cout << endl;
    printBookPoint(&books2);

    cout << endl;
    Box box1, box2, box3;
    double volume = 0.0;
    box1.height = 5.0;
    box1.length = 6.0;
    box1.breadth = 7.0;
    box2.height = 10.0;
    box2.length = 11.0;
    box2.breadth = 12.0;
    volume = box1.height * box1.length * box1.breadth;
    cout << "Box1的体积：" << volume << endl;
    cout << "Box1的体积：" << box1.getVolume() << endl;
    volume = box2.height * box2.length * box2.breadth;
    cout << "Box2的体积：" << volume << endl;
    box3.setWidth(20);
    printWidth(box3);


    cout << endl;
//    Line line1;
//    line1.setLength(6.0);
//    cout << "Length fo line1：" << line1.getLength() << endl;
//    Line line2(10.0);
//    cout << "Length of line2：" << line2.getLength() << endl;
    Line line3(9);
    cout << "Length of line3：" << line3.getLengthPtr() << endl;

    cout << endl;
    int max_int = Max(20, 10);
    cout << "max(20,10)：" << max_int << endl;

    //c++ 类和对象
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

void getSeconds(unsigned long *par) {
    *par = time(NULL);
}

void swap(int &x, int &y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

double &setValues(int i) {
    return vals[i];
}

void printBook(struct Books books) {
    cout << "书标题：" << books.title << endl;
    cout << "书作者：" << books.author << endl;
    cout << "书类目：" << books.subject << endl;
    cout << "本书ID：" << books.book_id << endl;
}

void printBookPoint(struct Books *books) {
    cout << "书标题：" << books->title << endl;
    cout << "书作者：" << books->author << endl;
    cout << "书类目：" << books->subject << endl;
    cout << "本书ID：" << books->book_id << endl;
}
