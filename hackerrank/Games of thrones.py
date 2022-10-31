    f=0
    c=0
    l=[]
    for i in s:
        l.append(s.count(i))
    s=l[0]
    for i in l:
        if s==i and c<2:
            f=1
        elif i==1 and c<2:
            f=1
            c+=1
        else:
            f=0
            break
    if f==1:
        return "YES"
    else:
        return "NO"
