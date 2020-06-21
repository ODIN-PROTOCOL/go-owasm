/* (c) 2020 Band protocol. Licensed under Apache-2.0 */

/* Generated with cbindgen:0.14.2 */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

enum Error {
  Error_NoError = 0,
  Error_SpanTooSmallError = 1,
  Error_ValidationError = 2,
  Error_DeserializationError = 3,
  Error_SerializationError = 4,
  Error_InvalidImportsError = 5,
  Error_InvalidExportsError = 6,
  Error_BadMemorySectionError = 7,
  Error_GasCounterInjectionError = 8,
  Error_StackHeightInjectionError = 9,
  Error_InstantiationError = 10,
  Error_RuntimeError = 11,
  Error_OutOfGasError = 12,
  Error_BadEntrySignatureError = 13,
  Error_WrongPeriodActionError = 128,
  Error_TooManyExternalDataError = 129,
  Error_BadValidatorIndexError = 130,
  Error_BadExternalIDError = 131,
  Error_UnavailableExternalDataError = 132,
  Error_UnknownError = 255,
};
typedef int32_t Error;

typedef struct Span {
  uint8_t *ptr;
  uintptr_t len;
  uintptr_t cap;
} Span;

typedef struct env_t {
  uint8_t _private[0];
} env_t;

typedef struct EnvDispatcher {
  Error (*get_calldata)(env_t*, Span *calldata);
  Error (*set_return_data)(env_t*, Span data);
  int64_t (*get_ask_count)(env_t*);
  int64_t (*get_min_count)(env_t*);
  Error (*get_ans_count)(env_t*, int64_t*);
  Error (*ask_external_data)(env_t*, int64_t eid, int64_t did, Span data);
  Error (*get_external_data_status)(env_t*, int64_t eid, int64_t vid, int64_t *status);
  Error (*get_external_data)(env_t*, int64_t eid, int64_t vid, Span *data);
} EnvDispatcher;

typedef struct Env {
  env_t *env;
  EnvDispatcher dis;
} Env;

Error do_compile(Span input, Span *output);

Error do_run(Span code, uint32_t gas_limit, bool is_prepare, Env env);
