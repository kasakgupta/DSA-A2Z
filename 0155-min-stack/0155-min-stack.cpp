class MinStack {
public:
    stack<long long> st;
    long long minimum;

    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            minimum = val;
        }
        else if (val >= minimum) {
            st.push(val);
        }
        else {
            st.push(2LL * val - minimum);
            minimum = val;
        }
    }

    void pop() {
        long long topValue = st.top();
        st.pop();

        if (topValue < minimum) {
            minimum = 2LL * minimum - topValue;
        }
    }

    int top() {
        long long topValue = st.top();

        if (topValue < minimum) {
            return minimum;
        }

        return topValue;
    }

    int getMin() {
        return minimum;
    }
};