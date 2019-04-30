#include "penumpang.h"
#include <iostream>



using namespace std;

void createListP(ListP &L)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    firstP(L)=NULL;
}

pnmpng alokasipnmpng(penumpang x)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    pnmpng P=new elmpnmpng;
    info(P)=x;
    next(P)=NULL;

    return P;
}

void dealokasi(pnmpng &P)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    delete P;
}

void insertPnmpng(ListP &L, pnmpng P)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    if (firstP(L)==NULL)
    {
        firstP(L)=P;
        next(P)=NULL;
    }
    else
    {
        pnmpng Q = firstP(L);
        while (next(Q)!=NULL)
        {
            Q = next(Q);
        }
        next(Q)=P;
        next(P)=NULL;
    }
}

void deleteFirstP(ListP &L, pnmpng &P)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    if (firstP(L)!= NULL)
    {
        pnmpng P = firstP(L);
        firstP(L) = next(P);
        next(P) = NULL;
        dealokasi(P);
    }
    else if(next(firstP(L))==NULL)
    {
        firstP(L)=NULL;
        next(P)=NULL;
        dealokasi(P);

    }
    else
    {
        cout<<"Data penumpang kosong."<<endl;
    }
}

void deleteLastP(ListP &L, pnmpng &P)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    pnmpng Q = firstP(L);
    while (next(Q)!=P)
    {
        Q=next(Q);
    }
    next(Q)=NULL;
    dealokasi(P);

}

void deleteAfterP(ListP &L, pnmpng prec, pnmpng &P)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    if (firstP(L)!=NULL)
    {
        P = next(prec);
        next(prec) = next(P);
        next(P)=NULL;
        dealokasi(P);
    }
}

pnmpng findPnmpng(ListP L)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    string x;
    cout<<"Cari nama penumpang: ";
    getline(cin, x);
    if(firstP(L)!=NULL)
    {
        pnmpng Q = firstP(L);
        while (info(Q).nama!=x && next(Q)!=NULL)
        {
            Q=next(Q);
        }
        if(info(Q).nama==x)
        {
            return Q;
        }
        else
        {
            cout<<"Penumpang tidak ditemukan"<<endl<<endl;
            return NULL;
        }
    }
}

void printInfoPnmpng(ListP L)
/* Nama : Gready Michael
   NIM  : 1301180188    */
{
    if(firstP(L)!=NULL)
    {
        pnmpng Q = firstP(L);
        while(Q!=NULL)
        {
            cout<<"Nama: "<<info(Q).nama<<endl;
            cout<<"NIP: "<<info(Q).NIP<<endl;
            Q=next(Q);
        }
    }
    else
    {
        cout<<"Data kosong"<<endl;
    }
}

