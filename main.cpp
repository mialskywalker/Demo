#include <iostream>
#include <vector>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if (flowerbed.size() == 1 && flowerbed[0] == 0) return true;
    else {

        for (int i = 0; i < flowerbed.size(); i++) {

            if (flowerbed.size() == 1 && flowerbed[0] == 0)
                return true;
            if (i == 0) {
                if (flowerbed[i] == 0 && flowerbed[i+1] == 0) {
                    flowerbed.erase(flowerbed.begin());
                    flowerbed.insert(flowerbed.begin(), 1);
                    n--;
                }
            }
            else if (i == flowerbed.size()-1) {
                if (flowerbed[i] == 0 && flowerbed[i-1] == 0) {
                    flowerbed.erase(flowerbed.end());
                    flowerbed.push_back(1);
                    n--;
                }
            }
            else {
                if (flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0) {
                    flowerbed.erase(flowerbed.begin() + i);
                    flowerbed.insert(flowerbed.begin() + i, 1);
                    n--;
                }
            }
            if (n <= 0) return true;
        }

        return false;

    }

}

int main() {

    vector<int> flowerbed {1,0,0,0,1,0,0};

    cout << canPlaceFlowers(flowerbed, 2) << endl;

    return 0;
}
