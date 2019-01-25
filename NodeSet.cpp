/*************************************************************************
                           NodeSet  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Réalisation de la classe <NodeSet> (fichier NodeSet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "NodeSet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type NodeSet::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

//------------------------------------------------- Surcharge d'opérateurs
NodeSet &NodeSet::operator=(const NodeSet &aNodeSet)
// Algorithme :
//
{
} //----- Fin de operator =

//-------------------------------------------- Constructeurs - destructeur
NodeSet::NodeSet(const NodeSet &aNodeSet)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <NodeSet>" << endl;
#endif
} //----- Fin de NodeSet (constructeur de copie)

NodeSet::NodeSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <NodeSet>" << endl;
#endif
} //----- Fin de NodeSet

NodeSet::~NodeSet()
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <NodeSet>" << endl;
#endif
} //----- Fin de ~NodeSet

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
