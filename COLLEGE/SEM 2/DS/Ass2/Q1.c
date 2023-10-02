#include<stdio.h>
#include<math.h>

struct point
{
    float x, y;
}p1, p2;

void distance(float x1, float y1, float x2, float y2)
{
    printf("Distance: %lf", sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
}
void mid_point(float x1, float y1, float x2, float y2)
{
    printf("Midpoint: (%f,%f)",(x1+x2)/2, (y1+y2)/2);
}
int main()
{
    printf("Enter two points(x1 y1 x2 y2): ");
    scanf("%f %f %f %f",&p1.x, &p1.y, &p2.x,&p2.y);
    printf("---------------------------------------\n");
    distance(p1.x, p1.y, p2.x,p2.y);
    printf("\n");
    mid_point(p1.x, p1.y, p2.x,p2.y);
    printf("\n---------------------------------------\n");
    return 0;
}