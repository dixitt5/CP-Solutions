# cook your dish here
t = int(input())
for i in range(t):
    x =list(map(int,input().split()))
    if((x[0]+x[1])//2)<35 or ((x[0]+x[2])//2)<35 or ((x[2]+x[1])//2)<35:
        print("fail")
    else:
        print("pass")
