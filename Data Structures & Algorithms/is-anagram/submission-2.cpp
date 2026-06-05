 class Solution{
    public:
        bool isAnagram(string s,string t){
            unordered_map<char,int>mpp;
            if(s.size() != t.size())return false;
            for(char c:s){
                mpp[c]++;
            }
            for(char c:t){
                if(mpp[c]==0)return false;
                mpp[c]--;
            }
            return true;
        }
 };
