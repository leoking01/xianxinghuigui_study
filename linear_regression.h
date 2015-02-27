#include<iostream>
using namespace std;

/* 
 * linear_reg: 线性回归。
 * 原理: 最小二乘法
 * x: 横坐标列
 * y: 纵坐标列
 * xt: 特定点横坐标
 * n : 数组x,y 的长度(取最小)
 * 返回值： 特定点纵坐标
 * */
double  linear_reg(  double *x,double *y ,double xt,int n ){
	int i = 0;
	//while( *(d) ){
		//d = x+1;
	//}
	if (n<=0) return 0;
	//xba = 0;
	double sx = 0,sy = 0,sxy = 0;
	double sxp = 0;
	for (i=0;i<n;i++){
		//printf("*(x+%d) = %lf\n", i, *(x+i) );
		sx += ( *(x+i) );
		sxp += pow(*(x+i),2);
		sy += *(y+i);
		sxy += (*(x+i))*(*(y+i));
	}
	printf("sx,sxp,sy,sxy : %lf,%lf,%lf,%lf\n",sx,sxp,sy,sxy);
	
	double a = 0,b=0;
	double fenmu = n*sxp-pow(sx,2);
	if (fenmu == 0) return *(y+0);//只有一个x坐标，即斜率为无穷大
	a = (n*sxy-sx*sy)/fenmu;
	b = sx*(sx*sy-sxy)/fenmu;	
	printf("a,b : %lf,%lf \n",a,b );
	//printf

	double yv = a*xt+b;

	return yv ;//0;
}



double average(){


	return 0;
}

