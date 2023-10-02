class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0; 
        while (num != 0) {
            steps++;
            if (num & 1) {
                num--;
            } else {
                num >>= 1;
            }
        }
        return steps; 
    }
};
