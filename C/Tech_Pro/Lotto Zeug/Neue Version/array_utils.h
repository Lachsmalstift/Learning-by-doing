#ifdef _ARRAY_UTILS_H_
#define _ARRAY_UTILS_H_

//Finde das groesste Element und gib die Position zurueck
void* find_max(void**, int);

//Ausgabe eines arrays auf der Konsole
void print_array(void**, int, void (*(func_ptr)int,void*))

//Array der groesse nach sortieren - simpler bubblesort
void sort_array_up(void**, int);

void sort_array_fp(void**, int, int(*func_ptr)(void*, void*));

#endif //_ARRAY_UTILS_H_