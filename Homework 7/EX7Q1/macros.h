#pragma once

/**
* @brief Macro here is a swap template which swaps two variables of type t
* @param t the type of parameters you are swapping
* @param x pointer to the first value
* @param y pointer to the second value
*/
#ifndef SWAP
#define SWAP(t, x, y) {t temp = (x); (x) = (y); (y) = temp;}
#endif