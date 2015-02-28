#include <iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"linear_regression.h"

template <class T> 

int getArrayLen(T& array)
{//使用模板定义一 个函数getArrayLen,该函数将返回数组array的长度
	return (sizeof(array) / sizeof(array[0]));
}

	
int main(){

	double x[] = {0.1,2,0.3,4};
	double y[] = {15,14,13,12};
	double xt = 2.5;
	int nx = getArrayLen( x );
	int ny = getArrayLen( y );
	int n = min(nx, ny);
	int len_arr = n ;
	cout<<"数组x, y 的长度为: "<<n<<endl;
	cout<<"数组x:  "<<endl;
	for(int i=0;i<n;i++){
		cout<<"x["<<i<<"] = "<<x[i]<<endl;
	}

	cout<<"数组y:  "<<endl;
	for(int i=0;i<n;i++){
		cout<<"y["<<i<<"] = "<<y[i]<<endl;
	}
	//cout<<"x : "<<x<<endl;

	printf( "经过线性回归，在点xt= %lf 处的函数值为 %lf \n",xt, linear_reg(x,y,xt,n  )   );
	return 0;

}



