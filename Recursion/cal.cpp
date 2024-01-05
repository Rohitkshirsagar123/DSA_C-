#include<iostream>
using namespace std;


int evaluateExpression(const std::string& s, size_t& index) {
    int result = 0;
    int currentNumber = 0;
    char operation = '+';

    while (index < s.size()) {
        char currentChar = s[index++];

        if (std::isdigit(currentChar)) {
            currentNumber = currentNumber * 10 + (currentChar - '0');
        } else if (currentChar == '(') {
            currentNumber = evaluateExpression(s, index);
        } else if (currentChar == ')') {
            break;
        } else if (currentChar == '+' || currentChar == '-') {
            if (operation == '+') {
                result += currentNumber;
            } else {
                result -= currentNumber;
            }

            currentNumber = 0;
            operation = currentChar;
        }
    }

    if (operation == '+') {
        result += currentNumber;
    } else {
        result -= currentNumber;
    }

    return result;
}

int main(){
    cout<<"calculator"<<endl;
    string str = "(1+(4+5+2)-3)+(6+8)";

    size_t index = 0;
    cout<<evaluateExpression(str, index);
// for(int i=0;i<str.size();i++){
//     if(str[i]==' '){
//         continue;
//     }

//     cout<<str[i];
// }

}