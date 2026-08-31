#ifndef _SCE_SYS_MODULE_H_
#define _SCE_SYS_MODULE_H_

#include "_types/sysmodule.h"

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif
 
/**
  * Sysmodule function to test if a module is loaded or not.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleIsLoaded(enum OrbisSysModule moduleId);

/**
  * Sysmodule function to load a module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleLoadModule(enum OrbisSysModule moduleId);

/**
  * Sysmodule function to unload a module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleUnloadModule(enum OrbisSysModule moduleId);
 
/**
  * Sysmodule function to retrieve underlying module handles
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleGetModuleHandleInternal(enum OrbisSysModuleInternal moduleId, int32_t* handle);

/**
  * Sysmodule function to test if an internal module is loaded or not.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleIsLoadedInternal(enum OrbisSysModuleInternal moduleId);

void sceSysmoduleLoadModuleByNameInternal();

/**
  * Sysmodule function to load an internal module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleLoadModuleInternal(enum OrbisSysModuleInternal moduleId);

void sceSysmoduleLoadModuleInternalWithArg();

/**
  * Sysmodule function to load various internal modules before a game runs.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmodulePreloadModuleForLibkernel();

void sceSysmoduleUnloadModuleByNameInternal();

/**
  * Sysmodule function to unload an internal module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int32_t sceSysmoduleUnloadModuleInternal(enum OrbisSysModuleInternal moduleId);

void sceSysmoduleUnloadModuleInternalWithArg();

#ifdef __cplusplus
}
#endif
#endif

