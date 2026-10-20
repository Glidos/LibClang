/* Clang 19 enumerator names, included after <clang-c/Index.h>.
   The numbers are from clang-c/Index.h at llvmorg-19.1.7. Clang 17 and 18
   lack some of these names, so the binding keeps them here and can be built
   against any of 17, 18, or 19. Where a name already exists, the number
   matches that header. */
#ifndef LIBCLANG_CLANG19_ENUMS_H
#define LIBCLANG_CLANG19_ENUMS_H

/* Renamed from CXCursor_OMPArraySectionExpr in Clang 19. Same value. */
#define CXCursor_ArraySectionExpr 147
#define CXCursor_PackIndexingExpr 156
#define CXCursor_OMPScopeDirective 306
#define CXCursor_OMPReverseDirective 307
#define CXCursor_OMPInterchangeDirective 308
#define CXCursor_OpenACCComputeConstruct 320
#define CXCursor_OpenACCLoopConstruct 321

#define CXCallingConv_M68kRTD 19
#define CXCallingConv_PreserveNone 20
#define CXCallingConv_RISCVVectorCall 21

#endif
