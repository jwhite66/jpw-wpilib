#include <assert.h>
#include <stdio.h>

void wpi_assert_impl(bool condition, char const *condition_text, char const* unused, char const *fname, unsigned int line, char const *function)
{
    if (condition)
        fprintf(stderr, "%s(%d)[%s]: assert %s failed\n", fname, line, function, condition_text);
    assert(condition);
}
