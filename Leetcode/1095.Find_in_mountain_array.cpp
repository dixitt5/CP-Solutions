// Problem link : https://leetcode.com/problems/find-in-mountain-array/


// /**
//  * // This is the MountainArray's API interface.
//  * // You should not implement it, or speculate about its implementation
//  * class MountainArray {
//  *   public:
//  *     int get(int index);
//  *     int length();
//  * };
//  **/

class Solution {
public:
    int binarySearch(int low,int high,int target,MountainArray &mountainArr, bool reversed){
        while(low!=high){
            int mid=low+(high-low)/2;
            
            if(reversed){
                if(mountainArr.get(mid)>target){
                    low=mid+1;
                }
                else
                    high=mid;
            }
            else{
                if(mountainArr.get(mid)<target){
                    low=mid+1;
                }
                else
                    high=mid;
            }
        }    
        return low;
    }
    
    int peak(int low,int high,MountainArray &mountainArr){
        while(low!=high){
            int mid=low+(high-low)/2;
            
            if(mountainArr.get(mid)<mountainArr.get(mid+1)){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
        
    }
    
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int n=mountainArr.length();
        
        int peakIndex=peak(1,n-2,mountainArr);
        
        int incIdx=binarySearch(0,peakIndex,target,mountainArr,false);
            if(mountainArr.get(incIdx)==target)
                return incIdx;
        
        
          int decIdx=binarySearch(peakIndex+1,n-1,target,mountainArr,true);
            if(mountainArr.get(decIdx)==target)
                return decIdx;
        
        return -1;
    }
};

// Code contributed by **Heeba Khan**














