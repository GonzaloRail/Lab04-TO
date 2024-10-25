#include <QApplication>
#include <QPushButton>
#include <QObject>
#include <QDebug>

// Clase Comunicación que hereda de QObject
class Comunicacion : public QObject {
    Q_OBJECT
public:
    explicit Comunicacion(QObject *parent = nullptr) : QObject(parent) {}

signals:
    void enviarMensaje(const QString &mensaje);

public slots:
    void recibirMensaje(const QString &mensaje) {
        qDebug() << "Mensaje recibido:" << mensaje;
    }
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Crear dos objetos tipo Comunicación
    Comunicacion persona1;
    Comunicacion persona2;

    // Conectar señales y slots
    QObject::connect(&persona1, &Comunicacion::enviarMensaje, &persona2, &Comunicacion::recibirMensaje);

    // Enviar un mensaje
    emit persona1.enviarMensaje("Hola, ¿cómo estás?");

    return app.exec();
}
