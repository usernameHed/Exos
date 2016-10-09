
#include <stdio.h>

#include "new.h"
#include "point.h"
#include "vertex.h"

int main()
{
  Object* p1 = new(Point, 12, 13),
    * p2 = new(Point, 2, 2),
    * v1 = new(Vertex, 1, 2, 3),
    * v2 = new(Vertex, 4, 5, 6);

  printf("%s + %s = %s\n", str(p1), str(p2), str(add(p1, p2)));
  printf("%s - %s = %s\n", str(p1), str(p2), str(sub(p1, p2)));
  printf("%s + %s = %s\n", str(v1), str(v2), str(add(v1, v2)));
  printf("%s - %s = %s\n", str(v1), str(v2), str(sub(v1, v2)));
  return (0);
}
