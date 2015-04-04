/*
 * =====================================================================================
 *
 *       Filename:  setuidtest.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  Sunday 29 March 2015 09:16:09  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ankit Patel (akt), ankit.2471@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <sdlib.h>
#include <stdio.h> 
#include <unistd.h> 
 
int main () 
{
    printf ("uid=%d euid=%d\n", (int) getuid (), (int) geteuid ()); 
      return 0; 
}
