/*************************************************************************
                           ArcSet  -  description
                             -------------------
    début                : 25.01.19
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <ArcSet> (fichier ArcSet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "ArcSet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ArcSet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ArcSet::ArcSet(const ArcSet &anArcSet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ArcSet>" << endl;
#endif
} //----- Fin de ArcSet (constructeur de copie)

ArcSet::ArcSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ArcSet>" << endl;
#endif
} //----- Fin de ArcSet

ArcSet::~ArcSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ArcSet>" << endl;
#endif
} //----- Fin de ~ArcSet

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
