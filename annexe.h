// PRG1_E
//---------------------------------------------------------------------------------
// Fichier        : annexe.h
// Auteur(s)      : Sirak Mussie et Urs Behrmann
// But            :
// Modifications  :
// Remarque(s)    : NILL
// Compilateur    : MinGW w64 9.0 / C++20
//---------------------------------------------------------------------------------

#ifndef SURVIVOR_ANNEXE_H
#define SURVIVOR_ANNEXE_H

#include <string>

const std::string MSG_ERROR = "La valeur n'est pas dans les limites indiquees!";
/**
     * @name saisie
     *
     *
     *
     * @param min valeur minimal que le nombre retourné peut avoir
     * @param max valeur maximal que le nombre retourné peut avoir
     * @return un nombre aléatoire dans l'interval [min, max]
     * @throws NIL
     */
int saisie(const std::string& MSG, int MIN, int MAX, const std::string&
MSG_ERREUR = MSG_ERROR);

/**
     * @name saisie
     *
     *
     *
     * @param min valeur minimal que le nombre retourné peut avoir
     * @param max valeur maximal que le nombre retourné peut avoir
     * @return un nombre aléatoire dans l'interval [min, max]
     * @throws NIL
     */
int saisie(const std::string& MSG_INTRO, const std::string& MSG, int MIN, int MAX,
           const std::string& MSG_ERROR);

#endif //SURVIVOR_ANNEXE_H
