class Solution {
public:
    string removeKdigits(string num, int k) {
        while(k>0){
		int i = 0;
		while((i+1)<(num.size()) && num[i]<=num[i+1] && k>0){
			i++;
		}
		k--;
		num.erase(i,1);
		// cout<<num<<endl;
		// i++;
	}
	int i = 0;
	while(num[i]=='0' && i<num.size()-1){
		i++;
	}
	num.erase(0,i);
        if(num.size()==0) return "0";
        return num;
    }
};