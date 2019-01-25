/*************************************************************************
                           Set  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <Set> (fichier Set.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Set.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Set::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs
Set &Set::operator=(const Set &aSet)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
Set::Set(const Set &aSet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Set>" << endl;
#endif
} //----- Fin de Set (constructeur de copie)

Set::Set()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Set>" << endl;
#endif
} //----- Fin de Set

Set::~Set()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Set>" << endl;
#endif
} //----- Fin de ~Set

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
