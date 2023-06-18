#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100000

int char_compare(const void *a, const void *b);

int main()
{
  int size, num_queries, start, end, scope1, scope2, i, j, pos;
  char input_string[MAX_LENGTH + 1];
  char query[10];

  scanf("%d %d", &size, &num_queries);
  scanf("%s", input_string);

  while (num_queries--)
  {
    scanf("%s", query);
    if (strcmp(query, "pop_back") == 0)
    {
      input_string[strlen(input_string) - 1] = '\0';
    }
    else if (strcmp(query, "front") == 0)
    {
      printf("%c\n", input_string[0]);
    }
    else if (strcmp(query, "back") == 0)
    {
      printf("%c\n", input_string[strlen(input_string) - 1]);
    }
    else if (strcmp(query, "sort") == 0)
    {
      scanf("%d %d", &scope1, &scope2);
      start = (scope1 < scope2) ? scope1 : scope2;
      end = (scope1 > scope2) ? scope1 : scope2;
      qsort(&input_string[start - 1], end - start + 1, sizeof(char), char_compare);
    }
    else if (strcmp(query, "reverse") == 0)
    {
      scanf("%d %d", &scope1, &scope2);
      start = (scope1 < scope2) ? scope1 : scope2;
      end = (scope1 > scope2) ? scope1 : scope2;
      for (i = start - 1, j = end - 1; i < j; i++, j--)
      {
        char temp = input_string[i];
        input_string[i] = input_string[j];
        input_string[j] = temp;
      }
    }
    else if (strcmp(query, "print") == 0)
    {
      scanf("%d", &pos);
      printf("%c\n", input_string[pos - 1]);
    }
    else if (strcmp(query, "substr") == 0)
    {
      scanf("%d %d", &scope1, &scope2);
      start = (scope1 < scope2) ? scope1 : scope2;
      end = (scope1 > scope2) ? scope1 : scope2;
      for (i = start - 1; i < end; i++)
      {
        printf("%c", input_string[i]);
      }
      printf("\n");
    }
    else
    {
      char c;
      scanf(" %c", &c);
      input_string[strlen(input_string)] = c;
      input_string[strlen(input_string)] = '\0';
    }
  }
  return 0;
}

int char_compare(const void *a, const void *b)
{
  char char_a = *(const char *)a;
  char char_b = *(const char *)b;
  if (char_a < char_b)
    return -1;
  else if (char_a > char_b)
    return 1;
  else
    return 0;
}
