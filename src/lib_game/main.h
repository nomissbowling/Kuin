#pragma once

#include "..\common.h"

// 'game'
EXPORT void _init(void* heap, S64* heap_cnt, S64 app_code, const Char* app_name);
EXPORT void _rectMove(SClass* me_, double max_velo);
EXPORT void _rectUpdate(SClass* me_);
EXPORT SClass* _makeMapImpl(SClass* me_, S64 map_width, S64 map_height, const void* data, double chip_width, double chip_height);
EXPORT SClass* _makeMapEmpty(SClass* me_, S64 map_width, S64 map_height, double chip_width, double chip_height);
EXPORT void _mapDtor(SClass* me_);
EXPORT S64 _mapGet(SClass* me_, S64 x, S64 y);
EXPORT void _mapSet(SClass* me_, S64 x, S64 y, S64 value);
EXPORT Bool _mapFind(SClass* me_, S64* x, S64* y, S64 value);
EXPORT SClass* _hitMapRectImpl(SClass* me2, SClass* map, SClass* rect, const void* chip_info_callback, const void* hit_callback);
EXPORT void _rollDtor(SClass* me_);
EXPORT Bool _rollProceed(SClass* me_, double speed);
EXPORT void _rollReset(SClass* me_);
EXPORT SClass* _makeRollImpl(SClass* me_, const void* timings, const void* params, const void* roll_callback);