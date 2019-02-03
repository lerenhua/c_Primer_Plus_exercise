// 借助string类读取单词并计数
// 创建于 2019/02/03

# include <iostream>
# include <cstring>

using std::cin;
using std::cout;
using std::string;

int get_a_input_word(string & word);
int main()
{
    string words;  // 声明string类变量用于保存输入的单词
    string end_word = "done";  // 结束词，用于标记程序结束退出
    int word_counts = 0;  // 保存单词个数计数结果

    cout << "Enter words (to stop, type the word done):\n";
    while (1)
    {
        get_a_input_word(words);  // 读取一个单词
        if (words != end_word)  // 检测读取的单词是否为结束词done
        {
            word_counts += 1;  // 计数加一
        }
        else break;
    }

    cout << "You entered a total of "
        << word_counts
        << " words.";
    return 0;
}

// 从数据缓冲区中读取一个单词
int get_a_input_word(string & word)
{
    cin >> word;
    return 0;
}