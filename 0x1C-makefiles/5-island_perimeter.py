#!/usr/bin/python3
"""
Finds perimeter of an island.
"""


def cells_around(idx_list, idx_cell, grid):
    """
    Returns number of cells around a cell.
    Args:
        idx_list - index of the list having the current cell in the grid.
        idx_cell - index of the current cell in the current list.
        grid - the grid.
    """
    cells = 0
    above_cell = 0
    next_cell = 0
    below_cell = 0
    before_cell = 0

    if idx_list - 1 < 0:
        above_cell = 0
    else:
        above_cell = grid[idx_list-1][idx_cell]
        if above_cell:
            cells += 1

    if idx_list + 1 >= len(grid):
        below_cell = 0
    else:
        below_cell = grid[idx_list + 1][idx_cell]
        if below_cell:
            cells += 1

    if idx_cell + 1 >= len(grid[idx_list]):
        next_cell = 0
    else:
        next_cell = grid[idx_list][idx_cell + 1]
        if next_cell:
            cells += 1
    if idx_cell - 1 < 0:
        before_cell = 0
    else:
        before_cell = grid[idx_list][idx_cell - 1]
        if before_cell:
            cells += 1
    return cells


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    Args:
        grid - a list of list of integers.
    """
    perimeter = 0

    for idx_list, lis in enumerate(grid):
        for idx_cell, cell in enumerate(lis):
            if cell:
                perimeter += 4 - cells_around(idx_list, idx_cell, grid)
    return perimeter
