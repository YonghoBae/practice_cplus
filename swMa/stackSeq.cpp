#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n,a=0,c=2;
    cin >> n;
    vector<int> s(n,0);
    stack<int> st;
    for(int i=0;i<n;++i){
        cin >> s[i];
    }
    st.push(1);
    cout << "+\n";
    while(!st.empty()){
        if(a==n){
            return 0;
        }
        else if(c>n){
            cout << "NO";
            return 0;
        }
        if(st.top() == s[a]){
            st.pop();
            a++;
            cout << "-\n";
        }else{
            st.push(c);
            c++;
            cout << "+\n";
            
        }
    }


}

//12345678
//