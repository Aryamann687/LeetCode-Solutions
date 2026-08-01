class Solution {
public:
vector<int> nextSmaller(vector<int>& heights) {
    int n = heights.size();
    vector<int> nse(n, n);   // n means no smaller element
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {

        while (!st.empty() && heights[st.top()] >= heights[i])
            st.pop();

        if (!st.empty())
            nse[i] = st.top();

        st.push(i);
    }

    return nse;
}
vector<int> prevSmaller(vector<int>& heights) {
    int n = heights.size();
    vector<int> pse(n, -1);   // -1 means no smaller element
    stack<int> st;

    for (int i = 0; i < n; i++) {

        while (!st.empty() && heights[st.top()] >= heights[i])
            st.pop();

        if (!st.empty())
            pse[i] = st.top();

        st.push(i);
    }

    return pse;
}

    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int MaxArea=0;
        vector<int> nse = nextSmaller(heights);
        vector<int> pse = prevSmaller(heights);

        for(int i=0;i<n;i++){
            MaxArea=max(MaxArea,heights[i]*(nse[i]-pse[i]-1));
        }

        return MaxArea;
    }

};