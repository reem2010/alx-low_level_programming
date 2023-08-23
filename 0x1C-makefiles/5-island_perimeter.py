#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    if len(grid) > 100:
        return
    for i in range(len(grid)):
        if len(grid[i]) > 100:
            return
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[i + 1][j] == 0:
                    perimeter += 1
                if grid[i - 1][j] == 0:
                    perimeter += 1
                if grid[i][j + 1] == 0:
                    perimeter += 1
                if grid[i][j - 1] == 0:
                    perimeter += 1
    return perimeter
