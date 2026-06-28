class Solution {
public:
    int reverse(int x) {
        int n=0, l;
        while (x != 0) {
            l = x % 10;
            x = x / 10;
            if (n > INT_MAX/10 || n < INT_MIN/10) {
    return 0;  // overflow will happen
}
n = n * 10 + l;

        }
        
        return n;
        

    }
};