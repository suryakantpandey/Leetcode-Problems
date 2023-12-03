class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int minTimeTaken = 0;
        vector<int> start;
        for(auto point : points){
            if(!start.empty()){
                minTimeTaken += findMinTimeToVisit(start , point);
            }
            start = point;   
        }
        return minTimeTaken;
    }
    int findMinTimeToVisit(vector<int>& start , vector<int>&end){
        int horizontalDistance = abs(end.front() - start.front());
        int verticalDistance = abs(end.back() - start.back());
        return  max(horizontalDistance ,verticalDistance);
    }
};
