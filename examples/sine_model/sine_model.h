#ifndef SINE_MODEL_H
#define SINE_MODEL_H

// Number of Layers
#define NO_LAYERS     5

// Max worksheet arena
#define WORKSHEET_ARENA_SIZE     16

unsigned char sine_model[] = {

    // Layer Type: Linear Layer
    0x00, 0x00, 0x00, 0x00,
    // Output size and Input size
    0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    // Weight
    0x52, 0x2E, 0xD9, 0x3E, 0x69, 0xB6, 0x2E, 0xBF, 0x0A, 0x25, 0x94, 0xBF, 0x92, 0xB9, 0x50, 0x3F,
    0x18, 0x16, 0x70, 0xBE, 0x28, 0xD2, 0xCD, 0xBE, 0x46, 0x69, 0x50, 0x3E, 0x49, 0x77, 0xA8, 0xBE,
    0xA8, 0x48, 0x04, 0xBF, 0x43, 0x11, 0x1C, 0x3D, 0x62, 0x03, 0xE7, 0xBE, 0xE0, 0xED, 0x99, 0xBE,
    0x90, 0x8D, 0x97, 0xBE, 0xDE, 0x90, 0x44, 0x3F, 0x4E, 0x71, 0x71, 0xBF, 0xEA, 0xE7, 0x97, 0x3F,
    // Bias
    0xB3, 0x81, 0xCF, 0x3E, 0x42, 0xC6, 0x0D, 0xBD, 0x18, 0xEF, 0x25, 0x3F, 0x3B, 0x0D, 0x9B, 0x3F,
    0xB2, 0x1E, 0x7D, 0xBF, 0xF4, 0x03, 0xC7, 0xBE, 0x37, 0x45, 0x75, 0x3F, 0x4F, 0xD8, 0xBF, 0x3F,
    0xD0, 0x2F, 0xF6, 0xBD, 0x8C, 0xF9, 0x39, 0xBF, 0xE2, 0x9B, 0x78, 0x3F, 0xFA, 0x0E, 0x37, 0xBF,
    0xF0, 0x4F, 0x82, 0xBD, 0x0B, 0x62, 0x0B, 0x3F, 0x84, 0xB1, 0xC8, 0xBE, 0xF8, 0x0B, 0x6A, 0xBF,

    // Layer Type: ReLU Activation
    0x01, 0x00, 0x00, 0x00,
    // Input dimensions and shape
    0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,

    // Layer Type: Linear Layer
    0x00, 0x00, 0x00, 0x00,
    // Output size and Input size
    0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    // Weight
    0x67, 0xE3, 0xA0, 0xBD, 0xC2, 0x0C, 0x84, 0x3C, 0x75, 0x4D, 0x1C, 0x3E, 0x80, 0x7E, 0x49, 0xBE,
    0xDA, 0x10, 0x18, 0x3E, 0x9C, 0xDB, 0x0C, 0xBE, 0x5B, 0x26, 0x90, 0xBE, 0x9D, 0xDA, 0x84, 0x39,
    0xEE, 0x6A, 0x0D, 0xBE, 0x80, 0xCD, 0xED, 0xBD, 0xEF, 0x32, 0x6F, 0xBE, 0x80, 0x98, 0x6C, 0xBC,
    0xA2, 0x1D, 0x61, 0xBE, 0x5E, 0x34, 0x53, 0xBE, 0xFC, 0xA3, 0x84, 0xBD, 0x02, 0xFE, 0x02, 0x3D,
    0x2A, 0x24, 0xD3, 0xBE, 0x20, 0xB6, 0x0C, 0x3C, 0xC3, 0xE6, 0x78, 0x3E, 0x06, 0x80, 0x2E, 0xBE,
    0x48, 0x66, 0x23, 0x3E, 0x3C, 0x05, 0x67, 0xBE, 0x98, 0x03, 0x5B, 0x3D, 0xBE, 0x0F, 0x9A, 0x3E,
    0xD0, 0xC6, 0x0D, 0x3E, 0xD6, 0xC1, 0x11, 0x3E, 0xC3, 0x59, 0x30, 0x3F, 0x4C, 0x75, 0x29, 0x3E,
    0x18, 0xEB, 0x44, 0xBE, 0xA8, 0x0F, 0x0A, 0xBF, 0x60, 0xDF, 0x73, 0xBC, 0x99, 0xD6, 0x88, 0x3E,
    0x15, 0x37, 0xB3, 0x3D, 0xA2, 0xB2, 0x5B, 0x3D, 0x18, 0x37, 0x06, 0xBD, 0x89, 0xA5, 0x24, 0x3E,
    0xFC, 0xC3, 0x1E, 0xBE, 0x54, 0x7D, 0xDD, 0xBD, 0x68, 0x42, 0x7B, 0x3E, 0x28, 0xDF, 0xB1, 0xBF,
    0x58, 0x06, 0x2B, 0xBE, 0x22, 0x0E, 0xC9, 0xBC, 0xE6, 0x15, 0x02, 0xBD, 0x22, 0x8D, 0x41, 0x3E,
    0xE4, 0xFF, 0x62, 0xBE, 0xD7, 0xC8, 0x9F, 0x3E, 0x4A, 0x47, 0x3B, 0x3E, 0x7E, 0xAF, 0x97, 0xBE,
    0x5C, 0xDF, 0xFD, 0x3D, 0xC8, 0x04, 0xB1, 0x3D, 0x9A, 0xA3, 0x54, 0xBE, 0xE4, 0x79, 0x69, 0xBE,
    0x72, 0xFD, 0x28, 0xBE, 0x7C, 0x0D, 0x15, 0x3E, 0x4C, 0x04, 0x15, 0xBE, 0x1E, 0xA6, 0x6D, 0x3E,
    0xC8, 0xD7, 0xE9, 0xBD, 0x68, 0xF7, 0x61, 0xBE, 0xB2, 0x15, 0x4D, 0xBE, 0x80, 0xA5, 0xB2, 0x3C,
    0xB8, 0xB2, 0x85, 0x3D, 0xCC, 0x0D, 0x81, 0x3D, 0x96, 0xDA, 0x29, 0xBE, 0x28, 0xA7, 0x35, 0x3D,
    0x76, 0x4A, 0xEA, 0x3D, 0xB8, 0x50, 0x4B, 0xBD, 0x0D, 0xBA, 0xE2, 0xBE, 0xD7, 0xF6, 0xDB, 0x3D,
    0x7C, 0xA0, 0x4C, 0x3E, 0x7A, 0x9F, 0x58, 0xBE, 0x26, 0x32, 0xB3, 0xBE, 0x3D, 0x07, 0x9D, 0x3F,
    0xB0, 0x84, 0x95, 0x3D, 0x7A, 0x8B, 0x0A, 0xBE, 0x19, 0x75, 0x3C, 0xBE, 0xD0, 0x44, 0x09, 0xBE,
    0x0A, 0x7E, 0x6A, 0xBE, 0x3E, 0xBF, 0x3A, 0x3E, 0xF4, 0xD8, 0x90, 0xBD, 0x03, 0x52, 0x13, 0x3F,
    0x3C, 0xA1, 0xDE, 0x3D, 0x80, 0x02, 0xB6, 0x3D, 0x42, 0xE1, 0x36, 0xBE, 0x60, 0xBF, 0x0D, 0xBC,
    0x90, 0x14, 0x58, 0xBE, 0x90, 0xBE, 0xC2, 0x3D, 0xB4, 0xC4, 0xD0, 0xBD, 0x48, 0xA6, 0xA9, 0xBD,
    0xC0, 0x24, 0xF0, 0x3B, 0xD4, 0xAD, 0xDA, 0xBD, 0xB6, 0x62, 0x07, 0xBE, 0xF0, 0x81, 0x39, 0xBD,
    0x48, 0xAA, 0x31, 0xBD, 0x78, 0xCF, 0x7D, 0xBD, 0x54, 0x2E, 0x5B, 0xBE, 0x8C, 0x8F, 0xEB, 0xBD,
    0x21, 0x68, 0xFD, 0x3D, 0x09, 0x3A, 0xAB, 0x3E, 0xA8, 0x06, 0x14, 0xBE, 0x2A, 0xA2, 0x14, 0xBD,
    0x1C, 0x09, 0xF7, 0x3D, 0x40, 0xAB, 0x89, 0xBB, 0x68, 0x0C, 0xB2, 0x3D, 0x19, 0x77, 0x52, 0x3F,
    0xCA, 0xA3, 0x09, 0xBE, 0x70, 0x2D, 0x2E, 0x3D, 0xC8, 0x6A, 0xA5, 0xBE, 0xBE, 0x4D, 0x6B, 0xBE,
    0x92, 0xEF, 0x6E, 0xBE, 0xE7, 0x92, 0x5E, 0x3E, 0x86, 0x8E, 0x1A, 0x3E, 0x24, 0x5C, 0xA5, 0x3E,
    0xE0, 0xF2, 0xEE, 0xBD, 0x00, 0xC3, 0x32, 0x3E, 0x20, 0x22, 0x4A, 0x3E, 0x3A, 0xF6, 0x78, 0xBE,
    0xA4, 0x4D, 0xFC, 0xBD, 0x60, 0xD3, 0x3A, 0xBE, 0x00, 0x8F, 0xC4, 0xBC, 0x68, 0xC5, 0x40, 0xBE,
    0x9C, 0xCB, 0xE6, 0xBD, 0x98, 0xDF, 0x25, 0xBE, 0xF0, 0x09, 0x99, 0xBD, 0xF0, 0x69, 0x59, 0x3E,
    0xAC, 0x12, 0x35, 0x3E, 0x70, 0xDD, 0xBD, 0x3C, 0x3A, 0x25, 0x5E, 0x3E, 0x80, 0xAD, 0x58, 0xBE,
    0x32, 0x15, 0x63, 0xBE, 0x38, 0xF9, 0x8F, 0xBD, 0x00, 0xF5, 0x00, 0xBB, 0x00, 0xD1, 0x82, 0x3D,
    0x90, 0x44, 0x92, 0xBD, 0x00, 0x50, 0x34, 0x3C, 0xD8, 0xBF, 0x19, 0xBE, 0xA0, 0x8C, 0x6A, 0x3C,
    0xA0, 0xB3, 0x62, 0xBC, 0x02, 0xCD, 0x73, 0xBE, 0x80, 0xE1, 0x21, 0xBE, 0xA4, 0x1C, 0x19, 0xBE,
    0x20, 0x9D, 0x25, 0xBE, 0x1E, 0xA8, 0x37, 0x3E, 0xE8, 0x23, 0x0E, 0x3E, 0x7E, 0x9E, 0x42, 0xBE,
    0xCA, 0xD2, 0x8E, 0x3E, 0x34, 0x6E, 0x49, 0xBE, 0x5B, 0x95, 0x97, 0xBE, 0x4D, 0xCF, 0x8E, 0x3E,
    0x00, 0x2E, 0xD1, 0x3D, 0x06, 0xE5, 0x5A, 0x3E, 0xF0, 0xD9, 0x12, 0x3E, 0x33, 0xB8, 0xD6, 0xBF,
    0x88, 0x7C, 0x7B, 0x3D, 0x42, 0xA1, 0x01, 0xBC, 0xEF, 0x61, 0x40, 0x3F, 0xB8, 0x71, 0xAE, 0xBD,
    0x00, 0xF9, 0x04, 0xBB, 0xB0, 0x2D, 0x1B, 0xBE, 0xCC, 0x31, 0x53, 0x3E, 0xFA, 0x67, 0x2D, 0xBD,
    0xFC, 0xD6, 0xAD, 0x3D, 0x17, 0xFC, 0xA1, 0xBD, 0xD2, 0x16, 0x97, 0xBE, 0x4F, 0x45, 0x48, 0xBD,
    0x00, 0x1A, 0x46, 0x3D, 0x4C, 0x12, 0xBF, 0xBD, 0xCB, 0x64, 0x60, 0xBE, 0x5C, 0xE7, 0x74, 0xBD,
    0x12, 0xBD, 0x06, 0xBE, 0x32, 0xE0, 0x07, 0x3E, 0xCA, 0x1B, 0x25, 0x3E, 0xE4, 0x89, 0xA4, 0xBD,
    0x00, 0x7F, 0xFA, 0x3C, 0x0C, 0xDA, 0x81, 0xBE, 0x20, 0x83, 0xEE, 0x3C, 0x4D, 0xE8, 0x6D, 0xBC,
    0x81, 0x25, 0x3E, 0xBD, 0xB0, 0x55, 0x84, 0x3D, 0x78, 0x65, 0xF8, 0x3D, 0x01, 0x9F, 0x1B, 0xBE,
    0x8A, 0x03, 0x0F, 0x3E, 0x4C, 0x82, 0x60, 0x3E, 0xB4, 0xD8, 0x6A, 0xBE, 0xD4, 0x0D, 0xA1, 0xBD,
    0x38, 0xDA, 0x68, 0xBD, 0xDD, 0x45, 0x95, 0xBD, 0x86, 0x84, 0x31, 0xBE, 0x86, 0x21, 0x53, 0xBE,
    0x6C, 0xF9, 0x57, 0x3E, 0xF0, 0x78, 0x09, 0x3E, 0xA8, 0x50, 0x94, 0x3D, 0xF7, 0x0D, 0x47, 0xBD,
    0xDC, 0x49, 0xA2, 0xBC, 0x49, 0x36, 0xC6, 0x3D, 0x92, 0x4B, 0x4E, 0xBC, 0x71, 0x25, 0xE8, 0x3C,
    0x96, 0xBD, 0x4B, 0xBE, 0x82, 0xF5, 0x3B, 0xBE, 0xBA, 0x35, 0x8D, 0x3E, 0xC5, 0x25, 0xB6, 0xBF,
    0xA8, 0x4F, 0x2B, 0x3E, 0x28, 0x31, 0x9D, 0xBE, 0x4A, 0xB7, 0xDA, 0xBD, 0xF8, 0x53, 0x18, 0x3E,
    0x7C, 0x55, 0xC5, 0x3D, 0xB4, 0xD7, 0x2F, 0x3E, 0x88, 0x84, 0x90, 0xBD, 0x78, 0xE1, 0xB7, 0xBD,
    0xC4, 0x9E, 0x99, 0x3D, 0x5A, 0x0F, 0x3E, 0xBE, 0xFC, 0x6F, 0x8B, 0xBE, 0x74, 0x9B, 0xB3, 0x3D,
    0xA0, 0x47, 0x61, 0x3E, 0x28, 0xA1, 0x95, 0xBD, 0xC8, 0xD7, 0x3C, 0xBE, 0x17, 0xB0, 0x58, 0x3F,
    0x7A, 0x77, 0x33, 0x3E, 0x0E, 0x0E, 0x36, 0x3E, 0xAB, 0xD0, 0x4C, 0x3E, 0x78, 0x7C, 0x2F, 0xBE,
    0x0E, 0x32, 0x57, 0x3E, 0x62, 0x15, 0x00, 0xBE, 0x2A, 0x1F, 0x6B, 0xBE, 0x65, 0xE3, 0xF2, 0x3E,
    0x9E, 0x03, 0x12, 0xBE, 0xB8, 0x7E, 0x5C, 0xBD, 0x84, 0x54, 0x70, 0xBE, 0xC8, 0x49, 0x69, 0xBE,
    0x30, 0x68, 0xE7, 0x3C, 0xAC, 0x5E, 0x32, 0xBE, 0x38, 0x6E, 0x45, 0xBD, 0xE8, 0xAC, 0x29, 0x3E,
    0x38, 0xB3, 0x32, 0x3D, 0x94, 0x1D, 0xF2, 0x3D, 0xB4, 0x47, 0x7B, 0x3E, 0x18, 0xD4, 0x6E, 0xBE,
    0x22, 0x6F, 0x3D, 0x3E, 0xA0, 0x46, 0x80, 0x3C, 0x40, 0xE0, 0x66, 0x3E, 0x86, 0xAC, 0x6C, 0x3E,
    0x64, 0x60, 0x2F, 0x3E, 0x38, 0xCC, 0x65, 0x3D, 0xE0, 0x1A, 0xEA, 0xBC, 0x56, 0x2B, 0x47, 0xBE,
    0x58, 0xF7, 0x2E, 0x3E, 0xB8, 0x7E, 0xA9, 0x3D, 0xEC, 0x01, 0x4A, 0xBE, 0xE0, 0xFD, 0xE2, 0xBC,
    0x10, 0x90, 0x27, 0x3E, 0x2A, 0x7C, 0x75, 0xBE, 0x4E, 0x16, 0x53, 0xBE, 0xF8, 0x8A, 0x7E, 0x3D,
    0x66, 0xA5, 0x62, 0xBE, 0x3A, 0xEE, 0x5E, 0xBE, 0x68, 0x3A, 0xBE, 0x3D, 0x18, 0x01, 0x0C, 0xBE,
    // Bias
    0xEA, 0x3E, 0x17, 0x3E, 0xF6, 0x8F, 0x09, 0x3F, 0x6A, 0xB4, 0x04, 0x3F, 0x90, 0x4B, 0x0B, 0xBD,
    0x67, 0xE9, 0x12, 0xBF, 0xCE, 0x8D, 0x3A, 0xBE, 0x92, 0x36, 0x05, 0xBF, 0xD0, 0xDD, 0xE7, 0x3C,
    0x60, 0x21, 0x9F, 0x3C, 0x7C, 0x4C, 0x22, 0x3F, 0x19, 0xBD, 0x3D, 0x3E, 0x8C, 0xD0, 0xE2, 0xBD,
    0x24, 0x10, 0xDC, 0x3E, 0x3C, 0xE2, 0x06, 0xBF, 0xC4, 0x58, 0x7A, 0xBE, 0x00, 0xE2, 0xDB, 0x3A,

    // Layer Type: ReLU Activation
    0x01, 0x00, 0x00, 0x00,
    // Input dimensions and shape
    0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,

    // Layer Type: Linear Layer
    0x00, 0x00, 0x00, 0x00,
    // Output size and Input size
    0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
    // Weight
    0x97, 0x32, 0xB2, 0xBD, 0x35, 0x0E, 0x0B, 0xBF, 0x5C, 0xD2, 0x54, 0xBF, 0x20, 0xBF, 0x63, 0xBC,
    0x8C, 0xA5, 0xFE, 0x3E, 0x70, 0xAD, 0x6F, 0xBD, 0x64, 0x8A, 0x07, 0x3F, 0x1C, 0x57, 0x8B, 0x3D,
    0xC4, 0x0A, 0xD4, 0x3D, 0x36, 0x0B, 0x47, 0xBF, 0x8B, 0xBD, 0x56, 0xBE, 0x75, 0xAE, 0x98, 0x3D,
    0x83, 0x23, 0xFD, 0xBE, 0xEB, 0x55, 0x90, 0x3E, 0x3C, 0x8E, 0x57, 0x3E, 0x40, 0xCC, 0x2B, 0x3C,
    // Bias
    0x31, 0x1F, 0x54, 0xBE,
};

unsigned int sine_model_len = sizeof(sine_model);

#endif // SINE_MODEL_H
