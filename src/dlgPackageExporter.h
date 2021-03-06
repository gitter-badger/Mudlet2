#ifndef _DLG_PACKAGE_EXPORTER_H
#define _DLG_PACKAGE_EXPORTER_H



#include <QDialog>
#include <QList>
#include <QPushButton>
#include <QString>
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QWidget>

class TAction;
class TAlias;
class TKey;
class TScript;
class TTrigger;
class TTimer;
class Host;

namespace Ui {
class dlgPackageExporter;
}

class dlgPackageExporter : public QDialog
{
    Q_OBJECT

public:
    explicit dlgPackageExporter(QWidget *parent = 0);
    explicit dlgPackageExporter(QWidget *parent, Host*);
    ~dlgPackageExporter();
    void recurseTree(QTreeWidgetItem *, QList<QTreeWidgetItem *>&);
    void listTriggers();
    void recurseTriggers(TTrigger*, QTreeWidgetItem*);
    void listAliases();
    void recurseAliases(TAlias*, QTreeWidgetItem*);
    void listScripts();
    void recurseScripts(TScript*, QTreeWidgetItem*);
    void listKeys();
    void recurseKeys(TKey*, QTreeWidgetItem*);
    void listActions();
    void recurseActions(TAction*, QTreeWidgetItem*);
    void listTimers();
    void recurseTimers(TTimer*, QTreeWidgetItem*);
    QMap<QTreeWidgetItem *, TTrigger*> triggerMap;
    QMap<QTreeWidgetItem *, TTrigger*> modTriggerMap;
    QMap<QTreeWidgetItem *, TAlias*> aliasMap;
    QMap<QTreeWidgetItem *, TAlias*> modAliasMap;
    QMap<QTreeWidgetItem *, TScript*> scriptMap;
    QMap<QTreeWidgetItem *, TScript*> modScriptMap;
    QMap<QTreeWidgetItem *, TKey*> keyMap;
    QMap<QTreeWidgetItem *, TKey*> modKeyMap;
    QMap<QTreeWidgetItem *, TAction*> actionMap;
    QMap<QTreeWidgetItem *, TAction*> modActionMap;
    QMap<QTreeWidgetItem *, TTimer*> timerMap;
    QMap<QTreeWidgetItem *, TTimer*> modTimerMap;
private:
    Ui::dlgPackageExporter *ui;
    Host* mpHost;
    QTreeWidget * treeWidget;
    QPushButton *exportButton;
    QPushButton *closeButton;
    QString filePath;
    QString tempDir;
    QString packageName;
    QString zipFile;
public slots:
    void slot_addFiles();
    void slot_browse_button();
    void slot_export_package();
};


#endif //_DLG_PACKAGE_EXPORTER_H
