#include <iostream>

class Calentador
{
private:
    int temperatura;
    int incremento;
public:
    Calentador();    
    void calentar();
    void enfriar();
    void imprimeCentigrados() const;
    void imprimeFarenheit() const;
    int accedeTemperatura() const;
};  // punto y coma obligatorio

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar()
{
    if (temperatura + incremento <= 30) {
        temperatura += incremento;
    }
}

void Calentador::enfriar()
{
    if (temperatura - incremento >= -10)    {
        temperatura -= incremento;
    }
}

void Calentador::imprimeCentigrados() const
{
    std::cout << "La temperatura es " << temperatura 
            << " ºC" << std::endl;    
}

int Calentador::accedeTemperatura() const
{
    return temperatura;    
}

void Calentador::imprimeFarenheit() const
{
    float farenheit = temperatura * 1.8 + 32;
    std::cout << "La temperatura es " << farenheit
                << " ºF" << std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeCentigrados();
    c1.imprimeFarenheit();

    c2.enfriar();
    c2.imprimeCentigrados();
    c2.imprimeFarenheit();
}
