/*************************************************************************
                           Reader  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <Reader> (fichier Reader.h) ----------------
#if !defined(READER_H)
#define READER_H

//--------------------------------------------------- Interfaces utilisées
#include <fstream>

using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Reader>
//
//
//------------------------------------------------------------------------

class Reader : public ifstream
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
    Reader &operator=(const Reader &aReader);
    // Mode d'emploi :
    //
    // Contrat :
    //

    //-------------------------------------------- Constructeurs - destructeur
    Reader(const Reader &aReader);
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Reader();
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Reader();
    // Mode d'emploi :
    //
    // Contrat :
    //

    //------------------------------------------------------------------ PRIVE

  protected:
    //----------------------------------------------------- Méthodes protégées

    //----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <Reader>

#endif // READER_H
