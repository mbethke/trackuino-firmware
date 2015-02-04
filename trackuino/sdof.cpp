/* Some Degrees Of Freedom
 * Spatial orientation using the the Adafruit LSM9DS0 module
 */
#include "sdof.h"

Adafruit_LSM9DS0_SPI_Hard lsm = Adafruit_LSM9DS0_SPI_Hard(9, 8);

void lsm9ds0_setup(void) {
    lsm.begin();
    // TODO
}
