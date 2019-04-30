#include <iostream>
#include "relation.h"
#include "gerbong.h"
#include "penumpang.h"
#include "unistd.h"
#include "windows.h"
#include "inimenu.h"
#include <stdlib.h>
#include <string>
#include <iostream>
#define prev(p) p->prev
using namespace std;



int main()
{
    bool sudah1=false;
    ListP L1;
    ListJ L2;
    Listrel L3;
    penumpang X;
    string hari;
    int waktu;
    int Opsi;

    pnmpng p;
    jdwl p2;
    reladd p3,p4;
    createListP(L1);
    createListJ(L2);
    createlistR(L3);
    tampilanAwal(L1, L2, L3);



    return 0;
}


