#include <iostream>
using namespace std;

/*
### 编程题＃5：分离整数的各个数位
来源: POJ (Coursera声明：在POJ上完成的习题将不会计入Coursera的最后成绩。)

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述
从键盘输入一个任意的三位整数，要求正确地分离出它的百位、十位和个位数，并分别在屏幕上输出，输出采用每行输出一个数的方式，不带其它符号。

输入
一个任意的三位整数

输出
一个任意的三位整数
*/

int main(){
//    cout << "输入三位数:" << endl;
    int n;
    cin >> n;
    int bai = n /100;
    int shi = n/10 -bai * 10;
    int ge = n - bai*100 - shi * 10;
    cout << bai << endl;
    cout << shi << endl;
    cout << ge << endl;
}