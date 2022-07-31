
//  Policy based data structure

include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
tree < int ,  null_type ,  less ,  rb_tree_tag ,  tree_order_statistics_node_update >


orderset<int> st;


st.order_of_key(x)      // Number of items strictly smaller than x.
st.find_by_order(i)     // i-th element in a set (starting from zero).

st.insert(x)  
st.erase(x)    
st.find(x)      


// complexity 4*log(N)