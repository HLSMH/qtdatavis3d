/****************************************************************************
**
** Copyright (C) 2015 The Qt Company Ltd
** All rights reserved.
** For any questions to The Qt Company, please use contact form at http://qt.io
**
** This file is part of the Qt Data Visualization module.
**
** Licensees holding valid commercial license for Qt may use this file in
** accordance with the Qt License Agreement provided with the Software
** or, alternatively, in accordance with the terms contained in a written
** agreement between you and The Qt Company.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.io
**
****************************************************************************/

#ifndef QTOUCH3DINPUTHANDLER_H
#define QTOUCH3DINPUTHANDLER_H

#include <QtDataVisualization/q3dinputhandler.h>

QT_BEGIN_NAMESPACE_DATAVISUALIZATION

class QTouch3DInputHandlerPrivate;

class QT_DATAVISUALIZATION_EXPORT QTouch3DInputHandler : public Q3DInputHandler
{
    Q_OBJECT

public:
    explicit QTouch3DInputHandler(QObject *parent = 0);
    virtual ~QTouch3DInputHandler();

    // Input event listeners
    virtual void touchEvent(QTouchEvent *event);

private:
    Q_DISABLE_COPY(QTouch3DInputHandler)

    QScopedPointer<QTouch3DInputHandlerPrivate> d_ptr;
};

QT_END_NAMESPACE_DATAVISUALIZATION

#endif
