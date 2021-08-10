/***************************************************************************
 *   This file is part of the CuteReport project                           *
 *   Copyright (C) 2012-2017 by Alexander Mikhalov                         *
 *   alexander.mikhalov@gmail.com                                          *
 *                                                                         *
 **                   GNU General Public License Usage                    **
 *                                                                         *
 *   This library is free software: you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation, either version 3 of the License, or     *
 *   (at your option) any later version.                                   *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                         *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 ***************************************************************************/

#ifndef FRAMEEDITOR_H
#define FRAMEEDITOR_H

#include <QWidget>
#include <QPointer>
#include <QHash>

namespace Ui {
class FrameEditor;
}

class FrameEditor : public QWidget
{
    Q_OBJECT

public:
    explicit FrameEditor(QWidget *parent = 0);
    ~FrameEditor();

    void setObject(QObject * object);
    void setObjectList(const QObjectList & objects);
    void setFramePropertyName(const QString & propertyName);
    void setPenPropertyName(const QString &propertyName);
    void update();
    void clear();
    QString alignPropertyName();

    void setFrame(int frame);
    int frame();
    void setPen(const QPen &pen, QObject * object);
    QPen pen(QObject * object);

private slots:
    void frameToObjectProperty();
    void frameFromObjectProperty();
    void penToObjectProperty();
    void penFromObjectProperty();
    void buttonPressed();
    void penWidthChanged();

private:
    Ui::FrameEditor *ui;
    QPointer<QObject> m_object;
    QObjectList m_objectList;
    QString m_framePropertyName;
    QString m_penPropertyName;
    QHash<QObject *, QPen> m_origPen; // we don't change all pen parameters so we need to able to restore pen correctly
    bool m_doProcessControls;
};

#endif // FRAMEEDITOR_H
