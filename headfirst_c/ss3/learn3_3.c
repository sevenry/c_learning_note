#include <stdio.h>

int main() 
{	
	float latitude;
	float longitude;
	char info[80];
	
	while (scanf("%f,%f,%79s",&latitude,&longitude,info)==3)//这一行其实不太懂
	{
	 	
	 	if ((latitude>26)&&(latitude<30))	 		
		 	if ((longitude<-72)&&(longitude>-76))
	 			printf("%f,%f,%s\n",latitude,longitude,info);
	}//注意：将两个工具连用的时候，第一个工具的输出必须刚好是第二个工具所要接收的格式
//因此这里的printf中不能加入文字。
	return 0;

}













