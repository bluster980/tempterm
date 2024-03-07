class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(), in.end());
        stack<pair<int,int>> st; int cnt = 0;
        for(int i=0; i<in.size(); i++){
            if(!st.empty()){
                pair<int,int> temp = st.top();
                if(temp.first < in[i][0] && temp.second > in[i][1]){
                    cnt++;
                }
                else{
                    st.push({in[i][0], in[i][1]});
                }
            }
            else{
                st.push({in[i][0], in[i][1]});
            }
        }
        return in.size()-cnt;
    }
};