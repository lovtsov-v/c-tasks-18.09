#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    //size1 > size2

    int table_size1, table_size2;

    int box_size1, box_size2;

    scanf("%d%d", &table_size1, &table_size2);
    scanf("%d%d", &box_size1, &box_size2);
    
    int boxes_count_col_vert = (int)table_size1 / box_size1;
    int boxes_count_row_vert = (int)table_size2 / box_size2;

    int boxes_count_col_hor = (int)table_size1 / box_size2;
    int boxes_count_row_hor = (int)table_size2 / box_size1;

    if (
        boxes_count_col_vert * boxes_count_row_vert > 
        boxes_count_col_hor * boxes_count_row_hor
    ) {
        printf("Большей коробок к большей стола уместится больше\n");
    } else {
        printf("Меньшей коробок к большей стола уместится больше\n");
    }

    return 0;
}