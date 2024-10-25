#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QLabel>
#include <QMap>

// Definir la estructura para almacenar capital e idioma
struct CountryInfo {
    QString capital;
    QString language;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onCountryClicked(QListWidgetItem *item);

private:
    void setupUI();
    void loadCountries();

    QListWidget *countryList;
    QLabel *capitalLabel;
    QLabel *languageLabel;

    // Declaración del mapa de datos de países
    QMap<QString, CountryInfo> countryData;
};

#endif // MAINWINDOW_H
