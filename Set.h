/*************************************************************************
                           Set  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <Set> (fichier Set.h) ----------------
#if ! defined ( SET_H )
#define SET_H

//--------------------------------------------------- Interfaces utilisées
#include <string.h>
#include <unordered_map>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Set>
//
//
//------------------------------------------------------------------------

class Set
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

//-------------------------------------------- Constructeurs - destructeur
    Set ( const Set & aSet );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Set ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Set ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
unordered_multimap <string, int> elements;
};

//-------------------------------- Autres définitions dépendantes de <Set>

#endif // SET_H

