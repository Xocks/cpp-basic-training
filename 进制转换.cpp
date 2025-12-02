#include <iostream>
using namespace std;

const int N = 1e5;

int main()
{ 
	int t;
	cin >> t;
	
	while (t!=0)
    {
    int arror[N];
    int arrts[N];
    int n,m;//nÊÇÇ°Ãæ½øÖÆmÊÇºóÃæ½øÖÆtÊÇÊý¾ÝÊýÁ¿
    string s;//sÊÇ±»×ª»»Êý×Ö
    cin >> n >> m >> s;
    long long  num = 0;
    
    
    for (int i = 0;i<s.length();++i)
    {
      if (s[i]<='9'&&s[i]>='0')arror[i] = s[i] - '0';
      if (s[i]<='F'&&s[i]>='A')arror[i] = s[i] - 'A' + 10;
      num = num*n + arror[i];
    }
    
    if (num == 0) {
            cout << 0 << endl;
            t--;
            continue; // Ö±½Ó´¦ÀíÏÂÒ»¸ö²âÊÔÓÃÀý
        }
        
    int con = 0;
    while (num)
    {
      arrts[con++] = num%m;
      num /= m;
    }
    
    
    for (int i = con-1;i>=0;--i)
    {
      if (arrts[i]<=9&&arrts[i]>=0)cout << arrts[i];
      else cout<<(char)(arrts[i] + 'A' -10);
    }

cout << endl;
  t--;
  }
  return 0;
}
