/*************************************************************************
                           NodeSet  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <NodeSet> (fichier NodeSet.h) ----------------
#if !defined(NODESET_H)
#define NODESET_H

//--------------------------------------------------- Interfaces utilisées
#include "Set.h"
#include "SortedNodeSet.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <NodeSet>
//
//
//------------------------------------------------------------------------

class NodeSet : public Set
{
  //----------------------------------------------------------------- PUBLIC

public:
  //----------------------------------------------------- Méthodes publiques
  // type Méthode ( liste des paramètres );
  // Mode d'emploi :
  //
  // Contrat :
  //

  //------------------------------------------------- Surcharge d'opérateurs
  NodeSet &operator=(const NodeSet &aNodeSet);
  // Mode d'emploi :
  //
  // Contrat :
  //

  //-------------------------------------------- Constructeurs - destructeur
  NodeSet(const NodeSet &aNodeSet);
  // Mode d'emploi (constructeur de copie) :
  //
  // Contrat :
  //

  NodeSet();
  // Mode d'emploi :
  //
  // Contrat :
  //

  virtual ~NodeSet();
  // Mode d'emploi :
  //
  // Contrat :
  //

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <NodeSet>

#endif // NODESET_H
