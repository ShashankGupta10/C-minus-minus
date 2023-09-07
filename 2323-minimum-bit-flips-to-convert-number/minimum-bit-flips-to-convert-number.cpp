class Solution {
public:
    int minBitFlips(int a, int b) {
        int count = 0;

    while (a > 0 and b > 0)
    {
        if ((a & 1) != (b & 1))
        {
            count++;
        }
        a >>= 1;
        b >>= 1;
    }

    while (a)
    {
        if (a & 1)
        {
            count++;
        }
        a >>= 1;
    }

    while (b)
    {
        if (b & 1)
        {
            count++;
        }
        b >>= 1;
    }
    return count;
    }
};