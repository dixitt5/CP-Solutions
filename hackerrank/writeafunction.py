def is_leap(year):
    leap = False
    # Write your logic here
    if((year%100==0) & (year%400==0)):
        leap = True
    elif((year%100!=0) & (year%4==0)):
        leap = True
    else:
        pass
   
            
    return leap

