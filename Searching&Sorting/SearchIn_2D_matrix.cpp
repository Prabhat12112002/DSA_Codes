#include <iostream>
#include <vector>

using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Ensure the matrix is not empty
        if(matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size();         // number of rows
        int n = matrix[0].size();      // number of columns
        
        int s = 0;
        int totalsize = m * n;         // total number of elements in the matrix
        int e = totalsize - 1;
        
        // Binary search
        while (s <= e) {
            int mid = s + (e - s) / 2;
            
            // Convert mid to corresponding row and column index
            int rowIndex = mid / n;
            int colIndex = mid % n;
            
            int element = matrix[rowIndex][colIndex];
            
            // Check if we found the target
            if (element == target) return true;
            
            // If element is greater than target, search in the left part
            else if (element > target) e = mid - 1;
            
            // If element is less than target, search in the right part
            else s = mid + 1;
        }
        
        // If we don't find the target, return false
        return false;
    }

int main() {
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 11;
    
    bool result = searchMatrix(matrix, target);
    
    if(result) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
