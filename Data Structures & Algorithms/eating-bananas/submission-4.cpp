class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r=INT_MIN;
        for(int i = 0;i < piles.size(); i++){
            r = max(piles[i],r);
        }
        int res=INT_MAX;
        while(r>=l){
            long long timeTaken=0;
            long long indTT;
            int mid = l+(r-l)/2;
            for(int i = 0;i < piles.size();i++){
                indTT = ceil(double(piles[i])/double(mid));
                timeTaken+=indTT;
            }
            if(timeTaken<=h){
                res = mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }
        return res;
    }
};
