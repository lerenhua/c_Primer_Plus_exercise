# c_Primer_Plus_exercise
C++ Primer Plus 第五版编程练习题集合
<br>此repo用于记录书本课后编程习题代码，记录自己的学习进度
## 目录
* [chapter 2](#chapyer-2) : 开始学习C++ 
* [chapter 3](#chapter-3) ：处理数据
  
## 章节内容概述
#### chapter 2
* C++程序的一般形式：
  <br> * 注释， 由//前缀指示。
  <br> * 预处理器编译指令 #include。
  <br> * 函数头 int main() 。
  <br> * 编译指令，如using namespace。
  <br> * 函数体，使用{}括起。
  <br> * 结束 main 函数的返回语句。

* C++基本输入输出方法：cin ，cout

* 名称空间与类的简介
* C++语句
  <br> * 声明语句及变量。
  <br> * 赋值语句。
  <br> * 输入输出语句。
* 函数
  <br> 1. 使用有返回值的函数。
  <br> 2. 函数变体 -- 某些语言中，有返回值函数为函数（function），无返回值函数为过程（procedure）或子程序（subroutine），在C++中两种变体统称函数。
  <br> 3. 用户定义的函数：3.1 函数原型； 3.2 函数定义
#### chapter 3
* 变量命名规则
  <br> 1. 只能使用字母，数字和下划线（_）。
  <br> 2. 名称第一个不能是数字。
  <br> 3. 区分大小写。
  <br> 4. 不能使用C++关键字作名称。
  <br> 5. 以两个下划线或下划线和大写字母开头的名称被保留给实现（编译器及其使用的资源）使用。以一个下划线开头的名称保留给实现，用作全局标识符。（此处合法但是可能出现问题）
  <br> 6. C++对名称长度无限制。

* C++内置整型
  <br> 1. unsigned long , long , unsigned int , int , unsigned short , short
  <br> 2. char , unsigned char , signed char , bool
  <br> 3. C++中short, int, long的最小长度标准：
    <br> &ensp; 3.1 short至少16位。
    <br> &ensp; 3.2 int至少和short一样长。
    <br> &ensp; 3.3 long至少32位，且至少与int一样长。（具体整型长度参阅头文件climits）
  <br> 4. char类型：专门用于存储字符及小数
  <br> 5. signed char 与 unsigned char: 默认情况下，char本身既不是没有符号也不是有符号，而依赖于C++实现，如果char作数值类型使用时，可显式确定有无符号。
  <br> 6. wcha_t类型：用于解决char类型字长较小无法表示更大字符集的宽字符类型，其底层类型的选择取决于实现，如一个系统可能以unsigned short实现而另一系统为int；由于cin，cout输入输出只适用于char流，因此需要wcin和wcout实现wcha_t流输入输出；另外可以通过加前缀‘L’来指示宽字符常量及宽字符串。
  <br> 7. bool类型: 非零值为true，零值为false；任何数值或指针值都可以隐式转换成bool值。
* const限定符
  <br> * 用于声明符号常量。
  <br> * 相对于#define，推荐使用const定义符号常量。
* C++内置浮点类型
  <br> 1. float， double， long double
  <br> 2. 位数要求：float至少32位，double至少48位且不少于float，long double至少和double一样多。（实际上，通常float 32位，double 64位，long double 为80，96，128位）
* C++算术操作符
  <br> * 加（+），减（-），乘（*），除（/）， 取模求余数（%）。
  <br> * %只用于整数。
* 类型转换
  <br> 1. 类型自动转换的情况：
    <br> &ensp; * 将一种算术类型的值赋值给另一种算术类型的变量时，自动转换。
    <br> &ensp; * 表达式中包含不同类型值时，自动转换。
    <br> &ensp; * 将参数传给函数时，自动转换。
  <br> 2. 强制类型转换
    <br> &ensp; * C++风格形式：typeName（value）
    <br> &ensp; * 强制类型转换不改变变量本身，而是创建新的指定类型的值。


## 未完待续 . . .
