android|ios {
    error( "This example is not supported for android or ios." )
}

requires(qtHaveModule(multimedia))

!include( ../examples.pri ) {
    error( "Couldn't find the examples.pri file!" )
}

TARGET = audiolevels

QT += multimedia

SOURCES += main.cpp \
           audiolevels.cpp \
           audiolevelsiodevice.cpp

HEADERS += audiolevels.h \
           audiolevelsiodevice.h

OTHER_FILES += doc/src/* \
               doc/images/*
