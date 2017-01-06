#include <stdio.h>

int main() {
	
	float latitude;
	float longitude;
	char info[80];
	int started = 0;

	puts("data=[");
	while (scanf("%f,%f,%79s",&latitude,&longitude,info)==3)//这一行其实不太懂
	//而且原来的写法下面会莫名其名类似乱码
	{
	 	if (started)
	 		printf(",\n");
	 	else
	 		started=1;
	 	if ((latitude<-90)||(latitude>90)){
	 		//printf("invalid latitude:%f\n",latitude );
	 		fprintf(stderr, "invalid latitude:%f\n",latitude );
	 		return 2;//似乎和返回值无关啊。
	 	}
	 	if ((longitude<-180)||(longitude>180)){
	 		//printf("invalid longitude:%f\n",longitude );
	 		fprintf(stderr, "invalid longitude:%f\n",longitude );
	 		return 2;
	 	}

	 	//printf("%s\n", info);//print对应重定向输出的stdout，即>；而fprint
	 	//中的stderr对应重定向输出的stderr，即2>；所以在命令行中使用>，不会存储fprint(stderr)
	 	//语句；同理，使用2>，则不存储print语句。
	 	//如果原始数据中有可标准输出的数据，和不能标准输出的语句，则使用>的时候，将可以标准输出的语句存入对应文件，将错误消息打印出来；
	 	//使用2>的时候，则是将错误消息存入文件，答应错误消息之前的正确消息。
	 	//如果同时使用>和2>，则界面均不显示消息，需要去对应的文件里查看错误数据和有效数据。
	 	printf("{latitude:%f,longitude:%f,info is '%s'}",latitude,longitude,info);
	}
	puts("\n]");
	return 0;

}













