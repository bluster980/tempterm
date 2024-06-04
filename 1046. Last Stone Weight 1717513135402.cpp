class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> pq;
        for(int i=0; i<s.size(); i++){
            pq.push(s[i]);
        }
        while(pq.size() > 1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            // cout<<x-y<<endl;
            if((x-y) > 0){
                pq.push(x-y);
            }
        }
        // while(!pq.empty()){
        //     cout<<pq.top()<<endl;
        //     pq.pop();
        // }
        return pq.size()==0?0:pq.top();
        
        return 0;
        
    }
};