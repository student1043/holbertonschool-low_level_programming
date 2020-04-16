#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """ Island Perimeter Grid"""
    i = 0
    for k in range(len(grid)):
        for l in range(len(grid[k])):
            if grid[k][l] == 1:
                if k == 0 or grid[k - 1][l] == 0:
                    i += 1
                if k == len(grid) - 1 or grid[k + 1][l] == 0:
                    i += 1
                if l == 0 or grid[k][l - 1] == 0:
                    i += 1
                if l == len(grid[k]) - 1 or grid[k][l + 1] == 0:
                    i += 1
    return (i)
