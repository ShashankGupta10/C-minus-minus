class Solution {
bool solve(queue<int> queOne, queue<int> queTwo, int size){
    while(size--)
    {
        int front = queTwo.front();
        queTwo.pop();
        queTwo.push(front);
        if(queOne == queTwo){
            return true;
        }
    }
    return false;
}
public:
    bool rotateString(string s, string goal) {
        queue<int> queOne;
        queue<int> queTwo;
        if(s.size() != goal.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            queOne.push(s[i]);
        }
        for(int i = 0; i < goal.size(); i++){
            queTwo.push(goal[i]);
        }
        int size = goal.size();
        return solve(queOne, queTwo, size);
    }
};