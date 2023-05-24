#!/usr/bin/python3
"""Returns the perimeter of an island"""


def count_cells(grid, row, column):
    """
    Counts the number of water cells neighboring a given cell in the grid.

    Args:
        grid (list): The grid representing the island.
        row (int): The row index of the cell.
        column (int): The column index of the cell.

    Returns:
        int: The count of water cells neighboring a given cell.
    """

    count = 0

    if row <= 0 or not grid[row - 1][column]:
        count += 1
    if column <= 0 or not grid[row][column - 1]:
        count += 1
    if column >= len(grid[row]) - 1 or not grid[row][column + 1]:
        count += 1
    if row >= len(grid) - 1 or not grid[row + 1][column]:
        count += 1

    return count


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list): The grid representing the island.

    Returns:
        int: The perimieter of the island.
    """

    perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[row])):
            if grid[row][column]:
                perimeter += count_cells(grid, row, column)

    return perimeter
