#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(float x, float y, float z){

    this->x = x;
    this->y = y;
    this->z = z;
    this->sujeta = false;
}
float BrazoRobotico::getX(){
    std::cout << "Posición en X: " << x << std::endl;
    return x;
}
float BrazoRobotico::getY(){
    std::cout << "Posición en Y: " << y << std::endl;
    return y;
}
float BrazoRobotico::getZ(){
    std::cout << "Posición en Z: " << z << std::endl;
    return z;
}
bool BrazoRobotico::getSujeta(){
    std::cout << "Estado de sujeción: " << (sujeta ? "Sujeta" : "No sujeta") << std::endl;
    return sujeta;
}
void BrazoRobotico::setCoger(){
    sujeta = true;
    std::cout << "El brazo ha cogido el objeto." << std::endl;
}
void BrazoRobotico::setSoltar(){
    sujeta = false;
    std::cout << "El brazo ha soltado el objeto." << std::endl;
}
void BrazoRobotico::setMover(float x, float y, float z){
    this->x+=x;
    this->y+=y;
    this->z+=z;
    std::cout << "El brazo se ha movido a la posición (" << this->x << ", " << this->y << ", " << this->z << ")." << std::endl;
}