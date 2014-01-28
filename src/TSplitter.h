#ifndef _TSPLITTER_H
#define _TSPLITTER_H



#include <QSplitter>
#include <QSplitterHandle>
#include <QWidget>

class TSplitterHandle;

class TSplitter : public QSplitter
{
    Q_OBJECT

public:
                        TSplitter( Qt::Orientation orientation, QWidget * parent = 0 );

protected:
     QSplitterHandle *  createHandle();

     TSplitterHandle *  mpSplitterHandle;
};


#endif //_TSPLITTER_H
