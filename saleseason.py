#cook your dish here
t = int(input())
for i in range(t):
    x=int(input())
    if(x>100 and x<=1000):
        print(x-25)
    elif(x<=5000 and x>1000):
        print(x-100)
    elif(x>5000):
        print(x-500)
    else:
        print(x)
