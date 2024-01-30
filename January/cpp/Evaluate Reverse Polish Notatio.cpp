
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (const string& token : tokens) {
            if (isdigit(token[0]) || (token.size() > 1 && token[0] == '-' && isdigit(token[1]))) {
                // If the token is a number or a negative number
                st.push(stoi(token));
            } else {
                // Token is an operator
                int operand2 = st.top();
                st.pop();
                int operand1 = st.top();
                st.pop();

                switch (token[0]) {
                    case '+':
                        st.push(operand1 + operand2);
                        break;
                    case '-':
                        st.push(operand1 - operand2);
                        break;
                    case '*':
                        st.push(operand1 * operand2);
                        break;
                    case '/':
                        st.push(operand1 / operand2);
                        break;
                    default:
                        cerr << "Invalid operator: " << token << endl;
                        exit(1);
                }
            }
        }

        return st.top();
    }
};
