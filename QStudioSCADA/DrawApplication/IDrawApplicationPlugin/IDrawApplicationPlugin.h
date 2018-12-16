﻿
#ifndef IDRAWAPPLICATIONPLUGIN_H
#define IDRAWAPPLICATIONPLUGIN_H


#include <QStringList>
#include <QIcon>
#include "../Public/IElement.h"
#include "../Public/PublicDefine.h"

/*
* 注意本类不要派生自QObject
*/
class IDrawApplicationPlugin
{
public:
    virtual ~IDrawApplicationPlugin() {}

    // 插件初始化
    virtual void Initialize() = 0;
    // 插件类型
    virtual QString GetPluginType() = 0;
    // 插件ID
    virtual tGraphType GetPluginID() = 0;
    // 插件名称
    virtual QString GetPluginName() = 0;
    // 获取元素的图标
    virtual QIcon GetElementIcon() = 0;
    // 获取元素名称
    virtual QString GetElementName() = 0;
    // 创建元素
    virtual StdElement* CreateElement() = 0;

};


QT_BEGIN_NAMESPACE

#define DrawApplicationPluginInterface_iid "QStudioSCADA.DrawApplication.PluginInterface"
Q_DECLARE_INTERFACE(IDrawApplicationPlugin, DrawApplicationPluginInterface_iid)

QT_END_NAMESPACE

#endif // IDRAWAPPLICATIONPLUGIN_H
