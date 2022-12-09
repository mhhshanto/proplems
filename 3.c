#include <stdio.h>
struct point
{
  float x;
  float y;
};
struct triangle{
  struct point A;
  struct point B;
  struct point C;
}
struct point centroid(struct triangle t)
{
  struct point ans;
  ans.x = (t.A.x+t.B.x+t.C.x);
  ans.x = (t.A.y +t.B.y+t.C.y);
  return ans;
};

int main(){
  struct point p1 ={1,1};
  struct point p2 ={4,5};
  struct point p3 ={1,5};
  struct triangle t = {p1,p2,p3};
  struct point c = centroid(t);

}  