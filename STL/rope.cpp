
#include <ext/rope>
using namespace __gnu_cxx;


rope<type> rp;

// O(logN)
rp.push_back(x)
rp.pop_back();

rp.erase(x, l)      // stating with x, l elements 
rp.sbustr(x, l)     // return new rope with l elements, stating with x-th element

// best O(logN), worst O(N)
rp.insert(x, rp2)   // insert another rope at before x-the element

// concatenate
rp1 + rp2           // O(1)