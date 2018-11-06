/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** Sort int array in ascending order
*/

void my_sort_int_array(int *array, int size)
{
    int min;
    int min_pos;
    int swap;

    for (int i = 0; i < size - 1; i++) {
        min = array[i];
        min_pos = i;
        for (int j = i; j < size; j++) {
            if (array[min_pos] > array[j]) {
                min = array[j];
                min_pos = j;
            }
        }
        swap = array[i];
        array[i] = min;
        array[min_pos] = swap;
    }
}
