#include "array_utils.c"
//Definition unserer Sortierbedingung
int is_greater(int a, int b)
{
    return a>b;
}

int is_smaller(int a, int b)
{
    return a<b;
}

void my_print_func(int k, void* array_ele)
{
    printf("[%i] = %i\n", k, *((int*)array_ele));
}

int main()
{
int ay_array[8] = {5,2,13,25,4,9,12,1};
print_array(ay_array,8,&my_print_func);
/*sort_array_fp(ay_array,8,&is_greater);
print_array(ay_array,8);
sort_array_fp(ay_array,8,&is_smaller);
print_array(ay_array,8);
printf("Das Maximale Element ist: %i\n", *find_max(ay_array,8));*/
    return 0;
}