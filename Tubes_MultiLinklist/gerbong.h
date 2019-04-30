#ifndef GERBONG_H_INCLUDED
#define GERBONG_H_INCLUDED
#include <stdlib.h>
#define next(P) P->next
#define firstJ(L) L.firstJ
#define info(P) P->info
#include <string>

using namespace std;

/*Gerbong.h semua nya yang bikin
    Meyzo Naufal Romzi
    if 42 04
    1301184299*/

typedef struct jadwal infotypeJ;
typedef struct elmjdwl *jdwl;

struct jadwal
{
    string hari;
    string nama;
    string NIP;
    int idjdwl;
    int banyak;

};
struct elmjdwl
{
    infotypeJ info;
    jdwl next;
};
struct ListJ
{
    jdwl firstJ;
};

void createListJ(ListJ &L);
jdwl alokasijdwl(ListJ &L, string day, int waktu);
void insertLastjdwl(ListJ &L, jdwl P);
void printInfojdwl(ListJ L);
jdwl findjdwl(ListJ L);
void jadwalpen(ListJ &L);
jdwl dealokasi(jdwl &P);

#endif // GERBONG_H_INCLUDED
