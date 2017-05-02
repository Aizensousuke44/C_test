#include <stdio.h>

int main(int argc, char const *argv[]) {
  int dogs;
  printf("How many dogs do you have?\n");
  scanf("%d", &dogs);
  printf("So you have %d dog(s)!\n", dogs);
  return 0;
}
