class Solution{
public:
	public:
		int find_median(vector<int> v){
		    sort(v.begin(), v.end());
		    
		    int n=v.size();
		    
		    if(n%2){
		        return v[n/2];
		    }
		    else{
		        return (v[n/2]+ v[n/2 -1])/2;
		    }
		}
};
