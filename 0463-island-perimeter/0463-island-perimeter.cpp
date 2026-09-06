class Solution {
public:
    vector<int> drow = {0, 1, 0, -1};
    vector<int> dcol = {1, 0, -1, 0};

    int solve(vector<vector<int>>& grid, int r, int c) {
        int m = grid.size();
        int n = grid[0].size();

        // Outside the grid = one boundary
        if (r < 0 || r >= m || c < 0 || c >= n)
            return 1;

        // Water = one boundary
        if (grid[r][c] == 0)
            return 1;

        // Already visited
        if (grid[r][c] == 2)
            return 0;

        // Mark visited
        grid[r][c] = 2;

        int perimeter = 0;

        for (int i = 0; i < 4; i++) {
            int newrow = r + drow[i];
            int newcol = c + dcol[i];

            perimeter += solve(grid, newrow, newcol);
        }

        return perimeter;
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    return solve(grid, i, j);
                }
            }
        }

        return 0;
    }
};