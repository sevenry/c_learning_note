#include <stdio.h>//标准输入／输出函数
#include <string.h>//处理字符串

char tracks[][80] = {
"I left my heart in Harvard Med School", 
"Newark, Newark - a wonderful town", 
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima",
};

void find_track(char search_for[])
{
	int i;
	for (i=0;i<5;i++){
		if (strstr(tracks[i],search_for))
			printf("track %i: '%s' \n", i,tracks[i]);
	}
}

void print_reverse(char *s)
{
	size_t len=strlen(s);//不懂这里的size_t
	printf("%s lenth is %d\n",s,len);
	char *t =s+len-1;//s这里是第一个字符的地址，所以t得到s中最后一个字符串地址
	while(t>=s){
		//printf("%c\n",*t );
		t=t-1;
	}
	puts("");
}


int main()
{
	char atry[] ="hhapy";
	char *btry=atry
	char *t = "www";
	puts(t);//这里给出的都是字符串，而不是地址
	printf("%p\n",t);//只有改成％p才会给出地址
	
	char *juices[] = {
"dragonfruit", "waterberry", "sharonfruit", "uglifruit", "rumberry",
 "kiwifruit", "mulberry", "strawberry", "blueberry", "blackberry", "starfruit"
};//保存指针的数组，本身是数组，每一个是字符串所在的地址
	
	char *a;
	puts(juices[6]);
	print_reverse(juices[7]);
	return 0;

	a = juices[2]; 
	juices[2] = juices[8]; 
	juices[8] = a;
	puts(juices[8]);
	print_reverse(juices[(18+7)/5]);
	puts(juices[2]);
	print_reverse(juices[9]);
	juices[1] = juices[3];
	puts(juices[10]);
	print_reverse(juices[1]);
	return 0;


	char search_for[80];
	printf("Search for: "); 
	scanf("%79s",search_for);//这里的79是比80少1；因为最后一个是'\0' 
	search_for[strlen(search_for)-1]= '\0'; //将最后一个改成结束字符。
	find_track(search_for);
	return 0;
}