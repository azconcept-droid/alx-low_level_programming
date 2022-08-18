#!/usr/bin/python3
""""This Module calculate perimeter"""


def island_perimeter(grid):
    """
    Function that calculate perimeter of an Island
    Args:
        grid (list): List of list of integers
    Return:
        Perimeter(int): Perimeter of the island described in grid
    """

    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter = perimeter + 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter = perimeter - 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter = perimeter - 2

    return perimeter