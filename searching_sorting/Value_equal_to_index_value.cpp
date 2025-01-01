  vector<int> valueEqualToIndex(vector<int>& arr) {
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == i + 1) { // Check 1-based indexing
            ans.push_back(i + 1);
        }
    }
    return ans;
}
