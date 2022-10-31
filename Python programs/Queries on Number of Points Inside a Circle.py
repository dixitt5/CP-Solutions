class Solution:
    def countPoints(self, points: List[List[int]], queries: List[List[int]]) -> List[int]:
        l=[]
        for circle in range(len(queries)):
            count=0
            for point in range(len(points)):
                if (queries[circle][0]-points[point][0])**2 + (queries[circle][1]-points[point][1])**2 <= queries[circle][2]**2:
                    count+=1
            l.append(count)
        return l
