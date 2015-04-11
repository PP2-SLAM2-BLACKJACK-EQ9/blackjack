TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../BlackJack/BlackJack/BlackJack.Windows/Joueur.cpp \
    ../BlackJack/BlackJack/BlackJack.Windows/Table.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    ../BlackJack/BlackJack/BlackJack.Windows/Carte.h \
    ../BlackJack/BlackJack/BlackJack.Windows/Joueur.h \
    ../BlackJack/BlackJack/BlackJack.Windows/Table.h

