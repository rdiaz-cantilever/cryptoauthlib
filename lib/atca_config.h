/*
 * atca_config.h
 *
 * Created: 11/10/2022 03:55:57 p. m.
 *  Author: REDia
 */ 


#ifndef ATCA_CONFIG_H_
#define ATCA_CONFIG_H_

/* Include HALS */

#ifndef ATCA_HAL_I2C
#define ATCA_HAL_I2C
#endif

/* Included device support */
// #define ATCA_ATECC608A_SUPPORT
#define ATCA_ATECC608_SUPPORT

#define ATCA_LEGACY_HAL

#ifndef ATCA_HAL_LEGACY_API
#define ATCA_HAL_LEGACY_API
#endif // !ATCA

#define ATCA_NO_HEAP

#define ATCA_ENABLE_DEPRECATED

// #define ATCA_PRINTF

// #define ATCA_PLATFORM_MALLOC    malloc
// #define ATCA_PLATFORM_FREE      free

/* Polling Configuration Options  */
#ifndef ATCA_POLLING_INIT_TIME_MSEC
#define ATCA_POLLING_INIT_TIME_MSEC       1
#endif

#ifndef ATCA_POLLING_FREQUENCY_TIME_MSEC
#define ATCA_POLLING_FREQUENCY_TIME_MSEC  2
#endif

#ifndef ATCA_POLLING_MAX_TIME_MSEC
#define ATCA_POLLING_MAX_TIME_MSEC        2500
#endif

#define ATCA_NO_PRAGMA_PACK


// #define atca_delay_ms   hal_delay_ms
// #define atca_delay_us   hal_delay_us

// #define ATCA_TFLEX_SUPPORT


/* \brief How long to wait after an initial wake failure for the POST to
 *         complete.
 * If Power-on self test (POST) is enabled, the self test will run on waking
 * from sleep or during power-on, which delays the wake reply.
 */
#ifndef ATCA_POST_DELAY_MSEC
#define ATCA_POST_DELAY_MSEC 25
#endif

// extern i2c_sam_instance_t twi_plib_i2c_api;

#endif /* ATCA_CONFIG_H_ */