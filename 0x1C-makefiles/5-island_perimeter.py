#!/usr/bin/python3
""" module for get perimeter of island"""


def check_bound(r, c, grid):
    """ function count perimeter for one cell
        Parameters:
            r: row index
            c: col index
            grid: grid of map
        Return:
            number of bounderies
    """
    perimeter = 0
    if c - 1 < 0 or grid[r][c - 1] == 0:
        perimeter += 1
    if c + 1 == len(grid[r]) or grid[r][c + 1] == 0:
        perimeter += 1
    if r - 1 < 0 or grid[r - 1][c] == 0:
        perimeter += 1
    if r + 1 == len(grid) or grid[r + 1][c] == 0:
        perimeter += 1
    return perimeter


def island_perimeter(grid):
    """ function that calculate perimeter of island
        Parameter:
            grid: list of list formed of 1 or 0
        Return:
            permiter of island
    """
    perimeter = 0
    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                perimeter += check_bound(r, c, grid)
            else:
                pass
    return perimeter
