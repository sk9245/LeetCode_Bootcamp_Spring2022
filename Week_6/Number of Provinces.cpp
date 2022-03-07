// https://leetcode.com/problems/number-of-provinces/

class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int noOfProvinces = 0;
        int n = isConnected.size();
        vector<bool> visited(n,false);
        for(int i=0;i<isConnected.size();i++) {
            if(visited[i] == false) {
                dfs(visited, i, isConnected);
                cout << 
                noOfProvinces++;
            }
        }
        return noOfProvinces;
    }
    
    void dfs(vector<bool>& visited, int current, vector<vector<int>> isConnected) {
        if(visited[current] == true) {
            return;
        }
        visited[current] = true;
        for(int i=0;i<isConnected[current].size();i++) {
            if(visited[i] == false && isConnected[current][i] == 1) {
                dfs(visited, i, isConnected);
            }
        }
    }
};
