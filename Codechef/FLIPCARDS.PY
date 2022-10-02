# cook your dish here
t = int(input())

for i in range(t):
    t, up = map(int, input().split())
    
    print(min(up, t-up))
