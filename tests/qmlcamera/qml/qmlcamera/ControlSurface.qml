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

import QtQuick 2.0

Rectangle {
    id: controlRect
    color: "#000000"
    property real xValue : 0
    property real yValue : 0
    property real minXValue : 0
    property real minYValue : 0
    property real maxXValue : 0
    property real maxYValue : 0

    property real halfWidth: width / 2.0;
    property real halfHeight: height / 2.0;

    Rectangle {
        id: pointer
        color: "#FFFFFF"
        width: 5
        height: 5
    }

    MouseArea {
        id: inputArea
        anchors.fill: parent
        onPositionChanged: {
            pointer.x = Math.min(Math.max(0, mouse.x), controlRect.width - pointer.width );
            pointer.y = Math.min(Math.max(0, mouse.y), controlRect.height - pointer.height);
            var mixX = (mouse.x / controlRect.width);
            var mixY = (mouse.y / controlRect.width);
            controlRect.xValue = minXValue*(1-mixX) + maxXValue*mixX;
            controlRect.yValue = minYValue*(1-mixY) + maxYValue*mixY;
        }
    }
}
