/*************************************************************************
                           ArcSet  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <ArcSet> (fichier ArcSet.h) ----------------
#if !defined(ARCSET_H)
#define ARCSET_H

//--------------------------------------------------- Interfaces utilisées
#include "Set.h"
#include "Line.h"
#include <iostream>

using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ArcSet>
//
//
//------------------------------------------------------------------------

class ArcSet : public Set
{
  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques
  void addArc ( const Line & aLine );
  // Mode d'emploi :
  //
  // Contrat :
  //

  //------------------------------------------------- Surcharge d'opérateurs
  
  friend ostream & operator << (ostream & out, const ArcSet & anArcSet);

  //-------------------------------------------- Constructeurs - destructeur
  ArcSet(const ArcSet &anArcSet);
  // Mode d'emploi (constructeur de copie) :
  //
  // Contrat :
  //

  ArcSet();
  // Mode d'emploi :
  //
  // Contrat :
  //

  virtual ~ArcSet();
  // Mode d'emploi :
  //
  // Contrat :
  //

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés
};

ostream & operator<< (ostream & out, const ArcSet & anArcSet);

//-------------------------------- Autres définitions dépendantes de <ArcSet>

#endif // ARCSET_H
