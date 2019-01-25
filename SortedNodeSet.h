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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------- Surcharge d'opérateurs
    SortedNodeSet &operator=(const SortedNodeSet &aSortedNodeSet);
    // Mode d'emploi :
    //
    // Contrat :
    //

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

//-------------------------------- Autres définitions dépendantes de <SortedNodeSet>

#endif // SORTEDNODESET_H
