   /*******************************************************/
   /*      "C" Language Integrated Production System      */
   /*                                                     */
   /*             CLIPS Version 6.24  06/05/06            */
   /*                                                     */
   /*         DEFFACTS BASIC COMMANDS HEADER FILE         */
   /*******************************************************/

/*************************************************************/
/* Purpose: Implements core commands for the deffacts        */
/*   construct such as clear, reset, save, undeffacts,       */
/*   ppdeffacts, list-deffacts, and get-deffacts-list.       */
/*                                                           */
/* Principal Programmer(s):                                  */
/*      Gary D. Riley                                        */
/*                                                           */
/* Contributing Programmer(s):                               */
/*      Brian L. Dantes                                      */
/*                                                           */
/* Revision History:                                         */
/*      6.23: Corrected compilation errors for files         */
/*            generated by constructs-to-c. DR0861           */
/*                                                           */
/*      6.24: Renamed BOOLEAN macro type to intBool.         */
/*                                                           */
/*************************************************************/

#ifndef _H_dffctbsc
#define _H_dffctbsc

#ifndef _H_evaluatn
#include "evaluatn.h"
#endif

#ifdef LOCALE
#undef LOCALE
#endif

#ifdef _DFFCTBSC_SOURCE_
#define LOCALE
#else
#define LOCALE extern
#endif

#define GetDeffactsList(a,b) EnvGetDeffactsList(GetCurrentEnvironment(),GetCurrentExecutionStatus(),a,b)
#define ListDeffacts(a,b) EnvListDeffacts(GetCurrentEnvironment(),GetCurrentExecutionStatus(),a,b)
#define Undeffacts(a) EnvUndeffacts(GetCurrentEnvironment(),GetCurrentExecutionStatus(),a)

   LOCALE void                           DeffactsBasicCommands(void *,EXEC_STATUS);
   LOCALE void                           UndeffactsCommand(void *,EXEC_STATUS);
   LOCALE intBool                        EnvUndeffacts(void *,EXEC_STATUS,void *);
   LOCALE void                           GetDeffactsListFunction(void *,EXEC_STATUS,DATA_OBJECT_PTR);
   LOCALE void                           EnvGetDeffactsList(void *,EXEC_STATUS,DATA_OBJECT_PTR,void *);
   LOCALE void                          *DeffactsModuleFunction(void *,EXEC_STATUS);
   LOCALE void                           PPDeffactsCommand(void *,EXEC_STATUS);
   LOCALE int                            PPDeffacts(void *,EXEC_STATUS,char *,char *);
   LOCALE void                           ListDeffactsCommand(void *,EXEC_STATUS);
   LOCALE void                           EnvListDeffacts(void *,EXEC_STATUS,char *,void *);

#endif

