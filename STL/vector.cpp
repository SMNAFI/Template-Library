// Initialization
    vector<type> v;
    vector<type> v(size);
    vector<type> v(size, value);
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v{6, 7, 8, 9, 10};

    // 2D vector
    vector<vector<type>> v;
    vector<vector<type>> v(size)
    vector<vector<type>> v(n, vector<int> (m));
    vector<vector<type>> vec( n , vector<int> (m, value));
    vector<vector<int>> v {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9, 10} 
    };


// Access
    v[index];
    v.at(index);
    v.fron();
    v.back();

    
// Modifiers
    v.push_back(value);      // O(1)
    v.pop_back();           // O(1)
    v.insert(iterator, value); // O(N)
    v.erase(iterator); // O(N)
    v.clear();
    v.resize(size);


// Capacity
    v.size();
    v.empty();
    v.resize(new_size);


// Iterators
    v.begin();
    v.end();
    v.rbegin();
    v.rend();