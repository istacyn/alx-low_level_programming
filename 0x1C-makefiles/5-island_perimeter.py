#!/usr/bin/python3
"""Returns the perimeter of an island"""


def island_perimeter(grid):
    """
        Calculates the perimeter of the island described in the grid.

        Args:
            grid: Represents the grid.
            0 represents water zone, 1 represents land zone.

        Returns:
            The perimieter of the island(int).
        """

    rows = len(grid)
    columns = len(grid[0])
    perimeter = 0

    if not grid:
        return 0

    for row in range(rows):
        for col in range(columns):
            if grid[row][col] == 1:
                perimeter = +4

                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
