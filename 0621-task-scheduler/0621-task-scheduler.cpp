class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        vector<int> freq(26, 0);

        for (char c : tasks) {
            freq[c - 'A']++;
        }

        for (int f : freq) {
            if (f > 0)
                pq.push(f);
        }

        int time = 0;

        while (!pq.empty()) {
            int cycle = n + 1;
            vector<int> temp;

            while (cycle > 0 && !pq.empty()) {
                cycle--;

                int f = pq.top();
                pq.pop();

                f--;

                if (f > 0)
                    temp.push_back(f);

                time++;
            }
            if (!temp.empty()) {
                time += cycle;
            }

            for (int f : temp) {
                pq.push(f);
            }
        }

        return time;
    }
};