// Initialization
    vector<type> v;
    vector<type> v(size);
    vector<type> v(size, value);
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v{6, 7, 8, 9, 10};

    // 2D vector
    vector<vector<type>> v;
    vector<vector<type>> v(size)
    vector<vector<int>> v(n, vector<int> (m));
    vector<vector<int>> vec( n , vector<int> (m, value));
    vector<vector<int>> v {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9, 10} 
    };


// Operations
    v.push_back(value);      // O(1)
    v.pop_back();           // O(1)
    v.insert(iterator, value); // O(N)
    v.erase(iterator); // O(N)

    find(v.begin(), v.end(), value); // return iterator


    v.size();
    v.clear();
    v.front();
    v.back();
    v.empty();
    v.resize(size);


// Iterator
    v.begin();
    v.end();
    v.rbegin();
    v.rend();