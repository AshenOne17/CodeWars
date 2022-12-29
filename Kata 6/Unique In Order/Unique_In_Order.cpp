// Implement the function unique_in_order which takes as argument a sequenceand returns a list of items without 
// any elements with the same value next to each otherand preserving the original order of elements.
//
// For example :
//
// uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
// uniqueInOrder("ABBCcAD") == {'A', 'B', 'C', 'c', 'A', 'D'}
// uniqueInOrder([1, 2, 2, 3, 3]) == {1, 2, 3}

#include <vector>
#include <string>

// Functions are declared by kata initial conditions

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
    std::vector<T> unique_elements;

    if (iterable.empty())
        return unique_elements;

    unique_elements.push_back(iterable[0]);

    for (int i = 1; i < iterable.size(); ++i)
    {
        if (!(iterable[i] == iterable[i - 1])) // If previous element differs, append it to result
            unique_elements.push_back(iterable[i]);
    }

    return unique_elements;
}

std::vector<char> uniqueInOrder(const std::string& iterable)
{
    std::vector<char> unique_elements;

    if (iterable.empty())
        return unique_elements;

    unique_elements.push_back(iterable[0]);

    for (int i = 1; i < iterable.size(); ++i)
    {
        if (!(iterable[i] == iterable[i - 1])) // If previous element differs, append it to result
            unique_elements.push_back(iterable[i]);
    }

    return unique_elements;
}