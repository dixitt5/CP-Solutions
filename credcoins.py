# cook your dish here
t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    z=x*y
    print(int(z/100))
