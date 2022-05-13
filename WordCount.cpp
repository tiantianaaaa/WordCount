#include <stdio.h>
 
#include <stdbool.h>
 
_Bool isReadWriteable( const char *filename )
 
{
 
  FILE *fp = fopen( filename, "r+" );  // ��һ���ļ������ڶ�д
 
  if ( fp != NULL )                            // fopen()�Ƿ�ִ�гɹ�
 
  {
 
    fclose(fp);                                // �ɹ����ر��ļ���û�д�����Ҫ����
 
    return true;
 
  }
 
  else                                          // ʧ��
 
    return false;
 
}

