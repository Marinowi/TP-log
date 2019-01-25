/*************************************************************************
                           SortedNodeSet  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI & M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <SortedNodeSet> (fichier SortedNodeSet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "SortedNodeSet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type SortedNodeSet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
SortedNodeSet::SortedNodeSet(const SortedNodeSet &aSortedNodeSet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <SortedNodeSet>" << endl;
#endif
} //----- Fin de SortedNodeSet (constructeur de copie)

SortedNodeSet::SortedNodeSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <SortedNodeSet>" << endl;
#endif
} //----- Fin de SortedNodeSet

SortedNodeSet::~SortedNodeSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <SortedNodeSet>" << endl;
#endif
} //----- Fin de ~SortedNodeSet

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
