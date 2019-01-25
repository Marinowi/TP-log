/*************************************************************************
                           Reader  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Reader> (fichier Reader.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Reader.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Reader::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Reader::Reader(const Reader &aReader)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Reader>" << endl;
#endif
} //----- Fin de Reader (constructeur de copie)

Reader::Reader()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Reader>" << endl;
#endif
} //----- Fin de Reader

Reader::~Reader()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Reader>" << endl;
#endif
} //----- Fin de ~Reader

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
