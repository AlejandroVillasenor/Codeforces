#AtCoder - abc187_c

Num = int(input())
string = set(input() for l in range(Num))
for i in string:
    if "!" + i in string:
        exit(print(i))
print("satisfiable")
#exit porque no hay ningun string que se cumpla