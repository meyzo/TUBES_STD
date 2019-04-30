#ifndef PENUMPANG_H_INCLUDED
#define PENUMPANG_H_INCLUDED

#define next(P) P->next
#define info(P) P->info
#define firstP(L) L.firstP
#include <string>
#define str string
#include <stdlib.h>

/* Nama : Gready Michael
   NIM  : 1301180188    */
using namespace std;

typedef struct penumpang infotypeP;
typedef struct elmpnmpng *pnmpng;

struct penumpang{
    string nama;
    string NIP;
    int jumlah;
};

struct elmpnmpng{
    infotypeP info;
    pnmpng next;
};

struct ListP{
    pnmpng firstP;
};

void createListP(ListP &L);
pnmpng alokasipnmpng(penumpang x);
void dealokasi(pnmpng &p);
void insertPnmpng(ListP &L, pnmpng p);
void deleteFirstP(ListP &L, pnmpng &p);
void deleteLastP(ListP &L, pnmpng &p);
void deleteAfterP(ListP &L, pnmpng prec, pnmpng &p);
pnmpng findPnmpng(ListP L);
void printInfoPnmpng(ListP L);


#endif // PENUMPANG_H_INCLUDED
