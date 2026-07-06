class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky = false;
        bool heavy = false;
        long long volume = 1LL * length * width * height;
        if (length >= 10000 || width >= 10000 ||
            height >= 10000 || volume >= 1000000000LL)
            bulky = true;
        if (mass >= 100)
            heavy = true;
        if (bulky && heavy)
            return "Both";
        else if (bulky)
            return "Bulky";
        else if (heavy)
            return "Heavy";
        else
            return "Neither";
    }
};