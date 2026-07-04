class Solution {
public:
    int timetaken(vector<int>&nums,int speed){
        int timez=0;
        for(int bananas:nums){
            timez+=(bananas+speed-1)/speed;
        }
        return timez;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; // lowest speed 1banana/hr
        int high=*max_element(piles.begin(),piles.end()); // max speed sbse jyada ek baar m khana
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int time=timetaken(piles,mid);
            if(time<=h){
                ans=mid; // time mid h 
                high=mid-1; // to hum aur choti values try krenge
            }
            else{
                low=mid+1; // else badi values
            }
        }
        return ans;
    }
};
