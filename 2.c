#include <stdio.h>
// struct Point
// {
//  float x;
//  float y;
// };
// struct Point mid(struct Point p1,struct Point p2){
// struct Point res;
// res.x = (p1.x + p2.x)/2;
// res.y = (p1.y + p2.y)/2;
// return res;
// }
// int main(){
// struct Point p1 = {1,1};
// struct Point p2 = {4,5};
// struct Point p3;
// p3 = mid(p1,p2);
// printf("%.2f ,%.2f",p3.x,p3.y);
// }
struct point
{
  float x;
  float y;
};
struct point mid(struct point p,struct point q){
  struct point ans;
  ans.x = (p.x+q.x)/2;
  ans.y = (p.y + q.y)/2;
  return ans;
}
int main(){
  struct point p ={1,1};
  struct point q ={4,5};
  struct point s;
  s = mid(p,q);
  printf("%.2f,%.2f ",s.x,s.y);
}
