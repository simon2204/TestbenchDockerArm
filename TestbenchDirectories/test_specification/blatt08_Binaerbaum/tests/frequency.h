/**
 * @file
 * Dieses Modul definiert eine Datenstruktur, mit der Worte mit einer
 * H�ufigkeit in Beziehung gesetzt werden k�nnen, und stellt Funktionen
 * zu ihrer Verwaltung zur Verf�gung.
 * 
 * @author  Ulrike Griefahn, Alexander Schmitz
 * @date    2019-08-01
 */

/* ------------------------------------------------------------------------- */
#ifndef _FREQUENCY_H
#define _FREQUENCY_H
/* ------------------------------------------------------------------------- */

/* ===========================================================================
 * Funktionsprototypen
 * ======================================================================== */

/**
 * Erzeut eine neue Struktur mit dem �bergebenen Wort und der �bergebenen 
 * H�ufigkeit. Wird NULL �bergeben, wird das Wort auf NULL gesetzt.
 *
 * @param word      das abzulegende Wort oder NULL                  
 * @param count     die abzulegende H�ufigkeit
 * @return          die neu erzeugte Struktur
 */
extern struct FREQUENCY *frequency_create(const char *word, const int count);

/**
 * L�scht die Struktur und ihren Inhalt. Setzt den �bergebenen Zeiger auf NULL.
 *
 * @param pp_frequency - die zu l�schende Struktur
 */
extern void frequency_destroy(struct FREQUENCY **pp_frequency);

/**
 * Liefert eine neue Kopie des Worts der �bergebenen Frequency-Struktur.
 * 
 * @param p_frequency   die �bergebene Struktur
 * @return              Kopie des Worts der �bergebenen Frequency-Struktur oder
 *                      NULL, wenn keine Struktur �bergeben wurde oder die 
 *                      Struktur kein Wort enth�lt.
 */
extern char *frequency_get_word(const struct FREQUENCY *p_frequency);

/**
 * Liefert die H�ufigkeit der �bergebenen Frequency-Struktur.
 * 
 * @param p_frequency   die �bergebene Struktur
 * @return              H�ufigkeit der �bergebenen Frequency-Struktur oder -1, 
 *                      wenn keine Struktur �bergeben wurde.
 */
extern int frequency_get_count(const struct FREQUENCY *p_frequency);

/**
 * �ndert das Wort der �bergebenen Struktur. Ist das �bergebene Wort gleich
 * NULL, wird das Wort in der Struktur gel�scht.
 *
 * @param p_frequency   Zeiger auf die zu �ndernde Struktur
 * @param word          das einzutragende Wort
 */
extern void frequency_set_word(struct FREQUENCY *p_frequency, 
                               const char *word);

/**
 * �ndert die H�ufigkeit in der �bergebenen Struktur.
 * 
 * @param p_frequency   - Zeiger auf die zu �ndernde Struktur
 * @param count         - die einzutragende H�ufigkeit
 */
extern void frequency_set_count(struct FREQUENCY *p_frequency, 
                                const int count);

/**
 * Vergleicht zwei Frequency-Strukturen miteinander. Die Funktion liefert 0, 
 * wenn beide Strukturen gleich sind, und 1 sonst. Wird keine Struktur oder 
 * eine Struktur ohne Wort �bergeben, ist die R�ckgabe immer 1.
 * 
 * @param p_frequency1 erste der zu vergleichenden Strukturen
 * @param p_frequency2 zweite der zu vergleichenden Strukturen
 * @return 0, wenn beide Strukturen gleich sind, und 1, sonst
 */
extern int frequency_compare(const struct FREQUENCY *p_frequency1, 
                             const struct FREQUENCY *p_frequency2);

/**
 * Gibt eine Textdarstellung der �bergebenen Struktur als String aus.
 * 
 * @param p_frequency   die auszugebende Struktur
 * @return              Textdarstellung der Struktur
 */
extern char *frequency_get_string(const struct FREQUENCY *p_frequency);

/**
 * Gibt die Daten der �bergebenen Struktur auf dem Bildschirm aus.
 * 
 * @param p_frequency   die auszugebende Struktur
 */
extern void frequency_print(const struct FREQUENCY *p_frequency);

/* ------------------------------------------------------------------------ */
#endif
