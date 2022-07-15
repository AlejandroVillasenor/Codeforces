#AtCoder - abc251_c
num = int(input())
scoreMAX = 0
production = 0
words = set()
for i in range(num):
    string,score= input().split()
    score = int(score)
    if string not in words:
        if score > scoreMAX:
            scoreMAX = score
            production = i
        words.add(string)
print(production+1)
