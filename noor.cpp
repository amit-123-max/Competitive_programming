int getMaximumTeamSize(vector<int> startTime, vector<int> endTime) {
    int n = startTime.size();

    vector<int> starts = startTime;
    vector<int> ends = endTime;

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    auto countLE = [&](const vector<int>& arr, int val) {
        int low = 0, high = (int)arr.size() - 1;
        int res = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] <= val) {
                res = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    };

    auto countLT = [&](const vector<int>& arr, int val) {
        int low = 0, high = (int)arr.size() - 1;
        int res = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] < val) {
                res = mid + 1;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return res;
    };

    int ans = 0;

    for (int i = 0; i < n; i++) {
        int l = startTime[i];
        int r = endTime[i];

        int cntStart = countLE(starts, r);
        int cntEnd = countLT(ends, l);

        int active = cntStart - cntEnd;
        if (active > ans)
            ans = active;
    }

    return ans;
}









