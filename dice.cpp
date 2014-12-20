#include "cstdio"
#include "iostream"
#include "algorithm"
#include "string"
using namespace std;
 
int main(void){
    string input;
    int size_of_input;
    cin >> input;
    size_of_input = input.size(); //"string型の変数".size() で、整数値として文字列の長さが返される。
                                  //char型の配列より操作が楽。
    for (int i = 0; i < size_of_input; ++i){
        if(input[i] == 'A'){
            cout << 'X';
        }else if(input[i] == 'B'){
            cout << 'Y';
        }else if(input[i] == 'C'){
            cout << 'Z';
        }else{
            input[i]-=3;
            cout << input[i];
        }
    }
    cout << '\n';
    return 0;
}