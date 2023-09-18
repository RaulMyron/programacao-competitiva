#include <bits/stdc++.h>

using namespace std; /* let std influentiate all code */

/* or
#define desync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
*/

/* basic structure  */

int main()
{

    ios::sync_with_stdio(false); /* disabling sync */
    cin.tie(0);                  /* disabling sync into cin */
    cout.tie(0);                 /* disabling sync into cout */

    string str;

    int a, b;

    cin >> a >> b;



    /* cin >> str; reading into cin */
    
    cin.ignore(); /* reading entire line */
    getline(cin, str);
    
    

    cout << a << " " << b << "\n";
    cout << str << "\n";

    return 0;

}

