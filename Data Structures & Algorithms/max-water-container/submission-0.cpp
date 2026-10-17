class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int dist,lmax=INT_MIN,rmax=INT_MIN;
        int maxVol=INT_MIN;
        while(r>l){
            dist = r-l;
            lmax=heights[l];
            rmax=heights[r];
            maxVol=max(dist*min(lmax,rmax),maxVol);
            if(lmax>=rmax)
                r--;
            else
                l++;
        }
        return maxVol;
    }
};
