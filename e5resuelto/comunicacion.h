#ifndef COMUNICACION_H
#define COMUNICACION_H

#include <QObject>
#include <QDebug>

class Comunicacion : public QObject {
    Q_OBJECT  // Esto le indica a Qt que esta clase usa señales y slots

public:
    explicit Comunicacion(QObject *parent = nullptr) : QObject(parent) {}

signals:
    void enviarMensaje(const QString &mensaje);

public slots:
    void recibirMensaje(const QString &mensaje) {
        qDebug() << "Mensaje recibido:" << mensaje;
    }
};

#endif // COMUNICACION_H
