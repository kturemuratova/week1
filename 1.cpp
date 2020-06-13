#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack <int> st;
    st.push(5);
    st.push(10);
    st.push(15); 
    cout << st.top();
    st.push (20);
    st.push(25);
    st.pop();
    cout << st.top();
    cout << st.empty();
    return 0;
}