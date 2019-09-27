//
//  Use this file to import your target's public headers that you would like to expose to Swift.
//

#include "CBridge.h"
/**由C调用*/
extern void(^ __nonnull swiftFuncIMP)(int);
