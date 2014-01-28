
#include <QSplitterHandle>
#include "TSplitter.h"
#include "TSplitterHandle.h"

TSplitter::TSplitter( Qt::Orientation o, QWidget * p )
: QSplitter( o, p )
{
}

QSplitterHandle * TSplitter::createHandle()
{
    return new TSplitterHandle( orientation(), this );
}

