/**
 * @file
 * Dieses Modul stellt allgemeine Definitionen zur Verf�gung
 *
 * @author  Ulrike Griefahn
 * @date    2012-11-21
 */

#ifndef BTREE_COMMON_H
#define BTREE_COMMON_H
/* ------------------------------------------------------------------------ */


/* ===========================================================================
 * Makros
 * ======================================================================== */

/**
 * Makro zur Pr�fung, ob die Speicherallokation erfolgreich war. Das Programm
 * wird im Fehlerfall mit EXIT_FAILURE beendet.
 */
#define ENSURE_ENOUGH_MEMORY(VAR, FUNCTION) \
{if (VAR == NULL) { printf(FUNCTION ": not enough memory\n"); \
                    exit(EXIT_FAILURE); }}


/* ------------------------------------------------------------------------ */
#endif	/* BTREE_COMMON_H */

