N = int(input())

card_list = list(map(int, input().split()))
card_list.insert(0,0)
max_price = card_list[N-1]

dp=[0]
for i in range(1,N+1):
    dp+=[0]

for i in range(1, N+1):
    for j in range(1, i+1):
        dp[i]=max(dp[i], dp[i-j]+card_list[j])

print(dp[N])
