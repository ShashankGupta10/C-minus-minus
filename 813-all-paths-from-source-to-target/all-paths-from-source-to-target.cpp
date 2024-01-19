class Solution {
public:
    void AllPaths(int node,vector<vector<int>> &g,vector<vector<int>> &a,vector<int> &t){
        t.push_back(node);
        if(node==g.size()-1) a.push_back(t);
        for(auto child:g[node]) AllPaths(child,g,a,t);
        t.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<int> temp;
       vector<vector<int>> ans;
       AllPaths(0,graph,ans,temp);
       return ans; 
    }
};