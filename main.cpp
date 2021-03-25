#include <iostream>
#include <fstream>
#include "sculptor.h"
#include "voxel.h"
using namespace std;
int main(void)
{
    sculptor boneca(200,200,200);
    boneca.setColor(1,0.8,0.6,1);
    //cabeça
    boneca.putSphere(70,68,70,10);
    //tiara
    boneca.setColor(1,0,0,1);
    boneca.putBox(66,75,78,79,69,72);
    // cabelo
    boneca.setColor (0,0,0,1);
    boneca.putBox(70,62,68,79,74,70);
    //lado direita
    boneca.putBox(75,76,77,78,69,72);
    boneca.putBox(76,78,76,77,69,72);
    boneca.putBox(78,79,74,76,69,72);
    boneca.putBox(77,78,75,74,69,72);
    // lado esquerdo
    boneca.putBox(65,66,77,78,69,72);
    boneca.putBox(63,65,76,77,69,72);
    boneca.putBox(62,63,74,76,69,72);
    boneca.putBox(61,62,75,74,69,72);
    //corpo
    boneca.setColor(1,0,0.4,1);
    boneca.putBox(62,78,48,60,62,78);
    //braço esquerdo
    boneca.putBox(58,62,50,58,66,70);
    boneca.putBox(58,62,50,54,66,76);
    //braço direito
    boneca.putBox(78,82,50,58,66,70);
    boneca.putBox(78,82,50,54,66,76);
    //pernas
    boneca.setColor(1,0.8,0.6,1);
    boneca.putBox(62,67,41,48,67,73);
    boneca.putBox(73,78,41,48,67,73);
    //măos
    boneca.putBox(58,62,50,54,76,79);
    boneca.putBox(78,82,50,54,76,79);
    //bolsa
    boneca.setColor(1,1,1,1);
    boneca.putBox(78,82,50,54,76,77);
    boneca.putBox(78,82,47,50,75,78);
    //botao da bolsa
    boneca.setColor(0,0,0,1);
    boneca.putVoxel(79,49,77);
    boneca.putVoxel(80,49,77);
    //pés
    boneca.setColor(1,1,1,1);
    boneca.putBox(62,67,39,41,67,75);
    boneca.putBox(73,78,39,41,67,75);
    boneca.setColor(0,0,0,1);
    boneca.putBox(62,67,38,39,67,75);
    boneca.putBox(73,78,38,39,67,75);
    //face
    boneca.setColor(1,0.29,0.29,1);
    boneca.putBox(68,72,64,66,79,80);
    boneca.setColor(0,0,0,1);
    boneca.putBox(65,68,68,71,79,80);
    boneca.putBox(72,75,68,71,79,80);
    //detalhes da face
    boneca.setColor(1,0.8,0.6,1);
    boneca.putBox(69,71,65,66,79,80);
    boneca.putVoxel(68,64,79);
    boneca.putVoxel(71,64,79);
    boneca.writeOFF((char*)"boneca.off");
    return 0;
}
