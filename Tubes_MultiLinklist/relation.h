#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED
#include "gerbong.h"
#include "penumpang.h"
#include "relation.h"
#define firstR(L) L.firstR
#define lastR(L) L.lastR
#define info(P) P->info
#include <iostream>
#include <stdlib.h>
 /*   Nama: Meyzo Naufal Romzi//Gready Michael
      NIM:  1301184299//1301180188  */
using namespace std;

struct relasi
{
    pnmpng infoPeg;
    jdwl infoShi;
};

typedef struct elmrel *reladd;
typedef struct relasi infotypeR;
struct elmrel
{
    infotypeR info;
    reladd next;
    reladd prev;
};

struct Listrel
{
    reladd firstR;
    reladd lastR;
};

void createlistR(Listrel &L);
reladd alokasirel(Listrel &L, pnmpng x, jdwl y);
void insertRel (Listrel &L,reladd &P );
void printinfoRel(Listrel &L);
bool findRelasi(Listrel L, pnmpng x, jdwl y);
void menuAddPeg(ListP &L);
void menuAddRel(ListP L1, ListJ L2, Listrel &L);
//void deleteRelP(Listrel &L, string x);
void deleteFirstR(Listrel &L, reladd &p);
void deleteLastR(Listrel &L, reladd &p);
void deleteAfterR(Listrel &L, reladd prec, reladd &p);
void showDay(Listrel L);
reladd findRel(Listrel L, string x);
void deletePeg(ListP &L, Listrel &L2);  //perlu disempurnakan dan direvisi. //perlu disempurnakan
reladd findname(Listrel L, string x);
void deleteRelasi(Listrel &L, reladd p);
void deletejdwl(ListJ &L, Listrel &L2);
void showPeg(ListP L, Listrel L2);
#endif // RELASI_H_INCLUDED
