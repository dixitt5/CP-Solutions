# cook your dish here
t = int(input())
for i in range(t):
    n,x = map(int,input().split())
    a=n*x 
    if(a%4==0):
        print(int(a/4))
    else:
        print(int(a/4)+1)
