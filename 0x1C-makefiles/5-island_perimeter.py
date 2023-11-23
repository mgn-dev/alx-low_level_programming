#!/usr/bin/python3
"""This module implements island_perimeter."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid."""
    parameter = 0
    nx = len(grid)

    for x in range(nx):
        ny = len(grid[x])
        for y in range(ny):
            p = 0
            if ((x - 1 >= 0) and grid[x][y] == 1 and grid[x-1][y] == 0):
                p += 1
            if ((x + 1 < nx) and grid[x][y] == 1 and grid[x+1][y] == 0):
                p += 1
            if ((y - 1 >= 0) and grid[x][y] == 1 and grid[x][y-1] == 0):
                p += 1
            if ((y + 1 < ny) and grid[x][y] == 1 and grid[x][y+1] == 0):
                p += 1

            if p == 4:
                return 0
            else
                parameter += p

    return parameter
