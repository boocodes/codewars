#include <string>
#include <iostream>
#include <stdio.h>



std::string joinedWords(std::string *wordsArray, std::string originalString, int wordsCount)
{
   
    std::string joinedString = "";
    for(int i = 0; i < wordsCount; i++)
    {
        if(i == wordsCount - 1)
        {
            joinedString += wordsArray[i];
        }
        else
        {
            joinedString += wordsArray[i] + ' ';
        }
    }
    std::cout << "result - " << joinedString << std::endl;
    return joinedString;
}

std::string reverseWord(std::string str)
{
    std::string reversedWord = str;

    int originalStringCounter = str.size() - 1;
    for(int i = 0; i <= str.size(); i++)
    {
        reversedWord[i] = str[originalStringCounter];
        originalStringCounter--;
    }
    return reversedWord;
}


std::string sliceAndJoinWords(std::string str)
{
    
    int wordsCount = 0;
    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == ' ')
        {
            wordsCount++;
        }
        if(i == str.size())
        {
            wordsCount++;
        }
    }
    std::string* res {new std::string[wordsCount]}; 
    int endWordPos = 0, startWordPos = 0, arrayCounter = 0;
    for(int i = 0; i <= str.size(); i++)
    {
        if(str[i] == ' ')
        {
            endWordPos = i;
            res[arrayCounter] = str.substr(startWordPos, endWordPos - startWordPos);
            arrayCounter++;
            startWordPos = i + 1;
        }
        if(i == str.size())
        {
            endWordPos = i;
            res[arrayCounter] = str.substr(startWordPos, endWordPos - startWordPos);
        }
    }

    for(int i = 0; i < wordsCount; i++)
    {
        std::cout << res[i] << std::endl;
    }
    std::cout << "reversed!" << std::endl;
    for(int i = 0; i < wordsCount; i++)
    {
        if(res[i].size() >= 5)
        {
            res[i] = reverseWord(res[i]);
        }
    }
    for(int i = 0; i < wordsCount; i++)
    {
        std::cout << res[i] << std::endl;
    }

    
    return joinedWords(res, str, wordsCount);
}



std::string spinWords(const std::string &str)
{
    return sliceAndJoinWords(str);
}



int main ()
{
    spinWords("Hey fellow warriors");
    return 0;
}