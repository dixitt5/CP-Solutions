# cook your dish here
t = int(input())
for i in range(t):
    X,Y,Z=map(int,input().split())
    if(X>Y and X>Z):
        print("Setter")
    elif(Z>X and Z>Y):
        print("Editorialist")
    else:
        print("Tester")
