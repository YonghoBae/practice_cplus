#include <string>
#include <vector>
#include <stack>
using namespace std;

bool check(string v){
    stack<char> s;
    for(int i=0;i<v.size();++i){
        if(v[i]=='('){
            s.push(v[i]);
        }
        
        if (v[i] == ')') {
            if (s.empty()) return false;
            s.pop();
        }
    }
    
    if(s.empty()){
        return true;
    }
    
    return false;
}

string reverse(string u){
    string un;
    for(int i=1;i<u.size()-1;++i){
        if(u[i] == '('){
            un += ")";
        }else{
            un += "(";
        }
        
    }
    
    return un;
}


string con(string w){
    if(w.empty()){
        return w;
    }
    string u,v,result;
    int preCnt=0, nextCnt=0;
    for(int i=0;i<w.size();++i){
        if(w[i] == '('){
            preCnt++;
        }else{
            nextCnt++;
        }
        
        if(preCnt==nextCnt){
            u = w.substr(0,i+1);
            v = w.substr(i+1);
            break;
        }
    }
    
   
    if(check(u)){
        return u+con(v);
    }else{
        string temp;
        temp = "(";
        temp = temp + con(v);
        temp = temp + ")";
        temp = temp + reverse(u);
        return temp;
    }
      
}

string solution(string p) {
    string answer = "";

    answer = con(p);
    
    return answer;
}


