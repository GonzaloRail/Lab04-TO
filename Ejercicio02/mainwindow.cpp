#include "mainwindow.h"
#include <QVBoxLayout>
#include <QListWidgetItem>
#include <QMap>


// Constructor principal
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUI();
    loadCountries();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUI()
{
    // Crear el layout principal
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    // Crear el QListWidget para la lista de países
    countryList = new QListWidget(this);
    layout->addWidget(countryList);

    // Crear QLabel para mostrar la capital y el idioma
    capitalLabel = new QLabel("Capital: ", this);
    layout->addWidget(capitalLabel);

    languageLabel = new QLabel("Idioma: ", this);
    layout->addWidget(languageLabel);

    // Establecer el layout en el widget central
    setCentralWidget(centralWidget);

    // Conectar la señal itemClicked a un slot personalizado
    connect(countryList, &QListWidget::itemClicked, this, &MainWindow::onCountryClicked);
}

void MainWindow::loadCountries()
{
    // Mapa de países con sus capitales e idiomas
    countryData = {
        {"Perú", {"Lima", "Español"}},
        {"Francia", {"París", "Francés"}},
        {"Japón", {"Tokio", "Japonés"}},
        {"Alemania", {"Berlín", "Alemán"}},
        {"España", {"Madrid", "Español"}},
        {"Italia", {"Roma", "Italiano"}},
        {"Brasil", {"Brasilia", "Portugués"}},
        {"China", {"Pekín", "Chino"}},
        {"India", {"Nueva Delhi", "Hindi"}},
        {"México", {"Ciudad de México", "Español"}}
    };

    // Añadir cada país a la lista de visualización
    for (const QString &country : countryData.keys()) {
        countryList->addItem(country);
    }
}

void MainWindow::onCountryClicked(QListWidgetItem *item)
{
    QString country = item->text();

    // Actualizar etiquetas si el país existe en el mapa
    if (countryData.contains(country)) {
        capitalLabel->setText("Capital: " + countryData[country].capital);
        languageLabel->setText("Idioma: " + countryData[country].language);
    }
}
