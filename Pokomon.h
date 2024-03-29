/****************************************************************************
 * Fichier: Polomon.h
 * Auteur: Alexandre Mao
 * Date: 15 novembre 2016
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Definition et implementation de la classe Pokomon
 ****************************************************************************/

#ifndef POKOMON_H
#define POKOMON_H

#include <QWidget>
#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>
#include <QTableView>
#include <QStandardItemModel>
#include <QPushButton>
#include <QLabel>
#include <QGraphicsView>
#include <QtGui>
#include <QListWidget>
#include <list>
#include <QListWidgetItem>
#include <QString>
#include <QVariant>

class PokemonSizeGraphicsItem : public QGraphicsItem
{
    public:
        PokemonSizeGraphicsItem(QGraphicsItem* parent);

    protected:
        void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
        void paint(QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget = 0)

    private:
        QRectF m_imageRect;
        QImage m_image;
};

void PokemonSizeGraphicsItem::mouseMoveEvent()
{
   // Update the image rect here
}

void PokemonSizeGraphicsItem::paint(QPainter * painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->drawImage(m_imageRect, m_image);
}
#endif // POKOMON_H
