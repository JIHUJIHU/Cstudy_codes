#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> st;
    string str[1000];

    int n;
    int i,j;
    bool correct;
    cin >> n;

    for(i=0;i<n;i++){
        cin >> str[i];
    }
    for(i=0;i<n;i++){
        correct=true;
        for(j=0;j<str[i].size();j++){
            if(str[i].at(j)=='(')
                st.push('(');
            else if(str[i].at(j)==')')
            {
                if(st.empty()){
                    correct = false;
                    break;
                }
                st.pop();
            }
        }
        if(!st.empty()){
            correct=false;
            while(!st.empty())
                st.pop();
        }
        if(correct)
            cout << "YES\n";
        else
            cout << "No\n";
    }
}
