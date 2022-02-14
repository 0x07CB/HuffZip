/*
 *  HUFF_CPP.h
 *  HuffZip
 *
 *  Created by rick sanchez on 2/12/22.
 *  Copyright 2022 __MyCompanyName__. All rights reserved.
 *
 */

#include <stdio.h>
#include <fcntl.h>
#include <ctype.h>

#define TAILLE_ASCII 255
#define TAILLE_BUFFER 1024
#define FIN_FICHIER 0x1A
#define MAXCODE 65
#define LONGCODE 6

// ---------------


typedef enum { false, true  } T_Bool;
/* declaration des types de données pour construire l'arbre */

/* definition d'une feuille */
	/* feuille de l'arbre :	soit un noeud   */
	/*						soit une donnee */
	typedef struct S_Feuille 
	{
		T_Bool Noeud; /* vrai = noeud , faux = feille */
		union
		{
			unsigned char Data; /* donnee d'une feuille */
			struct  S_Noeud * Ptr; /* ptr sur un noeud */
		} U_Feuille;
		
	} T_Feuille;
	
	/* definition d'un noeud de l'arbre */
	typedef struct S_Noeud
	{
			T_Feuille FDroite;	/**/
			T_Feuille FGauche;	/**/
			char CodeNoeud[MAXCODE]; /**/
	} T_Noeud;
	
	typedef struct {
		long Cumul;
		T_Feuille