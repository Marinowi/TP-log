/*************************************************************************
                           Line  -  description
                             -------------------
    début                : $25.01.19$
    copyright            : (C) $3IF2$ par $M.MESSALTI AUTHOR M.WOIRIN$
    e-mail               : $mohamed.messalti@insa-lyon.fr maxime.woirin@insa-lyon.fr$
*************************************************************************/

//---------- Interface de la classe <Line> (fichier Line.h) ----------------
#if !defined(LINE_H)
#define LINE_H

//--------------------------------------------------- Interfaces utilisées
#include <string.h>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
typedef struct date_s
{
  int day;
  string mounth;
  int year;
  int hour;
  int minutes;
  int seconds;
  int timeZone;
} date;
//------------------------------------------------------------------------
// Rôle de la classe <Line>
//
//
//------------------------------------------------------------------------

class Line
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
  Line &operator=(const Line &aLine);
  // Mode d'emploi :
  //
  // Contrat :
  //

  //-------------------------------------------- Constructeurs - destructeur
  Line(const Line &aLine);
  // Mode d'emploi (constructeur de copie) :
  //
  // Contrat :
  //

  Line();
  // Mode d'emploi :
  //
  // Contrat :
  //

  virtual ~Line();
  // Mode d'emploi :
  //
  // Contrat :
  //

  string IP;
  string userLogname;
  string userName;
  date d;
  string requestType;
  string requestDest;
  int returnCode;
  int dataSize;
  string referer;
  string browserID;

  //------------------------------------------------------------------ PRIVE

protected:
  //----------------------------------------------------- Méthodes protégées

  //----------------------------------------------------- Attributs protégés
};

//-------------------------------- Autres définitions dépendantes de <Line>

#endif // LINE_H
