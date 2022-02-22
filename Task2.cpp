#include <iostream>
#include <string>
#include <cctype>
 
int main()
{
    std::string line = "C, S, K, A";
 
    int sub_string = 1, tmp_index, index;
    int min = 9999, count_ch = 0;
    bool state1 = true, state2 = true;
    for (int i = 0; i < line.size(); ++i)
    {
        if (line[i] == ',')
        {
            ++sub_string;
        }
 
        if (isalnum(line[i]))
        {
            state1 = false;
            ++count_ch;
            if (state2)
            {
                state2 = false;
                tmp_index = i;
            }
        }
        else if (!isalnum(line[i]) && !state1)
        {
            state1 = true;
            if (count_ch < min)
            {
                state2 = true;
                index = tmp_index;
                min = count_ch;
            }
            count_ch = 0;
        }
    }
    std::cout << "Substring(s): " << sub_string << '\n';
    std::cout << "Minimal word: ";
    while (isalnum(line[index]))
    {
        std::cout << line[index++];
    }
 
    return 0;
}