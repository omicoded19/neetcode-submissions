class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int longest=0;
        // st.count(x) se humko pta lagta h x hai ki ni set mai
        //kyunki set h to duplicated bhi ni honge
        for(int num:st){
            if(!st.count(num-1)){ // Agar num se ek chhota number present nahi hai,
                // toh num sequence ka starting point hai.
                int curr=num;
                int len=1;
                while(st.count(curr+1)){ // agar current number ke baad wala number present hai?
                    curr++;
                    len++;

                }
                longest=max(longest,len);
            }
        }
        return longest;
    }
};
