# c_Primer_Plus_exercise
C++ Primer Plus 第五版编程练习题集合
<br>此repo用于记录书本课后编程习题代码，记录自己的学习进度
## 目录
* [chapter 2](#chapyer-2) ：开始学习C++ 
* [chapter 3](#chapter-3) ：处理数据
* [chapter 4](#chapter-4) ：复合类型
  * [数组](#数组)
  * [字符串](#字符串)
  * [string类简介](#string类简介)
  * [结构简介](#结构简介)
  * [共用体](#共用体)
  * [枚举](#枚举)
  * [指针和自由存储空间](#指针和自由存储空间)
  
## 章节内容概述
### chapter 2
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
### chapter 3
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

### chapter 4
#### 数组
  * 继承于C语言的数组,使用方法一致
  * 声明语句要素：
    1. 存储在每个元素的值的类型
    2. 数组名
    3. 数组中的元素个数 （特殊情况：定义与初始化一起时可不指定个数）
  * 初始化规则
    1. `int cards[4] = {3, 6, 8, 10};`（合法）
    2. `int hand[4];`（合法）
    3. `long totals[500] = {5, 2};`（部分初始化，其余为0；合法）
    4. `short things[] = {1, 5, 3, 8};`（可不指明个数初始化，编译时编译器会计算出个数）
  * 注意
    1. 使用数组时，要使用有效下标值。因为编译器不会检查下标是否有效或越界。
    2. 只有定义数组时才能初始化，之后无法使用数组赋值数组的方式
#### 字符串
##### C-风格字符串(c-style string)
* C-风格字符串性质：以空字符(null character)结尾，空字符被写作`\0`，用以标记字符串结尾，如
  `char dog[5] = {'b', 'e', 'a', 'u', 'x'}` 非字符串， `char cat[5] = {'f', 'a', 't', 's', '\0'}` 为字符串。
* 字符串常量（使用双引号）与字符常量（使用单引号）不能互换。
* 拼接字符串常量：
  * 任何两个由空白符（空格，制表符，换行符）分隔的字符串常量自动拼接，如`cout << "I'd give my right arm to be" "a great violinist.\n";` 等价 `cout << "I'd give my right arm to be a great violinist.\n";`
* 在数组中使用字符串
* 字符串输入
  * `cin`在接收输入时只读取一个单词，并以空白来界定字符串的界。
  * 输入的字符串长度可能大于数组长度
* 每次读取一行字符串输入
  1. 面向行的输入：`cin.getline(arrayName, size)`
  2. 面向行的输入：`cin.get(arrayName, size)`
  3. 注意： `getline()`通过换行符确定结尾，并舍弃换行符；    而 `get()`会保留换行符在队列中，因此
    ```C++
    cin.get(name, size);
    cin.get(dessert, size);
    ```
    连续调用`get()`时第二个无法读取内容。
#### string类简介
* string类与字符数组相同之处：
  * 可以使用c-风格字符串初始化string对象。
  * 可以使用cin键盘输入存储到string对象。
  * 可以使用cout显示string对象。
  * 可以使用数组表示法来访问存储在string对象中的字符。
* 赋值，拼接和附加
  ```C++
  string str1, str2, str3;
  str3 = str1 + str2;
  str3 += str2;
  ```
#### 结构简介
* 定义结构描述
  ```C++
  struct inflatable
  {
    char name[20];
    float volume;
    double price;
  }
  ```
  列表中每一项为结构成员，因此，inflatable结构有3个成员。
* 创建结构变量
  ```C++
  inflatable hat;
  struct inflatable goose;
  ```
  关键字struct可省略。hat类型为inflatable，可以使用成员操作符（.）来访问各个成员。
* 结构数组
  ```C++
  //可创建元素为结构的数组
  inflatable gifts[100]; // 声明包含100个inflatable结构的数组
  inflatable guests[2] = {
    {"Bambi", 0.5, 21.99}, 
    {"Godzilla", 2000, 565.99}
  };  // 声明2个包含inflatable结构的数组，并初始化
  ```
* 定义好的结构，可理解为一种新数据类型，与int，float等类型概念相同，因此可以直接默认为数据类型。
#### 共用体
* 共用体（union）是一种数据格式，能存储不同的数据类型，但同时只能存储一种类型。与结构体不同，结构体可同时存储多种类型。
* 声明及使用：
  ```C++
  union one4all
  {
    int int_val;
    long long_val;
    double double_val;
  };  // one4all可以存储多种类型，但一次只能存储一种类型的值
  one4all pail;
  pail.int_val = 15;  // 存储了一个int值
  cout << pail.int_val;
  pail.double_val = 1.38;  // 存储了一个double值，同时丢失了int值
  cout << pail.double_val;
  ```
* 共用体长度为其最大成员长度
* 当数据项使用两种或更多格式（但不会同时使用）时，可使用共用体节省空间。
* 匿名共用体没有名称，其成员将成为位于相同地址处的变量，每次只有一个成员是当前成员：
  ```C++
  struct widget
  {
    char brand[20];
    int type;
    union   // 匿名共用体
    {
      long id_num;
      char id_char[20];
    };
  };
  widget prize;
  if (prize.type == 1)  // id_num和id_char被认为是prize的两个成员，具有相同的地址，由程序员确定使用哪个成员
    cin >> prize.id_num;
  else
    cin >> prize.id_char
  ```
#### 枚举
* `enum` 用于创建符号常量的方式，可代替`const`

#### 指针和自由存储空间
* 对于常规变量，其存储的是值，使用地址操作符（&）获取地址；指针是一种特殊数据类型的变量，其存储的是地址，使用接除引用操作符（*）获取对应地址存储的值。
* 声明与初始化指针
  ```C++
  int *ptr; // c-风格指针声明
  int* ptr; // c++风格指针声明，认为int*为一种类型
  int* p1，p2; // p1为指向int的指针变量，p2为int类型常规变量，每一个指针变量都要有一个 *
  int higgen = 5;
  int * pt = &higgen;  // 指针也是一种数据类型的变量，其存储的值为地址，因此初始化传递的应是地址

  long * fellow;
  *fellow = 223323; // 警告！！！ 一定要在对指针应用解除引用操作符（*）之前，将指针初始化为一个确定，适当的地址！！

  int * pt;
  pt = (int *)OxB8000000;  // 数字不能直接传递给指针，需要强制类型转换成地址类型 ！！
  ```
* `new` 与 `delete`
  * 使用`new`分配内存
  ```C++
  typeName pointer_name = new typeName;  // 数据类型可以是结构，或基本类型
  int * pn = new int;  // new会自动分配内存，并返回内存块的地址
  ```
  * 使用`delete`释放内存
  ```c++
  int * pt = new int;
  delete pt;  // 一定要配对使用new及delete，只能用于释放new分配的内存

  int * ps = new int;
  int * pq = ps;
  delete pq;  // delete使用关键在于，释放new分配的内存，即使用new时返回的内存块的地址，此地址也存储在指针pq中，因此可以对指针pq使用delete。警告！！！一般不要使两个指针指向同一内存块
  ```
  * 使用`new`创建动态数组
    1. 创建动态数组
    ```C++
    int * psome = new int [10];  // new返回第一个元素的地址，并赋给指针psome
    delete [] psome;  // 释放内存
    ``` 
    `new` 与 `delete`使用规则
    * 不要使用`delete`释放不是`new`分配的内存
    * 不要使用`delete`释放同一内存块两次
    * 如果使用`new []` 为数组分配内存，则应使用`delete []`来释放
    * 如果使用`new []` 为一个实体分配内存，则应使用`delete `（没有方括号）来释放
    * 对空指针应用`delete`是安全的
  * 使用动态数组
    * 直接将指针当作数组名使用即可，此处数组与指针基本等价
    * 可对指针进行加减操作，加一即指向下一个元素的地址，而数组名不可改变
    ```C++
    int * p1 = new int [3];
    p1[0] = 2;p1[1] = 5;p1[2] = 8;
    p1 = p1 + 1;  // 此时p1[0] = 5
    ``` 


## 未完待续 . . .
