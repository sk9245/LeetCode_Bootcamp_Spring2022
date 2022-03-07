// https://leetcode.com/problems/find-center-of-star-graph/

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int> mymap;
        for(int i=0;i<edges.size();i++) {
            mymap[edges[i][0]]++;
            mymap[edges[i][1]]++;
        }
        
        for(auto element: mymap) {
            if(element.second == edges.size()) {
                return element.first;
            }
        }
        return 0;
    }
};
