# HW2_hash_practice
# Python
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
Cheese
出現234次
Pizza
出現83次
Coke
出現144次
Steak
出現46次
Burger
出現196次
Fries
出現76次
Rib
出現33次
Taco
出現57次
Pho
出現19次
Potato
出現3次
Coke出現1次
```