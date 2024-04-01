#include<iostream>
#include<string>
using namespace std;

int main(){
    int size,max,maxindex,maxover;
    int count[26]={0};
    string str;
    cin >> str;
    size = str.length();
    for(int i=0;i<size;++i){
        if(str[i]>=65&&str[i]<=90){
            count[(int)str[i]-65]++;
        }
        else if(str[i]>=97&&str[i]<=122){
            count[(int)str[i]-97]++;
        }
    }
    max=count[0];
    maxindex=0;
    maxover=0;
    for(int i=1;i<26;i++){
        if(max<count[i]){
            max=count[i];
            maxindex=i;
            maxover=0;
        }
        else if(max==count[i]){
            maxover++;
        }
    }
    if(maxover>0){
        cout << "?" << endl;
    }
    else{
        cout << (char)(maxindex+65) << endl;
    }
    
    return 0;
}