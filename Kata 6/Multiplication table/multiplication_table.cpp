#include <vector>

std::vector<std::vector<int>> multiplication_table(int n)
{
    // Creating a return variable and initializing it 'n' number of rows and 0 values  
    std::vector<std::vector<int>> table(n, std::vector<int>(n));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // Reinitializing each value of each row and column that was previously initialized
            table[i - 1][j - 1] = i * j;
        }
    }

    return table;
}