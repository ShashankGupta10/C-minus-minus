class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return (((coordinates[0]=='a' || coordinates[0]=='c' || coordinates[0]=='e' || coordinates[0]=='g') && (coordinates[1]-'0')%2==0) || ((coordinates[0]=='b' || coordinates[0]=='d' || coordinates[0]=='f' || coordinates[0]=='h') && (coordinates[1]-'0')%2==1));
    }
};