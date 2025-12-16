const int N=161 ,N4=161*4;
int profit[N][2];
vector<int> children[N];
int dp[N][2][2][N]; // node, bossBuy, buy, budget
bitset<N4> vis=0; // visit for (node, bossBuy,  buy)