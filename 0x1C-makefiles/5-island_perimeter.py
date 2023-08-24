#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    for i in range(len(grid)):
        end1 = len(grid) - 1
        for j in range(len(grid[i])):
            end = len(grid[i]) - 1
            if grid[i][j] == 1:
                if i == end1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == end or grid[i][j + 1] == 0:
                    perimeter += 1
                if i == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
    return perimeter
