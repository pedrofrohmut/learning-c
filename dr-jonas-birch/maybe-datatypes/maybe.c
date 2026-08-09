#include "maybe.h"

Maybe* maybe_new(bool has_value, void* value)
{
    Maybe* maybe = (Maybe*) calloc(1, sizeof(Maybe));

    if (maybe == NULL) {
	return NULL;
    }

    maybe->has_value = has_value;

    if (!has_value) {
	maybe->value = (void*) 0;
    } else {
	maybe->value = value;
    }

    return maybe;
}

bool maybe_is_empty(Maybe* maybe)
{
    return ! maybe->has_value;
}

void maybe_show(const char* str, Maybe* maybe)
{
    if (maybe == NULL) {
	return;
    }

    printf("(Maybe *) %s = ", str);

    if (maybe_is_empty(maybe)) {
	printf("Nothing.\n");
    } else {
	printf("Just (%.08x).\n", (int) maybe->value);
    }
}

int main()
{
    u32 value = 500;
    Maybe* maybe = maybe_new(true, (void *) 500);

    maybe_show_(maybe);

    free(maybe);

    return 0;
}
