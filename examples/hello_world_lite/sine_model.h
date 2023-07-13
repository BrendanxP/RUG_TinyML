#ifndef SINE_MODEL_H
#define SINE_MODEL_H

// A C++ header file of a TensorFlow model for approximating a sine wave
unsigned int sine_model_len = 3168;
unsigned char sine_model[] = {
 0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x90, 0x00, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00,
  0x14, 0x07, 0x00, 0x00, 0x0c, 0x0c, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f,
  0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x98, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73,
  0x65, 0x5f, 0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xc6, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xdc, 0xff, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49,
  0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00,
  0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00,
  0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f,
  0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0x18, 0x06, 0x00, 0x00, 0x10, 0x06, 0x00, 0x00, 0xc0, 0x05, 0x00, 0x00,
  0xa4, 0x05, 0x00, 0x00, 0x54, 0x05, 0x00, 0x00, 0x04, 0x05, 0x00, 0x00,
  0xf4, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00,
  0x94, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x72, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xea, 0x03, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x32, 0x2e, 0x31, 0x32, 0x2e, 0x30, 0x00, 0x00, 0xd6, 0xfa, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x35, 0x2e,
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xc0, 0xf5, 0xff, 0xff, 0xc4, 0xf5, 0xff, 0xff, 0xc8, 0xf5, 0xff, 0xff,
  0xfe, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x67, 0x27, 0xdf, 0x3e, 0x04, 0x4d, 0x7e, 0xbe, 0x66, 0xf7, 0x52, 0xbe,
  0x3a, 0x14, 0xd4, 0xbe, 0xf4, 0xfb, 0x2f, 0xbf, 0x2d, 0x70, 0xf8, 0xbe,
  0xc9, 0x51, 0xf3, 0xbe, 0x49, 0xce, 0x4c, 0xbf, 0xcc, 0x50, 0x60, 0x3e,
  0xff, 0x83, 0xcb, 0x3f, 0x85, 0x6a, 0xf6, 0xbe, 0xaa, 0x79, 0x1c, 0xbf,
  0xb8, 0x0d, 0x62, 0xbe, 0xfe, 0x63, 0x66, 0x3e, 0xae, 0xc3, 0x0c, 0x3f,
  0x13, 0x37, 0x51, 0xbf, 0x4a, 0xfb, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x04, 0x00, 0x00, 0x0f, 0x48, 0x6c, 0xbe, 0x0a, 0x8d, 0x58, 0x3e,
  0xe0, 0x55, 0x8f, 0xbd, 0xb3, 0xfb, 0xce, 0x3e, 0xad, 0x5f, 0x31, 0x3e,
  0xb0, 0x1d, 0xcf, 0xbe, 0x6e, 0x8d, 0x64, 0x3e, 0x36, 0x93, 0x38, 0xbe,
  0x6f, 0x63, 0xc7, 0xbe, 0x0e, 0x34, 0x7d, 0x3e, 0x3c, 0xbe, 0xfa, 0xbd,
  0xa3, 0x21, 0x91, 0x3e, 0x0f, 0x8d, 0x17, 0x3e, 0xcd, 0x26, 0x9e, 0x3e,
  0x28, 0x9e, 0x24, 0xbe, 0x57, 0x2b, 0x33, 0xbe, 0xf2, 0x54, 0x2a, 0x3e,
  0xd8, 0x94, 0x9d, 0xbe, 0x80, 0xb4, 0x51, 0xbc, 0xff, 0x1f, 0xaa, 0xbe,
  0x9c, 0x01, 0x90, 0x3e, 0xa4, 0xd5, 0x70, 0x3e, 0x84, 0xa6, 0xff, 0xbd,
  0x38, 0x57, 0x17, 0xbe, 0xc1, 0xc7, 0xe1, 0x3e, 0xd4, 0xfa, 0x29, 0xbe,
  0x04, 0x81, 0xa7, 0x3d, 0x40, 0x24, 0x2d, 0x3d, 0x88, 0x20, 0x39, 0xbf,
  0xe1, 0xd5, 0x18, 0xbf, 0xb5, 0xbe, 0x9d, 0xbd, 0x0f, 0x94, 0x44, 0x3e,
  0x58, 0xb9, 0x0b, 0xbd, 0x00, 0xf3, 0xd5, 0xbb, 0x09, 0x95, 0xc4, 0x3e,
  0x38, 0x3d, 0x08, 0x3d, 0x5a, 0x4f, 0x02, 0xbe, 0xce, 0x26, 0x33, 0x3e,
  0x67, 0xb6, 0xb2, 0x3e, 0x7c, 0xe5, 0xec, 0xbd, 0xed, 0x08, 0x75, 0xbe,
  0x46, 0x12, 0x26, 0x3e, 0x02, 0x43, 0x53, 0x3e, 0x44, 0x9f, 0x9b, 0x3d,
  0x60, 0xd5, 0x62, 0x3d, 0x0a, 0xa1, 0x25, 0x3e, 0x6a, 0xe7, 0x90, 0xbe,
  0x12, 0x5e, 0xcc, 0xbe, 0xb7, 0x4e, 0xc8, 0xbe, 0xaa, 0x36, 0x65, 0xbf,
  0x82, 0x20, 0x12, 0x3e, 0xc3, 0x44, 0x9a, 0x3e, 0x1b, 0x3c, 0x98, 0xbe,
  0x60, 0x34, 0x2c, 0x3c, 0xb3, 0x6d, 0x9b, 0xbe, 0xc2, 0xd2, 0x52, 0x3e,
  0x85, 0x1d, 0x94, 0x3e, 0x58, 0xe3, 0x38, 0xbe, 0xa7, 0x47, 0x8f, 0x3e,
  0x80, 0xa8, 0x64, 0xbb, 0xf3, 0x7a, 0x16, 0x3d, 0x03, 0x62, 0xb8, 0xbe,
  0xa0, 0x97, 0xff, 0x3e, 0xd3, 0x5a, 0xcf, 0x3e, 0x1e, 0xc4, 0x1a, 0xbe,
  0x74, 0x22, 0x8d, 0xbe, 0x18, 0x41, 0x41, 0xbd, 0x14, 0x8b, 0xda, 0xbd,
  0xf7, 0x2f, 0xf0, 0xbe, 0xb9, 0x2f, 0x73, 0x3e, 0x4e, 0x77, 0x2f, 0xbe,
  0x2e, 0x22, 0xcf, 0xbe, 0x38, 0xfc, 0x51, 0xbe, 0x7f, 0x0d, 0xcb, 0xbe,
  0x31, 0x8d, 0xc0, 0xbe, 0xd7, 0xf7, 0xc4, 0x3e, 0xd2, 0x0c, 0x21, 0x3e,
  0xdd, 0xc0, 0xd1, 0xbe, 0x1f, 0xed, 0x2f, 0x3e, 0xdc, 0xe2, 0x77, 0xbe,
  0x77, 0x43, 0x8e, 0x3e, 0x0c, 0xd8, 0xbb, 0x3e, 0xeb, 0x63, 0x9e, 0x3e,
  0x00, 0xc9, 0xe5, 0x3c, 0xa4, 0xd3, 0x52, 0xbe, 0x37, 0x0a, 0x13, 0x3e,
  0x2a, 0x00, 0x71, 0x3e, 0x8c, 0x97, 0xb5, 0x3d, 0x8b, 0x3f, 0x15, 0x3e,
  0xc0, 0x5c, 0xfa, 0xbd, 0x9e, 0xcf, 0x5f, 0xbe, 0x5c, 0x91, 0x36, 0xbe,
  0xcd, 0x51, 0x3f, 0xbe, 0x00, 0x13, 0x1a, 0xbe, 0x8d, 0xb6, 0x87, 0xbe,
  0xb4, 0xaf, 0xa2, 0xbe, 0xe4, 0xbd, 0x45, 0xbe, 0xc3, 0xd1, 0x49, 0x3e,
  0x38, 0xd3, 0x68, 0xbd, 0x79, 0x17, 0x9f, 0x3e, 0x3c, 0x6d, 0x44, 0xbe,
  0xfd, 0x0f, 0xf8, 0x3e, 0x56, 0xbf, 0x5d, 0x3e, 0x96, 0x39, 0x34, 0xbe,
  0xe6, 0x28, 0xe9, 0xbd, 0x05, 0x93, 0x4c, 0xbe, 0xc1, 0xf1, 0xca, 0x3e,
  0xb1, 0x50, 0xae, 0xbe, 0xce, 0xfe, 0xa3, 0xbe, 0x4d, 0x79, 0x00, 0x3e,
  0xd6, 0x57, 0xd3, 0xbd, 0x4d, 0x90, 0x2f, 0xbf, 0x60, 0xe7, 0x06, 0x3d,
  0xb6, 0xb5, 0xf7, 0xbd, 0x11, 0x1a, 0x97, 0xbe, 0xc0, 0xaa, 0x66, 0x3c,
  0xe9, 0x44, 0x38, 0xbf, 0x80, 0x84, 0xd2, 0x3e, 0x98, 0xf2, 0x6d, 0xbd,
  0xfe, 0x3a, 0xbf, 0xbe, 0x1a, 0xd5, 0x41, 0x3e, 0x7a, 0x45, 0x0e, 0x3e,
  0x76, 0xa8, 0x00, 0xbe, 0xf2, 0x14, 0x5e, 0x3e, 0xe7, 0xcf, 0x77, 0x3e,
  0x16, 0xe3, 0x54, 0x3e, 0x1d, 0x94, 0xda, 0x3d, 0x86, 0xae, 0x26, 0xbf,
  0x01, 0x19, 0x8c, 0x3e, 0xc6, 0x62, 0x00, 0x3e, 0x00, 0xa5, 0xa7, 0xbc,
  0xb4, 0xc0, 0xb3, 0x3d, 0x25, 0x0a, 0x9b, 0xbe, 0xb2, 0x66, 0x9c, 0x3e,
  0x28, 0x6e, 0x37, 0xbd, 0x23, 0x99, 0xa3, 0xbe, 0x13, 0xfe, 0x95, 0xbd,
  0x20, 0x19, 0xf9, 0xbc, 0x22, 0xa1, 0x10, 0xbe, 0xf0, 0x72, 0x8a, 0x3c,
  0x32, 0x53, 0x13, 0x3e, 0xa0, 0x98, 0xe6, 0xbc, 0xfc, 0xa1, 0x07, 0xbe,
  0x0b, 0x8e, 0x58, 0xbe, 0x2d, 0xc4, 0x83, 0xbe, 0xe9, 0x25, 0xb1, 0xbf,
  0xcf, 0x68, 0xb9, 0xbe, 0xf9, 0xf9, 0x79, 0xbe, 0x58, 0xe8, 0x4d, 0xbe,
  0xb7, 0xca, 0x33, 0x3f, 0x59, 0xea, 0x63, 0xbe, 0xa4, 0xcf, 0x0b, 0xbe,
  0xf5, 0xae, 0xfa, 0x3e, 0x9d, 0x6e, 0xd0, 0xbe, 0x40, 0x79, 0xea, 0xbd,
  0xf6, 0xa4, 0x96, 0xbe, 0x8b, 0x44, 0xb3, 0xbf, 0xd0, 0x7c, 0xf8, 0xbe,
  0x74, 0x15, 0x1a, 0x3f, 0x9a, 0xf7, 0x5e, 0xbe, 0x3e, 0x54, 0x80, 0xbe,
  0x0e, 0xc7, 0x26, 0xbf, 0x4c, 0x56, 0x4e, 0xbe, 0x52, 0xe3, 0x07, 0xbe,
  0x45, 0x71, 0x39, 0x3e, 0x93, 0x80, 0x13, 0x3e, 0xe1, 0xbf, 0xbf, 0x3e,
  0x22, 0x15, 0x6e, 0x3e, 0xff, 0xd6, 0x0a, 0x3f, 0xfc, 0x14, 0x93, 0xbe,
  0xea, 0xed, 0x46, 0x3e, 0x50, 0xb9, 0x78, 0x3d, 0x6d, 0x8f, 0x2b, 0xbe,
  0x88, 0x4e, 0x25, 0x3e, 0x55, 0xb3, 0x8b, 0xbd, 0x5a, 0xe1, 0x43, 0x3c,
  0x4f, 0xae, 0xcc, 0x3e, 0x7d, 0x5e, 0x51, 0xbe, 0x80, 0x3c, 0x4e, 0xbb,
  0x74, 0xb6, 0xec, 0x3d, 0x5d, 0x67, 0xcd, 0x3e, 0xd5, 0x08, 0xd5, 0x3e,
  0xb4, 0x03, 0x8e, 0xbe, 0xb0, 0x5e, 0x14, 0xbd, 0x04, 0xc6, 0x83, 0x3e,
  0xb0, 0x1e, 0xce, 0xbc, 0x18, 0x8c, 0x52, 0xbe, 0xb3, 0x83, 0x93, 0x3e,
  0x65, 0x04, 0x7e, 0xbe, 0x85, 0xd6, 0x84, 0xbd, 0xf8, 0x97, 0xc8, 0xbd,
  0x89, 0x91, 0xd1, 0xbd, 0xad, 0x22, 0x83, 0x3e, 0xf1, 0xac, 0xdb, 0xbe,
  0xd8, 0x98, 0x67, 0xbd, 0x18, 0xad, 0x3f, 0xbd, 0x00, 0x56, 0x08, 0x3d,
  0x94, 0x1d, 0xe8, 0x3d, 0xa4, 0x87, 0x4a, 0xbe, 0x79, 0x21, 0x95, 0x3e,
  0x44, 0x5c, 0xdb, 0xbe, 0xce, 0x37, 0xd2, 0xbe, 0x00, 0x27, 0x15, 0x3b,
  0xdc, 0x3e, 0xff, 0x3d, 0x4a, 0x2d, 0x66, 0x3e, 0x1d, 0xaf, 0x84, 0xbe,
  0x6f, 0x0e, 0x4c, 0xbe, 0x3a, 0x63, 0xab, 0xbe, 0x40, 0xef, 0xe2, 0xbd,
  0xa8, 0x00, 0xdc, 0x3d, 0xdf, 0xc9, 0x9a, 0x3e, 0x73, 0x28, 0x82, 0xbe,
  0x6b, 0x96, 0x22, 0xbe, 0xe0, 0xb1, 0xa1, 0x3c, 0xc2, 0xe0, 0x1d, 0x3e,
  0xee, 0x60, 0x68, 0x3e, 0xc0, 0x99, 0x72, 0xbc, 0x96, 0x63, 0x5c, 0x3e,
  0xef, 0x8f, 0x8b, 0x3e, 0x4e, 0x4c, 0xcf, 0xbe, 0x88, 0x66, 0x29, 0x3e,
  0xf8, 0xd7, 0xdf, 0x3d, 0x66, 0x12, 0x2d, 0xbe, 0xef, 0x77, 0xd2, 0xbd,
  0xfa, 0xaa, 0x3b, 0x3e, 0xf6, 0x47, 0x3a, 0x3e, 0x6a, 0xa1, 0x11, 0x3e,
  0x88, 0x7a, 0x7e, 0x3d, 0x52, 0xfa, 0x99, 0x3e, 0x03, 0x9e, 0xe7, 0xbe,
  0x98, 0x5e, 0x84, 0xbd, 0x46, 0x15, 0x1c, 0x3e, 0x7d, 0x95, 0x89, 0x3e,
  0x12, 0x9b, 0x98, 0xbe, 0xf4, 0xc3, 0xbb, 0xbe, 0xb7, 0x64, 0xbd, 0xbe,
  0x75, 0x8e, 0x31, 0x3e, 0x44, 0x45, 0xe6, 0x3e, 0x0f, 0x52, 0x8b, 0xbe,
  0x51, 0x18, 0xb8, 0x3e, 0x00, 0x61, 0xa4, 0xbb, 0x32, 0x7f, 0xb9, 0x3c,
  0x6e, 0xf9, 0x55, 0x3e, 0xdb, 0xb2, 0xd1, 0x3e, 0x5a, 0xec, 0x06, 0xbf,
  0xef, 0x49, 0x0f, 0x3f, 0x5b, 0x48, 0x85, 0x3e, 0xf6, 0xd7, 0x1a, 0x3e,
  0xa5, 0x36, 0x1a, 0x3e, 0xf0, 0x2d, 0x8c, 0xbc, 0x11, 0x5c, 0xc5, 0x3e,
  0x33, 0xbb, 0x9f, 0x3e, 0xbe, 0x79, 0x28, 0x3e, 0x26, 0x38, 0x3a, 0xbf,
  0xf6, 0x27, 0x3e, 0xbe, 0xc1, 0xfc, 0xbe, 0xbe, 0x56, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x50, 0x87, 0xb9,
  0x0b, 0x5f, 0x84, 0x3e, 0x40, 0xe7, 0x88, 0xbe, 0xd9, 0xee, 0xc1, 0xbe,
  0xfc, 0xcf, 0xab, 0x3e, 0x8e, 0x15, 0x7e, 0xbd, 0xc6, 0xe9, 0x48, 0xbe,
  0x40, 0x53, 0x08, 0xbf, 0x04, 0xf3, 0xd4, 0x3d, 0x76, 0xc4, 0x37, 0xbe,
  0xef, 0x98, 0xaa, 0xbe, 0x1c, 0xf9, 0xd9, 0xbd, 0xef, 0x21, 0x5a, 0x3e,
  0x69, 0x3c, 0x3b, 0x3e, 0xa8, 0x31, 0x0b, 0x3e, 0x47, 0x6f, 0x05, 0x3f,
  0xa2, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x52, 0xe0, 0x28, 0xbf, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xba, 0xdd, 0xaf, 0x3c, 0x6b, 0x93, 0x51, 0x3f,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0x46, 0x75, 0x3f,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x58, 0x8d, 0xce, 0xbe, 0x12, 0x73, 0xd7, 0xbe, 0x83, 0xf8, 0x0a, 0x3f,
  0x21, 0xe9, 0x56, 0xbd, 0xee, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x38, 0x62, 0x45, 0xbe, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x49, 0xbb, 0xb5, 0x5b, 0xf9, 0x3d,
  0x00, 0x00, 0x00, 0x00, 0x6f, 0xf9, 0x08, 0x3e, 0xbd, 0x88, 0xc7, 0x3d,
  0x54, 0x0c, 0x39, 0x3d, 0x46, 0x1a, 0x8f, 0x3e, 0xac, 0x3c, 0x13, 0x3e,
  0xbe, 0x79, 0xe0, 0xbd, 0xb8, 0xa0, 0x09, 0x3f, 0x36, 0x69, 0xf3, 0x3d,
  0xb9, 0xcf, 0x1c, 0x3e, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x61, 0x3d, 0xbb,
  0x75, 0x73, 0x3b, 0xbe, 0xf2, 0x53, 0x40, 0x3e, 0x20, 0xfb, 0xff, 0xff,
  0x24, 0xfb, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52,
  0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0xd8, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x9c, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x8c, 0x03, 0x00, 0x00,
  0x1c, 0x03, 0x00, 0x00, 0xac, 0x02, 0x00, 0x00, 0x58, 0x02, 0x00, 0x00,
  0x10, 0x02, 0x00, 0x00, 0xc4, 0x01, 0x00, 0x00, 0x78, 0x01, 0x00, 0x00,
  0xf0, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0xb2, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x9c, 0xfc, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74,
  0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a,
  0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0a, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0xf4, 0xfc, 0xff, 0xff,
  0x4c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d,
  0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
  0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
  0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e,
  0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31,
  0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x96, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00,
  0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x80, 0xfd, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65,
  0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e,
  0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x86, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0xf4, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xce, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x3c, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x16, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
  0x84, 0xfe, 0xff, 0xff, 0x17, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65,
  0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xc8, 0xfe, 0xff, 0xff,
  0x27, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61,
  0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72,
  0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x29, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
  0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x29, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64,
  0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61,
  0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00,
  0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76,
  0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f,
  0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a,
  0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09
 
};

#endif //SINE_MODEL_H