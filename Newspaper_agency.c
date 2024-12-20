Each Sunday, a newspaper agency sells w copies of a special edition newspaper for Rs.x per copy. The cost to the agency of each newspaper is Rs.y. The agency pays a fixed cost for storage, delivery and so on of Rs.100 per Sunday. The newspaper agency wants to calculate the profit which it obtains only on Sundays. Can you please help them out by writing a program to compute the profit if w, x, and y are given.



#include<stdio.h>
int main()
{
 int x,y,z;
 scanf("%d%d%d",&x,&y,&z);
 int l=x*y;
 int m=x*z;
 int loss=100;
 printf("%d",l-m-loss);
 return 0;
}
