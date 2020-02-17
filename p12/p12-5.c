//改写代码清单12-9的程序，使其能够选择两种方法——输入目的地坐标的方法以及输入X方向和Y方向的行驶距离的方法。

//例如:假设当前值为{5.0,3.0}，想要移动至{7.5,8.9}。输入坐标时输入7.5和8.9,输入行驶距离时则输入2.5和5.9。


#include <stdio.h>
#include <string.h>
 
#define sqr(n) ((n)*(n))
 
typedef struct
{
    double x;
    double y;
} Point;
 
typedef struct
{
    Point pt;
    double flue;
} Car;
 
double distance_of(Point pa,Point pb)
{
    return sqrt(sqr(pa.x-pb.x)+sqr(pa.y-pb.y));
}
void put_info(Car c)
{
    printf("当前位置：(%.2f,%.2f)\n",c.pt.x,c.pt.y);
    printf("剩余燃料：%.2f升\n",c.flue);
 
}
 
int move_1(Car *c,Point dest)
{
    double d=distance_of(c->pt,dest);
    if(d>c->flue)
    {
        return 0;
    }
    c->pt=dest;
    c->flue-=d;
    return 1;
}
 
int move_2(Car *c,double px,double py)
{
    double d=sqrt(sqr(px)+sqr(py));
    if(d>c->flue)
    {
        return 0;
    }
    c->pt.x+=px;
    c->pt.y+=py;
    c->flue-=d;
    return 1;
}
 
int main(void)
{
    int cho;
    Car mycar= {{0.0,0.0},90.0};
    printf("请选择一种方法：\n1.输入目的地坐标--1\n2.输入行驶距离--2\n");
    scanf("%d",&cho);
    if(cho==1)
    {
        while(1)
        {
            int select;
            Point dest;
            put_info(mycar);
            printf("开动汽车吗?[yes--1/no--0]:");
            scanf("%d",&select);
            if(select==0)
                break;
            printf("目的地的X坐标：");
            scanf("%lf",&dest.x);
            printf("目的地的y坐标：");
            scanf("%lf",&dest.y);
            if(!move_1(&mycar,dest))
                puts("燃料不足无法行驶");
        }
    }
    if(cho==2)
    {
        while(1)
        {
            int select2;
            double px,py;
            put_info(mycar);
            printf("开动汽车吗?[yes--1/no--0]:");
            scanf("%d",&select2);
            if(select2==0)
                break;
            printf("在x轴方向上行驶：");
            scanf("%lf",&px);
            printf("在y轴方向上行驶：");
            scanf("%lf",&py);
            if(!move_2(&mycar,px,py))
                puts("燃料不足无法行驶");
        }
    }
 
    return 0;
 
}