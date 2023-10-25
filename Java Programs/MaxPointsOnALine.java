class Solution
{
public int maxPoints(int[][] points) {        
        if(points.length < 3)
            return points.length;
        
        int max = 0;
        for(int i = 0; i < points.length; i++)
        {
            for(int j = i+1; j < points.length; j++)
            {
                int temp = 0;
                int[] vec = new int[]{points[i][0]-points[j][0], points[i][1]-points[j][1]};
                int[] normal = new int[]{-1*vec[1], vec[0]};
               
                for(int k = 0; k < points.length; k++)
                    if(dotProduct(normal, new int[]{points[k][0]-points[i][0], points[k][1]-points[i][1]}) == 0)
                        max = Math.max(max, ++temp);       
            }
        }
        return max;
    }
    
    public int dotProduct(int[] u, int[] v)
    {
        int dp = 0;
        for(int i = 0; i < 2; i++)
            dp += u[i]*v[i];
        return dp;
    }
}