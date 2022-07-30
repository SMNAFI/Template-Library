// Doubly-linked list

    list<type> l;

// Iterators
    l.begin();
    l.end();
    l.rbegin();
    l.rend();


// Access
    l.front();
    l.back();


// Modifiers
    l.push_back(value);      // O(1)
    l.push_front(value);      // O(1)
    l.pop_back();           // O(1)
    l.pop_front();           // O(1)
    l.insert(iterator, value); // O(1)
    l.erase(iterator); // O(1)
    l.clear();


// Operations
    l.sort();       // O(NlogN)
    l.remove(x);    // O(N). Remove all x
    l.unique();     // O(N). Remove all duplicates on sorted list
    l.reverse();    // O(N)