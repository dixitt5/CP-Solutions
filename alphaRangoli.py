def print_rangoli(n):
   for i in range(n-1,-1,-1):
      for j in range(i):
         print(end="--")
      for j in range(n-1,i,-1):
         print(chr(j+97),end="-")
      for j in range(i,n):
         if j != n-1:
            print(chr(j+97),end="-")
         else:
            print(chr(j+97),end="")
      for j in range(2*i):
         print(end="-")
      print()
   for i in range(1,n):
      for j in range(i):
         print(end="--")
      for j in range(n-1,i,-1):
         print(chr(j+97),end="-")
      for j in range(i,n):
         if j != n-1:
            print(chr(j+97),end="-")
         else:
            print(chr(j+97),end="")
      for j in range(2*i):
         print(end="-")
      print()

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
