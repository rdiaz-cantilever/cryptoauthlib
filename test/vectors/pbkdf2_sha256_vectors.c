/**
 * \file
 * \brief Embedded vectors for the PBKDF2 algorithm
 */

#include "cryptoauthlib.h"
#include "pbkdf2_sha256_vectors.h"

const uint8_t pbkdf2_sha256_test_vector_dk1[] = {
    0x12, 0x0f, 0xb6, 0xcf, 0xfc, 0xf8, 0xb3, 0x2c, 0x43, 0xe7, 0x22, 0x52, 0x56, 0xc4, 0xf8, 0x37,
    0xa8, 0x65, 0x48, 0xc9
};

const uint8_t pbkdf2_sha256_test_vector_dk2[] = {
    0xae, 0x4d, 0x0c, 0x95, 0xaf, 0x6b, 0x46, 0xd3, 0x2d, 0x0a, 0xdf, 0xf9, 0x28, 0xf0, 0x6d, 0xd0,
    0x2a, 0x30, 0x3f, 0x8e
};

const uint8_t pbkdf2_sha256_test_vector_dk3[] = {
    0xc5, 0xe4, 0x78, 0xd5, 0x92, 0x88, 0xc8, 0x41, 0xaa, 0x53, 0x0d, 0xb6, 0x84, 0x5c, 0x4c, 0x8d,
    0x96, 0x28, 0x93, 0xa0
};

const uint8_t pbkdf2_sha256_test_vector_dk4[] = {
    0x34, 0x8c, 0x89, 0xdb, 0xcb, 0xd3, 0x2b, 0x2f, 0x32, 0xd8, 0x14, 0xb8, 0x11, 0x6e, 0x84, 0xcf,
    0x2b, 0x17, 0x34, 0x7e, 0xbc, 0x18, 0x00, 0x18, 0x1c
};

const uint8_t pbkdf2_sha256_test_vector_dk5[] = {
    0x55, 0xac, 0x04, 0x6e, 0x56, 0xe3, 0x08, 0x9f, 0xec, 0x16, 0x91, 0xc2, 0x25, 0x44, 0xb6, 0x05,
    0xf9, 0x41, 0x85, 0x21, 0x6d, 0xde, 0x04, 0x65, 0xe6, 0x8b, 0x9d, 0x57, 0xc2, 0x0d, 0xac, 0xbc,
    0x49, 0xca, 0x9c, 0xcc, 0xf1, 0x79, 0xb6, 0x45, 0x99, 0x16, 0x64, 0xb3, 0x9d, 0x77, 0xef, 0x31,
    0x7c, 0x71, 0xb8, 0x45, 0xb1, 0xe3, 0x0b, 0xd5, 0x09, 0x11, 0x20, 0x41, 0xd3, 0xa1, 0x97, 0x83,
    0xc2, 0x94, 0xe8, 0x50, 0x15, 0x03, 0x90, 0xe1, 0x16, 0x0c, 0x34, 0xd6, 0x2e, 0x96, 0x65, 0xd6,
    0x59, 0xae, 0x49, 0xd3, 0x14, 0x51, 0x0f, 0xc9, 0x82, 0x74, 0xcc, 0x79, 0x68, 0x19, 0x68, 0x10,
    0x4b, 0x8f, 0x89, 0x23, 0x7e, 0x69, 0xb2, 0xd5, 0x49, 0x11, 0x18, 0x68, 0x65, 0x8b, 0xe6, 0x2f,
    0x59, 0xbd, 0x71, 0x5c, 0xac, 0x44, 0xa1, 0x14, 0x7e, 0xd5, 0x31, 0x7c, 0x9b, 0xae, 0x6b, 0x2a
};


const pbkdf2_sha256_test_vector pbkdf2_sha256_test_vectors[] = {
    {
        1,
        "password",
        8,
        "salt",
        4,
        pbkdf2_sha256_test_vector_dk1,
        sizeof(pbkdf2_sha256_test_vector_dk1)
    },
    {
        2,
        "password",
        8,
        "salt",
        4,
        pbkdf2_sha256_test_vector_dk2,
        sizeof(pbkdf2_sha256_test_vector_dk2)
    },
    {
        4096,
        "password",
        8,
        "salt",
        4,
        pbkdf2_sha256_test_vector_dk3,
        sizeof(pbkdf2_sha256_test_vector_dk3)
    },
    {
        4096,
        "passwordPASSWORDpassword",
        24,
        "saltSALTsaltSALTsaltSALTsaltSALTsalt",
        36,
        pbkdf2_sha256_test_vector_dk4,
        sizeof(pbkdf2_sha256_test_vector_dk4)
    },
    {
        1,
        "passwd",
        6,
        "salt",
        4,
        pbkdf2_sha256_test_vector_dk5,
        sizeof(pbkdf2_sha256_test_vector_dk5)
    }
};

const size_t pbkdf2_sha256_test_vectors_count = sizeof(pbkdf2_sha256_test_vectors) / sizeof(pbkdf2_sha256_test_vector);

const pbkdf2_sha256_fixed_size_test_vector pbkdf2_sha256_fixed_size_test_vectors[] =
{
    {
        1,
        "salt",
        4,
        {
            0xa5, 0xd9, 0x32, 0x53, 0x59, 0x53, 0x19, 0xec, 0x5a, 0x91, 0x8e, 0x22, 0xc7, 0xdd, 0x5f, 0x1b,
            0x7e, 0x3e, 0x9a, 0x9a, 0x15, 0x0f, 0xe1, 0x46, 0x2a, 0x35, 0xba, 0x48, 0x01, 0xc1, 0xdf, 0x8a
        }
    },
    {
        2,
        "salt",
        4,
        {
            0xe8, 0xfb, 0x33, 0x1d, 0x4b, 0x8e, 0x86, 0xae, 0x54, 0x6d, 0x5a, 0xbe, 0x75, 0x18, 0x11, 0x7c,
            0xa3, 0x07, 0x65, 0x11, 0x46, 0xd3, 0x52, 0xcc, 0xa3, 0x8c, 0x3d, 0xc2, 0x0f, 0x90, 0x80, 0xa6
        }
    },
    {
        100,
        "salt",
        4,
        {
            0xc7, 0x29, 0x5e, 0x39, 0x8a, 0x39, 0x98, 0x93, 0xc8, 0xdd, 0x61, 0x4d, 0x24, 0x41, 0x38, 0x18,
            0x5d, 0xf1, 0xbe, 0x93, 0xaf, 0xb9, 0x84, 0x3f, 0x3a, 0x3f, 0x06, 0xe3, 0x10, 0x0b, 0x85, 0x73
        }
    },
};

const size_t pbkdf2_sha256_fixed_size_test_vectors_count = sizeof(pbkdf2_sha256_fixed_size_test_vectors) / sizeof(pbkdf2_sha256_fixed_size_test_vector);
