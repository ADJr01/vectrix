//
// Created by STHEP on 7/15/2025.
//

#include "MatrixPartition.h"
#include <iostream>
#include <memory>
typedef struct {
    int currentRowIndex;
    int maxRowIndex;
    int rowSize;
    int rowIndexItem;
    bool hasNextRow() const {
        return  currentRowIndex<maxRowIndex;
    }
    bool hasNextIndexItem() const {
        return rowIndexItem<rowSize;
    }
}RowCursor;

typedef struct {
    int currentColumnIndex;
    int maxColumnIndex;
    int columnSize;
    int columnIndexItem;
    bool hasNextColumn() const {
        return  currentColumnIndex<maxColumnIndex;
    }
    bool hasNextIndexItem() const {
        return columnIndexItem<columnSize;
    }
}ColumnCursor;


