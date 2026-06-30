class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mpp; // this stores the nextgreater of num
        for(int num:nums2){
            while(!st.empty() && num>st.top()){ //stack empty na ho aur agar num top se bada ho
                mpp[st.top()]=num; // to top ki next greater num ho jaati hai
                st.pop(); // pop kyunki greater mil chuka hai
            }

            st.push(num); // insert kr rhe hai
        }
        while(!st.empty()){ // phir pop k baad bhi bach gye mtlb jinka greater ni mila 
            mpp[st.top()]=-1; // unko -1 de dete h as greater 
            st.pop(); //aur phir pop
        }
        vector<int>ans;
        for(int num:nums1){
            ans.push_back(mpp[num]); //since mpp[num] hi to greater elem store kr rh
        }
        return ans;
    }

};