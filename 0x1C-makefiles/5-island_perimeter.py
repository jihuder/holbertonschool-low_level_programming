#!/usr/bin/python3
"""
    Module _ returns the perimeter of the island
"""


def island_perimeter(grid):
    """returns the perimeter of grid"""
    tol = 0

    for i in range(leng(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] is 1:
                tol +=4
                if j > 0 and grid[i][j -1]:
                    tol -= 2
                if i > 0 and grid [i - 1]:
                    total -= 2
    return tol
