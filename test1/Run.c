#include <stdio.h>

# if _WIN32    //识别windows平台

#include <windows.h>

#elif __linux__  //识别linux平台
#include<unistd.h>

#endif


int main(void){
   char a[]={'a','0','c'};
   printf("输出的值为：%d",a);
    
    return 0;
}