class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;  // stack mein bars ke indices store karenge
        int water=0;
        for(int i=0; i<height.size();i++){
            // jab current bar stack ke top bar se bada ho,tab hume right boundary mil gayi
            while(!st.empty() && height[i]>height[st.top()]){

                // pop bar valley ka bottom hoga
                int bottom=st.top();
                st.pop();

                // agar stack empty hai toh left boundary nahi hai
                if(st.empty()){
                    break;
                }

                // stack ka current top left boundary hai
                int left=st.top();

                // left aur right boundary ke beech ki width
                int width= i-left-1;

                // water ki actual height
                int boundedHeight=min(height[left], height[i]) - height[bottom];

                // area=width*height
                water+=width*boundedHeight;
            }

            // current index ko stack mein push karo
            st.push(i);
        }

        return water;
    }
};