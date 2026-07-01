class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zero=0;
        int one=0;
        for(int stud:students){
            if(stud==0) zero++;
            else one++;
        }
        for(int sand:sandwiches){
            if(sand==0){
                if(zero==0){
                    break;
                }
                zero--;
            }
            else{
                if(one==0){
                    break;
                }
                one--;
            }
        }
        return one+zero;
    }
};