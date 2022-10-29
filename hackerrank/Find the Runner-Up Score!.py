if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    #n=input()
    
#print(n)

    l=[]
    for i in arr:
        if i not in l:
            l.append(i)
#print(l)

    l.sort()
    print(l[-2])
    
    
