bool ispar(string expr)
{
    stack<char> s;
    for (int i = 0; i < expr.length(); i++) {
        if (s.empty()) {
            s.push(expr[i]);
        }
        else if ((s.top() == '(' && expr[i] == ')')
                 || (s.top() == '{' && expr[i] == '}')
                 || (s.top() == '[' && expr[i] == ']')) {
             

            s.pop();
        }
        else {
            s.push(expr[i]);
        }
    }
    if (s.empty()) { 
        return true;
    }
    return false;
}