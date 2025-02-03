#include<iostream>
#include<vector>

using namespace std;

void move(string s, int &x,int &y){
    for(int i=0;i<s.size();++i){
        if(s[i]=='R'){
            x++;
        }else if(s[i]=='L'){
            x--;
        }else if(s[i]=='B'){
            y--;
        }else if(s[i]=='T'){
            y++;
        }
    }
}

void rollback(string s, int &x,int &y){
    for(int i=0;i<s.size();++i){
        if(s[i]=='R'){
            x--;
        }else if(s[i]=='L'){
            x++;
        }else if(s[i]=='B'){
            y++;
        }else if(s[i]=='T'){
            y--;
        }
    }

}

int main(){
    string s;
    int n;
    int sx,sy,kx,ky;
    cin>> s;
    kx = s[0] - 'A'+1;
    ky = s[1] - '0';
    cin>> s;
    sx = s[0] - 'A'+1;
    sy = s[1] - '0';

    cin >> n;


    for(int k=0;k<n;++k){
        cin >> s;
        move(s,kx,ky);
        //킹이 밖으로 가는지
        if(kx>8||kx<1||ky>8||ky<1){
            rollback(s,kx,ky);
            continue;
        }
        //돌과 같은 위치인지
        if(kx==sx && ky==sy){
            move(s,sx,sy);
        }
        //돌이 밖으로 가는지
        if(sx>8||sx<1||sy>8||sy<1){
            rollback(s,kx,ky);
            rollback(s,sx,sy);
        }

        //밖으로 안나가면 킹 이동
    }

    s = "*ABCDEFGH";
    cout << s[kx] << ky << "\n"; 
    cout << s[sx] << sy;
}