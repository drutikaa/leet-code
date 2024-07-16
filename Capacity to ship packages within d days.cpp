bool isShippingPossible(vector<int>& weights, int days, int barrier){
    int wt = 0;
    int DAYS = 1;
    for (int i = 0; i < weights.size(); i++){
        if (weights[i] > barrier) return false;
        if (wt + weights[i] > barrier){
            DAYS += 1;
            wt = weights[i];
        }
        else{
            wt += weights[i];
        }
    }
    if (DAYS > days) return false;
    return true;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int res = -1;
        while (low <= high){
            int mid = (low + high) >> 1;
            if (isShippingPossible( weights, days, mid )){
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return res;
    }
};
