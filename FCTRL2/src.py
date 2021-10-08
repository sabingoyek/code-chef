def fact(n):
    ans = 1
    for i in range(1,n+1):
        ans = ans*i
    return ans

T = int(input())
while T:
    n = input()
    n = int(n)
    print(fact(n))
    T = T-1
