#include <stdio.h>
 
#include <stdbool.h>
 
_Bool isReadWriteable( const char *filename )
 
{
 
  FILE *fp = fopen( filename, "r+" );  // 打开一个文件以用于读写
 
  if ( fp != NULL )                            // fopen()是否执行成功
 
  {
 
    fclose(fp);                                // 成功：关闭文件，没有错误需要处理
 
    return true;
 
  }
 
  else                                          // 失败
 
    return false;
 
}

