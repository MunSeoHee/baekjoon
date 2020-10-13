N, M = map(int, input('').split())

dic = {}
while N:
    s, pw = input("").split()
    dic[s] = pw
    N-=1
while M:
    s = input("")
    print(dic[s])
    M-=1
    
