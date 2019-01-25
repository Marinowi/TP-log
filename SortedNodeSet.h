/*************************************************************************
                           SortedNodeSet  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI & M.WOIRIN$
    e-mail               : $mahamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <SortedNodeSet> (fichier SortedNodeSet.h) ----------------
#if !defined(SORTEDNODESET_H)
#define SORTEDNODESET_H

//--------------------------------------------------- Interfaces utilisées
#include "NodeSet.h"
#include <iostream>

using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <SortedNodeSet>
//
//
//------------------------------------------------------------------------

class SortedNodeSet
{
    //----------------------------------------------------------------- PUBLIC

  public:
    //----------------------------------------------------- Méthodes publiques
    void copy ( const NodeSet & aNodeSet );
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
  
    friend ostream & operator<< (ostream & out, const SortedNodeSet & aSortedNodeSet);

    //-------------------------------------------- Constructeurs - destructeur
    SortedNodeSet(const SortedNodeSet &aSortedNodeSet);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    SortedNodeSet();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~SortedNodeSet();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

  protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
};

ostream & operator<< (ostream & out, const SortedNodeSet & aSortedNodeSet);

//-------------------------------- Autres définitions dépendantes de <SortedNodeSet>

#endif // SORTEDNODESET_H
