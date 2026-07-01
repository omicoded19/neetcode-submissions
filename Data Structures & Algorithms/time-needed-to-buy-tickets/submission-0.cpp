class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(i); // index store krega
        }
        int time=0;
        while(!q.empty()){
            int person=q.front(); // pehele bande k index
            q.pop(); // pehele bande k kaam ho gya to hata diya
            tickets[person]--; // uss bande ki value km kro 
            time++; 

            if(tickets[person]==0){ // bando ki requirement khtm hui
                if(person==k) return time; // wahi required banda h to return time
            }
            else{
                q.push(person); // else peeche bhej do
            }


        }
        return time;
    }
};