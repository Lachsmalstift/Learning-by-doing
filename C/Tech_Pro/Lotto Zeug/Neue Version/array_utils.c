#include "array_utils.h"
#include <stdio.h>

//Finde das groesste Element und gib die Position zurueck
int* find_max(void* array_in, int len_array)
{
/*    int k = 0;
    int* ptr_max = array_in;
    for (int i = 1; i < len_array; i++) 
    {
        if (*(array_in+k) > *ptr_max) ptr_max = array_in+k;
    }*/
    return array_in;
}

//Ausgabe eines arrays auf der Konsole
void print_array(void** array_in, int len_array, void (*func_ptr)(int, void*))
{
    int k = 0;
    for(k = 0; k < len_array; k++) (*func_ptr) (k+1, *(array_in+k));
    printf("\n"); //Leerzeile zum Trennen
}

//Array der groesse nach sortieren (Bubblesort)
void sort_array_up(void** array_in, int len_array)
/*{
    int k = 0, l = 0, temp;
    for(l = 0; l < len_array-1; l++)
    {
    for(k=0; k < len_array -1; k++)
    {
        if (*(array_in+k)>(array_in+k+1))
        {
            //Dreieckstausch
            temp = *(array_in+k+1);
            *(array_in+k+1) = *(array_in+k);
            *(array_in+k) = temp;
        }
    }
}*/
//}

void sort_array_fp(int* array_in, int len_array, void* (*func_ptr)(void*, void*))
{

}
/*{
    int k = 0, l = 0, temp;
    for(l = 0; l < len_array-1; l++)
    {
    for(k=0; k < len_array -1; k++)
    {
        if((*func_ptr)(*(array_in+k), *(array_in+k+1)))
        {
            //Dreieckstausch
            temp = *(array_in+k+1);
            *(array_in+k+1) = *(array_in+k);
            *(array_in+k) = temp;
        }
    }
}
}*/
