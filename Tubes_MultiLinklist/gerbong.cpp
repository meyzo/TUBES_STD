#include <iostream>
#include "gerbong.h"

using namespace std;

/* Gerbong.cpp
    Meyzo Naufal Romzi
    1301184299
    if42-04
    */

void createListJ(ListJ &L)
{
    firstJ(L)=NULL;
    insertLastjdwl(L, alokasijdwl(L,"Senin",1));
    insertLastjdwl(L, alokasijdwl(L,"Senin",2));
    insertLastjdwl(L, alokasijdwl(L,"Senin",3));
    insertLastjdwl(L, alokasijdwl(L,"Selasa",1));
    insertLastjdwl(L, alokasijdwl(L,"Selasa",2));
    insertLastjdwl(L, alokasijdwl(L,"Selasa",3));
    insertLastjdwl(L, alokasijdwl(L,"Rabu",1));
    insertLastjdwl(L, alokasijdwl(L,"Rabu",2));
    insertLastjdwl(L, alokasijdwl(L,"Rabu",3));
    insertLastjdwl(L, alokasijdwl(L,"Kamis",1));
    insertLastjdwl(L, alokasijdwl(L,"Kamis",2));
    insertLastjdwl(L, alokasijdwl(L,"Kamis",3));
    insertLastjdwl(L, alokasijdwl(L,"Jumat",1));
    insertLastjdwl(L, alokasijdwl(L,"Jumat",2));
    insertLastjdwl(L, alokasijdwl(L,"Jumat",3));
    insertLastjdwl(L, alokasijdwl(L,"Sabtu",1));
    insertLastjdwl(L, alokasijdwl(L,"Sabtu",2));
    insertLastjdwl(L, alokasijdwl(L,"Sabtu",3));
}

jdwl alokasijdwl(ListJ &L, string day, int waktu)
{
    jdwl P = new elmjdwl;
    info(P).hari = day;
    info(P).idjdwl = waktu;
    next(P)=NULL;

    return P;
}

jdwl dealokasi(jdwl &P)
{
    delete P;
}

void insertLastjdwl(ListJ &L, jdwl P)
{
    if(firstJ(L)==NULL)
    {
        firstJ(L)=P;
        next(P)=NULL;
    }
    else
    {
        jdwl Q = firstJ(L);
        while (next(Q)!=NULL)
        {
            Q=next(Q);
        }
        next(Q)=P;
        next(P)=NULL;
    }
}

void printInfojdwl(ListJ L)
{
    if(firstJ(L)!=NULL)
    {
        jdwl P = firstJ(L);
        while(P!=NULL)
        {
            cout<<"Hari: "<<info(P).hari<<endl;
            int time = info(P).idjdwl;
            switch(time)
            {
            case 1:
                cout<<"Jam pagi: 06.30 - 11.30"<<endl;
                break;
            case 2:
                cout<<"Jam siang: 12.30 - 18.00"<<endl;
                break;
            case 3:
                cout<<"Jam malam: 18.30 - 22.00"<<endl;
                break;
            default:
                cout<<"Tipe tidak cocok"<<endl;
            }
            cout<<endl;
            P=next(P);
        }
    }
}

jdwl findjdwl(ListJ L)
{
    string x;
    int y;
    cout<<"Pilih Hari: ";
    cin>>x;
    cout<<"Pilih Jam:"<<endl;
    cout<<"1. Pagi\n"<<"2. Siang\n"<<"3. Malam\n";
    cout<<"Masukkan nomor: ";
    cin>>y;

    if(firstJ(L)!=NULL)
    {
        jdwl Q = firstJ(L);
        while(Q!=NULL)
        {
            if(info(Q).hari==x && info(Q).idjdwl==y)
            {
                return Q;
            }
            else
            {
                Q=next(Q);
            }
        }
        if(Q==NULL)
        {
            cout<<"jadwal tidak ditemukan"<<endl<<endl;
            return NULL;
        }

    }
}

