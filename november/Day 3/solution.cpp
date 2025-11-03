int NumSteps(string str) {
    vector<char> s(str.begin(), str.end());
    int steps = 0;
    
    while (s.size() > 1) {
        if (s.back() == '0') {
            s.pop_back();
            steps++;
        } else {
            int i = s.size() - 1;
            while (i >= 0 && s[i] == '1') {
                s[i] = '0';
                i--;
            }
            if (i >= 0) {
                s[i] = '1';
            } else {
                s.insert(s.begin(), '1');
            }
            steps++;
        }
    }
    return steps;
}
