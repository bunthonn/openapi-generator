<<<<<<< HEAD
#include <stdlib.h>
#include "apiKey.h"

apiKey_t *apiKey_create(char *key, char *value) {
	apiKey_t *apiKey = malloc(sizeof(apiKey_t));
	apiKey->key = key;
	apiKey->value = value;

	return apiKey;
}

void apiKey_free(apiKey_t *apiKey) {
	free(apiKey);
}
=======
#include "keyValuePair.h"

int main() {
	keyValuePair_t *keyValuePair = keyValuePair_create("key", "value");
	keyValuePair_free(keyValuePair);
}
>>>>>>> origin/master
