class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int m = arr.size();
        int del=m*0.05;
        double sum=0;
        for(int i=del;i<m-del;i++)
            sum+=arr[i];
        return sum/(m-2*del);
    }
};