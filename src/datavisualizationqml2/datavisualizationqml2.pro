TEMPLATE = lib
TARGET = datavisualizationqml2
QT += qml quick datavisualization
CONFIG += qt plugin

TARGET = $$qtLibraryTarget($$TARGET)
uri = QtDataVisualization

static {
    DEFINES += QT_DATAVISUALIZATION_STATICLIB
    CONFIG -= static staticlib
}

INCLUDEPATH += ../../include \
               ../../include/QtDataVisualization \
               ../datavisualization/engine \
               ../datavisualization/global \
               ../datavisualization/data \
               ../datavisualization/theme

SOURCES += \
    datavisualizationqml2_plugin.cpp \
    declarativebars.cpp \
    declarativescatter.cpp \
    declarativesurface.cpp \
    abstractdeclarative.cpp \
    colorgradient.cpp \
    declarativeseries.cpp \
    declarativerenderer.cpp \
    declarativetheme.cpp \
    declarativecolor.cpp

HEADERS += \
    datavisualizationqml2_plugin.h \
    declarativebars_p.h \
    declarativescatter_p.h \
    declarativesurface_p.h \
    abstractdeclarative_p.h \
    colorgradient_p.h \
    declarativeseries_p.h \
    declarativerenderer_p.h \
    declarativetheme_p.h \
    declarativecolor_p.h

OTHER_FILES = qmldir

!equals(_PRO_FILE_PWD_, $$OUT_PWD) {
    copy_qmldir.target = $$OUT_PWD/qmldir
    copy_qmldir.depends = $$_PRO_FILE_PWD_/qmldir
    copy_qmldir.commands = $(COPY_FILE) \"$$replace(copy_qmldir.depends, /, $$QMAKE_DIR_SEP)\" \"$$replace(copy_qmldir.target, /, $$QMAKE_DIR_SEP)\"
    QMAKE_EXTRA_TARGETS += copy_qmldir
    PRE_TARGETDEPS += $$copy_qmldir.target
}

qmldir.files = qmldir

installPath = $$[QT_INSTALL_QML]/$$replace(uri, \\., /)
qmldir.path = $$installPath
target.path = $$installPath
INSTALLS += target qmldir

