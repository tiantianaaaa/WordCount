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
	//�����ж�Ҫ�����ļ��Ƿ���� 
	if(fp==NULL){
		printf("�Ҳ����ļ�!"); 
		exit(1);
	}
	//�������-c���������ĵ����ݣ��õ�cnum 
	if(!strcmp("-c",argv[1])){
	while((ch=getc(fp))!=EOF){
		++cnum;
	}
	printf("�ַ���Ϊ��%d\n",cnum);
	fclose(fp); 
	}
	//�������-w��ÿ����⵽�ո�Ӣ�Ķ��ţ����߻���ʱ��wnum+1
	//����whileѭ����������û�м�⵽���������Ի�Ҫ��while����ӵ���⵽�ĵ�ĩβʱ��wnum+1 
	else if(!strcmp("-w",argv[1])){
			while((ch=getc(fp))!=EOF){
				if(ch==' '||ch==','||ch=='\n'){
					wnum++;
				}
		}
		if((ch=getc(fp))==EOF){
			wnum++;
		}
		printf("������Ϊ��%d\n",wnum);
		fclose(fp);
	}
	return 0;
}
