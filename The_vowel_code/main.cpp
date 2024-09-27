#include <string>
#include <iostream>


std::string encode(const std::string &str)
{
    std::string result = str;
    for(size_t i = 0; i <= result.size(); i++)
    {
        switch (result[i])
        {
        case 'a':
            result[i] = '1';
            break;
        case 'e':
            result[i] = '2';
            break;
        case 'i':
            result[i] = '3';
            break;
        case 'o':
            result[i] = '4';
            break;
        case 'u':
            result[i] = '5';
            break;
        default:
            break;
        }
    }
    std::cout << result << std::endl;
    return result;
}

std::string decode(const std::string &str)
{
    std::string result = str;
    for(size_t i = 0; i <= result.size(); i++)
    {
        switch (result[i])
        {
        case '1':
            result[i] = 'a';
            break;
        case '2':
            result[i] = 'e';
            break;
        case '3':
            result[i] = 'i';
            break;
        case '4':
            result[i] = 'o';
            break;
        case '5':
            result[i] = 'u';
            break;
        default:
            break;
        }
    }
    std::cout << result << std::endl;
    return result;
}



int main()
{
    std::string msg = "hello";
    std::string msg2 = "h2ll4";
    encode(msg);
    decode(msg2);
}