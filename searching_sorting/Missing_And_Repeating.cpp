 vector<int> findTwoElement(vector<int>& arr) {
    vector<int> ans;
    set<int> st;

    int repeat = -1, missing = -1;

    
    for (int num : arr) {
        if (!st.insert(num).second) {
            repeat = num;
        }
    }

    
    for (int i = 1; i <= arr.size(); i++) {
        if (st.find(i) == st.end()) {
            missing = i;
            break;
        }
    }

    ans.push_back(repeat);
    ans.push_back(missing);

    return ans;}
