#!/usr/bin/python3
"""
Calculatest the perimeter of an island
"""


def island_perimeter(grid):
    """
    Calculates island perimeter

    Arg:
    grid (list of int lists): grid to use to calculate

    Return:
    int: The perimeter of the island
    """
    height = len(grid)
    width = len(grid[0]) if height else 0
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == height - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == width - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
