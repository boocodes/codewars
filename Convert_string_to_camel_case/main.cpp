#include <string>
#include <cctype>
#include <iostream>


using namespace std;



string to_camel_case(string text) {
  if(text.size() == 0) return "";
  string buffText = text;
    for(int i = 0; i < (int) buffText.size(); i++){
        if(buffText[i] == '-'){
            int charPos = buffText.find('-');
            buffText = buffText.substr(0, charPos) + buffText.substr(charPos+1);
            buffText[i] = toupper(buffText[i]);
        }
        else if(buffText[i] == '_'){
            int charPos = buffText.find('_');
            buffText = buffText.substr(0, charPos) + buffText.substr(charPos+1);
            buffText[i] = toupper(buffText[i]);
        }
    }
    return buffText;
}