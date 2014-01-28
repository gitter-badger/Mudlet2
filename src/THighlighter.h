#ifndef _THIGHLIGHTER_H
#define _THIGHLIGHTER_H




#include <QRegExp>
#include <QString>
#include <QSyntaxHighlighter>
#include <QTextDocument>
#include <QTextCharFormat>
#include <QVector>


class THighlighter : public QSyntaxHighlighter
{
    Q_OBJECT

public:
                                THighlighter( QTextDocument * parent = 0 );
    void                        setSearchPattern( QString p );



protected:
    void                        highlightBlock( const QString & text );



private:
    struct HighlightingRule
    {
        QRegExp pattern;
        QTextCharFormat format;
    };
    QString                     mSearchPattern;
    QVector<HighlightingRule>   highlightingRules;
    QRegExp                     commentStartExpression;
    QRegExp                     commentEndExpression;
    QRegExp                     stringStart;
    QRegExp                     stringEnd;
    QTextCharFormat             keywordFormat;
    QTextCharFormat             searchFormat;
    QTextCharFormat             classFormat;
    QTextCharFormat             singleLineCommentFormat;
    QTextCharFormat             multiLineCommentFormat;
    QTextCharFormat             quotationFormat;
    QTextCharFormat             functionFormat;
     //bool isString;
};


#endif //_THIGHLIGHTER_H
