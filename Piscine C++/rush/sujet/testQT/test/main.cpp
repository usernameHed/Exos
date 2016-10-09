//#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QFont>
#include <QIcon>

//#include <QtWidgets>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Création d'un widget qui servira de fenêtre
    QWidget fenetre;
    fenetre.setFixedSize(300, 150);

    // Création du bouton, ayant pour parent la "fenêtre"
    QPushButton bouton("Pimp mon bouton !", &fenetre);
    //bouton.move(60, 50);


    // Personnalisation du bouton
    bouton.setFont(QFont("Comic Sans MS", 14));
    bouton.setCursor(Qt::PointingHandCursor);
    bouton.setIcon(QIcon("test.png"));

    bouton.setGeometry(60, 50, 180, 70);


    // Création d'un autre bouton ayant pour parent le premier bouton
    QPushButton autreBouton("Autre bouton", &bouton);
    autreBouton.move(0, 15);

    // Affichage de la fenêtre
    fenetre.show();

    return app.exec();
}
