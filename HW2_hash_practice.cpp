#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<map>
using namespace std;

int main() {
    ifstream ifs("hw2_data.txt", std::ios::in);//開txt

    map<string, int> dictionary;//字典

    string line;//宣告單行
    while (getline(ifs, line)) {//讀取單行
        dictionary[line]+=1;
    }
    for (const auto& word : dictionary) {//迴圈輸出字典
        std::cout << word.first << ": " << word.second << "\n";
    }
    ifs.close();
}
