# HW2_hash_practice
## Python
[python](HW2_hash_practice.py)
```python 
path='hw2_data.txt' #輸入路徑
f = open(path) #開txt

dictionary={} #字典
for line in f.readlines():#對於每一行
    try:#字典值存在則加1
        dictionary[line]+=1
    except:#字典值不存在則加入
        dictionary[line]=1

for key in dictionary:#印出結果
    print(f'{key}出現{dictionary[key]}次')
f.close #關txt
```
輸出
```
Cheese出現234次
Pizza出現83次
Coke出現145次
Steak出現46次
Burger出現196次
Fries出現76次
Rib出現33次
Taco出現57次
Pho出現19次
Potato出現3次
```
## C++
[c++](HW2_hash_practice.cpp)
```cpp
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
        dictionary[line]+=1;//加入字典
    }
    for (const auto& word : dictionary) {//迴圈輸出字典
        std::cout << word.first << ": " << word.second << "\n";
    }
    ifs.close();
}
```
輸出
```
Burger: 196
Cheese: 234
Coke: 145
Fries: 76
Pho: 19
Pizza: 83
Potato: 3
Rib: 33
Steak: 46
Taco: 57
```
