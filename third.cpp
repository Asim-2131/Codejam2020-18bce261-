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
        int n;
        cin>>n;
        vector<pair<pair<int,int>,int>>p(n);
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            p[i].first = {x,y};
            p[i].second = i;
        }
        sort(all(p));
        int a[1443]={0},b[1443]={0};
        char ans[n]={};
        printf("Case #%d: ",cas);
        bool ref = true;
        auto calc = [](int n,int a[],int t){
            for(;t<=n;t++) a[t]=1;
        };
        for(int i=0;i<n;i++){
            int s = p[i].first.first;
            int e = p[i].first.second;
            int ii = p[i].second;
            if(a[s] != 1){
                ans[ii] = 'C';
                calc(e-1,a,s);
            }
            else if(b[s] != 1){
                ans[ii] = 'J';
                calc(e-1,b,s);
            }
            else{
                cout<<"IMPOSSIBLE\n";
                ref = false;
                break;
            }
        }
        if(ref) {
            for(int i=0;i<n;i++) cout<<ans[i];
            cout<<'\n';
        }

    }
}
