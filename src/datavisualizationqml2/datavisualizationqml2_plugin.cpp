/****************************************************************************
**
** Copyright (C) 2013 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.digia.com
**
** This file is part of the QtDataVisualization module.
**
** Licensees holding valid Qt Enterprise licenses may use this file in
** accordance with the Qt Enterprise License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.digia.com
**
****************************************************************************/

#include "datavisualizationqml2_plugin.h"

#include <qqml.h>

QT_DATAVISUALIZATION_BEGIN_NAMESPACE

void Datavis3Dqml2Plugin::registerTypes(const char *uri)
{
    // @uri QtDataVisualization
    qmlRegisterUncreatableType<const QAbstractItemModel>(uri, 1, 0, "AbstractItemModel",
                                                         QLatin1String("Trying to create uncreatable: AbstractItemModel."));
    qmlRegisterUncreatableType<QDataVis>(uri, 1, 0, "DataVis",
                                         QLatin1String("Trying to create uncreatable: DataVis."));
    qmlRegisterUncreatableType<Q3DAbstractAxis>(uri, 1, 0, "AbstractAxis3D",
                                                QLatin1String("Trying to create uncreatable: AbstractAxis."));
    qmlRegisterUncreatableType<QAbstractDataProxy>(uri, 1, 0, "AbstractDataProxy",
                                                   QLatin1String("Trying to create uncreatable: AbstractDataProxy."));
    qmlRegisterUncreatableType<QBarDataProxy>(uri, 1, 0, "BarDataProxy",
                                              QLatin1String("Trying to create uncreatable: BarDataProxy."));
    qmlRegisterUncreatableType<QScatterDataProxy>(uri, 1, 0, "ScatterDataProxy",
                                                  QLatin1String("Trying to create uncreatable: ScatterDataProxy."));
    qmlRegisterUncreatableType<QSurfaceDataProxy>(uri, 1, 0, "SurfaceDataProxy",
                                                  QLatin1String("Trying to create uncreatable: SurfaceDataProxy."));
    qmlRegisterUncreatableType<AbstractDeclarative>(uri, 1, 0, "AbstractGraph3D",
                                                    QLatin1String("Trying to create uncreatable: AbstractGraph3D."));
    qmlRegisterUncreatableType<Q3DScene>(uri, 1, 0, "Scene3D",
                                         QLatin1String("Trying to create uncreatable: Scene3D."));
    qmlRegisterUncreatableType<QAbstract3DSeries>(uri, 1, 0, "Abstract3DSeries",
                                                  QLatin1String("Trying to create uncreatable: Abstract3DSeries."));
    qmlRegisterUncreatableType<QBar3DSeries>(uri, 1, 0, "QBar3DSeries",
                                             QLatin1String("Trying to create uncreatable: QBar3DSeries, use Bar3DSeries instead."));
    qmlRegisterUncreatableType<QScatter3DSeries>(uri, 1, 0, "QScatter3DSeries",
                                                 QLatin1String("Trying to create uncreatable: QScatter3DSeries, use Scatter3DSeries instead."));
    qmlRegisterUncreatableType<QSurface3DSeries>(uri, 1, 0, "QSurface3DSeries",
                                                 QLatin1String("Trying to create uncreatable: QSurface3DSeries, use Surface3DSeries instead."));
    qmlRegisterUncreatableType<Q3DTheme>(uri, 1, 0, "Q3DTheme",
                                         QLatin1String("Trying to create uncreatable: Q3DTheme, use Theme3D instead."));
    qmlRegisterUncreatableType<QAbstract3DInputHandler>(uri, 1, 0, "AbstractInputHandler3D",
                                                        QLatin1String("Trying to create uncreatable: AbstractInputHandler3D."));

    qmlRegisterType<DeclarativeBars>(uri, 1, 0, "Bars3D");
    qmlRegisterType<DeclarativeScatter>(uri, 1, 0, "Scatter3D");
    qmlRegisterType<DeclarativeSurface>(uri, 1, 0, "Surface3D");

    qmlRegisterType<Q3DValueAxis>(uri, 1, 0, "ValueAxis3D");
    qmlRegisterType<Q3DCategoryAxis>(uri, 1, 0, "CategoryAxis3D");

    qmlRegisterType<Q3DCamera>(uri, 1, 0, "Camera3D");
    qmlRegisterType<Q3DLight>(uri, 1, 0, "Light3D");

    qmlRegisterType<QItemModelBarDataProxy>(uri, 1, 0, "ItemModelBarDataProxy");
    qmlRegisterType<QItemModelScatterDataProxy>(uri, 1, 0, "ItemModelScatterDataProxy");
    qmlRegisterType<QItemModelSurfaceDataProxy>(uri, 1, 0, "ItemModelSurfaceDataProxy");
    qmlRegisterType<QHeightMapSurfaceDataProxy>(uri, 1, 0, "HeightMapSurfaceDataProxy");

    qmlRegisterType<ColorGradientStop>(uri, 1, 0, "ColorGradientStop");
    qmlRegisterType<ColorGradient>(uri, 1, 0, "ColorGradient");
    qmlRegisterType<DeclarativeColor>(uri, 1, 0, "Color");

    qmlRegisterType<DeclarativeTheme3D>(uri, 1, 0, "Theme3D");

    qmlRegisterType<DeclarativeBar3DSeries>(uri, 1, 0, "Bar3DSeries");
    qmlRegisterType<DeclarativeScatter3DSeries>(uri, 1, 0, "Scatter3DSeries");
    qmlRegisterType<DeclarativeSurface3DSeries>(uri, 1, 0, "Surface3DSeries");
}

QT_DATAVISUALIZATION_END_NAMESPACE

