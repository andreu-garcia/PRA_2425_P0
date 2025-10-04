#ifndef BRAZO_ROBOTICO_H
#define BRAZO_ROBOTICO_H

class BrazoRobotico {
public:
    BrazoRobotico(float x, float y, float z);
    float getX();
    float getY();
    float getZ();
    bool getSujeta();
    void setCoger();
    void setSoltar();
    void setMover(float x, float y, float z);

private:
    float x, y, z; 
    bool sujeta;
};

#endif 