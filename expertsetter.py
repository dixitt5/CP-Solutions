t = int(input())
for i in range(t):
    x,y = map(int,input().split())
    y=y*100
    a=y/x
    if(a>=50):
        print("yes")
    else:
        print("no")
