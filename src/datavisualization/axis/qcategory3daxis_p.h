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

//
//  W A R N I N G
//  -------------
//
// This file is not part of the QtDataVisualization API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.

#ifndef QCATEGORY3DAXIS_P_H
#define QCATEGORY3DAXIS_P_H

#include "qcategory3daxis.h"
#include "qabstract3daxis_p.h"

QT_BEGIN_NAMESPACE_DATAVISUALIZATION

class QCategory3DAxisPrivate : public QAbstract3DAxisPrivate
{
    Q_OBJECT

public:
    QCategory3DAxisPrivate(QCategory3DAxis *q);
    virtual ~QCategory3DAxisPrivate();

    void setDataLabels(const QStringList &labels);

protected:
    virtual bool allowZero();
    virtual bool allowNegatives();
    virtual bool allowMinMaxSame();

private:
    QCategory3DAxis *qptr();

    bool m_labelsExplicitlySet;
    friend class QCategory3DAxis;
};

QT_END_NAMESPACE_DATAVISUALIZATION

#endif
