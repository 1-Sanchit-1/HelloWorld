#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="HELLO WORLD";
  string a="qwertyuioplkjhgfdsazxcvbnmASDFGHJKLPOIUYTREWQMNBVCXZ"",./;'";
  for(int i=0;i<s.size();i++)
  {
      for(int j=0;j<a.size();j++)
      {
          if(s[i]==a[j])
          cout<<s[i];
      }
  }
return 0;
}