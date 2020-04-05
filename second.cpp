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
    vector<string>open={"(","((","(((","((((","(((((","((((((","(((((((","((((((((","((((((((("};
    vector<string>close={")","))",")))","))))",")))))","))))))",")))))))","))))))))",")))))))))"};
    for(int cas=1;cas<=tt;cas++){
        string s;
        cin>>s;
        s = '0'+s;
        s+='0';
        string ans="";
        for(int i=1;i<s.size();i++){
            if(s[i] > s[i-1]){
                int t = s[i]-s[i-1];
                ans+=open[t-1];
                ans+=s[i];
            }
            else if(s[i] < s[i-1]){
                int t = s[i-1]-s[i];
                ans+=close[t-1];
                ans+=s[i];
            }
            else ans+=s[i];
        }

        printf("Case #%d: ",cas);
        cout<<ans.substr(0,ans.size()-1)<<'\n';
    }
}
