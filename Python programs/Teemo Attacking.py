class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        poison=timeSeries[0]+duration-1 #first one will always be attacked without overlapping
        #of poisoned time of others
        
        s=duration #initially atarting from timeSeries[0] so storing the duration from start
        
        for i in range(1,len(timeSeries)):
            attack=timeSeries[i]
            if attack<=poison: #if poison time overlapped
                
                s-=(poison-attack+1) #but if poisoned before the previous one ends 
                #then need to decerment the time which is already been added in duration
                
            s+=duration #everytime duration time need to be added by default in every attack
            
            poison=timeSeries[i]+duration-1 #again calculating the poison time or other attack
        return s
