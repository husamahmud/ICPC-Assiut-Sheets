#include <stdio.h>
#include <string.h>

/**
 * Time limit exceeded on test 11
 */

int main(void)
{
  int size, score = 0, i;
  char value[100001];

  scanf("%d", &size);
  scanf("%s", value);

  for (i = 0; i < strlen(value); i++)
  {
    char c = value[i];

    switch (c)
    {
    case 'V':
      score += 5;
      break;

    case 'W':
      score += 2;
      break;

    case 'Z':
      if (i != strlen(value) - 1)
      {
        if (value[i + 1] == 'W')
        {
          score /= 2;
          value[i + 1] = '0';
        }
        else if (value[i + 1] == 'V')
        {
          score /= 5;
          value[i + 1] = '0';
        }
      }
      break;

    case 'Y':
      if (i != strlen(value) - 1)
      {
        value[strlen(value)] = value[i + 1];
        value[i + 1] = '0';
      }
      break;

    case 'X':
      if (i != strlen(value) - 1)
        value[i + 1] = '0';
      break;
    }
  }

  printf("%d\n", score);

  return 0;
}
