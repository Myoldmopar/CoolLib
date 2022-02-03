#ifndef MY_COOL_LIB_H

#if (_WIN32 || _MSC_VER)
#if defined(CoolLib_EXPORTS)
#define EXPORT_API __declspec(dllexport)
#else
#define EXPORT_API __declspec(dllimport)
#endif
#else
#define EXPORT_API
#endif

namespace MyCoolLib {
    EXPORT_API int add(int x, int y);
}
#define MY_COOL_LIB_H
#endif
