#include <stdio.h>
#include <string.h>

#include <geotiffio.h>

int main(void) {
    const char *key_name = GTIFKeyName(GTModelTypeGeoKey);

    if (key_name == NULL || strcmp(key_name, "GTModelTypeGeoKey") != 0) {
        fprintf(stderr, "unexpected GeoTIFF key name\n");
        return 1;
    }

    return 0;
}
