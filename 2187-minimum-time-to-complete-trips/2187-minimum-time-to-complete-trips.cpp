class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long  s = 1;
        long long e = 1e14;
        while(s <= e){
            long long trip = 0;
            long long mid = s + (e - s)/2;
            for(int i=0;i<time.size();i++)
                trip += mid / time[i];
            if(trip < totalTrips){
                s = mid + 1;
            }
            else 
                e = mid - 1;
        }
        return s;
    }
};