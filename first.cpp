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

    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int tt;
    cin>>tt;
    for(int cas=1;cas<=tt;cas++){
        int n;
        cin>>n;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a[i][j];
        }
        int dia=0,b=0,c=0;
        vector<set<int>>row(n),column(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                row[i].insert(a[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                column[j].insert(a[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i == j) dia += a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            if(row[i].size() != n) b++;
        }
        for(int i=0;i<n;i++){
            if(column[i].size() != n) c++;
        }
        printf("Case #%d: ",cas);
        cout<<dia<<" "<<b<<" "<<c<<'\n';
    }
}
