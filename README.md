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
  * [指针，数组和指针算术](#指针，数组和指针算术)
* [chapter 5](#chapter-5) ：循环和关系表达式
  * [for循环](#for循环) 
  * [关系表达式](#关系表达式)
  * [while 循环](#while-循环)
  * [do while 循环](#do-while-循环)
  * [二维数组](#二维数组)
  * [类型别名](#类型别名)
* [chapter 6](#chapter-6) ：分支语句和逻辑操作符
  * [if语句及if-else语句](#if语句及if-else语句)
  * [逻辑表达式](#逻辑表达式)
  * [switch语句](#switch语句)
  * [break和continue语句](#break和continue语句)
  * 
  
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
    2. 使用动态数组
    * 直接将指针当作数组名使用即可，此处数组与指针基本等价
    * 可对指针进行加减操作，加一即指向下一个元素的地址，而数组名不可改变
    ```C++
    int * p1 = new int [3];
    p1[0] = 2;p1[1] = 5;p1[2] = 8;
    p1 = p1 + 1;  // 此时p1[0] = 5
    ``` 
    3.   `new` 与 `delete`使用规则
    * 不要使用`delete`释放不是`new`分配的内存
    * 不要使用`delete`释放同一内存块两次
    * 如果使用`new []` 为数组分配内存，则应使用`delete []`来释放
    * 如果使用`new []` 为一个实体分配内存，则应使用`delete `（没有方括号）来释放
    * 对空指针应用`delete`是安全的
#### 指针，数组和指针算术
* 指针和数组基本等价的原因在于指针算术和C++内部处理数组的方式。整数常量加1，其值将加1；而指针加1，增加的量为它指向的类型的字节数（如指向int整型的指针加1，其增加的量为int整型对应的字节数，在计算机系统内存中，地址是以字节为单位递增的）。这也说明C++将数组名解释为地址。
* 多数情况下，C++将数组名解释为第一个元素的地址。
  ```C++
  double wages[10];
  double * pw = wages;
  double * pw0 = &wages[0];  // 数组名即为第一个元素的地址
  ```
  使用数组表示法时，C++都将执行以下转换：
  `arrayname[i] 变成 *(arrayname + 1)`
* 指针与数组区别
  * 指针的值可修改，数组名不可修改
  * 对数组使用`sizeof()`时，返回的是数组长度（以字节为单位，数据类型对应字节X数组元素个数）；而对指针使用`sizeof()`使，返回的是指针的长度。这种情况下，不会将数组名解释为地址！！

* 指针与字符串
  * 在cout和多数C++表达式中，**char数组名**，**指向char的指针**以及用双引号括起来的**字符串常量**都被解释为字符串的第一个字符的地址。因此在使用cout时输出字符串，实际是接收字符串的第一个字符地址，然后不断打印直到检测到`\0`字符串结束符。
    ```C++
    const char * p = "string";  // 合法，可以使用指针访问字符串
    char * p = "string"; // 虽然编译通过，但实际禁止，不允许这种方式初始化指针！！

    const string * p = "ABCD";
    string * p = "ABCD";  // 这两种初始化指针方式都不对，因为字符串常量本身并不是string对象

    string str = "ABCD";
    string * p = &str;  // 此种指针指向string对象
    ```
  * 注意：不要使用字符串常量或未初始化的指针接收输入！
* `new`用于结构：创建结构及访问成员
    ```C++
    struct inflatable
    {
      int price;
      ...
    };  // 如之前一样，先定义结构类型inflatable
    inflatable * ps = new inflatable;  // 创建一个未命名的inflatable类型，并将其地址赋给一个指针
    ps -> price;  // 可用于访问结构的price成员
    (*ps).price;  // 同样使用解除引用操作符（*）加（.）访问成员
    ```
* C++管理数据内存的方式
  1. 自动存储  
    在函数内部定义的常规变量使用自动存储，随着函数的调用自动产生，随着函数的结束自动释放。实际上，自动变量是一个局部变量。

  2. 静态存储  
    使变量成为静态的方式：在函数外定义；使用关键字`static`声明变量.
  3. 动态存储  
    使用`new`和`delete`。使得数据的生命周期不受函数或程序生存时间控制。

### chapter 5
#### for循环
* for循环语句：  
  ```C++
  for (initialization; test-expression; update-expression)
    {
      body
    }
  ```
* for循环执行步骤：
  1. 设置初始值。（初始部分可声明变量）
  2. 执行测试表达式，查看循环是否要继续进行，为真继续进行循环。
  3. 执行循环体操作。
  4. 更新用于测试的值。
* 表达式与语句：
  * 在C++中，每个表达式都有值。有时很明显，如`22 + 27`其值为49；有时不明显，如`x = 20`,赋值表达式也有值，其值为20。
  * C++表达式是值或值与操作符的组合。
  * 副作用（size effect）：  
    判定表达式的值会改变内存中的数据的值时，称表达式有
    副作用。如 x + 15会计算一个新的值，但不会改变x的值。不过对于 ++x + 15时，表达式就有副作用，因为x的值发送了改变。
  * 表达式加分号就是C++有效的语句。
* 非表达式和语句：返回语句，声明语句和for语句都不满足“语句=表达式+分号”的格式。
* 递增操作符（++）和递减操作符（--）
  * 前缀版本：++b，表示先将b的值加1，然后使用新的值来计算表达式。
  * 后缀版本：a++，表示使用a当前的值计算表达式，然后再将a的值加1。
  ```C++
  int x = 5;
  int y = ++x;  // 改变了x，然后赋值给y。x为6，y为6.

  int z = 5;
  int y = x++;  // 先赋值给y，然后改变x。x为6，y为5. 
  ```
* 副作用及顺序点：
  * **副作用**指在计算表达式时对某些东西进行了修改。
  * **顺序点**是程序执行的一个点，在这里，进入下一步之前确保对所有副作用进行评估。在C++中，分号就算一个顺序点。另外任何一个完整表达式都是一个顺序点。完整表达式的例子：表达式语句中的表达式部分以及用作while循环中检测条件的表达式。
    ```C
    while (guest++ < 10)
      printf("%d\n", guests);  // 与C++中一致，如果guest为9，则因为while中表达式为一个顺序点，因此完成这个表达式之后guest加1，打印出来为10。要注意此种编程带来的影响！！！
    ```
* 语句块
  * 使用`{}`包含多个语句
  * 在语句块内声明的变量，生命周期为语句块内的范围，在语句块内创建，结束执行语句块后释放对应内存。
* 逗号操作符
  * 允许一个语句包含多个表达式。
  * 逗号操作符是一个顺序点，确保先计算第一个表达式，再计算第二个表达式。
  * C++规定，逗号表达式的值为第二部分的值。如果包含多个表达式，就以最后一个表达式的值为逗号表达式的值。

#### 关系表达式
* 字符串的比较
  * c-风格字符串不能使用形如`word == "mate"`(word为数组名)来进行字符串比较。因为实际上只是对地址的比较。而是使用函数`strcmp()`。
  * `string`类字符串的比较，可直接使用关系操作符。不过需满足至少一个操作数为string类对象方可使用。
#### while 循环
* 循环语句：
  ```C++
  while (test-condition)   // 测试条件为真，则执行循环体
    body
  ```
#### do while 循环
* 循环语句：
  ```C++
  do
    body
  while (test-condition);
  ```
#### 循环和文本输入（后续添加）
* `cin`对象支持3种不同模式的单字符输入：
  1. 使用原始的`cin`进行输入
    ```C++
    char ch;
    cin >> ch
    while (ch != '#')  // 设置‘#’为哨兵字符，以标志停止输入
    {
      ...  // 注意cin对象是从缓冲区读取字符，如果字符停止输入，但缓冲区仍有字符，则下次使用cin时会直接从缓冲区读取，而不是请求键盘输入
    }  // cin对象会忽略空白符及换行符！！！
    ```
  2. 使用`cin.get(char)`接收任意字符
  3. 注意`cin.get()`,`cin.get(char)`和`cin.get(name, arrsize)`,它们属于C++函数重载的oop特性，允许同名函数，但是参数列表不同。 
#### 二维数组
* 二维数组是在一维数组的基础上构建，并不是C++内部提供的类型。
* 二维数组声明及初始化：
  ```C++
  int maxtemps[4][5] = 
  {
    {94, 98, 97, 103, 101},
    {94, 98, 97, 103, 101},
    {94, 98, 97, 103, 101},
    {94, 98, 97, 103, 101}
  };
  ```
#### 类型别名
* 使用预处理器：  
  `#define BYTE char` 这样，预处理器将在编译程序时用所有char替换所有的BYTE。
* 使用`typedef`创建别名：  
  ```C++
  typedef typeName aliasName;
  typedef char byte; //  使用byte作为char的别名
  ```
  typedef不会创建新类型，而是为已有类型建立一个新的名称。typedef 比 #define 能处理更复杂的类型别名。

### chapter 6
#### if语句及if-else语句
  ```C++
  if (test-condition)  // 测试条件为真，则执行语句
    statement
  
  if (test-condition)
    statement1  // 如果多个语句， 则用花括号{}括起
  else
    statement2

  if (test-condition)
    statement1
  else if (test-condition)
    statement2
  else
    statement3
  ```
#### 逻辑表达式
* 逻辑或操作符（||）
* 逻辑与操作符（&&）
  * 取值范围测试：不要使用形如`17 < age < 35`这种数学形式的表达式，其实际结果为`(17 < age) < 35`的逻辑值，应用完整逻辑表达式，如`(17 < age) && (age < 35)`。
* 逻辑非操作符（!）
#### switch语句
* 语句格式：
  ```C++
  switch (integer-expression)
  {
    case label1: statement
    ...
    default: statement
  }
  ```
* 注意：
  * integer-expression 必须为结果是整数值的表达式；每个标签必须是整数常量的表达式（如int, char类型及枚举量）。
  * 程序跳转到switch特定代码时，将依次执行之后的语句，因此，需要注意是否设置中止跳转。
  * 无法用于浮点测试及两个变量的比较，因为case标签值要求为常量。
  * if-else也可以用于多选项，但是当选项多于3个时，使用switch语句效率更高。
#### break和continue语句
* brak语句：跳过循环体剩余部分，并结束循环进入下一条语句。
* continue语句：跳过循环体剩余部分，并继续循环，开始下一轮循环。
#### 简单文件输入/输出（待补充）


## 未完待续 . . .
