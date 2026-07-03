class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int leftsum=0;
        for(int i=0;i<k;i++){
            leftsum+=cardPoints[i]; // starting mai hum saaare cards left se lenge
        }
        int maxsum=leftsum; // k card left se lena right se 0
        int rightsum=0;
        for(int i=0;i<k;i++){
            leftsum-=cardPoints[k-1-i]; // left side se card remove kro (k-1,k-2,.)
            rightsum+=cardPoints[n-1-i]; // right se add kro (n-1,n-2,.)
            int currsum=leftsum+rightsum; // total score nikaalo
            maxsum=max(maxsum,currsum); //compare kro
        }
        return maxsum;
    }
};