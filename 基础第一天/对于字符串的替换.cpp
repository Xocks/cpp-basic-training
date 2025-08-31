#include <iostream>
using namespace std;
#include <string>
int main() {
    char ar = 'a';
        cin >> ar;
		cout << "  " << ar << endl;
        cout << " " << ar << ar << ar << endl;
		cout << ar << ar << ar << ar << ar << endl;


        return 0;
}
//下面用for循环替换原本字符串
string s = "  *\n"
" ***\n"
"*****\n";
char c;
int main() {
    cin >> c; for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '*') s[i] = c; putchar(s[i]);
    }
    return 0;
}

