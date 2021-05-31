/*
This file is a part of FAMSA software distributed under GNU GPL 3 licence.
The homepage of the FAMSA project is http://sun.aei.polsl.pl/REFRESH/famsa

Authors: Sebastian Deorowicz, Agnieszka Debudaj-Grabysz, Adam Gudys

*/

#ifndef _UTILS_H
#define _UTILS_H

void mem_clear(void* ptr, size_t size);
void mem_clear_avx(void* ptr, size_t size);
void mem_clear_avx2(void* ptr, size_t size);

template<typename T> 
T max4(T x1, T x2, T x3, T x4) 
{
	T p1 = (x1 > x2) ? x1 : x2;
	T p2 = (x3 > x4) ? x3 : x4;
	
	return (p1 > p2) ? p1 : p2;
}

#endif