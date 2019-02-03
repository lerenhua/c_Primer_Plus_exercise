// 对输入的单词计数
// 创建于 2019/02/03

# include <iostream>
# include <cstring>

using std::cin;
using std::cout;
char * get_a_input_word(char * p_word);
int main()
{
    char words[20];  // 声明char数组用于保存输入的单词
    const char * end_word = "done";  // 结束词，用于标记程序结束退出
    int word_counts = 0;  // 保存单词个数计数结果

    cout << "Enter words (to stop, type the word done):\n";
    while (1)
    {
        get_a_input_word(words);  // 读取一个单词
        if (strcmp(words, end_word) != 0)  // 检测读取的单词是否为结束词done
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
char * get_a_input_word(char * p_word)
{
    // char ch;
    for (int i = 0; i < 20; i++)
    {
        p_word[i] = cin.get();
        if (p_word[i] == ' ')  // 表示单词的结束
        {   
            p_word[i] = '\0';  // 添加字符串结尾
            break;
        }
    }
    return p_word;
}