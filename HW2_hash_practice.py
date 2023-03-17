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