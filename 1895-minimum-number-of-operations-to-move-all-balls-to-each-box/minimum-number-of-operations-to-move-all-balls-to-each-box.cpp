class Solution {
public:
    int get_all_balls(string boxes, int index) {
        int count = 0;
        for (int i=0;i<boxes.size();i++) {
            if (boxes[i]=='1') count+=abs(index - i);
        }
        return count;
    }
    vector<int> minOperations(string boxes) {
        vector<int> result;
        for (int i=0;i<boxes.size();++i) {
            result.push_back(get_all_balls(boxes, i));
        }
        return result;
    }
};