#include<stdio.h>
int main(){
	int x1,x2,y1,y2;
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	float d= sqrt((x2 - x1)*(x2 - x1)+(y2 - y1)*(y2 - y1));
	printf("%.2f",d);
	return 0;
}
