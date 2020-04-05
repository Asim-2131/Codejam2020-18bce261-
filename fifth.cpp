/*
  ->->->->->-> Vora Mahammadasim <-<-<-<-<-<-
*/
#include<bits/stdc++.h>
#include<stdio.h>
#define int long long
#define pb emplace_back
#define Mod 1000000007
#define all(a) a.begin(),a.end()
using namespace std;
signed main(){

    int tt;
    cin>>tt;
    for(int cas=1;cas<=tt;cas++){
        int n,m;
        cin>>n>>m;
        printf("Case #%d: ",cas);
        if(n == 2){
            if(m == 2){
                cout<<"POSSIBLE\n";
                cout<<"1 2"<<'\n'<<"2 1"<<'\n';
            }
            else if(m == 3) cout<<"IMPOSSIBLE\n";
            else if(m == 4){
                cout<<"POSSIBLE\n";
                cout<<"2 1\n1 2\n";
            }
        }
        else if(n == 3){
            if(m == 3){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3\n3 1 2\n2 3 1\n";
            }
            else if(m==4){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m==5){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m==6){
                cout<<"POSSIBLE\n";
                cout<<"2 3 1\n1 2 3\n3 1 2\n";
            }
            else if(m==7){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m==8){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m==9){
                cout<<"POSSIBLE\n";
                cout<<"3 1 2\n2 3 1\n1 2 3\n";
            }
        }
        else if(n == 4){
            if(m ==4){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3 4\n4 1 2 3\n3 4 1 2\n2 3 4 1\n";
            }
            else if(m == 5){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m == 6){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2\n";
            }
            else if(m == 7){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3\n";
            }
            else if(m==8){
                cout<<"POSSIBLE\n";
                cout<<"1 3 2 4\n3 1 4 2\n4 2 3 1\n2 4 1 3\n";
            }
            else if(m==9){
                cout<<"POSSIBLE\n";
                cout<<"1 3 4 2\n4 1 2 3\n2 4 3 1\n3 2 1 4\n";
            }
            else if(m==10){
                cout<<"POSSIBLE\n";
                cout<<"1 4 3 2\n4 1 2 3\n3 2 4 1\n2 3 1 4\n";
            }
            else if(m==11){
                cout<<"POSSIBLE\n";
                cout<<"1 4 2 3\n4 2 3 1\n3 1 4 2\n2 3 1 4\n";
            }
            else if(m ==12){
                cout<<"POSSIBLE\n";
                cout<<"1 4 2 3\n4 3 1 2\n3 2 4 1\n2 1 3 4\n";
            }
            else if(m==13){
                cout<<"POSSIBLE\n";
                cout<<"2 4 1 3\n4 3 2 1\n3 1 4 2\n1 2 3 4\n";
            }
            else if(m ==14){
                cout<<"POSSIBLE\n";
                cout<<"3 4 1 2\n4 3 2 1\n1 2 4 3\n2 1 3 4\n";
            }
            else if(m==15){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m == 16){
                cout<<"POSSIBLE\n";
                cout<<"4 1 2 3\n3 4 1 2\n2 3 4 1\n1 2 3 4\n";
            }
        }
        else if(n==5){
            if(m == 5){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3 4 5\n5 1 2 3 4\n4 5 1 2 3\n3 4 5 1 2\n2 3 4 5 1\n";
            }
            else if(m==6){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m == 7){
                cout<<"POSSIBLE\n";
                cout<<"1 3 2 4 5\n2 1 5 3 4\n4 2 1 5 3\n3 5 4 2 1\n5 4 3 1 2\n";
            }
            else if(m==8){
                cout<<"POSSIBLE\n";
                cout<<"1 2 4 3 5\n2 1 3 5 4\n3 5 1 4 2\n4 3 5 2 1\n5 4 2 1 3\n";
            }
            else if(m==9){
                cout<<"POSSIBLE\n";
                cout<<"1 4 5 3 2\n2 1 3 4 5\n4 2 1 5 3\n3 5 4 2 1\n5 3 2 1 4\n";
            }
            else if(m==10){
                cout<<"POSSIBLE\n";
                cout<<"1 2 3 4 5\n3 1 4 5 2\n5 4 1 2 3\n4 5 2 3 1\n2 3 5 1 4\n";
            }
            else if(m==11){
                cout<<"POSSIBLE\n";
                cout<<"1 4 3 5 2\n5 1 4 2 3\n4 2 1 3 5\n2 3 5 4 1\n3 5 2 1 4\n";
            }
            else if(m == 12){
                cout<<"POSSIBLE\n";
                cout<<"1 4 5 2 3\n5 1 4 3 2\n3 2 1 4 5\n4 3 2 5 1\n2 5 3 1 4\n";
            }
            else if(m==13){
                cout<<"POSSIBLE\n";
                cout<<"1 5 3 2 4\n2 1 5 4 3\n5 4 1 3 2\n4 3 2 5 1\n3 2 4 1 5\n";
            }
            else if(m==14){
                cout<<"POSSIBLE\n";
                cout<<"1 2 5 3 4\n5 1 3 4 2\n4 5 2 1 3\n2 3 4 5 1\n3 4 1 2 5\n";
            }
            else if(m==15){
                cout<<"POSSIBLE\n";
                cout<<"1 5 4 3 2\n2 1 5 4 3\n5 4 3 2 1\n3 2 1 5 4\n4 3 2 1 5\n";
            }
            else if(m==16){
                cout<<"POSSIBLE\n";
                cout<<"1 5 3 4 2\n2 1 5 3 4\n5 3 4 2 1\n4 2 1 5 3\n3 4 2 1 5\n";
            }
            else if(m==17){
                cout<<"POSSIBLE\n";
                cout<<"1 5 3 2 4\n5 1 2 4 3\n3 4 5 1 2\n2 3 4 5 1\n4 2 1 3 5\n";
            }
            else if(m==18){
                cout<<"POSSIBLE\n";
                cout<<"1 5 3 2 4\n5 2 1 4 3\n3 4 5 1 2\n2 3 4 5 1\n4 1 2 3 5\n";
            }
            else if(m==19){
                cout<<"POSSIBLE\n";
                cout<<"1 5 2 3 4\n5 3 1 4 2\n2 4 5 1 3\n4 2 3 5 1\n3 1 4 2 5\n";
            }
            else if(m==20){
                cout<<"POSSIBLE\n";
                cout<<"1 5 3 2 4\n5 4 2 1 3\n3 1 5 4 2\n2 3 4 5 1\n4 2 1 3 5\n";
            }
            else if(m==21){
                cout<<"POSSIBLE\n";
                cout<<"2 5 3 4 1\n5 4 2 1 3\n3 1 5 2 4\n4 3 1 5 2\n1 2 4 3 5\n";
            }
            else if(m==22){
                cout<<"POSSIBLE\n";
                cout<<"3 5 4 2 1\n5 4 2 1 3\n4 1 5 3 2\n2 3 1 5 4\n1 2 3 4 5\n";
            }
            else if(m==23){
                cout<<"POSSIBLE\n";
                cout<<"4 5 3 2 1\n5 4 2 1 3\n3 1 5 4 2\n2 3 1 5 4\n1 2 4 3 5\n";
            }
            else if(m==24){
                cout<<"IMPOSSIBLE\n";
            }
            else if(m == 25){
                cout<<"POSSIBLE\n";
                cout<<"5 1 2 3 4\n4 5 1 2 3\n3 4 5 1 2\n2 3 4 5 1\n1 2 3 4 5\n";
            }
        }
    }
}
