    while (top < bottom) {
        for (int j = y; j < y + k; j++) {
            int temp = grid[top][j];
            grid[top][j] = grid[bottom][j];
            grid[bottom][j] = temp;
        }
        top++;
        bottom--;
    }

    return grid;
}