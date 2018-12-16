#ifndef COMMUNICATIONDEVICEWIN_H
#define COMMUNICATIONDEVICEWIN_H

#include "ChildBase.h"
#include "./LinkManager.h"
#include <QWidget>
#include <QStandardItemModel>

namespace Ui {
class CommunicationDeviceWin;
}

class CommunicationDeviceWin : public ChildBase
{
    Q_OBJECT

public:
    explicit CommunicationDeviceWin(QWidget *parent = 0, QString itemName = "", QString projName = "");
    ~CommunicationDeviceWin();

public:
    // 打开文件
    void open();
    // 保存文件
    void save();
    // 显示大图标
    void ShowLargeIcon();
    // 显示小图标
    void ShowSmallIcon();

private:
    void ListViewUISetting();
    void ListViewUpdate(QString it);
    void ListViewCommunicationDeviceUpdate();
    void ListViewCOMDeviceUpdate();
    void ListViewNetDeviceUpdate();
    void ListViewBusDeviceUpdate();
    void ListViewOpcDeviceUpdate();

protected:
    void contextMenuEvent(QContextMenuEvent * event);

public slots:
    void on_listViewCommunicationDevice_doubleClicked(const QModelIndex &index);
    void NewDevice();
    void ModifyDevice();
    void DeleteDevice();

private:
    LinkManager *m_pLinkManager;

private:
    Ui::CommunicationDeviceWin *ui;
    QStandardItemModel *pListViewCommDevModel;

};

#endif // COMMUNICATIONDEVICEWIN_H
