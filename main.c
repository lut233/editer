/*TODO:
        编辑
        导入，导出（保存）
        

*/
/////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "F_edit.h"
#define clean_buf                                 \
    while (getchar() != '\n' && getchar() != EOF) \
        ;

/////////////////////////////////////////////////////////////////////////
int main()            
{
    

    clean_buf;
    printf("\nBye!\n");
    getchar();
    return 0;
}