#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int a,char *argv[]){
	int cnum = 0;
	int wnum = 0;
	char ch;
	FILE *fp;
	fp = fopen(argv[2],"r");
	//首先判断要检测的文件是否存在 
	if(fp==NULL){
		printf("找不到文件!"); 
		exit(1);
	}
	//如果输入-c则逐个检查文档内容，得到cnum 
	if(!strcmp("-c",argv[1])){
	while((ch=getc(fp))!=EOF){
		++cnum;
	}
	printf("字符数为：%d\n",cnum);
	fclose(fp); 
	}
	//如果输入-w则每当检测到空格，英文逗号，或者换行时将wnum+1
	//由于while循环的条件是没有检测到结束，所以还要在while外添加当检测到文档末尾时将wnum+1 
	else if(!strcmp("-w",argv[1])){
			while((ch=getc(fp))!=EOF){
				if(ch==' '||ch==','||ch=='\n'){
					wnum++;
				}
		}
		if((ch=getc(fp))==EOF){
			wnum++;
		}
		printf("单词数为：%d\n",wnum);
		fclose(fp);
	}
	return 0;
}
