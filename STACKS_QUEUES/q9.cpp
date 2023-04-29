void calcSpan(int price[], int n, int s[]){
  stack<int> st;
  st.push(0);
  s[0]=1;
  for(int i=1; i<n; i++){
    if(!st.empty() && price[st.top()]<=price[i]){
      st.pop();
    }

    s[i] = st.empty() ? (i+1):(i-st.top());
    st.push(i);
  }
}