#include<stdio.h>
#include<string.h>
#include<unistd.h>

#define symbol '#'
#define bufferNum 101

#define totleMB 1024
#define speedMB 1.0


void process_v1();
void DownLode();
void  process_v2(int totle,double current);