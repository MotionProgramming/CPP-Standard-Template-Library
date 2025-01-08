//============================================================================
// In the name of ALLAH
// learn the basics of vectors in C++

// Name        : .cpp
// Author      : MotionProgramming(Md. Abdullah Rajeb)
//============================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Create an empty vector of integers
    vector<int> v;

    // Add elements to the vector
    v.push_back(1);  // Adds 1 to the vector
    v.push_back(2);  // Adds 2 to the vector
    v.push_back(3);  // Adds 3 to the vector

    // Output the elements at indices 0, 1, and 2
    cout << v[0] << " " << v[1] << " " << v[2] << endl; 
    // Output: 1 2 3

    // Modify an element in the vector
    v[1] = 3;  // Changes the element at index 1 to 3
    cout << v[0] << " " << v[1] << " " << v[2] << endl; 
    // Output: 1 3 3

    // Output the size of the vector
    cout << v.size() << endl; 
    // Output: 3
    
    // Iterate and output all elements of the vector
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " "; 
    cout << endl; 
    // Output: 1 3 3

    // Initialize another vector with values
    vector<int> v1 = {2, 3, 4};

    // Output the size and elements of vector v1
    cout << v1.size() << endl; 
    // Output: 3
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " "; 
    cout << endl; 
    // Output: 2 3 4

    // Clear all elements from vector v
    v.clear(); 
    cout << v.size() << endl; 
    // Output: 0 (size of v after clearing)
    cout << v.empty() << endl; 
    // Output: 1 (indicating v is empty)
    cout << v1.empty() << endl; 
    // Output: 0 (indicating v1 is not empty)

    // Resize vector v1 to size 5 (new elements are initialized to 0)
    v1.resize(5);
    cout << v1.size() << endl; 
    // Output: 5 (new size of v1)
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " "; 
    cout << endl; 
    // Output: 2 3 4 0 0 (new elements initialized to 0)

    // Create a vector with 5 elements initialized to 0
    vector<int> a(5);
    cout << a.size() << endl; 
    // Output: 5 (size of vector a)
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " "; 
    cout << endl; 
    // Output: 0 0 0 0 0 (initial values are 0)

    // Assign vector v1 to vector a
    a = v1;
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 2 3 4 0 0 (v1 is assigned to a)

    // Use an iterator to iterate over vector a
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
        cout << *it << " "; 
    cout << endl; 
    // Output: 2 3 4 0 0 (elements of a accessed using iterator)

    // Sort the vector a in ascending order
    a = {3, 4, 5, 1, 2};
    sort(a.begin(), a.end());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 1 2 3 4 5 (sorted in ascending order)

    // Sort the vector a in descending order using reverse iterators
    sort(a.rbegin(), a.rend());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 5 4 3 2 1 (sorted in descending order)

    //vector value input way
    int n;

    cin >> n;

    vector<int> vec;  

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        vec.push_back(value);  
    }

    // Output the vector values
    cout << "The values in the vector are:" << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl; 

    // Sort the vector a in descending order using the greater comparator
    a = {3, 4, 5, 1, 2};
    sort(a.begin(), a.end(), greater<int>());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 5 4 3 2 1 (sorted in descending order using greater)

    // Reverse the order of elements in vector a
    a = {3, 4, 5, 1, 2};
    reverse(a.begin(), a.end());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 2 1 5 4 3 (elements reversed)

    // Output the last element using back()
    cout << a.back() << endl; 
    // Output: 3 (last element in the vector)
    a.pop_back();  // Remove the last element
    cout << a.back() << endl; 
    // Output: 4 (new last element)

    // Output the first element using begin()
    a = {3, 4, 5, 1, 2};
    cout << *a.begin() << endl; 
    // Output: 3 (first element in the vector)

    // Erase the first element of vector a
    a.erase(a.begin());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 4 5 1 2 (first element removed)

    // Erase the element at index 2 of vector a
    a.erase(a.begin() + 2);
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 4 5 2 (element at index 2 removed)

    // Remove consecutive duplicate elements using unique()
    a = {1, 1, 2, 2, 2, 3, 3};
    unique(a.begin(), a.end());
    for (auto u : a)
        cout << u << " "; 
    cout << endl; 
    // Output: 1 2 3 2 2 3 3 (consecutive duplicates still present)

    // Remove consecutive duplicates and calculate the new size of the vector
    a = {1, 1, 2, 2, 2, 3, 3};
    int new_size = unique(a.begin(), a.end()) - a.begin();
    cout << new_size << endl; 
    // Output: 3 (unique element count)
    for (int i = 0; i < new_size; i++)
        cout << a[i] << " "; 
    cout << endl; 
    // Output: 1 2 3 (unique elements)

    // Find the maximum element in vector a and its index
    a = {2, 3, 1, 5};
    cout << max_element(a.begin(), a.end()) - a.begin() << endl; 
    // Output: 3 (index of the maximum element)
    cout << *max_element(a.begin(), a.end()) << endl; 
    // Output: 5 (maximum element)

    return 0;
}
