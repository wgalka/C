#include <stddef.h>

void turn_gravity_on (size_t rows, size_t cols, char matrix[rows][cols])
{
	for (size_t i = 0; i < rows; i++)
	{
		  for (size_t j = 0; j < rows; j++)
		  {
			    for (size_t k = 0; k < cols; k++)
			    {
				      if (j > 0 && matrix[j - 1][k] == '#')
				      {
					      matrix[j - 1][k] = matrix[j][k];
					      matrix[j][k] = '#';
				      }
			    }
		  }
  }
}
