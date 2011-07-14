#pragma once

#ifndef WINGDIAPI
#define WINGDIAPI __declspec(dllimport)
#define GLEXT_UNDEF_WINGDIAPI
#endif

#ifndef APIENTRY
#define APIENTRY __stdcall
#define GLEXT_UNDEF_APIENTRY
#endif

#ifndef CALLBACK
#define CALLBACK
#define GLEXT_UNDEF_CALLBACK
#endif

#include <gl/gl.h>
#include <gl/glu.h>
#include <cstddef>

typedef char GLchar;
typedef char GLcharARB;
typedef unsigned int GLhandleARB;
typedef ptrdiff_t GLintptr;
typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptr;
typedef ptrdiff_t GLsizeiptrARB;
typedef __int64 GLint64;
typedef __int64 GLint64EXT;
typedef unsigned __int64 GLuint64;
typedef unsigned __int64 GLuint64EXT;
typedef struct __GLsync *GLsync;
typedef struct __cl_context *cl_context;
typedef struct __cl_event *cl_event;
typedef unsigned short GLhalf;
typedef GLintptr GLvdpauSurfaceNV;

// GL_VERSION_1_2

#ifndef GL_SMOOTH_POINT_SIZE_RANGE
    #define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#endif
#ifndef GL_SMOOTH_POINT_SIZE_GRANULARITY
    #define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_RANGE
    #define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#endif
#ifndef GL_SMOOTH_LINE_WIDTH_GRANULARITY
    #define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#endif
#ifndef GL_UNSIGNED_BYTE_3_3_2
    #define GL_UNSIGNED_BYTE_3_3_2 0x8032
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4
    #define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#endif
#ifndef GL_UNSIGNED_SHORT_5_5_5_1
    #define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8
    #define GL_UNSIGNED_INT_8_8_8_8 0x8035
#endif
#ifndef GL_UNSIGNED_INT_10_10_10_2
    #define GL_UNSIGNED_INT_10_10_10_2 0x8036
#endif
#ifndef GL_RESCALE_NORMAL
    #define GL_RESCALE_NORMAL 0x803A
#endif
#ifndef GL_TEXTURE_BINDING_3D
    #define GL_TEXTURE_BINDING_3D 0x806A
#endif
#ifndef GL_PACK_SKIP_IMAGES
    #define GL_PACK_SKIP_IMAGES 0x806B
#endif
#ifndef GL_PACK_IMAGE_HEIGHT
    #define GL_PACK_IMAGE_HEIGHT 0x806C
#endif
#ifndef GL_UNPACK_SKIP_IMAGES
    #define GL_UNPACK_SKIP_IMAGES 0x806D
#endif
#ifndef GL_UNPACK_IMAGE_HEIGHT
    #define GL_UNPACK_IMAGE_HEIGHT 0x806E
#endif
#ifndef GL_TEXTURE_3D
    #define GL_TEXTURE_3D 0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D
    #define GL_PROXY_TEXTURE_3D 0x8070
#endif
#ifndef GL_TEXTURE_DEPTH
    #define GL_TEXTURE_DEPTH 0x8071
#endif
#ifndef GL_TEXTURE_WRAP_R
    #define GL_TEXTURE_WRAP_R 0x8072
#endif
#ifndef GL_MAX_3D_TEXTURE_SIZE
    #define GL_MAX_3D_TEXTURE_SIZE 0x8073
#endif
#ifndef GL_BGR
    #define GL_BGR 0x80E0
#endif
#ifndef GL_BGRA
    #define GL_BGRA 0x80E1
#endif
#ifndef GL_MAX_ELEMENTS_VERTICES
    #define GL_MAX_ELEMENTS_VERTICES 0x80E8
#endif
#ifndef GL_MAX_ELEMENTS_INDICES
    #define GL_MAX_ELEMENTS_INDICES 0x80E9
#endif
#ifndef GL_CLAMP_TO_EDGE
    #define GL_CLAMP_TO_EDGE 0x812F
#endif
#ifndef GL_TEXTURE_MIN_LOD
    #define GL_TEXTURE_MIN_LOD 0x813A
#endif
#ifndef GL_TEXTURE_MAX_LOD
    #define GL_TEXTURE_MAX_LOD 0x813B
#endif
#ifndef GL_TEXTURE_BASE_LEVEL
    #define GL_TEXTURE_BASE_LEVEL 0x813C
#endif
#ifndef GL_TEXTURE_MAX_LEVEL
    #define GL_TEXTURE_MAX_LEVEL 0x813D
#endif
#ifndef GL_LIGHT_MODEL_COLOR_CONTROL
    #define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#endif
#ifndef GL_SINGLE_COLOR
    #define GL_SINGLE_COLOR 0x81F9
#endif
#ifndef GL_SEPARATE_SPECULAR_COLOR
    #define GL_SEPARATE_SPECULAR_COLOR 0x81FA
#endif
#ifndef GL_UNSIGNED_BYTE_2_3_3_REV
    #define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5
    #define GL_UNSIGNED_SHORT_5_6_5 0x8363
#endif
#ifndef GL_UNSIGNED_SHORT_5_6_5_REV
    #define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_REV
    #define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#endif
#ifndef GL_UNSIGNED_SHORT_1_5_5_5_REV
    #define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8_REV
    #define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#endif
#ifndef GL_UNSIGNED_INT_2_10_10_10_REV
    #define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#endif
#ifndef GL_ALIASED_POINT_SIZE_RANGE
    #define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#endif
#ifndef GL_ALIASED_LINE_WIDTH_RANGE
    #define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#endif

typedef void (APIENTRY * PFNGLCOPYTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTSPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);
typedef void (APIENTRY * PFNGLTEXIMAGE3DPROC)(GLenum target, GLint level, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid *pixels);
typedef void (APIENTRY * PFNGLTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid *pixels);

extern PFNGLCOPYTEXSUBIMAGE3DPROC glCopyTexSubImage3D;
extern PFNGLDRAWRANGEELEMENTSPROC glDrawRangeElements;
extern PFNGLTEXIMAGE3DPROC glTexImage3D;
extern PFNGLTEXSUBIMAGE3DPROC glTexSubImage3D;

// GL_VERSION_1_3

#ifndef GL_MULTISAMPLE
    #define GL_MULTISAMPLE 0x809D
#endif
#ifndef GL_SAMPLE_ALPHA_TO_COVERAGE
    #define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#endif
#ifndef GL_SAMPLE_ALPHA_TO_ONE
    #define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#endif
#ifndef GL_SAMPLE_COVERAGE
    #define GL_SAMPLE_COVERAGE 0x80A0
#endif
#ifndef GL_SAMPLE_BUFFERS
    #define GL_SAMPLE_BUFFERS 0x80A8
#endif
#ifndef GL_SAMPLES
    #define GL_SAMPLES 0x80A9
#endif
#ifndef GL_SAMPLE_COVERAGE_VALUE
    #define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#endif
#ifndef GL_SAMPLE_COVERAGE_INVERT
    #define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#endif
#ifndef GL_CLAMP_TO_BORDER
    #define GL_CLAMP_TO_BORDER 0x812D
#endif
#ifndef GL_TEXTURE0
    #define GL_TEXTURE0 0x84C0
#endif
#ifndef GL_TEXTURE1
    #define GL_TEXTURE1 0x84C1
#endif
#ifndef GL_TEXTURE2
    #define GL_TEXTURE2 0x84C2
#endif
#ifndef GL_TEXTURE3
    #define GL_TEXTURE3 0x84C3
#endif
#ifndef GL_TEXTURE4
    #define GL_TEXTURE4 0x84C4
#endif
#ifndef GL_TEXTURE5
    #define GL_TEXTURE5 0x84C5
#endif
#ifndef GL_TEXTURE6
    #define GL_TEXTURE6 0x84C6
#endif
#ifndef GL_TEXTURE7
    #define GL_TEXTURE7 0x84C7
#endif
#ifndef GL_TEXTURE8
    #define GL_TEXTURE8 0x84C8
#endif
#ifndef GL_TEXTURE9
    #define GL_TEXTURE9 0x84C9
#endif
#ifndef GL_TEXTURE10
    #define GL_TEXTURE10 0x84CA
#endif
#ifndef GL_TEXTURE11
    #define GL_TEXTURE11 0x84CB
#endif
#ifndef GL_TEXTURE12
    #define GL_TEXTURE12 0x84CC
#endif
#ifndef GL_TEXTURE13
    #define GL_TEXTURE13 0x84CD
#endif
#ifndef GL_TEXTURE14
    #define GL_TEXTURE14 0x84CE
#endif
#ifndef GL_TEXTURE15
    #define GL_TEXTURE15 0x84CF
#endif
#ifndef GL_TEXTURE16
    #define GL_TEXTURE16 0x84D0
#endif
#ifndef GL_TEXTURE17
    #define GL_TEXTURE17 0x84D1
#endif
#ifndef GL_TEXTURE18
    #define GL_TEXTURE18 0x84D2
#endif
#ifndef GL_TEXTURE19
    #define GL_TEXTURE19 0x84D3
#endif
#ifndef GL_TEXTURE20
    #define GL_TEXTURE20 0x84D4
#endif
#ifndef GL_TEXTURE21
    #define GL_TEXTURE21 0x84D5
#endif
#ifndef GL_TEXTURE22
    #define GL_TEXTURE22 0x84D6
#endif
#ifndef GL_TEXTURE23
    #define GL_TEXTURE23 0x84D7
#endif
#ifndef GL_TEXTURE24
    #define GL_TEXTURE24 0x84D8
#endif
#ifndef GL_TEXTURE25
    #define GL_TEXTURE25 0x84D9
#endif
#ifndef GL_TEXTURE26
    #define GL_TEXTURE26 0x84DA
#endif
#ifndef GL_TEXTURE27
    #define GL_TEXTURE27 0x84DB
#endif
#ifndef GL_TEXTURE28
    #define GL_TEXTURE28 0x84DC
#endif
#ifndef GL_TEXTURE29
    #define GL_TEXTURE29 0x84DD
#endif
#ifndef GL_TEXTURE30
    #define GL_TEXTURE30 0x84DE
#endif
#ifndef GL_TEXTURE31
    #define GL_TEXTURE31 0x84DF
#endif
#ifndef GL_ACTIVE_TEXTURE
    #define GL_ACTIVE_TEXTURE 0x84E0
#endif
#ifndef GL_CLIENT_ACTIVE_TEXTURE
    #define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#endif
#ifndef GL_MAX_TEXTURE_UNITS
    #define GL_MAX_TEXTURE_UNITS 0x84E2
#endif
#ifndef GL_TRANSPOSE_MODELVIEW_MATRIX
    #define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#endif
#ifndef GL_TRANSPOSE_PROJECTION_MATRIX
    #define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#endif
#ifndef GL_TRANSPOSE_TEXTURE_MATRIX
    #define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#endif
#ifndef GL_TRANSPOSE_COLOR_MATRIX
    #define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#endif
#ifndef GL_SUBTRACT
    #define GL_SUBTRACT 0x84E7
#endif
#ifndef GL_COMPRESSED_ALPHA
    #define GL_COMPRESSED_ALPHA 0x84E9
#endif
#ifndef GL_COMPRESSED_LUMINANCE
    #define GL_COMPRESSED_LUMINANCE 0x84EA
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA
    #define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#endif
#ifndef GL_COMPRESSED_INTENSITY
    #define GL_COMPRESSED_INTENSITY 0x84EC
#endif
#ifndef GL_COMPRESSED_RGB
    #define GL_COMPRESSED_RGB 0x84ED
#endif
#ifndef GL_COMPRESSED_RGBA
    #define GL_COMPRESSED_RGBA 0x84EE
#endif
#ifndef GL_TEXTURE_COMPRESSION_HINT
    #define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#endif
#ifndef GL_NORMAL_MAP
    #define GL_NORMAL_MAP 0x8511
#endif
#ifndef GL_REFLECTION_MAP
    #define GL_REFLECTION_MAP 0x8512
#endif
#ifndef GL_TEXTURE_CUBE_MAP
    #define GL_TEXTURE_CUBE_MAP 0x8513
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP
    #define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP
    #define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#endif
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE
    #define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#endif
#ifndef GL_COMBINE
    #define GL_COMBINE 0x8570
#endif
#ifndef GL_COMBINE_RGB
    #define GL_COMBINE_RGB 0x8571
#endif
#ifndef GL_COMBINE_ALPHA
    #define GL_COMBINE_ALPHA 0x8572
#endif
#ifndef GL_RGB_SCALE
    #define GL_RGB_SCALE 0x8573
#endif
#ifndef GL_ADD_SIGNED
    #define GL_ADD_SIGNED 0x8574
#endif
#ifndef GL_INTERPOLATE
    #define GL_INTERPOLATE 0x8575
#endif
#ifndef GL_CONSTANT
    #define GL_CONSTANT 0x8576
#endif
#ifndef GL_PRIMARY_COLOR
    #define GL_PRIMARY_COLOR 0x8577
#endif
#ifndef GL_PREVIOUS
    #define GL_PREVIOUS 0x8578
#endif
#ifndef GL_SOURCE0_RGB
    #define GL_SOURCE0_RGB 0x8580
#endif
#ifndef GL_SOURCE1_RGB
    #define GL_SOURCE1_RGB 0x8581
#endif
#ifndef GL_SOURCE2_RGB
    #define GL_SOURCE2_RGB 0x8582
#endif
#ifndef GL_SOURCE0_ALPHA
    #define GL_SOURCE0_ALPHA 0x8588
#endif
#ifndef GL_SOURCE1_ALPHA
    #define GL_SOURCE1_ALPHA 0x8589
#endif
#ifndef GL_SOURCE2_ALPHA
    #define GL_SOURCE2_ALPHA 0x858A
#endif
#ifndef GL_OPERAND0_RGB
    #define GL_OPERAND0_RGB 0x8590
#endif
#ifndef GL_OPERAND1_RGB
    #define GL_OPERAND1_RGB 0x8591
#endif
#ifndef GL_OPERAND2_RGB
    #define GL_OPERAND2_RGB 0x8592
#endif
#ifndef GL_OPERAND0_ALPHA
    #define GL_OPERAND0_ALPHA 0x8598
#endif
#ifndef GL_OPERAND1_ALPHA
    #define GL_OPERAND1_ALPHA 0x8599
#endif
#ifndef GL_OPERAND2_ALPHA
    #define GL_OPERAND2_ALPHA 0x859A
#endif
#ifndef GL_TEXTURE_COMPRESSED_IMAGE_SIZE
    #define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#endif
#ifndef GL_TEXTURE_COMPRESSED
    #define GL_TEXTURE_COMPRESSED 0x86A1
#endif
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS
    #define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#endif
#ifndef GL_COMPRESSED_TEXTURE_FORMATS
    #define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#endif
#ifndef GL_DOT3_RGB
    #define GL_DOT3_RGB 0x86AE
#endif
#ifndef GL_DOT3_RGBA
    #define GL_DOT3_RGBA 0x86AF
#endif

typedef void (APIENTRY * PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void (APIENTRY * PFNGLCLIENTACTIVETEXTUREPROC)(GLenum texture);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid *data);
typedef void (APIENTRY * PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint lod, GLvoid *img);
typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble m[16]);
typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat m[16]);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DPROC)(GLenum target, GLdouble s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DVPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FPROC)(GLenum target, GLfloat s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FVPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IPROC)(GLenum target, GLint s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IVPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SPROC)(GLenum target, GLshort s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SVPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DPROC)(GLenum target, GLdouble s, GLdouble t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DVPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FPROC)(GLenum target, GLfloat s, GLfloat t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FVPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IPROC)(GLenum target, GLint s, GLint t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IVPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SPROC)(GLenum target, GLshort s, GLshort t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SVPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DVPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FVPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IPROC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IVPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SPROC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SVPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DVPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FVPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IPROC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IVPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SPROC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SVPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLSAMPLECOVERAGEPROC)(GLclampf value, GLboolean invert);

extern PFNGLACTIVETEXTUREPROC glActiveTexture;
extern PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
extern PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
extern PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
extern PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
extern PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
extern PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;
extern PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;
extern PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;
extern PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;
extern PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;
extern PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;
extern PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;
extern PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;
extern PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;
extern PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;
extern PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;
extern PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;
extern PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;
extern PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;
extern PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;
extern PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;
extern PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;
extern PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;
extern PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;
extern PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;
extern PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;
extern PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;
extern PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;
extern PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;
extern PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;
extern PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;
extern PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;
extern PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;
extern PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;
extern PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;
extern PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
extern PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;
extern PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;
extern PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;
extern PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;
extern PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;
extern PFNGLSAMPLECOVERAGEPROC glSampleCoverage;

// GL_VERSION_1_4

#ifndef GL_BLEND_DST_RGB
    #define GL_BLEND_DST_RGB 0x80C8
#endif
#ifndef GL_BLEND_SRC_RGB
    #define GL_BLEND_SRC_RGB 0x80C9
#endif
#ifndef GL_BLEND_DST_ALPHA
    #define GL_BLEND_DST_ALPHA 0x80CA
#endif
#ifndef GL_BLEND_SRC_ALPHA
    #define GL_BLEND_SRC_ALPHA 0x80CB
#endif
#ifndef GL_POINT_SIZE_MIN
    #define GL_POINT_SIZE_MIN 0x8126
#endif
#ifndef GL_POINT_SIZE_MAX
    #define GL_POINT_SIZE_MAX 0x8127
#endif
#ifndef GL_POINT_FADE_THRESHOLD_SIZE
    #define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#endif
#ifndef GL_POINT_DISTANCE_ATTENUATION
    #define GL_POINT_DISTANCE_ATTENUATION 0x8129
#endif
#ifndef GL_GENERATE_MIPMAP
    #define GL_GENERATE_MIPMAP 0x8191
#endif
#ifndef GL_GENERATE_MIPMAP_HINT
    #define GL_GENERATE_MIPMAP_HINT 0x8192
#endif
#ifndef GL_DEPTH_COMPONENT16
    #define GL_DEPTH_COMPONENT16 0x81A5
#endif
#ifndef GL_DEPTH_COMPONENT24
    #define GL_DEPTH_COMPONENT24 0x81A6
#endif
#ifndef GL_DEPTH_COMPONENT32
    #define GL_DEPTH_COMPONENT32 0x81A7
#endif
#ifndef GL_MIRRORED_REPEAT
    #define GL_MIRRORED_REPEAT 0x8370
#endif
#ifndef GL_FOG_COORDINATE_SOURCE
    #define GL_FOG_COORDINATE_SOURCE 0x8450
#endif
#ifndef GL_FOG_COORDINATE
    #define GL_FOG_COORDINATE 0x8451
#endif
#ifndef GL_FRAGMENT_DEPTH
    #define GL_FRAGMENT_DEPTH 0x8452
#endif
#ifndef GL_CURRENT_FOG_COORDINATE
    #define GL_CURRENT_FOG_COORDINATE 0x8453
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_TYPE
    #define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_STRIDE
    #define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_POINTER
    #define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#endif
#ifndef GL_FOG_COORDINATE_ARRAY
    #define GL_FOG_COORDINATE_ARRAY 0x8457
#endif
#ifndef GL_COLOR_SUM
    #define GL_COLOR_SUM 0x8458
#endif
#ifndef GL_CURRENT_SECONDARY_COLOR
    #define GL_CURRENT_SECONDARY_COLOR 0x8459
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_SIZE
    #define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_TYPE
    #define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_STRIDE
    #define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_POINTER
    #define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY
    #define GL_SECONDARY_COLOR_ARRAY 0x845E
#endif
#ifndef GL_MAX_TEXTURE_LOD_BIAS
    #define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#endif
#ifndef GL_TEXTURE_FILTER_CONTROL
    #define GL_TEXTURE_FILTER_CONTROL 0x8500
#endif
#ifndef GL_TEXTURE_LOD_BIAS
    #define GL_TEXTURE_LOD_BIAS 0x8501
#endif
#ifndef GL_INCR_WRAP
    #define GL_INCR_WRAP 0x8507
#endif
#ifndef GL_DECR_WRAP
    #define GL_DECR_WRAP 0x8508
#endif
#ifndef GL_TEXTURE_DEPTH_SIZE
    #define GL_TEXTURE_DEPTH_SIZE 0x884A
#endif
#ifndef GL_DEPTH_TEXTURE_MODE
    #define GL_DEPTH_TEXTURE_MODE 0x884B
#endif
#ifndef GL_TEXTURE_COMPARE_MODE
    #define GL_TEXTURE_COMPARE_MODE 0x884C
#endif
#ifndef GL_TEXTURE_COMPARE_FUNC
    #define GL_TEXTURE_COMPARE_FUNC 0x884D
#endif
#ifndef GL_COMPARE_R_TO_TEXTURE
    #define GL_COMPARE_R_TO_TEXTURE 0x884E
#endif

typedef void (APIENTRY * PFNGLBLENDCOLORPROC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (APIENTRY * PFNGLBLENDEQUATIONPROC)(GLenum mode);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (APIENTRY * PFNGLFOGCOORDPOINTERPROC)(GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void (APIENTRY * PFNGLFOGCOORDDPROC)(GLdouble coord);
typedef void (APIENTRY * PFNGLFOGCOORDDVPROC)(const GLdouble *coord);
typedef void (APIENTRY * PFNGLFOGCOORDFPROC)(GLfloat coord);
typedef void (APIENTRY * PFNGLFOGCOORDFVPROC)(const GLfloat *coord);
typedef void (APIENTRY * PFNGLMULTIDRAWARRAYSPROC)(GLenum mode, GLint *first, GLsizei *count, GLsizei primcount);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTSPROC)(GLenum mode, GLsizei *count, GLenum type, const GLvoid **indices, GLsizei primcount);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFVPROC)(GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLPOINTPARAMETERIPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERIVPROC)(GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BVPROC)(const GLbyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DVPROC)(const GLdouble *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FVPROC)(const GLfloat *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IPROC)(GLint red, GLint green, GLint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IVPROC)(const GLint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SVPROC)(const GLshort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBVPROC)(const GLubyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIVPROC)(const GLuint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USVPROC)(const GLushort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLORPOINTERPROC)(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void (APIENTRY * PFNGLWINDOWPOS2DPROC)(GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLWINDOWPOS2DVPROC)(const GLdouble *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2FPROC)(GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLWINDOWPOS2FVPROC)(const GLfloat *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2IPROC)(GLint x, GLint y);
typedef void (APIENTRY * PFNGLWINDOWPOS2IVPROC)(const GLint *p);
typedef void (APIENTRY * PFNGLWINDOWPOS2SPROC)(GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLWINDOWPOS2SVPROC)(const GLshort *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3DPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLWINDOWPOS3DVPROC)(const GLdouble *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3FPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLWINDOWPOS3FVPROC)(const GLfloat *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3IPROC)(GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLWINDOWPOS3IVPROC)(const GLint *p);
typedef void (APIENTRY * PFNGLWINDOWPOS3SPROC)(GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLWINDOWPOS3SVPROC)(const GLshort *p);

extern PFNGLBLENDCOLORPROC glBlendColor;
extern PFNGLBLENDEQUATIONPROC glBlendEquation;
extern PFNGLBLENDFUNCSEPARATEPROC glBlendFuncSeparate;
extern PFNGLFOGCOORDPOINTERPROC glFogCoordPointer;
extern PFNGLFOGCOORDDPROC glFogCoordd;
extern PFNGLFOGCOORDDVPROC glFogCoorddv;
extern PFNGLFOGCOORDFPROC glFogCoordf;
extern PFNGLFOGCOORDFVPROC glFogCoordfv;
extern PFNGLMULTIDRAWARRAYSPROC glMultiDrawArrays;
extern PFNGLMULTIDRAWELEMENTSPROC glMultiDrawElements;
extern PFNGLPOINTPARAMETERFPROC glPointParameterf;
extern PFNGLPOINTPARAMETERFVPROC glPointParameterfv;
extern PFNGLPOINTPARAMETERIPROC glPointParameteri;
extern PFNGLPOINTPARAMETERIVPROC glPointParameteriv;
extern PFNGLSECONDARYCOLOR3BPROC glSecondaryColor3b;
extern PFNGLSECONDARYCOLOR3BVPROC glSecondaryColor3bv;
extern PFNGLSECONDARYCOLOR3DPROC glSecondaryColor3d;
extern PFNGLSECONDARYCOLOR3DVPROC glSecondaryColor3dv;
extern PFNGLSECONDARYCOLOR3FPROC glSecondaryColor3f;
extern PFNGLSECONDARYCOLOR3FVPROC glSecondaryColor3fv;
extern PFNGLSECONDARYCOLOR3IPROC glSecondaryColor3i;
extern PFNGLSECONDARYCOLOR3IVPROC glSecondaryColor3iv;
extern PFNGLSECONDARYCOLOR3SPROC glSecondaryColor3s;
extern PFNGLSECONDARYCOLOR3SVPROC glSecondaryColor3sv;
extern PFNGLSECONDARYCOLOR3UBPROC glSecondaryColor3ub;
extern PFNGLSECONDARYCOLOR3UBVPROC glSecondaryColor3ubv;
extern PFNGLSECONDARYCOLOR3UIPROC glSecondaryColor3ui;
extern PFNGLSECONDARYCOLOR3UIVPROC glSecondaryColor3uiv;
extern PFNGLSECONDARYCOLOR3USPROC glSecondaryColor3us;
extern PFNGLSECONDARYCOLOR3USVPROC glSecondaryColor3usv;
extern PFNGLSECONDARYCOLORPOINTERPROC glSecondaryColorPointer;
extern PFNGLWINDOWPOS2DPROC glWindowPos2d;
extern PFNGLWINDOWPOS2DVPROC glWindowPos2dv;
extern PFNGLWINDOWPOS2FPROC glWindowPos2f;
extern PFNGLWINDOWPOS2FVPROC glWindowPos2fv;
extern PFNGLWINDOWPOS2IPROC glWindowPos2i;
extern PFNGLWINDOWPOS2IVPROC glWindowPos2iv;
extern PFNGLWINDOWPOS2SPROC glWindowPos2s;
extern PFNGLWINDOWPOS2SVPROC glWindowPos2sv;
extern PFNGLWINDOWPOS3DPROC glWindowPos3d;
extern PFNGLWINDOWPOS3DVPROC glWindowPos3dv;
extern PFNGLWINDOWPOS3FPROC glWindowPos3f;
extern PFNGLWINDOWPOS3FVPROC glWindowPos3fv;
extern PFNGLWINDOWPOS3IPROC glWindowPos3i;
extern PFNGLWINDOWPOS3IVPROC glWindowPos3iv;
extern PFNGLWINDOWPOS3SPROC glWindowPos3s;
extern PFNGLWINDOWPOS3SVPROC glWindowPos3sv;

// GL_VERSION_1_5

#ifndef GL_BUFFER_SIZE
    #define GL_BUFFER_SIZE 0x8764
#endif
#ifndef GL_BUFFER_USAGE
    #define GL_BUFFER_USAGE 0x8765
#endif
#ifndef GL_QUERY_COUNTER_BITS
    #define GL_QUERY_COUNTER_BITS 0x8864
#endif
#ifndef GL_CURRENT_QUERY
    #define GL_CURRENT_QUERY 0x8865
#endif
#ifndef GL_QUERY_RESULT
    #define GL_QUERY_RESULT 0x8866
#endif
#ifndef GL_QUERY_RESULT_AVAILABLE
    #define GL_QUERY_RESULT_AVAILABLE 0x8867
#endif
#ifndef GL_ARRAY_BUFFER
    #define GL_ARRAY_BUFFER 0x8892
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER
    #define GL_ELEMENT_ARRAY_BUFFER 0x8893
#endif
#ifndef GL_ARRAY_BUFFER_BINDING
    #define GL_ARRAY_BUFFER_BINDING 0x8894
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING
    #define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#endif
#ifndef GL_VERTEX_ARRAY_BUFFER_BINDING
    #define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#endif
#ifndef GL_NORMAL_ARRAY_BUFFER_BINDING
    #define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#endif
#ifndef GL_COLOR_ARRAY_BUFFER_BINDING
    #define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#endif
#ifndef GL_INDEX_ARRAY_BUFFER_BINDING
    #define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING
    #define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING
    #define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING
    #define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING
    #define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#endif
#ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING
    #define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING
    #define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#endif
#ifndef GL_READ_ONLY
    #define GL_READ_ONLY 0x88B8
#endif
#ifndef GL_WRITE_ONLY
    #define GL_WRITE_ONLY 0x88B9
#endif
#ifndef GL_READ_WRITE
    #define GL_READ_WRITE 0x88BA
#endif
#ifndef GL_BUFFER_ACCESS
    #define GL_BUFFER_ACCESS 0x88BB
#endif
#ifndef GL_BUFFER_MAPPED
    #define GL_BUFFER_MAPPED 0x88BC
#endif
#ifndef GL_BUFFER_MAP_POINTER
    #define GL_BUFFER_MAP_POINTER 0x88BD
#endif
#ifndef GL_STREAM_DRAW
    #define GL_STREAM_DRAW 0x88E0
#endif
#ifndef GL_STREAM_READ
    #define GL_STREAM_READ 0x88E1
#endif
#ifndef GL_STREAM_COPY
    #define GL_STREAM_COPY 0x88E2
#endif
#ifndef GL_STATIC_DRAW
    #define GL_STATIC_DRAW 0x88E4
#endif
#ifndef GL_STATIC_READ
    #define GL_STATIC_READ 0x88E5
#endif
#ifndef GL_STATIC_COPY
    #define GL_STATIC_COPY 0x88E6
#endif
#ifndef GL_DYNAMIC_DRAW
    #define GL_DYNAMIC_DRAW 0x88E8
#endif
#ifndef GL_DYNAMIC_READ
    #define GL_DYNAMIC_READ 0x88E9
#endif
#ifndef GL_DYNAMIC_COPY
    #define GL_DYNAMIC_COPY 0x88EA
#endif
#ifndef GL_SAMPLES_PASSED
    #define GL_SAMPLES_PASSED 0x8914
#endif

typedef void (APIENTRY * PFNGLBEGINQUERYPROC)(GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void (APIENTRY * PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (APIENTRY * PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef void (APIENTRY * PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint* buffers);
typedef void (APIENTRY * PFNGLDELETEQUERIESPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLENDQUERYPROC)(GLenum target);
typedef void (APIENTRY * PFNGLGENBUFFERSPROC)(GLsizei n, GLuint* buffers);
typedef void (APIENTRY * PFNGLGENQUERIESPROC)(GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLGETBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETBUFFERPOINTERVPROC)(GLenum target, GLenum pname, GLvoid** params);
typedef void (APIENTRY * PFNGLGETBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTIVPROC)(GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTUIVPROC)(GLuint id, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETQUERYIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISBUFFERPROC)(GLuint buffer);
typedef GLboolean (APIENTRY * PFNGLISQUERYPROC)(GLuint id);
typedef GLvoid* (APIENTRY * PFNGLMAPBUFFERPROC)(GLenum target, GLenum access);
typedef GLboolean (APIENTRY * PFNGLUNMAPBUFFERPROC)(GLenum target);

extern PFNGLBEGINQUERYPROC glBeginQuery;
extern PFNGLBINDBUFFERPROC glBindBuffer;
extern PFNGLBUFFERDATAPROC glBufferData;
extern PFNGLBUFFERSUBDATAPROC glBufferSubData;
extern PFNGLDELETEBUFFERSPROC glDeleteBuffers;
extern PFNGLDELETEQUERIESPROC glDeleteQueries;
extern PFNGLENDQUERYPROC glEndQuery;
extern PFNGLGENBUFFERSPROC glGenBuffers;
extern PFNGLGENQUERIESPROC glGenQueries;
extern PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
extern PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;
extern PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
extern PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
extern PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
extern PFNGLGETQUERYIVPROC glGetQueryiv;
extern PFNGLISBUFFERPROC glIsBuffer;
extern PFNGLISQUERYPROC glIsQuery;
extern PFNGLMAPBUFFERPROC glMapBuffer;
extern PFNGLUNMAPBUFFERPROC glUnmapBuffer;

// GL_VERSION_2_0

#ifndef GL_VERTEX_ATTRIB_ARRAY_ENABLED
    #define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_SIZE
    #define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_STRIDE
    #define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_TYPE
    #define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#endif
#ifndef GL_CURRENT_VERTEX_ATTRIB
    #define GL_CURRENT_VERTEX_ATTRIB 0x8626
#endif
#ifndef GL_VERTEX_PROGRAM_POINT_SIZE
    #define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#endif
#ifndef GL_VERTEX_PROGRAM_TWO_SIDE
    #define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_POINTER
    #define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#endif
#ifndef GL_STENCIL_BACK_FUNC
    #define GL_STENCIL_BACK_FUNC 0x8800
#endif
#ifndef GL_STENCIL_BACK_FAIL
    #define GL_STENCIL_BACK_FAIL 0x8801
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_FAIL
    #define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_PASS
    #define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#endif
#ifndef GL_MAX_DRAW_BUFFERS
    #define GL_MAX_DRAW_BUFFERS 0x8824
#endif
#ifndef GL_DRAW_BUFFER0
    #define GL_DRAW_BUFFER0 0x8825
#endif
#ifndef GL_DRAW_BUFFER1
    #define GL_DRAW_BUFFER1 0x8826
#endif
#ifndef GL_DRAW_BUFFER2
    #define GL_DRAW_BUFFER2 0x8827
#endif
#ifndef GL_DRAW_BUFFER3
    #define GL_DRAW_BUFFER3 0x8828
#endif
#ifndef GL_DRAW_BUFFER4
    #define GL_DRAW_BUFFER4 0x8829
#endif
#ifndef GL_DRAW_BUFFER5
    #define GL_DRAW_BUFFER5 0x882A
#endif
#ifndef GL_DRAW_BUFFER6
    #define GL_DRAW_BUFFER6 0x882B
#endif
#ifndef GL_DRAW_BUFFER7
    #define GL_DRAW_BUFFER7 0x882C
#endif
#ifndef GL_DRAW_BUFFER8
    #define GL_DRAW_BUFFER8 0x882D
#endif
#ifndef GL_DRAW_BUFFER9
    #define GL_DRAW_BUFFER9 0x882E
#endif
#ifndef GL_DRAW_BUFFER10
    #define GL_DRAW_BUFFER10 0x882F
#endif
#ifndef GL_DRAW_BUFFER11
    #define GL_DRAW_BUFFER11 0x8830
#endif
#ifndef GL_DRAW_BUFFER12
    #define GL_DRAW_BUFFER12 0x8831
#endif
#ifndef GL_DRAW_BUFFER13
    #define GL_DRAW_BUFFER13 0x8832
#endif
#ifndef GL_DRAW_BUFFER14
    #define GL_DRAW_BUFFER14 0x8833
#endif
#ifndef GL_DRAW_BUFFER15
    #define GL_DRAW_BUFFER15 0x8834
#endif
#ifndef GL_BLEND_EQUATION_ALPHA
    #define GL_BLEND_EQUATION_ALPHA 0x883D
#endif
#ifndef GL_POINT_SPRITE
    #define GL_POINT_SPRITE 0x8861
#endif
#ifndef GL_COORD_REPLACE
    #define GL_COORD_REPLACE 0x8862
#endif
#ifndef GL_MAX_VERTEX_ATTRIBS
    #define GL_MAX_VERTEX_ATTRIBS 0x8869
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED
    #define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#endif
#ifndef GL_MAX_TEXTURE_COORDS
    #define GL_MAX_TEXTURE_COORDS 0x8871
#endif
#ifndef GL_MAX_TEXTURE_IMAGE_UNITS
    #define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#endif
#ifndef GL_FRAGMENT_SHADER
    #define GL_FRAGMENT_SHADER 0x8B30
#endif
#ifndef GL_VERTEX_SHADER
    #define GL_VERTEX_SHADER 0x8B31
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS
    #define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_COMPONENTS
    #define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#endif
#ifndef GL_MAX_VARYING_FLOATS
    #define GL_MAX_VARYING_FLOATS 0x8B4B
#endif
#ifndef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS
    #define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#endif
#ifndef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS
    #define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#endif
#ifndef GL_SHADER_TYPE
    #define GL_SHADER_TYPE 0x8B4F
#endif
#ifndef GL_FLOAT_VEC2
    #define GL_FLOAT_VEC2 0x8B50
#endif
#ifndef GL_FLOAT_VEC3
    #define GL_FLOAT_VEC3 0x8B51
#endif
#ifndef GL_FLOAT_VEC4
    #define GL_FLOAT_VEC4 0x8B52
#endif
#ifndef GL_INT_VEC2
    #define GL_INT_VEC2 0x8B53
#endif
#ifndef GL_INT_VEC3
    #define GL_INT_VEC3 0x8B54
#endif
#ifndef GL_INT_VEC4
    #define GL_INT_VEC4 0x8B55
#endif
#ifndef GL_BOOL
    #define GL_BOOL 0x8B56
#endif
#ifndef GL_BOOL_VEC2
    #define GL_BOOL_VEC2 0x8B57
#endif
#ifndef GL_BOOL_VEC3
    #define GL_BOOL_VEC3 0x8B58
#endif
#ifndef GL_BOOL_VEC4
    #define GL_BOOL_VEC4 0x8B59
#endif
#ifndef GL_FLOAT_MAT2
    #define GL_FLOAT_MAT2 0x8B5A
#endif
#ifndef GL_FLOAT_MAT3
    #define GL_FLOAT_MAT3 0x8B5B
#endif
#ifndef GL_FLOAT_MAT4
    #define GL_FLOAT_MAT4 0x8B5C
#endif
#ifndef GL_SAMPLER_1D
    #define GL_SAMPLER_1D 0x8B5D
#endif
#ifndef GL_SAMPLER_2D
    #define GL_SAMPLER_2D 0x8B5E
#endif
#ifndef GL_SAMPLER_3D
    #define GL_SAMPLER_3D 0x8B5F
#endif
#ifndef GL_SAMPLER_CUBE
    #define GL_SAMPLER_CUBE 0x8B60
#endif
#ifndef GL_SAMPLER_1D_SHADOW
    #define GL_SAMPLER_1D_SHADOW 0x8B61
#endif
#ifndef GL_SAMPLER_2D_SHADOW
    #define GL_SAMPLER_2D_SHADOW 0x8B62
#endif
#ifndef GL_DELETE_STATUS
    #define GL_DELETE_STATUS 0x8B80
#endif
#ifndef GL_COMPILE_STATUS
    #define GL_COMPILE_STATUS 0x8B81
#endif
#ifndef GL_LINK_STATUS
    #define GL_LINK_STATUS 0x8B82
#endif
#ifndef GL_VALIDATE_STATUS
    #define GL_VALIDATE_STATUS 0x8B83
#endif
#ifndef GL_INFO_LOG_LENGTH
    #define GL_INFO_LOG_LENGTH 0x8B84
#endif
#ifndef GL_ATTACHED_SHADERS
    #define GL_ATTACHED_SHADERS 0x8B85
#endif
#ifndef GL_ACTIVE_UNIFORMS
    #define GL_ACTIVE_UNIFORMS 0x8B86
#endif
#ifndef GL_ACTIVE_UNIFORM_MAX_LENGTH
    #define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#endif
#ifndef GL_SHADER_SOURCE_LENGTH
    #define GL_SHADER_SOURCE_LENGTH 0x8B88
#endif
#ifndef GL_ACTIVE_ATTRIBUTES
    #define GL_ACTIVE_ATTRIBUTES 0x8B89
#endif
#ifndef GL_ACTIVE_ATTRIBUTE_MAX_LENGTH
    #define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#endif
#ifndef GL_FRAGMENT_SHADER_DERIVATIVE_HINT
    #define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#endif
#ifndef GL_SHADING_LANGUAGE_VERSION
    #define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#endif
#ifndef GL_CURRENT_PROGRAM
    #define GL_CURRENT_PROGRAM 0x8B8D
#endif
#ifndef GL_POINT_SPRITE_COORD_ORIGIN
    #define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#endif
#ifndef GL_LOWER_LEFT
    #define GL_LOWER_LEFT 0x8CA1
#endif
#ifndef GL_UPPER_LEFT
    #define GL_UPPER_LEFT 0x8CA2
#endif
#ifndef GL_STENCIL_BACK_REF
    #define GL_STENCIL_BACK_REF 0x8CA3
#endif
#ifndef GL_STENCIL_BACK_VALUE_MASK
    #define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#endif
#ifndef GL_STENCIL_BACK_WRITEMASK
    #define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#endif

typedef void (APIENTRY * PFNGLATTACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (APIENTRY * PFNGLBINDATTRIBLOCATIONPROC)(GLuint program, GLuint index, const GLchar* name);
typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEPROC)(GLenum, GLenum);
typedef void (APIENTRY * PFNGLCOMPILESHADERPROC)(GLuint shader);
typedef GLuint (APIENTRY * PFNGLCREATEPROGRAMPROC)(void);
typedef GLuint (APIENTRY * PFNGLCREATESHADERPROC)(GLenum type);
typedef void (APIENTRY * PFNGLDELETEPROGRAMPROC)(GLuint program);
typedef void (APIENTRY * PFNGLDELETESHADERPROC)(GLuint shader);
typedef void (APIENTRY * PFNGLDETACHSHADERPROC)(GLuint program, GLuint shader);
typedef void (APIENTRY * PFNGLDISABLEVERTEXATTRIBARRAYPROC)(GLuint);
typedef void (APIENTRY * PFNGLDRAWBUFFERSPROC)(GLsizei n, const GLenum* bufs);
typedef void (APIENTRY * PFNGLENABLEVERTEXATTRIBARRAYPROC)(GLuint);
typedef void (APIENTRY * PFNGLGETACTIVEATTRIBPROC)(GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMPROC)(GLuint program, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (APIENTRY * PFNGLGETATTACHEDSHADERSPROC)(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shaders);
typedef GLint (APIENTRY * PFNGLGETATTRIBLOCATIONPROC)(GLuint program, const GLchar* name);
typedef void (APIENTRY * PFNGLGETPROGRAMINFOLOGPROC)(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (APIENTRY * PFNGLGETPROGRAMIVPROC)(GLuint program, GLenum pname, GLint* param);
typedef void (APIENTRY * PFNGLGETSHADERINFOLOGPROC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (APIENTRY * PFNGLGETSHADERSOURCEPROC)(GLuint obj, GLsizei maxLength, GLsizei* length, GLchar* source);
typedef void (APIENTRY * PFNGLGETSHADERIVPROC)(GLuint shader, GLenum pname, GLint* param);
typedef GLint (APIENTRY * PFNGLGETUNIFORMLOCATIONPROC)(GLuint program, const GLchar* name);
typedef void (APIENTRY * PFNGLGETUNIFORMFVPROC)(GLuint program, GLint location, GLfloat* params);
typedef void (APIENTRY * PFNGLGETUNIFORMIVPROC)(GLuint program, GLint location, GLint* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBPOINTERVPROC)(GLuint, GLenum, GLvoid**);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBDVPROC)(GLuint, GLenum, GLdouble*);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBFVPROC)(GLuint, GLenum, GLfloat*);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIVPROC)(GLuint, GLenum, GLint*);
typedef GLboolean (APIENTRY * PFNGLISPROGRAMPROC)(GLuint program);
typedef GLboolean (APIENTRY * PFNGLISSHADERPROC)(GLuint shader);
typedef void (APIENTRY * PFNGLLINKPROGRAMPROC)(GLuint program);
typedef void (APIENTRY * PFNGLSHADERSOURCEPROC)(GLuint shader, GLsizei count, const GLchar** strings, const GLint* lengths);
typedef void (APIENTRY * PFNGLSTENCILFUNCSEPARATEPROC)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
typedef void (APIENTRY * PFNGLSTENCILMASKSEPARATEPROC)(GLenum, GLuint);
typedef void (APIENTRY * PFNGLSTENCILOPSEPARATEPROC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (APIENTRY * PFNGLUNIFORM1FPROC)(GLint location, GLfloat v0);
typedef void (APIENTRY * PFNGLUNIFORM1FVPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM1IPROC)(GLint location, GLint v0);
typedef void (APIENTRY * PFNGLUNIFORM1IVPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM2FPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRY * PFNGLUNIFORM2FVPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM2IPROC)(GLint location, GLint v0, GLint v1);
typedef void (APIENTRY * PFNGLUNIFORM2IVPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM3FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRY * PFNGLUNIFORM3FVPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM3IPROC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRY * PFNGLUNIFORM3IVPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM4FPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRY * PFNGLUNIFORM4FVPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM4IPROC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRY * PFNGLUNIFORM4IVPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUSEPROGRAMPROC)(GLuint program);
typedef void (APIENTRY * PFNGLVALIDATEPROGRAMPROC)(GLuint program);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DPROC)(GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FPROC)(GLuint index, GLfloat x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SPROC)(GLuint index, GLshort x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SPROC)(GLuint index, GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NBVPROC)(GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NIVPROC)(GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NSVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBVPROC)(GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUIVPROC)(GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUSVPROC)(GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4BVPROC)(GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4IVPROC)(GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UBVPROC)(GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UIVPROC)(GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4USVPROC)(GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBPOINTERPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);

extern PFNGLATTACHSHADERPROC glAttachShader;
extern PFNGLBINDATTRIBLOCATIONPROC glBindAttribLocation;
extern PFNGLBLENDEQUATIONSEPARATEPROC glBlendEquationSeparate;
extern PFNGLCOMPILESHADERPROC glCompileShader;
extern PFNGLCREATEPROGRAMPROC glCreateProgram;
extern PFNGLCREATESHADERPROC glCreateShader;
extern PFNGLDELETEPROGRAMPROC glDeleteProgram;
extern PFNGLDELETESHADERPROC glDeleteShader;
extern PFNGLDETACHSHADERPROC glDetachShader;
extern PFNGLDISABLEVERTEXATTRIBARRAYPROC glDisableVertexAttribArray;
extern PFNGLDRAWBUFFERSPROC glDrawBuffers;
extern PFNGLENABLEVERTEXATTRIBARRAYPROC glEnableVertexAttribArray;
extern PFNGLGETACTIVEATTRIBPROC glGetActiveAttrib;
extern PFNGLGETACTIVEUNIFORMPROC glGetActiveUniform;
extern PFNGLGETATTACHEDSHADERSPROC glGetAttachedShaders;
extern PFNGLGETATTRIBLOCATIONPROC glGetAttribLocation;
extern PFNGLGETPROGRAMINFOLOGPROC glGetProgramInfoLog;
extern PFNGLGETPROGRAMIVPROC glGetProgramiv;
extern PFNGLGETSHADERINFOLOGPROC glGetShaderInfoLog;
extern PFNGLGETSHADERSOURCEPROC glGetShaderSource;
extern PFNGLGETSHADERIVPROC glGetShaderiv;
extern PFNGLGETUNIFORMLOCATIONPROC glGetUniformLocation;
extern PFNGLGETUNIFORMFVPROC glGetUniformfv;
extern PFNGLGETUNIFORMIVPROC glGetUniformiv;
extern PFNGLGETVERTEXATTRIBPOINTERVPROC glGetVertexAttribPointerv;
extern PFNGLGETVERTEXATTRIBDVPROC glGetVertexAttribdv;
extern PFNGLGETVERTEXATTRIBFVPROC glGetVertexAttribfv;
extern PFNGLGETVERTEXATTRIBIVPROC glGetVertexAttribiv;
extern PFNGLISPROGRAMPROC glIsProgram;
extern PFNGLISSHADERPROC glIsShader;
extern PFNGLLINKPROGRAMPROC glLinkProgram;
extern PFNGLSHADERSOURCEPROC glShaderSource;
extern PFNGLSTENCILFUNCSEPARATEPROC glStencilFuncSeparate;
extern PFNGLSTENCILMASKSEPARATEPROC glStencilMaskSeparate;
extern PFNGLSTENCILOPSEPARATEPROC glStencilOpSeparate;
extern PFNGLUNIFORM1FPROC glUniform1f;
extern PFNGLUNIFORM1FVPROC glUniform1fv;
extern PFNGLUNIFORM1IPROC glUniform1i;
extern PFNGLUNIFORM1IVPROC glUniform1iv;
extern PFNGLUNIFORM2FPROC glUniform2f;
extern PFNGLUNIFORM2FVPROC glUniform2fv;
extern PFNGLUNIFORM2IPROC glUniform2i;
extern PFNGLUNIFORM2IVPROC glUniform2iv;
extern PFNGLUNIFORM3FPROC glUniform3f;
extern PFNGLUNIFORM3FVPROC glUniform3fv;
extern PFNGLUNIFORM3IPROC glUniform3i;
extern PFNGLUNIFORM3IVPROC glUniform3iv;
extern PFNGLUNIFORM4FPROC glUniform4f;
extern PFNGLUNIFORM4FVPROC glUniform4fv;
extern PFNGLUNIFORM4IPROC glUniform4i;
extern PFNGLUNIFORM4IVPROC glUniform4iv;
extern PFNGLUNIFORMMATRIX2FVPROC glUniformMatrix2fv;
extern PFNGLUNIFORMMATRIX3FVPROC glUniformMatrix3fv;
extern PFNGLUNIFORMMATRIX4FVPROC glUniformMatrix4fv;
extern PFNGLUSEPROGRAMPROC glUseProgram;
extern PFNGLVALIDATEPROGRAMPROC glValidateProgram;
extern PFNGLVERTEXATTRIB1DPROC glVertexAttrib1d;
extern PFNGLVERTEXATTRIB1DVPROC glVertexAttrib1dv;
extern PFNGLVERTEXATTRIB1FPROC glVertexAttrib1f;
extern PFNGLVERTEXATTRIB1FVPROC glVertexAttrib1fv;
extern PFNGLVERTEXATTRIB1SPROC glVertexAttrib1s;
extern PFNGLVERTEXATTRIB1SVPROC glVertexAttrib1sv;
extern PFNGLVERTEXATTRIB2DPROC glVertexAttrib2d;
extern PFNGLVERTEXATTRIB2DVPROC glVertexAttrib2dv;
extern PFNGLVERTEXATTRIB2FPROC glVertexAttrib2f;
extern PFNGLVERTEXATTRIB2FVPROC glVertexAttrib2fv;
extern PFNGLVERTEXATTRIB2SPROC glVertexAttrib2s;
extern PFNGLVERTEXATTRIB2SVPROC glVertexAttrib2sv;
extern PFNGLVERTEXATTRIB3DPROC glVertexAttrib3d;
extern PFNGLVERTEXATTRIB3DVPROC glVertexAttrib3dv;
extern PFNGLVERTEXATTRIB3FPROC glVertexAttrib3f;
extern PFNGLVERTEXATTRIB3FVPROC glVertexAttrib3fv;
extern PFNGLVERTEXATTRIB3SPROC glVertexAttrib3s;
extern PFNGLVERTEXATTRIB3SVPROC glVertexAttrib3sv;
extern PFNGLVERTEXATTRIB4NBVPROC glVertexAttrib4Nbv;
extern PFNGLVERTEXATTRIB4NIVPROC glVertexAttrib4Niv;
extern PFNGLVERTEXATTRIB4NSVPROC glVertexAttrib4Nsv;
extern PFNGLVERTEXATTRIB4NUBPROC glVertexAttrib4Nub;
extern PFNGLVERTEXATTRIB4NUBVPROC glVertexAttrib4Nubv;
extern PFNGLVERTEXATTRIB4NUIVPROC glVertexAttrib4Nuiv;
extern PFNGLVERTEXATTRIB4NUSVPROC glVertexAttrib4Nusv;
extern PFNGLVERTEXATTRIB4BVPROC glVertexAttrib4bv;
extern PFNGLVERTEXATTRIB4DPROC glVertexAttrib4d;
extern PFNGLVERTEXATTRIB4DVPROC glVertexAttrib4dv;
extern PFNGLVERTEXATTRIB4FPROC glVertexAttrib4f;
extern PFNGLVERTEXATTRIB4FVPROC glVertexAttrib4fv;
extern PFNGLVERTEXATTRIB4IVPROC glVertexAttrib4iv;
extern PFNGLVERTEXATTRIB4SPROC glVertexAttrib4s;
extern PFNGLVERTEXATTRIB4SVPROC glVertexAttrib4sv;
extern PFNGLVERTEXATTRIB4UBVPROC glVertexAttrib4ubv;
extern PFNGLVERTEXATTRIB4UIVPROC glVertexAttrib4uiv;
extern PFNGLVERTEXATTRIB4USVPROC glVertexAttrib4usv;
extern PFNGLVERTEXATTRIBPOINTERPROC glVertexAttribPointer;

// GL_VERSION_2_1

#ifndef GL_CURRENT_RASTER_SECONDARY_COLOR
    #define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#endif
#ifndef GL_PIXEL_PACK_BUFFER
    #define GL_PIXEL_PACK_BUFFER 0x88EB
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER
    #define GL_PIXEL_UNPACK_BUFFER 0x88EC
#endif
#ifndef GL_PIXEL_PACK_BUFFER_BINDING
    #define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_BINDING
    #define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#endif
#ifndef GL_FLOAT_MAT2x3
    #define GL_FLOAT_MAT2x3 0x8B65
#endif
#ifndef GL_FLOAT_MAT2x4
    #define GL_FLOAT_MAT2x4 0x8B66
#endif
#ifndef GL_FLOAT_MAT3x2
    #define GL_FLOAT_MAT3x2 0x8B67
#endif
#ifndef GL_FLOAT_MAT3x4
    #define GL_FLOAT_MAT3x4 0x8B68
#endif
#ifndef GL_FLOAT_MAT4x2
    #define GL_FLOAT_MAT4x2 0x8B69
#endif
#ifndef GL_FLOAT_MAT4x3
    #define GL_FLOAT_MAT4x3 0x8B6A
#endif
#ifndef GL_SRGB
    #define GL_SRGB 0x8C40
#endif
#ifndef GL_SRGB8
    #define GL_SRGB8 0x8C41
#endif
#ifndef GL_SRGB_ALPHA
    #define GL_SRGB_ALPHA 0x8C42
#endif
#ifndef GL_SRGB8_ALPHA8
    #define GL_SRGB8_ALPHA8 0x8C43
#endif
#ifndef GL_SLUMINANCE_ALPHA
    #define GL_SLUMINANCE_ALPHA 0x8C44
#endif
#ifndef GL_SLUMINANCE8_ALPHA8
    #define GL_SLUMINANCE8_ALPHA8 0x8C45
#endif
#ifndef GL_SLUMINANCE
    #define GL_SLUMINANCE 0x8C46
#endif
#ifndef GL_SLUMINANCE8
    #define GL_SLUMINANCE8 0x8C47
#endif
#ifndef GL_COMPRESSED_SRGB
    #define GL_COMPRESSED_SRGB 0x8C48
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA
    #define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#endif
#ifndef GL_COMPRESSED_SLUMINANCE
    #define GL_COMPRESSED_SLUMINANCE 0x8C4A
#endif
#ifndef GL_COMPRESSED_SLUMINANCE_ALPHA
    #define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B
#endif

typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X4FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X2FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X3FVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);

extern PFNGLUNIFORMMATRIX2X3FVPROC glUniformMatrix2x3fv;
extern PFNGLUNIFORMMATRIX2X4FVPROC glUniformMatrix2x4fv;
extern PFNGLUNIFORMMATRIX3X2FVPROC glUniformMatrix3x2fv;
extern PFNGLUNIFORMMATRIX3X4FVPROC glUniformMatrix3x4fv;
extern PFNGLUNIFORMMATRIX4X2FVPROC glUniformMatrix4x2fv;
extern PFNGLUNIFORMMATRIX4X3FVPROC glUniformMatrix4x3fv;

// GL_VERSION_3_0

#ifndef GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT
    #define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x0001
#endif
#ifndef GL_MAJOR_VERSION
    #define GL_MAJOR_VERSION 0x821B
#endif
#ifndef GL_MINOR_VERSION
    #define GL_MINOR_VERSION 0x821C
#endif
#ifndef GL_NUM_EXTENSIONS
    #define GL_NUM_EXTENSIONS 0x821D
#endif
#ifndef GL_CONTEXT_FLAGS
    #define GL_CONTEXT_FLAGS 0x821E
#endif
#ifndef GL_DEPTH_BUFFER
    #define GL_DEPTH_BUFFER 0x8223
#endif
#ifndef GL_STENCIL_BUFFER
    #define GL_STENCIL_BUFFER 0x8224
#endif
#ifndef GL_COMPRESSED_RED
    #define GL_COMPRESSED_RED 0x8225
#endif
#ifndef GL_COMPRESSED_RG
    #define GL_COMPRESSED_RG 0x8226
#endif
#ifndef GL_RGBA32F
    #define GL_RGBA32F 0x8814
#endif
#ifndef GL_RGB32F
    #define GL_RGB32F 0x8815
#endif
#ifndef GL_RGBA16F
    #define GL_RGBA16F 0x881A
#endif
#ifndef GL_RGB16F
    #define GL_RGB16F 0x881B
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_INTEGER
    #define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#endif
#ifndef GL_MAX_ARRAY_TEXTURE_LAYERS
    #define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#endif
#ifndef GL_MIN_PROGRAM_TEXEL_OFFSET
    #define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#endif
#ifndef GL_MAX_PROGRAM_TEXEL_OFFSET
    #define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#endif
#ifndef GL_CLAMP_VERTEX_COLOR
    #define GL_CLAMP_VERTEX_COLOR 0x891A
#endif
#ifndef GL_CLAMP_FRAGMENT_COLOR
    #define GL_CLAMP_FRAGMENT_COLOR 0x891B
#endif
#ifndef GL_CLAMP_READ_COLOR
    #define GL_CLAMP_READ_COLOR 0x891C
#endif
#ifndef GL_FIXED_ONLY
    #define GL_FIXED_ONLY 0x891D
#endif
#ifndef GL_TEXTURE_RED_TYPE
    #define GL_TEXTURE_RED_TYPE 0x8C10
#endif
#ifndef GL_TEXTURE_GREEN_TYPE
    #define GL_TEXTURE_GREEN_TYPE 0x8C11
#endif
#ifndef GL_TEXTURE_BLUE_TYPE
    #define GL_TEXTURE_BLUE_TYPE 0x8C12
#endif
#ifndef GL_TEXTURE_ALPHA_TYPE
    #define GL_TEXTURE_ALPHA_TYPE 0x8C13
#endif
#ifndef GL_TEXTURE_LUMINANCE_TYPE
    #define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#endif
#ifndef GL_TEXTURE_INTENSITY_TYPE
    #define GL_TEXTURE_INTENSITY_TYPE 0x8C15
#endif
#ifndef GL_TEXTURE_DEPTH_TYPE
    #define GL_TEXTURE_DEPTH_TYPE 0x8C16
#endif
#ifndef GL_UNSIGNED_NORMALIZED
    #define GL_UNSIGNED_NORMALIZED 0x8C17
#endif
#ifndef GL_TEXTURE_1D_ARRAY
    #define GL_TEXTURE_1D_ARRAY 0x8C18
#endif
#ifndef GL_PROXY_TEXTURE_1D_ARRAY
    #define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#endif
#ifndef GL_TEXTURE_2D_ARRAY
    #define GL_TEXTURE_2D_ARRAY 0x8C1A
#endif
#ifndef GL_PROXY_TEXTURE_2D_ARRAY
    #define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#endif
#ifndef GL_TEXTURE_BINDING_1D_ARRAY
    #define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#endif
#ifndef GL_TEXTURE_BINDING_2D_ARRAY
    #define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#endif
#ifndef GL_R11F_G11F_B10F
    #define GL_R11F_G11F_B10F 0x8C3A
#endif
#ifndef GL_UNSIGNED_INT_10F_11F_11F_REV
    #define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#endif
#ifndef GL_RGB9_E5
    #define GL_RGB9_E5 0x8C3D
#endif
#ifndef GL_UNSIGNED_INT_5_9_9_9_REV
    #define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#endif
#ifndef GL_TEXTURE_SHARED_SIZE
    #define GL_TEXTURE_SHARED_SIZE 0x8C3F
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH
    #define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_MODE
    #define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYINGS
    #define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_START
    #define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE
    #define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#endif
#ifndef GL_PRIMITIVES_GENERATED
    #define GL_PRIMITIVES_GENERATED 0x8C87
#endif
#ifndef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN
    #define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#endif
#ifndef GL_RASTERIZER_DISCARD
    #define GL_RASTERIZER_DISCARD 0x8C89
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS
    #define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#endif
#ifndef GL_INTERLEAVED_ATTRIBS
    #define GL_INTERLEAVED_ATTRIBS 0x8C8C
#endif
#ifndef GL_SEPARATE_ATTRIBS
    #define GL_SEPARATE_ATTRIBS 0x8C8D
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER
    #define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING
    #define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#endif
#ifndef GL_RGBA32UI
    #define GL_RGBA32UI 0x8D70
#endif
#ifndef GL_RGB32UI
    #define GL_RGB32UI 0x8D71
#endif
#ifndef GL_RGBA16UI
    #define GL_RGBA16UI 0x8D76
#endif
#ifndef GL_RGB16UI
    #define GL_RGB16UI 0x8D77
#endif
#ifndef GL_RGBA8UI
    #define GL_RGBA8UI 0x8D7C
#endif
#ifndef GL_RGB8UI
    #define GL_RGB8UI 0x8D7D
#endif
#ifndef GL_RGBA32I
    #define GL_RGBA32I 0x8D82
#endif
#ifndef GL_RGB32I
    #define GL_RGB32I 0x8D83
#endif
#ifndef GL_RGBA16I
    #define GL_RGBA16I 0x8D88
#endif
#ifndef GL_RGB16I
    #define GL_RGB16I 0x8D89
#endif
#ifndef GL_RGBA8I
    #define GL_RGBA8I 0x8D8E
#endif
#ifndef GL_RGB8I
    #define GL_RGB8I 0x8D8F
#endif
#ifndef GL_RED_INTEGER
    #define GL_RED_INTEGER 0x8D94
#endif
#ifndef GL_GREEN_INTEGER
    #define GL_GREEN_INTEGER 0x8D95
#endif
#ifndef GL_BLUE_INTEGER
    #define GL_BLUE_INTEGER 0x8D96
#endif
#ifndef GL_ALPHA_INTEGER
    #define GL_ALPHA_INTEGER 0x8D97
#endif
#ifndef GL_RGB_INTEGER
    #define GL_RGB_INTEGER 0x8D98
#endif
#ifndef GL_RGBA_INTEGER
    #define GL_RGBA_INTEGER 0x8D99
#endif
#ifndef GL_BGR_INTEGER
    #define GL_BGR_INTEGER 0x8D9A
#endif
#ifndef GL_BGRA_INTEGER
    #define GL_BGRA_INTEGER 0x8D9B
#endif
#ifndef GL_SAMPLER_1D_ARRAY
    #define GL_SAMPLER_1D_ARRAY 0x8DC0
#endif
#ifndef GL_SAMPLER_2D_ARRAY
    #define GL_SAMPLER_2D_ARRAY 0x8DC1
#endif
#ifndef GL_SAMPLER_1D_ARRAY_SHADOW
    #define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#endif
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW
    #define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#endif
#ifndef GL_SAMPLER_CUBE_SHADOW
    #define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#endif
#ifndef GL_UNSIGNED_INT_VEC2
    #define GL_UNSIGNED_INT_VEC2 0x8DC6
#endif
#ifndef GL_UNSIGNED_INT_VEC3
    #define GL_UNSIGNED_INT_VEC3 0x8DC7
#endif
#ifndef GL_UNSIGNED_INT_VEC4
    #define GL_UNSIGNED_INT_VEC4 0x8DC8
#endif
#ifndef GL_INT_SAMPLER_1D
    #define GL_INT_SAMPLER_1D 0x8DC9
#endif
#ifndef GL_INT_SAMPLER_2D
    #define GL_INT_SAMPLER_2D 0x8DCA
#endif
#ifndef GL_INT_SAMPLER_3D
    #define GL_INT_SAMPLER_3D 0x8DCB
#endif
#ifndef GL_INT_SAMPLER_CUBE
    #define GL_INT_SAMPLER_CUBE 0x8DCC
#endif
#ifndef GL_INT_SAMPLER_1D_ARRAY
    #define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#endif
#ifndef GL_INT_SAMPLER_2D_ARRAY
    #define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D
    #define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D
    #define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_3D
    #define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE
    #define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY
    #define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY
    #define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#endif
#ifndef GL_QUERY_WAIT
    #define GL_QUERY_WAIT 0x8E13
#endif
#ifndef GL_QUERY_NO_WAIT
    #define GL_QUERY_NO_WAIT 0x8E14
#endif
#ifndef GL_QUERY_BY_REGION_WAIT
    #define GL_QUERY_BY_REGION_WAIT 0x8E15
#endif
#ifndef GL_QUERY_BY_REGION_NO_WAIT
    #define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#endif

typedef void (APIENTRY * PFNGLBEGINCONDITIONALRENDERPROC)(GLuint, GLenum);
typedef void (APIENTRY * PFNGLBEGINTRANSFORMFEEDBACKPROC)(GLenum);
typedef void (APIENTRY * PFNGLBINDFRAGDATALOCATIONPROC)(GLuint, GLuint, const GLchar*);
typedef void (APIENTRY * PFNGLCLAMPCOLORPROC)(GLenum, GLenum);
typedef void (APIENTRY * PFNGLCLEARBUFFERFIPROC)(GLenum, GLint, GLfloat, GLint);
typedef void (APIENTRY * PFNGLCLEARBUFFERFVPROC)(GLenum, GLint, const GLfloat*);
typedef void (APIENTRY * PFNGLCLEARBUFFERIVPROC)(GLenum, GLint, const GLint*);
typedef void (APIENTRY * PFNGLCLEARBUFFERUIVPROC)(GLenum, GLint, const GLuint*);
typedef void (APIENTRY * PFNGLCOLORMASKIPROC)(GLuint, GLboolean, GLboolean, GLboolean, GLboolean);
typedef void (APIENTRY * PFNGLDISABLEIPROC)(GLenum, GLuint);
typedef void (APIENTRY * PFNGLENABLEIPROC)(GLenum, GLuint);
typedef void (APIENTRY * PFNGLENDCONDITIONALRENDERPROC)(void);
typedef void (APIENTRY * PFNGLENDTRANSFORMFEEDBACKPROC)(void);
typedef void (APIENTRY * PFNGLGETBOOLEANI_VPROC)(GLenum, GLuint, GLboolean*);
typedef GLint (APIENTRY * PFNGLGETFRAGDATALOCATIONPROC)(GLuint, const GLchar*);
typedef const GLubyte* (APIENTRY * PFNGLGETSTRINGIPROC)(GLenum, GLuint);
typedef void (APIENTRY * PFNGLGETTEXPARAMETERIIVPROC)(GLenum, GLenum, GLint*);
typedef void (APIENTRY * PFNGLGETTEXPARAMETERIUIVPROC)(GLenum, GLenum, GLuint*);
typedef void (APIENTRY * PFNGLGETTRANSFORMFEEDBACKVARYINGPROC)(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *);
typedef void (APIENTRY * PFNGLGETUNIFORMUIVPROC)(GLuint, GLint, GLuint*);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIIVPROC)(GLuint, GLenum, GLint*);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIUIVPROC)(GLuint, GLenum, GLuint*);
typedef GLboolean (APIENTRY * PFNGLISENABLEDIPROC)(GLenum, GLuint);
typedef void (APIENTRY * PFNGLTEXPARAMETERIIVPROC)(GLenum, GLenum, const GLint*);
typedef void (APIENTRY * PFNGLTEXPARAMETERIUIVPROC)(GLenum, GLenum, const GLuint*);
typedef void (APIENTRY * PFNGLTRANSFORMFEEDBACKVARYINGSPROC)(GLuint, GLsizei, const GLchar **, GLenum);
typedef void (APIENTRY * PFNGLUNIFORM1UIPROC)(GLint, GLuint);
typedef void (APIENTRY * PFNGLUNIFORM1UIVPROC)(GLint, GLsizei, const GLuint*);
typedef void (APIENTRY * PFNGLUNIFORM2UIPROC)(GLint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLUNIFORM2UIVPROC)(GLint, GLsizei, const GLuint*);
typedef void (APIENTRY * PFNGLUNIFORM3UIPROC)(GLint, GLuint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLUNIFORM3UIVPROC)(GLint, GLsizei, const GLuint*);
typedef void (APIENTRY * PFNGLUNIFORM4UIPROC)(GLint, GLuint, GLuint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLUNIFORM4UIVPROC)(GLint, GLsizei, const GLuint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1IPROC)(GLuint, GLint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1IVPROC)(GLuint, const GLint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1UIPROC)(GLuint, GLuint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1UIVPROC)(GLuint, const GLuint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2IPROC)(GLuint, GLint, GLint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2IVPROC)(GLuint, const GLint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2UIPROC)(GLuint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2UIVPROC)(GLuint, const GLuint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3IPROC)(GLuint, GLint, GLint, GLint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3IVPROC)(GLuint, const GLint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3UIPROC)(GLuint, GLuint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3UIVPROC)(GLuint, const GLuint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4BVPROC)(GLuint, const GLbyte*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4IPROC)(GLuint, GLint, GLint, GLint, GLint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4IVPROC)(GLuint, const GLint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4SVPROC)(GLuint, const GLshort*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UBVPROC)(GLuint, const GLubyte*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UIPROC)(GLuint, GLuint, GLuint, GLuint, GLuint);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UIVPROC)(GLuint, const GLuint*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4USVPROC)(GLuint, const GLushort*);
typedef void (APIENTRY * PFNGLVERTEXATTRIBIPOINTERPROC)(GLuint, GLint, GLenum, GLsizei, const GLvoid*);

extern PFNGLBEGINCONDITIONALRENDERPROC glBeginConditionalRender;
extern PFNGLBEGINTRANSFORMFEEDBACKPROC glBeginTransformFeedback;
extern PFNGLBINDFRAGDATALOCATIONPROC glBindFragDataLocation;
extern PFNGLCLAMPCOLORPROC glClampColor;
extern PFNGLCLEARBUFFERFIPROC glClearBufferfi;
extern PFNGLCLEARBUFFERFVPROC glClearBufferfv;
extern PFNGLCLEARBUFFERIVPROC glClearBufferiv;
extern PFNGLCLEARBUFFERUIVPROC glClearBufferuiv;
extern PFNGLCOLORMASKIPROC glColorMaski;
extern PFNGLDISABLEIPROC glDisablei;
extern PFNGLENABLEIPROC glEnablei;
extern PFNGLENDCONDITIONALRENDERPROC glEndConditionalRender;
extern PFNGLENDTRANSFORMFEEDBACKPROC glEndTransformFeedback;
extern PFNGLGETBOOLEANI_VPROC glGetBooleani_v;
extern PFNGLGETFRAGDATALOCATIONPROC glGetFragDataLocation;
extern PFNGLGETSTRINGIPROC glGetStringi;
extern PFNGLGETTEXPARAMETERIIVPROC glGetTexParameterIiv;
extern PFNGLGETTEXPARAMETERIUIVPROC glGetTexParameterIuiv;
extern PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glGetTransformFeedbackVarying;
extern PFNGLGETUNIFORMUIVPROC glGetUniformuiv;
extern PFNGLGETVERTEXATTRIBIIVPROC glGetVertexAttribIiv;
extern PFNGLGETVERTEXATTRIBIUIVPROC glGetVertexAttribIuiv;
extern PFNGLISENABLEDIPROC glIsEnabledi;
extern PFNGLTEXPARAMETERIIVPROC glTexParameterIiv;
extern PFNGLTEXPARAMETERIUIVPROC glTexParameterIuiv;
extern PFNGLTRANSFORMFEEDBACKVARYINGSPROC glTransformFeedbackVaryings;
extern PFNGLUNIFORM1UIPROC glUniform1ui;
extern PFNGLUNIFORM1UIVPROC glUniform1uiv;
extern PFNGLUNIFORM2UIPROC glUniform2ui;
extern PFNGLUNIFORM2UIVPROC glUniform2uiv;
extern PFNGLUNIFORM3UIPROC glUniform3ui;
extern PFNGLUNIFORM3UIVPROC glUniform3uiv;
extern PFNGLUNIFORM4UIPROC glUniform4ui;
extern PFNGLUNIFORM4UIVPROC glUniform4uiv;
extern PFNGLVERTEXATTRIBI1IPROC glVertexAttribI1i;
extern PFNGLVERTEXATTRIBI1IVPROC glVertexAttribI1iv;
extern PFNGLVERTEXATTRIBI1UIPROC glVertexAttribI1ui;
extern PFNGLVERTEXATTRIBI1UIVPROC glVertexAttribI1uiv;
extern PFNGLVERTEXATTRIBI2IPROC glVertexAttribI2i;
extern PFNGLVERTEXATTRIBI2IVPROC glVertexAttribI2iv;
extern PFNGLVERTEXATTRIBI2UIPROC glVertexAttribI2ui;
extern PFNGLVERTEXATTRIBI2UIVPROC glVertexAttribI2uiv;
extern PFNGLVERTEXATTRIBI3IPROC glVertexAttribI3i;
extern PFNGLVERTEXATTRIBI3IVPROC glVertexAttribI3iv;
extern PFNGLVERTEXATTRIBI3UIPROC glVertexAttribI3ui;
extern PFNGLVERTEXATTRIBI3UIVPROC glVertexAttribI3uiv;
extern PFNGLVERTEXATTRIBI4BVPROC glVertexAttribI4bv;
extern PFNGLVERTEXATTRIBI4IPROC glVertexAttribI4i;
extern PFNGLVERTEXATTRIBI4IVPROC glVertexAttribI4iv;
extern PFNGLVERTEXATTRIBI4SVPROC glVertexAttribI4sv;
extern PFNGLVERTEXATTRIBI4UBVPROC glVertexAttribI4ubv;
extern PFNGLVERTEXATTRIBI4UIPROC glVertexAttribI4ui;
extern PFNGLVERTEXATTRIBI4UIVPROC glVertexAttribI4uiv;
extern PFNGLVERTEXATTRIBI4USVPROC glVertexAttribI4usv;
extern PFNGLVERTEXATTRIBIPOINTERPROC glVertexAttribIPointer;

// GL_VERSION_3_1

#ifndef GL_TEXTURE_RECTANGLE
    #define GL_TEXTURE_RECTANGLE 0x84F5
#endif
#ifndef GL_TEXTURE_BINDING_RECTANGLE
    #define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#endif
#ifndef GL_PROXY_TEXTURE_RECTANGLE
    #define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#endif
#ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE
    #define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#endif
#ifndef GL_SAMPLER_2D_RECT
    #define GL_SAMPLER_2D_RECT 0x8B63
#endif
#ifndef GL_SAMPLER_2D_RECT_SHADOW
    #define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#endif
#ifndef GL_TEXTURE_BUFFER
    #define GL_TEXTURE_BUFFER 0x8C2A
#endif
#ifndef GL_MAX_TEXTURE_BUFFER_SIZE
    #define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#endif
#ifndef GL_TEXTURE_BINDING_BUFFER
    #define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#endif
#ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING
    #define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#endif
#ifndef GL_TEXTURE_BUFFER_FORMAT
    #define GL_TEXTURE_BUFFER_FORMAT 0x8C2E
#endif
#ifndef GL_SAMPLER_BUFFER
    #define GL_SAMPLER_BUFFER 0x8DC2
#endif
#ifndef GL_INT_SAMPLER_2D_RECT
    #define GL_INT_SAMPLER_2D_RECT 0x8DCD
#endif
#ifndef GL_INT_SAMPLER_BUFFER
    #define GL_INT_SAMPLER_BUFFER 0x8DD0
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_RECT
    #define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER
    #define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#endif
#ifndef GL_RED_SNORM
    #define GL_RED_SNORM 0x8F90
#endif
#ifndef GL_RG_SNORM
    #define GL_RG_SNORM 0x8F91
#endif
#ifndef GL_RGB_SNORM
    #define GL_RGB_SNORM 0x8F92
#endif
#ifndef GL_RGBA_SNORM
    #define GL_RGBA_SNORM 0x8F93
#endif
#ifndef GL_R8_SNORM
    #define GL_R8_SNORM 0x8F94
#endif
#ifndef GL_RG8_SNORM
    #define GL_RG8_SNORM 0x8F95
#endif
#ifndef GL_RGB8_SNORM
    #define GL_RGB8_SNORM 0x8F96
#endif
#ifndef GL_RGBA8_SNORM
    #define GL_RGBA8_SNORM 0x8F97
#endif
#ifndef GL_R16_SNORM
    #define GL_R16_SNORM 0x8F98
#endif
#ifndef GL_RG16_SNORM
    #define GL_RG16_SNORM 0x8F99
#endif
#ifndef GL_RGB16_SNORM
    #define GL_RGB16_SNORM 0x8F9A
#endif
#ifndef GL_RGBA16_SNORM
    #define GL_RGBA16_SNORM 0x8F9B
#endif
#ifndef GL_SIGNED_NORMALIZED
    #define GL_SIGNED_NORMALIZED 0x8F9C
#endif
#ifndef GL_PRIMITIVE_RESTART
    #define GL_PRIMITIVE_RESTART 0x8F9D
#endif
#ifndef GL_PRIMITIVE_RESTART_INDEX
    #define GL_PRIMITIVE_RESTART_INDEX 0x8F9E
#endif
#ifndef GL_BUFFER_ACCESS_FLAGS
    #define GL_BUFFER_ACCESS_FLAGS 0x911F
#endif
#ifndef GL_BUFFER_MAP_LENGTH
    #define GL_BUFFER_MAP_LENGTH 0x9120
#endif
#ifndef GL_BUFFER_MAP_OFFSET
    #define GL_BUFFER_MAP_OFFSET 0x9121
#endif

typedef void (APIENTRY * PFNGLDRAWARRAYSINSTANCEDPROC)(GLenum, GLint, GLsizei, GLsizei);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDPROC)(GLenum, GLsizei, GLenum, const GLvoid*, GLsizei);
typedef void (APIENTRY * PFNGLPRIMITIVERESTARTINDEXPROC)(GLuint);
typedef void (APIENTRY * PFNGLTEXBUFFERPROC)(GLenum, GLenum, GLuint);

extern PFNGLDRAWARRAYSINSTANCEDPROC glDrawArraysInstanced;
extern PFNGLDRAWELEMENTSINSTANCEDPROC glDrawElementsInstanced;
extern PFNGLPRIMITIVERESTARTINDEXPROC glPrimitiveRestartIndex;
extern PFNGLTEXBUFFERPROC glTexBuffer;

// GL_VERSION_3_2

#ifndef GL_LINES_ADJACENCY
    #define GL_LINES_ADJACENCY 0x000A
#endif
#ifndef GL_LINE_STRIP_ADJACENCY
    #define GL_LINE_STRIP_ADJACENCY 0x000B
#endif
#ifndef GL_TRIANGLES_ADJACENCY
    #define GL_TRIANGLES_ADJACENCY 0x000C
#endif
#ifndef GL_TRIANGLE_STRIP_ADJACENCY
    #define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#endif
#ifndef GL_PROGRAM_POINT_SIZE
    #define GL_PROGRAM_POINT_SIZE 0x8642
#endif
#ifndef GL_GEOMETRY_VERTICES_OUT
    #define GL_GEOMETRY_VERTICES_OUT 0x8916
#endif
#ifndef GL_GEOMETRY_INPUT_TYPE
    #define GL_GEOMETRY_INPUT_TYPE 0x8917
#endif
#ifndef GL_GEOMETRY_OUTPUT_TYPE
    #define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#endif
#ifndef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS
    #define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_LAYERED
    #define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS
    #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#endif
#ifndef GL_GEOMETRY_SHADER
    #define GL_GEOMETRY_SHADER 0x8DD9
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS
    #define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_VERTICES
    #define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#endif
#ifndef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS
    #define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#endif
#ifndef GL_MAX_VERTEX_OUTPUT_COMPONENTS
    #define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#endif
#ifndef GL_MAX_GEOMETRY_INPUT_COMPONENTS
    #define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_COMPONENTS
    #define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#endif
#ifndef GL_MAX_FRAGMENT_INPUT_COMPONENTS
    #define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#endif
#ifndef GL_CONTEXT_PROFILE_MASK
    #define GL_CONTEXT_PROFILE_MASK 0x9126
#endif

typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTUREPROC)(GLenum, GLenum, GLuint, GLint);
typedef void (APIENTRY * PFNGLGETBUFFERPARAMETERI64VPROC)(GLenum, GLenum, GLint64 *);
typedef void (APIENTRY * PFNGLGETINTEGER64I_VPROC)(GLenum, GLuint, GLint64 *);

extern PFNGLFRAMEBUFFERTEXTUREPROC glFramebufferTexture;
extern PFNGLGETBUFFERPARAMETERI64VPROC glGetBufferParameteri64v;
extern PFNGLGETINTEGER64I_VPROC glGetInteger64i_v;

// GL_VERSION_3_3

#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR
    #define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#endif
#ifndef GL_ANY_SAMPLES_PASSED
    #define GL_ANY_SAMPLES_PASSED 0x8C2F
#endif
#ifndef GL_TEXTURE_SWIZZLE_R
    #define GL_TEXTURE_SWIZZLE_R 0x8E42
#endif
#ifndef GL_TEXTURE_SWIZZLE_G
    #define GL_TEXTURE_SWIZZLE_G 0x8E43
#endif
#ifndef GL_TEXTURE_SWIZZLE_B
    #define GL_TEXTURE_SWIZZLE_B 0x8E44
#endif
#ifndef GL_TEXTURE_SWIZZLE_A
    #define GL_TEXTURE_SWIZZLE_A 0x8E45
#endif
#ifndef GL_TEXTURE_SWIZZLE_RGBA
    #define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#endif
#ifndef GL_RGB10_A2UI
    #define GL_RGB10_A2UI 0x906F
#endif

typedef void (APIENTRY * PFNGLVERTEXATTRIBDIVISORPROC)(GLuint index, GLuint divisor);

extern PFNGLVERTEXATTRIBDIVISORPROC glVertexAttribDivisor;

// GL_VERSION_4_0

#ifndef GL_GEOMETRY_SHADER_INVOCATIONS
    #define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#endif
#ifndef GL_SAMPLE_SHADING
    #define GL_SAMPLE_SHADING 0x8C36
#endif
#ifndef GL_MIN_SAMPLE_SHADING_VALUE
    #define GL_MIN_SAMPLE_SHADING_VALUE 0x8C37
#endif
#ifndef GL_MAX_GEOMETRY_SHADER_INVOCATIONS
    #define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#endif
#ifndef GL_MIN_FRAGMENT_INTERPOLATION_OFFSET
    #define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#endif
#ifndef GL_MAX_FRAGMENT_INTERPOLATION_OFFSET
    #define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#endif
#ifndef GL_FRAGMENT_INTERPOLATION_OFFSET_BITS
    #define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#endif
#ifndef GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET
    #define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET
    #define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS
    #define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS 0x8F9F
#endif
#ifndef GL_TEXTURE_CUBE_MAP_ARRAY
    #define GL_TEXTURE_CUBE_MAP_ARRAY 0x9009
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARRAY
    #define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARRAY
    #define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY 0x900B
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY
    #define GL_SAMPLER_CUBE_MAP_ARRAY 0x900C
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW
    #define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW 0x900D
#endif
#ifndef GL_INT_SAMPLER_CUBE_MAP_ARRAY
    #define GL_INT_SAMPLER_CUBE_MAP_ARRAY 0x900E
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY
    #define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F
#endif

typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY * PFNGLBLENDEQUATIONIPROC)(GLuint buf, GLenum mode);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEIPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (APIENTRY * PFNGLBLENDFUNCIPROC)(GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRY * PFNGLMINSAMPLESHADINGPROC)(GLclampf value);

extern PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
extern PFNGLBLENDEQUATIONIPROC glBlendEquationi;
extern PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
extern PFNGLBLENDFUNCIPROC glBlendFunci;
extern PFNGLMINSAMPLESHADINGPROC glMinSampleShading;

// GL_3DFX_multisample

#ifndef GL_MULTISAMPLE_3DFX
    #define GL_MULTISAMPLE_3DFX 0x86B2
#endif
#ifndef GL_SAMPLE_BUFFERS_3DFX
    #define GL_SAMPLE_BUFFERS_3DFX 0x86B3
#endif
#ifndef GL_SAMPLES_3DFX
    #define GL_SAMPLES_3DFX 0x86B4
#endif

// GL_3DFX_tbuffer


typedef void (APIENTRY * PFNGLTBUFFERMASK3DFXPROC)(GLuint mask);

extern PFNGLTBUFFERMASK3DFXPROC glTbufferMask3DFX;

// GL_3DFX_texture_compression_FXT1

#ifndef GL_COMPRESSED_RGB_FXT1_3DFX
    #define GL_COMPRESSED_RGB_FXT1_3DFX 0x86B0
#endif
#ifndef GL_COMPRESSED_RGBA_FXT1_3DFX
    #define GL_COMPRESSED_RGBA_FXT1_3DFX 0x86B1
#endif

// GL_AMD_debug_output

#ifndef GL_MAX_DEBUG_MESSAGE_LENGTH_AMD
    #define GL_MAX_DEBUG_MESSAGE_LENGTH_AMD 0x9143
#endif
#ifndef GL_MAX_DEBUG_LOGGED_MESSAGES_AMD
    #define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD 0x9144
#endif
#ifndef GL_DEBUG_LOGGED_MESSAGES_AMD
    #define GL_DEBUG_LOGGED_MESSAGES_AMD 0x9145
#endif
#ifndef GL_DEBUG_SEVERITY_HIGH_AMD
    #define GL_DEBUG_SEVERITY_HIGH_AMD 0x9146
#endif
#ifndef GL_DEBUG_SEVERITY_MEDIUM_AMD
    #define GL_DEBUG_SEVERITY_MEDIUM_AMD 0x9147
#endif
#ifndef GL_DEBUG_SEVERITY_LOW_AMD
    #define GL_DEBUG_SEVERITY_LOW_AMD 0x9148
#endif
#ifndef GL_DEBUG_CATEGORY_API_ERROR_AMD
    #define GL_DEBUG_CATEGORY_API_ERROR_AMD 0x9149
#endif
#ifndef GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD
    #define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD 0x914A
#endif
#ifndef GL_DEBUG_CATEGORY_DEPRECATION_AMD
    #define GL_DEBUG_CATEGORY_DEPRECATION_AMD 0x914B
#endif
#ifndef GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD
    #define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD 0x914C
#endif
#ifndef GL_DEBUG_CATEGORY_PERFORMANCE_AMD
    #define GL_DEBUG_CATEGORY_PERFORMANCE_AMD 0x914D
#endif
#ifndef GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD
    #define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD 0x914E
#endif
#ifndef GL_DEBUG_CATEGORY_APPLICATION_AMD
    #define GL_DEBUG_CATEGORY_APPLICATION_AMD 0x914F
#endif
#ifndef GL_DEBUG_CATEGORY_OTHER_AMD
    #define GL_DEBUG_CATEGORY_OTHER_AMD 0x9150
#endif

typedef void (APIENTRY *GLDEBUGPROCAMD)(GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);
typedef void (APIENTRY * PFNGLDEBUGMESSAGECALLBACKAMDPROC)(GLDEBUGPROCAMD callback, void* userParam);
typedef void (APIENTRY * PFNGLDEBUGMESSAGEENABLEAMDPROC)(GLenum category, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
typedef void (APIENTRY * PFNGLDEBUGMESSAGEINSERTAMDPROC)(GLenum category, GLenum severity, GLuint id, GLsizei length, const char* buf);
typedef GLuint (APIENTRY * PFNGLGETDEBUGMESSAGELOGAMDPROC)(GLuint count, GLsizei bufsize, GLenum* categories, GLuint* severities, GLuint* ids, GLsizei* lengths, char* message);

extern PFNGLDEBUGMESSAGECALLBACKAMDPROC glDebugMessageCallbackAMD;
extern PFNGLDEBUGMESSAGEENABLEAMDPROC glDebugMessageEnableAMD;
extern PFNGLDEBUGMESSAGEINSERTAMDPROC glDebugMessageInsertAMD;
extern PFNGLGETDEBUGMESSAGELOGAMDPROC glGetDebugMessageLogAMD;

// GL_AMD_depth_clamp_separate

#ifndef GL_DEPTH_CLAMP_NEAR_AMD
    #define GL_DEPTH_CLAMP_NEAR_AMD 0x901E
#endif
#ifndef GL_DEPTH_CLAMP_FAR_AMD
    #define GL_DEPTH_CLAMP_FAR_AMD 0x901F
#endif

// GL_AMD_draw_buffers_blend


typedef void (APIENTRY * PFNGLBLENDEQUATIONINDEXEDAMDPROC)(GLuint buf, GLenum mode);
typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY * PFNGLBLENDFUNCINDEXEDAMDPROC)(GLuint buf, GLenum src, GLenum dst);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

extern PFNGLBLENDEQUATIONINDEXEDAMDPROC glBlendEquationIndexedAMD;
extern PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC glBlendEquationSeparateIndexedAMD;
extern PFNGLBLENDFUNCINDEXEDAMDPROC glBlendFuncIndexedAMD;
extern PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glBlendFuncSeparateIndexedAMD;

// GL_AMD_name_gen_delete

#ifndef GL_DATA_BUFFER_AMD
    #define GL_DATA_BUFFER_AMD 0x9151
#endif
#ifndef GL_PERFORMANCE_MONITOR_AMD
    #define GL_PERFORMANCE_MONITOR_AMD 0x9152
#endif
#ifndef GL_QUERY_OBJECT_AMD
    #define GL_QUERY_OBJECT_AMD 0x9153
#endif
#ifndef GL_VERTEX_ARRAY_OBJECT_AMD
    #define GL_VERTEX_ARRAY_OBJECT_AMD 0x9154
#endif
#ifndef GL_SAMPLER_OBJECT_AMD
    #define GL_SAMPLER_OBJECT_AMD 0x9155
#endif

typedef void (APIENTRY * PFNGLDELETENAMESAMDPROC)(GLenum identifier, GLuint num, const GLuint* names);
typedef void (APIENTRY * PFNGLGENNAMESAMDPROC)(GLenum identifier, GLuint num, GLuint* names);
typedef GLboolean (APIENTRY * PFNGLISNAMEAMDPROC)(GLenum identifier, GLuint name);

extern PFNGLDELETENAMESAMDPROC glDeleteNamesAMD;
extern PFNGLGENNAMESAMDPROC glGenNamesAMD;
extern PFNGLISNAMEAMDPROC glIsNameAMD;

// GL_AMD_performance_monitor

#ifndef GL_UNSIGNED_INT
    #define GL_UNSIGNED_INT 0x1405
#endif
#ifndef GL_FLOAT
    #define GL_FLOAT 0x1406
#endif
#ifndef GL_COUNTER_TYPE_AMD
    #define GL_COUNTER_TYPE_AMD 0x8BC0
#endif
#ifndef GL_COUNTER_RANGE_AMD
    #define GL_COUNTER_RANGE_AMD 0x8BC1
#endif
#ifndef GL_UNSIGNED_INT64_AMD
    #define GL_UNSIGNED_INT64_AMD 0x8BC2
#endif
#ifndef GL_PERCENTAGE_AMD
    #define GL_PERCENTAGE_AMD 0x8BC3
#endif
#ifndef GL_PERFMON_RESULT_AVAILABLE_AMD
    #define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#endif
#ifndef GL_PERFMON_RESULT_SIZE_AMD
    #define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#endif
#ifndef GL_PERFMON_RESULT_AMD
    #define GL_PERFMON_RESULT_AMD 0x8BC6
#endif

typedef void (APIENTRY * PFNGLBEGINPERFMONITORAMDPROC)(GLuint monitor);
typedef void (APIENTRY * PFNGLDELETEPERFMONITORSAMDPROC)(GLsizei n, GLuint* monitors);
typedef void (APIENTRY * PFNGLENDPERFMONITORAMDPROC)(GLuint monitor);
typedef void (APIENTRY * PFNGLGENPERFMONITORSAMDPROC)(GLsizei n, GLuint* monitors);
typedef void (APIENTRY * PFNGLGETPERFMONITORCOUNTERDATAAMDPROC)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint *bytesWritten);
typedef void (APIENTRY * PFNGLGETPERFMONITORCOUNTERINFOAMDPROC)(GLuint group, GLuint counter, GLenum pname, void* data);
typedef void (APIENTRY * PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, char *counterString);
typedef void (APIENTRY * PFNGLGETPERFMONITORCOUNTERSAMDPROC)(GLuint group, GLint* numCounters, GLint *maxActiveCounters, GLsizei countersSize, GLuint *counters);
typedef void (APIENTRY * PFNGLGETPERFMONITORGROUPSTRINGAMDPROC)(GLuint group, GLsizei bufSize, GLsizei* length, char *groupString);
typedef void (APIENTRY * PFNGLGETPERFMONITORGROUPSAMDPROC)(GLint* numGroups, GLsizei groupsSize, GLuint *groups);
typedef void (APIENTRY * PFNGLSELECTPERFMONITORCOUNTERSAMDPROC)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList);

extern PFNGLBEGINPERFMONITORAMDPROC glBeginPerfMonitorAMD;
extern PFNGLDELETEPERFMONITORSAMDPROC glDeletePerfMonitorsAMD;
extern PFNGLENDPERFMONITORAMDPROC glEndPerfMonitorAMD;
extern PFNGLGENPERFMONITORSAMDPROC glGenPerfMonitorsAMD;
extern PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glGetPerfMonitorCounterDataAMD;
extern PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glGetPerfMonitorCounterInfoAMD;
extern PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glGetPerfMonitorCounterStringAMD;
extern PFNGLGETPERFMONITORCOUNTERSAMDPROC glGetPerfMonitorCountersAMD;
extern PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glGetPerfMonitorGroupStringAMD;
extern PFNGLGETPERFMONITORGROUPSAMDPROC glGetPerfMonitorGroupsAMD;
extern PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glSelectPerfMonitorCountersAMD;

// GL_AMD_seamless_cubemap_per_texture

#ifndef GL_TEXTURE_CUBE_MAP_SEAMLESS_ARB
    #define GL_TEXTURE_CUBE_MAP_SEAMLESS_ARB 0x884F
#endif

// GL_AMD_vertex_shader_tessellator

#ifndef GL_SAMPLER_BUFFER_AMD
    #define GL_SAMPLER_BUFFER_AMD 0x9001
#endif
#ifndef GL_INT_SAMPLER_BUFFER_AMD
    #define GL_INT_SAMPLER_BUFFER_AMD 0x9002
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD
    #define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#endif
#ifndef GL_TESSELLATION_MODE_AMD
    #define GL_TESSELLATION_MODE_AMD 0x9004
#endif
#ifndef GL_TESSELLATION_FACTOR_AMD
    #define GL_TESSELLATION_FACTOR_AMD 0x9005
#endif
#ifndef GL_DISCRETE_AMD
    #define GL_DISCRETE_AMD 0x9006
#endif
#ifndef GL_CONTINUOUS_AMD
    #define GL_CONTINUOUS_AMD 0x9007
#endif

typedef void (APIENTRY * PFNGLTESSELLATIONFACTORAMDPROC)(GLfloat factor);
typedef void (APIENTRY * PFNGLTESSELLATIONMODEAMDPROC)(GLenum mode);

extern PFNGLTESSELLATIONFACTORAMDPROC glTessellationFactorAMD;
extern PFNGLTESSELLATIONMODEAMDPROC glTessellationModeAMD;

// GL_APPLE_aux_depth_stencil

#ifndef GL_AUX_DEPTH_STENCIL_APPLE
    #define GL_AUX_DEPTH_STENCIL_APPLE 0x8A14
#endif

// GL_APPLE_client_storage

#ifndef GL_UNPACK_CLIENT_STORAGE_APPLE
    #define GL_UNPACK_CLIENT_STORAGE_APPLE 0x85B2
#endif

// GL_APPLE_element_array

#ifndef GL_ELEMENT_ARRAY_APPLE
    #define GL_ELEMENT_ARRAY_APPLE 0x8A0C
#endif
#ifndef GL_ELEMENT_ARRAY_TYPE_APPLE
    #define GL_ELEMENT_ARRAY_TYPE_APPLE 0x8A0D
#endif
#ifndef GL_ELEMENT_ARRAY_POINTER_APPLE
    #define GL_ELEMENT_ARRAY_POINTER_APPLE 0x8A0E
#endif

typedef void (APIENTRY * PFNGLDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
typedef void (APIENTRY * PFNGLELEMENTPOINTERAPPLEPROC)(GLenum type, const void* pointer);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC)(GLenum mode, const GLint* first, const GLsizei *count, GLsizei primcount);
typedef void (APIENTRY * PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC)(GLenum mode, GLuint start, GLuint end, const GLint* first, const GLsizei *count, GLsizei primcount);

extern PFNGLDRAWELEMENTARRAYAPPLEPROC glDrawElementArrayAPPLE;
extern PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glDrawRangeElementArrayAPPLE;
extern PFNGLELEMENTPOINTERAPPLEPROC glElementPointerAPPLE;
extern PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glMultiDrawElementArrayAPPLE;
extern PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glMultiDrawRangeElementArrayAPPLE;

// GL_APPLE_fence

#ifndef GL_DRAW_PIXELS_APPLE
    #define GL_DRAW_PIXELS_APPLE 0x8A0A
#endif
#ifndef GL_FENCE_APPLE
    #define GL_FENCE_APPLE 0x8A0B
#endif

typedef void (APIENTRY * PFNGLDELETEFENCESAPPLEPROC)(GLsizei n, const GLuint* fences);
typedef void (APIENTRY * PFNGLFINISHFENCEAPPLEPROC)(GLuint fence);
typedef void (APIENTRY * PFNGLFINISHOBJECTAPPLEPROC)(GLenum object, GLint name);
typedef void (APIENTRY * PFNGLGENFENCESAPPLEPROC)(GLsizei n, GLuint* fences);
typedef GLboolean (APIENTRY * PFNGLISFENCEAPPLEPROC)(GLuint fence);
typedef void (APIENTRY * PFNGLSETFENCEAPPLEPROC)(GLuint fence);
typedef GLboolean (APIENTRY * PFNGLTESTFENCEAPPLEPROC)(GLuint fence);
typedef GLboolean (APIENTRY * PFNGLTESTOBJECTAPPLEPROC)(GLenum object, GLuint name);

extern PFNGLDELETEFENCESAPPLEPROC glDeleteFencesAPPLE;
extern PFNGLFINISHFENCEAPPLEPROC glFinishFenceAPPLE;
extern PFNGLFINISHOBJECTAPPLEPROC glFinishObjectAPPLE;
extern PFNGLGENFENCESAPPLEPROC glGenFencesAPPLE;
extern PFNGLISFENCEAPPLEPROC glIsFenceAPPLE;
extern PFNGLSETFENCEAPPLEPROC glSetFenceAPPLE;
extern PFNGLTESTFENCEAPPLEPROC glTestFenceAPPLE;
extern PFNGLTESTOBJECTAPPLEPROC glTestObjectAPPLE;

// GL_APPLE_float_pixels

#ifndef GL_HALF_APPLE
    #define GL_HALF_APPLE 0x140B
#endif
#ifndef GL_RGBA_FLOAT32_APPLE
    #define GL_RGBA_FLOAT32_APPLE 0x8814
#endif
#ifndef GL_RGB_FLOAT32_APPLE
    #define GL_RGB_FLOAT32_APPLE 0x8815
#endif
#ifndef GL_ALPHA_FLOAT32_APPLE
    #define GL_ALPHA_FLOAT32_APPLE 0x8816
#endif
#ifndef GL_INTENSITY_FLOAT32_APPLE
    #define GL_INTENSITY_FLOAT32_APPLE 0x8817
#endif
#ifndef GL_LUMINANCE_FLOAT32_APPLE
    #define GL_LUMINANCE_FLOAT32_APPLE 0x8818
#endif
#ifndef GL_LUMINANCE_ALPHA_FLOAT32_APPLE
    #define GL_LUMINANCE_ALPHA_FLOAT32_APPLE 0x8819
#endif
#ifndef GL_RGBA_FLOAT16_APPLE
    #define GL_RGBA_FLOAT16_APPLE 0x881A
#endif
#ifndef GL_RGB_FLOAT16_APPLE
    #define GL_RGB_FLOAT16_APPLE 0x881B
#endif
#ifndef GL_ALPHA_FLOAT16_APPLE
    #define GL_ALPHA_FLOAT16_APPLE 0x881C
#endif
#ifndef GL_INTENSITY_FLOAT16_APPLE
    #define GL_INTENSITY_FLOAT16_APPLE 0x881D
#endif
#ifndef GL_LUMINANCE_FLOAT16_APPLE
    #define GL_LUMINANCE_FLOAT16_APPLE 0x881E
#endif
#ifndef GL_LUMINANCE_ALPHA_FLOAT16_APPLE
    #define GL_LUMINANCE_ALPHA_FLOAT16_APPLE 0x881F
#endif
#ifndef GL_COLOR_FLOAT_APPLE
    #define GL_COLOR_FLOAT_APPLE 0x8A0F
#endif

// GL_APPLE_flush_buffer_range

#ifndef GL_BUFFER_SERIALIZED_MODIFY_APPLE
    #define GL_BUFFER_SERIALIZED_MODIFY_APPLE 0x8A12
#endif
#ifndef GL_BUFFER_FLUSHING_UNMAP_APPLE
    #define GL_BUFFER_FLUSHING_UNMAP_APPLE 0x8A13
#endif

typedef void (APIENTRY * PFNGLBUFFERPARAMETERIAPPLEPROC)(GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC)(GLenum target, GLintptr offset, GLsizeiptr size);

extern PFNGLBUFFERPARAMETERIAPPLEPROC glBufferParameteriAPPLE;
extern PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glFlushMappedBufferRangeAPPLE;

// GL_APPLE_object_purgeable

#ifndef GL_BUFFER_OBJECT_APPLE
    #define GL_BUFFER_OBJECT_APPLE 0x85B3
#endif
#ifndef GL_RELEASED_APPLE
    #define GL_RELEASED_APPLE 0x8A19
#endif
#ifndef GL_VOLATILE_APPLE
    #define GL_VOLATILE_APPLE 0x8A1A
#endif
#ifndef GL_RETAINED_APPLE
    #define GL_RETAINED_APPLE 0x8A1B
#endif
#ifndef GL_UNDEFINED_APPLE
    #define GL_UNDEFINED_APPLE 0x8A1C
#endif
#ifndef GL_PURGEABLE_APPLE
    #define GL_PURGEABLE_APPLE 0x8A1D
#endif

typedef void (APIENTRY * PFNGLGETOBJECTPARAMETERIVAPPLEPROC)(GLenum objectType, GLuint name, GLenum pname, GLint* params);
typedef GLenum (APIENTRY * PFNGLOBJECTPURGEABLEAPPLEPROC)(GLenum objectType, GLuint name, GLenum option);
typedef GLenum (APIENTRY * PFNGLOBJECTUNPURGEABLEAPPLEPROC)(GLenum objectType, GLuint name, GLenum option);

extern PFNGLGETOBJECTPARAMETERIVAPPLEPROC glGetObjectParameterivAPPLE;
extern PFNGLOBJECTPURGEABLEAPPLEPROC glObjectPurgeableAPPLE;
extern PFNGLOBJECTUNPURGEABLEAPPLEPROC glObjectUnpurgeableAPPLE;

// GL_APPLE_pixel_buffer

#ifndef GL_MIN_PBUFFER_VIEWPORT_DIMS_APPLE
    #define GL_MIN_PBUFFER_VIEWPORT_DIMS_APPLE 0x8A10
#endif

// GL_APPLE_rgb_422

#ifndef GL_UNSIGNED_SHORT_8_8_APPLE
    #define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#endif
#ifndef GL_UNSIGNED_SHORT_8_8_REV_APPLE
    #define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB
#endif
#ifndef GL_RGB_422_APPLE
    #define GL_RGB_422_APPLE 0x8A1F
#endif

// GL_APPLE_row_bytes

#ifndef GL_PACK_ROW_BYTES_APPLE
    #define GL_PACK_ROW_BYTES_APPLE 0x8A15
#endif
#ifndef GL_UNPACK_ROW_BYTES_APPLE
    #define GL_UNPACK_ROW_BYTES_APPLE 0x8A16
#endif

// GL_APPLE_specular_vector

#ifndef GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE
    #define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE 0x85B0
#endif

// GL_APPLE_texture_range

#ifndef GL_TEXTURE_RANGE_LENGTH_APPLE
    #define GL_TEXTURE_RANGE_LENGTH_APPLE 0x85B7
#endif
#ifndef GL_TEXTURE_RANGE_POINTER_APPLE
    #define GL_TEXTURE_RANGE_POINTER_APPLE 0x85B8
#endif
#ifndef GL_TEXTURE_STORAGE_HINT_APPLE
    #define GL_TEXTURE_STORAGE_HINT_APPLE 0x85BC
#endif
#ifndef GL_STORAGE_PRIVATE_APPLE
    #define GL_STORAGE_PRIVATE_APPLE 0x85BD
#endif
#ifndef GL_STORAGE_CACHED_APPLE
    #define GL_STORAGE_CACHED_APPLE 0x85BE
#endif
#ifndef GL_STORAGE_SHARED_APPLE
    #define GL_STORAGE_SHARED_APPLE 0x85BF
#endif

typedef void (APIENTRY * PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC)(GLenum target, GLenum pname, GLvoid **params);
typedef void (APIENTRY * PFNGLTEXTURERANGEAPPLEPROC)(GLenum target, GLsizei length, GLvoid *pointer);

extern PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glGetTexParameterPointervAPPLE;
extern PFNGLTEXTURERANGEAPPLEPROC glTextureRangeAPPLE;

// GL_APPLE_transform_hint

#ifndef GL_TRANSFORM_HINT_APPLE
    #define GL_TRANSFORM_HINT_APPLE 0x85B1
#endif

// GL_APPLE_vertex_array_object

#ifndef GL_VERTEX_ARRAY_BINDING_APPLE
    #define GL_VERTEX_ARRAY_BINDING_APPLE 0x85B5
#endif

typedef void (APIENTRY * PFNGLBINDVERTEXARRAYAPPLEPROC)(GLuint array);
typedef void (APIENTRY * PFNGLDELETEVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint* arrays);
typedef void (APIENTRY * PFNGLGENVERTEXARRAYSAPPLEPROC)(GLsizei n, const GLuint* arrays);
typedef GLboolean (APIENTRY * PFNGLISVERTEXARRAYAPPLEPROC)(GLuint array);

extern PFNGLBINDVERTEXARRAYAPPLEPROC glBindVertexArrayAPPLE;
extern PFNGLDELETEVERTEXARRAYSAPPLEPROC glDeleteVertexArraysAPPLE;
extern PFNGLGENVERTEXARRAYSAPPLEPROC glGenVertexArraysAPPLE;
extern PFNGLISVERTEXARRAYAPPLEPROC glIsVertexArrayAPPLE;

// GL_APPLE_vertex_array_range

#ifndef GL_VERTEX_ARRAY_RANGE_APPLE
    #define GL_VERTEX_ARRAY_RANGE_APPLE 0x851D
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE
    #define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#endif
#ifndef GL_VERTEX_ARRAY_STORAGE_HINT_APPLE
    #define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#endif
#ifndef GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE
    #define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_APPLE 0x8520
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_POINTER_APPLE
    #define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#endif
#ifndef GL_STORAGE_CLIENT_APPLE
    #define GL_STORAGE_CLIENT_APPLE 0x85B4
#endif
#ifndef GL_STORAGE_CACHED_APPLE
    #define GL_STORAGE_CACHED_APPLE 0x85BE
#endif
#ifndef GL_STORAGE_SHARED_APPLE
    #define GL_STORAGE_SHARED_APPLE 0x85BF
#endif

typedef void (APIENTRY * PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC)(GLsizei length, void* pointer);
typedef void (APIENTRY * PFNGLVERTEXARRAYPARAMETERIAPPLEPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLVERTEXARRAYRANGEAPPLEPROC)(GLsizei length, void* pointer);

extern PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glFlushVertexArrayRangeAPPLE;
extern PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glVertexArrayParameteriAPPLE;
extern PFNGLVERTEXARRAYRANGEAPPLEPROC glVertexArrayRangeAPPLE;

// GL_APPLE_vertex_program_evaluators

#ifndef GL_VERTEX_ATTRIB_MAP1_APPLE
    #define GL_VERTEX_ATTRIB_MAP1_APPLE 0x8A00
#endif
#ifndef GL_VERTEX_ATTRIB_MAP2_APPLE
    #define GL_VERTEX_ATTRIB_MAP2_APPLE 0x8A01
#endif
#ifndef GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE
    #define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE 0x8A02
#endif
#ifndef GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE
    #define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE 0x8A03
#endif
#ifndef GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE
    #define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE 0x8A04
#endif
#ifndef GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE
    #define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE 0x8A05
#endif
#ifndef GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE
    #define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE 0x8A06
#endif
#ifndef GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE
    #define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE 0x8A07
#endif
#ifndef GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE
    #define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE 0x8A08
#endif
#ifndef GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE
    #define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE 0x8A09
#endif

typedef void (APIENTRY * PFNGLDISABLEVERTEXATTRIBAPPLEPROC)(GLuint index, GLenum pname);
typedef void (APIENTRY * PFNGLENABLEVERTEXATTRIBAPPLEPROC)(GLuint index, GLenum pname);
typedef GLboolean (APIENTRY * PFNGLISVERTEXATTRIBENABLEDAPPLEPROC)(GLuint index, GLenum pname);
typedef void (APIENTRY * PFNGLMAPVERTEXATTRIB1DAPPLEPROC)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
typedef void (APIENTRY * PFNGLMAPVERTEXATTRIB1FAPPLEPROC)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
typedef void (APIENTRY * PFNGLMAPVERTEXATTRIB2DAPPLEPROC)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
typedef void (APIENTRY * PFNGLMAPVERTEXATTRIB2FAPPLEPROC)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);

extern PFNGLDISABLEVERTEXATTRIBAPPLEPROC glDisableVertexAttribAPPLE;
extern PFNGLENABLEVERTEXATTRIBAPPLEPROC glEnableVertexAttribAPPLE;
extern PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glIsVertexAttribEnabledAPPLE;
extern PFNGLMAPVERTEXATTRIB1DAPPLEPROC glMapVertexAttrib1dAPPLE;
extern PFNGLMAPVERTEXATTRIB1FAPPLEPROC glMapVertexAttrib1fAPPLE;
extern PFNGLMAPVERTEXATTRIB2DAPPLEPROC glMapVertexAttrib2dAPPLE;
extern PFNGLMAPVERTEXATTRIB2FAPPLEPROC glMapVertexAttrib2fAPPLE;

// GL_APPLE_ycbcr_422

#ifndef GL_YCBCR_422_APPLE
    #define GL_YCBCR_422_APPLE 0x85B9
#endif
#ifndef GL_UNSIGNED_SHORT_8_8_APPLE
    #define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#endif
#ifndef GL_UNSIGNED_SHORT_8_8_REV_APPLE
    #define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB
#endif

// GL_ARB_ES2_compatibility

#ifndef GL_FIXED
    #define GL_FIXED 0x140C
#endif
#ifndef GL_IMPLEMENTATION_COLOR_READ_TYPE
    #define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#endif
#ifndef GL_IMPLEMENTATION_COLOR_READ_FORMAT
    #define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#endif
#ifndef GL_LOW_FLOAT
    #define GL_LOW_FLOAT 0x8DF0
#endif
#ifndef GL_MEDIUM_FLOAT
    #define GL_MEDIUM_FLOAT 0x8DF1
#endif
#ifndef GL_HIGH_FLOAT
    #define GL_HIGH_FLOAT 0x8DF2
#endif
#ifndef GL_LOW_INT
    #define GL_LOW_INT 0x8DF3
#endif
#ifndef GL_MEDIUM_INT
    #define GL_MEDIUM_INT 0x8DF4
#endif
#ifndef GL_HIGH_INT
    #define GL_HIGH_INT 0x8DF5
#endif
#ifndef GL_SHADER_BINARY_FORMATS
    #define GL_SHADER_BINARY_FORMATS 0x8DF8
#endif
#ifndef GL_NUM_SHADER_BINARY_FORMATS
    #define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#endif
#ifndef GL_SHADER_COMPILER
    #define GL_SHADER_COMPILER 0x8DFA
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_VECTORS
    #define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#endif
#ifndef GL_MAX_VARYING_VECTORS
    #define GL_MAX_VARYING_VECTORS 0x8DFC
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_VECTORS
    #define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#endif

typedef void (APIENTRY * PFNGLCLEARDEPTHFPROC)(GLclampf d);
typedef void (APIENTRY * PFNGLDEPTHRANGEFPROC)(GLclampf n, GLclampf f);
typedef void (APIENTRY * PFNGLGETSHADERPRECISIONFORMATPROC)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint *precision);
typedef void (APIENTRY * PFNGLRELEASESHADERCOMPILERPROC)(void);
typedef void (APIENTRY * PFNGLSHADERBINARYPROC)(GLsizei count, const GLuint* shaders, GLenum binaryformat, const GLvoid*binary, GLsizei length);

extern PFNGLCLEARDEPTHFPROC glClearDepthf;
extern PFNGLDEPTHRANGEFPROC glDepthRangef;
extern PFNGLGETSHADERPRECISIONFORMATPROC glGetShaderPrecisionFormat;
extern PFNGLRELEASESHADERCOMPILERPROC glReleaseShaderCompiler;
extern PFNGLSHADERBINARYPROC glShaderBinary;

// GL_ARB_blend_func_extended

#ifndef GL_SRC1_COLOR
    #define GL_SRC1_COLOR 0x88F9
#endif
#ifndef GL_ONE_MINUS_SRC1_COLOR
    #define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#endif
#ifndef GL_ONE_MINUS_SRC1_ALPHA
    #define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#endif
#ifndef GL_MAX_DUAL_SOURCE_DRAW_BUFFERS
    #define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC
#endif

typedef void (APIENTRY * PFNGLBINDFRAGDATALOCATIONINDEXEDPROC)(GLuint program, GLuint colorNumber, GLuint index, const char * name);
typedef GLint (APIENTRY * PFNGLGETFRAGDATAINDEXPROC)(GLuint program, const char * name);

extern PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glBindFragDataLocationIndexed;
extern PFNGLGETFRAGDATAINDEXPROC glGetFragDataIndex;

// GL_ARB_cl_event

#ifndef GL_SYNC_CL_EVENT_ARB
    #define GL_SYNC_CL_EVENT_ARB 0x8240
#endif
#ifndef GL_SYNC_CL_EVENT_COMPLETE_ARB
    #define GL_SYNC_CL_EVENT_COMPLETE_ARB 0x8241
#endif

typedef GLsync (APIENTRY * PFNGLCREATESYNCFROMCLEVENTARBPROC)(cl_context context, cl_event event, GLbitfield flags);

extern PFNGLCREATESYNCFROMCLEVENTARBPROC glCreateSyncFromCLeventARB;

// GL_ARB_color_buffer_float

#ifndef GL_RGBA_FLOAT_MODE_ARB
    #define GL_RGBA_FLOAT_MODE_ARB 0x8820
#endif
#ifndef GL_CLAMP_VERTEX_COLOR_ARB
    #define GL_CLAMP_VERTEX_COLOR_ARB 0x891A
#endif
#ifndef GL_CLAMP_FRAGMENT_COLOR_ARB
    #define GL_CLAMP_FRAGMENT_COLOR_ARB 0x891B
#endif
#ifndef GL_CLAMP_READ_COLOR_ARB
    #define GL_CLAMP_READ_COLOR_ARB 0x891C
#endif
#ifndef GL_FIXED_ONLY_ARB
    #define GL_FIXED_ONLY_ARB 0x891D
#endif

typedef void (APIENTRY * PFNGLCLAMPCOLORARBPROC)(GLenum target, GLenum clamp);

extern PFNGLCLAMPCOLORARBPROC glClampColorARB;

// GL_ARB_copy_buffer

#ifndef GL_COPY_READ_BUFFER
    #define GL_COPY_READ_BUFFER 0x8F36
#endif
#ifndef GL_COPY_WRITE_BUFFER
    #define GL_COPY_WRITE_BUFFER 0x8F37
#endif

typedef void (APIENTRY * PFNGLCOPYBUFFERSUBDATAPROC)(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size);

extern PFNGLCOPYBUFFERSUBDATAPROC glCopyBufferSubData;

// GL_ARB_debug_output

#ifndef GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB
    #define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB 0x8242
#endif
#ifndef GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB
    #define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#endif
#ifndef GL_DEBUG_CALLBACK_FUNCTION_ARB
    #define GL_DEBUG_CALLBACK_FUNCTION_ARB 0x8244
#endif
#ifndef GL_DEBUG_CALLBACK_USER_PARAM_ARB
    #define GL_DEBUG_CALLBACK_USER_PARAM_ARB 0x8245
#endif
#ifndef GL_DEBUG_SOURCE_API_ARB
    #define GL_DEBUG_SOURCE_API_ARB 0x8246
#endif
#ifndef GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB
    #define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#endif
#ifndef GL_DEBUG_SOURCE_SHADER_COMPILER_ARB
    #define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#endif
#ifndef GL_DEBUG_SOURCE_THIRD_PARTY_ARB
    #define GL_DEBUG_SOURCE_THIRD_PARTY_ARB 0x8249
#endif
#ifndef GL_DEBUG_SOURCE_APPLICATION_ARB
    #define GL_DEBUG_SOURCE_APPLICATION_ARB 0x824A
#endif
#ifndef GL_DEBUG_SOURCE_OTHER_ARB
    #define GL_DEBUG_SOURCE_OTHER_ARB 0x824B
#endif
#ifndef GL_DEBUG_TYPE_ERROR_ARB
    #define GL_DEBUG_TYPE_ERROR_ARB 0x824C
#endif
#ifndef GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB
    #define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#endif
#ifndef GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB
    #define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#endif
#ifndef GL_DEBUG_TYPE_PORTABILITY_ARB
    #define GL_DEBUG_TYPE_PORTABILITY_ARB 0x824F
#endif
#ifndef GL_DEBUG_TYPE_PERFORMANCE_ARB
    #define GL_DEBUG_TYPE_PERFORMANCE_ARB 0x8250
#endif
#ifndef GL_DEBUG_TYPE_OTHER_ARB
    #define GL_DEBUG_TYPE_OTHER_ARB 0x8251
#endif
#ifndef GL_MAX_DEBUG_MESSAGE_LENGTH_ARB
    #define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB 0x9143
#endif
#ifndef GL_MAX_DEBUG_LOGGED_MESSAGES_ARB
    #define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB 0x9144
#endif
#ifndef GL_DEBUG_LOGGED_MESSAGES_ARB
    #define GL_DEBUG_LOGGED_MESSAGES_ARB 0x9145
#endif
#ifndef GL_DEBUG_SEVERITY_HIGH_ARB
    #define GL_DEBUG_SEVERITY_HIGH_ARB 0x9146
#endif
#ifndef GL_DEBUG_SEVERITY_MEDIUM_ARB
    #define GL_DEBUG_SEVERITY_MEDIUM_ARB 0x9147
#endif
#ifndef GL_DEBUG_SEVERITY_LOW_ARB
    #define GL_DEBUG_SEVERITY_LOW_ARB 0x9148
#endif

typedef void (APIENTRY *GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);
typedef void (APIENTRY * PFNGLDEBUGMESSAGECALLBACKARBPROC)(GLDEBUGPROCARB callback, void* userParam);
typedef void (APIENTRY * PFNGLDEBUGMESSAGECONTROLARBPROC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
typedef void (APIENTRY * PFNGLDEBUGMESSAGEINSERTARBPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const char* buf);
typedef GLuint (APIENTRY * PFNGLGETDEBUGMESSAGELOGARBPROC)(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, char* messageLog);

extern PFNGLDEBUGMESSAGECALLBACKARBPROC glDebugMessageCallbackARB;
extern PFNGLDEBUGMESSAGECONTROLARBPROC glDebugMessageControlARB;
extern PFNGLDEBUGMESSAGEINSERTARBPROC glDebugMessageInsertARB;
extern PFNGLGETDEBUGMESSAGELOGARBPROC glGetDebugMessageLogARB;

// GL_ARB_depth_buffer_float

#ifndef GL_DEPTH_COMPONENT32F
    #define GL_DEPTH_COMPONENT32F 0x8CAC
#endif
#ifndef GL_DEPTH32F_STENCIL8
    #define GL_DEPTH32F_STENCIL8 0x8CAD
#endif
#ifndef GL_FLOAT_32_UNSIGNED_INT_24_8_REV
    #define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#endif

// GL_ARB_depth_clamp

#ifndef GL_DEPTH_CLAMP
    #define GL_DEPTH_CLAMP 0x864F
#endif

// GL_ARB_depth_texture

#ifndef GL_DEPTH_COMPONENT16_ARB
    #define GL_DEPTH_COMPONENT16_ARB 0x81A5
#endif
#ifndef GL_DEPTH_COMPONENT24_ARB
    #define GL_DEPTH_COMPONENT24_ARB 0x81A6
#endif
#ifndef GL_DEPTH_COMPONENT32_ARB
    #define GL_DEPTH_COMPONENT32_ARB 0x81A7
#endif
#ifndef GL_TEXTURE_DEPTH_SIZE_ARB
    #define GL_TEXTURE_DEPTH_SIZE_ARB 0x884A
#endif
#ifndef GL_DEPTH_TEXTURE_MODE_ARB
    #define GL_DEPTH_TEXTURE_MODE_ARB 0x884B
#endif

// GL_ARB_draw_buffers

#ifndef GL_MAX_DRAW_BUFFERS_ARB
    #define GL_MAX_DRAW_BUFFERS_ARB 0x8824
#endif
#ifndef GL_DRAW_BUFFER0_ARB
    #define GL_DRAW_BUFFER0_ARB 0x8825
#endif
#ifndef GL_DRAW_BUFFER1_ARB
    #define GL_DRAW_BUFFER1_ARB 0x8826
#endif
#ifndef GL_DRAW_BUFFER2_ARB
    #define GL_DRAW_BUFFER2_ARB 0x8827
#endif
#ifndef GL_DRAW_BUFFER3_ARB
    #define GL_DRAW_BUFFER3_ARB 0x8828
#endif
#ifndef GL_DRAW_BUFFER4_ARB
    #define GL_DRAW_BUFFER4_ARB 0x8829
#endif
#ifndef GL_DRAW_BUFFER5_ARB
    #define GL_DRAW_BUFFER5_ARB 0x882A
#endif
#ifndef GL_DRAW_BUFFER6_ARB
    #define GL_DRAW_BUFFER6_ARB 0x882B
#endif
#ifndef GL_DRAW_BUFFER7_ARB
    #define GL_DRAW_BUFFER7_ARB 0x882C
#endif
#ifndef GL_DRAW_BUFFER8_ARB
    #define GL_DRAW_BUFFER8_ARB 0x882D
#endif
#ifndef GL_DRAW_BUFFER9_ARB
    #define GL_DRAW_BUFFER9_ARB 0x882E
#endif
#ifndef GL_DRAW_BUFFER10_ARB
    #define GL_DRAW_BUFFER10_ARB 0x882F
#endif
#ifndef GL_DRAW_BUFFER11_ARB
    #define GL_DRAW_BUFFER11_ARB 0x8830
#endif
#ifndef GL_DRAW_BUFFER12_ARB
    #define GL_DRAW_BUFFER12_ARB 0x8831
#endif
#ifndef GL_DRAW_BUFFER13_ARB
    #define GL_DRAW_BUFFER13_ARB 0x8832
#endif
#ifndef GL_DRAW_BUFFER14_ARB
    #define GL_DRAW_BUFFER14_ARB 0x8833
#endif
#ifndef GL_DRAW_BUFFER15_ARB
    #define GL_DRAW_BUFFER15_ARB 0x8834
#endif

typedef void (APIENTRY * PFNGLDRAWBUFFERSARBPROC)(GLsizei n, const GLenum* bufs);

extern PFNGLDRAWBUFFERSARBPROC glDrawBuffersARB;

// GL_ARB_draw_buffers_blend


typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEIARBPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (APIENTRY * PFNGLBLENDEQUATIONIARBPROC)(GLuint buf, GLenum mode);
typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEIARBPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (APIENTRY * PFNGLBLENDFUNCIARBPROC)(GLuint buf, GLenum src, GLenum dst);

extern PFNGLBLENDEQUATIONSEPARATEIARBPROC glBlendEquationSeparateiARB;
extern PFNGLBLENDEQUATIONIARBPROC glBlendEquationiARB;
extern PFNGLBLENDFUNCSEPARATEIARBPROC glBlendFuncSeparateiARB;
extern PFNGLBLENDFUNCIARBPROC glBlendFunciARB;

// GL_ARB_draw_elements_base_vertex


typedef void (APIENTRY * PFNGLDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, void* indices, GLint basevertex);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC)(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount, GLint basevertex);
typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, void* indices, GLint basevertex);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC)(GLenum mode, GLsizei* count, GLenum type, GLvoid**indices, GLsizei primcount, GLint *basevertex);

extern PFNGLDRAWELEMENTSBASEVERTEXPROC glDrawElementsBaseVertex;
extern PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glDrawElementsInstancedBaseVertex;
extern PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glDrawRangeElementsBaseVertex;
extern PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glMultiDrawElementsBaseVertex;

// GL_ARB_draw_indirect

#ifndef GL_DRAW_INDIRECT_BUFFER
    #define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#endif
#ifndef GL_DRAW_INDIRECT_BUFFER_BINDING
    #define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43
#endif

typedef void (APIENTRY * PFNGLDRAWARRAYSINDIRECTPROC)(GLenum mode, const void* indirect);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void* indirect);

extern PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
extern PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;

// GL_ARB_draw_instanced


typedef void (APIENTRY * PFNGLDRAWARRAYSINSTANCEDARBPROC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDARBPROC)(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount);

extern PFNGLDRAWARRAYSINSTANCEDARBPROC glDrawArraysInstancedARB;
extern PFNGLDRAWELEMENTSINSTANCEDARBPROC glDrawElementsInstancedARB;

// GL_ARB_fragment_program

#ifndef GL_FRAGMENT_PROGRAM_ARB
    #define GL_FRAGMENT_PROGRAM_ARB 0x8804
#endif
#ifndef GL_PROGRAM_ALU_INSTRUCTIONS_ARB
    #define GL_PROGRAM_ALU_INSTRUCTIONS_ARB 0x8805
#endif
#ifndef GL_PROGRAM_TEX_INSTRUCTIONS_ARB
    #define GL_PROGRAM_TEX_INSTRUCTIONS_ARB 0x8806
#endif
#ifndef GL_PROGRAM_TEX_INDIRECTIONS_ARB
    #define GL_PROGRAM_TEX_INDIRECTIONS_ARB 0x8807
#endif
#ifndef GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
    #define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#endif
#ifndef GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
    #define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#endif
#ifndef GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
    #define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#endif
#ifndef GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#endif
#ifndef GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#endif
#ifndef GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB
    #define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB
    #define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#endif
#ifndef GL_MAX_TEXTURE_COORDS_ARB
    #define GL_MAX_TEXTURE_COORDS_ARB 0x8871
#endif
#ifndef GL_MAX_TEXTURE_IMAGE_UNITS_ARB
    #define GL_MAX_TEXTURE_IMAGE_UNITS_ARB 0x8872
#endif

// GL_ARB_fragment_shader

#ifndef GL_FRAGMENT_SHADER_ARB
    #define GL_FRAGMENT_SHADER_ARB 0x8B30
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB
    #define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB 0x8B49
#endif
#ifndef GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB
    #define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB 0x8B8B
#endif

// GL_ARB_framebuffer_object

#ifndef GL_INVALID_FRAMEBUFFER_OPERATION
    #define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING
    #define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE
    #define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE
    #define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#endif
#ifndef GL_FRAMEBUFFER_DEFAULT
    #define GL_FRAMEBUFFER_DEFAULT 0x8218
#endif
#ifndef GL_FRAMEBUFFER_UNDEFINED
    #define GL_FRAMEBUFFER_UNDEFINED 0x8219
#endif
#ifndef GL_DEPTH_STENCIL_ATTACHMENT
    #define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#endif
#ifndef GL_INDEX
    #define GL_INDEX 0x8222
#endif
#ifndef GL_MAX_RENDERBUFFER_SIZE
    #define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#endif
#ifndef GL_DEPTH_STENCIL
    #define GL_DEPTH_STENCIL 0x84F9
#endif
#ifndef GL_UNSIGNED_INT_24_8
    #define GL_UNSIGNED_INT_24_8 0x84FA
#endif
#ifndef GL_DEPTH24_STENCIL8
    #define GL_DEPTH24_STENCIL8 0x88F0
#endif
#ifndef GL_TEXTURE_STENCIL_SIZE
    #define GL_TEXTURE_STENCIL_SIZE 0x88F1
#endif
#ifndef GL_UNSIGNED_NORMALIZED
    #define GL_UNSIGNED_NORMALIZED 0x8C17
#endif
#ifndef GL_SRGB
    #define GL_SRGB 0x8C40
#endif
#ifndef GL_DRAW_FRAMEBUFFER_BINDING
    #define GL_DRAW_FRAMEBUFFER_BINDING 0x8CA6
#endif
#ifndef GL_FRAMEBUFFER_BINDING
    #define GL_FRAMEBUFFER_BINDING 0x8CA6
#endif
#ifndef GL_RENDERBUFFER_BINDING
    #define GL_RENDERBUFFER_BINDING 0x8CA7
#endif
#ifndef GL_READ_FRAMEBUFFER
    #define GL_READ_FRAMEBUFFER 0x8CA8
#endif
#ifndef GL_DRAW_FRAMEBUFFER
    #define GL_DRAW_FRAMEBUFFER 0x8CA9
#endif
#ifndef GL_READ_FRAMEBUFFER_BINDING
    #define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#endif
#ifndef GL_RENDERBUFFER_SAMPLES
    #define GL_RENDERBUFFER_SAMPLES 0x8CAB
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE
    #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME
    #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#endif
#ifndef GL_FRAMEBUFFER_COMPLETE
    #define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT
    #define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT
    #define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER
    #define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER
    #define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#endif
#ifndef GL_FRAMEBUFFER_UNSUPPORTED
    #define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#endif
#ifndef GL_MAX_COLOR_ATTACHMENTS
    #define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#endif
#ifndef GL_COLOR_ATTACHMENT0
    #define GL_COLOR_ATTACHMENT0 0x8CE0
#endif
#ifndef GL_COLOR_ATTACHMENT1
    #define GL_COLOR_ATTACHMENT1 0x8CE1
#endif
#ifndef GL_COLOR_ATTACHMENT2
    #define GL_COLOR_ATTACHMENT2 0x8CE2
#endif
#ifndef GL_COLOR_ATTACHMENT3
    #define GL_COLOR_ATTACHMENT3 0x8CE3
#endif
#ifndef GL_COLOR_ATTACHMENT4
    #define GL_COLOR_ATTACHMENT4 0x8CE4
#endif
#ifndef GL_COLOR_ATTACHMENT5
    #define GL_COLOR_ATTACHMENT5 0x8CE5
#endif
#ifndef GL_COLOR_ATTACHMENT6
    #define GL_COLOR_ATTACHMENT6 0x8CE6
#endif
#ifndef GL_COLOR_ATTACHMENT7
    #define GL_COLOR_ATTACHMENT7 0x8CE7
#endif
#ifndef GL_COLOR_ATTACHMENT8
    #define GL_COLOR_ATTACHMENT8 0x8CE8
#endif
#ifndef GL_COLOR_ATTACHMENT9
    #define GL_COLOR_ATTACHMENT9 0x8CE9
#endif
#ifndef GL_COLOR_ATTACHMENT10
    #define GL_COLOR_ATTACHMENT10 0x8CEA
#endif
#ifndef GL_COLOR_ATTACHMENT11
    #define GL_COLOR_ATTACHMENT11 0x8CEB
#endif
#ifndef GL_COLOR_ATTACHMENT12
    #define GL_COLOR_ATTACHMENT12 0x8CEC
#endif
#ifndef GL_COLOR_ATTACHMENT13
    #define GL_COLOR_ATTACHMENT13 0x8CED
#endif
#ifndef GL_COLOR_ATTACHMENT14
    #define GL_COLOR_ATTACHMENT14 0x8CEE
#endif
#ifndef GL_COLOR_ATTACHMENT15
    #define GL_COLOR_ATTACHMENT15 0x8CEF
#endif
#ifndef GL_DEPTH_ATTACHMENT
    #define GL_DEPTH_ATTACHMENT 0x8D00
#endif
#ifndef GL_STENCIL_ATTACHMENT
    #define GL_STENCIL_ATTACHMENT 0x8D20
#endif
#ifndef GL_FRAMEBUFFER
    #define GL_FRAMEBUFFER 0x8D40
#endif
#ifndef GL_RENDERBUFFER
    #define GL_RENDERBUFFER 0x8D41
#endif
#ifndef GL_RENDERBUFFER_WIDTH
    #define GL_RENDERBUFFER_WIDTH 0x8D42
#endif
#ifndef GL_RENDERBUFFER_HEIGHT
    #define GL_RENDERBUFFER_HEIGHT 0x8D43
#endif
#ifndef GL_RENDERBUFFER_INTERNAL_FORMAT
    #define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#endif
#ifndef GL_STENCIL_INDEX1
    #define GL_STENCIL_INDEX1 0x8D46
#endif
#ifndef GL_STENCIL_INDEX4
    #define GL_STENCIL_INDEX4 0x8D47
#endif
#ifndef GL_STENCIL_INDEX8
    #define GL_STENCIL_INDEX8 0x8D48
#endif
#ifndef GL_STENCIL_INDEX16
    #define GL_STENCIL_INDEX16 0x8D49
#endif
#ifndef GL_RENDERBUFFER_RED_SIZE
    #define GL_RENDERBUFFER_RED_SIZE 0x8D50
#endif
#ifndef GL_RENDERBUFFER_GREEN_SIZE
    #define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#endif
#ifndef GL_RENDERBUFFER_BLUE_SIZE
    #define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#endif
#ifndef GL_RENDERBUFFER_ALPHA_SIZE
    #define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#endif
#ifndef GL_RENDERBUFFER_DEPTH_SIZE
    #define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#endif
#ifndef GL_RENDERBUFFER_STENCIL_SIZE
    #define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE
    #define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#endif
#ifndef GL_MAX_SAMPLES
    #define GL_MAX_SAMPLES 0x8D57
#endif

typedef void (APIENTRY * PFNGLBINDFRAMEBUFFERPROC)(GLenum target, GLuint framebuffer);
typedef void (APIENTRY * PFNGLBINDRENDERBUFFERPROC)(GLenum target, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLBLITFRAMEBUFFERPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (APIENTRY * PFNGLCHECKFRAMEBUFFERSTATUSPROC)(GLenum target);
typedef void (APIENTRY * PFNGLDELETEFRAMEBUFFERSPROC)(GLsizei n, const GLuint* framebuffers);
typedef void (APIENTRY * PFNGLDELETERENDERBUFFERSPROC)(GLsizei n, const GLuint* renderbuffers);
typedef void (APIENTRY * PFNGLFRAMEBUFFERRENDERBUFFERPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE1DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE2DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE3DPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURELAYERPROC)(GLenum target,GLenum attachment, GLuint texture,GLint level,GLint layer);
typedef void (APIENTRY * PFNGLGENFRAMEBUFFERSPROC)(GLsizei n, GLuint* framebuffers);
typedef void (APIENTRY * PFNGLGENRENDERBUFFERSPROC)(GLsizei n, GLuint* renderbuffers);
typedef void (APIENTRY * PFNGLGENERATEMIPMAPPROC)(GLenum target);
typedef void (APIENTRY * PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETRENDERBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISFRAMEBUFFERPROC)(GLuint framebuffer);
typedef GLboolean (APIENTRY * PFNGLISRENDERBUFFERPROC)(GLuint renderbuffer);
typedef void (APIENTRY * PFNGLRENDERBUFFERSTORAGEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern PFNGLBINDFRAMEBUFFERPROC glBindFramebuffer;
extern PFNGLBINDRENDERBUFFERPROC glBindRenderbuffer;
extern PFNGLBLITFRAMEBUFFERPROC glBlitFramebuffer;
extern PFNGLCHECKFRAMEBUFFERSTATUSPROC glCheckFramebufferStatus;
extern PFNGLDELETEFRAMEBUFFERSPROC glDeleteFramebuffers;
extern PFNGLDELETERENDERBUFFERSPROC glDeleteRenderbuffers;
extern PFNGLFRAMEBUFFERRENDERBUFFERPROC glFramebufferRenderbuffer;
extern PFNGLFRAMEBUFFERTEXTURE1DPROC glFramebufferTexture1D;
extern PFNGLFRAMEBUFFERTEXTURE2DPROC glFramebufferTexture2D;
extern PFNGLFRAMEBUFFERTEXTURE3DPROC glFramebufferTexture3D;
extern PFNGLFRAMEBUFFERTEXTURELAYERPROC glFramebufferTextureLayer;
extern PFNGLGENFRAMEBUFFERSPROC glGenFramebuffers;
extern PFNGLGENRENDERBUFFERSPROC glGenRenderbuffers;
extern PFNGLGENERATEMIPMAPPROC glGenerateMipmap;
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glGetFramebufferAttachmentParameteriv;
extern PFNGLGETRENDERBUFFERPARAMETERIVPROC glGetRenderbufferParameteriv;
extern PFNGLISFRAMEBUFFERPROC glIsFramebuffer;
extern PFNGLISRENDERBUFFERPROC glIsRenderbuffer;
extern PFNGLRENDERBUFFERSTORAGEPROC glRenderbufferStorage;
extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glRenderbufferStorageMultisample;

// GL_ARB_framebuffer_sRGB

#ifndef GL_FRAMEBUFFER_SRGB
    #define GL_FRAMEBUFFER_SRGB 0x8DB9
#endif

// GL_ARB_geometry_shader4

#ifndef GL_PROGRAM_POINT_SIZE_ARB
    #define GL_PROGRAM_POINT_SIZE_ARB 0x8642
#endif
#ifndef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB
    #define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB
    #define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB
    #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB
    #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#endif
#ifndef GL_GEOMETRY_SHADER_ARB
    #define GL_GEOMETRY_SHADER_ARB 0x8DD9
#endif
#ifndef GL_GEOMETRY_VERTICES_OUT_ARB
    #define GL_GEOMETRY_VERTICES_OUT_ARB 0x8DDA
#endif
#ifndef GL_GEOMETRY_INPUT_TYPE_ARB
    #define GL_GEOMETRY_INPUT_TYPE_ARB 0x8DDB
#endif
#ifndef GL_GEOMETRY_OUTPUT_TYPE_ARB
    #define GL_GEOMETRY_OUTPUT_TYPE_ARB 0x8DDC
#endif
#ifndef GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB
    #define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#endif
#ifndef GL_MAX_VERTEX_VARYING_COMPONENTS_ARB
    #define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB
    #define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB
    #define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#endif
#ifndef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB
    #define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
#endif

typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTUREARBPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTUREFACEARBPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURELAYERARBPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETERIARBPROC)(GLuint program, GLenum pname, GLint value);

extern PFNGLFRAMEBUFFERTEXTUREARBPROC glFramebufferTextureARB;
extern PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glFramebufferTextureFaceARB;
extern PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glFramebufferTextureLayerARB;
extern PFNGLPROGRAMPARAMETERIARBPROC glProgramParameteriARB;

// GL_ARB_get_program_binary

#ifndef GL_PROGRAM_BINARY_RETRIEVABLE_HINT
    #define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#endif
#ifndef GL_PROGRAM_BINARY_LENGTH
    #define GL_PROGRAM_BINARY_LENGTH 0x8741
#endif
#ifndef GL_NUM_PROGRAM_BINARY_FORMATS
    #define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#endif
#ifndef GL_PROGRAM_BINARY_FORMATS
    #define GL_PROGRAM_BINARY_FORMATS 0x87FF
#endif

typedef void (APIENTRY * PFNGLGETPROGRAMBINARYPROC)(GLuint program, GLsizei bufSize, GLsizei* length, GLenum *binaryFormat, GLvoid*binary);
typedef void (APIENTRY * PFNGLPROGRAMBINARYPROC)(GLuint program, GLenum binaryFormat, const void* binary, GLsizei length);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETERIPROC)(GLuint program, GLenum pname, GLint value);

extern PFNGLGETPROGRAMBINARYPROC glGetProgramBinary;
extern PFNGLPROGRAMBINARYPROC glProgramBinary;
extern PFNGLPROGRAMPARAMETERIPROC glProgramParameteri;

// GL_ARB_gpu_shader5

#ifndef GL_GEOMETRY_SHADER_INVOCATIONS
    #define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#endif
#ifndef GL_MAX_GEOMETRY_SHADER_INVOCATIONS
    #define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#endif
#ifndef GL_MIN_FRAGMENT_INTERPOLATION_OFFSET
    #define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#endif
#ifndef GL_MAX_FRAGMENT_INTERPOLATION_OFFSET
    #define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#endif
#ifndef GL_FRAGMENT_INTERPOLATION_OFFSET_BITS
    #define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#endif
#ifndef GL_MAX_VERTEX_STREAMS
    #define GL_MAX_VERTEX_STREAMS 0x8E71
#endif

// GL_ARB_gpu_shader_fp64

#ifndef GL_DOUBLE_MAT2
    #define GL_DOUBLE_MAT2 0x8F46
#endif
#ifndef GL_DOUBLE_MAT3
    #define GL_DOUBLE_MAT3 0x8F47
#endif
#ifndef GL_DOUBLE_MAT4
    #define GL_DOUBLE_MAT4 0x8F48
#endif
#ifndef GL_DOUBLE_MAT2x3
    #define GL_DOUBLE_MAT2x3 0x8F49
#endif
#ifndef GL_DOUBLE_MAT2x4
    #define GL_DOUBLE_MAT2x4 0x8F4A
#endif
#ifndef GL_DOUBLE_MAT3x2
    #define GL_DOUBLE_MAT3x2 0x8F4B
#endif
#ifndef GL_DOUBLE_MAT3x4
    #define GL_DOUBLE_MAT3x4 0x8F4C
#endif
#ifndef GL_DOUBLE_MAT4x2
    #define GL_DOUBLE_MAT4x2 0x8F4D
#endif
#ifndef GL_DOUBLE_MAT4x3
    #define GL_DOUBLE_MAT4x3 0x8F4E
#endif
#ifndef GL_DOUBLE_VEC2
    #define GL_DOUBLE_VEC2 0x8FFC
#endif
#ifndef GL_DOUBLE_VEC3
    #define GL_DOUBLE_VEC3 0x8FFD
#endif
#ifndef GL_DOUBLE_VEC4
    #define GL_DOUBLE_VEC4 0x8FFE
#endif

typedef void (APIENTRY * PFNGLGETUNIFORMDVPROC)(GLuint program, GLint location, GLdouble* params);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1DEXTPROC)(GLuint program, GLint location, GLdouble x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1DVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2DEXTPROC)(GLuint program, GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2DVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3DEXTPROC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3DVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4DEXTPROC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4DVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORM1DPROC)(GLint location, GLdouble x);
typedef void (APIENTRY * PFNGLUNIFORM1DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORM2DPROC)(GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLUNIFORM2DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORM3DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLUNIFORM3DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORM4DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLUNIFORM4DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);

extern PFNGLGETUNIFORMDVPROC glGetUniformdv;
extern PFNGLPROGRAMUNIFORM1DEXTPROC glProgramUniform1dEXT;
extern PFNGLPROGRAMUNIFORM1DVEXTPROC glProgramUniform1dvEXT;
extern PFNGLPROGRAMUNIFORM2DEXTPROC glProgramUniform2dEXT;
extern PFNGLPROGRAMUNIFORM2DVEXTPROC glProgramUniform2dvEXT;
extern PFNGLPROGRAMUNIFORM3DEXTPROC glProgramUniform3dEXT;
extern PFNGLPROGRAMUNIFORM3DVEXTPROC glProgramUniform3dvEXT;
extern PFNGLPROGRAMUNIFORM4DEXTPROC glProgramUniform4dEXT;
extern PFNGLPROGRAMUNIFORM4DVEXTPROC glProgramUniform4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glProgramUniformMatrix2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glProgramUniformMatrix2x3dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glProgramUniformMatrix2x4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glProgramUniformMatrix3dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glProgramUniformMatrix3x2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glProgramUniformMatrix3x4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glProgramUniformMatrix4dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glProgramUniformMatrix4x2dvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glProgramUniformMatrix4x3dvEXT;
extern PFNGLUNIFORM1DPROC glUniform1d;
extern PFNGLUNIFORM1DVPROC glUniform1dv;
extern PFNGLUNIFORM2DPROC glUniform2d;
extern PFNGLUNIFORM2DVPROC glUniform2dv;
extern PFNGLUNIFORM3DPROC glUniform3d;
extern PFNGLUNIFORM3DVPROC glUniform3dv;
extern PFNGLUNIFORM4DPROC glUniform4d;
extern PFNGLUNIFORM4DVPROC glUniform4dv;
extern PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
extern PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
extern PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
extern PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
extern PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
extern PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
extern PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
extern PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
extern PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;

// GL_ARB_half_float_pixel

#ifndef GL_HALF_FLOAT_ARB
    #define GL_HALF_FLOAT_ARB 0x140B
#endif

// GL_ARB_half_float_vertex

#ifndef GL_HALF_FLOAT
    #define GL_HALF_FLOAT 0x140B
#endif

// GL_ARB_imaging

#ifndef GL_CONSTANT_COLOR
    #define GL_CONSTANT_COLOR 0x8001
#endif
#ifndef GL_ONE_MINUS_CONSTANT_COLOR
    #define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#endif
#ifndef GL_CONSTANT_ALPHA
    #define GL_CONSTANT_ALPHA 0x8003
#endif
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA
    #define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#endif
#ifndef GL_BLEND_COLOR
    #define GL_BLEND_COLOR 0x8005
#endif
#ifndef GL_FUNC_ADD
    #define GL_FUNC_ADD 0x8006
#endif
#ifndef GL_MIN
    #define GL_MIN 0x8007
#endif
#ifndef GL_MAX
    #define GL_MAX 0x8008
#endif
#ifndef GL_BLEND_EQUATION
    #define GL_BLEND_EQUATION 0x8009
#endif
#ifndef GL_FUNC_SUBTRACT
    #define GL_FUNC_SUBTRACT 0x800A
#endif
#ifndef GL_FUNC_REVERSE_SUBTRACT
    #define GL_FUNC_REVERSE_SUBTRACT 0x800B
#endif
#ifndef GL_CONVOLUTION_1D
    #define GL_CONVOLUTION_1D 0x8010
#endif
#ifndef GL_CONVOLUTION_2D
    #define GL_CONVOLUTION_2D 0x8011
#endif
#ifndef GL_SEPARABLE_2D
    #define GL_SEPARABLE_2D 0x8012
#endif
#ifndef GL_CONVOLUTION_BORDER_MODE
    #define GL_CONVOLUTION_BORDER_MODE 0x8013
#endif
#ifndef GL_CONVOLUTION_FILTER_SCALE
    #define GL_CONVOLUTION_FILTER_SCALE 0x8014
#endif
#ifndef GL_CONVOLUTION_FILTER_BIAS
    #define GL_CONVOLUTION_FILTER_BIAS 0x8015
#endif
#ifndef GL_REDUCE
    #define GL_REDUCE 0x8016
#endif
#ifndef GL_CONVOLUTION_FORMAT
    #define GL_CONVOLUTION_FORMAT 0x8017
#endif
#ifndef GL_CONVOLUTION_WIDTH
    #define GL_CONVOLUTION_WIDTH 0x8018
#endif
#ifndef GL_CONVOLUTION_HEIGHT
    #define GL_CONVOLUTION_HEIGHT 0x8019
#endif
#ifndef GL_MAX_CONVOLUTION_WIDTH
    #define GL_MAX_CONVOLUTION_WIDTH 0x801A
#endif
#ifndef GL_MAX_CONVOLUTION_HEIGHT
    #define GL_MAX_CONVOLUTION_HEIGHT 0x801B
#endif
#ifndef GL_POST_CONVOLUTION_RED_SCALE
    #define GL_POST_CONVOLUTION_RED_SCALE 0x801C
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_SCALE
    #define GL_POST_CONVOLUTION_GREEN_SCALE 0x801D
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_SCALE
    #define GL_POST_CONVOLUTION_BLUE_SCALE 0x801E
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_SCALE
    #define GL_POST_CONVOLUTION_ALPHA_SCALE 0x801F
#endif
#ifndef GL_POST_CONVOLUTION_RED_BIAS
    #define GL_POST_CONVOLUTION_RED_BIAS 0x8020
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_BIAS
    #define GL_POST_CONVOLUTION_GREEN_BIAS 0x8021
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_BIAS
    #define GL_POST_CONVOLUTION_BLUE_BIAS 0x8022
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_BIAS
    #define GL_POST_CONVOLUTION_ALPHA_BIAS 0x8023
#endif
#ifndef GL_HISTOGRAM
    #define GL_HISTOGRAM 0x8024
#endif
#ifndef GL_PROXY_HISTOGRAM
    #define GL_PROXY_HISTOGRAM 0x8025
#endif
#ifndef GL_HISTOGRAM_WIDTH
    #define GL_HISTOGRAM_WIDTH 0x8026
#endif
#ifndef GL_HISTOGRAM_FORMAT
    #define GL_HISTOGRAM_FORMAT 0x8027
#endif
#ifndef GL_HISTOGRAM_RED_SIZE
    #define GL_HISTOGRAM_RED_SIZE 0x8028
#endif
#ifndef GL_HISTOGRAM_GREEN_SIZE
    #define GL_HISTOGRAM_GREEN_SIZE 0x8029
#endif
#ifndef GL_HISTOGRAM_BLUE_SIZE
    #define GL_HISTOGRAM_BLUE_SIZE 0x802A
#endif
#ifndef GL_HISTOGRAM_ALPHA_SIZE
    #define GL_HISTOGRAM_ALPHA_SIZE 0x802B
#endif
#ifndef GL_HISTOGRAM_LUMINANCE_SIZE
    #define GL_HISTOGRAM_LUMINANCE_SIZE 0x802C
#endif
#ifndef GL_HISTOGRAM_SINK
    #define GL_HISTOGRAM_SINK 0x802D
#endif
#ifndef GL_MINMAX
    #define GL_MINMAX 0x802E
#endif
#ifndef GL_MINMAX_FORMAT
    #define GL_MINMAX_FORMAT 0x802F
#endif
#ifndef GL_MINMAX_SINK
    #define GL_MINMAX_SINK 0x8030
#endif
#ifndef GL_TABLE_TOO_LARGE
    #define GL_TABLE_TOO_LARGE 0x8031
#endif
#ifndef GL_COLOR_MATRIX
    #define GL_COLOR_MATRIX 0x80B1
#endif
#ifndef GL_COLOR_MATRIX_STACK_DEPTH
    #define GL_COLOR_MATRIX_STACK_DEPTH 0x80B2
#endif
#ifndef GL_MAX_COLOR_MATRIX_STACK_DEPTH
    #define GL_MAX_COLOR_MATRIX_STACK_DEPTH 0x80B3
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_SCALE
    #define GL_POST_COLOR_MATRIX_RED_SCALE 0x80B4
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_SCALE
    #define GL_POST_COLOR_MATRIX_GREEN_SCALE 0x80B5
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_SCALE
    #define GL_POST_COLOR_MATRIX_BLUE_SCALE 0x80B6
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_SCALE
    #define GL_POST_COLOR_MATRIX_ALPHA_SCALE 0x80B7
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_BIAS
    #define GL_POST_COLOR_MATRIX_RED_BIAS 0x80B8
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_BIAS
    #define GL_POST_COLOR_MATRIX_GREEN_BIAS 0x80B9
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_BIAS
    #define GL_POST_COLOR_MATRIX_BLUE_BIAS 0x80BA
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_BIAS
    #define GL_POST_COLOR_MATRIX_ALPHA_BIAS 0x80BB
#endif
#ifndef GL_COLOR_TABLE
    #define GL_COLOR_TABLE 0x80D0
#endif
#ifndef GL_POST_CONVOLUTION_COLOR_TABLE
    #define GL_POST_CONVOLUTION_COLOR_TABLE 0x80D1
#endif
#ifndef GL_POST_COLOR_MATRIX_COLOR_TABLE
    #define GL_POST_COLOR_MATRIX_COLOR_TABLE 0x80D2
#endif
#ifndef GL_PROXY_COLOR_TABLE
    #define GL_PROXY_COLOR_TABLE 0x80D3
#endif
#ifndef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE
    #define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#endif
#ifndef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE
    #define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#endif
#ifndef GL_COLOR_TABLE_SCALE
    #define GL_COLOR_TABLE_SCALE 0x80D6
#endif
#ifndef GL_COLOR_TABLE_BIAS
    #define GL_COLOR_TABLE_BIAS 0x80D7
#endif
#ifndef GL_COLOR_TABLE_FORMAT
    #define GL_COLOR_TABLE_FORMAT 0x80D8
#endif
#ifndef GL_COLOR_TABLE_WIDTH
    #define GL_COLOR_TABLE_WIDTH 0x80D9
#endif
#ifndef GL_COLOR_TABLE_RED_SIZE
    #define GL_COLOR_TABLE_RED_SIZE 0x80DA
#endif
#ifndef GL_COLOR_TABLE_GREEN_SIZE
    #define GL_COLOR_TABLE_GREEN_SIZE 0x80DB
#endif
#ifndef GL_COLOR_TABLE_BLUE_SIZE
    #define GL_COLOR_TABLE_BLUE_SIZE 0x80DC
#endif
#ifndef GL_COLOR_TABLE_ALPHA_SIZE
    #define GL_COLOR_TABLE_ALPHA_SIZE 0x80DD
#endif
#ifndef GL_COLOR_TABLE_LUMINANCE_SIZE
    #define GL_COLOR_TABLE_LUMINANCE_SIZE 0x80DE
#endif
#ifndef GL_COLOR_TABLE_INTENSITY_SIZE
    #define GL_COLOR_TABLE_INTENSITY_SIZE 0x80DF
#endif
#ifndef GL_IGNORE_BORDER
    #define GL_IGNORE_BORDER 0x8150
#endif
#ifndef GL_CONSTANT_BORDER
    #define GL_CONSTANT_BORDER 0x8151
#endif
#ifndef GL_WRAP_BORDER
    #define GL_WRAP_BORDER 0x8152
#endif
#ifndef GL_REPLICATE_BORDER
    #define GL_REPLICATE_BORDER 0x8153
#endif
#ifndef GL_CONVOLUTION_BORDER_COLOR
    #define GL_CONVOLUTION_BORDER_COLOR 0x8154
#endif

typedef void (APIENTRY * PFNGLCOLORSUBTABLEPROC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid *data);
typedef void (APIENTRY * PFNGLCOLORTABLEPROC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *table);
typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERFVPROC)(GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERIVPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER1DPROC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid *image);
typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER2DPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *image);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFPROC)(GLenum target, GLenum pname, GLfloat params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFVPROC)(GLenum target, GLenum pname, const GLfloat *params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIPROC)(GLenum target, GLenum pname, GLint params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIVPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLCOPYCOLORSUBTABLEPROC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCOLORTABLEPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER1DPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER2DPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPROC)(GLenum target, GLenum format, GLenum type, GLvoid *table);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONFILTERPROC)(GLenum target, GLenum format, GLenum type, GLvoid *image);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid *values);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETMINMAXPROC)(GLenum target, GLboolean reset, GLenum format, GLenum types, GLvoid *values);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERFVPROC)(GLenum target, GLenum pname, GLfloat *params);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERIVPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETSEPARABLEFILTERPROC)(GLenum target, GLenum format, GLenum type, GLvoid *row, GLvoid *column, GLvoid *span);
typedef void (APIENTRY * PFNGLHISTOGRAMPROC)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLMINMAXPROC)(GLenum target, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLRESETHISTOGRAMPROC)(GLenum target);
typedef void (APIENTRY * PFNGLRESETMINMAXPROC)(GLenum target);
typedef void (APIENTRY * PFNGLSEPARABLEFILTER2DPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *row, const GLvoid *column);

extern PFNGLCOLORSUBTABLEPROC glColorSubTable;
extern PFNGLCOLORTABLEPROC glColorTable;
extern PFNGLCOLORTABLEPARAMETERFVPROC glColorTableParameterfv;
extern PFNGLCOLORTABLEPARAMETERIVPROC glColorTableParameteriv;
extern PFNGLCONVOLUTIONFILTER1DPROC glConvolutionFilter1D;
extern PFNGLCONVOLUTIONFILTER2DPROC glConvolutionFilter2D;
extern PFNGLCONVOLUTIONPARAMETERFPROC glConvolutionParameterf;
extern PFNGLCONVOLUTIONPARAMETERFVPROC glConvolutionParameterfv;
extern PFNGLCONVOLUTIONPARAMETERIPROC glConvolutionParameteri;
extern PFNGLCONVOLUTIONPARAMETERIVPROC glConvolutionParameteriv;
extern PFNGLCOPYCOLORSUBTABLEPROC glCopyColorSubTable;
extern PFNGLCOPYCOLORTABLEPROC glCopyColorTable;
extern PFNGLCOPYCONVOLUTIONFILTER1DPROC glCopyConvolutionFilter1D;
extern PFNGLCOPYCONVOLUTIONFILTER2DPROC glCopyConvolutionFilter2D;
extern PFNGLGETCOLORTABLEPROC glGetColorTable;
extern PFNGLGETCOLORTABLEPARAMETERFVPROC glGetColorTableParameterfv;
extern PFNGLGETCOLORTABLEPARAMETERIVPROC glGetColorTableParameteriv;
extern PFNGLGETCONVOLUTIONFILTERPROC glGetConvolutionFilter;
extern PFNGLGETCONVOLUTIONPARAMETERFVPROC glGetConvolutionParameterfv;
extern PFNGLGETCONVOLUTIONPARAMETERIVPROC glGetConvolutionParameteriv;
extern PFNGLGETHISTOGRAMPROC glGetHistogram;
extern PFNGLGETHISTOGRAMPARAMETERFVPROC glGetHistogramParameterfv;
extern PFNGLGETHISTOGRAMPARAMETERIVPROC glGetHistogramParameteriv;
extern PFNGLGETMINMAXPROC glGetMinmax;
extern PFNGLGETMINMAXPARAMETERFVPROC glGetMinmaxParameterfv;
extern PFNGLGETMINMAXPARAMETERIVPROC glGetMinmaxParameteriv;
extern PFNGLGETSEPARABLEFILTERPROC glGetSeparableFilter;
extern PFNGLHISTOGRAMPROC glHistogram;
extern PFNGLMINMAXPROC glMinmax;
extern PFNGLRESETHISTOGRAMPROC glResetHistogram;
extern PFNGLRESETMINMAXPROC glResetMinmax;
extern PFNGLSEPARABLEFILTER2DPROC glSeparableFilter2D;

// GL_ARB_instanced_arrays

#ifndef GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE
#endif

typedef void (APIENTRY * PFNGLVERTEXATTRIBDIVISORARBPROC)(GLuint index, GLuint divisor);

extern PFNGLVERTEXATTRIBDIVISORARBPROC glVertexAttribDivisorARB;

// GL_ARB_map_buffer_range

#ifndef GL_MAP_READ_BIT
    #define GL_MAP_READ_BIT 0x0001
#endif
#ifndef GL_MAP_WRITE_BIT
    #define GL_MAP_WRITE_BIT 0x0002
#endif
#ifndef GL_MAP_INVALIDATE_RANGE_BIT
    #define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#endif
#ifndef GL_MAP_INVALIDATE_BUFFER_BIT
    #define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#endif
#ifndef GL_MAP_FLUSH_EXPLICIT_BIT
    #define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#endif
#ifndef GL_MAP_UNSYNCHRONIZED_BIT
    #define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#endif

typedef void (APIENTRY * PFNGLFLUSHMAPPEDBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef GLvoid (APIENTRY * PFNGLMAPBUFFERRANGEPROC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);

extern PFNGLFLUSHMAPPEDBUFFERRANGEPROC glFlushMappedBufferRange;
extern PFNGLMAPBUFFERRANGEPROC glMapBufferRange;

// GL_ARB_matrix_palette

#ifndef GL_MATRIX_PALETTE_ARB
    #define GL_MATRIX_PALETTE_ARB 0x8840
#endif
#ifndef GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB
    #define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB 0x8841
#endif
#ifndef GL_MAX_PALETTE_MATRICES_ARB
    #define GL_MAX_PALETTE_MATRICES_ARB 0x8842
#endif
#ifndef GL_CURRENT_PALETTE_MATRIX_ARB
    #define GL_CURRENT_PALETTE_MATRIX_ARB 0x8843
#endif
#ifndef GL_MATRIX_INDEX_ARRAY_ARB
    #define GL_MATRIX_INDEX_ARRAY_ARB 0x8844
#endif
#ifndef GL_CURRENT_MATRIX_INDEX_ARB
    #define GL_CURRENT_MATRIX_INDEX_ARB 0x8845
#endif
#ifndef GL_MATRIX_INDEX_ARRAY_SIZE_ARB
    #define GL_MATRIX_INDEX_ARRAY_SIZE_ARB 0x8846
#endif
#ifndef GL_MATRIX_INDEX_ARRAY_TYPE_ARB
    #define GL_MATRIX_INDEX_ARRAY_TYPE_ARB 0x8847
#endif
#ifndef GL_MATRIX_INDEX_ARRAY_STRIDE_ARB
    #define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB 0x8848
#endif
#ifndef GL_MATRIX_INDEX_ARRAY_POINTER_ARB
    #define GL_MATRIX_INDEX_ARRAY_POINTER_ARB 0x8849
#endif

typedef void (APIENTRY * PFNGLCURRENTPALETTEMATRIXARBPROC)(GLint index);
typedef void (APIENTRY * PFNGLMATRIXINDEXPOINTERARBPROC)(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);
typedef void (APIENTRY * PFNGLMATRIXINDEXUBVARBPROC)(GLint size, GLubyte *indices);
typedef void (APIENTRY * PFNGLMATRIXINDEXUIVARBPROC)(GLint size, GLuint *indices);
typedef void (APIENTRY * PFNGLMATRIXINDEXUSVARBPROC)(GLint size, GLushort *indices);

extern PFNGLCURRENTPALETTEMATRIXARBPROC glCurrentPaletteMatrixARB;
extern PFNGLMATRIXINDEXPOINTERARBPROC glMatrixIndexPointerARB;
extern PFNGLMATRIXINDEXUBVARBPROC glMatrixIndexubvARB;
extern PFNGLMATRIXINDEXUIVARBPROC glMatrixIndexuivARB;
extern PFNGLMATRIXINDEXUSVARBPROC glMatrixIndexusvARB;

// GL_ARB_multisample

#ifndef GL_MULTISAMPLE_ARB
    #define GL_MULTISAMPLE_ARB 0x809D
#endif
#ifndef GL_SAMPLE_ALPHA_TO_COVERAGE_ARB
    #define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB 0x809E
#endif
#ifndef GL_SAMPLE_ALPHA_TO_ONE_ARB
    #define GL_SAMPLE_ALPHA_TO_ONE_ARB 0x809F
#endif
#ifndef GL_SAMPLE_COVERAGE_ARB
    #define GL_SAMPLE_COVERAGE_ARB 0x80A0
#endif
#ifndef GL_SAMPLE_BUFFERS_ARB
    #define GL_SAMPLE_BUFFERS_ARB 0x80A8
#endif
#ifndef GL_SAMPLES_ARB
    #define GL_SAMPLES_ARB 0x80A9
#endif
#ifndef GL_SAMPLE_COVERAGE_VALUE_ARB
    #define GL_SAMPLE_COVERAGE_VALUE_ARB 0x80AA
#endif
#ifndef GL_SAMPLE_COVERAGE_INVERT_ARB
    #define GL_SAMPLE_COVERAGE_INVERT_ARB 0x80AB
#endif

typedef void (APIENTRY * PFNGLSAMPLECOVERAGEARBPROC)(GLclampf value, GLboolean invert);

extern PFNGLSAMPLECOVERAGEARBPROC glSampleCoverageARB;

// GL_ARB_multitexture

#ifndef GL_TEXTURE0_ARB
    #define GL_TEXTURE0_ARB 0x84C0
#endif
#ifndef GL_TEXTURE1_ARB
    #define GL_TEXTURE1_ARB 0x84C1
#endif
#ifndef GL_TEXTURE2_ARB
    #define GL_TEXTURE2_ARB 0x84C2
#endif
#ifndef GL_TEXTURE3_ARB
    #define GL_TEXTURE3_ARB 0x84C3
#endif
#ifndef GL_TEXTURE4_ARB
    #define GL_TEXTURE4_ARB 0x84C4
#endif
#ifndef GL_TEXTURE5_ARB
    #define GL_TEXTURE5_ARB 0x84C5
#endif
#ifndef GL_TEXTURE6_ARB
    #define GL_TEXTURE6_ARB 0x84C6
#endif
#ifndef GL_TEXTURE7_ARB
    #define GL_TEXTURE7_ARB 0x84C7
#endif
#ifndef GL_TEXTURE8_ARB
    #define GL_TEXTURE8_ARB 0x84C8
#endif
#ifndef GL_TEXTURE9_ARB
    #define GL_TEXTURE9_ARB 0x84C9
#endif
#ifndef GL_TEXTURE10_ARB
    #define GL_TEXTURE10_ARB 0x84CA
#endif
#ifndef GL_TEXTURE11_ARB
    #define GL_TEXTURE11_ARB 0x84CB
#endif
#ifndef GL_TEXTURE12_ARB
    #define GL_TEXTURE12_ARB 0x84CC
#endif
#ifndef GL_TEXTURE13_ARB
    #define GL_TEXTURE13_ARB 0x84CD
#endif
#ifndef GL_TEXTURE14_ARB
    #define GL_TEXTURE14_ARB 0x84CE
#endif
#ifndef GL_TEXTURE15_ARB
    #define GL_TEXTURE15_ARB 0x84CF
#endif
#ifndef GL_TEXTURE16_ARB
    #define GL_TEXTURE16_ARB 0x84D0
#endif
#ifndef GL_TEXTURE17_ARB
    #define GL_TEXTURE17_ARB 0x84D1
#endif
#ifndef GL_TEXTURE18_ARB
    #define GL_TEXTURE18_ARB 0x84D2
#endif
#ifndef GL_TEXTURE19_ARB
    #define GL_TEXTURE19_ARB 0x84D3
#endif
#ifndef GL_TEXTURE20_ARB
    #define GL_TEXTURE20_ARB 0x84D4
#endif
#ifndef GL_TEXTURE21_ARB
    #define GL_TEXTURE21_ARB 0x84D5
#endif
#ifndef GL_TEXTURE22_ARB
    #define GL_TEXTURE22_ARB 0x84D6
#endif
#ifndef GL_TEXTURE23_ARB
    #define GL_TEXTURE23_ARB 0x84D7
#endif
#ifndef GL_TEXTURE24_ARB
    #define GL_TEXTURE24_ARB 0x84D8
#endif
#ifndef GL_TEXTURE25_ARB
    #define GL_TEXTURE25_ARB 0x84D9
#endif
#ifndef GL_TEXTURE26_ARB
    #define GL_TEXTURE26_ARB 0x84DA
#endif
#ifndef GL_TEXTURE27_ARB
    #define GL_TEXTURE27_ARB 0x84DB
#endif
#ifndef GL_TEXTURE28_ARB
    #define GL_TEXTURE28_ARB 0x84DC
#endif
#ifndef GL_TEXTURE29_ARB
    #define GL_TEXTURE29_ARB 0x84DD
#endif
#ifndef GL_TEXTURE30_ARB
    #define GL_TEXTURE30_ARB 0x84DE
#endif
#ifndef GL_TEXTURE31_ARB
    #define GL_TEXTURE31_ARB 0x84DF
#endif
#ifndef GL_ACTIVE_TEXTURE_ARB
    #define GL_ACTIVE_TEXTURE_ARB 0x84E0
#endif
#ifndef GL_CLIENT_ACTIVE_TEXTURE_ARB
    #define GL_CLIENT_ACTIVE_TEXTURE_ARB 0x84E1
#endif
#ifndef GL_MAX_TEXTURE_UNITS_ARB
    #define GL_MAX_TEXTURE_UNITS_ARB 0x84E2
#endif

typedef void (APIENTRY * PFNGLACTIVETEXTUREARBPROC)(GLenum texture);
typedef void (APIENTRY * PFNGLCLIENTACTIVETEXTUREARBPROC)(GLenum texture);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DARBPROC)(GLenum target, GLdouble s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1DVARBPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FARBPROC)(GLenum target, GLfloat s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1FVARBPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IARBPROC)(GLenum target, GLint s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1IVARBPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SARBPROC)(GLenum target, GLshort s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1SVARBPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DARBPROC)(GLenum target, GLdouble s, GLdouble t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2DVARBPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FARBPROC)(GLenum target, GLfloat s, GLfloat t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2FVARBPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IARBPROC)(GLenum target, GLint s, GLint t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2IVARBPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SARBPROC)(GLenum target, GLshort s, GLshort t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2SVARBPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DARBPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3DVARBPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FARBPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3FVARBPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IARBPROC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3IVARBPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SARBPROC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3SVARBPROC)(GLenum target, const GLshort *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DARBPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4DVARBPROC)(GLenum target, const GLdouble *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FARBPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4FVARBPROC)(GLenum target, const GLfloat *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IARBPROC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4IVARBPROC)(GLenum target, const GLint *v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SARBPROC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4SVARBPROC)(GLenum target, const GLshort *v);

extern PFNGLACTIVETEXTUREARBPROC glActiveTextureARB;
extern PFNGLCLIENTACTIVETEXTUREARBPROC glClientActiveTextureARB;
extern PFNGLMULTITEXCOORD1DARBPROC glMultiTexCoord1dARB;
extern PFNGLMULTITEXCOORD1DVARBPROC glMultiTexCoord1dvARB;
extern PFNGLMULTITEXCOORD1FARBPROC glMultiTexCoord1fARB;
extern PFNGLMULTITEXCOORD1FVARBPROC glMultiTexCoord1fvARB;
extern PFNGLMULTITEXCOORD1IARBPROC glMultiTexCoord1iARB;
extern PFNGLMULTITEXCOORD1IVARBPROC glMultiTexCoord1ivARB;
extern PFNGLMULTITEXCOORD1SARBPROC glMultiTexCoord1sARB;
extern PFNGLMULTITEXCOORD1SVARBPROC glMultiTexCoord1svARB;
extern PFNGLMULTITEXCOORD2DARBPROC glMultiTexCoord2dARB;
extern PFNGLMULTITEXCOORD2DVARBPROC glMultiTexCoord2dvARB;
extern PFNGLMULTITEXCOORD2FARBPROC glMultiTexCoord2fARB;
extern PFNGLMULTITEXCOORD2FVARBPROC glMultiTexCoord2fvARB;
extern PFNGLMULTITEXCOORD2IARBPROC glMultiTexCoord2iARB;
extern PFNGLMULTITEXCOORD2IVARBPROC glMultiTexCoord2ivARB;
extern PFNGLMULTITEXCOORD2SARBPROC glMultiTexCoord2sARB;
extern PFNGLMULTITEXCOORD2SVARBPROC glMultiTexCoord2svARB;
extern PFNGLMULTITEXCOORD3DARBPROC glMultiTexCoord3dARB;
extern PFNGLMULTITEXCOORD3DVARBPROC glMultiTexCoord3dvARB;
extern PFNGLMULTITEXCOORD3FARBPROC glMultiTexCoord3fARB;
extern PFNGLMULTITEXCOORD3FVARBPROC glMultiTexCoord3fvARB;
extern PFNGLMULTITEXCOORD3IARBPROC glMultiTexCoord3iARB;
extern PFNGLMULTITEXCOORD3IVARBPROC glMultiTexCoord3ivARB;
extern PFNGLMULTITEXCOORD3SARBPROC glMultiTexCoord3sARB;
extern PFNGLMULTITEXCOORD3SVARBPROC glMultiTexCoord3svARB;
extern PFNGLMULTITEXCOORD4DARBPROC glMultiTexCoord4dARB;
extern PFNGLMULTITEXCOORD4DVARBPROC glMultiTexCoord4dvARB;
extern PFNGLMULTITEXCOORD4FARBPROC glMultiTexCoord4fARB;
extern PFNGLMULTITEXCOORD4FVARBPROC glMultiTexCoord4fvARB;
extern PFNGLMULTITEXCOORD4IARBPROC glMultiTexCoord4iARB;
extern PFNGLMULTITEXCOORD4IVARBPROC glMultiTexCoord4ivARB;
extern PFNGLMULTITEXCOORD4SARBPROC glMultiTexCoord4sARB;
extern PFNGLMULTITEXCOORD4SVARBPROC glMultiTexCoord4svARB;

// GL_ARB_occlusion_query

#ifndef GL_QUERY_COUNTER_BITS_ARB
    #define GL_QUERY_COUNTER_BITS_ARB 0x8864
#endif
#ifndef GL_CURRENT_QUERY_ARB
    #define GL_CURRENT_QUERY_ARB 0x8865
#endif
#ifndef GL_QUERY_RESULT_ARB
    #define GL_QUERY_RESULT_ARB 0x8866
#endif
#ifndef GL_QUERY_RESULT_AVAILABLE_ARB
    #define GL_QUERY_RESULT_AVAILABLE_ARB 0x8867
#endif
#ifndef GL_SAMPLES_PASSED_ARB
    #define GL_SAMPLES_PASSED_ARB 0x8914
#endif

typedef void (APIENTRY * PFNGLBEGINQUERYARBPROC)(GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLDELETEQUERIESARBPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLENDQUERYARBPROC)(GLenum target);
typedef void (APIENTRY * PFNGLGENQUERIESARBPROC)(GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTIVARBPROC)(GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTUIVARBPROC)(GLuint id, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETQUERYIVARBPROC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISQUERYARBPROC)(GLuint id);

extern PFNGLBEGINQUERYARBPROC glBeginQueryARB;
extern PFNGLDELETEQUERIESARBPROC glDeleteQueriesARB;
extern PFNGLENDQUERYARBPROC glEndQueryARB;
extern PFNGLGENQUERIESARBPROC glGenQueriesARB;
extern PFNGLGETQUERYOBJECTIVARBPROC glGetQueryObjectivARB;
extern PFNGLGETQUERYOBJECTUIVARBPROC glGetQueryObjectuivARB;
extern PFNGLGETQUERYIVARBPROC glGetQueryivARB;
extern PFNGLISQUERYARBPROC glIsQueryARB;

// GL_ARB_occlusion_query2

#ifndef GL_ANY_SAMPLES_PASSED
    #define GL_ANY_SAMPLES_PASSED 0x8C2F
#endif

// GL_ARB_pixel_buffer_object

#ifndef GL_PIXEL_PACK_BUFFER_ARB
    #define GL_PIXEL_PACK_BUFFER_ARB 0x88EB
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_ARB
    #define GL_PIXEL_UNPACK_BUFFER_ARB 0x88EC
#endif
#ifndef GL_PIXEL_PACK_BUFFER_BINDING_ARB
    #define GL_PIXEL_PACK_BUFFER_BINDING_ARB 0x88ED
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_BINDING_ARB
    #define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF
#endif

// GL_ARB_point_parameters

#ifndef GL_POINT_SIZE_MIN_ARB
    #define GL_POINT_SIZE_MIN_ARB 0x8126
#endif
#ifndef GL_POINT_SIZE_MAX_ARB
    #define GL_POINT_SIZE_MAX_ARB 0x8127
#endif
#ifndef GL_POINT_FADE_THRESHOLD_SIZE_ARB
    #define GL_POINT_FADE_THRESHOLD_SIZE_ARB 0x8128
#endif
#ifndef GL_POINT_DISTANCE_ATTENUATION_ARB
    #define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129
#endif

typedef void (APIENTRY * PFNGLPOINTPARAMETERFARBPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFVARBPROC)(GLenum pname, const GLfloat* params);

extern PFNGLPOINTPARAMETERFARBPROC glPointParameterfARB;
extern PFNGLPOINTPARAMETERFVARBPROC glPointParameterfvARB;

// GL_ARB_point_sprite

#ifndef GL_POINT_SPRITE_ARB
    #define GL_POINT_SPRITE_ARB 0x8861
#endif
#ifndef GL_COORD_REPLACE_ARB
    #define GL_COORD_REPLACE_ARB 0x8862
#endif

// GL_ARB_provoking_vertex

#ifndef GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION
    #define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#endif
#ifndef GL_FIRST_VERTEX_CONVENTION
    #define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#endif
#ifndef GL_LAST_VERTEX_CONVENTION
    #define GL_LAST_VERTEX_CONVENTION 0x8E4E
#endif
#ifndef GL_PROVOKING_VERTEX
    #define GL_PROVOKING_VERTEX 0x8E4F
#endif

typedef void (APIENTRY * PFNGLPROVOKINGVERTEXPROC)(GLenum mode);

extern PFNGLPROVOKINGVERTEXPROC glProvokingVertex;

// GL_ARB_robustness

#ifndef GL_LOSE_CONTEXT_ON_RESET_ARB
    #define GL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#endif
#ifndef GL_GUILTY_CONTEXT_RESET_ARB
    #define GL_GUILTY_CONTEXT_RESET_ARB 0x8253
#endif
#ifndef GL_INNOCENT_CONTEXT_RESET_ARB
    #define GL_INNOCENT_CONTEXT_RESET_ARB 0x8254
#endif
#ifndef GL_UNKNOWN_CONTEXT_RESET_ARB
    #define GL_UNKNOWN_CONTEXT_RESET_ARB 0x8255
#endif
#ifndef GL_RESET_NOTIFICATION_STRATEGY_ARB
    #define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#endif
#ifndef GL_NO_RESET_NOTIFICATION_ARB
    #define GL_NO_RESET_NOTIFICATION_ARB 0x8261
#endif

typedef void (APIENTRY * PFNGLGETNCOLORTABLEARBPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* table);
typedef void (APIENTRY * PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC)(GLenum target, GLint lod, GLsizei bufSize, void* img);
typedef void (APIENTRY * PFNGLGETNCONVOLUTIONFILTERARBPROC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, void* image);
typedef void (APIENTRY * PFNGLGETNHISTOGRAMARBPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
typedef void (APIENTRY * PFNGLGETNMAPDVARBPROC)(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v);
typedef void (APIENTRY * PFNGLGETNMAPFVARBPROC)(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v);
typedef void (APIENTRY * PFNGLGETNMAPIVARBPROC)(GLenum target, GLenum query, GLsizei bufSize, GLint* v);
typedef void (APIENTRY * PFNGLGETNMINMAXARBPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, void* values);
typedef void (APIENTRY * PFNGLGETNPIXELMAPFVARBPROC)(GLenum map, GLsizei bufSize, GLfloat* values);
typedef void (APIENTRY * PFNGLGETNPIXELMAPUIVARBPROC)(GLenum map, GLsizei bufSize, GLuint* values);
typedef void (APIENTRY * PFNGLGETNPIXELMAPUSVARBPROC)(GLenum map, GLsizei bufSize, GLushort* values);
typedef void (APIENTRY * PFNGLGETNPOLYGONSTIPPLEARBPROC)(GLsizei bufSize, GLubyte* pattern);
typedef void (APIENTRY * PFNGLGETNSEPARABLEFILTERARBPROC)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, GLvoid*column, GLvoid*span);
typedef void (APIENTRY * PFNGLGETNTEXIMAGEARBPROC)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, void* img);
typedef void (APIENTRY * PFNGLGETNUNIFORMDVARBPROC)(GLuint program, GLint location, GLsizei bufSize, GLdouble* params);
typedef void (APIENTRY * PFNGLGETNUNIFORMFVARBPROC)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
typedef void (APIENTRY * PFNGLGETNUNIFORMIVARBPROC)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
typedef void (APIENTRY * PFNGLGETNUNIFORMUIVARBPROC)(GLuint program, GLint location, GLsizei bufSize, GLuint* params);
typedef void (APIENTRY * PFNGLREADNPIXELSARBPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data);

extern PFNGLGETNCOLORTABLEARBPROC glGetnColorTableARB;
extern PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glGetnCompressedTexImageARB;
extern PFNGLGETNCONVOLUTIONFILTERARBPROC glGetnConvolutionFilterARB;
extern PFNGLGETNHISTOGRAMARBPROC glGetnHistogramARB;
extern PFNGLGETNMAPDVARBPROC glGetnMapdvARB;
extern PFNGLGETNMAPFVARBPROC glGetnMapfvARB;
extern PFNGLGETNMAPIVARBPROC glGetnMapivARB;
extern PFNGLGETNMINMAXARBPROC glGetnMinmaxARB;
extern PFNGLGETNPIXELMAPFVARBPROC glGetnPixelMapfvARB;
extern PFNGLGETNPIXELMAPUIVARBPROC glGetnPixelMapuivARB;
extern PFNGLGETNPIXELMAPUSVARBPROC glGetnPixelMapusvARB;
extern PFNGLGETNPOLYGONSTIPPLEARBPROC glGetnPolygonStippleARB;
extern PFNGLGETNSEPARABLEFILTERARBPROC glGetnSeparableFilterARB;
extern PFNGLGETNTEXIMAGEARBPROC glGetnTexImageARB;
extern PFNGLGETNUNIFORMDVARBPROC glGetnUniformdvARB;
extern PFNGLGETNUNIFORMFVARBPROC glGetnUniformfvARB;
extern PFNGLGETNUNIFORMIVARBPROC glGetnUniformivARB;
extern PFNGLGETNUNIFORMUIVARBPROC glGetnUniformuivARB;
extern PFNGLREADNPIXELSARBPROC glReadnPixelsARB;

// GL_ARB_sample_shading

#ifndef GL_SAMPLE_SHADING_ARB
    #define GL_SAMPLE_SHADING_ARB 0x8C36
#endif
#ifndef GL_MIN_SAMPLE_SHADING_VALUE_ARB
    #define GL_MIN_SAMPLE_SHADING_VALUE_ARB 0x8C37
#endif

typedef void (APIENTRY * PFNGLMINSAMPLESHADINGARBPROC)(GLclampf value);

extern PFNGLMINSAMPLESHADINGARBPROC glMinSampleShadingARB;

// GL_ARB_sampler_objects

#ifndef GL_SAMPLER_BINDING
    #define GL_SAMPLER_BINDING 0x8919
#endif

typedef void (APIENTRY * PFNGLBINDSAMPLERPROC)(GLuint unit, GLuint sampler);
typedef void (APIENTRY * PFNGLDELETESAMPLERSPROC)(GLsizei count, const GLuint * samplers);
typedef void (APIENTRY * PFNGLGENSAMPLERSPROC)(GLsizei count, GLuint* samplers);
typedef void (APIENTRY * PFNGLGETSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISSAMPLERPROC)(GLuint sampler);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERIIVPROC)(GLuint sampler, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERIUIVPROC)(GLuint sampler, GLenum pname, const GLuint* params);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERFPROC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERFVPROC)(GLuint sampler, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERIPROC)(GLuint sampler, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLSAMPLERPARAMETERIVPROC)(GLuint sampler, GLenum pname, const GLint* params);

extern PFNGLBINDSAMPLERPROC glBindSampler;
extern PFNGLDELETESAMPLERSPROC glDeleteSamplers;
extern PFNGLGENSAMPLERSPROC glGenSamplers;
extern PFNGLGETSAMPLERPARAMETERIIVPROC glGetSamplerParameterIiv;
extern PFNGLGETSAMPLERPARAMETERIUIVPROC glGetSamplerParameterIuiv;
extern PFNGLGETSAMPLERPARAMETERFVPROC glGetSamplerParameterfv;
extern PFNGLGETSAMPLERPARAMETERIVPROC glGetSamplerParameteriv;
extern PFNGLISSAMPLERPROC glIsSampler;
extern PFNGLSAMPLERPARAMETERIIVPROC glSamplerParameterIiv;
extern PFNGLSAMPLERPARAMETERIUIVPROC glSamplerParameterIuiv;
extern PFNGLSAMPLERPARAMETERFPROC glSamplerParameterf;
extern PFNGLSAMPLERPARAMETERFVPROC glSamplerParameterfv;
extern PFNGLSAMPLERPARAMETERIPROC glSamplerParameteri;
extern PFNGLSAMPLERPARAMETERIVPROC glSamplerParameteriv;

// GL_ARB_seamless_cube_map

#ifndef GL_TEXTURE_CUBE_MAP_SEAMLESS
    #define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F
#endif

// GL_ARB_separate_shader_objects

#ifndef GL_PROGRAM_SEPARABLE
    #define GL_PROGRAM_SEPARABLE 0x8258
#endif
#ifndef GL_ACTIVE_PROGRAM
    #define GL_ACTIVE_PROGRAM 0x8259
#endif
#ifndef GL_PROGRAM_PIPELINE_BINDING
    #define GL_PROGRAM_PIPELINE_BINDING 0x825A
#endif

typedef void (APIENTRY * PFNGLACTIVESHADERPROGRAMPROC)(GLuint pipeline, GLuint program);
typedef void (APIENTRY * PFNGLBINDPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef GLuint (APIENTRY * PFNGLCREATESHADERPROGRAMVPROC)(GLenum type, GLsizei count, const char ** strings);
typedef void (APIENTRY * PFNGLDELETEPROGRAMPIPELINESPROC)(GLsizei n, const GLuint* pipelines);
typedef void (APIENTRY * PFNGLGENPROGRAMPIPELINESPROC)(GLsizei n, GLuint* pipelines);
typedef void (APIENTRY * PFNGLGETPROGRAMPIPELINEINFOLOGPROC)(GLuint pipeline, GLsizei bufSize, GLsizei* length, char *infoLog);
typedef void (APIENTRY * PFNGLGETPROGRAMPIPELINEIVPROC)(GLuint pipeline, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISPROGRAMPIPELINEPROC)(GLuint pipeline);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1DPROC)(GLuint program, GLint location, GLdouble x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1FPROC)(GLuint program, GLint location, GLfloat x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1IPROC)(GLuint program, GLint location, GLint x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UIPROC)(GLuint program, GLint location, GLuint x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2DPROC)(GLuint program, GLint location, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2FPROC)(GLuint program, GLint location, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2IPROC)(GLuint program, GLint location, GLint x, GLint y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UIPROC)(GLuint program, GLint location, GLuint x, GLuint y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3DPROC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3FPROC)(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3IPROC)(GLuint program, GLint location, GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UIPROC)(GLuint program, GLint location, GLuint x, GLuint y, GLuint z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4DPROC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4DVPROC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4FPROC)(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4FVPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4IPROC)(GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4IVPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UIPROC)(GLuint program, GLint location, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UIVPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUSEPROGRAMSTAGESPROC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (APIENTRY * PFNGLVALIDATEPROGRAMPIPELINEPROC)(GLuint pipeline);

extern PFNGLACTIVESHADERPROGRAMPROC glActiveShaderProgram;
extern PFNGLBINDPROGRAMPIPELINEPROC glBindProgramPipeline;
extern PFNGLCREATESHADERPROGRAMVPROC glCreateShaderProgramv;
extern PFNGLDELETEPROGRAMPIPELINESPROC glDeleteProgramPipelines;
extern PFNGLGENPROGRAMPIPELINESPROC glGenProgramPipelines;
extern PFNGLGETPROGRAMPIPELINEINFOLOGPROC glGetProgramPipelineInfoLog;
extern PFNGLGETPROGRAMPIPELINEIVPROC glGetProgramPipelineiv;
extern PFNGLISPROGRAMPIPELINEPROC glIsProgramPipeline;
extern PFNGLPROGRAMUNIFORM1DPROC glProgramUniform1d;
extern PFNGLPROGRAMUNIFORM1DVPROC glProgramUniform1dv;
extern PFNGLPROGRAMUNIFORM1FPROC glProgramUniform1f;
extern PFNGLPROGRAMUNIFORM1FVPROC glProgramUniform1fv;
extern PFNGLPROGRAMUNIFORM1IPROC glProgramUniform1i;
extern PFNGLPROGRAMUNIFORM1IVPROC glProgramUniform1iv;
extern PFNGLPROGRAMUNIFORM1UIPROC glProgramUniform1ui;
extern PFNGLPROGRAMUNIFORM1UIVPROC glProgramUniform1uiv;
extern PFNGLPROGRAMUNIFORM2DPROC glProgramUniform2d;
extern PFNGLPROGRAMUNIFORM2DVPROC glProgramUniform2dv;
extern PFNGLPROGRAMUNIFORM2FPROC glProgramUniform2f;
extern PFNGLPROGRAMUNIFORM2FVPROC glProgramUniform2fv;
extern PFNGLPROGRAMUNIFORM2IPROC glProgramUniform2i;
extern PFNGLPROGRAMUNIFORM2IVPROC glProgramUniform2iv;
extern PFNGLPROGRAMUNIFORM2UIPROC glProgramUniform2ui;
extern PFNGLPROGRAMUNIFORM2UIVPROC glProgramUniform2uiv;
extern PFNGLPROGRAMUNIFORM3DPROC glProgramUniform3d;
extern PFNGLPROGRAMUNIFORM3DVPROC glProgramUniform3dv;
extern PFNGLPROGRAMUNIFORM3FPROC glProgramUniform3f;
extern PFNGLPROGRAMUNIFORM3FVPROC glProgramUniform3fv;
extern PFNGLPROGRAMUNIFORM3IPROC glProgramUniform3i;
extern PFNGLPROGRAMUNIFORM3IVPROC glProgramUniform3iv;
extern PFNGLPROGRAMUNIFORM3UIPROC glProgramUniform3ui;
extern PFNGLPROGRAMUNIFORM3UIVPROC glProgramUniform3uiv;
extern PFNGLPROGRAMUNIFORM4DPROC glProgramUniform4d;
extern PFNGLPROGRAMUNIFORM4DVPROC glProgramUniform4dv;
extern PFNGLPROGRAMUNIFORM4FPROC glProgramUniform4f;
extern PFNGLPROGRAMUNIFORM4FVPROC glProgramUniform4fv;
extern PFNGLPROGRAMUNIFORM4IPROC glProgramUniform4i;
extern PFNGLPROGRAMUNIFORM4IVPROC glProgramUniform4iv;
extern PFNGLPROGRAMUNIFORM4UIPROC glProgramUniform4ui;
extern PFNGLPROGRAMUNIFORM4UIVPROC glProgramUniform4uiv;
extern PFNGLPROGRAMUNIFORMMATRIX2DVPROC glProgramUniformMatrix2dv;
extern PFNGLPROGRAMUNIFORMMATRIX2FVPROC glProgramUniformMatrix2fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glProgramUniformMatrix2x3dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glProgramUniformMatrix2x3fv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glProgramUniformMatrix2x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glProgramUniformMatrix2x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX3DVPROC glProgramUniformMatrix3dv;
extern PFNGLPROGRAMUNIFORMMATRIX3FVPROC glProgramUniformMatrix3fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glProgramUniformMatrix3x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glProgramUniformMatrix3x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glProgramUniformMatrix3x4dv;
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glProgramUniformMatrix3x4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4DVPROC glProgramUniformMatrix4dv;
extern PFNGLPROGRAMUNIFORMMATRIX4FVPROC glProgramUniformMatrix4fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glProgramUniformMatrix4x2dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glProgramUniformMatrix4x2fv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glProgramUniformMatrix4x3dv;
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glProgramUniformMatrix4x3fv;
extern PFNGLUSEPROGRAMSTAGESPROC glUseProgramStages;
extern PFNGLVALIDATEPROGRAMPIPELINEPROC glValidateProgramPipeline;

// GL_ARB_shader_objects

#ifndef GL_PROGRAM_OBJECT_ARB
    #define GL_PROGRAM_OBJECT_ARB 0x8B40
#endif
#ifndef GL_SHADER_OBJECT_ARB
    #define GL_SHADER_OBJECT_ARB 0x8B48
#endif
#ifndef GL_OBJECT_TYPE_ARB
    #define GL_OBJECT_TYPE_ARB 0x8B4E
#endif
#ifndef GL_OBJECT_SUBTYPE_ARB
    #define GL_OBJECT_SUBTYPE_ARB 0x8B4F
#endif
#ifndef GL_FLOAT_VEC2_ARB
    #define GL_FLOAT_VEC2_ARB 0x8B50
#endif
#ifndef GL_FLOAT_VEC3_ARB
    #define GL_FLOAT_VEC3_ARB 0x8B51
#endif
#ifndef GL_FLOAT_VEC4_ARB
    #define GL_FLOAT_VEC4_ARB 0x8B52
#endif
#ifndef GL_INT_VEC2_ARB
    #define GL_INT_VEC2_ARB 0x8B53
#endif
#ifndef GL_INT_VEC3_ARB
    #define GL_INT_VEC3_ARB 0x8B54
#endif
#ifndef GL_INT_VEC4_ARB
    #define GL_INT_VEC4_ARB 0x8B55
#endif
#ifndef GL_BOOL_ARB
    #define GL_BOOL_ARB 0x8B56
#endif
#ifndef GL_BOOL_VEC2_ARB
    #define GL_BOOL_VEC2_ARB 0x8B57
#endif
#ifndef GL_BOOL_VEC3_ARB
    #define GL_BOOL_VEC3_ARB 0x8B58
#endif
#ifndef GL_BOOL_VEC4_ARB
    #define GL_BOOL_VEC4_ARB 0x8B59
#endif
#ifndef GL_FLOAT_MAT2_ARB
    #define GL_FLOAT_MAT2_ARB 0x8B5A
#endif
#ifndef GL_FLOAT_MAT3_ARB
    #define GL_FLOAT_MAT3_ARB 0x8B5B
#endif
#ifndef GL_FLOAT_MAT4_ARB
    #define GL_FLOAT_MAT4_ARB 0x8B5C
#endif
#ifndef GL_SAMPLER_1D_ARB
    #define GL_SAMPLER_1D_ARB 0x8B5D
#endif
#ifndef GL_SAMPLER_2D_ARB
    #define GL_SAMPLER_2D_ARB 0x8B5E
#endif
#ifndef GL_SAMPLER_3D_ARB
    #define GL_SAMPLER_3D_ARB 0x8B5F
#endif
#ifndef GL_SAMPLER_CUBE_ARB
    #define GL_SAMPLER_CUBE_ARB 0x8B60
#endif
#ifndef GL_SAMPLER_1D_SHADOW_ARB
    #define GL_SAMPLER_1D_SHADOW_ARB 0x8B61
#endif
#ifndef GL_SAMPLER_2D_SHADOW_ARB
    #define GL_SAMPLER_2D_SHADOW_ARB 0x8B62
#endif
#ifndef GL_SAMPLER_2D_RECT_ARB
    #define GL_SAMPLER_2D_RECT_ARB 0x8B63
#endif
#ifndef GL_SAMPLER_2D_RECT_SHADOW_ARB
    #define GL_SAMPLER_2D_RECT_SHADOW_ARB 0x8B64
#endif
#ifndef GL_OBJECT_DELETE_STATUS_ARB
    #define GL_OBJECT_DELETE_STATUS_ARB 0x8B80
#endif
#ifndef GL_OBJECT_COMPILE_STATUS_ARB
    #define GL_OBJECT_COMPILE_STATUS_ARB 0x8B81
#endif
#ifndef GL_OBJECT_LINK_STATUS_ARB
    #define GL_OBJECT_LINK_STATUS_ARB 0x8B82
#endif
#ifndef GL_OBJECT_VALIDATE_STATUS_ARB
    #define GL_OBJECT_VALIDATE_STATUS_ARB 0x8B83
#endif
#ifndef GL_OBJECT_INFO_LOG_LENGTH_ARB
    #define GL_OBJECT_INFO_LOG_LENGTH_ARB 0x8B84
#endif
#ifndef GL_OBJECT_ATTACHED_OBJECTS_ARB
    #define GL_OBJECT_ATTACHED_OBJECTS_ARB 0x8B85
#endif
#ifndef GL_OBJECT_ACTIVE_UNIFORMS_ARB
    #define GL_OBJECT_ACTIVE_UNIFORMS_ARB 0x8B86
#endif
#ifndef GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB
    #define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB 0x8B87
#endif
#ifndef GL_OBJECT_SHADER_SOURCE_LENGTH_ARB
    #define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB 0x8B88
#endif

typedef void (APIENTRY * PFNGLATTACHOBJECTARBPROC)(GLhandleARB containerObj, GLhandleARB obj);
typedef void (APIENTRY * PFNGLCOMPILESHADERARBPROC)(GLhandleARB shaderObj);
typedef GLhandleARB (APIENTRY * PFNGLCREATEPROGRAMOBJECTARBPROC)(void);
typedef GLhandleARB (APIENTRY * PFNGLCREATESHADEROBJECTARBPROC)(GLenum shaderType);
typedef void (APIENTRY * PFNGLDELETEOBJECTARBPROC)(GLhandleARB obj);
typedef void (APIENTRY * PFNGLDETACHOBJECTARBPROC)(GLhandleARB containerObj, GLhandleARB attachedObj);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMARBPROC)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint *size, GLenum *type, GLcharARB *name);
typedef void (APIENTRY * PFNGLGETATTACHEDOBJECTSARBPROC)(GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB *obj);
typedef GLhandleARB (APIENTRY * PFNGLGETHANDLEARBPROC)(GLenum pname);
typedef void (APIENTRY * PFNGLGETINFOLOGARBPROC)(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB *infoLog);
typedef void (APIENTRY * PFNGLGETOBJECTPARAMETERFVARBPROC)(GLhandleARB obj, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETOBJECTPARAMETERIVARBPROC)(GLhandleARB obj, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETSHADERSOURCEARBPROC)(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB *source);
typedef GLint (APIENTRY * PFNGLGETUNIFORMLOCATIONARBPROC)(GLhandleARB programObj, const GLcharARB* name);
typedef void (APIENTRY * PFNGLGETUNIFORMFVARBPROC)(GLhandleARB programObj, GLint location, GLfloat* params);
typedef void (APIENTRY * PFNGLGETUNIFORMIVARBPROC)(GLhandleARB programObj, GLint location, GLint* params);
typedef void (APIENTRY * PFNGLLINKPROGRAMARBPROC)(GLhandleARB programObj);
typedef void (APIENTRY * PFNGLSHADERSOURCEARBPROC)(GLhandleARB shaderObj, GLsizei count, const GLcharARB ** string, const GLint *length);
typedef void (APIENTRY * PFNGLUNIFORM1FARBPROC)(GLint location, GLfloat v0);
typedef void (APIENTRY * PFNGLUNIFORM1FVARBPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM1IARBPROC)(GLint location, GLint v0);
typedef void (APIENTRY * PFNGLUNIFORM1IVARBPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM2FARBPROC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRY * PFNGLUNIFORM2FVARBPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM2IARBPROC)(GLint location, GLint v0, GLint v1);
typedef void (APIENTRY * PFNGLUNIFORM2IVARBPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM3FARBPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRY * PFNGLUNIFORM3FVARBPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM3IARBPROC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRY * PFNGLUNIFORM3IVARBPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORM4FARBPROC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRY * PFNGLUNIFORM4FVARBPROC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORM4IARBPROC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRY * PFNGLUNIFORM4IVARBPROC)(GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX2FVARBPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX3FVARBPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUNIFORMMATRIX4FVARBPROC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLUSEPROGRAMOBJECTARBPROC)(GLhandleARB programObj);
typedef void (APIENTRY * PFNGLVALIDATEPROGRAMARBPROC)(GLhandleARB programObj);

extern PFNGLATTACHOBJECTARBPROC glAttachObjectARB;
extern PFNGLCOMPILESHADERARBPROC glCompileShaderARB;
extern PFNGLCREATEPROGRAMOBJECTARBPROC glCreateProgramObjectARB;
extern PFNGLCREATESHADEROBJECTARBPROC glCreateShaderObjectARB;
extern PFNGLDELETEOBJECTARBPROC glDeleteObjectARB;
extern PFNGLDETACHOBJECTARBPROC glDetachObjectARB;
extern PFNGLGETACTIVEUNIFORMARBPROC glGetActiveUniformARB;
extern PFNGLGETATTACHEDOBJECTSARBPROC glGetAttachedObjectsARB;
extern PFNGLGETHANDLEARBPROC glGetHandleARB;
extern PFNGLGETINFOLOGARBPROC glGetInfoLogARB;
extern PFNGLGETOBJECTPARAMETERFVARBPROC glGetObjectParameterfvARB;
extern PFNGLGETOBJECTPARAMETERIVARBPROC glGetObjectParameterivARB;
extern PFNGLGETSHADERSOURCEARBPROC glGetShaderSourceARB;
extern PFNGLGETUNIFORMLOCATIONARBPROC glGetUniformLocationARB;
extern PFNGLGETUNIFORMFVARBPROC glGetUniformfvARB;
extern PFNGLGETUNIFORMIVARBPROC glGetUniformivARB;
extern PFNGLLINKPROGRAMARBPROC glLinkProgramARB;
extern PFNGLSHADERSOURCEARBPROC glShaderSourceARB;
extern PFNGLUNIFORM1FARBPROC glUniform1fARB;
extern PFNGLUNIFORM1FVARBPROC glUniform1fvARB;
extern PFNGLUNIFORM1IARBPROC glUniform1iARB;
extern PFNGLUNIFORM1IVARBPROC glUniform1ivARB;
extern PFNGLUNIFORM2FARBPROC glUniform2fARB;
extern PFNGLUNIFORM2FVARBPROC glUniform2fvARB;
extern PFNGLUNIFORM2IARBPROC glUniform2iARB;
extern PFNGLUNIFORM2IVARBPROC glUniform2ivARB;
extern PFNGLUNIFORM3FARBPROC glUniform3fARB;
extern PFNGLUNIFORM3FVARBPROC glUniform3fvARB;
extern PFNGLUNIFORM3IARBPROC glUniform3iARB;
extern PFNGLUNIFORM3IVARBPROC glUniform3ivARB;
extern PFNGLUNIFORM4FARBPROC glUniform4fARB;
extern PFNGLUNIFORM4FVARBPROC glUniform4fvARB;
extern PFNGLUNIFORM4IARBPROC glUniform4iARB;
extern PFNGLUNIFORM4IVARBPROC glUniform4ivARB;
extern PFNGLUNIFORMMATRIX2FVARBPROC glUniformMatrix2fvARB;
extern PFNGLUNIFORMMATRIX3FVARBPROC glUniformMatrix3fvARB;
extern PFNGLUNIFORMMATRIX4FVARBPROC glUniformMatrix4fvARB;
extern PFNGLUSEPROGRAMOBJECTARBPROC glUseProgramObjectARB;
extern PFNGLVALIDATEPROGRAMARBPROC glValidateProgramARB;

// GL_ARB_shader_subroutine

#ifndef GL_ACTIVE_SUBROUTINES
    #define GL_ACTIVE_SUBROUTINES 0x8DE5
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORMS
    #define GL_ACTIVE_SUBROUTINE_UNIFORMS 0x8DE6
#endif
#ifndef GL_MAX_SUBROUTINES
    #define GL_MAX_SUBROUTINES 0x8DE7
#endif
#ifndef GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS
    #define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS
    #define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#endif
#ifndef GL_ACTIVE_SUBROUTINE_MAX_LENGTH
    #define GL_ACTIVE_SUBROUTINE_MAX_LENGTH 0x8E48
#endif
#ifndef GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH
    #define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#endif
#ifndef GL_NUM_COMPATIBLE_SUBROUTINES
    #define GL_NUM_COMPATIBLE_SUBROUTINES 0x8E4A
#endif
#ifndef GL_COMPATIBLE_SUBROUTINES
    #define GL_COMPATIBLE_SUBROUTINES 0x8E4B
#endif

typedef void (APIENTRY * PFNGLGETACTIVESUBROUTINENAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, char *name);
typedef void (APIENTRY * PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, char *name);
typedef void (APIENTRY * PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
typedef void (APIENTRY * PFNGLGETPROGRAMSTAGEIVPROC)(GLuint program, GLenum shadertype, GLenum pname, GLint* values);
typedef GLuint (APIENTRY * PFNGLGETSUBROUTINEINDEXPROC)(GLuint program, GLenum shadertype, const char* name);
typedef GLint (APIENTRY * PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)(GLuint program, GLenum shadertype, const char* name);
typedef void (APIENTRY * PFNGLGETUNIFORMSUBROUTINEUIVPROC)(GLenum shadertype, GLint location, GLuint* params);
typedef void (APIENTRY * PFNGLUNIFORMSUBROUTINESUIVPROC)(GLenum shadertype, GLsizei count, const GLuint* indices);

extern PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
extern PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
extern PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
extern PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;
extern PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
extern PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
extern PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
extern PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;

// GL_ARB_shading_language_100

#ifndef GL_SHADING_LANGUAGE_VERSION_ARB
    #define GL_SHADING_LANGUAGE_VERSION_ARB 0x8B8C
#endif

// GL_ARB_shading_language_include

#ifndef GL_SHADER_INCLUDE_ARB
    #define GL_SHADER_INCLUDE_ARB 0x8DAE
#endif
#ifndef GL_NAMED_STRING_LENGTH_ARB
    #define GL_NAMED_STRING_LENGTH_ARB 0x8DE9
#endif
#ifndef GL_NAMED_STRING_TYPE_ARB
    #define GL_NAMED_STRING_TYPE_ARB 0x8DEA
#endif

typedef void (APIENTRY * PFNGLCOMPILESHADERINCLUDEARBPROC)(GLuint shader, GLsizei count, const char ** path, const GLint *length);
typedef void (APIENTRY * PFNGLDELETENAMEDSTRINGARBPROC)(GLint namelen, const char* name);
typedef void (APIENTRY * PFNGLGETNAMEDSTRINGARBPROC)(GLint namelen, const char* name, GLsizei bufSize, GLint *stringlen, char *string);
typedef void (APIENTRY * PFNGLGETNAMEDSTRINGIVARBPROC)(GLint namelen, const char* name, GLenum pname, GLint *params);
typedef GLboolean (APIENTRY * PFNGLISNAMEDSTRINGARBPROC)(GLint namelen, const char* name);
typedef void (APIENTRY * PFNGLNAMEDSTRINGARBPROC)(GLenum type, GLint namelen, const char* name, GLint stringlen, const char *string);

extern PFNGLCOMPILESHADERINCLUDEARBPROC glCompileShaderIncludeARB;
extern PFNGLDELETENAMEDSTRINGARBPROC glDeleteNamedStringARB;
extern PFNGLGETNAMEDSTRINGARBPROC glGetNamedStringARB;
extern PFNGLGETNAMEDSTRINGIVARBPROC glGetNamedStringivARB;
extern PFNGLISNAMEDSTRINGARBPROC glIsNamedStringARB;
extern PFNGLNAMEDSTRINGARBPROC glNamedStringARB;

// GL_ARB_shadow

#ifndef GL_TEXTURE_COMPARE_MODE_ARB
    #define GL_TEXTURE_COMPARE_MODE_ARB 0x884C
#endif
#ifndef GL_TEXTURE_COMPARE_FUNC_ARB
    #define GL_TEXTURE_COMPARE_FUNC_ARB 0x884D
#endif
#ifndef GL_COMPARE_R_TO_TEXTURE_ARB
    #define GL_COMPARE_R_TO_TEXTURE_ARB 0x884E
#endif

// GL_ARB_shadow_ambient

#ifndef GL_TEXTURE_COMPARE_FAIL_VALUE_ARB
    #define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB 0x80BF
#endif

// GL_ARB_sync

#ifndef GL_MAX_SERVER_WAIT_TIMEOUT
    #define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#endif
#ifndef GL_OBJECT_TYPE
    #define GL_OBJECT_TYPE 0x9112
#endif
#ifndef GL_SYNC_CONDITION
    #define GL_SYNC_CONDITION 0x9113
#endif
#ifndef GL_SYNC_STATUS
    #define GL_SYNC_STATUS 0x9114
#endif
#ifndef GL_SYNC_FLAGS
    #define GL_SYNC_FLAGS 0x9115
#endif
#ifndef GL_SYNC_FENCE
    #define GL_SYNC_FENCE 0x9116
#endif
#ifndef GL_SYNC_GPU_COMMANDS_COMPLETE
    #define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#endif
#ifndef GL_UNSIGNALED
    #define GL_UNSIGNALED 0x9118
#endif
#ifndef GL_SIGNALED
    #define GL_SIGNALED 0x9119
#endif
#ifndef GL_ALREADY_SIGNALED
    #define GL_ALREADY_SIGNALED 0x911A
#endif
#ifndef GL_TIMEOUT_EXPIRED
    #define GL_TIMEOUT_EXPIRED 0x911B
#endif
#ifndef GL_CONDITION_SATISFIED
    #define GL_CONDITION_SATISFIED 0x911C
#endif
#ifndef GL_WAIT_FAILED
    #define GL_WAIT_FAILED 0x911D
#endif

typedef GLenum (APIENTRY * PFNGLCLIENTWAITSYNCPROC)(GLsync GLsync,GLbitfield flags,GLuint64 timeout);
typedef void (APIENTRY * PFNGLDELETESYNCPROC)(GLsync GLsync);
typedef GLsync (APIENTRY * PFNGLFENCESYNCPROC)(GLenum condition,GLbitfield flags);
typedef void (APIENTRY * PFNGLGETINTEGER64VPROC)(GLenum pname, GLint64* params);
typedef void (APIENTRY * PFNGLGETSYNCIVPROC)(GLsync GLsync,GLenum pname,GLsizei bufSize,GLsizei* length, GLint *values);
typedef GLboolean (APIENTRY * PFNGLISSYNCPROC)(GLsync GLsync);
typedef void (APIENTRY * PFNGLWAITSYNCPROC)(GLsync GLsync,GLbitfield flags,GLuint64 timeout);

extern PFNGLCLIENTWAITSYNCPROC glClientWaitSync;
extern PFNGLDELETESYNCPROC glDeleteSync;
extern PFNGLFENCESYNCPROC glFenceSync;
extern PFNGLGETINTEGER64VPROC glGetInteger64v;
extern PFNGLGETSYNCIVPROC glGetSynciv;
extern PFNGLISSYNCPROC glIsSync;
extern PFNGLWAITSYNCPROC glWaitSync;

// GL_ARB_tessellation_shader

#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER
    #define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER
    #define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#endif
#ifndef GL_MAX_TESS_CONTROL_INPUT_COMPONENTS
    #define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#endif
#ifndef GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS
    #define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#endif
#ifndef GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS
    #define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#endif
#ifndef GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS
    #define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#endif
#ifndef GL_PATCH_VERTICES
    #define GL_PATCH_VERTICES 0x8E72
#endif
#ifndef GL_PATCH_DEFAULT_INNER_LEVEL
    #define GL_PATCH_DEFAULT_INNER_LEVEL 0x8E73
#endif
#ifndef GL_PATCH_DEFAULT_OUTER_LEVEL
    #define GL_PATCH_DEFAULT_OUTER_LEVEL 0x8E74
#endif
#ifndef GL_TESS_CONTROL_OUTPUT_VERTICES
    #define GL_TESS_CONTROL_OUTPUT_VERTICES 0x8E75
#endif
#ifndef GL_TESS_GEN_MODE
    #define GL_TESS_GEN_MODE 0x8E76
#endif
#ifndef GL_TESS_GEN_SPACING
    #define GL_TESS_GEN_SPACING 0x8E77
#endif
#ifndef GL_TESS_GEN_VERTEX_ORDER
    #define GL_TESS_GEN_VERTEX_ORDER 0x8E78
#endif
#ifndef GL_TESS_GEN_POINT_MODE
    #define GL_TESS_GEN_POINT_MODE 0x8E79
#endif
#ifndef GL_ISOLINES
    #define GL_ISOLINES 0x8E7A
#endif
#ifndef GL_FRACTIONAL_ODD
    #define GL_FRACTIONAL_ODD 0x8E7B
#endif
#ifndef GL_FRACTIONAL_EVEN
    #define GL_FRACTIONAL_EVEN 0x8E7C
#endif
#ifndef GL_MAX_PATCH_VERTICES
    #define GL_MAX_PATCH_VERTICES 0x8E7D
#endif
#ifndef GL_MAX_TESS_GEN_LEVEL
    #define GL_MAX_TESS_GEN_LEVEL 0x8E7E
#endif
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS
    #define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#endif
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS
    #define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#endif
#ifndef GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS
    #define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#endif
#ifndef GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS
    #define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#endif
#ifndef GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS
    #define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#endif
#ifndef GL_MAX_TESS_PATCH_COMPONENTS
    #define GL_MAX_TESS_PATCH_COMPONENTS 0x8E84
#endif
#ifndef GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS
    #define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#endif
#ifndef GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS
    #define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#endif
#ifndef GL_TESS_EVALUATION_SHADER
    #define GL_TESS_EVALUATION_SHADER 0x8E87
#endif
#ifndef GL_TESS_CONTROL_SHADER
    #define GL_TESS_CONTROL_SHADER 0x8E88
#endif
#ifndef GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS
    #define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#endif
#ifndef GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS
    #define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#endif

typedef void (APIENTRY * PFNGLPATCHPARAMETERFVPROC)(GLenum pname, const GLfloat* values);
typedef void (APIENTRY * PFNGLPATCHPARAMETERIPROC)(GLenum pname, GLint value);

extern PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
extern PFNGLPATCHPARAMETERIPROC glPatchParameteri;

// GL_ARB_texture_border_clamp

#ifndef GL_CLAMP_TO_BORDER_ARB
    #define GL_CLAMP_TO_BORDER_ARB 0x812D
#endif

// GL_ARB_texture_buffer_object

#ifndef GL_TEXTURE_BUFFER_ARB
    #define GL_TEXTURE_BUFFER_ARB 0x8C2A
#endif
#ifndef GL_MAX_TEXTURE_BUFFER_SIZE_ARB
    #define GL_MAX_TEXTURE_BUFFER_SIZE_ARB 0x8C2B
#endif
#ifndef GL_TEXTURE_BINDING_BUFFER_ARB
    #define GL_TEXTURE_BINDING_BUFFER_ARB 0x8C2C
#endif
#ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB
    #define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#endif
#ifndef GL_TEXTURE_BUFFER_FORMAT_ARB
    #define GL_TEXTURE_BUFFER_FORMAT_ARB 0x8C2E
#endif

typedef void (APIENTRY * PFNGLTEXBUFFERARBPROC)(GLenum target, GLenum internalformat, GLuint buffer);

extern PFNGLTEXBUFFERARBPROC glTexBufferARB;

// GL_ARB_texture_compression

#ifndef GL_COMPRESSED_ALPHA_ARB
    #define GL_COMPRESSED_ALPHA_ARB 0x84E9
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ARB
    #define GL_COMPRESSED_LUMINANCE_ARB 0x84EA
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA_ARB
    #define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#endif
#ifndef GL_COMPRESSED_INTENSITY_ARB
    #define GL_COMPRESSED_INTENSITY_ARB 0x84EC
#endif
#ifndef GL_COMPRESSED_RGB_ARB
    #define GL_COMPRESSED_RGB_ARB 0x84ED
#endif
#ifndef GL_COMPRESSED_RGBA_ARB
    #define GL_COMPRESSED_RGBA_ARB 0x84EE
#endif
#ifndef GL_TEXTURE_COMPRESSION_HINT_ARB
    #define GL_TEXTURE_COMPRESSION_HINT_ARB 0x84EF
#endif
#ifndef GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB
    #define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#endif
#ifndef GL_TEXTURE_COMPRESSED_ARB
    #define GL_TEXTURE_COMPRESSED_ARB 0x86A1
#endif
#ifndef GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB
    #define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#endif
#ifndef GL_COMPRESSED_TEXTURE_FORMATS_ARB
    #define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3
#endif

typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE1DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE2DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXIMAGE3DARBPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLGETCOMPRESSEDTEXIMAGEARBPROC)(GLenum target, GLint lod, void* img);

extern PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glCompressedTexImage1DARB;
extern PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glCompressedTexImage2DARB;
extern PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glCompressedTexImage3DARB;
extern PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glCompressedTexSubImage1DARB;
extern PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glCompressedTexSubImage2DARB;
extern PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glCompressedTexSubImage3DARB;
extern PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glGetCompressedTexImageARB;

// GL_ARB_texture_compression_bptc

#ifndef GL_COMPRESSED_RGBA_BPTC_UNORM_ARB
    #define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB
    #define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB
    #define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#endif
#ifndef GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB
    #define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F
#endif

// GL_ARB_texture_compression_rgtc

#ifndef GL_COMPRESSED_RED_RGTC1
    #define GL_COMPRESSED_RED_RGTC1 0x8DBB
#endif
#ifndef GL_COMPRESSED_SIGNED_RED_RGTC1
    #define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#endif
#ifndef GL_COMPRESSED_RG_RGTC2
    #define GL_COMPRESSED_RG_RGTC2 0x8DBD
#endif
#ifndef GL_COMPRESSED_SIGNED_RG_RGTC2
    #define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE
#endif

// GL_ARB_texture_cube_map

#ifndef GL_NORMAL_MAP_ARB
    #define GL_NORMAL_MAP_ARB 0x8511
#endif
#ifndef GL_REFLECTION_MAP_ARB
    #define GL_REFLECTION_MAP_ARB 0x8512
#endif
#ifndef GL_TEXTURE_CUBE_MAP_ARB
    #define GL_TEXTURE_CUBE_MAP_ARB 0x8513
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARB
    #define GL_TEXTURE_BINDING_CUBE_MAP_ARB 0x8514
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARB
    #define GL_PROXY_TEXTURE_CUBE_MAP_ARB 0x851B
#endif
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB
    #define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB 0x851C
#endif

// GL_ARB_texture_cube_map_array

#ifndef GL_TEXTURE_CUBE_MAP_ARRAY_ARB
    #define GL_TEXTURE_CUBE_MAP_ARRAY_ARB 0x9009
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB
    #define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB
    #define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_ARB
    #define GL_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900C
#endif
#ifndef GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB
    #define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#endif
#ifndef GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB
    #define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB
    #define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F
#endif

// GL_ARB_texture_env_combine

#ifndef GL_SUBTRACT_ARB
    #define GL_SUBTRACT_ARB 0x84E7
#endif
#ifndef GL_COMBINE_ARB
    #define GL_COMBINE_ARB 0x8570
#endif
#ifndef GL_COMBINE_RGB_ARB
    #define GL_COMBINE_RGB_ARB 0x8571
#endif
#ifndef GL_COMBINE_ALPHA_ARB
    #define GL_COMBINE_ALPHA_ARB 0x8572
#endif
#ifndef GL_RGB_SCALE_ARB
    #define GL_RGB_SCALE_ARB 0x8573
#endif
#ifndef GL_ADD_SIGNED_ARB
    #define GL_ADD_SIGNED_ARB 0x8574
#endif
#ifndef GL_INTERPOLATE_ARB
    #define GL_INTERPOLATE_ARB 0x8575
#endif
#ifndef GL_CONSTANT_ARB
    #define GL_CONSTANT_ARB 0x8576
#endif
#ifndef GL_PRIMARY_COLOR_ARB
    #define GL_PRIMARY_COLOR_ARB 0x8577
#endif
#ifndef GL_PREVIOUS_ARB
    #define GL_PREVIOUS_ARB 0x8578
#endif
#ifndef GL_SOURCE0_RGB_ARB
    #define GL_SOURCE0_RGB_ARB 0x8580
#endif
#ifndef GL_SOURCE1_RGB_ARB
    #define GL_SOURCE1_RGB_ARB 0x8581
#endif
#ifndef GL_SOURCE2_RGB_ARB
    #define GL_SOURCE2_RGB_ARB 0x8582
#endif
#ifndef GL_SOURCE0_ALPHA_ARB
    #define GL_SOURCE0_ALPHA_ARB 0x8588
#endif
#ifndef GL_SOURCE1_ALPHA_ARB
    #define GL_SOURCE1_ALPHA_ARB 0x8589
#endif
#ifndef GL_SOURCE2_ALPHA_ARB
    #define GL_SOURCE2_ALPHA_ARB 0x858A
#endif
#ifndef GL_OPERAND0_RGB_ARB
    #define GL_OPERAND0_RGB_ARB 0x8590
#endif
#ifndef GL_OPERAND1_RGB_ARB
    #define GL_OPERAND1_RGB_ARB 0x8591
#endif
#ifndef GL_OPERAND2_RGB_ARB
    #define GL_OPERAND2_RGB_ARB 0x8592
#endif
#ifndef GL_OPERAND0_ALPHA_ARB
    #define GL_OPERAND0_ALPHA_ARB 0x8598
#endif
#ifndef GL_OPERAND1_ALPHA_ARB
    #define GL_OPERAND1_ALPHA_ARB 0x8599
#endif
#ifndef GL_OPERAND2_ALPHA_ARB
    #define GL_OPERAND2_ALPHA_ARB 0x859A
#endif

// GL_ARB_texture_env_dot3

#ifndef GL_DOT3_RGB_ARB
    #define GL_DOT3_RGB_ARB 0x86AE
#endif
#ifndef GL_DOT3_RGBA_ARB
    #define GL_DOT3_RGBA_ARB 0x86AF
#endif

// GL_ARB_texture_float

#ifndef GL_RGBA32F_ARB
    #define GL_RGBA32F_ARB 0x8814
#endif
#ifndef GL_RGB32F_ARB
    #define GL_RGB32F_ARB 0x8815
#endif
#ifndef GL_ALPHA32F_ARB
    #define GL_ALPHA32F_ARB 0x8816
#endif
#ifndef GL_INTENSITY32F_ARB
    #define GL_INTENSITY32F_ARB 0x8817
#endif
#ifndef GL_LUMINANCE32F_ARB
    #define GL_LUMINANCE32F_ARB 0x8818
#endif
#ifndef GL_LUMINANCE_ALPHA32F_ARB
    #define GL_LUMINANCE_ALPHA32F_ARB 0x8819
#endif
#ifndef GL_RGBA16F_ARB
    #define GL_RGBA16F_ARB 0x881A
#endif
#ifndef GL_RGB16F_ARB
    #define GL_RGB16F_ARB 0x881B
#endif
#ifndef GL_ALPHA16F_ARB
    #define GL_ALPHA16F_ARB 0x881C
#endif
#ifndef GL_INTENSITY16F_ARB
    #define GL_INTENSITY16F_ARB 0x881D
#endif
#ifndef GL_LUMINANCE16F_ARB
    #define GL_LUMINANCE16F_ARB 0x881E
#endif
#ifndef GL_LUMINANCE_ALPHA16F_ARB
    #define GL_LUMINANCE_ALPHA16F_ARB 0x881F
#endif
#ifndef GL_TEXTURE_RED_TYPE_ARB
    #define GL_TEXTURE_RED_TYPE_ARB 0x8C10
#endif
#ifndef GL_TEXTURE_GREEN_TYPE_ARB
    #define GL_TEXTURE_GREEN_TYPE_ARB 0x8C11
#endif
#ifndef GL_TEXTURE_BLUE_TYPE_ARB
    #define GL_TEXTURE_BLUE_TYPE_ARB 0x8C12
#endif
#ifndef GL_TEXTURE_ALPHA_TYPE_ARB
    #define GL_TEXTURE_ALPHA_TYPE_ARB 0x8C13
#endif
#ifndef GL_TEXTURE_LUMINANCE_TYPE_ARB
    #define GL_TEXTURE_LUMINANCE_TYPE_ARB 0x8C14
#endif
#ifndef GL_TEXTURE_INTENSITY_TYPE_ARB
    #define GL_TEXTURE_INTENSITY_TYPE_ARB 0x8C15
#endif
#ifndef GL_TEXTURE_DEPTH_TYPE_ARB
    #define GL_TEXTURE_DEPTH_TYPE_ARB 0x8C16
#endif
#ifndef GL_UNSIGNED_NORMALIZED_ARB
    #define GL_UNSIGNED_NORMALIZED_ARB 0x8C17
#endif

// GL_ARB_texture_gather

#ifndef GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB
    #define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB
    #define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB
    #define GL_MAX_PROGRAM_TEXTURE_GATHER_COMPONENTS_ARB 0x8F9F
#endif

// GL_ARB_texture_mirrored_repeat

#ifndef GL_MIRRORED_REPEAT_ARB
    #define GL_MIRRORED_REPEAT_ARB 0x8370
#endif

// GL_ARB_texture_multisample

#ifndef GL_SAMPLE_POSITION
    #define GL_SAMPLE_POSITION 0x8E50
#endif
#ifndef GL_SAMPLE_MASK
    #define GL_SAMPLE_MASK 0x8E51
#endif
#ifndef GL_SAMPLE_MASK_VALUE
    #define GL_SAMPLE_MASK_VALUE 0x8E52
#endif
#ifndef GL_MAX_SAMPLE_MASK_WORDS
    #define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#endif
#ifndef GL_TEXTURE_2D_MULTISAMPLE
    #define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#endif
#ifndef GL_PROXY_TEXTURE_2D_MULTISAMPLE
    #define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#endif
#ifndef GL_TEXTURE_2D_MULTISAMPLE_ARRAY
    #define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#endif
#ifndef GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY
    #define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#endif
#ifndef GL_TEXTURE_BINDING_2D_MULTISAMPLE
    #define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#endif
#ifndef GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY
    #define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#endif
#ifndef GL_TEXTURE_SAMPLES
    #define GL_TEXTURE_SAMPLES 0x9106
#endif
#ifndef GL_TEXTURE_FIXED_SAMPLE_LOCATIONS
    #define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE
    #define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE
    #define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE
    #define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#endif
#ifndef GL_SAMPLER_2D_MULTISAMPLE_ARRAY
    #define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#endif
#ifndef GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
    #define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY
    #define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#endif
#ifndef GL_MAX_COLOR_TEXTURE_SAMPLES
    #define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#endif
#ifndef GL_MAX_DEPTH_TEXTURE_SAMPLES
    #define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#endif
#ifndef GL_MAX_INTEGER_SAMPLES
    #define GL_MAX_INTEGER_SAMPLES 0x9110
#endif

typedef void (APIENTRY * PFNGLGETMULTISAMPLEFVPROC)(GLenum pname, GLuint index, GLfloat* val);
typedef void (APIENTRY * PFNGLSAMPLEMASKIPROC)(GLuint index, GLbitfield mask);
typedef void (APIENTRY * PFNGLTEXIMAGE2DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (APIENTRY * PFNGLTEXIMAGE3DMULTISAMPLEPROC)(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

extern PFNGLGETMULTISAMPLEFVPROC glGetMultisamplefv;
extern PFNGLSAMPLEMASKIPROC glSampleMaski;
extern PFNGLTEXIMAGE2DMULTISAMPLEPROC glTexImage2DMultisample;
extern PFNGLTEXIMAGE3DMULTISAMPLEPROC glTexImage3DMultisample;

// GL_ARB_texture_rectangle

#ifndef GL_TEXTURE_RECTANGLE_ARB
    #define GL_TEXTURE_RECTANGLE_ARB 0x84F5
#endif
#ifndef GL_TEXTURE_BINDING_RECTANGLE_ARB
    #define GL_TEXTURE_BINDING_RECTANGLE_ARB 0x84F6
#endif
#ifndef GL_PROXY_TEXTURE_RECTANGLE_ARB
    #define GL_PROXY_TEXTURE_RECTANGLE_ARB 0x84F7
#endif
#ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB
    #define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB 0x84F8
#endif
#ifndef GL_SAMPLER_2D_RECT_ARB
    #define GL_SAMPLER_2D_RECT_ARB 0x8B63
#endif
#ifndef GL_SAMPLER_2D_RECT_SHADOW_ARB
    #define GL_SAMPLER_2D_RECT_SHADOW_ARB 0x8B64
#endif

// GL_ARB_texture_rg

#ifndef GL_RED
    #define GL_RED 0x1903
#endif
#ifndef GL_COMPRESSED_RED
    #define GL_COMPRESSED_RED 0x8225
#endif
#ifndef GL_COMPRESSED_RG
    #define GL_COMPRESSED_RG 0x8226
#endif
#ifndef GL_RG
    #define GL_RG 0x8227
#endif
#ifndef GL_RG_INTEGER
    #define GL_RG_INTEGER 0x8228
#endif
#ifndef GL_R8
    #define GL_R8 0x8229
#endif
#ifndef GL_R16
    #define GL_R16 0x822A
#endif
#ifndef GL_RG8
    #define GL_RG8 0x822B
#endif
#ifndef GL_RG16
    #define GL_RG16 0x822C
#endif
#ifndef GL_R16F
    #define GL_R16F 0x822D
#endif
#ifndef GL_R32F
    #define GL_R32F 0x822E
#endif
#ifndef GL_RG16F
    #define GL_RG16F 0x822F
#endif
#ifndef GL_RG32F
    #define GL_RG32F 0x8230
#endif
#ifndef GL_R8I
    #define GL_R8I 0x8231
#endif
#ifndef GL_R8UI
    #define GL_R8UI 0x8232
#endif
#ifndef GL_R16I
    #define GL_R16I 0x8233
#endif
#ifndef GL_R16UI
    #define GL_R16UI 0x8234
#endif
#ifndef GL_R32I
    #define GL_R32I 0x8235
#endif
#ifndef GL_R32UI
    #define GL_R32UI 0x8236
#endif
#ifndef GL_RG8I
    #define GL_RG8I 0x8237
#endif
#ifndef GL_RG8UI
    #define GL_RG8UI 0x8238
#endif
#ifndef GL_RG16I
    #define GL_RG16I 0x8239
#endif
#ifndef GL_RG16UI
    #define GL_RG16UI 0x823A
#endif
#ifndef GL_RG32I
    #define GL_RG32I 0x823B
#endif
#ifndef GL_RG32UI
    #define GL_RG32UI 0x823C
#endif

// GL_ARB_texture_rgb10_a2ui

#ifndef GL_RGB10_A2UI
    #define GL_RGB10_A2UI 0x906F
#endif

// GL_ARB_texture_swizzle

#ifndef GL_TEXTURE_SWIZZLE_R
    #define GL_TEXTURE_SWIZZLE_R 0x8E42
#endif
#ifndef GL_TEXTURE_SWIZZLE_G
    #define GL_TEXTURE_SWIZZLE_G 0x8E43
#endif
#ifndef GL_TEXTURE_SWIZZLE_B
    #define GL_TEXTURE_SWIZZLE_B 0x8E44
#endif
#ifndef GL_TEXTURE_SWIZZLE_A
    #define GL_TEXTURE_SWIZZLE_A 0x8E45
#endif
#ifndef GL_TEXTURE_SWIZZLE_RGBA
    #define GL_TEXTURE_SWIZZLE_RGBA 0x8E46
#endif

// GL_ARB_timer_query

#ifndef GL_TIME_ELAPSED
    #define GL_TIME_ELAPSED 0x88BF
#endif
#ifndef GL_TIMESTAMP
    #define GL_TIMESTAMP 0x8E28
#endif

typedef void (APIENTRY * PFNGLGETQUERYOBJECTI64VPROC)(GLuint id, GLenum pname, GLint64* params);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTUI64VPROC)(GLuint id, GLenum pname, GLuint64* params);
typedef void (APIENTRY * PFNGLQUERYCOUNTERPROC)(GLuint id, GLenum target);

extern PFNGLGETQUERYOBJECTI64VPROC glGetQueryObjecti64v;
extern PFNGLGETQUERYOBJECTUI64VPROC glGetQueryObjectui64v;
extern PFNGLQUERYCOUNTERPROC glQueryCounter;

// GL_ARB_transform_feedback2

#ifndef GL_TRANSFORM_FEEDBACK
    #define GL_TRANSFORM_FEEDBACK 0x8E22
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED
    #define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED 0x8E23
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE
    #define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE 0x8E24
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BINDING
    #define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#endif

typedef void (APIENTRY * PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLDRAWTRANSFORMFEEDBACKPROC)(GLenum mode, GLuint id);
typedef void (APIENTRY * PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint* ids);
typedef GLboolean (APIENTRY * PFNGLISTRANSFORMFEEDBACKPROC)(GLuint id);
typedef void (APIENTRY * PFNGLPAUSETRANSFORMFEEDBACKPROC)(void);
typedef void (APIENTRY * PFNGLRESUMETRANSFORMFEEDBACKPROC)(void);

extern PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
extern PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
extern PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;
extern PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
extern PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
extern PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
extern PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;

// GL_ARB_transform_feedback3

#ifndef GL_MAX_TRANSFORM_FEEDBACK_BUFFERS
    #define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70
#endif
#ifndef GL_MAX_VERTEX_STREAMS
    #define GL_MAX_VERTEX_STREAMS 0x8E71
#endif

typedef void (APIENTRY * PFNGLBEGINQUERYINDEXEDPROC)(GLenum target, GLuint index, GLuint id);
typedef void (APIENTRY * PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)(GLenum mode, GLuint id, GLuint stream);
typedef void (APIENTRY * PFNGLENDQUERYINDEXEDPROC)(GLenum target, GLuint index);
typedef void (APIENTRY * PFNGLGETQUERYINDEXEDIVPROC)(GLenum target, GLuint index, GLenum pname, GLint* params);

extern PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
extern PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
extern PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
extern PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;

// GL_ARB_transpose_matrix

#ifndef GL_TRANSPOSE_MODELVIEW_MATRIX_ARB
    #define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#endif
#ifndef GL_TRANSPOSE_PROJECTION_MATRIX_ARB
    #define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#endif
#ifndef GL_TRANSPOSE_TEXTURE_MATRIX_ARB
    #define GL_TRANSPOSE_TEXTURE_MATRIX_ARB 0x84E5
#endif
#ifndef GL_TRANSPOSE_COLOR_MATRIX_ARB
    #define GL_TRANSPOSE_COLOR_MATRIX_ARB 0x84E6
#endif

typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXDARBPROC)(GLdouble m[16]);
typedef void (APIENTRY * PFNGLLOADTRANSPOSEMATRIXFARBPROC)(GLfloat m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXDARBPROC)(GLdouble m[16]);
typedef void (APIENTRY * PFNGLMULTTRANSPOSEMATRIXFARBPROC)(GLfloat m[16]);

extern PFNGLLOADTRANSPOSEMATRIXDARBPROC glLoadTransposeMatrixdARB;
extern PFNGLLOADTRANSPOSEMATRIXFARBPROC glLoadTransposeMatrixfARB;
extern PFNGLMULTTRANSPOSEMATRIXDARBPROC glMultTransposeMatrixdARB;
extern PFNGLMULTTRANSPOSEMATRIXFARBPROC glMultTransposeMatrixfARB;

// GL_ARB_uniform_buffer_object

#ifndef GL_UNIFORM_BUFFER
    #define GL_UNIFORM_BUFFER 0x8A11
#endif
#ifndef GL_UNIFORM_BUFFER_BINDING
    #define GL_UNIFORM_BUFFER_BINDING 0x8A28
#endif
#ifndef GL_UNIFORM_BUFFER_START
    #define GL_UNIFORM_BUFFER_START 0x8A29
#endif
#ifndef GL_UNIFORM_BUFFER_SIZE
    #define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_BLOCKS
    #define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_BLOCKS
    #define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#endif
#ifndef GL_MAX_FRAGMENT_UNIFORM_BLOCKS
    #define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#endif
#ifndef GL_MAX_COMBINED_UNIFORM_BLOCKS
    #define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#endif
#ifndef GL_MAX_UNIFORM_BUFFER_BINDINGS
    #define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#endif
#ifndef GL_MAX_UNIFORM_BLOCK_SIZE
    #define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#endif
#ifndef GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS
    #define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#endif
#ifndef GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS
    #define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#endif
#ifndef GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS
    #define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#endif
#ifndef GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT
    #define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#endif
#ifndef GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH
    #define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#endif
#ifndef GL_ACTIVE_UNIFORM_BLOCKS
    #define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#endif
#ifndef GL_UNIFORM_TYPE
    #define GL_UNIFORM_TYPE 0x8A37
#endif
#ifndef GL_UNIFORM_SIZE
    #define GL_UNIFORM_SIZE 0x8A38
#endif
#ifndef GL_UNIFORM_NAME_LENGTH
    #define GL_UNIFORM_NAME_LENGTH 0x8A39
#endif
#ifndef GL_UNIFORM_BLOCK_INDEX
    #define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#endif
#ifndef GL_UNIFORM_OFFSET
    #define GL_UNIFORM_OFFSET 0x8A3B
#endif
#ifndef GL_UNIFORM_ARRAY_STRIDE
    #define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#endif
#ifndef GL_UNIFORM_MATRIX_STRIDE
    #define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#endif
#ifndef GL_UNIFORM_IS_ROW_MAJOR
    #define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#endif
#ifndef GL_UNIFORM_BLOCK_BINDING
    #define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#endif
#ifndef GL_UNIFORM_BLOCK_DATA_SIZE
    #define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#endif
#ifndef GL_UNIFORM_BLOCK_NAME_LENGTH
    #define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#endif
#ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS
    #define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#endif
#ifndef GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES
    #define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER
    #define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER
    #define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#endif
#ifndef GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER
    #define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#endif

typedef void (APIENTRY * PFNGLBINDBUFFERBASEPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRY * PFNGLBINDBUFFERRANGEPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, char* uniformBlockName);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMBLOCKIVPROC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMNAMEPROC)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, char* uniformName);
typedef void (APIENTRY * PFNGLGETACTIVEUNIFORMSIVPROC)(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETINTEGERI_VPROC)(GLenum target, GLuint index, GLint* data);
typedef GLuint (APIENTRY * PFNGLGETUNIFORMBLOCKINDEXPROC)(GLuint program, const char* uniformBlockName);
typedef void (APIENTRY * PFNGLGETUNIFORMINDICESPROC)(GLuint program, GLsizei uniformCount, const char** uniformNames, GLuint* uniformIndices);
typedef void (APIENTRY * PFNGLUNIFORMBLOCKBINDINGPROC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

extern PFNGLBINDBUFFERBASEPROC glBindBufferBase;
extern PFNGLBINDBUFFERRANGEPROC glBindBufferRange;
extern PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glGetActiveUniformBlockName;
extern PFNGLGETACTIVEUNIFORMBLOCKIVPROC glGetActiveUniformBlockiv;
extern PFNGLGETACTIVEUNIFORMNAMEPROC glGetActiveUniformName;
extern PFNGLGETACTIVEUNIFORMSIVPROC glGetActiveUniformsiv;
extern PFNGLGETINTEGERI_VPROC glGetIntegeri_v;
extern PFNGLGETUNIFORMBLOCKINDEXPROC glGetUniformBlockIndex;
extern PFNGLGETUNIFORMINDICESPROC glGetUniformIndices;
extern PFNGLUNIFORMBLOCKBINDINGPROC glUniformBlockBinding;

// GL_ARB_vertex_array_bgra

#ifndef GL_BGRA
    #define GL_BGRA 0x80E1
#endif

// GL_ARB_vertex_array_object

#ifndef GL_VERTEX_ARRAY_BINDING
    #define GL_VERTEX_ARRAY_BINDING 0x85B5
#endif

typedef void (APIENTRY * PFNGLBINDVERTEXARRAYPROC)(GLuint array);
typedef void (APIENTRY * PFNGLDELETEVERTEXARRAYSPROC)(GLsizei n, const GLuint* arrays);
typedef void (APIENTRY * PFNGLGENVERTEXARRAYSPROC)(GLsizei n, GLuint* arrays);
typedef GLboolean (APIENTRY * PFNGLISVERTEXARRAYPROC)(GLuint array);

extern PFNGLBINDVERTEXARRAYPROC glBindVertexArray;
extern PFNGLDELETEVERTEXARRAYSPROC glDeleteVertexArrays;
extern PFNGLGENVERTEXARRAYSPROC glGenVertexArrays;
extern PFNGLISVERTEXARRAYPROC glIsVertexArray;

// GL_ARB_vertex_attrib_64bit

#ifndef GL_DOUBLE_MAT2
    #define GL_DOUBLE_MAT2 0x8F46
#endif
#ifndef GL_DOUBLE_MAT3
    #define GL_DOUBLE_MAT3 0x8F47
#endif
#ifndef GL_DOUBLE_MAT4
    #define GL_DOUBLE_MAT4 0x8F48
#endif
#ifndef GL_DOUBLE_VEC2
    #define GL_DOUBLE_VEC2 0x8FFC
#endif
#ifndef GL_DOUBLE_VEC3
    #define GL_DOUBLE_VEC3 0x8FFD
#endif
#ifndef GL_DOUBLE_VEC4
    #define GL_DOUBLE_VEC4 0x8FFE
#endif

typedef void (APIENTRY * PFNGLGETVERTEXATTRIBLDVPROC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1DPROC)(GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2DPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4DPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4DVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBLPOINTERPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);

extern PFNGLGETVERTEXATTRIBLDVPROC glGetVertexAttribLdv;
extern PFNGLVERTEXATTRIBL1DPROC glVertexAttribL1d;
extern PFNGLVERTEXATTRIBL1DVPROC glVertexAttribL1dv;
extern PFNGLVERTEXATTRIBL2DPROC glVertexAttribL2d;
extern PFNGLVERTEXATTRIBL2DVPROC glVertexAttribL2dv;
extern PFNGLVERTEXATTRIBL3DPROC glVertexAttribL3d;
extern PFNGLVERTEXATTRIBL3DVPROC glVertexAttribL3dv;
extern PFNGLVERTEXATTRIBL4DPROC glVertexAttribL4d;
extern PFNGLVERTEXATTRIBL4DVPROC glVertexAttribL4dv;
extern PFNGLVERTEXATTRIBLPOINTERPROC glVertexAttribLPointer;

// GL_ARB_vertex_blend

#ifndef GL_MODELVIEW0_ARB
    #define GL_MODELVIEW0_ARB 0x1700
#endif
#ifndef GL_MODELVIEW1_ARB
    #define GL_MODELVIEW1_ARB 0x850A
#endif
#ifndef GL_MAX_VERTEX_UNITS_ARB
    #define GL_MAX_VERTEX_UNITS_ARB 0x86A4
#endif
#ifndef GL_ACTIVE_VERTEX_UNITS_ARB
    #define GL_ACTIVE_VERTEX_UNITS_ARB 0x86A5
#endif
#ifndef GL_WEIGHT_SUM_UNITY_ARB
    #define GL_WEIGHT_SUM_UNITY_ARB 0x86A6
#endif
#ifndef GL_VERTEX_BLEND_ARB
    #define GL_VERTEX_BLEND_ARB 0x86A7
#endif
#ifndef GL_CURRENT_WEIGHT_ARB
    #define GL_CURRENT_WEIGHT_ARB 0x86A8
#endif
#ifndef GL_WEIGHT_ARRAY_TYPE_ARB
    #define GL_WEIGHT_ARRAY_TYPE_ARB 0x86A9
#endif
#ifndef GL_WEIGHT_ARRAY_STRIDE_ARB
    #define GL_WEIGHT_ARRAY_STRIDE_ARB 0x86AA
#endif
#ifndef GL_WEIGHT_ARRAY_SIZE_ARB
    #define GL_WEIGHT_ARRAY_SIZE_ARB 0x86AB
#endif
#ifndef GL_WEIGHT_ARRAY_POINTER_ARB
    #define GL_WEIGHT_ARRAY_POINTER_ARB 0x86AC
#endif
#ifndef GL_WEIGHT_ARRAY_ARB
    #define GL_WEIGHT_ARRAY_ARB 0x86AD
#endif
#ifndef GL_MODELVIEW2_ARB
    #define GL_MODELVIEW2_ARB 0x8722
#endif
#ifndef GL_MODELVIEW3_ARB
    #define GL_MODELVIEW3_ARB 0x8723
#endif
#ifndef GL_MODELVIEW4_ARB
    #define GL_MODELVIEW4_ARB 0x8724
#endif
#ifndef GL_MODELVIEW5_ARB
    #define GL_MODELVIEW5_ARB 0x8725
#endif
#ifndef GL_MODELVIEW6_ARB
    #define GL_MODELVIEW6_ARB 0x8726
#endif
#ifndef GL_MODELVIEW7_ARB
    #define GL_MODELVIEW7_ARB 0x8727
#endif
#ifndef GL_MODELVIEW8_ARB
    #define GL_MODELVIEW8_ARB 0x8728
#endif
#ifndef GL_MODELVIEW9_ARB
    #define GL_MODELVIEW9_ARB 0x8729
#endif
#ifndef GL_MODELVIEW10_ARB
    #define GL_MODELVIEW10_ARB 0x872A
#endif
#ifndef GL_MODELVIEW11_ARB
    #define GL_MODELVIEW11_ARB 0x872B
#endif
#ifndef GL_MODELVIEW12_ARB
    #define GL_MODELVIEW12_ARB 0x872C
#endif
#ifndef GL_MODELVIEW13_ARB
    #define GL_MODELVIEW13_ARB 0x872D
#endif
#ifndef GL_MODELVIEW14_ARB
    #define GL_MODELVIEW14_ARB 0x872E
#endif
#ifndef GL_MODELVIEW15_ARB
    #define GL_MODELVIEW15_ARB 0x872F
#endif
#ifndef GL_MODELVIEW16_ARB
    #define GL_MODELVIEW16_ARB 0x8730
#endif
#ifndef GL_MODELVIEW17_ARB
    #define GL_MODELVIEW17_ARB 0x8731
#endif
#ifndef GL_MODELVIEW18_ARB
    #define GL_MODELVIEW18_ARB 0x8732
#endif
#ifndef GL_MODELVIEW19_ARB
    #define GL_MODELVIEW19_ARB 0x8733
#endif
#ifndef GL_MODELVIEW20_ARB
    #define GL_MODELVIEW20_ARB 0x8734
#endif
#ifndef GL_MODELVIEW21_ARB
    #define GL_MODELVIEW21_ARB 0x8735
#endif
#ifndef GL_MODELVIEW22_ARB
    #define GL_MODELVIEW22_ARB 0x8736
#endif
#ifndef GL_MODELVIEW23_ARB
    #define GL_MODELVIEW23_ARB 0x8737
#endif
#ifndef GL_MODELVIEW24_ARB
    #define GL_MODELVIEW24_ARB 0x8738
#endif
#ifndef GL_MODELVIEW25_ARB
    #define GL_MODELVIEW25_ARB 0x8739
#endif
#ifndef GL_MODELVIEW26_ARB
    #define GL_MODELVIEW26_ARB 0x873A
#endif
#ifndef GL_MODELVIEW27_ARB
    #define GL_MODELVIEW27_ARB 0x873B
#endif
#ifndef GL_MODELVIEW28_ARB
    #define GL_MODELVIEW28_ARB 0x873C
#endif
#ifndef GL_MODELVIEW29_ARB
    #define GL_MODELVIEW29_ARB 0x873D
#endif
#ifndef GL_MODELVIEW30_ARB
    #define GL_MODELVIEW30_ARB 0x873E
#endif
#ifndef GL_MODELVIEW31_ARB
    #define GL_MODELVIEW31_ARB 0x873F
#endif

typedef void (APIENTRY * PFNGLVERTEXBLENDARBPROC)(GLint count);
typedef void (APIENTRY * PFNGLWEIGHTPOINTERARBPROC)(GLint size, GLenum type, GLsizei stride, GLvoid *pointer);
typedef void (APIENTRY * PFNGLWEIGHTBVARBPROC)(GLint size, GLbyte *weights);
typedef void (APIENTRY * PFNGLWEIGHTDVARBPROC)(GLint size, GLdouble *weights);
typedef void (APIENTRY * PFNGLWEIGHTFVARBPROC)(GLint size, GLfloat *weights);
typedef void (APIENTRY * PFNGLWEIGHTIVARBPROC)(GLint size, GLint *weights);
typedef void (APIENTRY * PFNGLWEIGHTSVARBPROC)(GLint size, GLshort *weights);
typedef void (APIENTRY * PFNGLWEIGHTUBVARBPROC)(GLint size, GLubyte *weights);
typedef void (APIENTRY * PFNGLWEIGHTUIVARBPROC)(GLint size, GLuint *weights);
typedef void (APIENTRY * PFNGLWEIGHTUSVARBPROC)(GLint size, GLushort *weights);

extern PFNGLVERTEXBLENDARBPROC glVertexBlendARB;
extern PFNGLWEIGHTPOINTERARBPROC glWeightPointerARB;
extern PFNGLWEIGHTBVARBPROC glWeightbvARB;
extern PFNGLWEIGHTDVARBPROC glWeightdvARB;
extern PFNGLWEIGHTFVARBPROC glWeightfvARB;
extern PFNGLWEIGHTIVARBPROC glWeightivARB;
extern PFNGLWEIGHTSVARBPROC glWeightsvARB;
extern PFNGLWEIGHTUBVARBPROC glWeightubvARB;
extern PFNGLWEIGHTUIVARBPROC glWeightuivARB;
extern PFNGLWEIGHTUSVARBPROC glWeightusvARB;

// GL_ARB_vertex_buffer_object

#ifndef GL_BUFFER_SIZE_ARB
    #define GL_BUFFER_SIZE_ARB 0x8764
#endif
#ifndef GL_BUFFER_USAGE_ARB
    #define GL_BUFFER_USAGE_ARB 0x8765
#endif
#ifndef GL_ARRAY_BUFFER_ARB
    #define GL_ARRAY_BUFFER_ARB 0x8892
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_ARB
    #define GL_ELEMENT_ARRAY_BUFFER_ARB 0x8893
#endif
#ifndef GL_ARRAY_BUFFER_BINDING_ARB
    #define GL_ARRAY_BUFFER_BINDING_ARB 0x8894
#endif
#ifndef GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB
    #define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#endif
#ifndef GL_VERTEX_ARRAY_BUFFER_BINDING_ARB
    #define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#endif
#ifndef GL_NORMAL_ARRAY_BUFFER_BINDING_ARB
    #define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#endif
#ifndef GL_COLOR_ARRAY_BUFFER_BINDING_ARB
    #define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#endif
#ifndef GL_INDEX_ARRAY_BUFFER_BINDING_ARB
    #define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB
    #define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#endif
#ifndef GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB
    #define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB
    #define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB
    #define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#endif
#ifndef GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB
    #define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#endif
#ifndef GL_READ_ONLY_ARB
    #define GL_READ_ONLY_ARB 0x88B8
#endif
#ifndef GL_WRITE_ONLY_ARB
    #define GL_WRITE_ONLY_ARB 0x88B9
#endif
#ifndef GL_READ_WRITE_ARB
    #define GL_READ_WRITE_ARB 0x88BA
#endif
#ifndef GL_BUFFER_ACCESS_ARB
    #define GL_BUFFER_ACCESS_ARB 0x88BB
#endif
#ifndef GL_BUFFER_MAPPED_ARB
    #define GL_BUFFER_MAPPED_ARB 0x88BC
#endif
#ifndef GL_BUFFER_MAP_POINTER_ARB
    #define GL_BUFFER_MAP_POINTER_ARB 0x88BD
#endif
#ifndef GL_STREAM_DRAW_ARB
    #define GL_STREAM_DRAW_ARB 0x88E0
#endif
#ifndef GL_STREAM_READ_ARB
    #define GL_STREAM_READ_ARB 0x88E1
#endif
#ifndef GL_STREAM_COPY_ARB
    #define GL_STREAM_COPY_ARB 0x88E2
#endif
#ifndef GL_STATIC_DRAW_ARB
    #define GL_STATIC_DRAW_ARB 0x88E4
#endif
#ifndef GL_STATIC_READ_ARB
    #define GL_STATIC_READ_ARB 0x88E5
#endif
#ifndef GL_STATIC_COPY_ARB
    #define GL_STATIC_COPY_ARB 0x88E6
#endif
#ifndef GL_DYNAMIC_DRAW_ARB
    #define GL_DYNAMIC_DRAW_ARB 0x88E8
#endif
#ifndef GL_DYNAMIC_READ_ARB
    #define GL_DYNAMIC_READ_ARB 0x88E9
#endif
#ifndef GL_DYNAMIC_COPY_ARB
    #define GL_DYNAMIC_COPY_ARB 0x88EA
#endif

typedef void (APIENTRY * PFNGLBINDBUFFERARBPROC)(GLenum target, GLuint buffer);
typedef void (APIENTRY * PFNGLBUFFERDATAARBPROC)(GLenum target, GLsizeiptrARB size, const GLvoid* data, GLenum usage);
typedef void (APIENTRY * PFNGLBUFFERSUBDATAARBPROC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid* data);
typedef void (APIENTRY * PFNGLDELETEBUFFERSARBPROC)(GLsizei n, const GLuint* buffers);
typedef void (APIENTRY * PFNGLGENBUFFERSARBPROC)(GLsizei n, GLuint* buffers);
typedef void (APIENTRY * PFNGLGETBUFFERPARAMETERIVARBPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETBUFFERPOINTERVARBPROC)(GLenum target, GLenum pname, GLvoid** params);
typedef void (APIENTRY * PFNGLGETBUFFERSUBDATAARBPROC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data);
typedef GLboolean (APIENTRY * PFNGLISBUFFERARBPROC)(GLuint buffer);
typedef GLvoid (APIENTRY * PFNGLMAPBUFFERARBPROC)(GLenum target, GLenum access);
typedef GLboolean (APIENTRY * PFNGLUNMAPBUFFERARBPROC)(GLenum target);

extern PFNGLBINDBUFFERARBPROC glBindBufferARB;
extern PFNGLBUFFERDATAARBPROC glBufferDataARB;
extern PFNGLBUFFERSUBDATAARBPROC glBufferSubDataARB;
extern PFNGLDELETEBUFFERSARBPROC glDeleteBuffersARB;
extern PFNGLGENBUFFERSARBPROC glGenBuffersARB;
extern PFNGLGETBUFFERPARAMETERIVARBPROC glGetBufferParameterivARB;
extern PFNGLGETBUFFERPOINTERVARBPROC glGetBufferPointervARB;
extern PFNGLGETBUFFERSUBDATAARBPROC glGetBufferSubDataARB;
extern PFNGLISBUFFERARBPROC glIsBufferARB;
extern PFNGLMAPBUFFERARBPROC glMapBufferARB;
extern PFNGLUNMAPBUFFERARBPROC glUnmapBufferARB;

// GL_ARB_vertex_program

#ifndef GL_COLOR_SUM_ARB
    #define GL_COLOR_SUM_ARB 0x8458
#endif
#ifndef GL_VERTEX_PROGRAM_ARB
    #define GL_VERTEX_PROGRAM_ARB 0x8620
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB 0x8622
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB 0x8623
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB 0x8624
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB 0x8625
#endif
#ifndef GL_CURRENT_VERTEX_ATTRIB_ARB
    #define GL_CURRENT_VERTEX_ATTRIB_ARB 0x8626
#endif
#ifndef GL_PROGRAM_LENGTH_ARB
    #define GL_PROGRAM_LENGTH_ARB 0x8627
#endif
#ifndef GL_PROGRAM_STRING_ARB
    #define GL_PROGRAM_STRING_ARB 0x8628
#endif
#ifndef GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB
    #define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#endif
#ifndef GL_MAX_PROGRAM_MATRICES_ARB
    #define GL_MAX_PROGRAM_MATRICES_ARB 0x862F
#endif
#ifndef GL_CURRENT_MATRIX_STACK_DEPTH_ARB
    #define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#endif
#ifndef GL_CURRENT_MATRIX_ARB
    #define GL_CURRENT_MATRIX_ARB 0x8641
#endif
#ifndef GL_VERTEX_PROGRAM_POINT_SIZE_ARB
    #define GL_VERTEX_PROGRAM_POINT_SIZE_ARB 0x8642
#endif
#ifndef GL_VERTEX_PROGRAM_TWO_SIDE_ARB
    #define GL_VERTEX_PROGRAM_TWO_SIDE_ARB 0x8643
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB 0x8645
#endif
#ifndef GL_PROGRAM_ERROR_POSITION_ARB
    #define GL_PROGRAM_ERROR_POSITION_ARB 0x864B
#endif
#ifndef GL_PROGRAM_BINDING_ARB
    #define GL_PROGRAM_BINDING_ARB 0x8677
#endif
#ifndef GL_MAX_VERTEX_ATTRIBS_ARB
    #define GL_MAX_VERTEX_ATTRIBS_ARB 0x8869
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB
    #define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#endif
#ifndef GL_PROGRAM_ERROR_STRING_ARB
    #define GL_PROGRAM_ERROR_STRING_ARB 0x8874
#endif
#ifndef GL_PROGRAM_FORMAT_ASCII_ARB
    #define GL_PROGRAM_FORMAT_ASCII_ARB 0x8875
#endif
#ifndef GL_PROGRAM_FORMAT_ARB
    #define GL_PROGRAM_FORMAT_ARB 0x8876
#endif
#ifndef GL_PROGRAM_INSTRUCTIONS_ARB
    #define GL_PROGRAM_INSTRUCTIONS_ARB 0x88A0
#endif
#ifndef GL_MAX_PROGRAM_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_INSTRUCTIONS_ARB 0x88A1
#endif
#ifndef GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB
    #define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB
    #define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#endif
#ifndef GL_PROGRAM_TEMPORARIES_ARB
    #define GL_PROGRAM_TEMPORARIES_ARB 0x88A4
#endif
#ifndef GL_MAX_PROGRAM_TEMPORARIES_ARB
    #define GL_MAX_PROGRAM_TEMPORARIES_ARB 0x88A5
#endif
#ifndef GL_PROGRAM_NATIVE_TEMPORARIES_ARB
    #define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB
    #define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#endif
#ifndef GL_PROGRAM_PARAMETERS_ARB
    #define GL_PROGRAM_PARAMETERS_ARB 0x88A8
#endif
#ifndef GL_MAX_PROGRAM_PARAMETERS_ARB
    #define GL_MAX_PROGRAM_PARAMETERS_ARB 0x88A9
#endif
#ifndef GL_PROGRAM_NATIVE_PARAMETERS_ARB
    #define GL_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AA
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB
    #define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#endif
#ifndef GL_PROGRAM_ATTRIBS_ARB
    #define GL_PROGRAM_ATTRIBS_ARB 0x88AC
#endif
#ifndef GL_MAX_PROGRAM_ATTRIBS_ARB
    #define GL_MAX_PROGRAM_ATTRIBS_ARB 0x88AD
#endif
#ifndef GL_PROGRAM_NATIVE_ATTRIBS_ARB
    #define GL_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AE
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB
    #define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#endif
#ifndef GL_PROGRAM_ADDRESS_REGISTERS_ARB
    #define GL_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B0
#endif
#ifndef GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB
    #define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#endif
#ifndef GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
    #define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#endif
#ifndef GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB
    #define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3
#endif
#ifndef GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB
    #define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#endif
#ifndef GL_MAX_PROGRAM_ENV_PARAMETERS_ARB
    #define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#endif
#ifndef GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB
    #define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#endif
#ifndef GL_TRANSPOSE_CURRENT_MATRIX_ARB
    #define GL_TRANSPOSE_CURRENT_MATRIX_ARB 0x88B7
#endif
#ifndef GL_MATRIX0_ARB
    #define GL_MATRIX0_ARB 0x88C0
#endif
#ifndef GL_MATRIX1_ARB
    #define GL_MATRIX1_ARB 0x88C1
#endif
#ifndef GL_MATRIX2_ARB
    #define GL_MATRIX2_ARB 0x88C2
#endif
#ifndef GL_MATRIX3_ARB
    #define GL_MATRIX3_ARB 0x88C3
#endif
#ifndef GL_MATRIX4_ARB
    #define GL_MATRIX4_ARB 0x88C4
#endif
#ifndef GL_MATRIX5_ARB
    #define GL_MATRIX5_ARB 0x88C5
#endif
#ifndef GL_MATRIX6_ARB
    #define GL_MATRIX6_ARB 0x88C6
#endif
#ifndef GL_MATRIX7_ARB
    #define GL_MATRIX7_ARB 0x88C7
#endif
#ifndef GL_MATRIX8_ARB
    #define GL_MATRIX8_ARB 0x88C8
#endif
#ifndef GL_MATRIX9_ARB
    #define GL_MATRIX9_ARB 0x88C9
#endif
#ifndef GL_MATRIX10_ARB
    #define GL_MATRIX10_ARB 0x88CA
#endif
#ifndef GL_MATRIX11_ARB
    #define GL_MATRIX11_ARB 0x88CB
#endif
#ifndef GL_MATRIX12_ARB
    #define GL_MATRIX12_ARB 0x88CC
#endif
#ifndef GL_MATRIX13_ARB
    #define GL_MATRIX13_ARB 0x88CD
#endif
#ifndef GL_MATRIX14_ARB
    #define GL_MATRIX14_ARB 0x88CE
#endif
#ifndef GL_MATRIX15_ARB
    #define GL_MATRIX15_ARB 0x88CF
#endif
#ifndef GL_MATRIX16_ARB
    #define GL_MATRIX16_ARB 0x88D0
#endif
#ifndef GL_MATRIX17_ARB
    #define GL_MATRIX17_ARB 0x88D1
#endif
#ifndef GL_MATRIX18_ARB
    #define GL_MATRIX18_ARB 0x88D2
#endif
#ifndef GL_MATRIX19_ARB
    #define GL_MATRIX19_ARB 0x88D3
#endif
#ifndef GL_MATRIX20_ARB
    #define GL_MATRIX20_ARB 0x88D4
#endif
#ifndef GL_MATRIX21_ARB
    #define GL_MATRIX21_ARB 0x88D5
#endif
#ifndef GL_MATRIX22_ARB
    #define GL_MATRIX22_ARB 0x88D6
#endif
#ifndef GL_MATRIX23_ARB
    #define GL_MATRIX23_ARB 0x88D7
#endif
#ifndef GL_MATRIX24_ARB
    #define GL_MATRIX24_ARB 0x88D8
#endif
#ifndef GL_MATRIX25_ARB
    #define GL_MATRIX25_ARB 0x88D9
#endif
#ifndef GL_MATRIX26_ARB
    #define GL_MATRIX26_ARB 0x88DA
#endif
#ifndef GL_MATRIX27_ARB
    #define GL_MATRIX27_ARB 0x88DB
#endif
#ifndef GL_MATRIX28_ARB
    #define GL_MATRIX28_ARB 0x88DC
#endif
#ifndef GL_MATRIX29_ARB
    #define GL_MATRIX29_ARB 0x88DD
#endif
#ifndef GL_MATRIX30_ARB
    #define GL_MATRIX30_ARB 0x88DE
#endif
#ifndef GL_MATRIX31_ARB
    #define GL_MATRIX31_ARB 0x88DF
#endif

typedef void (APIENTRY * PFNGLBINDPROGRAMARBPROC)(GLenum target, GLuint program);
typedef void (APIENTRY * PFNGLDELETEPROGRAMSARBPROC)(GLsizei n, const GLuint* programs);
typedef void (APIENTRY * PFNGLDISABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
typedef void (APIENTRY * PFNGLENABLEVERTEXATTRIBARRAYARBPROC)(GLuint index);
typedef void (APIENTRY * PFNGLGENPROGRAMSARBPROC)(GLsizei n, GLuint* programs);
typedef void (APIENTRY * PFNGLGETPROGRAMENVPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble* params);
typedef void (APIENTRY * PFNGLGETPROGRAMENVPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat* params);
typedef void (APIENTRY * PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC)(GLenum target, GLuint index, GLdouble* params);
typedef void (APIENTRY * PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC)(GLenum target, GLuint index, GLfloat* params);
typedef void (APIENTRY * PFNGLGETPROGRAMSTRINGARBPROC)(GLenum target, GLenum pname, void* string);
typedef void (APIENTRY * PFNGLGETPROGRAMIVARBPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBPOINTERVARBPROC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBDVARBPROC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBFVARBPROC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIVARBPROC)(GLuint index, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISPROGRAMARBPROC)(GLuint program);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble* params);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat* params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETER4DARBPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETER4DVARBPROC)(GLenum target, GLuint index, const GLdouble* params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETER4FARBPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETER4FVARBPROC)(GLenum target, GLuint index, const GLfloat* params);
typedef void (APIENTRY * PFNGLPROGRAMSTRINGARBPROC)(GLenum target, GLenum format, GLsizei len, const void* string);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DARBPROC)(GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DVARBPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FARBPROC)(GLuint index, GLfloat x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FVARBPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SARBPROC)(GLuint index, GLshort x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SVARBPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DARBPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DVARBPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FARBPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FVARBPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SARBPROC)(GLuint index, GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SVARBPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DVARBPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FVARBPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SVARBPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NBVARBPROC)(GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NIVARBPROC)(GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NSVARBPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBARBPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUBVARBPROC)(GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUIVARBPROC)(GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4NUSVARBPROC)(GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4BVARBPROC)(GLuint index, const GLbyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DARBPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DVARBPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FARBPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FVARBPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4IVARBPROC)(GLuint index, const GLint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SARBPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SVARBPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UBVARBPROC)(GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UIVARBPROC)(GLuint index, const GLuint* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4USVARBPROC)(GLuint index, const GLushort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBPOINTERARBPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void* pointer);

extern PFNGLBINDPROGRAMARBPROC glBindProgramARB;
extern PFNGLDELETEPROGRAMSARBPROC glDeleteProgramsARB;
extern PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glDisableVertexAttribArrayARB;
extern PFNGLENABLEVERTEXATTRIBARRAYARBPROC glEnableVertexAttribArrayARB;
extern PFNGLGENPROGRAMSARBPROC glGenProgramsARB;
extern PFNGLGETPROGRAMENVPARAMETERDVARBPROC glGetProgramEnvParameterdvARB;
extern PFNGLGETPROGRAMENVPARAMETERFVARBPROC glGetProgramEnvParameterfvARB;
extern PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glGetProgramLocalParameterdvARB;
extern PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glGetProgramLocalParameterfvARB;
extern PFNGLGETPROGRAMSTRINGARBPROC glGetProgramStringARB;
extern PFNGLGETPROGRAMIVARBPROC glGetProgramivARB;
extern PFNGLGETVERTEXATTRIBPOINTERVARBPROC glGetVertexAttribPointervARB;
extern PFNGLGETVERTEXATTRIBDVARBPROC glGetVertexAttribdvARB;
extern PFNGLGETVERTEXATTRIBFVARBPROC glGetVertexAttribfvARB;
extern PFNGLGETVERTEXATTRIBIVARBPROC glGetVertexAttribivARB;
extern PFNGLISPROGRAMARBPROC glIsProgramARB;
extern PFNGLPROGRAMENVPARAMETER4DARBPROC glProgramEnvParameter4dARB;
extern PFNGLPROGRAMENVPARAMETER4DVARBPROC glProgramEnvParameter4dvARB;
extern PFNGLPROGRAMENVPARAMETER4FARBPROC glProgramEnvParameter4fARB;
extern PFNGLPROGRAMENVPARAMETER4FVARBPROC glProgramEnvParameter4fvARB;
extern PFNGLPROGRAMLOCALPARAMETER4DARBPROC glProgramLocalParameter4dARB;
extern PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glProgramLocalParameter4dvARB;
extern PFNGLPROGRAMLOCALPARAMETER4FARBPROC glProgramLocalParameter4fARB;
extern PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glProgramLocalParameter4fvARB;
extern PFNGLPROGRAMSTRINGARBPROC glProgramStringARB;
extern PFNGLVERTEXATTRIB1DARBPROC glVertexAttrib1dARB;
extern PFNGLVERTEXATTRIB1DVARBPROC glVertexAttrib1dvARB;
extern PFNGLVERTEXATTRIB1FARBPROC glVertexAttrib1fARB;
extern PFNGLVERTEXATTRIB1FVARBPROC glVertexAttrib1fvARB;
extern PFNGLVERTEXATTRIB1SARBPROC glVertexAttrib1sARB;
extern PFNGLVERTEXATTRIB1SVARBPROC glVertexAttrib1svARB;
extern PFNGLVERTEXATTRIB2DARBPROC glVertexAttrib2dARB;
extern PFNGLVERTEXATTRIB2DVARBPROC glVertexAttrib2dvARB;
extern PFNGLVERTEXATTRIB2FARBPROC glVertexAttrib2fARB;
extern PFNGLVERTEXATTRIB2FVARBPROC glVertexAttrib2fvARB;
extern PFNGLVERTEXATTRIB2SARBPROC glVertexAttrib2sARB;
extern PFNGLVERTEXATTRIB2SVARBPROC glVertexAttrib2svARB;
extern PFNGLVERTEXATTRIB3DARBPROC glVertexAttrib3dARB;
extern PFNGLVERTEXATTRIB3DVARBPROC glVertexAttrib3dvARB;
extern PFNGLVERTEXATTRIB3FARBPROC glVertexAttrib3fARB;
extern PFNGLVERTEXATTRIB3FVARBPROC glVertexAttrib3fvARB;
extern PFNGLVERTEXATTRIB3SARBPROC glVertexAttrib3sARB;
extern PFNGLVERTEXATTRIB3SVARBPROC glVertexAttrib3svARB;
extern PFNGLVERTEXATTRIB4NBVARBPROC glVertexAttrib4NbvARB;
extern PFNGLVERTEXATTRIB4NIVARBPROC glVertexAttrib4NivARB;
extern PFNGLVERTEXATTRIB4NSVARBPROC glVertexAttrib4NsvARB;
extern PFNGLVERTEXATTRIB4NUBARBPROC glVertexAttrib4NubARB;
extern PFNGLVERTEXATTRIB4NUBVARBPROC glVertexAttrib4NubvARB;
extern PFNGLVERTEXATTRIB4NUIVARBPROC glVertexAttrib4NuivARB;
extern PFNGLVERTEXATTRIB4NUSVARBPROC glVertexAttrib4NusvARB;
extern PFNGLVERTEXATTRIB4BVARBPROC glVertexAttrib4bvARB;
extern PFNGLVERTEXATTRIB4DARBPROC glVertexAttrib4dARB;
extern PFNGLVERTEXATTRIB4DVARBPROC glVertexAttrib4dvARB;
extern PFNGLVERTEXATTRIB4FARBPROC glVertexAttrib4fARB;
extern PFNGLVERTEXATTRIB4FVARBPROC glVertexAttrib4fvARB;
extern PFNGLVERTEXATTRIB4IVARBPROC glVertexAttrib4ivARB;
extern PFNGLVERTEXATTRIB4SARBPROC glVertexAttrib4sARB;
extern PFNGLVERTEXATTRIB4SVARBPROC glVertexAttrib4svARB;
extern PFNGLVERTEXATTRIB4UBVARBPROC glVertexAttrib4ubvARB;
extern PFNGLVERTEXATTRIB4UIVARBPROC glVertexAttrib4uivARB;
extern PFNGLVERTEXATTRIB4USVARBPROC glVertexAttrib4usvARB;
extern PFNGLVERTEXATTRIBPOINTERARBPROC glVertexAttribPointerARB;

// GL_ARB_vertex_shader

#ifndef GL_VERTEX_SHADER_ARB
    #define GL_VERTEX_SHADER_ARB 0x8B31
#endif
#ifndef GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB
    #define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#endif
#ifndef GL_MAX_VARYING_FLOATS_ARB
    #define GL_MAX_VARYING_FLOATS_ARB 0x8B4B
#endif
#ifndef GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB
    #define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#endif
#ifndef GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB
    #define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#endif
#ifndef GL_OBJECT_ACTIVE_ATTRIBUTES_ARB
    #define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB 0x8B89
#endif
#ifndef GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB
    #define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A
#endif

typedef void (APIENTRY * PFNGLBINDATTRIBLOCATIONARBPROC)(GLhandleARB programObj, GLuint index, const GLcharARB* name);
typedef void (APIENTRY * PFNGLGETACTIVEATTRIBARBPROC)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint *size, GLenum *type, GLcharARB *name);
typedef GLint (APIENTRY * PFNGLGETATTRIBLOCATIONARBPROC)(GLhandleARB programObj, const GLcharARB* name);

extern PFNGLBINDATTRIBLOCATIONARBPROC glBindAttribLocationARB;
extern PFNGLGETACTIVEATTRIBARBPROC glGetActiveAttribARB;
extern PFNGLGETATTRIBLOCATIONARBPROC glGetAttribLocationARB;

// GL_ARB_vertex_type_2_10_10_10_rev

#ifndef GL_UNSIGNED_INT_2_10_10_10_REV
    #define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#endif
#ifndef GL_INT_2_10_10_10_REV
    #define GL_INT_2_10_10_10_REV 0x8D9F
#endif

typedef void (APIENTRY * PFNGLCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (APIENTRY * PFNGLCOLORP3UIVPROC)(GLenum type, const GLuint* color);
typedef void (APIENTRY * PFNGLCOLORP4UIPROC)(GLenum type, GLuint color);
typedef void (APIENTRY * PFNGLCOLORP4UIVPROC)(GLenum type, const GLuint* color);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP1UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP1UIVPROC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP2UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP2UIVPROC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP3UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP3UIVPROC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP4UIPROC)(GLenum texture, GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLMULTITEXCOORDP4UIVPROC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLNORMALP3UIPROC)(GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLNORMALP3UIVPROC)(GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLSECONDARYCOLORP3UIPROC)(GLenum type, GLuint color);
typedef void (APIENTRY * PFNGLSECONDARYCOLORP3UIVPROC)(GLenum type, const GLuint* color);
typedef void (APIENTRY * PFNGLTEXCOORDP1UIPROC)(GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLTEXCOORDP1UIVPROC)(GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLTEXCOORDP2UIPROC)(GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLTEXCOORDP2UIVPROC)(GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLTEXCOORDP3UIPROC)(GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLTEXCOORDP3UIVPROC)(GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLTEXCOORDP4UIPROC)(GLenum type, GLuint coords);
typedef void (APIENTRY * PFNGLTEXCOORDP4UIVPROC)(GLenum type, const GLuint* coords);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP1UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP1UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP2UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP2UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP3UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP3UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP4UIPROC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBP4UIVPROC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXP2UIPROC)(GLenum type, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXP2UIVPROC)(GLenum type, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXP3UIPROC)(GLenum type, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXP3UIVPROC)(GLenum type, const GLuint* value);
typedef void (APIENTRY * PFNGLVERTEXP4UIPROC)(GLenum type, GLuint value);
typedef void (APIENTRY * PFNGLVERTEXP4UIVPROC)(GLenum type, const GLuint* value);

extern PFNGLCOLORP3UIPROC glColorP3ui;
extern PFNGLCOLORP3UIVPROC glColorP3uiv;
extern PFNGLCOLORP4UIPROC glColorP4ui;
extern PFNGLCOLORP4UIVPROC glColorP4uiv;
extern PFNGLMULTITEXCOORDP1UIPROC glMultiTexCoordP1ui;
extern PFNGLMULTITEXCOORDP1UIVPROC glMultiTexCoordP1uiv;
extern PFNGLMULTITEXCOORDP2UIPROC glMultiTexCoordP2ui;
extern PFNGLMULTITEXCOORDP2UIVPROC glMultiTexCoordP2uiv;
extern PFNGLMULTITEXCOORDP3UIPROC glMultiTexCoordP3ui;
extern PFNGLMULTITEXCOORDP3UIVPROC glMultiTexCoordP3uiv;
extern PFNGLMULTITEXCOORDP4UIPROC glMultiTexCoordP4ui;
extern PFNGLMULTITEXCOORDP4UIVPROC glMultiTexCoordP4uiv;
extern PFNGLNORMALP3UIPROC glNormalP3ui;
extern PFNGLNORMALP3UIVPROC glNormalP3uiv;
extern PFNGLSECONDARYCOLORP3UIPROC glSecondaryColorP3ui;
extern PFNGLSECONDARYCOLORP3UIVPROC glSecondaryColorP3uiv;
extern PFNGLTEXCOORDP1UIPROC glTexCoordP1ui;
extern PFNGLTEXCOORDP1UIVPROC glTexCoordP1uiv;
extern PFNGLTEXCOORDP2UIPROC glTexCoordP2ui;
extern PFNGLTEXCOORDP2UIVPROC glTexCoordP2uiv;
extern PFNGLTEXCOORDP3UIPROC glTexCoordP3ui;
extern PFNGLTEXCOORDP3UIVPROC glTexCoordP3uiv;
extern PFNGLTEXCOORDP4UIPROC glTexCoordP4ui;
extern PFNGLTEXCOORDP4UIVPROC glTexCoordP4uiv;
extern PFNGLVERTEXATTRIBP1UIPROC glVertexAttribP1ui;
extern PFNGLVERTEXATTRIBP1UIVPROC glVertexAttribP1uiv;
extern PFNGLVERTEXATTRIBP2UIPROC glVertexAttribP2ui;
extern PFNGLVERTEXATTRIBP2UIVPROC glVertexAttribP2uiv;
extern PFNGLVERTEXATTRIBP3UIPROC glVertexAttribP3ui;
extern PFNGLVERTEXATTRIBP3UIVPROC glVertexAttribP3uiv;
extern PFNGLVERTEXATTRIBP4UIPROC glVertexAttribP4ui;
extern PFNGLVERTEXATTRIBP4UIVPROC glVertexAttribP4uiv;
extern PFNGLVERTEXP2UIPROC glVertexP2ui;
extern PFNGLVERTEXP2UIVPROC glVertexP2uiv;
extern PFNGLVERTEXP3UIPROC glVertexP3ui;
extern PFNGLVERTEXP3UIVPROC glVertexP3uiv;
extern PFNGLVERTEXP4UIPROC glVertexP4ui;
extern PFNGLVERTEXP4UIVPROC glVertexP4uiv;

// GL_ARB_viewport_array

#ifndef GL_DEPTH_RANGE
    #define GL_DEPTH_RANGE 0x0B70
#endif
#ifndef GL_VIEWPORT
    #define GL_VIEWPORT 0x0BA2
#endif
#ifndef GL_SCISSOR_BOX
    #define GL_SCISSOR_BOX 0x0C10
#endif
#ifndef GL_SCISSOR_TEST
    #define GL_SCISSOR_TEST 0x0C11
#endif
#ifndef GL_MAX_VIEWPORTS
    #define GL_MAX_VIEWPORTS 0x825B
#endif
#ifndef GL_VIEWPORT_SUBPIXEL_BITS
    #define GL_VIEWPORT_SUBPIXEL_BITS 0x825C
#endif
#ifndef GL_VIEWPORT_BOUNDS_RANGE
    #define GL_VIEWPORT_BOUNDS_RANGE 0x825D
#endif
#ifndef GL_LAYER_PROVOKING_VERTEX
    #define GL_LAYER_PROVOKING_VERTEX 0x825E
#endif
#ifndef GL_VIEWPORT_INDEX_PROVOKING_VERTEX
    #define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#endif
#ifndef GL_UNDEFINED_VERTEX
    #define GL_UNDEFINED_VERTEX 0x8260
#endif
#ifndef GL_FIRST_VERTEX_CONVENTION
    #define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#endif
#ifndef GL_LAST_VERTEX_CONVENTION
    #define GL_LAST_VERTEX_CONVENTION 0x8E4E
#endif
#ifndef GL_PROVOKING_VERTEX
    #define GL_PROVOKING_VERTEX 0x8E4F
#endif

typedef void (APIENTRY * PFNGLDEPTHRANGEARRAYVPROC)(GLuint first, GLsizei count, const GLclampd * v);
typedef void (APIENTRY * PFNGLDEPTHRANGEINDEXEDPROC)(GLuint index, GLclampd n, GLclampd f);
typedef void (APIENTRY * PFNGLGETDOUBLEI_VPROC)(GLenum target, GLuint index, GLdouble* data);
typedef void (APIENTRY * PFNGLGETFLOATI_VPROC)(GLenum target, GLuint index, GLfloat* data);
typedef void (APIENTRY * PFNGLSCISSORARRAYVPROC)(GLuint first, GLsizei count, const GLint * v);
typedef void (APIENTRY * PFNGLSCISSORINDEXEDPROC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLSCISSORINDEXEDVPROC)(GLuint index, const GLint * v);
typedef void (APIENTRY * PFNGLVIEWPORTARRAYVPROC)(GLuint first, GLsizei count, const GLfloat * v);
typedef void (APIENTRY * PFNGLVIEWPORTINDEXEDFPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (APIENTRY * PFNGLVIEWPORTINDEXEDFVPROC)(GLuint index, const GLfloat * v);

extern PFNGLDEPTHRANGEARRAYVPROC glDepthRangeArrayv;
extern PFNGLDEPTHRANGEINDEXEDPROC glDepthRangeIndexed;
extern PFNGLGETDOUBLEI_VPROC glGetDoublei_v;
extern PFNGLGETFLOATI_VPROC glGetFloati_v;
extern PFNGLSCISSORARRAYVPROC glScissorArrayv;
extern PFNGLSCISSORINDEXEDPROC glScissorIndexed;
extern PFNGLSCISSORINDEXEDVPROC glScissorIndexedv;
extern PFNGLVIEWPORTARRAYVPROC glViewportArrayv;
extern PFNGLVIEWPORTINDEXEDFPROC glViewportIndexedf;
extern PFNGLVIEWPORTINDEXEDFVPROC glViewportIndexedfv;

// GL_ARB_window_pos


typedef void (APIENTRY * PFNGLWINDOWPOS2DARBPROC)(GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLWINDOWPOS2DVARBPROC)(const GLdouble* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2FARBPROC)(GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLWINDOWPOS2FVARBPROC)(const GLfloat* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2IARBPROC)(GLint x, GLint y);
typedef void (APIENTRY * PFNGLWINDOWPOS2IVARBPROC)(const GLint* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2SARBPROC)(GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLWINDOWPOS2SVARBPROC)(const GLshort* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3DARBPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLWINDOWPOS3DVARBPROC)(const GLdouble* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3FARBPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLWINDOWPOS3FVARBPROC)(const GLfloat* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3IARBPROC)(GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLWINDOWPOS3IVARBPROC)(const GLint* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3SARBPROC)(GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLWINDOWPOS3SVARBPROC)(const GLshort* p);

extern PFNGLWINDOWPOS2DARBPROC glWindowPos2dARB;
extern PFNGLWINDOWPOS2DVARBPROC glWindowPos2dvARB;
extern PFNGLWINDOWPOS2FARBPROC glWindowPos2fARB;
extern PFNGLWINDOWPOS2FVARBPROC glWindowPos2fvARB;
extern PFNGLWINDOWPOS2IARBPROC glWindowPos2iARB;
extern PFNGLWINDOWPOS2IVARBPROC glWindowPos2ivARB;
extern PFNGLWINDOWPOS2SARBPROC glWindowPos2sARB;
extern PFNGLWINDOWPOS2SVARBPROC glWindowPos2svARB;
extern PFNGLWINDOWPOS3DARBPROC glWindowPos3dARB;
extern PFNGLWINDOWPOS3DVARBPROC glWindowPos3dvARB;
extern PFNGLWINDOWPOS3FARBPROC glWindowPos3fARB;
extern PFNGLWINDOWPOS3FVARBPROC glWindowPos3fvARB;
extern PFNGLWINDOWPOS3IARBPROC glWindowPos3iARB;
extern PFNGLWINDOWPOS3IVARBPROC glWindowPos3ivARB;
extern PFNGLWINDOWPOS3SARBPROC glWindowPos3sARB;
extern PFNGLWINDOWPOS3SVARBPROC glWindowPos3svARB;

// GL_ATIX_point_sprites

#ifndef GL_TEXTURE_POINT_MODE_ATIX
    #define GL_TEXTURE_POINT_MODE_ATIX 0x60B0
#endif
#ifndef GL_TEXTURE_POINT_ONE_COORD_ATIX
    #define GL_TEXTURE_POINT_ONE_COORD_ATIX 0x60B1
#endif
#ifndef GL_TEXTURE_POINT_SPRITE_ATIX
    #define GL_TEXTURE_POINT_SPRITE_ATIX 0x60B2
#endif
#ifndef GL_POINT_SPRITE_CULL_MODE_ATIX
    #define GL_POINT_SPRITE_CULL_MODE_ATIX 0x60B3
#endif
#ifndef GL_POINT_SPRITE_CULL_CENTER_ATIX
    #define GL_POINT_SPRITE_CULL_CENTER_ATIX 0x60B4
#endif
#ifndef GL_POINT_SPRITE_CULL_CLIP_ATIX
    #define GL_POINT_SPRITE_CULL_CLIP_ATIX 0x60B5
#endif

// GL_ATIX_texture_env_combine3

#ifndef GL_MODULATE_ADD_ATIX
    #define GL_MODULATE_ADD_ATIX 0x8744
#endif
#ifndef GL_MODULATE_SIGNED_ADD_ATIX
    #define GL_MODULATE_SIGNED_ADD_ATIX 0x8745
#endif
#ifndef GL_MODULATE_SUBTRACT_ATIX
    #define GL_MODULATE_SUBTRACT_ATIX 0x8746
#endif

// GL_ATIX_texture_env_route

#ifndef GL_SECONDARY_COLOR_ATIX
    #define GL_SECONDARY_COLOR_ATIX 0x8747
#endif
#ifndef GL_TEXTURE_OUTPUT_RGB_ATIX
    #define GL_TEXTURE_OUTPUT_RGB_ATIX 0x8748
#endif
#ifndef GL_TEXTURE_OUTPUT_ALPHA_ATIX
    #define GL_TEXTURE_OUTPUT_ALPHA_ATIX 0x8749
#endif

// GL_ATIX_vertex_shader_output_point_size

#ifndef GL_OUTPUT_POINT_SIZE_ATIX
    #define GL_OUTPUT_POINT_SIZE_ATIX 0x610E
#endif

// GL_ATI_draw_buffers

#ifndef GL_MAX_DRAW_BUFFERS_ATI
    #define GL_MAX_DRAW_BUFFERS_ATI 0x8824
#endif
#ifndef GL_DRAW_BUFFER0_ATI
    #define GL_DRAW_BUFFER0_ATI 0x8825
#endif
#ifndef GL_DRAW_BUFFER1_ATI
    #define GL_DRAW_BUFFER1_ATI 0x8826
#endif
#ifndef GL_DRAW_BUFFER2_ATI
    #define GL_DRAW_BUFFER2_ATI 0x8827
#endif
#ifndef GL_DRAW_BUFFER3_ATI
    #define GL_DRAW_BUFFER3_ATI 0x8828
#endif
#ifndef GL_DRAW_BUFFER4_ATI
    #define GL_DRAW_BUFFER4_ATI 0x8829
#endif
#ifndef GL_DRAW_BUFFER5_ATI
    #define GL_DRAW_BUFFER5_ATI 0x882A
#endif
#ifndef GL_DRAW_BUFFER6_ATI
    #define GL_DRAW_BUFFER6_ATI 0x882B
#endif
#ifndef GL_DRAW_BUFFER7_ATI
    #define GL_DRAW_BUFFER7_ATI 0x882C
#endif
#ifndef GL_DRAW_BUFFER8_ATI
    #define GL_DRAW_BUFFER8_ATI 0x882D
#endif
#ifndef GL_DRAW_BUFFER9_ATI
    #define GL_DRAW_BUFFER9_ATI 0x882E
#endif
#ifndef GL_DRAW_BUFFER10_ATI
    #define GL_DRAW_BUFFER10_ATI 0x882F
#endif
#ifndef GL_DRAW_BUFFER11_ATI
    #define GL_DRAW_BUFFER11_ATI 0x8830
#endif
#ifndef GL_DRAW_BUFFER12_ATI
    #define GL_DRAW_BUFFER12_ATI 0x8831
#endif
#ifndef GL_DRAW_BUFFER13_ATI
    #define GL_DRAW_BUFFER13_ATI 0x8832
#endif
#ifndef GL_DRAW_BUFFER14_ATI
    #define GL_DRAW_BUFFER14_ATI 0x8833
#endif
#ifndef GL_DRAW_BUFFER15_ATI
    #define GL_DRAW_BUFFER15_ATI 0x8834
#endif

typedef void (APIENTRY * PFNGLDRAWBUFFERSATIPROC)(GLsizei n, const GLenum* bufs);

extern PFNGLDRAWBUFFERSATIPROC glDrawBuffersATI;

// GL_ATI_element_array

#ifndef GL_ELEMENT_ARRAY_ATI
    #define GL_ELEMENT_ARRAY_ATI 0x8768
#endif
#ifndef GL_ELEMENT_ARRAY_TYPE_ATI
    #define GL_ELEMENT_ARRAY_TYPE_ATI 0x8769
#endif
#ifndef GL_ELEMENT_ARRAY_POINTER_ATI
    #define GL_ELEMENT_ARRAY_POINTER_ATI 0x876A
#endif

typedef void (APIENTRY * PFNGLDRAWELEMENTARRAYATIPROC)(GLenum mode, GLsizei count);
typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTARRAYATIPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count);
typedef void (APIENTRY * PFNGLELEMENTPOINTERATIPROC)(GLenum type, const void* pointer);

extern PFNGLDRAWELEMENTARRAYATIPROC glDrawElementArrayATI;
extern PFNGLDRAWRANGEELEMENTARRAYATIPROC glDrawRangeElementArrayATI;
extern PFNGLELEMENTPOINTERATIPROC glElementPointerATI;

// GL_ATI_envmap_bumpmap

#ifndef GL_BUMP_ROT_MATRIX_ATI
    #define GL_BUMP_ROT_MATRIX_ATI 0x8775
#endif
#ifndef GL_BUMP_ROT_MATRIX_SIZE_ATI
    #define GL_BUMP_ROT_MATRIX_SIZE_ATI 0x8776
#endif
#ifndef GL_BUMP_NUM_TEX_UNITS_ATI
    #define GL_BUMP_NUM_TEX_UNITS_ATI 0x8777
#endif
#ifndef GL_BUMP_TEX_UNITS_ATI
    #define GL_BUMP_TEX_UNITS_ATI 0x8778
#endif
#ifndef GL_DUDV_ATI
    #define GL_DUDV_ATI 0x8779
#endif
#ifndef GL_DU8DV8_ATI
    #define GL_DU8DV8_ATI 0x877A
#endif
#ifndef GL_BUMP_ENVMAP_ATI
    #define GL_BUMP_ENVMAP_ATI 0x877B
#endif
#ifndef GL_BUMP_TARGET_ATI
    #define GL_BUMP_TARGET_ATI 0x877C
#endif

typedef void (APIENTRY * PFNGLGETTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);
typedef void (APIENTRY * PFNGLGETTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);
typedef void (APIENTRY * PFNGLTEXBUMPPARAMETERFVATIPROC)(GLenum pname, GLfloat *param);
typedef void (APIENTRY * PFNGLTEXBUMPPARAMETERIVATIPROC)(GLenum pname, GLint *param);

extern PFNGLGETTEXBUMPPARAMETERFVATIPROC glGetTexBumpParameterfvATI;
extern PFNGLGETTEXBUMPPARAMETERIVATIPROC glGetTexBumpParameterivATI;
extern PFNGLTEXBUMPPARAMETERFVATIPROC glTexBumpParameterfvATI;
extern PFNGLTEXBUMPPARAMETERIVATIPROC glTexBumpParameterivATI;

// GL_ATI_fragment_shader

#ifndef GL_FRAGMENT_SHADER_ATI
    #define GL_FRAGMENT_SHADER_ATI 0x8920
#endif
#ifndef GL_REG_0_ATI
    #define GL_REG_0_ATI 0x8921
#endif
#ifndef GL_REG_1_ATI
    #define GL_REG_1_ATI 0x8922
#endif
#ifndef GL_REG_2_ATI
    #define GL_REG_2_ATI 0x8923
#endif
#ifndef GL_REG_3_ATI
    #define GL_REG_3_ATI 0x8924
#endif
#ifndef GL_REG_4_ATI
    #define GL_REG_4_ATI 0x8925
#endif
#ifndef GL_REG_5_ATI
    #define GL_REG_5_ATI 0x8926
#endif
#ifndef GL_CON_0_ATI
    #define GL_CON_0_ATI 0x8941
#endif
#ifndef GL_CON_1_ATI
    #define GL_CON_1_ATI 0x8942
#endif
#ifndef GL_CON_2_ATI
    #define GL_CON_2_ATI 0x8943
#endif
#ifndef GL_CON_3_ATI
    #define GL_CON_3_ATI 0x8944
#endif
#ifndef GL_CON_4_ATI
    #define GL_CON_4_ATI 0x8945
#endif
#ifndef GL_CON_5_ATI
    #define GL_CON_5_ATI 0x8946
#endif
#ifndef GL_CON_6_ATI
    #define GL_CON_6_ATI 0x8947
#endif
#ifndef GL_CON_7_ATI
    #define GL_CON_7_ATI 0x8948
#endif
#ifndef GL_MOV_ATI
    #define GL_MOV_ATI 0x8961
#endif
#ifndef GL_ADD_ATI
    #define GL_ADD_ATI 0x8963
#endif
#ifndef GL_MUL_ATI
    #define GL_MUL_ATI 0x8964
#endif
#ifndef GL_SUB_ATI
    #define GL_SUB_ATI 0x8965
#endif
#ifndef GL_DOT3_ATI
    #define GL_DOT3_ATI 0x8966
#endif
#ifndef GL_DOT4_ATI
    #define GL_DOT4_ATI 0x8967
#endif
#ifndef GL_MAD_ATI
    #define GL_MAD_ATI 0x8968
#endif
#ifndef GL_LERP_ATI
    #define GL_LERP_ATI 0x8969
#endif
#ifndef GL_CND_ATI
    #define GL_CND_ATI 0x896A
#endif
#ifndef GL_CND0_ATI
    #define GL_CND0_ATI 0x896B
#endif
#ifndef GL_DOT2_ADD_ATI
    #define GL_DOT2_ADD_ATI 0x896C
#endif
#ifndef GL_SECONDARY_INTERPOLATOR_ATI
    #define GL_SECONDARY_INTERPOLATOR_ATI 0x896D
#endif
#ifndef GL_NUM_FRAGMENT_REGISTERS_ATI
    #define GL_NUM_FRAGMENT_REGISTERS_ATI 0x896E
#endif
#ifndef GL_NUM_FRAGMENT_CONSTANTS_ATI
    #define GL_NUM_FRAGMENT_CONSTANTS_ATI 0x896F
#endif
#ifndef GL_NUM_PASSES_ATI
    #define GL_NUM_PASSES_ATI 0x8970
#endif
#ifndef GL_NUM_INSTRUCTIONS_PER_PASS_ATI
    #define GL_NUM_INSTRUCTIONS_PER_PASS_ATI 0x8971
#endif
#ifndef GL_NUM_INSTRUCTIONS_TOTAL_ATI
    #define GL_NUM_INSTRUCTIONS_TOTAL_ATI 0x8972
#endif
#ifndef GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI
    #define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#endif
#ifndef GL_NUM_LOOPBACK_COMPONENTS_ATI
    #define GL_NUM_LOOPBACK_COMPONENTS_ATI 0x8974
#endif
#ifndef GL_COLOR_ALPHA_PAIRING_ATI
    #define GL_COLOR_ALPHA_PAIRING_ATI 0x8975
#endif
#ifndef GL_SWIZZLE_STR_ATI
    #define GL_SWIZZLE_STR_ATI 0x8976
#endif
#ifndef GL_SWIZZLE_STQ_ATI
    #define GL_SWIZZLE_STQ_ATI 0x8977
#endif
#ifndef GL_SWIZZLE_STR_DR_ATI
    #define GL_SWIZZLE_STR_DR_ATI 0x8978
#endif
#ifndef GL_SWIZZLE_STQ_DQ_ATI
    #define GL_SWIZZLE_STQ_DQ_ATI 0x8979
#endif
#ifndef GL_SWIZZLE_STRQ_ATI
    #define GL_SWIZZLE_STRQ_ATI 0x897A
#endif
#ifndef GL_SWIZZLE_STRQ_DQ_ATI
    #define GL_SWIZZLE_STRQ_DQ_ATI 0x897B
#endif

typedef void (APIENTRY * PFNGLALPHAFRAGMENTOP1ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (APIENTRY * PFNGLALPHAFRAGMENTOP2ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (APIENTRY * PFNGLALPHAFRAGMENTOP3ATIPROC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (APIENTRY * PFNGLBEGINFRAGMENTSHADERATIPROC)(void);
typedef void (APIENTRY * PFNGLBINDFRAGMENTSHADERATIPROC)(GLuint id);
typedef void (APIENTRY * PFNGLCOLORFRAGMENTOP1ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (APIENTRY * PFNGLCOLORFRAGMENTOP2ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (APIENTRY * PFNGLCOLORFRAGMENTOP3ATIPROC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (APIENTRY * PFNGLDELETEFRAGMENTSHADERATIPROC)(GLuint id);
typedef void (APIENTRY * PFNGLENDFRAGMENTSHADERATIPROC)(void);
typedef GLuint (APIENTRY * PFNGLGENFRAGMENTSHADERSATIPROC)(GLuint range);
typedef void (APIENTRY * PFNGLPASSTEXCOORDATIPROC)(GLuint dst, GLuint coord, GLenum swizzle);
typedef void (APIENTRY * PFNGLSAMPLEMAPATIPROC)(GLuint dst, GLuint interp, GLenum swizzle);
typedef void (APIENTRY * PFNGLSETFRAGMENTSHADERCONSTANTATIPROC)(GLuint dst, const GLfloat* value);

extern PFNGLALPHAFRAGMENTOP1ATIPROC glAlphaFragmentOp1ATI;
extern PFNGLALPHAFRAGMENTOP2ATIPROC glAlphaFragmentOp2ATI;
extern PFNGLALPHAFRAGMENTOP3ATIPROC glAlphaFragmentOp3ATI;
extern PFNGLBEGINFRAGMENTSHADERATIPROC glBeginFragmentShaderATI;
extern PFNGLBINDFRAGMENTSHADERATIPROC glBindFragmentShaderATI;
extern PFNGLCOLORFRAGMENTOP1ATIPROC glColorFragmentOp1ATI;
extern PFNGLCOLORFRAGMENTOP2ATIPROC glColorFragmentOp2ATI;
extern PFNGLCOLORFRAGMENTOP3ATIPROC glColorFragmentOp3ATI;
extern PFNGLDELETEFRAGMENTSHADERATIPROC glDeleteFragmentShaderATI;
extern PFNGLENDFRAGMENTSHADERATIPROC glEndFragmentShaderATI;
extern PFNGLGENFRAGMENTSHADERSATIPROC glGenFragmentShadersATI;
extern PFNGLPASSTEXCOORDATIPROC glPassTexCoordATI;
extern PFNGLSAMPLEMAPATIPROC glSampleMapATI;
extern PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glSetFragmentShaderConstantATI;

// GL_ATI_map_object_buffer


typedef void* (APIENTRY * PFNGLMAPOBJECTBUFFERATIPROC)(GLuint buffer);
typedef void (APIENTRY * PFNGLUNMAPOBJECTBUFFERATIPROC)(GLuint buffer);

extern PFNGLMAPOBJECTBUFFERATIPROC glMapObjectBufferATI;
extern PFNGLUNMAPOBJECTBUFFERATIPROC glUnmapObjectBufferATI;

// GL_ATI_meminfo

#ifndef GL_VBO_FREE_MEMORY_ATI
    #define GL_VBO_FREE_MEMORY_ATI 0x87FB
#endif
#ifndef GL_TEXTURE_FREE_MEMORY_ATI
    #define GL_TEXTURE_FREE_MEMORY_ATI 0x87FC
#endif
#ifndef GL_RENDERBUFFER_FREE_MEMORY_ATI
    #define GL_RENDERBUFFER_FREE_MEMORY_ATI 0x87FD
#endif

// GL_ATI_pn_triangles

#ifndef GL_PN_TRIANGLES_ATI
    #define GL_PN_TRIANGLES_ATI 0x87F0
#endif
#ifndef GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI
    #define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#endif
#ifndef GL_PN_TRIANGLES_POINT_MODE_ATI
    #define GL_PN_TRIANGLES_POINT_MODE_ATI 0x87F2
#endif
#ifndef GL_PN_TRIANGLES_NORMAL_MODE_ATI
    #define GL_PN_TRIANGLES_NORMAL_MODE_ATI 0x87F3
#endif
#ifndef GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI
    #define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#endif
#ifndef GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI
    #define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#endif
#ifndef GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI
    #define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#endif
#ifndef GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI
    #define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#endif
#ifndef GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI
    #define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8
#endif

typedef void (APIENTRY * PFNGLPNTRIANGLESFATIPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLPNTRIANGLESIATIPROC)(GLenum pname, GLint param);

extern PFNGLPNTRIANGLESFATIPROC glTrianglewesfATI;
extern PFNGLPNTRIANGLESIATIPROC glTrianglewesiATI;

// GL_ATI_separate_stencil

#ifndef GL_STENCIL_BACK_FUNC_ATI
    #define GL_STENCIL_BACK_FUNC_ATI 0x8800
#endif
#ifndef GL_STENCIL_BACK_FAIL_ATI
    #define GL_STENCIL_BACK_FAIL_ATI 0x8801
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI
    #define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#endif
#ifndef GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI
    #define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803
#endif

typedef void (APIENTRY * PFNGLSTENCILFUNCSEPARATEATIPROC)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
typedef void (APIENTRY * PFNGLSTENCILOPSEPARATEATIPROC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);

extern PFNGLSTENCILFUNCSEPARATEATIPROC glStencilFuncSeparateATI;
extern PFNGLSTENCILOPSEPARATEATIPROC glStencilOpSeparateATI;

// GL_ATI_text_fragment_shader

#ifndef GL_TEXT_FRAGMENT_SHADER_ATI
    #define GL_TEXT_FRAGMENT_SHADER_ATI 0x8200
#endif

// GL_ATI_texture_compression_3dc

#ifndef GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI
    #define GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI 0x8837
#endif

// GL_ATI_texture_env_combine3

#ifndef GL_MODULATE_ADD_ATI
    #define GL_MODULATE_ADD_ATI 0x8744
#endif
#ifndef GL_MODULATE_SIGNED_ADD_ATI
    #define GL_MODULATE_SIGNED_ADD_ATI 0x8745
#endif
#ifndef GL_MODULATE_SUBTRACT_ATI
    #define GL_MODULATE_SUBTRACT_ATI 0x8746
#endif

// GL_ATI_texture_float

#ifndef GL_RGBA_FLOAT32_ATI
    #define GL_RGBA_FLOAT32_ATI 0x8814
#endif
#ifndef GL_RGB_FLOAT32_ATI
    #define GL_RGB_FLOAT32_ATI 0x8815
#endif
#ifndef GL_ALPHA_FLOAT32_ATI
    #define GL_ALPHA_FLOAT32_ATI 0x8816
#endif
#ifndef GL_INTENSITY_FLOAT32_ATI
    #define GL_INTENSITY_FLOAT32_ATI 0x8817
#endif
#ifndef GL_LUMINANCE_FLOAT32_ATI
    #define GL_LUMINANCE_FLOAT32_ATI 0x8818
#endif
#ifndef GL_LUMINANCE_ALPHA_FLOAT32_ATI
    #define GL_LUMINANCE_ALPHA_FLOAT32_ATI 0x8819
#endif
#ifndef GL_RGBA_FLOAT16_ATI
    #define GL_RGBA_FLOAT16_ATI 0x881A
#endif
#ifndef GL_RGB_FLOAT16_ATI
    #define GL_RGB_FLOAT16_ATI 0x881B
#endif
#ifndef GL_ALPHA_FLOAT16_ATI
    #define GL_ALPHA_FLOAT16_ATI 0x881C
#endif
#ifndef GL_INTENSITY_FLOAT16_ATI
    #define GL_INTENSITY_FLOAT16_ATI 0x881D
#endif
#ifndef GL_LUMINANCE_FLOAT16_ATI
    #define GL_LUMINANCE_FLOAT16_ATI 0x881E
#endif
#ifndef GL_LUMINANCE_ALPHA_FLOAT16_ATI
    #define GL_LUMINANCE_ALPHA_FLOAT16_ATI 0x881F
#endif

// GL_ATI_texture_mirror_once

#ifndef GL_MIRROR_CLAMP_ATI
    #define GL_MIRROR_CLAMP_ATI 0x8742
#endif
#ifndef GL_MIRROR_CLAMP_TO_EDGE_ATI
    #define GL_MIRROR_CLAMP_TO_EDGE_ATI 0x8743
#endif

// GL_ATI_vertex_array_object

#ifndef GL_STATIC_ATI
    #define GL_STATIC_ATI 0x8760
#endif
#ifndef GL_DYNAMIC_ATI
    #define GL_DYNAMIC_ATI 0x8761
#endif
#ifndef GL_PRESERVE_ATI
    #define GL_PRESERVE_ATI 0x8762
#endif
#ifndef GL_DISCARD_ATI
    #define GL_DISCARD_ATI 0x8763
#endif
#ifndef GL_OBJECT_BUFFER_SIZE_ATI
    #define GL_OBJECT_BUFFER_SIZE_ATI 0x8764
#endif
#ifndef GL_OBJECT_BUFFER_USAGE_ATI
    #define GL_OBJECT_BUFFER_USAGE_ATI 0x8765
#endif
#ifndef GL_ARRAY_OBJECT_BUFFER_ATI
    #define GL_ARRAY_OBJECT_BUFFER_ATI 0x8766
#endif
#ifndef GL_ARRAY_OBJECT_OFFSET_ATI
    #define GL_ARRAY_OBJECT_OFFSET_ATI 0x8767
#endif

typedef void (APIENTRY * PFNGLARRAYOBJECTATIPROC)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (APIENTRY * PFNGLFREEOBJECTBUFFERATIPROC)(GLuint buffer);
typedef void (APIENTRY * PFNGLGETARRAYOBJECTFVATIPROC)(GLenum array, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETARRAYOBJECTIVATIPROC)(GLenum array, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETOBJECTBUFFERFVATIPROC)(GLuint buffer, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETOBJECTBUFFERIVATIPROC)(GLuint buffer, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETVARIANTARRAYOBJECTFVATIPROC)(GLuint id, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETVARIANTARRAYOBJECTIVATIPROC)(GLuint id, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISOBJECTBUFFERATIPROC)(GLuint buffer);
typedef GLuint (APIENTRY * PFNGLNEWOBJECTBUFFERATIPROC)(GLsizei size, const void* pointer, GLenum usage);
typedef void (APIENTRY * PFNGLUPDATEOBJECTBUFFERATIPROC)(GLuint buffer, GLuint offset, GLsizei size, const void* pointer, GLenum preserve);
typedef void (APIENTRY * PFNGLVARIANTARRAYOBJECTATIPROC)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);

extern PFNGLARRAYOBJECTATIPROC glArrayObjectATI;
extern PFNGLFREEOBJECTBUFFERATIPROC glFreeObjectBufferATI;
extern PFNGLGETARRAYOBJECTFVATIPROC glGetArrayObjectfvATI;
extern PFNGLGETARRAYOBJECTIVATIPROC glGetArrayObjectivATI;
extern PFNGLGETOBJECTBUFFERFVATIPROC glGetObjectBufferfvATI;
extern PFNGLGETOBJECTBUFFERIVATIPROC glGetObjectBufferivATI;
extern PFNGLGETVARIANTARRAYOBJECTFVATIPROC glGetVariantArrayObjectfvATI;
extern PFNGLGETVARIANTARRAYOBJECTIVATIPROC glGetVariantArrayObjectivATI;
extern PFNGLISOBJECTBUFFERATIPROC glIsObjectBufferATI;
extern PFNGLNEWOBJECTBUFFERATIPROC glNewObjectBufferATI;
extern PFNGLUPDATEOBJECTBUFFERATIPROC glUpdateObjectBufferATI;
extern PFNGLVARIANTARRAYOBJECTATIPROC glVariantArrayObjectATI;

// GL_ATI_vertex_attrib_array_object


typedef void (APIENTRY * PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC)(GLuint index, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLVERTEXATTRIBARRAYOBJECTATIPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);

extern PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glGetVertexAttribArrayObjectfvATI;
extern PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glGetVertexAttribArrayObjectivATI;
extern PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glVertexAttribArrayObjectATI;

// GL_ATI_vertex_streams

#ifndef GL_MAX_VERTEX_STREAMS_ATI
    #define GL_MAX_VERTEX_STREAMS_ATI 0x876B
#endif
#ifndef GL_VERTEX_SOURCE_ATI
    #define GL_VERTEX_SOURCE_ATI 0x876C
#endif
#ifndef GL_VERTEX_STREAM0_ATI
    #define GL_VERTEX_STREAM0_ATI 0x876D
#endif
#ifndef GL_VERTEX_STREAM1_ATI
    #define GL_VERTEX_STREAM1_ATI 0x876E
#endif
#ifndef GL_VERTEX_STREAM2_ATI
    #define GL_VERTEX_STREAM2_ATI 0x876F
#endif
#ifndef GL_VERTEX_STREAM3_ATI
    #define GL_VERTEX_STREAM3_ATI 0x8770
#endif
#ifndef GL_VERTEX_STREAM4_ATI
    #define GL_VERTEX_STREAM4_ATI 0x8771
#endif
#ifndef GL_VERTEX_STREAM5_ATI
    #define GL_VERTEX_STREAM5_ATI 0x8772
#endif
#ifndef GL_VERTEX_STREAM6_ATI
    #define GL_VERTEX_STREAM6_ATI 0x8773
#endif
#ifndef GL_VERTEX_STREAM7_ATI
    #define GL_VERTEX_STREAM7_ATI 0x8774
#endif

typedef void (APIENTRY * PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC)(GLenum stream);
typedef void (APIENTRY * PFNGLNORMALSTREAM3BATIPROC)(GLenum stream, GLbyte x, GLbyte y, GLbyte z);
typedef void (APIENTRY * PFNGLNORMALSTREAM3BVATIPROC)(GLenum stream, const GLbyte *v);
typedef void (APIENTRY * PFNGLNORMALSTREAM3DATIPROC)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLNORMALSTREAM3DVATIPROC)(GLenum stream, const GLdouble *v);
typedef void (APIENTRY * PFNGLNORMALSTREAM3FATIPROC)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLNORMALSTREAM3FVATIPROC)(GLenum stream, const GLfloat *v);
typedef void (APIENTRY * PFNGLNORMALSTREAM3IATIPROC)(GLenum stream, GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLNORMALSTREAM3IVATIPROC)(GLenum stream, const GLint *v);
typedef void (APIENTRY * PFNGLNORMALSTREAM3SATIPROC)(GLenum stream, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLNORMALSTREAM3SVATIPROC)(GLenum stream, const GLshort *v);
typedef void (APIENTRY * PFNGLVERTEXBLENDENVFATIPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLVERTEXBLENDENVIATIPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2DATIPROC)(GLenum stream, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2DVATIPROC)(GLenum stream, const GLdouble *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2FATIPROC)(GLenum stream, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2FVATIPROC)(GLenum stream, const GLfloat *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2IATIPROC)(GLenum stream, GLint x, GLint y);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2IVATIPROC)(GLenum stream, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2SATIPROC)(GLenum stream, GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLVERTEXSTREAM2SVATIPROC)(GLenum stream, const GLshort *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3DATIPROC)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3DVATIPROC)(GLenum stream, const GLdouble *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3FATIPROC)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3FVATIPROC)(GLenum stream, const GLfloat *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3IATIPROC)(GLenum stream, GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3IVATIPROC)(GLenum stream, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3SATIPROC)(GLenum stream, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLVERTEXSTREAM3SVATIPROC)(GLenum stream, const GLshort *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4DATIPROC)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4DVATIPROC)(GLenum stream, const GLdouble *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4FATIPROC)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4FVATIPROC)(GLenum stream, const GLfloat *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4IATIPROC)(GLenum stream, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4IVATIPROC)(GLenum stream, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4SATIPROC)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLVERTEXSTREAM4SVATIPROC)(GLenum stream, const GLshort *v);

extern PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glClientActiveVertexStreamATI;
extern PFNGLNORMALSTREAM3BATIPROC glNormalStream3bATI;
extern PFNGLNORMALSTREAM3BVATIPROC glNormalStream3bvATI;
extern PFNGLNORMALSTREAM3DATIPROC glNormalStream3dATI;
extern PFNGLNORMALSTREAM3DVATIPROC glNormalStream3dvATI;
extern PFNGLNORMALSTREAM3FATIPROC glNormalStream3fATI;
extern PFNGLNORMALSTREAM3FVATIPROC glNormalStream3fvATI;
extern PFNGLNORMALSTREAM3IATIPROC glNormalStream3iATI;
extern PFNGLNORMALSTREAM3IVATIPROC glNormalStream3ivATI;
extern PFNGLNORMALSTREAM3SATIPROC glNormalStream3sATI;
extern PFNGLNORMALSTREAM3SVATIPROC glNormalStream3svATI;
extern PFNGLVERTEXBLENDENVFATIPROC glVertexBlendEnvfATI;
extern PFNGLVERTEXBLENDENVIATIPROC glVertexBlendEnviATI;
extern PFNGLVERTEXSTREAM2DATIPROC glVertexStream2dATI;
extern PFNGLVERTEXSTREAM2DVATIPROC glVertexStream2dvATI;
extern PFNGLVERTEXSTREAM2FATIPROC glVertexStream2fATI;
extern PFNGLVERTEXSTREAM2FVATIPROC glVertexStream2fvATI;
extern PFNGLVERTEXSTREAM2IATIPROC glVertexStream2iATI;
extern PFNGLVERTEXSTREAM2IVATIPROC glVertexStream2ivATI;
extern PFNGLVERTEXSTREAM2SATIPROC glVertexStream2sATI;
extern PFNGLVERTEXSTREAM2SVATIPROC glVertexStream2svATI;
extern PFNGLVERTEXSTREAM3DATIPROC glVertexStream3dATI;
extern PFNGLVERTEXSTREAM3DVATIPROC glVertexStream3dvATI;
extern PFNGLVERTEXSTREAM3FATIPROC glVertexStream3fATI;
extern PFNGLVERTEXSTREAM3FVATIPROC glVertexStream3fvATI;
extern PFNGLVERTEXSTREAM3IATIPROC glVertexStream3iATI;
extern PFNGLVERTEXSTREAM3IVATIPROC glVertexStream3ivATI;
extern PFNGLVERTEXSTREAM3SATIPROC glVertexStream3sATI;
extern PFNGLVERTEXSTREAM3SVATIPROC glVertexStream3svATI;
extern PFNGLVERTEXSTREAM4DATIPROC glVertexStream4dATI;
extern PFNGLVERTEXSTREAM4DVATIPROC glVertexStream4dvATI;
extern PFNGLVERTEXSTREAM4FATIPROC glVertexStream4fATI;
extern PFNGLVERTEXSTREAM4FVATIPROC glVertexStream4fvATI;
extern PFNGLVERTEXSTREAM4IATIPROC glVertexStream4iATI;
extern PFNGLVERTEXSTREAM4IVATIPROC glVertexStream4ivATI;
extern PFNGLVERTEXSTREAM4SATIPROC glVertexStream4sATI;
extern PFNGLVERTEXSTREAM4SVATIPROC glVertexStream4svATI;

// GL_EXT_422_pixels

#ifndef GL_422_EXT
    #define GL_422_EXT 0x80CC
#endif
#ifndef GL_422_REV_EXT
    #define GL_422_REV_EXT 0x80CD
#endif
#ifndef GL_422_AVERAGE_EXT
    #define GL_422_AVERAGE_EXT 0x80CE
#endif
#ifndef GL_422_REV_AVERAGE_EXT
    #define GL_422_REV_AVERAGE_EXT 0x80CF
#endif

// GL_EXT_Cg_shader

#ifndef GL_CG_VERTEX_SHADER_EXT
    #define GL_CG_VERTEX_SHADER_EXT 0x890E
#endif
#ifndef GL_CG_FRAGMENT_SHADER_EXT
    #define GL_CG_FRAGMENT_SHADER_EXT 0x890F
#endif

// GL_EXT_abgr

#ifndef GL_ABGR_EXT
    #define GL_ABGR_EXT 0x8000
#endif

// GL_EXT_bgra

#ifndef GL_BGR_EXT
    #define GL_BGR_EXT 0x80E0
#endif
#ifndef GL_BGRA_EXT
    #define GL_BGRA_EXT 0x80E1
#endif

// GL_EXT_bindable_uniform

#ifndef GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT
    #define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT 0x8DE2
#endif
#ifndef GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT
    #define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT 0x8DE3
#endif
#ifndef GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT
    #define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT 0x8DE4
#endif
#ifndef GL_MAX_BINDABLE_UNIFORM_SIZE_EXT
    #define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT 0x8DED
#endif
#ifndef GL_UNIFORM_BUFFER_EXT
    #define GL_UNIFORM_BUFFER_EXT 0x8DEE
#endif
#ifndef GL_UNIFORM_BUFFER_BINDING_EXT
    #define GL_UNIFORM_BUFFER_BINDING_EXT 0x8DEF
#endif

typedef GLint (APIENTRY * PFNGLGETUNIFORMBUFFERSIZEEXTPROC)(GLuint program, GLint location);
typedef GLintptr (APIENTRY * PFNGLGETUNIFORMOFFSETEXTPROC)(GLuint program, GLint location);
typedef void (APIENTRY * PFNGLUNIFORMBUFFEREXTPROC)(GLuint program, GLint location, GLuint buffer);

extern PFNGLGETUNIFORMBUFFERSIZEEXTPROC glGetUniformBufferSizeEXT;
extern PFNGLGETUNIFORMOFFSETEXTPROC glGetUniformOffsetEXT;
extern PFNGLUNIFORMBUFFEREXTPROC glUniformBufferEXT;

// GL_EXT_blend_color

#ifndef GL_CONSTANT_COLOR_EXT
    #define GL_CONSTANT_COLOR_EXT 0x8001
#endif
#ifndef GL_ONE_MINUS_CONSTANT_COLOR_EXT
    #define GL_ONE_MINUS_CONSTANT_COLOR_EXT 0x8002
#endif
#ifndef GL_CONSTANT_ALPHA_EXT
    #define GL_CONSTANT_ALPHA_EXT 0x8003
#endif
#ifndef GL_ONE_MINUS_CONSTANT_ALPHA_EXT
    #define GL_ONE_MINUS_CONSTANT_ALPHA_EXT 0x8004
#endif
#ifndef GL_BLEND_COLOR_EXT
    #define GL_BLEND_COLOR_EXT 0x8005
#endif

typedef void (APIENTRY * PFNGLBLENDCOLOREXTPROC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);

extern PFNGLBLENDCOLOREXTPROC glBlendColorEXT;

// GL_EXT_blend_equation_separate

#ifndef GL_BLEND_EQUATION_RGB_EXT
    #define GL_BLEND_EQUATION_RGB_EXT 0x8009
#endif
#ifndef GL_BLEND_EQUATION_ALPHA_EXT
    #define GL_BLEND_EQUATION_ALPHA_EXT 0x883D
#endif

typedef void (APIENTRY * PFNGLBLENDEQUATIONSEPARATEEXTPROC)(GLenum modeRGB, GLenum modeAlpha);

extern PFNGLBLENDEQUATIONSEPARATEEXTPROC glBlendEquationSeparateEXT;

// GL_EXT_blend_func_separate

#ifndef GL_BLEND_DST_RGB_EXT
    #define GL_BLEND_DST_RGB_EXT 0x80C8
#endif
#ifndef GL_BLEND_SRC_RGB_EXT
    #define GL_BLEND_SRC_RGB_EXT 0x80C9
#endif
#ifndef GL_BLEND_DST_ALPHA_EXT
    #define GL_BLEND_DST_ALPHA_EXT 0x80CA
#endif
#ifndef GL_BLEND_SRC_ALPHA_EXT
    #define GL_BLEND_SRC_ALPHA_EXT 0x80CB
#endif

typedef void (APIENTRY * PFNGLBLENDFUNCSEPARATEEXTPROC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

extern PFNGLBLENDFUNCSEPARATEEXTPROC glBlendFuncSeparateEXT;

// GL_EXT_blend_minmax

#ifndef GL_FUNC_ADD_EXT
    #define GL_FUNC_ADD_EXT 0x8006
#endif
#ifndef GL_MIN_EXT
    #define GL_MIN_EXT 0x8007
#endif
#ifndef GL_MAX_EXT
    #define GL_MAX_EXT 0x8008
#endif
#ifndef GL_BLEND_EQUATION_EXT
    #define GL_BLEND_EQUATION_EXT 0x8009
#endif

typedef void (APIENTRY * PFNGLBLENDEQUATIONEXTPROC)(GLenum mode);

extern PFNGLBLENDEQUATIONEXTPROC glBlendEquationEXT;

// GL_EXT_blend_subtract

#ifndef GL_FUNC_SUBTRACT_EXT
    #define GL_FUNC_SUBTRACT_EXT 0x800A
#endif
#ifndef GL_FUNC_REVERSE_SUBTRACT_EXT
    #define GL_FUNC_REVERSE_SUBTRACT_EXT 0x800B
#endif

// GL_EXT_clip_volume_hint

#ifndef GL_CLIP_VOLUME_CLIPPING_HINT_EXT
    #define GL_CLIP_VOLUME_CLIPPING_HINT_EXT 0x80F0
#endif

// GL_EXT_cmyka

#ifndef GL_CMYK_EXT
    #define GL_CMYK_EXT 0x800C
#endif
#ifndef GL_CMYKA_EXT
    #define GL_CMYKA_EXT 0x800D
#endif
#ifndef GL_PACK_CMYK_HINT_EXT
    #define GL_PACK_CMYK_HINT_EXT 0x800E
#endif
#ifndef GL_UNPACK_CMYK_HINT_EXT
    #define GL_UNPACK_CMYK_HINT_EXT 0x800F
#endif

// GL_EXT_color_subtable


typedef void (APIENTRY * PFNGLCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const void* data);
typedef void (APIENTRY * PFNGLCOPYCOLORSUBTABLEEXTPROC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);

extern PFNGLCOLORSUBTABLEEXTPROC glColorSubTableEXT;
extern PFNGLCOPYCOLORSUBTABLEEXTPROC glCopyColorSubTableEXT;

// GL_EXT_compiled_vertex_array

#ifndef GL_ARRAY_ELEMENT_LOCK_FIRST_EXT
    #define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT 0x81A8
#endif
#ifndef GL_ARRAY_ELEMENT_LOCK_COUNT_EXT
    #define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT 0x81A9
#endif

typedef void (APIENTRY * PFNGLLOCKARRAYSEXTPROC)(GLint first, GLsizei count);
typedef void (APIENTRY * PFNGLUNLOCKARRAYSEXTPROC)(void);

extern PFNGLLOCKARRAYSEXTPROC glLockArraysEXT;
extern PFNGLUNLOCKARRAYSEXTPROC glUnlockArraysEXT;

// GL_EXT_convolution

#ifndef GL_CONVOLUTION_1D_EXT
    #define GL_CONVOLUTION_1D_EXT 0x8010
#endif
#ifndef GL_CONVOLUTION_2D_EXT
    #define GL_CONVOLUTION_2D_EXT 0x8011
#endif
#ifndef GL_SEPARABLE_2D_EXT
    #define GL_SEPARABLE_2D_EXT 0x8012
#endif
#ifndef GL_CONVOLUTION_BORDER_MODE_EXT
    #define GL_CONVOLUTION_BORDER_MODE_EXT 0x8013
#endif
#ifndef GL_CONVOLUTION_FILTER_SCALE_EXT
    #define GL_CONVOLUTION_FILTER_SCALE_EXT 0x8014
#endif
#ifndef GL_CONVOLUTION_FILTER_BIAS_EXT
    #define GL_CONVOLUTION_FILTER_BIAS_EXT 0x8015
#endif
#ifndef GL_REDUCE_EXT
    #define GL_REDUCE_EXT 0x8016
#endif
#ifndef GL_CONVOLUTION_FORMAT_EXT
    #define GL_CONVOLUTION_FORMAT_EXT 0x8017
#endif
#ifndef GL_CONVOLUTION_WIDTH_EXT
    #define GL_CONVOLUTION_WIDTH_EXT 0x8018
#endif
#ifndef GL_CONVOLUTION_HEIGHT_EXT
    #define GL_CONVOLUTION_HEIGHT_EXT 0x8019
#endif
#ifndef GL_MAX_CONVOLUTION_WIDTH_EXT
    #define GL_MAX_CONVOLUTION_WIDTH_EXT 0x801A
#endif
#ifndef GL_MAX_CONVOLUTION_HEIGHT_EXT
    #define GL_MAX_CONVOLUTION_HEIGHT_EXT 0x801B
#endif
#ifndef GL_POST_CONVOLUTION_RED_SCALE_EXT
    #define GL_POST_CONVOLUTION_RED_SCALE_EXT 0x801C
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_SCALE_EXT
    #define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_SCALE_EXT
    #define GL_POST_CONVOLUTION_BLUE_SCALE_EXT 0x801E
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_SCALE_EXT
    #define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#endif
#ifndef GL_POST_CONVOLUTION_RED_BIAS_EXT
    #define GL_POST_CONVOLUTION_RED_BIAS_EXT 0x8020
#endif
#ifndef GL_POST_CONVOLUTION_GREEN_BIAS_EXT
    #define GL_POST_CONVOLUTION_GREEN_BIAS_EXT 0x8021
#endif
#ifndef GL_POST_CONVOLUTION_BLUE_BIAS_EXT
    #define GL_POST_CONVOLUTION_BLUE_BIAS_EXT 0x8022
#endif
#ifndef GL_POST_CONVOLUTION_ALPHA_BIAS_EXT
    #define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT 0x8023
#endif

typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER1DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void* image);
typedef void (APIENTRY * PFNGLCONVOLUTIONFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* image);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFEXTPROC)(GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIEXTPROC)(GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLCONVOLUTIONPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONFILTEREXTPROC)(GLenum target, GLenum format, GLenum type, void* image);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETSEPARABLEFILTEREXTPROC)(GLenum target, GLenum format, GLenum type, void* row, void* column, void* span);
typedef void (APIENTRY * PFNGLSEPARABLEFILTER2DEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* row, const void* column);

extern PFNGLCONVOLUTIONFILTER1DEXTPROC glConvolutionFilter1DEXT;
extern PFNGLCONVOLUTIONFILTER2DEXTPROC glConvolutionFilter2DEXT;
extern PFNGLCONVOLUTIONPARAMETERFEXTPROC glConvolutionParameterfEXT;
extern PFNGLCONVOLUTIONPARAMETERFVEXTPROC glConvolutionParameterfvEXT;
extern PFNGLCONVOLUTIONPARAMETERIEXTPROC glConvolutionParameteriEXT;
extern PFNGLCONVOLUTIONPARAMETERIVEXTPROC glConvolutionParameterivEXT;
extern PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glCopyConvolutionFilter1DEXT;
extern PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glCopyConvolutionFilter2DEXT;
extern PFNGLGETCONVOLUTIONFILTEREXTPROC glGetConvolutionFilterEXT;
extern PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glGetConvolutionParameterfvEXT;
extern PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glGetConvolutionParameterivEXT;
extern PFNGLGETSEPARABLEFILTEREXTPROC glGetSeparableFilterEXT;
extern PFNGLSEPARABLEFILTER2DEXTPROC glSeparableFilter2DEXT;

// GL_EXT_coordinate_frame

#ifndef GL_TANGENT_ARRAY_EXT
    #define GL_TANGENT_ARRAY_EXT 0x8439
#endif
#ifndef GL_BINORMAL_ARRAY_EXT
    #define GL_BINORMAL_ARRAY_EXT 0x843A
#endif
#ifndef GL_CURRENT_TANGENT_EXT
    #define GL_CURRENT_TANGENT_EXT 0x843B
#endif
#ifndef GL_CURRENT_BINORMAL_EXT
    #define GL_CURRENT_BINORMAL_EXT 0x843C
#endif
#ifndef GL_TANGENT_ARRAY_TYPE_EXT
    #define GL_TANGENT_ARRAY_TYPE_EXT 0x843E
#endif
#ifndef GL_TANGENT_ARRAY_STRIDE_EXT
    #define GL_TANGENT_ARRAY_STRIDE_EXT 0x843F
#endif
#ifndef GL_BINORMAL_ARRAY_TYPE_EXT
    #define GL_BINORMAL_ARRAY_TYPE_EXT 0x8440
#endif
#ifndef GL_BINORMAL_ARRAY_STRIDE_EXT
    #define GL_BINORMAL_ARRAY_STRIDE_EXT 0x8441
#endif
#ifndef GL_TANGENT_ARRAY_POINTER_EXT
    #define GL_TANGENT_ARRAY_POINTER_EXT 0x8442
#endif
#ifndef GL_BINORMAL_ARRAY_POINTER_EXT
    #define GL_BINORMAL_ARRAY_POINTER_EXT 0x8443
#endif
#ifndef GL_MAP1_TANGENT_EXT
    #define GL_MAP1_TANGENT_EXT 0x8444
#endif
#ifndef GL_MAP2_TANGENT_EXT
    #define GL_MAP2_TANGENT_EXT 0x8445
#endif
#ifndef GL_MAP1_BINORMAL_EXT
    #define GL_MAP1_BINORMAL_EXT 0x8446
#endif
#ifndef GL_MAP2_BINORMAL_EXT
    #define GL_MAP2_BINORMAL_EXT 0x8447
#endif

typedef void (APIENTRY * PFNGLBINORMALPOINTEREXTPROC)(GLenum type, GLsizei stride, void* pointer);
typedef void (APIENTRY * PFNGLTANGENTPOINTEREXTPROC)(GLenum type, GLsizei stride, void* pointer);

extern PFNGLBINORMALPOINTEREXTPROC glBinormalPointerEXT;
extern PFNGLTANGENTPOINTEREXTPROC glTangentPointerEXT;

// GL_EXT_copy_texture


typedef void (APIENTRY * PFNGLCOPYTEXIMAGE1DEXTPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRY * PFNGLCOPYTEXIMAGE2DEXTPROC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRY * PFNGLCOPYTEXSUBIMAGE1DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYTEXSUBIMAGE2DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLCOPYTEXSUBIMAGE3DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

extern PFNGLCOPYTEXIMAGE1DEXTPROC glCopyTexImage1DEXT;
extern PFNGLCOPYTEXIMAGE2DEXTPROC glCopyTexImage2DEXT;
extern PFNGLCOPYTEXSUBIMAGE1DEXTPROC glCopyTexSubImage1DEXT;
extern PFNGLCOPYTEXSUBIMAGE2DEXTPROC glCopyTexSubImage2DEXT;
extern PFNGLCOPYTEXSUBIMAGE3DEXTPROC glCopyTexSubImage3DEXT;

// GL_EXT_cull_vertex

#ifndef GL_CULL_VERTEX_EXT
    #define GL_CULL_VERTEX_EXT 0x81AA
#endif
#ifndef GL_CULL_VERTEX_EYE_POSITION_EXT
    #define GL_CULL_VERTEX_EYE_POSITION_EXT 0x81AB
#endif
#ifndef GL_CULL_VERTEX_OBJECT_POSITION_EXT
    #define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC
#endif

typedef void (APIENTRY * PFNGLCULLPARAMETERDVEXTPROC)(GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLCULLPARAMETERFVEXTPROC)(GLenum pname, GLfloat* params);

extern PFNGLCULLPARAMETERDVEXTPROC glCullParameterdvEXT;
extern PFNGLCULLPARAMETERFVEXTPROC glCullParameterfvEXT;

// GL_EXT_depth_bounds_test

#ifndef GL_DEPTH_BOUNDS_TEST_EXT
    #define GL_DEPTH_BOUNDS_TEST_EXT 0x8890
#endif
#ifndef GL_DEPTH_BOUNDS_EXT
    #define GL_DEPTH_BOUNDS_EXT 0x8891
#endif

typedef void (APIENTRY * PFNGLDEPTHBOUNDSEXTPROC)(GLclampd zmin, GLclampd zmax);

extern PFNGLDEPTHBOUNDSEXTPROC glDepthBoundsEXT;

// GL_EXT_direct_state_access

#ifndef GL_PROGRAM_MATRIX_EXT
    #define GL_PROGRAM_MATRIX_EXT 0x8E2D
#endif
#ifndef GL_TRANSPOSE_PROGRAM_MATRIX_EXT
    #define GL_TRANSPOSE_PROGRAM_MATRIX_EXT 0x8E2E
#endif
#ifndef GL_PROGRAM_MATRIX_STACK_DEPTH_EXT
    #define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F
#endif

typedef void (APIENTRY * PFNGLBINDMULTITEXTUREEXTPROC)(GLenum texunit, GLenum target, GLuint texture);
typedef GLenum (APIENTRY * PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC)(GLuint framebuffer, GLenum target);
typedef void (APIENTRY * PFNGLCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield mask);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
typedef void (APIENTRY * PFNGLCOPYMULTITEXIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRY * PFNGLCOPYMULTITEXIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRY * PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLCOPYTEXTUREIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (APIENTRY * PFNGLCOPYTEXTUREIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (APIENTRY * PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC)(GLenum array, GLuint index);
typedef void (APIENTRY * PFNGLDISABLECLIENTSTATEIEXTPROC)(GLenum array, GLuint index);
typedef void (APIENTRY * PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC)(GLuint vaobj, GLuint index);
typedef void (APIENTRY * PFNGLDISABLEVERTEXARRAYEXTPROC)(GLuint vaobj, GLenum array);
typedef void (APIENTRY * PFNGLENABLECLIENTSTATEINDEXEDEXTPROC)(GLenum array, GLuint index);
typedef void (APIENTRY * PFNGLENABLECLIENTSTATEIEXTPROC)(GLenum array, GLuint index);
typedef void (APIENTRY * PFNGLENABLEVERTEXARRAYATTRIBEXTPROC)(GLuint vaobj, GLuint index);
typedef void (APIENTRY * PFNGLENABLEVERTEXARRAYEXTPROC)(GLuint vaobj, GLenum array);
typedef void (APIENTRY * PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (APIENTRY * PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC)(GLuint framebuffer, GLenum mode);
typedef void (APIENTRY * PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC)(GLuint framebuffer, GLsizei n, const GLenum* bufs);
typedef void (APIENTRY * PFNGLFRAMEBUFFERREADBUFFEREXTPROC)(GLuint framebuffer, GLenum mode);
typedef void (APIENTRY * PFNGLGENERATEMULTITEXMIPMAPEXTPROC)(GLenum texunit, GLenum target);
typedef void (APIENTRY * PFNGLGENERATETEXTUREMIPMAPEXTPROC)(GLuint texture, GLenum target);
typedef void (APIENTRY * PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC)(GLenum texunit, GLenum target, GLint level, void* img);
typedef void (APIENTRY * PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC)(GLuint texture, GLenum target, GLint level, void* img);
typedef void (APIENTRY * PFNGLGETDOUBLEINDEXEDVEXTPROC)(GLenum target, GLuint index, GLdouble* params);
typedef void (APIENTRY * PFNGLGETDOUBLEI_VEXTPROC)(GLenum pname, GLuint index, GLdouble* params);
typedef void (APIENTRY * PFNGLGETFLOATINDEXEDVEXTPROC)(GLenum target, GLuint index, GLfloat* params);
typedef void (APIENTRY * PFNGLGETFLOATI_VEXTPROC)(GLenum pname, GLuint index, GLfloat* params);
typedef void (APIENTRY * PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC)(GLuint framebuffer, GLenum pname, GLint* param);
typedef void (APIENTRY * PFNGLGETMULTITEXENVFVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMULTITEXENVIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMULTITEXGENDVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLGETMULTITEXGENFVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMULTITEXGENIVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMULTITEXIMAGEEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, void* pixels);
typedef void (APIENTRY * PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMULTITEXPARAMETERIIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMULTITEXPARAMETERIUIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETMULTITEXPARAMETERFVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMULTITEXPARAMETERIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC)(GLuint buffer, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETNAMEDBUFFERPOINTERVEXTPROC)(GLuint buffer, GLenum pname, void** params);
typedef void (APIENTRY * PFNGLGETNAMEDBUFFERSUBDATAEXTPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, void* data);
typedef void (APIENTRY * PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC)(GLuint program, GLenum target, GLuint index, GLint* params);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC)(GLuint program, GLenum target, GLuint index, GLuint* params);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC)(GLuint program, GLenum target, GLuint index, GLdouble* params);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC)(GLuint program, GLenum target, GLuint index, GLfloat* params);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMSTRINGEXTPROC)(GLuint program, GLenum target, GLenum pname, void* string);
typedef void (APIENTRY * PFNGLGETNAMEDPROGRAMIVEXTPROC)(GLuint program, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC)(GLuint renderbuffer, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETPOINTERINDEXEDVEXTPROC)(GLenum target, GLuint index, GLvoid** params);
typedef void (APIENTRY * PFNGLGETPOINTERI_VEXTPROC)(GLenum pname, GLuint index, GLvoid** params);
typedef void (APIENTRY * PFNGLGETTEXTUREIMAGEEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, void* pixels);
typedef void (APIENTRY * PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETTEXTUREPARAMETERIIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETTEXTUREPARAMETERIUIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLGETTEXTUREPARAMETERFVEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETTEXTUREPARAMETERIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC)(GLuint vaobj, GLuint index, GLenum pname, GLint* param);
typedef void (APIENTRY * PFNGLGETVERTEXARRAYINTEGERVEXTPROC)(GLuint vaobj, GLenum pname, GLint* param);
typedef void (APIENTRY * PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC)(GLuint vaobj, GLuint index, GLenum pname, GLvoid** param);
typedef void (APIENTRY * PFNGLGETVERTEXARRAYPOINTERVEXTPROC)(GLuint vaobj, GLenum pname, GLvoid** param);
typedef GLvoid (APIENTRY * PFNGLMAPNAMEDBUFFEREXTPROC)(GLuint buffer, GLenum access);
typedef GLvoid (APIENTRY * PFNGLMAPNAMEDBUFFERRANGEEXTPROC)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (APIENTRY * PFNGLMATRIXFRUSTUMEXTPROC)(GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
typedef void (APIENTRY * PFNGLMATRIXLOADIDENTITYEXTPROC)(GLenum matrixMode);
typedef void (APIENTRY * PFNGLMATRIXLOADTRANSPOSEDEXTPROC)(GLenum matrixMode, const GLdouble* m);
typedef void (APIENTRY * PFNGLMATRIXLOADTRANSPOSEFEXTPROC)(GLenum matrixMode, const GLfloat* m);
typedef void (APIENTRY * PFNGLMATRIXLOADDEXTPROC)(GLenum matrixMode, const GLdouble* m);
typedef void (APIENTRY * PFNGLMATRIXLOADFEXTPROC)(GLenum matrixMode, const GLfloat* m);
typedef void (APIENTRY * PFNGLMATRIXMULTTRANSPOSEDEXTPROC)(GLenum matrixMode, const GLdouble* m);
typedef void (APIENTRY * PFNGLMATRIXMULTTRANSPOSEFEXTPROC)(GLenum matrixMode, const GLfloat* m);
typedef void (APIENTRY * PFNGLMATRIXMULTDEXTPROC)(GLenum matrixMode, const GLdouble* m);
typedef void (APIENTRY * PFNGLMATRIXMULTFEXTPROC)(GLenum matrixMode, const GLfloat* m);
typedef void (APIENTRY * PFNGLMATRIXORTHOEXTPROC)(GLenum matrixMode, GLdouble l, GLdouble r, GLdouble b, GLdouble t, GLdouble n, GLdouble f);
typedef void (APIENTRY * PFNGLMATRIXPOPEXTPROC)(GLenum matrixMode);
typedef void (APIENTRY * PFNGLMATRIXPUSHEXTPROC)(GLenum matrixMode);
typedef void (APIENTRY * PFNGLMATRIXROTATEDEXTPROC)(GLenum matrixMode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLMATRIXROTATEFEXTPROC)(GLenum matrixMode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLMATRIXSCALEDEXTPROC)(GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLMATRIXSCALEFEXTPROC)(GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLMATRIXTRANSLATEDEXTPROC)(GLenum matrixMode, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLMATRIXTRANSLATEFEXTPROC)(GLenum matrixMode, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLMULTITEXBUFFEREXTPROC)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (APIENTRY * PFNGLMULTITEXCOORDPOINTEREXTPROC)(GLenum texunit, GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (APIENTRY * PFNGLMULTITEXENVFEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLMULTITEXENVFVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLMULTITEXENVIEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLMULTITEXENVIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLMULTITEXGENDEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
typedef void (APIENTRY * PFNGLMULTITEXGENDVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, const GLdouble* params);
typedef void (APIENTRY * PFNGLMULTITEXGENFEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLMULTITEXGENFVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLMULTITEXGENIEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLMULTITEXGENIVEXTPROC)(GLenum texunit, GLenum coord, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLMULTITEXIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLMULTITEXIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLMULTITEXIMAGE3DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERIIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERIUIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLuint* params);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERFEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERFVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLfloat* param);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERIEXTPROC)(GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLMULTITEXPARAMETERIVEXTPROC)(GLenum texunit, GLenum target, GLenum pname, const GLint* param);
typedef void (APIENTRY * PFNGLMULTITEXRENDERBUFFEREXTPROC)(GLenum texunit, GLenum target, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLMULTITEXSUBIMAGE1DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLMULTITEXSUBIMAGE2DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLMULTITEXSUBIMAGE3DEXTPROC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLNAMEDBUFFERDATAEXTPROC)(GLuint buffer, GLsizeiptr size, const void* data, GLenum usage);
typedef void (APIENTRY * PFNGLNAMEDBUFFERSUBDATAEXTPROC)(GLuint buffer, GLintptr offset, GLsizeiptr size, const void* data);
typedef void (APIENTRY * PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void (APIENTRY * PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC)(GLuint program, GLenum target, GLuint index, const GLdouble* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC)(GLuint program, GLenum target, GLuint index, const GLfloat* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC)(GLuint program, GLenum target, GLuint index, const GLint* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC)(GLuint program, GLenum target, GLuint index, const GLuint* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint* params);
typedef void (APIENTRY * PFNGLNAMEDPROGRAMSTRINGEXTPROC)(GLuint program, GLenum target, GLenum format, GLsizei len, const void* string);
typedef void (APIENTRY * PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1FEXTPROC)(GLuint program, GLint location, GLfloat v0);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1FVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1IEXTPROC)(GLuint program, GLint location, GLint v0);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1IVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UIEXTPROC)(GLuint program, GLint location, GLuint v0);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UIVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2FEXTPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2FVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2IEXTPROC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2IVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UIEXTPROC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UIVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3FEXTPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3FVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3IEXTPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3IVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UIEXTPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UIVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4FEXTPROC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4FVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4IEXTPROC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4IVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UIEXTPROC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UIVEXTPROC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (APIENTRY * PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC)(GLbitfield mask);
typedef void (APIENTRY * PFNGLTEXTUREBUFFEREXTPROC)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (APIENTRY * PFNGLTEXTUREIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXTUREIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXTUREIMAGE3DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERIIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERIUIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, const GLuint* params);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERFEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERFVEXTPROC)(GLuint texture, GLenum target, GLenum pname, const GLfloat* param);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERIEXTPROC)(GLuint texture, GLenum target, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLTEXTUREPARAMETERIVEXTPROC)(GLuint texture, GLenum target, GLenum pname, const GLint* param);
typedef void (APIENTRY * PFNGLTEXTURERENDERBUFFEREXTPROC)(GLuint texture, GLenum target, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLTEXTURESUBIMAGE1DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXTURESUBIMAGE2DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXTURESUBIMAGE3DEXTPROC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);
typedef GLboolean (APIENTRY * PFNGLUNMAPNAMEDBUFFEREXTPROC)(GLuint buffer);
typedef void (APIENTRY * PFNGLVERTEXARRAYCOLOROFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYINDEXOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYNORMALOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);

extern PFNGLBINDMULTITEXTUREEXTPROC glBindMultiTextureEXT;
extern PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glCheckNamedFramebufferStatusEXT;
extern PFNGLCLIENTATTRIBDEFAULTEXTPROC glClientAttribDefaultEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glCompressedMultiTexImage1DEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glCompressedMultiTexImage2DEXT;
extern PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glCompressedMultiTexImage3DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glCompressedMultiTexSubImage1DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glCompressedMultiTexSubImage2DEXT;
extern PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glCompressedMultiTexSubImage3DEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glCompressedTextureImage1DEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glCompressedTextureImage2DEXT;
extern PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glCompressedTextureImage3DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glCompressedTextureSubImage1DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glCompressedTextureSubImage2DEXT;
extern PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glCompressedTextureSubImage3DEXT;
extern PFNGLCOPYMULTITEXIMAGE1DEXTPROC glCopyMultiTexImage1DEXT;
extern PFNGLCOPYMULTITEXIMAGE2DEXTPROC glCopyMultiTexImage2DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glCopyMultiTexSubImage1DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glCopyMultiTexSubImage2DEXT;
extern PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glCopyMultiTexSubImage3DEXT;
extern PFNGLCOPYTEXTUREIMAGE1DEXTPROC glCopyTextureImage1DEXT;
extern PFNGLCOPYTEXTUREIMAGE2DEXTPROC glCopyTextureImage2DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glCopyTextureSubImage1DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glCopyTextureSubImage2DEXT;
extern PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glCopyTextureSubImage3DEXT;
extern PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glDisableClientStateIndexedEXT;
extern PFNGLDISABLECLIENTSTATEIEXTPROC glDisableClientStateiEXT;
extern PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glDisableVertexArrayAttribEXT;
extern PFNGLDISABLEVERTEXARRAYEXTPROC glDisableVertexArrayEXT;
extern PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glEnableClientStateIndexedEXT;
extern PFNGLENABLECLIENTSTATEIEXTPROC glEnableClientStateiEXT;
extern PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glEnableVertexArrayAttribEXT;
extern PFNGLENABLEVERTEXARRAYEXTPROC glEnableVertexArrayEXT;
extern PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glFlushMappedNamedBufferRangeEXT;
extern PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glFramebufferDrawBufferEXT;
extern PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glFramebufferDrawBuffersEXT;
extern PFNGLFRAMEBUFFERREADBUFFEREXTPROC glFramebufferReadBufferEXT;
extern PFNGLGENERATEMULTITEXMIPMAPEXTPROC glGenerateMultiTexMipmapEXT;
extern PFNGLGENERATETEXTUREMIPMAPEXTPROC glGenerateTextureMipmapEXT;
extern PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glGetCompressedMultiTexImageEXT;
extern PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glGetCompressedTextureImageEXT;
extern PFNGLGETDOUBLEINDEXEDVEXTPROC glGetDoubleIndexedvEXT;
extern PFNGLGETDOUBLEI_VEXTPROC glGetDoublei_vEXT;
extern PFNGLGETFLOATINDEXEDVEXTPROC glGetFloatIndexedvEXT;
extern PFNGLGETFLOATI_VEXTPROC glGetFloati_vEXT;
extern PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glGetFramebufferParameterivEXT;
extern PFNGLGETMULTITEXENVFVEXTPROC glGetMultiTexEnvfvEXT;
extern PFNGLGETMULTITEXENVIVEXTPROC glGetMultiTexEnvivEXT;
extern PFNGLGETMULTITEXGENDVEXTPROC glGetMultiTexGendvEXT;
extern PFNGLGETMULTITEXGENFVEXTPROC glGetMultiTexGenfvEXT;
extern PFNGLGETMULTITEXGENIVEXTPROC glGetMultiTexGenivEXT;
extern PFNGLGETMULTITEXIMAGEEXTPROC glGetMultiTexImageEXT;
extern PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glGetMultiTexLevelParameterfvEXT;
extern PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glGetMultiTexLevelParameterivEXT;
extern PFNGLGETMULTITEXPARAMETERIIVEXTPROC glGetMultiTexParameterIivEXT;
extern PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glGetMultiTexParameterIuivEXT;
extern PFNGLGETMULTITEXPARAMETERFVEXTPROC glGetMultiTexParameterfvEXT;
extern PFNGLGETMULTITEXPARAMETERIVEXTPROC glGetMultiTexParameterivEXT;
extern PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glGetNamedBufferParameterivEXT;
extern PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glGetNamedBufferPointervEXT;
extern PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glGetNamedBufferSubDataEXT;
extern PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetNamedFramebufferAttachmentParameterivEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glGetNamedProgramLocalParameterIivEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glGetNamedProgramLocalParameterIuivEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glGetNamedProgramLocalParameterdvEXT;
extern PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glGetNamedProgramLocalParameterfvEXT;
extern PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glGetNamedProgramStringEXT;
extern PFNGLGETNAMEDPROGRAMIVEXTPROC glGetNamedProgramivEXT;
extern PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glGetNamedRenderbufferParameterivEXT;
extern PFNGLGETPOINTERINDEXEDVEXTPROC glGetPointerIndexedvEXT;
extern PFNGLGETPOINTERI_VEXTPROC glGetPointeri_vEXT;
extern PFNGLGETTEXTUREIMAGEEXTPROC glGetTextureImageEXT;
extern PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glGetTextureLevelParameterfvEXT;
extern PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glGetTextureLevelParameterivEXT;
extern PFNGLGETTEXTUREPARAMETERIIVEXTPROC glGetTextureParameterIivEXT;
extern PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glGetTextureParameterIuivEXT;
extern PFNGLGETTEXTUREPARAMETERFVEXTPROC glGetTextureParameterfvEXT;
extern PFNGLGETTEXTUREPARAMETERIVEXTPROC glGetTextureParameterivEXT;
extern PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glGetVertexArrayIntegeri_vEXT;
extern PFNGLGETVERTEXARRAYINTEGERVEXTPROC glGetVertexArrayIntegervEXT;
extern PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glGetVertexArrayPointeri_vEXT;
extern PFNGLGETVERTEXARRAYPOINTERVEXTPROC glGetVertexArrayPointervEXT;
extern PFNGLMAPNAMEDBUFFEREXTPROC glMapNamedBufferEXT;
extern PFNGLMAPNAMEDBUFFERRANGEEXTPROC glMapNamedBufferRangeEXT;
extern PFNGLMATRIXFRUSTUMEXTPROC glMatrixFrustumEXT;
extern PFNGLMATRIXLOADIDENTITYEXTPROC glMatrixLoadIdentityEXT;
extern PFNGLMATRIXLOADTRANSPOSEDEXTPROC glMatrixLoadTransposedEXT;
extern PFNGLMATRIXLOADTRANSPOSEFEXTPROC glMatrixLoadTransposefEXT;
extern PFNGLMATRIXLOADDEXTPROC glMatrixLoaddEXT;
extern PFNGLMATRIXLOADFEXTPROC glMatrixLoadfEXT;
extern PFNGLMATRIXMULTTRANSPOSEDEXTPROC glMatrixMultTransposedEXT;
extern PFNGLMATRIXMULTTRANSPOSEFEXTPROC glMatrixMultTransposefEXT;
extern PFNGLMATRIXMULTDEXTPROC glMatrixMultdEXT;
extern PFNGLMATRIXMULTFEXTPROC glMatrixMultfEXT;
extern PFNGLMATRIXORTHOEXTPROC glMatrixOrthoEXT;
extern PFNGLMATRIXPOPEXTPROC glMatrixPopEXT;
extern PFNGLMATRIXPUSHEXTPROC glMatrixPushEXT;
extern PFNGLMATRIXROTATEDEXTPROC glMatrixRotatedEXT;
extern PFNGLMATRIXROTATEFEXTPROC glMatrixRotatefEXT;
extern PFNGLMATRIXSCALEDEXTPROC glMatrixScaledEXT;
extern PFNGLMATRIXSCALEFEXTPROC glMatrixScalefEXT;
extern PFNGLMATRIXTRANSLATEDEXTPROC glMatrixTranslatedEXT;
extern PFNGLMATRIXTRANSLATEFEXTPROC glMatrixTranslatefEXT;
extern PFNGLMULTITEXBUFFEREXTPROC glMultiTexBufferEXT;
extern PFNGLMULTITEXCOORDPOINTEREXTPROC glMultiTexCoordPointerEXT;
extern PFNGLMULTITEXENVFEXTPROC glMultiTexEnvfEXT;
extern PFNGLMULTITEXENVFVEXTPROC glMultiTexEnvfvEXT;
extern PFNGLMULTITEXENVIEXTPROC glMultiTexEnviEXT;
extern PFNGLMULTITEXENVIVEXTPROC glMultiTexEnvivEXT;
extern PFNGLMULTITEXGENDEXTPROC glMultiTexGendEXT;
extern PFNGLMULTITEXGENDVEXTPROC glMultiTexGendvEXT;
extern PFNGLMULTITEXGENFEXTPROC glMultiTexGenfEXT;
extern PFNGLMULTITEXGENFVEXTPROC glMultiTexGenfvEXT;
extern PFNGLMULTITEXGENIEXTPROC glMultiTexGeniEXT;
extern PFNGLMULTITEXGENIVEXTPROC glMultiTexGenivEXT;
extern PFNGLMULTITEXIMAGE1DEXTPROC glMultiTexImage1DEXT;
extern PFNGLMULTITEXIMAGE2DEXTPROC glMultiTexImage2DEXT;
extern PFNGLMULTITEXIMAGE3DEXTPROC glMultiTexImage3DEXT;
extern PFNGLMULTITEXPARAMETERIIVEXTPROC glMultiTexParameterIivEXT;
extern PFNGLMULTITEXPARAMETERIUIVEXTPROC glMultiTexParameterIuivEXT;
extern PFNGLMULTITEXPARAMETERFEXTPROC glMultiTexParameterfEXT;
extern PFNGLMULTITEXPARAMETERFVEXTPROC glMultiTexParameterfvEXT;
extern PFNGLMULTITEXPARAMETERIEXTPROC glMultiTexParameteriEXT;
extern PFNGLMULTITEXPARAMETERIVEXTPROC glMultiTexParameterivEXT;
extern PFNGLMULTITEXRENDERBUFFEREXTPROC glMultiTexRenderbufferEXT;
extern PFNGLMULTITEXSUBIMAGE1DEXTPROC glMultiTexSubImage1DEXT;
extern PFNGLMULTITEXSUBIMAGE2DEXTPROC glMultiTexSubImage2DEXT;
extern PFNGLMULTITEXSUBIMAGE3DEXTPROC glMultiTexSubImage3DEXT;
extern PFNGLNAMEDBUFFERDATAEXTPROC glNamedBufferDataEXT;
extern PFNGLNAMEDBUFFERSUBDATAEXTPROC glNamedBufferSubDataEXT;
extern PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glNamedCopyBufferSubDataEXT;
extern PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glNamedFramebufferRenderbufferEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glNamedFramebufferTexture1DEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glNamedFramebufferTexture2DEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glNamedFramebufferTexture3DEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glNamedFramebufferTextureEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glNamedFramebufferTextureFaceEXT;
extern PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glNamedFramebufferTextureLayerEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glNamedProgramLocalParameter4dEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glNamedProgramLocalParameter4dvEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glNamedProgramLocalParameter4fEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glNamedProgramLocalParameter4fvEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glNamedProgramLocalParameterI4iEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glNamedProgramLocalParameterI4ivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glNamedProgramLocalParameterI4uiEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glNamedProgramLocalParameterI4uivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glNamedProgramLocalParameters4fvEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glNamedProgramLocalParametersI4ivEXT;
extern PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glNamedProgramLocalParametersI4uivEXT;
extern PFNGLNAMEDPROGRAMSTRINGEXTPROC glNamedProgramStringEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glNamedRenderbufferStorageEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glNamedRenderbufferStorageMultisampleCoverageEXT;
extern PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glNamedRenderbufferStorageMultisampleEXT;
extern PFNGLPROGRAMUNIFORM1FEXTPROC glProgramUniform1fEXT;
extern PFNGLPROGRAMUNIFORM1FVEXTPROC glProgramUniform1fvEXT;
extern PFNGLPROGRAMUNIFORM1IEXTPROC glProgramUniform1iEXT;
extern PFNGLPROGRAMUNIFORM1IVEXTPROC glProgramUniform1ivEXT;
extern PFNGLPROGRAMUNIFORM1UIEXTPROC glProgramUniform1uiEXT;
extern PFNGLPROGRAMUNIFORM1UIVEXTPROC glProgramUniform1uivEXT;
extern PFNGLPROGRAMUNIFORM2FEXTPROC glProgramUniform2fEXT;
extern PFNGLPROGRAMUNIFORM2FVEXTPROC glProgramUniform2fvEXT;
extern PFNGLPROGRAMUNIFORM2IEXTPROC glProgramUniform2iEXT;
extern PFNGLPROGRAMUNIFORM2IVEXTPROC glProgramUniform2ivEXT;
extern PFNGLPROGRAMUNIFORM2UIEXTPROC glProgramUniform2uiEXT;
extern PFNGLPROGRAMUNIFORM2UIVEXTPROC glProgramUniform2uivEXT;
extern PFNGLPROGRAMUNIFORM3FEXTPROC glProgramUniform3fEXT;
extern PFNGLPROGRAMUNIFORM3FVEXTPROC glProgramUniform3fvEXT;
extern PFNGLPROGRAMUNIFORM3IEXTPROC glProgramUniform3iEXT;
extern PFNGLPROGRAMUNIFORM3IVEXTPROC glProgramUniform3ivEXT;
extern PFNGLPROGRAMUNIFORM3UIEXTPROC glProgramUniform3uiEXT;
extern PFNGLPROGRAMUNIFORM3UIVEXTPROC glProgramUniform3uivEXT;
extern PFNGLPROGRAMUNIFORM4FEXTPROC glProgramUniform4fEXT;
extern PFNGLPROGRAMUNIFORM4FVEXTPROC glProgramUniform4fvEXT;
extern PFNGLPROGRAMUNIFORM4IEXTPROC glProgramUniform4iEXT;
extern PFNGLPROGRAMUNIFORM4IVEXTPROC glProgramUniform4ivEXT;
extern PFNGLPROGRAMUNIFORM4UIEXTPROC glProgramUniform4uiEXT;
extern PFNGLPROGRAMUNIFORM4UIVEXTPROC glProgramUniform4uivEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glProgramUniformMatrix2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glProgramUniformMatrix2x3fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glProgramUniformMatrix2x4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glProgramUniformMatrix3fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glProgramUniformMatrix3x2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glProgramUniformMatrix3x4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glProgramUniformMatrix4fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glProgramUniformMatrix4x2fvEXT;
extern PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glProgramUniformMatrix4x3fvEXT;
extern PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glPushClientAttribDefaultEXT;
extern PFNGLTEXTUREBUFFEREXTPROC glTextureBufferEXT;
extern PFNGLTEXTUREIMAGE1DEXTPROC glTextureImage1DEXT;
extern PFNGLTEXTUREIMAGE2DEXTPROC glTextureImage2DEXT;
extern PFNGLTEXTUREIMAGE3DEXTPROC glTextureImage3DEXT;
extern PFNGLTEXTUREPARAMETERIIVEXTPROC glTextureParameterIivEXT;
extern PFNGLTEXTUREPARAMETERIUIVEXTPROC glTextureParameterIuivEXT;
extern PFNGLTEXTUREPARAMETERFEXTPROC glTextureParameterfEXT;
extern PFNGLTEXTUREPARAMETERFVEXTPROC glTextureParameterfvEXT;
extern PFNGLTEXTUREPARAMETERIEXTPROC glTextureParameteriEXT;
extern PFNGLTEXTUREPARAMETERIVEXTPROC glTextureParameterivEXT;
extern PFNGLTEXTURERENDERBUFFEREXTPROC glTextureRenderbufferEXT;
extern PFNGLTEXTURESUBIMAGE1DEXTPROC glTextureSubImage1DEXT;
extern PFNGLTEXTURESUBIMAGE2DEXTPROC glTextureSubImage2DEXT;
extern PFNGLTEXTURESUBIMAGE3DEXTPROC glTextureSubImage3DEXT;
extern PFNGLUNMAPNAMEDBUFFEREXTPROC glUnmapNamedBufferEXT;
extern PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glVertexArrayColorOffsetEXT;
extern PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glVertexArrayEdgeFlagOffsetEXT;
extern PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glVertexArrayFogCoordOffsetEXT;
extern PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glVertexArrayIndexOffsetEXT;
extern PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glVertexArrayMultiTexCoordOffsetEXT;
extern PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glVertexArrayNormalOffsetEXT;
extern PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glVertexArraySecondaryColorOffsetEXT;
extern PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glVertexArrayTexCoordOffsetEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glVertexArrayVertexAttribIOffsetEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glVertexArrayVertexAttribOffsetEXT;
extern PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glVertexArrayVertexOffsetEXT;

// GL_EXT_draw_buffers2


typedef void (APIENTRY * PFNGLCOLORMASKINDEXEDEXTPROC)(GLuint buf, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (APIENTRY * PFNGLDISABLEINDEXEDEXTPROC)(GLenum target, GLuint index);
typedef void (APIENTRY * PFNGLENABLEINDEXEDEXTPROC)(GLenum target, GLuint index);
typedef void (APIENTRY * PFNGLGETBOOLEANINDEXEDVEXTPROC)(GLenum value, GLuint index, GLboolean* data);
typedef void (APIENTRY * PFNGLGETINTEGERINDEXEDVEXTPROC)(GLenum value, GLuint index, GLint* data);
typedef GLboolean (APIENTRY * PFNGLISENABLEDINDEXEDEXTPROC)(GLenum target, GLuint index);

extern PFNGLCOLORMASKINDEXEDEXTPROC glColorMaskIndexedEXT;
extern PFNGLDISABLEINDEXEDEXTPROC glDisableIndexedEXT;
extern PFNGLENABLEINDEXEDEXTPROC glEnableIndexedEXT;
extern PFNGLGETBOOLEANINDEXEDVEXTPROC glGetBooleanIndexedvEXT;
extern PFNGLGETINTEGERINDEXEDVEXTPROC glGetIntegerIndexedvEXT;
extern PFNGLISENABLEDINDEXEDEXTPROC glIsEnabledIndexedEXT;

// GL_EXT_draw_instanced


typedef void (APIENTRY * PFNGLDRAWARRAYSINSTANCEDEXTPROC)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (APIENTRY * PFNGLDRAWELEMENTSINSTANCEDEXTPROC)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);

extern PFNGLDRAWARRAYSINSTANCEDEXTPROC glDrawArraysInstancedEXT;
extern PFNGLDRAWELEMENTSINSTANCEDEXTPROC glDrawElementsInstancedEXT;

// GL_EXT_draw_range_elements

#ifndef GL_MAX_ELEMENTS_VERTICES_EXT
    #define GL_MAX_ELEMENTS_VERTICES_EXT 0x80E8
#endif
#ifndef GL_MAX_ELEMENTS_INDICES_EXT
    #define GL_MAX_ELEMENTS_INDICES_EXT 0x80E9
#endif

typedef void (APIENTRY * PFNGLDRAWRANGEELEMENTSEXTPROC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid *indices);

extern PFNGLDRAWRANGEELEMENTSEXTPROC glDrawRangeElementsEXT;

// GL_EXT_fog_coord

#ifndef GL_FOG_COORDINATE_SOURCE_EXT
    #define GL_FOG_COORDINATE_SOURCE_EXT 0x8450
#endif
#ifndef GL_FOG_COORDINATE_EXT
    #define GL_FOG_COORDINATE_EXT 0x8451
#endif
#ifndef GL_FRAGMENT_DEPTH_EXT
    #define GL_FRAGMENT_DEPTH_EXT 0x8452
#endif
#ifndef GL_CURRENT_FOG_COORDINATE_EXT
    #define GL_CURRENT_FOG_COORDINATE_EXT 0x8453
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_TYPE_EXT
    #define GL_FOG_COORDINATE_ARRAY_TYPE_EXT 0x8454
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_STRIDE_EXT
    #define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_POINTER_EXT
    #define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#endif
#ifndef GL_FOG_COORDINATE_ARRAY_EXT
    #define GL_FOG_COORDINATE_ARRAY_EXT 0x8457
#endif

typedef void (APIENTRY * PFNGLFOGCOORDPOINTEREXTPROC)(GLenum type, GLsizei stride, const GLvoid *pointer);
typedef void (APIENTRY * PFNGLFOGCOORDDEXTPROC)(GLdouble coord);
typedef void (APIENTRY * PFNGLFOGCOORDDVEXTPROC)(const GLdouble *coord);
typedef void (APIENTRY * PFNGLFOGCOORDFEXTPROC)(GLfloat coord);
typedef void (APIENTRY * PFNGLFOGCOORDFVEXTPROC)(const GLfloat *coord);

extern PFNGLFOGCOORDPOINTEREXTPROC glFogCoordPointerEXT;
extern PFNGLFOGCOORDDEXTPROC glFogCoorddEXT;
extern PFNGLFOGCOORDDVEXTPROC glFogCoorddvEXT;
extern PFNGLFOGCOORDFEXTPROC glFogCoordfEXT;
extern PFNGLFOGCOORDFVEXTPROC glFogCoordfvEXT;

// GL_EXT_fragment_lighting

#ifndef GL_FRAGMENT_LIGHTING_EXT
    #define GL_FRAGMENT_LIGHTING_EXT 0x8400
#endif
#ifndef GL_FRAGMENT_COLOR_MATERIAL_EXT
    #define GL_FRAGMENT_COLOR_MATERIAL_EXT 0x8401
#endif
#ifndef GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT
    #define GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT 0x8402
#endif
#ifndef GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT
    #define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT 0x8403
#endif
#ifndef GL_MAX_FRAGMENT_LIGHTS_EXT
    #define GL_MAX_FRAGMENT_LIGHTS_EXT 0x8404
#endif
#ifndef GL_MAX_ACTIVE_LIGHTS_EXT
    #define GL_MAX_ACTIVE_LIGHTS_EXT 0x8405
#endif
#ifndef GL_CURRENT_RASTER_NORMAL_EXT
    #define GL_CURRENT_RASTER_NORMAL_EXT 0x8406
#endif
#ifndef GL_LIGHT_ENV_MODE_EXT
    #define GL_LIGHT_ENV_MODE_EXT 0x8407
#endif
#ifndef GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT
    #define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT 0x8408
#endif
#ifndef GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT
    #define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT 0x8409
#endif
#ifndef GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT
    #define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT 0x840A
#endif
#ifndef GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT
    #define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT 0x840B
#endif
#ifndef GL_FRAGMENT_LIGHT0_EXT
    #define GL_FRAGMENT_LIGHT0_EXT 0x840C
#endif
#ifndef GL_FRAGMENT_LIGHT7_EXT
    #define GL_FRAGMENT_LIGHT7_EXT 0x8413
#endif

typedef void (APIENTRY * PFNGLFRAGMENTCOLORMATERIALEXTPROC)(GLenum face, GLenum mode);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELFEXTPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELFVEXTPROC)(GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELIEXTPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELIVEXTPROC)(GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTFEXTPROC)(GLenum light, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTFVEXTPROC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTIEXTPROC)(GLenum light, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTIVEXTPROC)(GLenum light, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALFEXTPROC)(GLenum face, GLenum pname, const GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALFVEXTPROC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALIEXTPROC)(GLenum face, GLenum pname, const GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALIVEXTPROC)(GLenum face, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLGETFRAGMENTLIGHTFVEXTPROC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETFRAGMENTLIGHTIVEXTPROC)(GLenum light, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETFRAGMENTMATERIALFVEXTPROC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLGETFRAGMENTMATERIALIVEXTPROC)(GLenum face, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLLIGHTENVIEXTPROC)(GLenum pname, GLint param);

extern PFNGLFRAGMENTCOLORMATERIALEXTPROC glFragmentColorMaterialEXT;
extern PFNGLFRAGMENTLIGHTMODELFEXTPROC glFragmentLightModelfEXT;
extern PFNGLFRAGMENTLIGHTMODELFVEXTPROC glFragmentLightModelfvEXT;
extern PFNGLFRAGMENTLIGHTMODELIEXTPROC glFragmentLightModeliEXT;
extern PFNGLFRAGMENTLIGHTMODELIVEXTPROC glFragmentLightModelivEXT;
extern PFNGLFRAGMENTLIGHTFEXTPROC glFragmentLightfEXT;
extern PFNGLFRAGMENTLIGHTFVEXTPROC glFragmentLightfvEXT;
extern PFNGLFRAGMENTLIGHTIEXTPROC glFragmentLightiEXT;
extern PFNGLFRAGMENTLIGHTIVEXTPROC glFragmentLightivEXT;
extern PFNGLFRAGMENTMATERIALFEXTPROC glFragmentMaterialfEXT;
extern PFNGLFRAGMENTMATERIALFVEXTPROC glFragmentMaterialfvEXT;
extern PFNGLFRAGMENTMATERIALIEXTPROC glFragmentMaterialiEXT;
extern PFNGLFRAGMENTMATERIALIVEXTPROC glFragmentMaterialivEXT;
extern PFNGLGETFRAGMENTLIGHTFVEXTPROC glGetFragmentLightfvEXT;
extern PFNGLGETFRAGMENTLIGHTIVEXTPROC glGetFragmentLightivEXT;
extern PFNGLGETFRAGMENTMATERIALFVEXTPROC glGetFragmentMaterialfvEXT;
extern PFNGLGETFRAGMENTMATERIALIVEXTPROC glGetFragmentMaterialivEXT;
extern PFNGLLIGHTENVIEXTPROC glLightEnviEXT;

// GL_EXT_framebuffer_blit

#ifndef GL_DRAW_FRAMEBUFFER_BINDING_EXT
    #define GL_DRAW_FRAMEBUFFER_BINDING_EXT 0x8CA6
#endif
#ifndef GL_READ_FRAMEBUFFER_EXT
    #define GL_READ_FRAMEBUFFER_EXT 0x8CA8
#endif
#ifndef GL_DRAW_FRAMEBUFFER_EXT
    #define GL_DRAW_FRAMEBUFFER_EXT 0x8CA9
#endif
#ifndef GL_READ_FRAMEBUFFER_BINDING_EXT
    #define GL_READ_FRAMEBUFFER_BINDING_EXT 0x8CAA
#endif

typedef void (APIENTRY * PFNGLBLITFRAMEBUFFEREXTPROC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

extern PFNGLBLITFRAMEBUFFEREXTPROC glBlitFramebufferEXT;

// GL_EXT_framebuffer_multisample

#ifndef GL_RENDERBUFFER_SAMPLES_EXT
    #define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#endif
#ifndef GL_MAX_SAMPLES_EXT
    #define GL_MAX_SAMPLES_EXT 0x8D57
#endif

typedef void (APIENTRY * PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glRenderbufferStorageMultisampleEXT;

// GL_EXT_framebuffer_object

#ifndef GL_INVALID_FRAMEBUFFER_OPERATION_EXT
    #define GL_INVALID_FRAMEBUFFER_OPERATION_EXT 0x0506
#endif
#ifndef GL_MAX_RENDERBUFFER_SIZE_EXT
    #define GL_MAX_RENDERBUFFER_SIZE_EXT 0x84E8
#endif
#ifndef GL_FRAMEBUFFER_BINDING_EXT
    #define GL_FRAMEBUFFER_BINDING_EXT 0x8CA6
#endif
#ifndef GL_RENDERBUFFER_BINDING_EXT
    #define GL_RENDERBUFFER_BINDING_EXT 0x8CA7
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT 0x8CD0
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT 0x8CD1
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT 0x8CD2
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT 0x8CD4
#endif
#ifndef GL_FRAMEBUFFER_COMPLETE_EXT
    #define GL_FRAMEBUFFER_COMPLETE_EXT 0x8CD5
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT 0x8CD7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT 0x8CD9
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT 0x8CDA
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT 0x8CDB
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT 0x8CDC
#endif
#ifndef GL_FRAMEBUFFER_UNSUPPORTED_EXT
    #define GL_FRAMEBUFFER_UNSUPPORTED_EXT 0x8CDD
#endif
#ifndef GL_MAX_COLOR_ATTACHMENTS_EXT
    #define GL_MAX_COLOR_ATTACHMENTS_EXT 0x8CDF
#endif
#ifndef GL_COLOR_ATTACHMENT0_EXT
    #define GL_COLOR_ATTACHMENT0_EXT 0x8CE0
#endif
#ifndef GL_COLOR_ATTACHMENT1_EXT
    #define GL_COLOR_ATTACHMENT1_EXT 0x8CE1
#endif
#ifndef GL_COLOR_ATTACHMENT2_EXT
    #define GL_COLOR_ATTACHMENT2_EXT 0x8CE2
#endif
#ifndef GL_COLOR_ATTACHMENT3_EXT
    #define GL_COLOR_ATTACHMENT3_EXT 0x8CE3
#endif
#ifndef GL_COLOR_ATTACHMENT4_EXT
    #define GL_COLOR_ATTACHMENT4_EXT 0x8CE4
#endif
#ifndef GL_COLOR_ATTACHMENT5_EXT
    #define GL_COLOR_ATTACHMENT5_EXT 0x8CE5
#endif
#ifndef GL_COLOR_ATTACHMENT6_EXT
    #define GL_COLOR_ATTACHMENT6_EXT 0x8CE6
#endif
#ifndef GL_COLOR_ATTACHMENT7_EXT
    #define GL_COLOR_ATTACHMENT7_EXT 0x8CE7
#endif
#ifndef GL_COLOR_ATTACHMENT8_EXT
    #define GL_COLOR_ATTACHMENT8_EXT 0x8CE8
#endif
#ifndef GL_COLOR_ATTACHMENT9_EXT
    #define GL_COLOR_ATTACHMENT9_EXT 0x8CE9
#endif
#ifndef GL_COLOR_ATTACHMENT10_EXT
    #define GL_COLOR_ATTACHMENT10_EXT 0x8CEA
#endif
#ifndef GL_COLOR_ATTACHMENT11_EXT
    #define GL_COLOR_ATTACHMENT11_EXT 0x8CEB
#endif
#ifndef GL_COLOR_ATTACHMENT12_EXT
    #define GL_COLOR_ATTACHMENT12_EXT 0x8CEC
#endif
#ifndef GL_COLOR_ATTACHMENT13_EXT
    #define GL_COLOR_ATTACHMENT13_EXT 0x8CED
#endif
#ifndef GL_COLOR_ATTACHMENT14_EXT
    #define GL_COLOR_ATTACHMENT14_EXT 0x8CEE
#endif
#ifndef GL_COLOR_ATTACHMENT15_EXT
    #define GL_COLOR_ATTACHMENT15_EXT 0x8CEF
#endif
#ifndef GL_DEPTH_ATTACHMENT_EXT
    #define GL_DEPTH_ATTACHMENT_EXT 0x8D00
#endif
#ifndef GL_STENCIL_ATTACHMENT_EXT
    #define GL_STENCIL_ATTACHMENT_EXT 0x8D20
#endif
#ifndef GL_FRAMEBUFFER_EXT
    #define GL_FRAMEBUFFER_EXT 0x8D40
#endif
#ifndef GL_RENDERBUFFER_EXT
    #define GL_RENDERBUFFER_EXT 0x8D41
#endif
#ifndef GL_RENDERBUFFER_WIDTH_EXT
    #define GL_RENDERBUFFER_WIDTH_EXT 0x8D42
#endif
#ifndef GL_RENDERBUFFER_HEIGHT_EXT
    #define GL_RENDERBUFFER_HEIGHT_EXT 0x8D43
#endif
#ifndef GL_RENDERBUFFER_INTERNAL_FORMAT_EXT
    #define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT 0x8D44
#endif
#ifndef GL_STENCIL_INDEX1_EXT
    #define GL_STENCIL_INDEX1_EXT 0x8D46
#endif
#ifndef GL_STENCIL_INDEX4_EXT
    #define GL_STENCIL_INDEX4_EXT 0x8D47
#endif
#ifndef GL_STENCIL_INDEX8_EXT
    #define GL_STENCIL_INDEX8_EXT 0x8D48
#endif
#ifndef GL_STENCIL_INDEX16_EXT
    #define GL_STENCIL_INDEX16_EXT 0x8D49
#endif
#ifndef GL_RENDERBUFFER_RED_SIZE_EXT
    #define GL_RENDERBUFFER_RED_SIZE_EXT 0x8D50
#endif
#ifndef GL_RENDERBUFFER_GREEN_SIZE_EXT
    #define GL_RENDERBUFFER_GREEN_SIZE_EXT 0x8D51
#endif
#ifndef GL_RENDERBUFFER_BLUE_SIZE_EXT
    #define GL_RENDERBUFFER_BLUE_SIZE_EXT 0x8D52
#endif
#ifndef GL_RENDERBUFFER_ALPHA_SIZE_EXT
    #define GL_RENDERBUFFER_ALPHA_SIZE_EXT 0x8D53
#endif
#ifndef GL_RENDERBUFFER_DEPTH_SIZE_EXT
    #define GL_RENDERBUFFER_DEPTH_SIZE_EXT 0x8D54
#endif
#ifndef GL_RENDERBUFFER_STENCIL_SIZE_EXT
    #define GL_RENDERBUFFER_STENCIL_SIZE_EXT 0x8D55
#endif

typedef void (APIENTRY * PFNGLBINDFRAMEBUFFEREXTPROC)(GLenum target, GLuint framebuffer);
typedef void (APIENTRY * PFNGLBINDRENDERBUFFEREXTPROC)(GLenum target, GLuint renderbuffer);
typedef GLenum (APIENTRY * PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC)(GLenum target);
typedef void (APIENTRY * PFNGLDELETEFRAMEBUFFERSEXTPROC)(GLsizei n, const GLuint* framebuffers);
typedef void (APIENTRY * PFNGLDELETERENDERBUFFERSEXTPROC)(GLsizei n, const GLuint* renderbuffers);
typedef void (APIENTRY * PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE1DEXTPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE2DEXTPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURE3DEXTPROC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (APIENTRY * PFNGLGENFRAMEBUFFERSEXTPROC)(GLsizei n, GLuint* framebuffers);
typedef void (APIENTRY * PFNGLGENRENDERBUFFERSEXTPROC)(GLsizei n, GLuint* renderbuffers);
typedef void (APIENTRY * PFNGLGENERATEMIPMAPEXTPROC)(GLenum target);
typedef void (APIENTRY * PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISFRAMEBUFFEREXTPROC)(GLuint framebuffer);
typedef GLboolean (APIENTRY * PFNGLISRENDERBUFFEREXTPROC)(GLuint renderbuffer);
typedef void (APIENTRY * PFNGLRENDERBUFFERSTORAGEEXTPROC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);

extern PFNGLBINDFRAMEBUFFEREXTPROC glBindFramebufferEXT;
extern PFNGLBINDRENDERBUFFEREXTPROC glBindRenderbufferEXT;
extern PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glCheckFramebufferStatusEXT;
extern PFNGLDELETEFRAMEBUFFERSEXTPROC glDeleteFramebuffersEXT;
extern PFNGLDELETERENDERBUFFERSEXTPROC glDeleteRenderbuffersEXT;
extern PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glFramebufferRenderbufferEXT;
extern PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glFramebufferTexture1DEXT;
extern PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glFramebufferTexture2DEXT;
extern PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glFramebufferTexture3DEXT;
extern PFNGLGENFRAMEBUFFERSEXTPROC glGenFramebuffersEXT;
extern PFNGLGENRENDERBUFFERSEXTPROC glGenRenderbuffersEXT;
extern PFNGLGENERATEMIPMAPEXTPROC glGenerateMipmapEXT;
extern PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glGetFramebufferAttachmentParameterivEXT;
extern PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glGetRenderbufferParameterivEXT;
extern PFNGLISFRAMEBUFFEREXTPROC glIsFramebufferEXT;
extern PFNGLISRENDERBUFFEREXTPROC glIsRenderbufferEXT;
extern PFNGLRENDERBUFFERSTORAGEEXTPROC glRenderbufferStorageEXT;

// GL_EXT_framebuffer_sRGB

#ifndef GL_FRAMEBUFFER_SRGB_EXT
    #define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9
#endif
#ifndef GL_FRAMEBUFFER_SRGB_CAPABLE_EXT
    #define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x8DBA
#endif

// GL_EXT_geometry_shader4

#ifndef GL_PROGRAM_POINT_SIZE_EXT
    #define GL_PROGRAM_POINT_SIZE_EXT 0x8642
#endif
#ifndef GL_MAX_VARYING_COMPONENTS_EXT
    #define GL_MAX_VARYING_COMPONENTS_EXT 0x8B4B
#endif
#ifndef GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT
    #define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#endif
#ifndef GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT
    #define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#endif
#ifndef GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT
    #define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT 0x8DA9
#endif
#ifndef GL_GEOMETRY_SHADER_EXT
    #define GL_GEOMETRY_SHADER_EXT 0x8DD9
#endif
#ifndef GL_GEOMETRY_VERTICES_OUT_EXT
    #define GL_GEOMETRY_VERTICES_OUT_EXT 0x8DDA
#endif
#ifndef GL_GEOMETRY_INPUT_TYPE_EXT
    #define GL_GEOMETRY_INPUT_TYPE_EXT 0x8DDB
#endif
#ifndef GL_GEOMETRY_OUTPUT_TYPE_EXT
    #define GL_GEOMETRY_OUTPUT_TYPE_EXT 0x8DDC
#endif
#ifndef GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT
    #define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT 0x8DDD
#endif
#ifndef GL_MAX_VERTEX_VARYING_COMPONENTS_EXT
    #define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT 0x8DDE
#endif
#ifndef GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT
    #define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#endif
#ifndef GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT
    #define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#endif
#ifndef GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT
    #define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#endif

typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTUREEXTPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void (APIENTRY * PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETERIEXTPROC)(GLuint program, GLenum pname, GLint value);

extern PFNGLFRAMEBUFFERTEXTUREEXTPROC glFramebufferTextureEXT;
extern PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glFramebufferTextureFaceEXT;
extern PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glFramebufferTextureLayerEXT;
extern PFNGLPROGRAMPARAMETERIEXTPROC glProgramParameteriEXT;

// GL_EXT_gpu_program_parameters


typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERS4FVEXTPROC)(GLenum target, GLuint index, GLsizei count, const GLfloat* params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC)(GLenum target, GLuint index, GLsizei count, const GLfloat* params);

extern PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glProgramEnvParameters4fvEXT;
extern PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glProgramLocalParameters4fvEXT;

// GL_EXT_gpu_shader4

#ifndef GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT
    #define GL_VERTEX_ATTRIB_ARRAY_INTEGER_EXT 0x88FD
#endif
#ifndef GL_SAMPLER_1D_ARRAY_EXT
    #define GL_SAMPLER_1D_ARRAY_EXT 0x8DC0
#endif
#ifndef GL_SAMPLER_2D_ARRAY_EXT
    #define GL_SAMPLER_2D_ARRAY_EXT 0x8DC1
#endif
#ifndef GL_SAMPLER_BUFFER_EXT
    #define GL_SAMPLER_BUFFER_EXT 0x8DC2
#endif
#ifndef GL_SAMPLER_1D_ARRAY_SHADOW_EXT
    #define GL_SAMPLER_1D_ARRAY_SHADOW_EXT 0x8DC3
#endif
#ifndef GL_SAMPLER_2D_ARRAY_SHADOW_EXT
    #define GL_SAMPLER_2D_ARRAY_SHADOW_EXT 0x8DC4
#endif
#ifndef GL_SAMPLER_CUBE_SHADOW_EXT
    #define GL_SAMPLER_CUBE_SHADOW_EXT 0x8DC5
#endif
#ifndef GL_UNSIGNED_INT_VEC2_EXT
    #define GL_UNSIGNED_INT_VEC2_EXT 0x8DC6
#endif
#ifndef GL_UNSIGNED_INT_VEC3_EXT
    #define GL_UNSIGNED_INT_VEC3_EXT 0x8DC7
#endif
#ifndef GL_UNSIGNED_INT_VEC4_EXT
    #define GL_UNSIGNED_INT_VEC4_EXT 0x8DC8
#endif
#ifndef GL_INT_SAMPLER_1D_EXT
    #define GL_INT_SAMPLER_1D_EXT 0x8DC9
#endif
#ifndef GL_INT_SAMPLER_2D_EXT
    #define GL_INT_SAMPLER_2D_EXT 0x8DCA
#endif
#ifndef GL_INT_SAMPLER_3D_EXT
    #define GL_INT_SAMPLER_3D_EXT 0x8DCB
#endif
#ifndef GL_INT_SAMPLER_CUBE_EXT
    #define GL_INT_SAMPLER_CUBE_EXT 0x8DCC
#endif
#ifndef GL_INT_SAMPLER_2D_RECT_EXT
    #define GL_INT_SAMPLER_2D_RECT_EXT 0x8DCD
#endif
#ifndef GL_INT_SAMPLER_1D_ARRAY_EXT
    #define GL_INT_SAMPLER_1D_ARRAY_EXT 0x8DCE
#endif
#ifndef GL_INT_SAMPLER_2D_ARRAY_EXT
    #define GL_INT_SAMPLER_2D_ARRAY_EXT 0x8DCF
#endif
#ifndef GL_INT_SAMPLER_BUFFER_EXT
    #define GL_INT_SAMPLER_BUFFER_EXT 0x8DD0
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D_EXT
    #define GL_UNSIGNED_INT_SAMPLER_1D_EXT 0x8DD1
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_EXT
    #define GL_UNSIGNED_INT_SAMPLER_2D_EXT 0x8DD2
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_3D_EXT
    #define GL_UNSIGNED_INT_SAMPLER_3D_EXT 0x8DD3
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_CUBE_EXT
    #define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT 0x8DD4
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT
    #define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT 0x8DD5
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT
    #define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT 0x8DD6
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT
    #define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT 0x8DD7
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT
    #define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#endif

typedef void (APIENTRY * PFNGLBINDFRAGDATALOCATIONEXTPROC)(GLuint program, GLuint color, const GLchar *name);
typedef GLint (APIENTRY * PFNGLGETFRAGDATALOCATIONEXTPROC)(GLuint program, const GLchar *name);
typedef void (APIENTRY * PFNGLGETUNIFORMUIVEXTPROC)(GLuint program, GLint location, GLuint *params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIIVEXTPROC)(GLuint index, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIUIVEXTPROC)(GLuint index, GLenum pname, GLuint *params);
typedef void (APIENTRY * PFNGLUNIFORM1UIEXTPROC)(GLint location, GLuint v0);
typedef void (APIENTRY * PFNGLUNIFORM1UIVEXTPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRY * PFNGLUNIFORM2UIEXTPROC)(GLint location, GLuint v0, GLuint v1);
typedef void (APIENTRY * PFNGLUNIFORM2UIVEXTPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRY * PFNGLUNIFORM3UIEXTPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (APIENTRY * PFNGLUNIFORM3UIVEXTPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRY * PFNGLUNIFORM4UIEXTPROC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (APIENTRY * PFNGLUNIFORM4UIVEXTPROC)(GLint location, GLsizei count, const GLuint *value);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1IEXTPROC)(GLuint index, GLint x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1IVEXTPROC)(GLuint index, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1UIEXTPROC)(GLuint index, GLuint x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI1UIVEXTPROC)(GLuint index, const GLuint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2IEXTPROC)(GLuint index, GLint x, GLint y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2IVEXTPROC)(GLuint index, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2UIEXTPROC)(GLuint index, GLuint x, GLuint y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI2UIVEXTPROC)(GLuint index, const GLuint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3IEXTPROC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3IVEXTPROC)(GLuint index, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3UIEXTPROC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI3UIVEXTPROC)(GLuint index, const GLuint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4BVEXTPROC)(GLuint index, const GLbyte *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4IEXTPROC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4IVEXTPROC)(GLuint index, const GLint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4SVEXTPROC)(GLuint index, const GLshort *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UBVEXTPROC)(GLuint index, const GLubyte *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UIEXTPROC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4UIVEXTPROC)(GLuint index, const GLuint *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBI4USVEXTPROC)(GLuint index, const GLushort *v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBIPOINTEREXTPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern PFNGLBINDFRAGDATALOCATIONEXTPROC glBindFragDataLocationEXT;
extern PFNGLGETFRAGDATALOCATIONEXTPROC glGetFragDataLocationEXT;
extern PFNGLGETUNIFORMUIVEXTPROC glGetUniformuivEXT;
extern PFNGLGETVERTEXATTRIBIIVEXTPROC glGetVertexAttribIivEXT;
extern PFNGLGETVERTEXATTRIBIUIVEXTPROC glGetVertexAttribIuivEXT;
extern PFNGLUNIFORM1UIEXTPROC glUniform1uiEXT;
extern PFNGLUNIFORM1UIVEXTPROC glUniform1uivEXT;
extern PFNGLUNIFORM2UIEXTPROC glUniform2uiEXT;
extern PFNGLUNIFORM2UIVEXTPROC glUniform2uivEXT;
extern PFNGLUNIFORM3UIEXTPROC glUniform3uiEXT;
extern PFNGLUNIFORM3UIVEXTPROC glUniform3uivEXT;
extern PFNGLUNIFORM4UIEXTPROC glUniform4uiEXT;
extern PFNGLUNIFORM4UIVEXTPROC glUniform4uivEXT;
extern PFNGLVERTEXATTRIBI1IEXTPROC glVertexAttribI1iEXT;
extern PFNGLVERTEXATTRIBI1IVEXTPROC glVertexAttribI1ivEXT;
extern PFNGLVERTEXATTRIBI1UIEXTPROC glVertexAttribI1uiEXT;
extern PFNGLVERTEXATTRIBI1UIVEXTPROC glVertexAttribI1uivEXT;
extern PFNGLVERTEXATTRIBI2IEXTPROC glVertexAttribI2iEXT;
extern PFNGLVERTEXATTRIBI2IVEXTPROC glVertexAttribI2ivEXT;
extern PFNGLVERTEXATTRIBI2UIEXTPROC glVertexAttribI2uiEXT;
extern PFNGLVERTEXATTRIBI2UIVEXTPROC glVertexAttribI2uivEXT;
extern PFNGLVERTEXATTRIBI3IEXTPROC glVertexAttribI3iEXT;
extern PFNGLVERTEXATTRIBI3IVEXTPROC glVertexAttribI3ivEXT;
extern PFNGLVERTEXATTRIBI3UIEXTPROC glVertexAttribI3uiEXT;
extern PFNGLVERTEXATTRIBI3UIVEXTPROC glVertexAttribI3uivEXT;
extern PFNGLVERTEXATTRIBI4BVEXTPROC glVertexAttribI4bvEXT;
extern PFNGLVERTEXATTRIBI4IEXTPROC glVertexAttribI4iEXT;
extern PFNGLVERTEXATTRIBI4IVEXTPROC glVertexAttribI4ivEXT;
extern PFNGLVERTEXATTRIBI4SVEXTPROC glVertexAttribI4svEXT;
extern PFNGLVERTEXATTRIBI4UBVEXTPROC glVertexAttribI4ubvEXT;
extern PFNGLVERTEXATTRIBI4UIEXTPROC glVertexAttribI4uiEXT;
extern PFNGLVERTEXATTRIBI4UIVEXTPROC glVertexAttribI4uivEXT;
extern PFNGLVERTEXATTRIBI4USVEXTPROC glVertexAttribI4usvEXT;
extern PFNGLVERTEXATTRIBIPOINTEREXTPROC glVertexAttribIPointerEXT;

// GL_EXT_histogram

#ifndef GL_HISTOGRAM_EXT
    #define GL_HISTOGRAM_EXT 0x8024
#endif
#ifndef GL_PROXY_HISTOGRAM_EXT
    #define GL_PROXY_HISTOGRAM_EXT 0x8025
#endif
#ifndef GL_HISTOGRAM_WIDTH_EXT
    #define GL_HISTOGRAM_WIDTH_EXT 0x8026
#endif
#ifndef GL_HISTOGRAM_FORMAT_EXT
    #define GL_HISTOGRAM_FORMAT_EXT 0x8027
#endif
#ifndef GL_HISTOGRAM_RED_SIZE_EXT
    #define GL_HISTOGRAM_RED_SIZE_EXT 0x8028
#endif
#ifndef GL_HISTOGRAM_GREEN_SIZE_EXT
    #define GL_HISTOGRAM_GREEN_SIZE_EXT 0x8029
#endif
#ifndef GL_HISTOGRAM_BLUE_SIZE_EXT
    #define GL_HISTOGRAM_BLUE_SIZE_EXT 0x802A
#endif
#ifndef GL_HISTOGRAM_ALPHA_SIZE_EXT
    #define GL_HISTOGRAM_ALPHA_SIZE_EXT 0x802B
#endif
#ifndef GL_HISTOGRAM_LUMINANCE_SIZE_EXT
    #define GL_HISTOGRAM_LUMINANCE_SIZE_EXT 0x802C
#endif
#ifndef GL_HISTOGRAM_SINK_EXT
    #define GL_HISTOGRAM_SINK_EXT 0x802D
#endif
#ifndef GL_MINMAX_EXT
    #define GL_MINMAX_EXT 0x802E
#endif
#ifndef GL_MINMAX_FORMAT_EXT
    #define GL_MINMAX_FORMAT_EXT 0x802F
#endif
#ifndef GL_MINMAX_SINK_EXT
    #define GL_MINMAX_SINK_EXT 0x8030
#endif

typedef void (APIENTRY * PFNGLGETHISTOGRAMEXTPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, void* values);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETHISTOGRAMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMINMAXEXTPROC)(GLenum target, GLboolean reset, GLenum format, GLenum type, void* values);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMINMAXPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLHISTOGRAMEXTPROC)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLMINMAXEXTPROC)(GLenum target, GLenum internalformat, GLboolean sink);
typedef void (APIENTRY * PFNGLRESETHISTOGRAMEXTPROC)(GLenum target);
typedef void (APIENTRY * PFNGLRESETMINMAXEXTPROC)(GLenum target);

extern PFNGLGETHISTOGRAMEXTPROC glGetHistogramEXT;
extern PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glGetHistogramParameterfvEXT;
extern PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glGetHistogramParameterivEXT;
extern PFNGLGETMINMAXEXTPROC glGetMinmaxEXT;
extern PFNGLGETMINMAXPARAMETERFVEXTPROC glGetMinmaxParameterfvEXT;
extern PFNGLGETMINMAXPARAMETERIVEXTPROC glGetMinmaxParameterivEXT;
extern PFNGLHISTOGRAMEXTPROC glHistogramEXT;
extern PFNGLMINMAXEXTPROC glMinmaxEXT;
extern PFNGLRESETHISTOGRAMEXTPROC glResetHistogramEXT;
extern PFNGLRESETMINMAXEXTPROC glResetMinmaxEXT;

// GL_EXT_index_func


typedef void (APIENTRY * PFNGLINDEXFUNCEXTPROC)(GLenum func, GLfloat ref);

extern PFNGLINDEXFUNCEXTPROC glIndexFuncEXT;

// GL_EXT_index_material


typedef void (APIENTRY * PFNGLINDEXMATERIALEXTPROC)(GLenum face, GLenum mode);

extern PFNGLINDEXMATERIALEXTPROC glIndexMaterialEXT;

// GL_EXT_light_texture

#ifndef GL_FRAGMENT_MATERIAL_EXT
    #define GL_FRAGMENT_MATERIAL_EXT 0x8349
#endif
#ifndef GL_FRAGMENT_NORMAL_EXT
    #define GL_FRAGMENT_NORMAL_EXT 0x834A
#endif
#ifndef GL_FRAGMENT_COLOR_EXT
    #define GL_FRAGMENT_COLOR_EXT 0x834C
#endif
#ifndef GL_ATTENUATION_EXT
    #define GL_ATTENUATION_EXT 0x834D
#endif
#ifndef GL_SHADOW_ATTENUATION_EXT
    #define GL_SHADOW_ATTENUATION_EXT 0x834E
#endif
#ifndef GL_TEXTURE_APPLICATION_MODE_EXT
    #define GL_TEXTURE_APPLICATION_MODE_EXT 0x834F
#endif
#ifndef GL_TEXTURE_LIGHT_EXT
    #define GL_TEXTURE_LIGHT_EXT 0x8350
#endif
#ifndef GL_TEXTURE_MATERIAL_FACE_EXT
    #define GL_TEXTURE_MATERIAL_FACE_EXT 0x8351
#endif
#ifndef GL_TEXTURE_MATERIAL_PARAMETER_EXT
    #define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352
#endif
#ifndef GL_FRAGMENT_DEPTH_EXT
    #define GL_FRAGMENT_DEPTH_EXT 0x8452
#endif

typedef void (APIENTRY * PFNGLAPPLYTEXTUREEXTPROC)(GLenum mode);
typedef void (APIENTRY * PFNGLTEXTURELIGHTEXTPROC)(GLenum pname);
typedef void (APIENTRY * PFNGLTEXTUREMATERIALEXTPROC)(GLenum face, GLenum mode);

extern PFNGLAPPLYTEXTUREEXTPROC glApplyTextureEXT;
extern PFNGLTEXTURELIGHTEXTPROC glTextureLightEXT;
extern PFNGLTEXTUREMATERIALEXTPROC glTextureMaterialEXT;

// GL_EXT_multi_draw_arrays


typedef void (APIENTRY * PFNGLMULTIDRAWARRAYSEXTPROC)(GLenum mode, const GLint* first, const GLsizei *count, GLsizei primcount);
typedef void (APIENTRY * PFNGLMULTIDRAWELEMENTSEXTPROC)(GLenum mode, GLsizei* count, GLenum type, const GLvoid **indices, GLsizei primcount);

extern PFNGLMULTIDRAWARRAYSEXTPROC glMultiDrawArraysEXT;
extern PFNGLMULTIDRAWELEMENTSEXTPROC glMultiDrawElementsEXT;

// GL_EXT_multisample

#ifndef GL_MULTISAMPLE_EXT
    #define GL_MULTISAMPLE_EXT 0x809D
#endif
#ifndef GL_SAMPLE_ALPHA_TO_MASK_EXT
    #define GL_SAMPLE_ALPHA_TO_MASK_EXT 0x809E
#endif
#ifndef GL_SAMPLE_ALPHA_TO_ONE_EXT
    #define GL_SAMPLE_ALPHA_TO_ONE_EXT 0x809F
#endif
#ifndef GL_SAMPLE_MASK_EXT
    #define GL_SAMPLE_MASK_EXT 0x80A0
#endif
#ifndef GL_1PASS_EXT
    #define GL_1PASS_EXT 0x80A1
#endif
#ifndef GL_2PASS_0_EXT
    #define GL_2PASS_0_EXT 0x80A2
#endif
#ifndef GL_2PASS_1_EXT
    #define GL_2PASS_1_EXT 0x80A3
#endif
#ifndef GL_4PASS_0_EXT
    #define GL_4PASS_0_EXT 0x80A4
#endif
#ifndef GL_4PASS_1_EXT
    #define GL_4PASS_1_EXT 0x80A5
#endif
#ifndef GL_4PASS_2_EXT
    #define GL_4PASS_2_EXT 0x80A6
#endif
#ifndef GL_4PASS_3_EXT
    #define GL_4PASS_3_EXT 0x80A7
#endif
#ifndef GL_SAMPLE_BUFFERS_EXT
    #define GL_SAMPLE_BUFFERS_EXT 0x80A8
#endif
#ifndef GL_SAMPLES_EXT
    #define GL_SAMPLES_EXT 0x80A9
#endif
#ifndef GL_SAMPLE_MASK_VALUE_EXT
    #define GL_SAMPLE_MASK_VALUE_EXT 0x80AA
#endif
#ifndef GL_SAMPLE_MASK_INVERT_EXT
    #define GL_SAMPLE_MASK_INVERT_EXT 0x80AB
#endif
#ifndef GL_SAMPLE_PATTERN_EXT
    #define GL_SAMPLE_PATTERN_EXT 0x80AC
#endif

typedef void (APIENTRY * PFNGLSAMPLEMASKEXTPROC)(GLclampf value, GLboolean invert);
typedef void (APIENTRY * PFNGLSAMPLEPATTERNEXTPROC)(GLenum pattern);

extern PFNGLSAMPLEMASKEXTPROC glSampleMaskEXT;
extern PFNGLSAMPLEPATTERNEXTPROC glSamplePatternEXT;

// GL_EXT_packed_depth_stencil

#ifndef GL_DEPTH_STENCIL_EXT
    #define GL_DEPTH_STENCIL_EXT 0x84F9
#endif
#ifndef GL_UNSIGNED_INT_24_8_EXT
    #define GL_UNSIGNED_INT_24_8_EXT 0x84FA
#endif
#ifndef GL_DEPTH24_STENCIL8_EXT
    #define GL_DEPTH24_STENCIL8_EXT 0x88F0
#endif
#ifndef GL_TEXTURE_STENCIL_SIZE_EXT
    #define GL_TEXTURE_STENCIL_SIZE_EXT 0x88F1
#endif

// GL_EXT_packed_float

#ifndef GL_R11F_G11F_B10F_EXT
    #define GL_R11F_G11F_B10F_EXT 0x8C3A
#endif
#ifndef GL_UNSIGNED_INT_10F_11F_11F_REV_EXT
    #define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT 0x8C3B
#endif
#ifndef GL_RGBA_SIGNED_COMPONENTS_EXT
    #define GL_RGBA_SIGNED_COMPONENTS_EXT 0x8C3C
#endif

// GL_EXT_packed_pixels

#ifndef GL_UNSIGNED_BYTE_3_3_2_EXT
    #define GL_UNSIGNED_BYTE_3_3_2_EXT 0x8032
#endif
#ifndef GL_UNSIGNED_SHORT_4_4_4_4_EXT
    #define GL_UNSIGNED_SHORT_4_4_4_4_EXT 0x8033
#endif
#ifndef GL_UNSIGNED_SHORT_5_5_5_1_EXT
    #define GL_UNSIGNED_SHORT_5_5_5_1_EXT 0x8034
#endif
#ifndef GL_UNSIGNED_INT_8_8_8_8_EXT
    #define GL_UNSIGNED_INT_8_8_8_8_EXT 0x8035
#endif
#ifndef GL_UNSIGNED_INT_10_10_10_2_EXT
    #define GL_UNSIGNED_INT_10_10_10_2_EXT 0x8036
#endif

// GL_EXT_paletted_texture

#ifndef GL_TEXTURE_1D
    #define GL_TEXTURE_1D 0x0DE0
#endif
#ifndef GL_TEXTURE_2D
    #define GL_TEXTURE_2D 0x0DE1
#endif
#ifndef GL_PROXY_TEXTURE_1D
    #define GL_PROXY_TEXTURE_1D 0x8063
#endif
#ifndef GL_PROXY_TEXTURE_2D
    #define GL_PROXY_TEXTURE_2D 0x8064
#endif
#ifndef GL_TEXTURE_3D_EXT
    #define GL_TEXTURE_3D_EXT 0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D_EXT
    #define GL_PROXY_TEXTURE_3D_EXT 0x8070
#endif
#ifndef GL_COLOR_TABLE_FORMAT_EXT
    #define GL_COLOR_TABLE_FORMAT_EXT 0x80D8
#endif
#ifndef GL_COLOR_TABLE_WIDTH_EXT
    #define GL_COLOR_TABLE_WIDTH_EXT 0x80D9
#endif
#ifndef GL_COLOR_TABLE_RED_SIZE_EXT
    #define GL_COLOR_TABLE_RED_SIZE_EXT 0x80DA
#endif
#ifndef GL_COLOR_TABLE_GREEN_SIZE_EXT
    #define GL_COLOR_TABLE_GREEN_SIZE_EXT 0x80DB
#endif
#ifndef GL_COLOR_TABLE_BLUE_SIZE_EXT
    #define GL_COLOR_TABLE_BLUE_SIZE_EXT 0x80DC
#endif
#ifndef GL_COLOR_TABLE_ALPHA_SIZE_EXT
    #define GL_COLOR_TABLE_ALPHA_SIZE_EXT 0x80DD
#endif
#ifndef GL_COLOR_TABLE_LUMINANCE_SIZE_EXT
    #define GL_COLOR_TABLE_LUMINANCE_SIZE_EXT 0x80DE
#endif
#ifndef GL_COLOR_TABLE_INTENSITY_SIZE_EXT
    #define GL_COLOR_TABLE_INTENSITY_SIZE_EXT 0x80DF
#endif
#ifndef GL_COLOR_INDEX1_EXT
    #define GL_COLOR_INDEX1_EXT 0x80E2
#endif
#ifndef GL_COLOR_INDEX2_EXT
    #define GL_COLOR_INDEX2_EXT 0x80E3
#endif
#ifndef GL_COLOR_INDEX4_EXT
    #define GL_COLOR_INDEX4_EXT 0x80E4
#endif
#ifndef GL_COLOR_INDEX8_EXT
    #define GL_COLOR_INDEX8_EXT 0x80E5
#endif
#ifndef GL_COLOR_INDEX12_EXT
    #define GL_COLOR_INDEX12_EXT 0x80E6
#endif
#ifndef GL_COLOR_INDEX16_EXT
    #define GL_COLOR_INDEX16_EXT 0x80E7
#endif
#ifndef GL_TEXTURE_INDEX_SIZE_EXT
    #define GL_TEXTURE_INDEX_SIZE_EXT 0x80ED
#endif
#ifndef GL_TEXTURE_CUBE_MAP_ARB
    #define GL_TEXTURE_CUBE_MAP_ARB 0x8513
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_ARB
    #define GL_PROXY_TEXTURE_CUBE_MAP_ARB 0x851B
#endif

typedef void (APIENTRY * PFNGLCOLORTABLEEXTPROC)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const void* data);
typedef void (APIENTRY * PFNGLGETCOLORTABLEEXTPROC)(GLenum target, GLenum format, GLenum type, void* data);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERFVEXTPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERIVEXTPROC)(GLenum target, GLenum pname, GLint* params);

extern PFNGLCOLORTABLEEXTPROC glColorTableEXT;
extern PFNGLGETCOLORTABLEEXTPROC glGetColorTableEXT;
extern PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glGetColorTableParameterfvEXT;
extern PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glGetColorTableParameterivEXT;

// GL_EXT_pixel_buffer_object

#ifndef GL_PIXEL_PACK_BUFFER_EXT
    #define GL_PIXEL_PACK_BUFFER_EXT 0x88EB
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_EXT
    #define GL_PIXEL_UNPACK_BUFFER_EXT 0x88EC
#endif
#ifndef GL_PIXEL_PACK_BUFFER_BINDING_EXT
    #define GL_PIXEL_PACK_BUFFER_BINDING_EXT 0x88ED
#endif
#ifndef GL_PIXEL_UNPACK_BUFFER_BINDING_EXT
    #define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT 0x88EF
#endif

// GL_EXT_pixel_transform

#ifndef GL_PIXEL_TRANSFORM_2D_EXT
    #define GL_PIXEL_TRANSFORM_2D_EXT 0x8330
#endif
#ifndef GL_PIXEL_MAG_FILTER_EXT
    #define GL_PIXEL_MAG_FILTER_EXT 0x8331
#endif
#ifndef GL_PIXEL_MIN_FILTER_EXT
    #define GL_PIXEL_MIN_FILTER_EXT 0x8332
#endif
#ifndef GL_PIXEL_CUBIC_WEIGHT_EXT
    #define GL_PIXEL_CUBIC_WEIGHT_EXT 0x8333
#endif
#ifndef GL_CUBIC_EXT
    #define GL_CUBIC_EXT 0x8334
#endif
#ifndef GL_AVERAGE_EXT
    #define GL_AVERAGE_EXT 0x8335
#endif
#ifndef GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
    #define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8336
#endif
#ifndef GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT
    #define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8337
#endif
#ifndef GL_PIXEL_TRANSFORM_2D_MATRIX_EXT
    #define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT 0x8338
#endif

typedef void (APIENTRY * PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLPIXELTRANSFORMPARAMETERFEXTPROC)(GLenum target, GLenum pname, const GLfloat param);
typedef void (APIENTRY * PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLPIXELTRANSFORMPARAMETERIEXTPROC)(GLenum target, GLenum pname, const GLint param);
typedef void (APIENTRY * PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC)(GLenum target, GLenum pname, const GLint* params);

extern PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC glGetPixelTransformParameterfvEXT;
extern PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC glGetPixelTransformParameterivEXT;
extern PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glPixelTransformParameterfEXT;
extern PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glPixelTransformParameterfvEXT;
extern PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glPixelTransformParameteriEXT;
extern PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glPixelTransformParameterivEXT;

// GL_EXT_point_parameters

#ifndef GL_POINT_SIZE_MIN_EXT
    #define GL_POINT_SIZE_MIN_EXT 0x8126
#endif
#ifndef GL_POINT_SIZE_MAX_EXT
    #define GL_POINT_SIZE_MAX_EXT 0x8127
#endif
#ifndef GL_POINT_FADE_THRESHOLD_SIZE_EXT
    #define GL_POINT_FADE_THRESHOLD_SIZE_EXT 0x8128
#endif
#ifndef GL_DISTANCE_ATTENUATION_EXT
    #define GL_DISTANCE_ATTENUATION_EXT 0x8129
#endif

typedef void (APIENTRY * PFNGLPOINTPARAMETERFEXTPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERFVEXTPROC)(GLenum pname, const GLfloat* params);

extern PFNGLPOINTPARAMETERFEXTPROC glPointParameterfEXT;
extern PFNGLPOINTPARAMETERFVEXTPROC glPointParameterfvEXT;

// GL_EXT_polygon_offset

#ifndef GL_POLYGON_OFFSET_EXT
    #define GL_POLYGON_OFFSET_EXT 0x8037
#endif
#ifndef GL_POLYGON_OFFSET_FACTOR_EXT
    #define GL_POLYGON_OFFSET_FACTOR_EXT 0x8038
#endif
#ifndef GL_POLYGON_OFFSET_BIAS_EXT
    #define GL_POLYGON_OFFSET_BIAS_EXT 0x8039
#endif

typedef void (APIENTRY * PFNGLPOLYGONOFFSETEXTPROC)(GLfloat factor, GLfloat bias);

extern PFNGLPOLYGONOFFSETEXTPROC glPolygonOffsetEXT;

// GL_EXT_provoking_vertex

#ifndef GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT
    #define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#endif
#ifndef GL_FIRST_VERTEX_CONVENTION_EXT
    #define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#endif
#ifndef GL_LAST_VERTEX_CONVENTION_EXT
    #define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#endif
#ifndef GL_PROVOKING_VERTEX_EXT
    #define GL_PROVOKING_VERTEX_EXT 0x8E4F
#endif

typedef void (APIENTRY * PFNGLPROVOKINGVERTEXEXTPROC)(GLenum mode);

extern PFNGLPROVOKINGVERTEXEXTPROC glProvokingVertexEXT;

// GL_EXT_rescale_normal

#ifndef GL_RESCALE_NORMAL_EXT
    #define GL_RESCALE_NORMAL_EXT 0x803A
#endif

// GL_EXT_scene_marker


typedef void (APIENTRY * PFNGLBEGINSCENEEXTPROC)(void);
typedef void (APIENTRY * PFNGLENDSCENEEXTPROC)(void);

extern PFNGLBEGINSCENEEXTPROC glBeginSceneEXT;
extern PFNGLENDSCENEEXTPROC glEndSceneEXT;

// GL_EXT_secondary_color

#ifndef GL_COLOR_SUM_EXT
    #define GL_COLOR_SUM_EXT 0x8458
#endif
#ifndef GL_CURRENT_SECONDARY_COLOR_EXT
    #define GL_CURRENT_SECONDARY_COLOR_EXT 0x8459
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_SIZE_EXT
    #define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_TYPE_EXT
    #define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT
    #define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_POINTER_EXT
    #define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_EXT
    #define GL_SECONDARY_COLOR_ARRAY_EXT 0x845E
#endif

typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BEXTPROC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3BVEXTPROC)(const GLbyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DEXTPROC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3DVEXTPROC)(const GLdouble *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FEXTPROC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3FVEXTPROC)(const GLfloat *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IEXTPROC)(GLint red, GLint green, GLint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3IVEXTPROC)(const GLint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SEXTPROC)(GLshort red, GLshort green, GLshort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3SVEXTPROC)(const GLshort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBEXTPROC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UBVEXTPROC)(const GLubyte *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIEXTPROC)(GLuint red, GLuint green, GLuint blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3UIVEXTPROC)(const GLuint *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USEXTPROC)(GLushort red, GLushort green, GLushort blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3USVEXTPROC)(const GLushort *v);
typedef void (APIENTRY * PFNGLSECONDARYCOLORPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, const GLvoid *pointer);

extern PFNGLSECONDARYCOLOR3BEXTPROC glSecondaryColor3bEXT;
extern PFNGLSECONDARYCOLOR3BVEXTPROC glSecondaryColor3bvEXT;
extern PFNGLSECONDARYCOLOR3DEXTPROC glSecondaryColor3dEXT;
extern PFNGLSECONDARYCOLOR3DVEXTPROC glSecondaryColor3dvEXT;
extern PFNGLSECONDARYCOLOR3FEXTPROC glSecondaryColor3fEXT;
extern PFNGLSECONDARYCOLOR3FVEXTPROC glSecondaryColor3fvEXT;
extern PFNGLSECONDARYCOLOR3IEXTPROC glSecondaryColor3iEXT;
extern PFNGLSECONDARYCOLOR3IVEXTPROC glSecondaryColor3ivEXT;
extern PFNGLSECONDARYCOLOR3SEXTPROC glSecondaryColor3sEXT;
extern PFNGLSECONDARYCOLOR3SVEXTPROC glSecondaryColor3svEXT;
extern PFNGLSECONDARYCOLOR3UBEXTPROC glSecondaryColor3ubEXT;
extern PFNGLSECONDARYCOLOR3UBVEXTPROC glSecondaryColor3ubvEXT;
extern PFNGLSECONDARYCOLOR3UIEXTPROC glSecondaryColor3uiEXT;
extern PFNGLSECONDARYCOLOR3UIVEXTPROC glSecondaryColor3uivEXT;
extern PFNGLSECONDARYCOLOR3USEXTPROC glSecondaryColor3usEXT;
extern PFNGLSECONDARYCOLOR3USVEXTPROC glSecondaryColor3usvEXT;
extern PFNGLSECONDARYCOLORPOINTEREXTPROC glSecondaryColorPointerEXT;

// GL_EXT_separate_shader_objects

#ifndef GL_ACTIVE_PROGRAM_EXT
    #define GL_ACTIVE_PROGRAM_EXT 0x8B8D
#endif

typedef void (APIENTRY * PFNGLACTIVEPROGRAMEXTPROC)(GLuint program);
typedef GLuint (APIENTRY * PFNGLCREATESHADERPROGRAMEXTPROC)(GLenum type, const char* string);
typedef void (APIENTRY * PFNGLUSESHADERPROGRAMEXTPROC)(GLenum type, GLuint program);

extern PFNGLACTIVEPROGRAMEXTPROC glActiveProgramEXT;
extern PFNGLCREATESHADERPROGRAMEXTPROC glCreateShaderProgramEXT;
extern PFNGLUSESHADERPROGRAMEXTPROC glUseShaderProgramEXT;

// GL_EXT_separate_specular_color

#ifndef GL_LIGHT_MODEL_COLOR_CONTROL_EXT
    #define GL_LIGHT_MODEL_COLOR_CONTROL_EXT 0x81F8
#endif
#ifndef GL_SINGLE_COLOR_EXT
    #define GL_SINGLE_COLOR_EXT 0x81F9
#endif
#ifndef GL_SEPARATE_SPECULAR_COLOR_EXT
    #define GL_SEPARATE_SPECULAR_COLOR_EXT 0x81FA
#endif

// GL_EXT_shader_image_load_store

#ifndef GL_MAX_IMAGE_UNITS_EXT
    #define GL_MAX_IMAGE_UNITS_EXT 0x8F38
#endif
#ifndef GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT
    #define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT 0x8F39
#endif
#ifndef GL_IMAGE_BINDING_NAME_EXT
    #define GL_IMAGE_BINDING_NAME_EXT 0x8F3A
#endif
#ifndef GL_IMAGE_BINDING_LEVEL_EXT
    #define GL_IMAGE_BINDING_LEVEL_EXT 0x8F3B
#endif
#ifndef GL_IMAGE_BINDING_LAYERED_EXT
    #define GL_IMAGE_BINDING_LAYERED_EXT 0x8F3C
#endif
#ifndef GL_IMAGE_BINDING_LAYER_EXT
    #define GL_IMAGE_BINDING_LAYER_EXT 0x8F3D
#endif
#ifndef GL_IMAGE_BINDING_ACCESS_EXT
    #define GL_IMAGE_BINDING_ACCESS_EXT 0x8F3E
#endif
#ifndef GL_IMAGE_1D_EXT
    #define GL_IMAGE_1D_EXT 0x904C
#endif
#ifndef GL_IMAGE_2D_EXT
    #define GL_IMAGE_2D_EXT 0x904D
#endif
#ifndef GL_IMAGE_3D_EXT
    #define GL_IMAGE_3D_EXT 0x904E
#endif
#ifndef GL_IMAGE_2D_RECT_EXT
    #define GL_IMAGE_2D_RECT_EXT 0x904F
#endif
#ifndef GL_IMAGE_CUBE_EXT
    #define GL_IMAGE_CUBE_EXT 0x9050
#endif
#ifndef GL_IMAGE_BUFFER_EXT
    #define GL_IMAGE_BUFFER_EXT 0x9051
#endif
#ifndef GL_IMAGE_1D_ARRAY_EXT
    #define GL_IMAGE_1D_ARRAY_EXT 0x9052
#endif
#ifndef GL_IMAGE_2D_ARRAY_EXT
    #define GL_IMAGE_2D_ARRAY_EXT 0x9053
#endif
#ifndef GL_IMAGE_CUBE_MAP_ARRAY_EXT
    #define GL_IMAGE_CUBE_MAP_ARRAY_EXT 0x9054
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE_EXT
    #define GL_IMAGE_2D_MULTISAMPLE_EXT 0x9055
#endif
#ifndef GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT
    #define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9056
#endif
#ifndef GL_INT_IMAGE_1D_EXT
    #define GL_INT_IMAGE_1D_EXT 0x9057
#endif
#ifndef GL_INT_IMAGE_2D_EXT
    #define GL_INT_IMAGE_2D_EXT 0x9058
#endif
#ifndef GL_INT_IMAGE_3D_EXT
    #define GL_INT_IMAGE_3D_EXT 0x9059
#endif
#ifndef GL_INT_IMAGE_2D_RECT_EXT
    #define GL_INT_IMAGE_2D_RECT_EXT 0x905A
#endif
#ifndef GL_INT_IMAGE_CUBE_EXT
    #define GL_INT_IMAGE_CUBE_EXT 0x905B
#endif
#ifndef GL_INT_IMAGE_BUFFER_EXT
    #define GL_INT_IMAGE_BUFFER_EXT 0x905C
#endif
#ifndef GL_INT_IMAGE_1D_ARRAY_EXT
    #define GL_INT_IMAGE_1D_ARRAY_EXT 0x905D
#endif
#ifndef GL_INT_IMAGE_2D_ARRAY_EXT
    #define GL_INT_IMAGE_2D_ARRAY_EXT 0x905E
#endif
#ifndef GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT
    #define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x905F
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE_EXT
    #define GL_INT_IMAGE_2D_MULTISAMPLE_EXT 0x9060
#endif
#ifndef GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT
    #define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9061
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D_EXT
    #define GL_UNSIGNED_INT_IMAGE_1D_EXT 0x9062
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_EXT
    #define GL_UNSIGNED_INT_IMAGE_2D_EXT 0x9063
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_3D_EXT
    #define GL_UNSIGNED_INT_IMAGE_3D_EXT 0x9064
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT
    #define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT 0x9065
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE_EXT
    #define GL_UNSIGNED_INT_IMAGE_CUBE_EXT 0x9066
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_BUFFER_EXT
    #define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT 0x9067
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT
    #define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT 0x9068
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT
    #define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT 0x9069
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT
    #define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT
    #define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT 0x906B
#endif
#ifndef GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT
    #define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x906C
#endif
#ifndef GL_MAX_IMAGE_SAMPLES_EXT
    #define GL_MAX_IMAGE_SAMPLES_EXT 0x906D
#endif
#ifndef GL_IMAGE_BINDING_FORMAT_EXT
    #define GL_IMAGE_BINDING_FORMAT_EXT 0x906E
#endif

typedef void (APIENTRY * PFNGLBINDIMAGETEXTUREEXTPROC)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
typedef void (APIENTRY * PFNGLMEMORYBARRIEREXTPROC)(GLbitfield barriers);

extern PFNGLBINDIMAGETEXTUREEXTPROC glBindImageTextureEXT;
extern PFNGLMEMORYBARRIEREXTPROC glMemoryBarrierEXT;

// GL_EXT_shared_texture_palette

#ifndef GL_SHARED_TEXTURE_PALETTE_EXT
    #define GL_SHARED_TEXTURE_PALETTE_EXT 0x81FB
#endif

// GL_EXT_stencil_clear_tag

#ifndef GL_STENCIL_TAG_BITS_EXT
    #define GL_STENCIL_TAG_BITS_EXT 0x88F2
#endif
#ifndef GL_STENCIL_CLEAR_TAG_VALUE_EXT
    #define GL_STENCIL_CLEAR_TAG_VALUE_EXT 0x88F3
#endif

// GL_EXT_stencil_two_side

#ifndef GL_STENCIL_TEST_TWO_SIDE_EXT
    #define GL_STENCIL_TEST_TWO_SIDE_EXT 0x8910
#endif
#ifndef GL_ACTIVE_STENCIL_FACE_EXT
    #define GL_ACTIVE_STENCIL_FACE_EXT 0x8911
#endif

typedef void (APIENTRY * PFNGLACTIVESTENCILFACEEXTPROC)(GLenum face);

extern PFNGLACTIVESTENCILFACEEXTPROC glActiveStencilFaceEXT;

// GL_EXT_stencil_wrap

#ifndef GL_INCR_WRAP_EXT
    #define GL_INCR_WRAP_EXT 0x8507
#endif
#ifndef GL_DECR_WRAP_EXT
    #define GL_DECR_WRAP_EXT 0x8508
#endif

// GL_EXT_subtexture


typedef void (APIENTRY * PFNGLTEXSUBIMAGE1DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXSUBIMAGE2DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXSUBIMAGE3DEXTPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void* pixels);

extern PFNGLTEXSUBIMAGE1DEXTPROC glTexSubImage1DEXT;
extern PFNGLTEXSUBIMAGE2DEXTPROC glTexSubImage2DEXT;
extern PFNGLTEXSUBIMAGE3DEXTPROC glTexSubImage3DEXT;

// GL_EXT_texture

#ifndef GL_ALPHA4_EXT
    #define GL_ALPHA4_EXT 0x803B
#endif
#ifndef GL_ALPHA8_EXT
    #define GL_ALPHA8_EXT 0x803C
#endif
#ifndef GL_ALPHA12_EXT
    #define GL_ALPHA12_EXT 0x803D
#endif
#ifndef GL_ALPHA16_EXT
    #define GL_ALPHA16_EXT 0x803E
#endif
#ifndef GL_LUMINANCE4_EXT
    #define GL_LUMINANCE4_EXT 0x803F
#endif
#ifndef GL_LUMINANCE8_EXT
    #define GL_LUMINANCE8_EXT 0x8040
#endif
#ifndef GL_LUMINANCE12_EXT
    #define GL_LUMINANCE12_EXT 0x8041
#endif
#ifndef GL_LUMINANCE16_EXT
    #define GL_LUMINANCE16_EXT 0x8042
#endif
#ifndef GL_LUMINANCE4_ALPHA4_EXT
    #define GL_LUMINANCE4_ALPHA4_EXT 0x8043
#endif
#ifndef GL_LUMINANCE6_ALPHA2_EXT
    #define GL_LUMINANCE6_ALPHA2_EXT 0x8044
#endif
#ifndef GL_LUMINANCE8_ALPHA8_EXT
    #define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#endif
#ifndef GL_LUMINANCE12_ALPHA4_EXT
    #define GL_LUMINANCE12_ALPHA4_EXT 0x8046
#endif
#ifndef GL_LUMINANCE12_ALPHA12_EXT
    #define GL_LUMINANCE12_ALPHA12_EXT 0x8047
#endif
#ifndef GL_LUMINANCE16_ALPHA16_EXT
    #define GL_LUMINANCE16_ALPHA16_EXT 0x8048
#endif
#ifndef GL_INTENSITY_EXT
    #define GL_INTENSITY_EXT 0x8049
#endif
#ifndef GL_INTENSITY4_EXT
    #define GL_INTENSITY4_EXT 0x804A
#endif
#ifndef GL_INTENSITY8_EXT
    #define GL_INTENSITY8_EXT 0x804B
#endif
#ifndef GL_INTENSITY12_EXT
    #define GL_INTENSITY12_EXT 0x804C
#endif
#ifndef GL_INTENSITY16_EXT
    #define GL_INTENSITY16_EXT 0x804D
#endif
#ifndef GL_RGB2_EXT
    #define GL_RGB2_EXT 0x804E
#endif
#ifndef GL_RGB4_EXT
    #define GL_RGB4_EXT 0x804F
#endif
#ifndef GL_RGB5_EXT
    #define GL_RGB5_EXT 0x8050
#endif
#ifndef GL_RGB8_EXT
    #define GL_RGB8_EXT 0x8051
#endif
#ifndef GL_RGB10_EXT
    #define GL_RGB10_EXT 0x8052
#endif
#ifndef GL_RGB12_EXT
    #define GL_RGB12_EXT 0x8053
#endif
#ifndef GL_RGB16_EXT
    #define GL_RGB16_EXT 0x8054
#endif
#ifndef GL_RGBA2_EXT
    #define GL_RGBA2_EXT 0x8055
#endif
#ifndef GL_RGBA4_EXT
    #define GL_RGBA4_EXT 0x8056
#endif
#ifndef GL_RGB5_A1_EXT
    #define GL_RGB5_A1_EXT 0x8057
#endif
#ifndef GL_RGBA8_EXT
    #define GL_RGBA8_EXT 0x8058
#endif
#ifndef GL_RGB10_A2_EXT
    #define GL_RGB10_A2_EXT 0x8059
#endif
#ifndef GL_RGBA12_EXT
    #define GL_RGBA12_EXT 0x805A
#endif
#ifndef GL_RGBA16_EXT
    #define GL_RGBA16_EXT 0x805B
#endif
#ifndef GL_TEXTURE_RED_SIZE_EXT
    #define GL_TEXTURE_RED_SIZE_EXT 0x805C
#endif
#ifndef GL_TEXTURE_GREEN_SIZE_EXT
    #define GL_TEXTURE_GREEN_SIZE_EXT 0x805D
#endif
#ifndef GL_TEXTURE_BLUE_SIZE_EXT
    #define GL_TEXTURE_BLUE_SIZE_EXT 0x805E
#endif
#ifndef GL_TEXTURE_ALPHA_SIZE_EXT
    #define GL_TEXTURE_ALPHA_SIZE_EXT 0x805F
#endif
#ifndef GL_TEXTURE_LUMINANCE_SIZE_EXT
    #define GL_TEXTURE_LUMINANCE_SIZE_EXT 0x8060
#endif
#ifndef GL_TEXTURE_INTENSITY_SIZE_EXT
    #define GL_TEXTURE_INTENSITY_SIZE_EXT 0x8061
#endif
#ifndef GL_REPLACE_EXT
    #define GL_REPLACE_EXT 0x8062
#endif
#ifndef GL_PROXY_TEXTURE_1D_EXT
    #define GL_PROXY_TEXTURE_1D_EXT 0x8063
#endif
#ifndef GL_PROXY_TEXTURE_2D_EXT
    #define GL_PROXY_TEXTURE_2D_EXT 0x8064
#endif

// GL_EXT_texture3D

#ifndef GL_PACK_SKIP_IMAGES_EXT
    #define GL_PACK_SKIP_IMAGES_EXT 0x806B
#endif
#ifndef GL_PACK_IMAGE_HEIGHT_EXT
    #define GL_PACK_IMAGE_HEIGHT_EXT 0x806C
#endif
#ifndef GL_UNPACK_SKIP_IMAGES_EXT
    #define GL_UNPACK_SKIP_IMAGES_EXT 0x806D
#endif
#ifndef GL_UNPACK_IMAGE_HEIGHT_EXT
    #define GL_UNPACK_IMAGE_HEIGHT_EXT 0x806E
#endif
#ifndef GL_TEXTURE_3D_EXT
    #define GL_TEXTURE_3D_EXT 0x806F
#endif
#ifndef GL_PROXY_TEXTURE_3D_EXT
    #define GL_PROXY_TEXTURE_3D_EXT 0x8070
#endif
#ifndef GL_TEXTURE_DEPTH_EXT
    #define GL_TEXTURE_DEPTH_EXT 0x8071
#endif
#ifndef GL_TEXTURE_WRAP_R_EXT
    #define GL_TEXTURE_WRAP_R_EXT 0x8072
#endif
#ifndef GL_MAX_3D_TEXTURE_SIZE_EXT
    #define GL_MAX_3D_TEXTURE_SIZE_EXT 0x8073
#endif

typedef void (APIENTRY * PFNGLTEXIMAGE3DEXTPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void* pixels);

extern PFNGLTEXIMAGE3DEXTPROC glTexImage3DEXT;

// GL_EXT_texture_array

#ifndef GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT
    #define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E
#endif
#ifndef GL_MAX_ARRAY_TEXTURE_LAYERS_EXT
    #define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT 0x88FF
#endif
#ifndef GL_TEXTURE_1D_ARRAY_EXT
    #define GL_TEXTURE_1D_ARRAY_EXT 0x8C18
#endif
#ifndef GL_PROXY_TEXTURE_1D_ARRAY_EXT
    #define GL_PROXY_TEXTURE_1D_ARRAY_EXT 0x8C19
#endif
#ifndef GL_TEXTURE_2D_ARRAY_EXT
    #define GL_TEXTURE_2D_ARRAY_EXT 0x8C1A
#endif
#ifndef GL_PROXY_TEXTURE_2D_ARRAY_EXT
    #define GL_PROXY_TEXTURE_2D_ARRAY_EXT 0x8C1B
#endif
#ifndef GL_TEXTURE_BINDING_1D_ARRAY_EXT
    #define GL_TEXTURE_BINDING_1D_ARRAY_EXT 0x8C1C
#endif
#ifndef GL_TEXTURE_BINDING_2D_ARRAY_EXT
    #define GL_TEXTURE_BINDING_2D_ARRAY_EXT 0x8C1D
#endif

// GL_EXT_texture_buffer_object

#ifndef GL_TEXTURE_BUFFER_EXT
    #define GL_TEXTURE_BUFFER_EXT 0x8C2A
#endif
#ifndef GL_MAX_TEXTURE_BUFFER_SIZE_EXT
    #define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#endif
#ifndef GL_TEXTURE_BINDING_BUFFER_EXT
    #define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#endif
#ifndef GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT
    #define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#endif
#ifndef GL_TEXTURE_BUFFER_FORMAT_EXT
    #define GL_TEXTURE_BUFFER_FORMAT_EXT 0x8C2E
#endif

typedef void (APIENTRY * PFNGLTEXBUFFEREXTPROC)(GLenum target, GLenum internalformat, GLuint buffer);

extern PFNGLTEXBUFFEREXTPROC glTexBufferEXT;

// GL_EXT_texture_compression_dxt1

#ifndef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
    #define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#endif
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
    #define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#endif

// GL_EXT_texture_compression_latc

#ifndef GL_COMPRESSED_LUMINANCE_LATC1_EXT
    #define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#endif
#ifndef GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT
    #define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#endif
#ifndef GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT
    #define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#endif
#ifndef GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT
    #define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73
#endif

// GL_EXT_texture_compression_rgtc

#ifndef GL_COMPRESSED_RED_RGTC1_EXT
    #define GL_COMPRESSED_RED_RGTC1_EXT 0x8DBB
#endif
#ifndef GL_COMPRESSED_SIGNED_RED_RGTC1_EXT
    #define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#endif
#ifndef GL_COMPRESSED_RED_GREEN_RGTC2_EXT
    #define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#endif
#ifndef GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT
    #define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE
#endif

// GL_EXT_texture_compression_s3tc

#ifndef GL_COMPRESSED_RGB_S3TC_DXT1_EXT
    #define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#endif
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT1_EXT
    #define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1
#endif
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT3_EXT
    #define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#endif
#ifndef GL_COMPRESSED_RGBA_S3TC_DXT5_EXT
    #define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3
#endif

// GL_EXT_texture_cube_map

#ifndef GL_NORMAL_MAP_EXT
    #define GL_NORMAL_MAP_EXT 0x8511
#endif
#ifndef GL_REFLECTION_MAP_EXT
    #define GL_REFLECTION_MAP_EXT 0x8512
#endif
#ifndef GL_TEXTURE_CUBE_MAP_EXT
    #define GL_TEXTURE_CUBE_MAP_EXT 0x8513
#endif
#ifndef GL_TEXTURE_BINDING_CUBE_MAP_EXT
    #define GL_TEXTURE_BINDING_CUBE_MAP_EXT 0x8514
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_X_EXT 0x8515
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_EXT 0x8516
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_EXT 0x8517
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_EXT 0x8518
#endif
#ifndef GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT
    #define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_EXT 0x8519
#endif
#ifndef GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT
    #define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_EXT 0x851A
#endif
#ifndef GL_PROXY_TEXTURE_CUBE_MAP_EXT
    #define GL_PROXY_TEXTURE_CUBE_MAP_EXT 0x851B
#endif
#ifndef GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT
    #define GL_MAX_CUBE_MAP_TEXTURE_SIZE_EXT 0x851C
#endif

// GL_EXT_texture_edge_clamp

#ifndef GL_CLAMP_TO_EDGE_EXT
    #define GL_CLAMP_TO_EDGE_EXT 0x812F
#endif

// GL_EXT_texture_env_combine

#ifndef GL_COMBINE_EXT
    #define GL_COMBINE_EXT 0x8570
#endif
#ifndef GL_COMBINE_RGB_EXT
    #define GL_COMBINE_RGB_EXT 0x8571
#endif
#ifndef GL_COMBINE_ALPHA_EXT
    #define GL_COMBINE_ALPHA_EXT 0x8572
#endif
#ifndef GL_RGB_SCALE_EXT
    #define GL_RGB_SCALE_EXT 0x8573
#endif
#ifndef GL_ADD_SIGNED_EXT
    #define GL_ADD_SIGNED_EXT 0x8574
#endif
#ifndef GL_INTERPOLATE_EXT
    #define GL_INTERPOLATE_EXT 0x8575
#endif
#ifndef GL_CONSTANT_EXT
    #define GL_CONSTANT_EXT 0x8576
#endif
#ifndef GL_PRIMARY_COLOR_EXT
    #define GL_PRIMARY_COLOR_EXT 0x8577
#endif
#ifndef GL_PREVIOUS_EXT
    #define GL_PREVIOUS_EXT 0x8578
#endif
#ifndef GL_SOURCE0_RGB_EXT
    #define GL_SOURCE0_RGB_EXT 0x8580
#endif
#ifndef GL_SOURCE1_RGB_EXT
    #define GL_SOURCE1_RGB_EXT 0x8581
#endif
#ifndef GL_SOURCE2_RGB_EXT
    #define GL_SOURCE2_RGB_EXT 0x8582
#endif
#ifndef GL_SOURCE0_ALPHA_EXT
    #define GL_SOURCE0_ALPHA_EXT 0x8588
#endif
#ifndef GL_SOURCE1_ALPHA_EXT
    #define GL_SOURCE1_ALPHA_EXT 0x8589
#endif
#ifndef GL_SOURCE2_ALPHA_EXT
    #define GL_SOURCE2_ALPHA_EXT 0x858A
#endif
#ifndef GL_OPERAND0_RGB_EXT
    #define GL_OPERAND0_RGB_EXT 0x8590
#endif
#ifndef GL_OPERAND1_RGB_EXT
    #define GL_OPERAND1_RGB_EXT 0x8591
#endif
#ifndef GL_OPERAND2_RGB_EXT
    #define GL_OPERAND2_RGB_EXT 0x8592
#endif
#ifndef GL_OPERAND0_ALPHA_EXT
    #define GL_OPERAND0_ALPHA_EXT 0x8598
#endif
#ifndef GL_OPERAND1_ALPHA_EXT
    #define GL_OPERAND1_ALPHA_EXT 0x8599
#endif
#ifndef GL_OPERAND2_ALPHA_EXT
    #define GL_OPERAND2_ALPHA_EXT 0x859A
#endif

// GL_EXT_texture_env_dot3

#ifndef GL_DOT3_RGB_EXT
    #define GL_DOT3_RGB_EXT 0x8740
#endif
#ifndef GL_DOT3_RGBA_EXT
    #define GL_DOT3_RGBA_EXT 0x8741
#endif

// GL_EXT_texture_filter_anisotropic

#ifndef GL_TEXTURE_MAX_ANISOTROPY_EXT
    #define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#endif
#ifndef GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT
    #define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF
#endif

// GL_EXT_texture_integer

#ifndef GL_RGBA32UI_EXT
    #define GL_RGBA32UI_EXT 0x8D70
#endif
#ifndef GL_RGB32UI_EXT
    #define GL_RGB32UI_EXT 0x8D71
#endif
#ifndef GL_ALPHA32UI_EXT
    #define GL_ALPHA32UI_EXT 0x8D72
#endif
#ifndef GL_INTENSITY32UI_EXT
    #define GL_INTENSITY32UI_EXT 0x8D73
#endif
#ifndef GL_LUMINANCE32UI_EXT
    #define GL_LUMINANCE32UI_EXT 0x8D74
#endif
#ifndef GL_LUMINANCE_ALPHA32UI_EXT
    #define GL_LUMINANCE_ALPHA32UI_EXT 0x8D75
#endif
#ifndef GL_RGBA16UI_EXT
    #define GL_RGBA16UI_EXT 0x8D76
#endif
#ifndef GL_RGB16UI_EXT
    #define GL_RGB16UI_EXT 0x8D77
#endif
#ifndef GL_ALPHA16UI_EXT
    #define GL_ALPHA16UI_EXT 0x8D78
#endif
#ifndef GL_INTENSITY16UI_EXT
    #define GL_INTENSITY16UI_EXT 0x8D79
#endif
#ifndef GL_LUMINANCE16UI_EXT
    #define GL_LUMINANCE16UI_EXT 0x8D7A
#endif
#ifndef GL_LUMINANCE_ALPHA16UI_EXT
    #define GL_LUMINANCE_ALPHA16UI_EXT 0x8D7B
#endif
#ifndef GL_RGBA8UI_EXT
    #define GL_RGBA8UI_EXT 0x8D7C
#endif
#ifndef GL_RGB8UI_EXT
    #define GL_RGB8UI_EXT 0x8D7D
#endif
#ifndef GL_ALPHA8UI_EXT
    #define GL_ALPHA8UI_EXT 0x8D7E
#endif
#ifndef GL_INTENSITY8UI_EXT
    #define GL_INTENSITY8UI_EXT 0x8D7F
#endif
#ifndef GL_LUMINANCE8UI_EXT
    #define GL_LUMINANCE8UI_EXT 0x8D80
#endif
#ifndef GL_LUMINANCE_ALPHA8UI_EXT
    #define GL_LUMINANCE_ALPHA8UI_EXT 0x8D81
#endif
#ifndef GL_RGBA32I_EXT
    #define GL_RGBA32I_EXT 0x8D82
#endif
#ifndef GL_RGB32I_EXT
    #define GL_RGB32I_EXT 0x8D83
#endif
#ifndef GL_ALPHA32I_EXT
    #define GL_ALPHA32I_EXT 0x8D84
#endif
#ifndef GL_INTENSITY32I_EXT
    #define GL_INTENSITY32I_EXT 0x8D85
#endif
#ifndef GL_LUMINANCE32I_EXT
    #define GL_LUMINANCE32I_EXT 0x8D86
#endif
#ifndef GL_LUMINANCE_ALPHA32I_EXT
    #define GL_LUMINANCE_ALPHA32I_EXT 0x8D87
#endif
#ifndef GL_RGBA16I_EXT
    #define GL_RGBA16I_EXT 0x8D88
#endif
#ifndef GL_RGB16I_EXT
    #define GL_RGB16I_EXT 0x8D89
#endif
#ifndef GL_ALPHA16I_EXT
    #define GL_ALPHA16I_EXT 0x8D8A
#endif
#ifndef GL_INTENSITY16I_EXT
    #define GL_INTENSITY16I_EXT 0x8D8B
#endif
#ifndef GL_LUMINANCE16I_EXT
    #define GL_LUMINANCE16I_EXT 0x8D8C
#endif
#ifndef GL_LUMINANCE_ALPHA16I_EXT
    #define GL_LUMINANCE_ALPHA16I_EXT 0x8D8D
#endif
#ifndef GL_RGBA8I_EXT
    #define GL_RGBA8I_EXT 0x8D8E
#endif
#ifndef GL_RGB8I_EXT
    #define GL_RGB8I_EXT 0x8D8F
#endif
#ifndef GL_ALPHA8I_EXT
    #define GL_ALPHA8I_EXT 0x8D90
#endif
#ifndef GL_INTENSITY8I_EXT
    #define GL_INTENSITY8I_EXT 0x8D91
#endif
#ifndef GL_LUMINANCE8I_EXT
    #define GL_LUMINANCE8I_EXT 0x8D92
#endif
#ifndef GL_LUMINANCE_ALPHA8I_EXT
    #define GL_LUMINANCE_ALPHA8I_EXT 0x8D93
#endif
#ifndef GL_RED_INTEGER_EXT
    #define GL_RED_INTEGER_EXT 0x8D94
#endif
#ifndef GL_GREEN_INTEGER_EXT
    #define GL_GREEN_INTEGER_EXT 0x8D95
#endif
#ifndef GL_BLUE_INTEGER_EXT
    #define GL_BLUE_INTEGER_EXT 0x8D96
#endif
#ifndef GL_ALPHA_INTEGER_EXT
    #define GL_ALPHA_INTEGER_EXT 0x8D97
#endif
#ifndef GL_RGB_INTEGER_EXT
    #define GL_RGB_INTEGER_EXT 0x8D98
#endif
#ifndef GL_RGBA_INTEGER_EXT
    #define GL_RGBA_INTEGER_EXT 0x8D99
#endif
#ifndef GL_BGR_INTEGER_EXT
    #define GL_BGR_INTEGER_EXT 0x8D9A
#endif
#ifndef GL_BGRA_INTEGER_EXT
    #define GL_BGRA_INTEGER_EXT 0x8D9B
#endif
#ifndef GL_LUMINANCE_INTEGER_EXT
    #define GL_LUMINANCE_INTEGER_EXT 0x8D9C
#endif
#ifndef GL_LUMINANCE_ALPHA_INTEGER_EXT
    #define GL_LUMINANCE_ALPHA_INTEGER_EXT 0x8D9D
#endif
#ifndef GL_RGBA_INTEGER_MODE_EXT
    #define GL_RGBA_INTEGER_MODE_EXT 0x8D9E
#endif

typedef void (APIENTRY * PFNGLCLEARCOLORIIEXTPROC)(GLint red, GLint green, GLint blue, GLint alpha);
typedef void (APIENTRY * PFNGLCLEARCOLORIUIEXTPROC)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
typedef void (APIENTRY * PFNGLGETTEXPARAMETERIIVEXTPROC)(GLenum target, GLenum pname, GLint *params);
typedef void (APIENTRY * PFNGLGETTEXPARAMETERIUIVEXTPROC)(GLenum target, GLenum pname, GLuint *params);
typedef void (APIENTRY * PFNGLTEXPARAMETERIIVEXTPROC)(GLenum target, GLenum pname, const GLint *params);
typedef void (APIENTRY * PFNGLTEXPARAMETERIUIVEXTPROC)(GLenum target, GLenum pname, const GLuint *params);

extern PFNGLCLEARCOLORIIEXTPROC glClearColorIiEXT;
extern PFNGLCLEARCOLORIUIEXTPROC glClearColorIuiEXT;
extern PFNGLGETTEXPARAMETERIIVEXTPROC glGetTexParameterIivEXT;
extern PFNGLGETTEXPARAMETERIUIVEXTPROC glGetTexParameterIuivEXT;
extern PFNGLTEXPARAMETERIIVEXTPROC glTexParameterIivEXT;
extern PFNGLTEXPARAMETERIUIVEXTPROC glTexParameterIuivEXT;

// GL_EXT_texture_lod_bias

#ifndef GL_MAX_TEXTURE_LOD_BIAS_EXT
    #define GL_MAX_TEXTURE_LOD_BIAS_EXT 0x84FD
#endif
#ifndef GL_TEXTURE_FILTER_CONTROL_EXT
    #define GL_TEXTURE_FILTER_CONTROL_EXT 0x8500
#endif
#ifndef GL_TEXTURE_LOD_BIAS_EXT
    #define GL_TEXTURE_LOD_BIAS_EXT 0x8501
#endif

// GL_EXT_texture_mirror_clamp

#ifndef GL_MIRROR_CLAMP_EXT
    #define GL_MIRROR_CLAMP_EXT 0x8742
#endif
#ifndef GL_MIRROR_CLAMP_TO_EDGE_EXT
    #define GL_MIRROR_CLAMP_TO_EDGE_EXT 0x8743
#endif
#ifndef GL_MIRROR_CLAMP_TO_BORDER_EXT
    #define GL_MIRROR_CLAMP_TO_BORDER_EXT 0x8912
#endif

// GL_EXT_texture_object

#ifndef GL_TEXTURE_PRIORITY_EXT
    #define GL_TEXTURE_PRIORITY_EXT 0x8066
#endif
#ifndef GL_TEXTURE_RESIDENT_EXT
    #define GL_TEXTURE_RESIDENT_EXT 0x8067
#endif
#ifndef GL_TEXTURE_1D_BINDING_EXT
    #define GL_TEXTURE_1D_BINDING_EXT 0x8068
#endif
#ifndef GL_TEXTURE_2D_BINDING_EXT
    #define GL_TEXTURE_2D_BINDING_EXT 0x8069
#endif
#ifndef GL_TEXTURE_3D_BINDING_EXT
    #define GL_TEXTURE_3D_BINDING_EXT 0x806A
#endif

typedef GLboolean (APIENTRY * PFNGLARETEXTURESRESIDENTEXTPROC)(GLsizei n, const GLuint* textures, GLboolean* residences);
typedef void (APIENTRY * PFNGLBINDTEXTUREEXTPROC)(GLenum target, GLuint texture);
typedef void (APIENTRY * PFNGLDELETETEXTURESEXTPROC)(GLsizei n, const GLuint* textures);
typedef void (APIENTRY * PFNGLGENTEXTURESEXTPROC)(GLsizei n, GLuint* textures);
typedef GLboolean (APIENTRY * PFNGLISTEXTUREEXTPROC)(GLuint texture);
typedef void (APIENTRY * PFNGLPRIORITIZETEXTURESEXTPROC)(GLsizei n, const GLuint* textures, const GLclampf* priorities);

extern PFNGLARETEXTURESRESIDENTEXTPROC glAreTexturesResidentEXT;
extern PFNGLBINDTEXTUREEXTPROC glBindTextureEXT;
extern PFNGLDELETETEXTURESEXTPROC glDeleteTexturesEXT;
extern PFNGLGENTEXTURESEXTPROC glGenTexturesEXT;
extern PFNGLISTEXTUREEXTPROC glIsTextureEXT;
extern PFNGLPRIORITIZETEXTURESEXTPROC glPrioritizeTexturesEXT;

// GL_EXT_texture_perturb_normal

#ifndef GL_PERTURB_EXT
    #define GL_PERTURB_EXT 0x85AE
#endif
#ifndef GL_TEXTURE_NORMAL_EXT
    #define GL_TEXTURE_NORMAL_EXT 0x85AF
#endif

typedef void (APIENTRY * PFNGLTEXTURENORMALEXTPROC)(GLenum mode);

extern PFNGLTEXTURENORMALEXTPROC glTextureNormalEXT;

// GL_EXT_texture_rectangle

#ifndef GL_TEXTURE_RECTANGLE_EXT
    #define GL_TEXTURE_RECTANGLE_EXT 0x84F5
#endif
#ifndef GL_TEXTURE_BINDING_RECTANGLE_EXT
    #define GL_TEXTURE_BINDING_RECTANGLE_EXT 0x84F6
#endif
#ifndef GL_PROXY_TEXTURE_RECTANGLE_EXT
    #define GL_PROXY_TEXTURE_RECTANGLE_EXT 0x84F7
#endif
#ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT
    #define GL_MAX_RECTANGLE_TEXTURE_SIZE_EXT 0x84F8
#endif

// GL_EXT_texture_sRGB

#ifndef GL_SRGB_EXT
    #define GL_SRGB_EXT 0x8C40
#endif
#ifndef GL_SRGB8_EXT
    #define GL_SRGB8_EXT 0x8C41
#endif
#ifndef GL_SRGB_ALPHA_EXT
    #define GL_SRGB_ALPHA_EXT 0x8C42
#endif
#ifndef GL_SRGB8_ALPHA8_EXT
    #define GL_SRGB8_ALPHA8_EXT 0x8C43
#endif
#ifndef GL_SLUMINANCE_ALPHA_EXT
    #define GL_SLUMINANCE_ALPHA_EXT 0x8C44
#endif
#ifndef GL_SLUMINANCE8_ALPHA8_EXT
    #define GL_SLUMINANCE8_ALPHA8_EXT 0x8C45
#endif
#ifndef GL_SLUMINANCE_EXT
    #define GL_SLUMINANCE_EXT 0x8C46
#endif
#ifndef GL_SLUMINANCE8_EXT
    #define GL_SLUMINANCE8_EXT 0x8C47
#endif
#ifndef GL_COMPRESSED_SRGB_EXT
    #define GL_COMPRESSED_SRGB_EXT 0x8C48
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_EXT
    #define GL_COMPRESSED_SRGB_ALPHA_EXT 0x8C49
#endif
#ifndef GL_COMPRESSED_SLUMINANCE_EXT
    #define GL_COMPRESSED_SLUMINANCE_EXT 0x8C4A
#endif
#ifndef GL_COMPRESSED_SLUMINANCE_ALPHA_EXT
    #define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT 0x8C4B
#endif
#ifndef GL_COMPRESSED_SRGB_S3TC_DXT1_EXT
    #define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT 0x8C4C
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT
    #define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT
    #define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#endif
#ifndef GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT
    #define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F
#endif

// GL_EXT_texture_sRGB_decode

#ifndef GL_TEXTURE_SRGB_DECODE_EXT
    #define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#endif
#ifndef GL_DECODE_EXT
    #define GL_DECODE_EXT 0x8A49
#endif
#ifndef GL_SKIP_DECODE_EXT
    #define GL_SKIP_DECODE_EXT 0x8A4A
#endif

// GL_EXT_texture_shared_exponent

#ifndef GL_RGB9_E5_EXT
    #define GL_RGB9_E5_EXT 0x8C3D
#endif
#ifndef GL_UNSIGNED_INT_5_9_9_9_REV_EXT
    #define GL_UNSIGNED_INT_5_9_9_9_REV_EXT 0x8C3E
#endif
#ifndef GL_TEXTURE_SHARED_SIZE_EXT
    #define GL_TEXTURE_SHARED_SIZE_EXT 0x8C3F
#endif

// GL_EXT_texture_snorm

#ifndef GL_RED_SNORM
    #define GL_RED_SNORM 0x8F90
#endif
#ifndef GL_RG_SNORM
    #define GL_RG_SNORM 0x8F91
#endif
#ifndef GL_RGB_SNORM
    #define GL_RGB_SNORM 0x8F92
#endif
#ifndef GL_RGBA_SNORM
    #define GL_RGBA_SNORM 0x8F93
#endif
#ifndef GL_R8_SNORM
    #define GL_R8_SNORM 0x8F94
#endif
#ifndef GL_RG8_SNORM
    #define GL_RG8_SNORM 0x8F95
#endif
#ifndef GL_RGB8_SNORM
    #define GL_RGB8_SNORM 0x8F96
#endif
#ifndef GL_RGBA8_SNORM
    #define GL_RGBA8_SNORM 0x8F97
#endif
#ifndef GL_R16_SNORM
    #define GL_R16_SNORM 0x8F98
#endif
#ifndef GL_RG16_SNORM
    #define GL_RG16_SNORM 0x8F99
#endif
#ifndef GL_RGB16_SNORM
    #define GL_RGB16_SNORM 0x8F9A
#endif
#ifndef GL_RGBA16_SNORM
    #define GL_RGBA16_SNORM 0x8F9B
#endif
#ifndef GL_SIGNED_NORMALIZED
    #define GL_SIGNED_NORMALIZED 0x8F9C
#endif
#ifndef GL_ALPHA_SNORM
    #define GL_ALPHA_SNORM 0x9010
#endif
#ifndef GL_LUMINANCE_SNORM
    #define GL_LUMINANCE_SNORM 0x9011
#endif
#ifndef GL_LUMINANCE_ALPHA_SNORM
    #define GL_LUMINANCE_ALPHA_SNORM 0x9012
#endif
#ifndef GL_INTENSITY_SNORM
    #define GL_INTENSITY_SNORM 0x9013
#endif
#ifndef GL_ALPHA8_SNORM
    #define GL_ALPHA8_SNORM 0x9014
#endif
#ifndef GL_LUMINANCE8_SNORM
    #define GL_LUMINANCE8_SNORM 0x9015
#endif
#ifndef GL_LUMINANCE8_ALPHA8_SNORM
    #define GL_LUMINANCE8_ALPHA8_SNORM 0x9016
#endif
#ifndef GL_INTENSITY8_SNORM
    #define GL_INTENSITY8_SNORM 0x9017
#endif
#ifndef GL_ALPHA16_SNORM
    #define GL_ALPHA16_SNORM 0x9018
#endif
#ifndef GL_LUMINANCE16_SNORM
    #define GL_LUMINANCE16_SNORM 0x9019
#endif
#ifndef GL_LUMINANCE16_ALPHA16_SNORM
    #define GL_LUMINANCE16_ALPHA16_SNORM 0x901A
#endif
#ifndef GL_INTENSITY16_SNORM
    #define GL_INTENSITY16_SNORM 0x901B
#endif

// GL_EXT_texture_swizzle

#ifndef GL_TEXTURE_SWIZZLE_R_EXT
    #define GL_TEXTURE_SWIZZLE_R_EXT 0x8E42
#endif
#ifndef GL_TEXTURE_SWIZZLE_G_EXT
    #define GL_TEXTURE_SWIZZLE_G_EXT 0x8E43
#endif
#ifndef GL_TEXTURE_SWIZZLE_B_EXT
    #define GL_TEXTURE_SWIZZLE_B_EXT 0x8E44
#endif
#ifndef GL_TEXTURE_SWIZZLE_A_EXT
    #define GL_TEXTURE_SWIZZLE_A_EXT 0x8E45
#endif
#ifndef GL_TEXTURE_SWIZZLE_RGBA_EXT
    #define GL_TEXTURE_SWIZZLE_RGBA_EXT 0x8E46
#endif

// GL_EXT_timer_query

#ifndef GL_TIME_ELAPSED_EXT
    #define GL_TIME_ELAPSED_EXT 0x88BF
#endif

typedef void (APIENTRY * PFNGLGETQUERYOBJECTI64VEXTPROC)(GLuint id, GLenum pname, GLint64EXT *params);
typedef void (APIENTRY * PFNGLGETQUERYOBJECTUI64VEXTPROC)(GLuint id, GLenum pname, GLuint64EXT *params);

extern PFNGLGETQUERYOBJECTI64VEXTPROC glGetQueryObjecti64vEXT;
extern PFNGLGETQUERYOBJECTUI64VEXTPROC glGetQueryObjectui64vEXT;

// GL_EXT_transform_feedback

#ifndef GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT
    #define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT 0x8C76
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT
    #define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT 0x8C7F
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT 0x8C80
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYINGS_EXT
    #define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT 0x8C83
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT
    #define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT 0x8C84
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT
    #define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT 0x8C85
#endif
#ifndef GL_PRIMITIVES_GENERATED_EXT
    #define GL_PRIMITIVES_GENERATED_EXT 0x8C87
#endif
#ifndef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT
    #define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT 0x8C88
#endif
#ifndef GL_RASTERIZER_DISCARD_EXT
    #define GL_RASTERIZER_DISCARD_EXT 0x8C89
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT
    #define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT 0x8C8A
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT 0x8C8B
#endif
#ifndef GL_INTERLEAVED_ATTRIBS_EXT
    #define GL_INTERLEAVED_ATTRIBS_EXT 0x8C8C
#endif
#ifndef GL_SEPARATE_ATTRIBS_EXT
    #define GL_SEPARATE_ATTRIBS_EXT 0x8C8D
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_EXT
    #define GL_TRANSFORM_FEEDBACK_BUFFER_EXT 0x8C8E
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT
    #define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT 0x8C8F
#endif

typedef void (APIENTRY * PFNGLBEGINTRANSFORMFEEDBACKEXTPROC)(GLenum primitiveMode);
typedef void (APIENTRY * PFNGLBINDBUFFERBASEEXTPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRY * PFNGLBINDBUFFEROFFSETEXTPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void (APIENTRY * PFNGLBINDBUFFERRANGEEXTPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRY * PFNGLENDTRANSFORMFEEDBACKEXTPROC)(void);
typedef void (APIENTRY * PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei *size, GLenum *type, char *name);
typedef void (APIENTRY * PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC)(GLuint program, GLsizei count, const char ** varyings, GLenum bufferMode);

extern PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glBeginTransformFeedbackEXT;
extern PFNGLBINDBUFFERBASEEXTPROC glBindBufferBaseEXT;
extern PFNGLBINDBUFFEROFFSETEXTPROC glBindBufferOffsetEXT;
extern PFNGLBINDBUFFERRANGEEXTPROC glBindBufferRangeEXT;
extern PFNGLENDTRANSFORMFEEDBACKEXTPROC glEndTransformFeedbackEXT;
extern PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glGetTransformFeedbackVaryingEXT;
extern PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glTransformFeedbackVaryingsEXT;

// GL_EXT_vertex_array

#ifndef GL_DOUBLE_EXT
    #define GL_DOUBLE_EXT 0x140A
#endif
#ifndef GL_VERTEX_ARRAY_EXT
    #define GL_VERTEX_ARRAY_EXT 0x8074
#endif
#ifndef GL_NORMAL_ARRAY_EXT
    #define GL_NORMAL_ARRAY_EXT 0x8075
#endif
#ifndef GL_COLOR_ARRAY_EXT
    #define GL_COLOR_ARRAY_EXT 0x8076
#endif
#ifndef GL_INDEX_ARRAY_EXT
    #define GL_INDEX_ARRAY_EXT 0x8077
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_EXT
    #define GL_TEXTURE_COORD_ARRAY_EXT 0x8078
#endif
#ifndef GL_EDGE_FLAG_ARRAY_EXT
    #define GL_EDGE_FLAG_ARRAY_EXT 0x8079
#endif
#ifndef GL_VERTEX_ARRAY_SIZE_EXT
    #define GL_VERTEX_ARRAY_SIZE_EXT 0x807A
#endif
#ifndef GL_VERTEX_ARRAY_TYPE_EXT
    #define GL_VERTEX_ARRAY_TYPE_EXT 0x807B
#endif
#ifndef GL_VERTEX_ARRAY_STRIDE_EXT
    #define GL_VERTEX_ARRAY_STRIDE_EXT 0x807C
#endif
#ifndef GL_VERTEX_ARRAY_COUNT_EXT
    #define GL_VERTEX_ARRAY_COUNT_EXT 0x807D
#endif
#ifndef GL_NORMAL_ARRAY_TYPE_EXT
    #define GL_NORMAL_ARRAY_TYPE_EXT 0x807E
#endif
#ifndef GL_NORMAL_ARRAY_STRIDE_EXT
    #define GL_NORMAL_ARRAY_STRIDE_EXT 0x807F
#endif
#ifndef GL_NORMAL_ARRAY_COUNT_EXT
    #define GL_NORMAL_ARRAY_COUNT_EXT 0x8080
#endif
#ifndef GL_COLOR_ARRAY_SIZE_EXT
    #define GL_COLOR_ARRAY_SIZE_EXT 0x8081
#endif
#ifndef GL_COLOR_ARRAY_TYPE_EXT
    #define GL_COLOR_ARRAY_TYPE_EXT 0x8082
#endif
#ifndef GL_COLOR_ARRAY_STRIDE_EXT
    #define GL_COLOR_ARRAY_STRIDE_EXT 0x8083
#endif
#ifndef GL_COLOR_ARRAY_COUNT_EXT
    #define GL_COLOR_ARRAY_COUNT_EXT 0x8084
#endif
#ifndef GL_INDEX_ARRAY_TYPE_EXT
    #define GL_INDEX_ARRAY_TYPE_EXT 0x8085
#endif
#ifndef GL_INDEX_ARRAY_STRIDE_EXT
    #define GL_INDEX_ARRAY_STRIDE_EXT 0x8086
#endif
#ifndef GL_INDEX_ARRAY_COUNT_EXT
    #define GL_INDEX_ARRAY_COUNT_EXT 0x8087
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_SIZE_EXT
    #define GL_TEXTURE_COORD_ARRAY_SIZE_EXT 0x8088
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_TYPE_EXT
    #define GL_TEXTURE_COORD_ARRAY_TYPE_EXT 0x8089
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_STRIDE_EXT
    #define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_COUNT_EXT
    #define GL_TEXTURE_COORD_ARRAY_COUNT_EXT 0x808B
#endif
#ifndef GL_EDGE_FLAG_ARRAY_STRIDE_EXT
    #define GL_EDGE_FLAG_ARRAY_STRIDE_EXT 0x808C
#endif
#ifndef GL_EDGE_FLAG_ARRAY_COUNT_EXT
    #define GL_EDGE_FLAG_ARRAY_COUNT_EXT 0x808D
#endif
#ifndef GL_VERTEX_ARRAY_POINTER_EXT
    #define GL_VERTEX_ARRAY_POINTER_EXT 0x808E
#endif
#ifndef GL_NORMAL_ARRAY_POINTER_EXT
    #define GL_NORMAL_ARRAY_POINTER_EXT 0x808F
#endif
#ifndef GL_COLOR_ARRAY_POINTER_EXT
    #define GL_COLOR_ARRAY_POINTER_EXT 0x8090
#endif
#ifndef GL_INDEX_ARRAY_POINTER_EXT
    #define GL_INDEX_ARRAY_POINTER_EXT 0x8091
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_POINTER_EXT
    #define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#endif
#ifndef GL_EDGE_FLAG_ARRAY_POINTER_EXT
    #define GL_EDGE_FLAG_ARRAY_POINTER_EXT 0x8093
#endif

typedef void (APIENTRY * PFNGLARRAYELEMENTEXTPROC)(GLint i);
typedef void (APIENTRY * PFNGLCOLORPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void* pointer);
typedef void (APIENTRY * PFNGLDRAWARRAYSEXTPROC)(GLenum mode, GLint first, GLsizei count);
typedef void (APIENTRY * PFNGLEDGEFLAGPOINTEREXTPROC)(GLsizei stride, GLsizei count, const GLboolean* pointer);
typedef void (APIENTRY * PFNGLINDEXPOINTEREXTPROC)(GLenum type, GLsizei stride, GLsizei count, const void* pointer);
typedef void (APIENTRY * PFNGLNORMALPOINTEREXTPROC)(GLenum type, GLsizei stride, GLsizei count, const void* pointer);
typedef void (APIENTRY * PFNGLTEXCOORDPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void* pointer);
typedef void (APIENTRY * PFNGLVERTEXPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const void* pointer);

extern PFNGLARRAYELEMENTEXTPROC glArrayElementEXT;
extern PFNGLCOLORPOINTEREXTPROC glColorPointerEXT;
extern PFNGLDRAWARRAYSEXTPROC glDrawArraysEXT;
extern PFNGLEDGEFLAGPOINTEREXTPROC glEdgeFlagPointerEXT;
extern PFNGLINDEXPOINTEREXTPROC glIndexPointerEXT;
extern PFNGLNORMALPOINTEREXTPROC glNormalPointerEXT;
extern PFNGLTEXCOORDPOINTEREXTPROC glTexCoordPointerEXT;
extern PFNGLVERTEXPOINTEREXTPROC glVertexPointerEXT;

// GL_EXT_vertex_array_bgra

#ifndef GL_BGRA
    #define GL_BGRA 0x80E1
#endif

// GL_EXT_vertex_attrib_64bit

#ifndef GL_DOUBLE_MAT2_EXT
    #define GL_DOUBLE_MAT2_EXT 0x8F46
#endif
#ifndef GL_DOUBLE_MAT3_EXT
    #define GL_DOUBLE_MAT3_EXT 0x8F47
#endif
#ifndef GL_DOUBLE_MAT4_EXT
    #define GL_DOUBLE_MAT4_EXT 0x8F48
#endif
#ifndef GL_DOUBLE_MAT2x3_EXT
    #define GL_DOUBLE_MAT2x3_EXT 0x8F49
#endif
#ifndef GL_DOUBLE_MAT2x4_EXT
    #define GL_DOUBLE_MAT2x4_EXT 0x8F4A
#endif
#ifndef GL_DOUBLE_MAT3x2_EXT
    #define GL_DOUBLE_MAT3x2_EXT 0x8F4B
#endif
#ifndef GL_DOUBLE_MAT3x4_EXT
    #define GL_DOUBLE_MAT3x4_EXT 0x8F4C
#endif
#ifndef GL_DOUBLE_MAT4x2_EXT
    #define GL_DOUBLE_MAT4x2_EXT 0x8F4D
#endif
#ifndef GL_DOUBLE_MAT4x3_EXT
    #define GL_DOUBLE_MAT4x3_EXT 0x8F4E
#endif
#ifndef GL_DOUBLE_VEC2_EXT
    #define GL_DOUBLE_VEC2_EXT 0x8FFC
#endif
#ifndef GL_DOUBLE_VEC3_EXT
    #define GL_DOUBLE_VEC3_EXT 0x8FFD
#endif
#ifndef GL_DOUBLE_VEC4_EXT
    #define GL_DOUBLE_VEC4_EXT 0x8FFE
#endif

typedef void (APIENTRY * PFNGLGETVERTEXATTRIBLDVEXTPROC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1DEXTPROC)(GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1DVEXTPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2DEXTPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2DVEXTPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3DEXTPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3DVEXTPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4DEXTPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4DVEXTPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBLPOINTEREXTPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);

extern PFNGLGETVERTEXATTRIBLDVEXTPROC glGetVertexAttribLdvEXT;
extern PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glVertexArrayVertexAttribLOffsetEXT;
extern PFNGLVERTEXATTRIBL1DEXTPROC glVertexAttribL1dEXT;
extern PFNGLVERTEXATTRIBL1DVEXTPROC glVertexAttribL1dvEXT;
extern PFNGLVERTEXATTRIBL2DEXTPROC glVertexAttribL2dEXT;
extern PFNGLVERTEXATTRIBL2DVEXTPROC glVertexAttribL2dvEXT;
extern PFNGLVERTEXATTRIBL3DEXTPROC glVertexAttribL3dEXT;
extern PFNGLVERTEXATTRIBL3DVEXTPROC glVertexAttribL3dvEXT;
extern PFNGLVERTEXATTRIBL4DEXTPROC glVertexAttribL4dEXT;
extern PFNGLVERTEXATTRIBL4DVEXTPROC glVertexAttribL4dvEXT;
extern PFNGLVERTEXATTRIBLPOINTEREXTPROC glVertexAttribLPointerEXT;

// GL_EXT_vertex_shader

#ifndef GL_VERTEX_SHADER_EXT
    #define GL_VERTEX_SHADER_EXT 0x8780
#endif
#ifndef GL_VERTEX_SHADER_BINDING_EXT
    #define GL_VERTEX_SHADER_BINDING_EXT 0x8781
#endif
#ifndef GL_OP_INDEX_EXT
    #define GL_OP_INDEX_EXT 0x8782
#endif
#ifndef GL_OP_NEGATE_EXT
    #define GL_OP_NEGATE_EXT 0x8783
#endif
#ifndef GL_OP_DOT3_EXT
    #define GL_OP_DOT3_EXT 0x8784
#endif
#ifndef GL_OP_DOT4_EXT
    #define GL_OP_DOT4_EXT 0x8785
#endif
#ifndef GL_OP_MUL_EXT
    #define GL_OP_MUL_EXT 0x8786
#endif
#ifndef GL_OP_ADD_EXT
    #define GL_OP_ADD_EXT 0x8787
#endif
#ifndef GL_OP_MADD_EXT
    #define GL_OP_MADD_EXT 0x8788
#endif
#ifndef GL_OP_FRAC_EXT
    #define GL_OP_FRAC_EXT 0x8789
#endif
#ifndef GL_OP_MAX_EXT
    #define GL_OP_MAX_EXT 0x878A
#endif
#ifndef GL_OP_MIN_EXT
    #define GL_OP_MIN_EXT 0x878B
#endif
#ifndef GL_OP_SET_GE_EXT
    #define GL_OP_SET_GE_EXT 0x878C
#endif
#ifndef GL_OP_SET_LT_EXT
    #define GL_OP_SET_LT_EXT 0x878D
#endif
#ifndef GL_OP_CLAMP_EXT
    #define GL_OP_CLAMP_EXT 0x878E
#endif
#ifndef GL_OP_FLOOR_EXT
    #define GL_OP_FLOOR_EXT 0x878F
#endif
#ifndef GL_OP_ROUND_EXT
    #define GL_OP_ROUND_EXT 0x8790
#endif
#ifndef GL_OP_EXP_BASE_2_EXT
    #define GL_OP_EXP_BASE_2_EXT 0x8791
#endif
#ifndef GL_OP_LOG_BASE_2_EXT
    #define GL_OP_LOG_BASE_2_EXT 0x8792
#endif
#ifndef GL_OP_POWER_EXT
    #define GL_OP_POWER_EXT 0x8793
#endif
#ifndef GL_OP_RECIP_EXT
    #define GL_OP_RECIP_EXT 0x8794
#endif
#ifndef GL_OP_RECIP_SQRT_EXT
    #define GL_OP_RECIP_SQRT_EXT 0x8795
#endif
#ifndef GL_OP_SUB_EXT
    #define GL_OP_SUB_EXT 0x8796
#endif
#ifndef GL_OP_CROSS_PRODUCT_EXT
    #define GL_OP_CROSS_PRODUCT_EXT 0x8797
#endif
#ifndef GL_OP_MULTIPLY_MATRIX_EXT
    #define GL_OP_MULTIPLY_MATRIX_EXT 0x8798
#endif
#ifndef GL_OP_MOV_EXT
    #define GL_OP_MOV_EXT 0x8799
#endif
#ifndef GL_OUTPUT_VERTEX_EXT
    #define GL_OUTPUT_VERTEX_EXT 0x879A
#endif
#ifndef GL_OUTPUT_COLOR0_EXT
    #define GL_OUTPUT_COLOR0_EXT 0x879B
#endif
#ifndef GL_OUTPUT_COLOR1_EXT
    #define GL_OUTPUT_COLOR1_EXT 0x879C
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD0_EXT
    #define GL_OUTPUT_TEXTURE_COORD0_EXT 0x879D
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD1_EXT
    #define GL_OUTPUT_TEXTURE_COORD1_EXT 0x879E
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD2_EXT
    #define GL_OUTPUT_TEXTURE_COORD2_EXT 0x879F
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD3_EXT
    #define GL_OUTPUT_TEXTURE_COORD3_EXT 0x87A0
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD4_EXT
    #define GL_OUTPUT_TEXTURE_COORD4_EXT 0x87A1
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD5_EXT
    #define GL_OUTPUT_TEXTURE_COORD5_EXT 0x87A2
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD6_EXT
    #define GL_OUTPUT_TEXTURE_COORD6_EXT 0x87A3
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD7_EXT
    #define GL_OUTPUT_TEXTURE_COORD7_EXT 0x87A4
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD8_EXT
    #define GL_OUTPUT_TEXTURE_COORD8_EXT 0x87A5
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD9_EXT
    #define GL_OUTPUT_TEXTURE_COORD9_EXT 0x87A6
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD10_EXT
    #define GL_OUTPUT_TEXTURE_COORD10_EXT 0x87A7
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD11_EXT
    #define GL_OUTPUT_TEXTURE_COORD11_EXT 0x87A8
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD12_EXT
    #define GL_OUTPUT_TEXTURE_COORD12_EXT 0x87A9
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD13_EXT
    #define GL_OUTPUT_TEXTURE_COORD13_EXT 0x87AA
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD14_EXT
    #define GL_OUTPUT_TEXTURE_COORD14_EXT 0x87AB
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD15_EXT
    #define GL_OUTPUT_TEXTURE_COORD15_EXT 0x87AC
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD16_EXT
    #define GL_OUTPUT_TEXTURE_COORD16_EXT 0x87AD
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD17_EXT
    #define GL_OUTPUT_TEXTURE_COORD17_EXT 0x87AE
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD18_EXT
    #define GL_OUTPUT_TEXTURE_COORD18_EXT 0x87AF
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD19_EXT
    #define GL_OUTPUT_TEXTURE_COORD19_EXT 0x87B0
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD20_EXT
    #define GL_OUTPUT_TEXTURE_COORD20_EXT 0x87B1
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD21_EXT
    #define GL_OUTPUT_TEXTURE_COORD21_EXT 0x87B2
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD22_EXT
    #define GL_OUTPUT_TEXTURE_COORD22_EXT 0x87B3
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD23_EXT
    #define GL_OUTPUT_TEXTURE_COORD23_EXT 0x87B4
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD24_EXT
    #define GL_OUTPUT_TEXTURE_COORD24_EXT 0x87B5
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD25_EXT
    #define GL_OUTPUT_TEXTURE_COORD25_EXT 0x87B6
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD26_EXT
    #define GL_OUTPUT_TEXTURE_COORD26_EXT 0x87B7
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD27_EXT
    #define GL_OUTPUT_TEXTURE_COORD27_EXT 0x87B8
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD28_EXT
    #define GL_OUTPUT_TEXTURE_COORD28_EXT 0x87B9
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD29_EXT
    #define GL_OUTPUT_TEXTURE_COORD29_EXT 0x87BA
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD30_EXT
    #define GL_OUTPUT_TEXTURE_COORD30_EXT 0x87BB
#endif
#ifndef GL_OUTPUT_TEXTURE_COORD31_EXT
    #define GL_OUTPUT_TEXTURE_COORD31_EXT 0x87BC
#endif
#ifndef GL_OUTPUT_FOG_EXT
    #define GL_OUTPUT_FOG_EXT 0x87BD
#endif
#ifndef GL_SCALAR_EXT
    #define GL_SCALAR_EXT 0x87BE
#endif
#ifndef GL_VECTOR_EXT
    #define GL_VECTOR_EXT 0x87BF
#endif
#ifndef GL_MATRIX_EXT
    #define GL_MATRIX_EXT 0x87C0
#endif
#ifndef GL_VARIANT_EXT
    #define GL_VARIANT_EXT 0x87C1
#endif
#ifndef GL_INVARIANT_EXT
    #define GL_INVARIANT_EXT 0x87C2
#endif
#ifndef GL_LOCAL_CONSTANT_EXT
    #define GL_LOCAL_CONSTANT_EXT 0x87C3
#endif
#ifndef GL_LOCAL_EXT
    #define GL_LOCAL_EXT 0x87C4
#endif
#ifndef GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT
    #define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#endif
#ifndef GL_MAX_VERTEX_SHADER_VARIANTS_EXT
    #define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#endif
#ifndef GL_MAX_VERTEX_SHADER_INVARIANTS_EXT
    #define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#endif
#ifndef GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
    #define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#endif
#ifndef GL_MAX_VERTEX_SHADER_LOCALS_EXT
    #define GL_MAX_VERTEX_SHADER_LOCALS_EXT 0x87C9
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT
    #define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT
    #define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT
    #define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CC
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
    #define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CD
#endif
#ifndef GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT
    #define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#endif
#ifndef GL_VERTEX_SHADER_INSTRUCTIONS_EXT
    #define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#endif
#ifndef GL_VERTEX_SHADER_VARIANTS_EXT
    #define GL_VERTEX_SHADER_VARIANTS_EXT 0x87D0
#endif
#ifndef GL_VERTEX_SHADER_INVARIANTS_EXT
    #define GL_VERTEX_SHADER_INVARIANTS_EXT 0x87D1
#endif
#ifndef GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT
    #define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#endif
#ifndef GL_VERTEX_SHADER_LOCALS_EXT
    #define GL_VERTEX_SHADER_LOCALS_EXT 0x87D3
#endif
#ifndef GL_VERTEX_SHADER_OPTIMIZED_EXT
    #define GL_VERTEX_SHADER_OPTIMIZED_EXT 0x87D4
#endif
#ifndef GL_X_EXT
    #define GL_X_EXT 0x87D5
#endif
#ifndef GL_Y_EXT
    #define GL_Y_EXT 0x87D6
#endif
#ifndef GL_Z_EXT
    #define GL_Z_EXT 0x87D7
#endif
#ifndef GL_W_EXT
    #define GL_W_EXT 0x87D8
#endif
#ifndef GL_NEGATIVE_X_EXT
    #define GL_NEGATIVE_X_EXT 0x87D9
#endif
#ifndef GL_NEGATIVE_Y_EXT
    #define GL_NEGATIVE_Y_EXT 0x87DA
#endif
#ifndef GL_NEGATIVE_Z_EXT
    #define GL_NEGATIVE_Z_EXT 0x87DB
#endif
#ifndef GL_NEGATIVE_W_EXT
    #define GL_NEGATIVE_W_EXT 0x87DC
#endif
#ifndef GL_ZERO_EXT
    #define GL_ZERO_EXT 0x87DD
#endif
#ifndef GL_ONE_EXT
    #define GL_ONE_EXT 0x87DE
#endif
#ifndef GL_NEGATIVE_ONE_EXT
    #define GL_NEGATIVE_ONE_EXT 0x87DF
#endif
#ifndef GL_NORMALIZED_RANGE_EXT
    #define GL_NORMALIZED_RANGE_EXT 0x87E0
#endif
#ifndef GL_FULL_RANGE_EXT
    #define GL_FULL_RANGE_EXT 0x87E1
#endif
#ifndef GL_CURRENT_VERTEX_EXT
    #define GL_CURRENT_VERTEX_EXT 0x87E2
#endif
#ifndef GL_MVP_MATRIX_EXT
    #define GL_MVP_MATRIX_EXT 0x87E3
#endif
#ifndef GL_VARIANT_VALUE_EXT
    #define GL_VARIANT_VALUE_EXT 0x87E4
#endif
#ifndef GL_VARIANT_DATATYPE_EXT
    #define GL_VARIANT_DATATYPE_EXT 0x87E5
#endif
#ifndef GL_VARIANT_ARRAY_STRIDE_EXT
    #define GL_VARIANT_ARRAY_STRIDE_EXT 0x87E6
#endif
#ifndef GL_VARIANT_ARRAY_TYPE_EXT
    #define GL_VARIANT_ARRAY_TYPE_EXT 0x87E7
#endif
#ifndef GL_VARIANT_ARRAY_EXT
    #define GL_VARIANT_ARRAY_EXT 0x87E8
#endif
#ifndef GL_VARIANT_ARRAY_POINTER_EXT
    #define GL_VARIANT_ARRAY_POINTER_EXT 0x87E9
#endif
#ifndef GL_INVARIANT_VALUE_EXT
    #define GL_INVARIANT_VALUE_EXT 0x87EA
#endif
#ifndef GL_INVARIANT_DATATYPE_EXT
    #define GL_INVARIANT_DATATYPE_EXT 0x87EB
#endif
#ifndef GL_LOCAL_CONSTANT_VALUE_EXT
    #define GL_LOCAL_CONSTANT_VALUE_EXT 0x87EC
#endif
#ifndef GL_LOCAL_CONSTANT_DATATYPE_EXT
    #define GL_LOCAL_CONSTANT_DATATYPE_EXT 0x87ED
#endif

typedef void (APIENTRY * PFNGLBEGINVERTEXSHADEREXTPROC)(void);
typedef GLuint (APIENTRY * PFNGLBINDLIGHTPARAMETEREXTPROC)(GLenum light, GLenum value);
typedef GLuint (APIENTRY * PFNGLBINDMATERIALPARAMETEREXTPROC)(GLenum face, GLenum value);
typedef GLuint (APIENTRY * PFNGLBINDPARAMETEREXTPROC)(GLenum value);
typedef GLuint (APIENTRY * PFNGLBINDTEXGENPARAMETEREXTPROC)(GLenum unit, GLenum coord, GLenum value);
typedef GLuint (APIENTRY * PFNGLBINDTEXTUREUNITPARAMETEREXTPROC)(GLenum unit, GLenum value);
typedef void (APIENTRY * PFNGLBINDVERTEXSHADEREXTPROC)(GLuint id);
typedef void (APIENTRY * PFNGLDELETEVERTEXSHADEREXTPROC)(GLuint id);
typedef void (APIENTRY * PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC)(GLuint id);
typedef void (APIENTRY * PFNGLENABLEVARIANTCLIENTSTATEEXTPROC)(GLuint id);
typedef void (APIENTRY * PFNGLENDVERTEXSHADEREXTPROC)(void);
typedef void (APIENTRY * PFNGLEXTRACTCOMPONENTEXTPROC)(GLuint res, GLuint src, GLuint num);
typedef GLuint (APIENTRY * PFNGLGENSYMBOLSEXTPROC)(GLenum dataType, GLenum storageType, GLenum range, GLuint components);
typedef GLuint (APIENTRY * PFNGLGENVERTEXSHADERSEXTPROC)(GLuint range);
typedef void (APIENTRY * PFNGLGETINVARIANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (APIENTRY * PFNGLGETINVARIANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);
typedef void (APIENTRY * PFNGLGETINVARIANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (APIENTRY * PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (APIENTRY * PFNGLGETLOCALCONSTANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);
typedef void (APIENTRY * PFNGLGETLOCALCONSTANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (APIENTRY * PFNGLGETVARIANTBOOLEANVEXTPROC)(GLuint id, GLenum value, GLboolean *data);
typedef void (APIENTRY * PFNGLGETVARIANTFLOATVEXTPROC)(GLuint id, GLenum value, GLfloat *data);
typedef void (APIENTRY * PFNGLGETVARIANTINTEGERVEXTPROC)(GLuint id, GLenum value, GLint *data);
typedef void (APIENTRY * PFNGLGETVARIANTPOINTERVEXTPROC)(GLuint id, GLenum value, GLvoid **data);
typedef void (APIENTRY * PFNGLINSERTCOMPONENTEXTPROC)(GLuint res, GLuint src, GLuint num);
typedef GLboolean (APIENTRY * PFNGLISVARIANTENABLEDEXTPROC)(GLuint id, GLenum cap);
typedef void (APIENTRY * PFNGLSETINVARIANTEXTPROC)(GLuint id, GLenum type, GLvoid *addr);
typedef void (APIENTRY * PFNGLSETLOCALCONSTANTEXTPROC)(GLuint id, GLenum type, GLvoid *addr);
typedef void (APIENTRY * PFNGLSHADEROP1EXTPROC)(GLenum op, GLuint res, GLuint arg1);
typedef void (APIENTRY * PFNGLSHADEROP2EXTPROC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
typedef void (APIENTRY * PFNGLSHADEROP3EXTPROC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
typedef void (APIENTRY * PFNGLSWIZZLEEXTPROC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void (APIENTRY * PFNGLVARIANTPOINTEREXTPROC)(GLuint id, GLenum type, GLuint stride, GLvoid *addr);
typedef void (APIENTRY * PFNGLVARIANTBVEXTPROC)(GLuint id, GLbyte *addr);
typedef void (APIENTRY * PFNGLVARIANTDVEXTPROC)(GLuint id, GLdouble *addr);
typedef void (APIENTRY * PFNGLVARIANTFVEXTPROC)(GLuint id, GLfloat *addr);
typedef void (APIENTRY * PFNGLVARIANTIVEXTPROC)(GLuint id, GLint *addr);
typedef void (APIENTRY * PFNGLVARIANTSVEXTPROC)(GLuint id, GLshort *addr);
typedef void (APIENTRY * PFNGLVARIANTUBVEXTPROC)(GLuint id, GLubyte *addr);
typedef void (APIENTRY * PFNGLVARIANTUIVEXTPROC)(GLuint id, GLuint *addr);
typedef void (APIENTRY * PFNGLVARIANTUSVEXTPROC)(GLuint id, GLushort *addr);
typedef void (APIENTRY * PFNGLWRITEMASKEXTPROC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);

extern PFNGLBEGINVERTEXSHADEREXTPROC glBeginVertexShaderEXT;
extern PFNGLBINDLIGHTPARAMETEREXTPROC glBindLightParameterEXT;
extern PFNGLBINDMATERIALPARAMETEREXTPROC glBindMaterialParameterEXT;
extern PFNGLBINDPARAMETEREXTPROC glBindParameterEXT;
extern PFNGLBINDTEXGENPARAMETEREXTPROC glBindTexGenParameterEXT;
extern PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glBindTextureUnitParameterEXT;
extern PFNGLBINDVERTEXSHADEREXTPROC glBindVertexShaderEXT;
extern PFNGLDELETEVERTEXSHADEREXTPROC glDeleteVertexShaderEXT;
extern PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glDisableVariantClientStateEXT;
extern PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glEnableVariantClientStateEXT;
extern PFNGLENDVERTEXSHADEREXTPROC glEndVertexShaderEXT;
extern PFNGLEXTRACTCOMPONENTEXTPROC glExtractComponentEXT;
extern PFNGLGENSYMBOLSEXTPROC glGenSymbolsEXT;
extern PFNGLGENVERTEXSHADERSEXTPROC glGenVertexShadersEXT;
extern PFNGLGETINVARIANTBOOLEANVEXTPROC glGetInvariantBooleanvEXT;
extern PFNGLGETINVARIANTFLOATVEXTPROC glGetInvariantFloatvEXT;
extern PFNGLGETINVARIANTINTEGERVEXTPROC glGetInvariantIntegervEXT;
extern PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glGetLocalConstantBooleanvEXT;
extern PFNGLGETLOCALCONSTANTFLOATVEXTPROC glGetLocalConstantFloatvEXT;
extern PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glGetLocalConstantIntegervEXT;
extern PFNGLGETVARIANTBOOLEANVEXTPROC glGetVariantBooleanvEXT;
extern PFNGLGETVARIANTFLOATVEXTPROC glGetVariantFloatvEXT;
extern PFNGLGETVARIANTINTEGERVEXTPROC glGetVariantIntegervEXT;
extern PFNGLGETVARIANTPOINTERVEXTPROC glGetVariantPointervEXT;
extern PFNGLINSERTCOMPONENTEXTPROC glInsertComponentEXT;
extern PFNGLISVARIANTENABLEDEXTPROC glIsVariantEnabledEXT;
extern PFNGLSETINVARIANTEXTPROC glSetInvariantEXT;
extern PFNGLSETLOCALCONSTANTEXTPROC glSetLocalConstantEXT;
extern PFNGLSHADEROP1EXTPROC glShaderOp1EXT;
extern PFNGLSHADEROP2EXTPROC glShaderOp2EXT;
extern PFNGLSHADEROP3EXTPROC glShaderOp3EXT;
extern PFNGLSWIZZLEEXTPROC glSwizzleEXT;
extern PFNGLVARIANTPOINTEREXTPROC glVariantPointerEXT;
extern PFNGLVARIANTBVEXTPROC glVariantbvEXT;
extern PFNGLVARIANTDVEXTPROC glVariantdvEXT;
extern PFNGLVARIANTFVEXTPROC glVariantfvEXT;
extern PFNGLVARIANTIVEXTPROC glVariantivEXT;
extern PFNGLVARIANTSVEXTPROC glVariantsvEXT;
extern PFNGLVARIANTUBVEXTPROC glVariantubvEXT;
extern PFNGLVARIANTUIVEXTPROC glVariantuivEXT;
extern PFNGLVARIANTUSVEXTPROC glVariantusvEXT;
extern PFNGLWRITEMASKEXTPROC glWriteMaskEXT;

// GL_EXT_vertex_weighting

#ifndef GL_MODELVIEW0_STACK_DEPTH_EXT
    #define GL_MODELVIEW0_STACK_DEPTH_EXT 0x0BA3
#endif
#ifndef GL_MODELVIEW0_MATRIX_EXT
    #define GL_MODELVIEW0_MATRIX_EXT 0x0BA6
#endif
#ifndef GL_MODELVIEW0_EXT
    #define GL_MODELVIEW0_EXT 0x1700
#endif
#ifndef GL_MODELVIEW1_STACK_DEPTH_EXT
    #define GL_MODELVIEW1_STACK_DEPTH_EXT 0x8502
#endif
#ifndef GL_MODELVIEW1_MATRIX_EXT
    #define GL_MODELVIEW1_MATRIX_EXT 0x8506
#endif
#ifndef GL_VERTEX_WEIGHTING_EXT
    #define GL_VERTEX_WEIGHTING_EXT 0x8509
#endif
#ifndef GL_MODELVIEW1_EXT
    #define GL_MODELVIEW1_EXT 0x850A
#endif
#ifndef GL_CURRENT_VERTEX_WEIGHT_EXT
    #define GL_CURRENT_VERTEX_WEIGHT_EXT 0x850B
#endif
#ifndef GL_VERTEX_WEIGHT_ARRAY_EXT
    #define GL_VERTEX_WEIGHT_ARRAY_EXT 0x850C
#endif
#ifndef GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT
    #define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT 0x850D
#endif
#ifndef GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT
    #define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT 0x850E
#endif
#ifndef GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT
    #define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#endif
#ifndef GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT
    #define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510
#endif

typedef void (APIENTRY * PFNGLVERTEXWEIGHTPOINTEREXTPROC)(GLint size, GLenum type, GLsizei stride, void* pointer);
typedef void (APIENTRY * PFNGLVERTEXWEIGHTFEXTPROC)(GLfloat weight);
typedef void (APIENTRY * PFNGLVERTEXWEIGHTFVEXTPROC)(GLfloat* weight);

extern PFNGLVERTEXWEIGHTPOINTEREXTPROC glVertexWeightPointerEXT;
extern PFNGLVERTEXWEIGHTFEXTPROC glVertexWeightfEXT;
extern PFNGLVERTEXWEIGHTFVEXTPROC glVertexWeightfvEXT;

// GL_GREMEDY_frame_terminator


typedef void (APIENTRY * PFNGLFRAMETERMINATORGREMEDYPROC)(void);

extern PFNGLFRAMETERMINATORGREMEDYPROC glFrameTerminatorGREMEDY;

// GL_GREMEDY_string_marker


typedef void (APIENTRY * PFNGLSTRINGMARKERGREMEDYPROC)(GLsizei len, const void* string);

extern PFNGLSTRINGMARKERGREMEDYPROC glStringMarkerGREMEDY;

// GL_HP_image_transform


typedef void (APIENTRY * PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLIMAGETRANSFORMPARAMETERFHPPROC)(GLenum target, GLenum pname, const GLfloat param);
typedef void (APIENTRY * PFNGLIMAGETRANSFORMPARAMETERFVHPPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLIMAGETRANSFORMPARAMETERIHPPROC)(GLenum target, GLenum pname, const GLint param);
typedef void (APIENTRY * PFNGLIMAGETRANSFORMPARAMETERIVHPPROC)(GLenum target, GLenum pname, const GLint* params);

extern PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glGetImageTransformParameterfvHP;
extern PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glGetImageTransformParameterivHP;
extern PFNGLIMAGETRANSFORMPARAMETERFHPPROC glImageTransformParameterfHP;
extern PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glImageTransformParameterfvHP;
extern PFNGLIMAGETRANSFORMPARAMETERIHPPROC glImageTransformParameteriHP;
extern PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glImageTransformParameterivHP;

// GL_HP_occlusion_test

#ifndef GL_OCCLUSION_TEST_HP
    #define GL_OCCLUSION_TEST_HP 0x8165
#endif
#ifndef GL_OCCLUSION_TEST_RESULT_HP
    #define GL_OCCLUSION_TEST_RESULT_HP 0x8166
#endif

// GL_IBM_multimode_draw_arrays


typedef void (APIENTRY * PFNGLMULTIMODEDRAWARRAYSIBMPROC)(const GLenum* mode, const GLint *first, const GLsizei *count, GLsizei primcount, GLint modestride);
typedef void (APIENTRY * PFNGLMULTIMODEDRAWELEMENTSIBMPROC)(const GLenum* mode, const GLsizei *count, GLenum type, const GLvoid * const *indices, GLsizei primcount, GLint modestride);

extern PFNGLMULTIMODEDRAWARRAYSIBMPROC glMultiModeDrawArraysIBM;
extern PFNGLMULTIMODEDRAWELEMENTSIBMPROC glMultiModeDrawElementsIBM;

// GL_IBM_texture_mirrored_repeat

#ifndef GL_MIRRORED_REPEAT_IBM
    #define GL_MIRRORED_REPEAT_IBM 0x8370
#endif

// GL_IBM_vertex_array_lists


typedef void (APIENTRY * PFNGLCOLORPOINTERLISTIBMPROC)(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLEDGEFLAGPOINTERLISTIBMPROC)(GLint stride, const GLboolean ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLFOGCOORDPOINTERLISTIBMPROC)(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLINDEXPOINTERLISTIBMPROC)(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLNORMALPOINTERLISTIBMPROC)(GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLSECONDARYCOLORPOINTERLISTIBMPROC)(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLTEXCOORDPOINTERLISTIBMPROC)(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);
typedef void (APIENTRY * PFNGLVERTEXPOINTERLISTIBMPROC)(GLint size, GLenum type, GLint stride, const GLvoid ** pointer, GLint ptrstride);

extern PFNGLCOLORPOINTERLISTIBMPROC glColorPointerListIBM;
extern PFNGLEDGEFLAGPOINTERLISTIBMPROC glEdgeFlagPointerListIBM;
extern PFNGLFOGCOORDPOINTERLISTIBMPROC glFogCoordPointerListIBM;
extern PFNGLINDEXPOINTERLISTIBMPROC glIndexPointerListIBM;
extern PFNGLNORMALPOINTERLISTIBMPROC glNormalPointerListIBM;
extern PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glSecondaryColorPointerListIBM;
extern PFNGLTEXCOORDPOINTERLISTIBMPROC glTexCoordPointerListIBM;
extern PFNGLVERTEXPOINTERLISTIBMPROC glVertexPointerListIBM;

// GL_INGR_color_clamp

#ifndef GL_RED_MIN_CLAMP_INGR
    #define GL_RED_MIN_CLAMP_INGR 0x8560
#endif
#ifndef GL_GREEN_MIN_CLAMP_INGR
    #define GL_GREEN_MIN_CLAMP_INGR 0x8561
#endif
#ifndef GL_BLUE_MIN_CLAMP_INGR
    #define GL_BLUE_MIN_CLAMP_INGR 0x8562
#endif
#ifndef GL_ALPHA_MIN_CLAMP_INGR
    #define GL_ALPHA_MIN_CLAMP_INGR 0x8563
#endif
#ifndef GL_RED_MAX_CLAMP_INGR
    #define GL_RED_MAX_CLAMP_INGR 0x8564
#endif
#ifndef GL_GREEN_MAX_CLAMP_INGR
    #define GL_GREEN_MAX_CLAMP_INGR 0x8565
#endif
#ifndef GL_BLUE_MAX_CLAMP_INGR
    #define GL_BLUE_MAX_CLAMP_INGR 0x8566
#endif
#ifndef GL_ALPHA_MAX_CLAMP_INGR
    #define GL_ALPHA_MAX_CLAMP_INGR 0x8567
#endif

// GL_INGR_interlace_read

#ifndef GL_INTERLACE_READ_INGR
    #define GL_INTERLACE_READ_INGR 0x8568
#endif

// GL_INTEL_parallel_arrays

#ifndef GL_PARALLEL_ARRAYS_INTEL
    #define GL_PARALLEL_ARRAYS_INTEL 0x83F4
#endif
#ifndef GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL
    #define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#endif
#ifndef GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL
    #define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#endif
#ifndef GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL
    #define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL
    #define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8
#endif

typedef void (APIENTRY * PFNGLCOLORPOINTERVINTELPROC)(GLint size, GLenum type, const void** pointer);
typedef void (APIENTRY * PFNGLNORMALPOINTERVINTELPROC)(GLenum type, const void** pointer);
typedef void (APIENTRY * PFNGLTEXCOORDPOINTERVINTELPROC)(GLint size, GLenum type, const void** pointer);
typedef void (APIENTRY * PFNGLVERTEXPOINTERVINTELPROC)(GLint size, GLenum type, const void** pointer);

extern PFNGLCOLORPOINTERVINTELPROC glColorPointervINTEL;
extern PFNGLNORMALPOINTERVINTELPROC glNormalPointervINTEL;
extern PFNGLTEXCOORDPOINTERVINTELPROC glTexCoordPointervINTEL;
extern PFNGLVERTEXPOINTERVINTELPROC glVertexPointervINTEL;

// GL_INTEL_texture_scissor


typedef void (APIENTRY * PFNGLTEXSCISSORFUNCINTELPROC)(GLenum target, GLenum lfunc, GLenum hfunc);
typedef void (APIENTRY * PFNGLTEXSCISSORINTELPROC)(GLenum target, GLclampf tlow, GLclampf thigh);

extern PFNGLTEXSCISSORFUNCINTELPROC glTexScissorFuncINTEL;
extern PFNGLTEXSCISSORINTELPROC glTexScissorINTEL;

// GL_KTX_buffer_region


typedef GLuint (APIENTRY * PFNGLBUFFERREGIONENABLEDEXTPROC)(void);
typedef void (APIENTRY * PFNGLDELETEBUFFERREGIONEXTPROC)(GLenum region);
typedef void (APIENTRY * PFNGLDRAWBUFFERREGIONEXTPROC)(GLuint region, GLint x, GLint y, GLsizei width, GLsizei height, GLint xDest, GLint yDest);
typedef GLuint (APIENTRY * PFNGLNEWBUFFERREGIONEXTPROC)(GLenum region);
typedef void (APIENTRY * PFNGLREADBUFFERREGIONEXTPROC)(GLuint region, GLint x, GLint y, GLsizei width, GLsizei height);

extern PFNGLBUFFERREGIONENABLEDEXTPROC glBufferRegionEnabledEXT;
extern PFNGLDELETEBUFFERREGIONEXTPROC glDeleteBufferRegionEXT;
extern PFNGLDRAWBUFFERREGIONEXTPROC glDrawBufferRegionEXT;
extern PFNGLNEWBUFFERREGIONEXTPROC glNewBufferRegionEXT;
extern PFNGLREADBUFFERREGIONEXTPROC glReadBufferRegionEXT;

// GL_MESAX_texture_stack

#ifndef GL_TEXTURE_1D_STACK_MESAX
    #define GL_TEXTURE_1D_STACK_MESAX 0x8759
#endif
#ifndef GL_TEXTURE_2D_STACK_MESAX
    #define GL_TEXTURE_2D_STACK_MESAX 0x875A
#endif
#ifndef GL_PROXY_TEXTURE_1D_STACK_MESAX
    #define GL_PROXY_TEXTURE_1D_STACK_MESAX 0x875B
#endif
#ifndef GL_PROXY_TEXTURE_2D_STACK_MESAX
    #define GL_PROXY_TEXTURE_2D_STACK_MESAX 0x875C
#endif
#ifndef GL_TEXTURE_1D_STACK_BINDING_MESAX
    #define GL_TEXTURE_1D_STACK_BINDING_MESAX 0x875D
#endif
#ifndef GL_TEXTURE_2D_STACK_BINDING_MESAX
    #define GL_TEXTURE_2D_STACK_BINDING_MESAX 0x875E
#endif

// GL_MESA_pack_invert

#ifndef GL_PACK_INVERT_MESA
    #define GL_PACK_INVERT_MESA 0x8758
#endif

// GL_MESA_resize_buffers


typedef void (APIENTRY * PFNGLRESIZEBUFFERSMESAPROC)(void);

extern PFNGLRESIZEBUFFERSMESAPROC glResizeBuffersMESA;

// GL_MESA_window_pos


typedef void (APIENTRY * PFNGLWINDOWPOS2DMESAPROC)(GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLWINDOWPOS2DVMESAPROC)(const GLdouble* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2FMESAPROC)(GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLWINDOWPOS2FVMESAPROC)(const GLfloat* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2IMESAPROC)(GLint x, GLint y);
typedef void (APIENTRY * PFNGLWINDOWPOS2IVMESAPROC)(const GLint* p);
typedef void (APIENTRY * PFNGLWINDOWPOS2SMESAPROC)(GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLWINDOWPOS2SVMESAPROC)(const GLshort* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3DMESAPROC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLWINDOWPOS3DVMESAPROC)(const GLdouble* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3FMESAPROC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLWINDOWPOS3FVMESAPROC)(const GLfloat* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3IMESAPROC)(GLint x, GLint y, GLint z);
typedef void (APIENTRY * PFNGLWINDOWPOS3IVMESAPROC)(const GLint* p);
typedef void (APIENTRY * PFNGLWINDOWPOS3SMESAPROC)(GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLWINDOWPOS3SVMESAPROC)(const GLshort* p);
typedef void (APIENTRY * PFNGLWINDOWPOS4DMESAPROC)(GLdouble x, GLdouble y, GLdouble z, GLdouble);
typedef void (APIENTRY * PFNGLWINDOWPOS4DVMESAPROC)(const GLdouble* p);
typedef void (APIENTRY * PFNGLWINDOWPOS4FMESAPROC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLWINDOWPOS4FVMESAPROC)(const GLfloat* p);
typedef void (APIENTRY * PFNGLWINDOWPOS4IMESAPROC)(GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLWINDOWPOS4IVMESAPROC)(const GLint* p);
typedef void (APIENTRY * PFNGLWINDOWPOS4SMESAPROC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLWINDOWPOS4SVMESAPROC)(const GLshort* p);

extern PFNGLWINDOWPOS2DMESAPROC glWindowPos2dMESA;
extern PFNGLWINDOWPOS2DVMESAPROC glWindowPos2dvMESA;
extern PFNGLWINDOWPOS2FMESAPROC glWindowPos2fMESA;
extern PFNGLWINDOWPOS2FVMESAPROC glWindowPos2fvMESA;
extern PFNGLWINDOWPOS2IMESAPROC glWindowPos2iMESA;
extern PFNGLWINDOWPOS2IVMESAPROC glWindowPos2ivMESA;
extern PFNGLWINDOWPOS2SMESAPROC glWindowPos2sMESA;
extern PFNGLWINDOWPOS2SVMESAPROC glWindowPos2svMESA;
extern PFNGLWINDOWPOS3DMESAPROC glWindowPos3dMESA;
extern PFNGLWINDOWPOS3DVMESAPROC glWindowPos3dvMESA;
extern PFNGLWINDOWPOS3FMESAPROC glWindowPos3fMESA;
extern PFNGLWINDOWPOS3FVMESAPROC glWindowPos3fvMESA;
extern PFNGLWINDOWPOS3IMESAPROC glWindowPos3iMESA;
extern PFNGLWINDOWPOS3IVMESAPROC glWindowPos3ivMESA;
extern PFNGLWINDOWPOS3SMESAPROC glWindowPos3sMESA;
extern PFNGLWINDOWPOS3SVMESAPROC glWindowPos3svMESA;
extern PFNGLWINDOWPOS4DMESAPROC glWindowPos4dMESA;
extern PFNGLWINDOWPOS4DVMESAPROC glWindowPos4dvMESA;
extern PFNGLWINDOWPOS4FMESAPROC glWindowPos4fMESA;
extern PFNGLWINDOWPOS4FVMESAPROC glWindowPos4fvMESA;
extern PFNGLWINDOWPOS4IMESAPROC glWindowPos4iMESA;
extern PFNGLWINDOWPOS4IVMESAPROC glWindowPos4ivMESA;
extern PFNGLWINDOWPOS4SMESAPROC glWindowPos4sMESA;
extern PFNGLWINDOWPOS4SVMESAPROC glWindowPos4svMESA;

// GL_MESA_ycbcr_texture

#ifndef GL_UNSIGNED_SHORT_8_8_MESA
    #define GL_UNSIGNED_SHORT_8_8_MESA 0x85BA
#endif
#ifndef GL_UNSIGNED_SHORT_8_8_REV_MESA
    #define GL_UNSIGNED_SHORT_8_8_REV_MESA 0x85BB
#endif
#ifndef GL_YCBCR_MESA
    #define GL_YCBCR_MESA 0x8757
#endif

// GL_NVX_gpu_memory_info

#ifndef GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX
    #define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX 0x9047
#endif
#ifndef GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX
    #define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX 0x9048
#endif
#ifndef GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX
    #define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX 0x9049
#endif
#ifndef GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX
    #define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX 0x904A
#endif
#ifndef GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX
    #define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX 0x904B
#endif

// GL_NV_conditional_render

#ifndef GL_QUERY_WAIT_NV
    #define GL_QUERY_WAIT_NV 0x8E13
#endif
#ifndef GL_QUERY_NO_WAIT_NV
    #define GL_QUERY_NO_WAIT_NV 0x8E14
#endif
#ifndef GL_QUERY_BY_REGION_WAIT_NV
    #define GL_QUERY_BY_REGION_WAIT_NV 0x8E15
#endif
#ifndef GL_QUERY_BY_REGION_NO_WAIT_NV
    #define GL_QUERY_BY_REGION_NO_WAIT_NV 0x8E16
#endif

typedef void (APIENTRY * PFNGLBEGINCONDITIONALRENDERNVPROC)(GLuint id, GLenum mode);
typedef void (APIENTRY * PFNGLENDCONDITIONALRENDERNVPROC)(void);

extern PFNGLBEGINCONDITIONALRENDERNVPROC glBeginConditionalRenderNV;
extern PFNGLENDCONDITIONALRENDERNVPROC glEndConditionalRenderNV;

// GL_NV_copy_depth_to_color

#ifndef GL_DEPTH_STENCIL_TO_RGBA_NV
    #define GL_DEPTH_STENCIL_TO_RGBA_NV 0x886E
#endif
#ifndef GL_DEPTH_STENCIL_TO_BGRA_NV
    #define GL_DEPTH_STENCIL_TO_BGRA_NV 0x886F
#endif

// GL_NV_copy_image


typedef void (APIENTRY * PFNGLCOPYIMAGESUBDATANVPROC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

extern PFNGLCOPYIMAGESUBDATANVPROC glCopyImageSubDataNV;

// GL_NV_depth_buffer_float

#ifndef GL_DEPTH_COMPONENT32F_NV
    #define GL_DEPTH_COMPONENT32F_NV 0x8DAB
#endif
#ifndef GL_DEPTH32F_STENCIL8_NV
    #define GL_DEPTH32F_STENCIL8_NV 0x8DAC
#endif
#ifndef GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV
    #define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#endif
#ifndef GL_DEPTH_BUFFER_FLOAT_MODE_NV
    #define GL_DEPTH_BUFFER_FLOAT_MODE_NV 0x8DAF
#endif

typedef void (APIENTRY * PFNGLCLEARDEPTHDNVPROC)(GLdouble depth);
typedef void (APIENTRY * PFNGLDEPTHBOUNDSDNVPROC)(GLdouble zmin, GLdouble zmax);
typedef void (APIENTRY * PFNGLDEPTHRANGEDNVPROC)(GLdouble zNear, GLdouble zFar);

extern PFNGLCLEARDEPTHDNVPROC glClearDepthdNV;
extern PFNGLDEPTHBOUNDSDNVPROC glDepthBoundsdNV;
extern PFNGLDEPTHRANGEDNVPROC glDepthRangedNV;

// GL_NV_depth_clamp

#ifndef GL_DEPTH_CLAMP_NV
    #define GL_DEPTH_CLAMP_NV 0x864F
#endif

// GL_NV_depth_range_unclamped

#ifndef GL_SAMPLE_COUNT_BITS_NV
    #define GL_SAMPLE_COUNT_BITS_NV 0x8864
#endif
#ifndef GL_CURRENT_SAMPLE_COUNT_QUERY_NV
    #define GL_CURRENT_SAMPLE_COUNT_QUERY_NV 0x8865
#endif
#ifndef GL_QUERY_RESULT_NV
    #define GL_QUERY_RESULT_NV 0x8866
#endif
#ifndef GL_QUERY_RESULT_AVAILABLE_NV
    #define GL_QUERY_RESULT_AVAILABLE_NV 0x8867
#endif
#ifndef GL_SAMPLE_COUNT_NV
    #define GL_SAMPLE_COUNT_NV 0x8914
#endif

// GL_NV_evaluators

#ifndef GL_EVAL_2D_NV
    #define GL_EVAL_2D_NV 0x86C0
#endif
#ifndef GL_EVAL_TRIANGULAR_2D_NV
    #define GL_EVAL_TRIANGULAR_2D_NV 0x86C1
#endif
#ifndef GL_MAP_TESSELLATION_NV
    #define GL_MAP_TESSELLATION_NV 0x86C2
#endif
#ifndef GL_MAP_ATTRIB_U_ORDER_NV
    #define GL_MAP_ATTRIB_U_ORDER_NV 0x86C3
#endif
#ifndef GL_MAP_ATTRIB_V_ORDER_NV
    #define GL_MAP_ATTRIB_V_ORDER_NV 0x86C4
#endif
#ifndef GL_EVAL_FRACTIONAL_TESSELLATION_NV
    #define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB0_NV
    #define GL_EVAL_VERTEX_ATTRIB0_NV 0x86C6
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB1_NV
    #define GL_EVAL_VERTEX_ATTRIB1_NV 0x86C7
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB2_NV
    #define GL_EVAL_VERTEX_ATTRIB2_NV 0x86C8
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB3_NV
    #define GL_EVAL_VERTEX_ATTRIB3_NV 0x86C9
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB4_NV
    #define GL_EVAL_VERTEX_ATTRIB4_NV 0x86CA
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB5_NV
    #define GL_EVAL_VERTEX_ATTRIB5_NV 0x86CB
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB6_NV
    #define GL_EVAL_VERTEX_ATTRIB6_NV 0x86CC
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB7_NV
    #define GL_EVAL_VERTEX_ATTRIB7_NV 0x86CD
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB8_NV
    #define GL_EVAL_VERTEX_ATTRIB8_NV 0x86CE
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB9_NV
    #define GL_EVAL_VERTEX_ATTRIB9_NV 0x86CF
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB10_NV
    #define GL_EVAL_VERTEX_ATTRIB10_NV 0x86D0
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB11_NV
    #define GL_EVAL_VERTEX_ATTRIB11_NV 0x86D1
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB12_NV
    #define GL_EVAL_VERTEX_ATTRIB12_NV 0x86D2
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB13_NV
    #define GL_EVAL_VERTEX_ATTRIB13_NV 0x86D3
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB14_NV
    #define GL_EVAL_VERTEX_ATTRIB14_NV 0x86D4
#endif
#ifndef GL_EVAL_VERTEX_ATTRIB15_NV
    #define GL_EVAL_VERTEX_ATTRIB15_NV 0x86D5
#endif
#ifndef GL_MAX_MAP_TESSELLATION_NV
    #define GL_MAX_MAP_TESSELLATION_NV 0x86D6
#endif
#ifndef GL_MAX_RATIONAL_EVAL_ORDER_NV
    #define GL_MAX_RATIONAL_EVAL_ORDER_NV 0x86D7
#endif

typedef void (APIENTRY * PFNGLEVALMAPSNVPROC)(GLenum target, GLenum mode);
typedef void (APIENTRY * PFNGLGETMAPATTRIBPARAMETERFVNVPROC)(GLenum target, GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMAPATTRIBPARAMETERIVNVPROC)(GLenum target, GLuint index, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETMAPCONTROLPOINTSNVPROC)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, void* points);
typedef void (APIENTRY * PFNGLGETMAPPARAMETERFVNVPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETMAPPARAMETERIVNVPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLMAPCONTROLPOINTSNVPROC)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const void* points);
typedef void (APIENTRY * PFNGLMAPPARAMETERFVNVPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLMAPPARAMETERIVNVPROC)(GLenum target, GLenum pname, const GLint* params);

extern PFNGLEVALMAPSNVPROC glEvalMapsNV;
extern PFNGLGETMAPATTRIBPARAMETERFVNVPROC glGetMapAttribParameterfvNV;
extern PFNGLGETMAPATTRIBPARAMETERIVNVPROC glGetMapAttribParameterivNV;
extern PFNGLGETMAPCONTROLPOINTSNVPROC glGetMapControlPointsNV;
extern PFNGLGETMAPPARAMETERFVNVPROC glGetMapParameterfvNV;
extern PFNGLGETMAPPARAMETERIVNVPROC glGetMapParameterivNV;
extern PFNGLMAPCONTROLPOINTSNVPROC glMapControlPointsNV;
extern PFNGLMAPPARAMETERFVNVPROC glMapParameterfvNV;
extern PFNGLMAPPARAMETERIVNVPROC glMapParameterivNV;

// GL_NV_explicit_multisample

#ifndef GL_SAMPLE_POSITION_NV
    #define GL_SAMPLE_POSITION_NV 0x8E50
#endif
#ifndef GL_SAMPLE_MASK_NV
    #define GL_SAMPLE_MASK_NV 0x8E51
#endif
#ifndef GL_SAMPLE_MASK_VALUE_NV
    #define GL_SAMPLE_MASK_VALUE_NV 0x8E52
#endif
#ifndef GL_TEXTURE_BINDING_RENDERBUFFER_NV
    #define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#endif
#ifndef GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV
    #define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#endif
#ifndef GL_TEXTURE_RENDERBUFFER_NV
    #define GL_TEXTURE_RENDERBUFFER_NV 0x8E55
#endif
#ifndef GL_SAMPLER_RENDERBUFFER_NV
    #define GL_SAMPLER_RENDERBUFFER_NV 0x8E56
#endif
#ifndef GL_INT_SAMPLER_RENDERBUFFER_NV
    #define GL_INT_SAMPLER_RENDERBUFFER_NV 0x8E57
#endif
#ifndef GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV
    #define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#endif
#ifndef GL_MAX_SAMPLE_MASK_WORDS_NV
    #define GL_MAX_SAMPLE_MASK_WORDS_NV 0x8E59
#endif

typedef void (APIENTRY * PFNGLGETMULTISAMPLEFVNVPROC)(GLenum pname, GLuint index, GLfloat* val);
typedef void (APIENTRY * PFNGLSAMPLEMASKINDEXEDNVPROC)(GLuint index, GLbitfield mask);
typedef void (APIENTRY * PFNGLTEXRENDERBUFFERNVPROC)(GLenum target, GLuint renderbuffer);

extern PFNGLGETMULTISAMPLEFVNVPROC glGetMultisamplefvNV;
extern PFNGLSAMPLEMASKINDEXEDNVPROC glSampleMaskIndexedNV;
extern PFNGLTEXRENDERBUFFERNVPROC glTexRenderbufferNV;

// GL_NV_fence

#ifndef GL_ALL_COMPLETED_NV
    #define GL_ALL_COMPLETED_NV 0x84F2
#endif
#ifndef GL_FENCE_STATUS_NV
    #define GL_FENCE_STATUS_NV 0x84F3
#endif
#ifndef GL_FENCE_CONDITION_NV
    #define GL_FENCE_CONDITION_NV 0x84F4
#endif

typedef void (APIENTRY * PFNGLDELETEFENCESNVPROC)(GLsizei n, const GLuint* fences);
typedef void (APIENTRY * PFNGLFINISHFENCENVPROC)(GLuint fence);
typedef void (APIENTRY * PFNGLGENFENCESNVPROC)(GLsizei n, GLuint* fences);
typedef void (APIENTRY * PFNGLGETFENCEIVNVPROC)(GLuint fence, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISFENCENVPROC)(GLuint fence);
typedef void (APIENTRY * PFNGLSETFENCENVPROC)(GLuint fence, GLenum condition);
typedef GLboolean (APIENTRY * PFNGLTESTFENCENVPROC)(GLuint fence);

extern PFNGLDELETEFENCESNVPROC glDeleteFencesNV;
extern PFNGLFINISHFENCENVPROC glFinishFenceNV;
extern PFNGLGENFENCESNVPROC glGenFencesNV;
extern PFNGLGETFENCEIVNVPROC glGetFenceivNV;
extern PFNGLISFENCENVPROC glIsFenceNV;
extern PFNGLSETFENCENVPROC glSetFenceNV;
extern PFNGLTESTFENCENVPROC glTestFenceNV;

// GL_NV_float_buffer

#ifndef GL_FLOAT_R_NV
    #define GL_FLOAT_R_NV 0x8880
#endif
#ifndef GL_FLOAT_RG_NV
    #define GL_FLOAT_RG_NV 0x8881
#endif
#ifndef GL_FLOAT_RGB_NV
    #define GL_FLOAT_RGB_NV 0x8882
#endif
#ifndef GL_FLOAT_RGBA_NV
    #define GL_FLOAT_RGBA_NV 0x8883
#endif
#ifndef GL_FLOAT_R16_NV
    #define GL_FLOAT_R16_NV 0x8884
#endif
#ifndef GL_FLOAT_R32_NV
    #define GL_FLOAT_R32_NV 0x8885
#endif
#ifndef GL_FLOAT_RG16_NV
    #define GL_FLOAT_RG16_NV 0x8886
#endif
#ifndef GL_FLOAT_RG32_NV
    #define GL_FLOAT_RG32_NV 0x8887
#endif
#ifndef GL_FLOAT_RGB16_NV
    #define GL_FLOAT_RGB16_NV 0x8888
#endif
#ifndef GL_FLOAT_RGB32_NV
    #define GL_FLOAT_RGB32_NV 0x8889
#endif
#ifndef GL_FLOAT_RGBA16_NV
    #define GL_FLOAT_RGBA16_NV 0x888A
#endif
#ifndef GL_FLOAT_RGBA32_NV
    #define GL_FLOAT_RGBA32_NV 0x888B
#endif
#ifndef GL_TEXTURE_FLOAT_COMPONENTS_NV
    #define GL_TEXTURE_FLOAT_COMPONENTS_NV 0x888C
#endif
#ifndef GL_FLOAT_CLEAR_COLOR_VALUE_NV
    #define GL_FLOAT_CLEAR_COLOR_VALUE_NV 0x888D
#endif
#ifndef GL_FLOAT_RGBA_MODE_NV
    #define GL_FLOAT_RGBA_MODE_NV 0x888E
#endif

// GL_NV_fog_distance

#ifndef GL_FOG_DISTANCE_MODE_NV
    #define GL_FOG_DISTANCE_MODE_NV 0x855A
#endif
#ifndef GL_EYE_RADIAL_NV
    #define GL_EYE_RADIAL_NV 0x855B
#endif
#ifndef GL_EYE_PLANE_ABSOLUTE_NV
    #define GL_EYE_PLANE_ABSOLUTE_NV 0x855C
#endif

// GL_NV_fragment_program

#ifndef GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV
    #define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#endif
#ifndef GL_FRAGMENT_PROGRAM_NV
    #define GL_FRAGMENT_PROGRAM_NV 0x8870
#endif
#ifndef GL_MAX_TEXTURE_COORDS_NV
    #define GL_MAX_TEXTURE_COORDS_NV 0x8871
#endif
#ifndef GL_MAX_TEXTURE_IMAGE_UNITS_NV
    #define GL_MAX_TEXTURE_IMAGE_UNITS_NV 0x8872
#endif
#ifndef GL_FRAGMENT_PROGRAM_BINDING_NV
    #define GL_FRAGMENT_PROGRAM_BINDING_NV 0x8873
#endif
#ifndef GL_PROGRAM_ERROR_STRING_NV
    #define GL_PROGRAM_ERROR_STRING_NV 0x8874
#endif

typedef void (APIENTRY * PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC)(GLuint id, GLsizei len, const GLubyte* name, GLdouble *params);
typedef void (APIENTRY * PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC)(GLuint id, GLsizei len, const GLubyte* name, GLfloat *params);
typedef void (APIENTRY * PFNGLPROGRAMNAMEDPARAMETER4DNVPROC)(GLuint id, GLsizei len, const GLubyte* name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC)(GLuint id, GLsizei len, const GLubyte* name, const GLdouble v[]);
typedef void (APIENTRY * PFNGLPROGRAMNAMEDPARAMETER4FNVPROC)(GLuint id, GLsizei len, const GLubyte* name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC)(GLuint id, GLsizei len, const GLubyte* name, const GLfloat v[]);

extern PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glGetProgramNamedParameterdvNV;
extern PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glGetProgramNamedParameterfvNV;
extern PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glProgramNamedParameter4dNV;
extern PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glProgramNamedParameter4dvNV;
extern PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glProgramNamedParameter4fNV;
extern PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glProgramNamedParameter4fvNV;

// GL_NV_fragment_program2

#ifndef GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV
    #define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#endif
#ifndef GL_MAX_PROGRAM_CALL_DEPTH_NV
    #define GL_MAX_PROGRAM_CALL_DEPTH_NV 0x88F5
#endif
#ifndef GL_MAX_PROGRAM_IF_DEPTH_NV
    #define GL_MAX_PROGRAM_IF_DEPTH_NV 0x88F6
#endif
#ifndef GL_MAX_PROGRAM_LOOP_DEPTH_NV
    #define GL_MAX_PROGRAM_LOOP_DEPTH_NV 0x88F7
#endif
#ifndef GL_MAX_PROGRAM_LOOP_COUNT_NV
    #define GL_MAX_PROGRAM_LOOP_COUNT_NV 0x88F8
#endif

// GL_NV_framebuffer_multisample_coverage

#ifndef GL_RENDERBUFFER_COVERAGE_SAMPLES_NV
    #define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#endif
#ifndef GL_RENDERBUFFER_COLOR_SAMPLES_NV
    #define GL_RENDERBUFFER_COLOR_SAMPLES_NV 0x8E10
#endif
#ifndef GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV
    #define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#endif
#ifndef GL_MULTISAMPLE_COVERAGE_MODES_NV
    #define GL_MULTISAMPLE_COVERAGE_MODES_NV 0x8E12
#endif

typedef void (APIENTRY * PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);

extern PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glRenderbufferStorageMultisampleCoverageNV;

// GL_NV_geometry_program4

#ifndef GL_GEOMETRY_PROGRAM_NV
    #define GL_GEOMETRY_PROGRAM_NV 0x8C26
#endif
#ifndef GL_MAX_PROGRAM_OUTPUT_VERTICES_NV
    #define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#endif
#ifndef GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV
    #define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28
#endif

typedef void (APIENTRY * PFNGLPROGRAMVERTEXLIMITNVPROC)(GLenum target, GLint limit);

extern PFNGLPROGRAMVERTEXLIMITNVPROC glProgramVertexLimitNV;

// GL_NV_gpu_program4

#ifndef GL_MIN_PROGRAM_TEXEL_OFFSET_NV
    #define GL_MIN_PROGRAM_TEXEL_OFFSET_NV 0x8904
#endif
#ifndef GL_MAX_PROGRAM_TEXEL_OFFSET_NV
    #define GL_MAX_PROGRAM_TEXEL_OFFSET_NV 0x8905
#endif
#ifndef GL_PROGRAM_ATTRIB_COMPONENTS_NV
    #define GL_PROGRAM_ATTRIB_COMPONENTS_NV 0x8906
#endif
#ifndef GL_PROGRAM_RESULT_COMPONENTS_NV
    #define GL_PROGRAM_RESULT_COMPONENTS_NV 0x8907
#endif
#ifndef GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV
    #define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#endif
#ifndef GL_MAX_PROGRAM_RESULT_COMPONENTS_NV
    #define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#endif
#ifndef GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV
    #define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#endif
#ifndef GL_MAX_PROGRAM_GENERIC_RESULTS_NV
    #define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6
#endif

typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERI4INVPROC)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERI4IVNVPROC)(GLenum target, GLuint index, const GLint *params);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERI4UINVPROC)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERI4UIVNVPROC)(GLenum target, GLuint index, const GLuint *params);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERSI4IVNVPROC)(GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void (APIENTRY * PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC)(GLenum target, GLuint index, GLsizei count, const GLuint *params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERI4INVPROC)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC)(GLenum target, GLuint index, const GLint *params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERI4UINVPROC)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC)(GLenum target, GLuint index, const GLuint *params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC)(GLenum target, GLuint index, GLsizei count, const GLint *params);
typedef void (APIENTRY * PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC)(GLenum target, GLuint index, GLsizei count, const GLuint *params);

extern PFNGLPROGRAMENVPARAMETERI4INVPROC glProgramEnvParameterI4iNV;
extern PFNGLPROGRAMENVPARAMETERI4IVNVPROC glProgramEnvParameterI4ivNV;
extern PFNGLPROGRAMENVPARAMETERI4UINVPROC glProgramEnvParameterI4uiNV;
extern PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glProgramEnvParameterI4uivNV;
extern PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glProgramEnvParametersI4ivNV;
extern PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glProgramEnvParametersI4uivNV;
extern PFNGLPROGRAMLOCALPARAMETERI4INVPROC glProgramLocalParameterI4iNV;
extern PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glProgramLocalParameterI4ivNV;
extern PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glProgramLocalParameterI4uiNV;
extern PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glProgramLocalParameterI4uivNV;
extern PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glProgramLocalParametersI4ivNV;
extern PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glProgramLocalParametersI4uivNV;

// GL_NV_gpu_program5

#ifndef GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV
    #define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#endif
#ifndef GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV
    #define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#endif
#ifndef GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV
    #define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#endif
#ifndef GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV
    #define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#endif
#ifndef GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV
    #define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#endif
#ifndef GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV
    #define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#endif

// GL_NV_gpu_shader5

#ifndef GL_INT64_NV
    #define GL_INT64_NV 0x140E
#endif
#ifndef GL_UNSIGNED_INT64_NV
    #define GL_UNSIGNED_INT64_NV 0x140F
#endif
#ifndef GL_INT8_NV
    #define GL_INT8_NV 0x8FE0
#endif
#ifndef GL_INT8_VEC2_NV
    #define GL_INT8_VEC2_NV 0x8FE1
#endif
#ifndef GL_INT8_VEC3_NV
    #define GL_INT8_VEC3_NV 0x8FE2
#endif
#ifndef GL_INT8_VEC4_NV
    #define GL_INT8_VEC4_NV 0x8FE3
#endif
#ifndef GL_INT16_NV
    #define GL_INT16_NV 0x8FE4
#endif
#ifndef GL_INT16_VEC2_NV
    #define GL_INT16_VEC2_NV 0x8FE5
#endif
#ifndef GL_INT16_VEC3_NV
    #define GL_INT16_VEC3_NV 0x8FE6
#endif
#ifndef GL_INT16_VEC4_NV
    #define GL_INT16_VEC4_NV 0x8FE7
#endif
#ifndef GL_INT64_VEC2_NV
    #define GL_INT64_VEC2_NV 0x8FE9
#endif
#ifndef GL_INT64_VEC3_NV
    #define GL_INT64_VEC3_NV 0x8FEA
#endif
#ifndef GL_INT64_VEC4_NV
    #define GL_INT64_VEC4_NV 0x8FEB
#endif
#ifndef GL_UNSIGNED_INT8_NV
    #define GL_UNSIGNED_INT8_NV 0x8FEC
#endif
#ifndef GL_UNSIGNED_INT8_VEC2_NV
    #define GL_UNSIGNED_INT8_VEC2_NV 0x8FED
#endif
#ifndef GL_UNSIGNED_INT8_VEC3_NV
    #define GL_UNSIGNED_INT8_VEC3_NV 0x8FEE
#endif
#ifndef GL_UNSIGNED_INT8_VEC4_NV
    #define GL_UNSIGNED_INT8_VEC4_NV 0x8FEF
#endif
#ifndef GL_UNSIGNED_INT16_NV
    #define GL_UNSIGNED_INT16_NV 0x8FF0
#endif
#ifndef GL_UNSIGNED_INT16_VEC2_NV
    #define GL_UNSIGNED_INT16_VEC2_NV 0x8FF1
#endif
#ifndef GL_UNSIGNED_INT16_VEC3_NV
    #define GL_UNSIGNED_INT16_VEC3_NV 0x8FF2
#endif
#ifndef GL_UNSIGNED_INT16_VEC4_NV
    #define GL_UNSIGNED_INT16_VEC4_NV 0x8FF3
#endif
#ifndef GL_UNSIGNED_INT64_VEC2_NV
    #define GL_UNSIGNED_INT64_VEC2_NV 0x8FF5
#endif
#ifndef GL_UNSIGNED_INT64_VEC3_NV
    #define GL_UNSIGNED_INT64_VEC3_NV 0x8FF6
#endif
#ifndef GL_UNSIGNED_INT64_VEC4_NV
    #define GL_UNSIGNED_INT64_VEC4_NV 0x8FF7
#endif
#ifndef GL_FLOAT16_NV
    #define GL_FLOAT16_NV 0x8FF8
#endif
#ifndef GL_FLOAT16_VEC2_NV
    #define GL_FLOAT16_VEC2_NV 0x8FF9
#endif
#ifndef GL_FLOAT16_VEC3_NV
    #define GL_FLOAT16_VEC3_NV 0x8FFA
#endif
#ifndef GL_FLOAT16_VEC4_NV
    #define GL_FLOAT16_VEC4_NV 0x8FFB
#endif

typedef void (APIENTRY * PFNGLGETUNIFORMI64VNVPROC)(GLuint program, GLint location, GLint64EXT* params);
typedef void (APIENTRY * PFNGLGETUNIFORMUI64VNVPROC)(GLuint program, GLint location, GLuint64EXT* params);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1I64NVPROC)(GLuint program, GLint location, GLint64EXT x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1I64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UI64NVPROC)(GLuint program, GLint location, GLuint64EXT x);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM1UI64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2I64NVPROC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2I64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UI64NVPROC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM2UI64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3I64NVPROC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3I64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UI64NVPROC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM3UI64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4I64NVPROC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4I64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UI64NVPROC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORM4UI64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM1I64NVPROC)(GLint location, GLint64EXT x);
typedef void (APIENTRY * PFNGLUNIFORM1I64VNVPROC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM1UI64NVPROC)(GLint location, GLuint64EXT x);
typedef void (APIENTRY * PFNGLUNIFORM1UI64VNVPROC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM2I64NVPROC)(GLint location, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRY * PFNGLUNIFORM2I64VNVPROC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM2UI64NVPROC)(GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRY * PFNGLUNIFORM2UI64VNVPROC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM3I64NVPROC)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRY * PFNGLUNIFORM3I64VNVPROC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM3UI64NVPROC)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRY * PFNGLUNIFORM3UI64VNVPROC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM4I64NVPROC)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRY * PFNGLUNIFORM4I64VNVPROC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORM4UI64NVPROC)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRY * PFNGLUNIFORM4UI64VNVPROC)(GLint location, GLsizei count, const GLuint64EXT* value);

extern PFNGLGETUNIFORMI64VNVPROC glGetUniformi64vNV;
extern PFNGLGETUNIFORMUI64VNVPROC glGetUniformui64vNV;
extern PFNGLPROGRAMUNIFORM1I64NVPROC glProgramUniform1i64NV;
extern PFNGLPROGRAMUNIFORM1I64VNVPROC glProgramUniform1i64vNV;
extern PFNGLPROGRAMUNIFORM1UI64NVPROC glProgramUniform1ui64NV;
extern PFNGLPROGRAMUNIFORM1UI64VNVPROC glProgramUniform1ui64vNV;
extern PFNGLPROGRAMUNIFORM2I64NVPROC glProgramUniform2i64NV;
extern PFNGLPROGRAMUNIFORM2I64VNVPROC glProgramUniform2i64vNV;
extern PFNGLPROGRAMUNIFORM2UI64NVPROC glProgramUniform2ui64NV;
extern PFNGLPROGRAMUNIFORM2UI64VNVPROC glProgramUniform2ui64vNV;
extern PFNGLPROGRAMUNIFORM3I64NVPROC glProgramUniform3i64NV;
extern PFNGLPROGRAMUNIFORM3I64VNVPROC glProgramUniform3i64vNV;
extern PFNGLPROGRAMUNIFORM3UI64NVPROC glProgramUniform3ui64NV;
extern PFNGLPROGRAMUNIFORM3UI64VNVPROC glProgramUniform3ui64vNV;
extern PFNGLPROGRAMUNIFORM4I64NVPROC glProgramUniform4i64NV;
extern PFNGLPROGRAMUNIFORM4I64VNVPROC glProgramUniform4i64vNV;
extern PFNGLPROGRAMUNIFORM4UI64NVPROC glProgramUniform4ui64NV;
extern PFNGLPROGRAMUNIFORM4UI64VNVPROC glProgramUniform4ui64vNV;
extern PFNGLUNIFORM1I64NVPROC glUniform1i64NV;
extern PFNGLUNIFORM1I64VNVPROC glUniform1i64vNV;
extern PFNGLUNIFORM1UI64NVPROC glUniform1ui64NV;
extern PFNGLUNIFORM1UI64VNVPROC glUniform1ui64vNV;
extern PFNGLUNIFORM2I64NVPROC glUniform2i64NV;
extern PFNGLUNIFORM2I64VNVPROC glUniform2i64vNV;
extern PFNGLUNIFORM2UI64NVPROC glUniform2ui64NV;
extern PFNGLUNIFORM2UI64VNVPROC glUniform2ui64vNV;
extern PFNGLUNIFORM3I64NVPROC glUniform3i64NV;
extern PFNGLUNIFORM3I64VNVPROC glUniform3i64vNV;
extern PFNGLUNIFORM3UI64NVPROC glUniform3ui64NV;
extern PFNGLUNIFORM3UI64VNVPROC glUniform3ui64vNV;
extern PFNGLUNIFORM4I64NVPROC glUniform4i64NV;
extern PFNGLUNIFORM4I64VNVPROC glUniform4i64vNV;
extern PFNGLUNIFORM4UI64NVPROC glUniform4ui64NV;
extern PFNGLUNIFORM4UI64VNVPROC glUniform4ui64vNV;

// GL_NV_half_float

#ifndef GL_HALF_FLOAT_NV
    #define GL_HALF_FLOAT_NV 0x140B
#endif

typedef void (APIENTRY * PFNGLCOLOR3HNVPROC)(GLhalf red, GLhalf green, GLhalf blue);
typedef void (APIENTRY * PFNGLCOLOR3HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLCOLOR4HNVPROC)(GLhalf red, GLhalf green, GLhalf blue, GLhalf alpha);
typedef void (APIENTRY * PFNGLCOLOR4HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLFOGCOORDHNVPROC)(GLhalf fog);
typedef void (APIENTRY * PFNGLFOGCOORDHVNVPROC)(const GLhalf* fog);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1HNVPROC)(GLenum target, GLhalf s);
typedef void (APIENTRY * PFNGLMULTITEXCOORD1HVNVPROC)(GLenum target, const GLhalf* v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2HNVPROC)(GLenum target, GLhalf s, GLhalf t);
typedef void (APIENTRY * PFNGLMULTITEXCOORD2HVNVPROC)(GLenum target, const GLhalf* v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3HNVPROC)(GLenum target, GLhalf s, GLhalf t, GLhalf r);
typedef void (APIENTRY * PFNGLMULTITEXCOORD3HVNVPROC)(GLenum target, const GLhalf* v);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4HNVPROC)(GLenum target, GLhalf s, GLhalf t, GLhalf r, GLhalf q);
typedef void (APIENTRY * PFNGLMULTITEXCOORD4HVNVPROC)(GLenum target, const GLhalf* v);
typedef void (APIENTRY * PFNGLNORMAL3HNVPROC)(GLhalf nx, GLhalf ny, GLhalf nz);
typedef void (APIENTRY * PFNGLNORMAL3HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3HNVPROC)(GLhalf red, GLhalf green, GLhalf blue);
typedef void (APIENTRY * PFNGLSECONDARYCOLOR3HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLTEXCOORD1HNVPROC)(GLhalf s);
typedef void (APIENTRY * PFNGLTEXCOORD1HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLTEXCOORD2HNVPROC)(GLhalf s, GLhalf t);
typedef void (APIENTRY * PFNGLTEXCOORD2HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLTEXCOORD3HNVPROC)(GLhalf s, GLhalf t, GLhalf r);
typedef void (APIENTRY * PFNGLTEXCOORD3HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLTEXCOORD4HNVPROC)(GLhalf s, GLhalf t, GLhalf r, GLhalf q);
typedef void (APIENTRY * PFNGLTEXCOORD4HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEX2HNVPROC)(GLhalf x, GLhalf y);
typedef void (APIENTRY * PFNGLVERTEX2HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEX3HNVPROC)(GLhalf x, GLhalf y, GLhalf z);
typedef void (APIENTRY * PFNGLVERTEX3HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEX4HNVPROC)(GLhalf x, GLhalf y, GLhalf z, GLhalf w);
typedef void (APIENTRY * PFNGLVERTEX4HVNVPROC)(const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1HNVPROC)(GLuint index, GLhalf x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1HVNVPROC)(GLuint index, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2HNVPROC)(GLuint index, GLhalf x, GLhalf y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2HVNVPROC)(GLuint index, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3HNVPROC)(GLuint index, GLhalf x, GLhalf y, GLhalf z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3HVNVPROC)(GLuint index, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4HNVPROC)(GLuint index, GLhalf x, GLhalf y, GLhalf z, GLhalf w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4HVNVPROC)(GLuint index, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS1HVNVPROC)(GLuint index, GLsizei n, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS2HVNVPROC)(GLuint index, GLsizei n, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS3HVNVPROC)(GLuint index, GLsizei n, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS4HVNVPROC)(GLuint index, GLsizei n, const GLhalf* v);
typedef void (APIENTRY * PFNGLVERTEXWEIGHTHNVPROC)(GLhalf weight);
typedef void (APIENTRY * PFNGLVERTEXWEIGHTHVNVPROC)(const GLhalf* weight);

extern PFNGLCOLOR3HNVPROC glColor3hNV;
extern PFNGLCOLOR3HVNVPROC glColor3hvNV;
extern PFNGLCOLOR4HNVPROC glColor4hNV;
extern PFNGLCOLOR4HVNVPROC glColor4hvNV;
extern PFNGLFOGCOORDHNVPROC glFogCoordhNV;
extern PFNGLFOGCOORDHVNVPROC glFogCoordhvNV;
extern PFNGLMULTITEXCOORD1HNVPROC glMultiTexCoord1hNV;
extern PFNGLMULTITEXCOORD1HVNVPROC glMultiTexCoord1hvNV;
extern PFNGLMULTITEXCOORD2HNVPROC glMultiTexCoord2hNV;
extern PFNGLMULTITEXCOORD2HVNVPROC glMultiTexCoord2hvNV;
extern PFNGLMULTITEXCOORD3HNVPROC glMultiTexCoord3hNV;
extern PFNGLMULTITEXCOORD3HVNVPROC glMultiTexCoord3hvNV;
extern PFNGLMULTITEXCOORD4HNVPROC glMultiTexCoord4hNV;
extern PFNGLMULTITEXCOORD4HVNVPROC glMultiTexCoord4hvNV;
extern PFNGLNORMAL3HNVPROC glNormal3hNV;
extern PFNGLNORMAL3HVNVPROC glNormal3hvNV;
extern PFNGLSECONDARYCOLOR3HNVPROC glSecondaryColor3hNV;
extern PFNGLSECONDARYCOLOR3HVNVPROC glSecondaryColor3hvNV;
extern PFNGLTEXCOORD1HNVPROC glTexCoord1hNV;
extern PFNGLTEXCOORD1HVNVPROC glTexCoord1hvNV;
extern PFNGLTEXCOORD2HNVPROC glTexCoord2hNV;
extern PFNGLTEXCOORD2HVNVPROC glTexCoord2hvNV;
extern PFNGLTEXCOORD3HNVPROC glTexCoord3hNV;
extern PFNGLTEXCOORD3HVNVPROC glTexCoord3hvNV;
extern PFNGLTEXCOORD4HNVPROC glTexCoord4hNV;
extern PFNGLTEXCOORD4HVNVPROC glTexCoord4hvNV;
extern PFNGLVERTEX2HNVPROC glVertex2hNV;
extern PFNGLVERTEX2HVNVPROC glVertex2hvNV;
extern PFNGLVERTEX3HNVPROC glVertex3hNV;
extern PFNGLVERTEX3HVNVPROC glVertex3hvNV;
extern PFNGLVERTEX4HNVPROC glVertex4hNV;
extern PFNGLVERTEX4HVNVPROC glVertex4hvNV;
extern PFNGLVERTEXATTRIB1HNVPROC glVertexAttrib1hNV;
extern PFNGLVERTEXATTRIB1HVNVPROC glVertexAttrib1hvNV;
extern PFNGLVERTEXATTRIB2HNVPROC glVertexAttrib2hNV;
extern PFNGLVERTEXATTRIB2HVNVPROC glVertexAttrib2hvNV;
extern PFNGLVERTEXATTRIB3HNVPROC glVertexAttrib3hNV;
extern PFNGLVERTEXATTRIB3HVNVPROC glVertexAttrib3hvNV;
extern PFNGLVERTEXATTRIB4HNVPROC glVertexAttrib4hNV;
extern PFNGLVERTEXATTRIB4HVNVPROC glVertexAttrib4hvNV;
extern PFNGLVERTEXATTRIBS1HVNVPROC glVertexAttribs1hvNV;
extern PFNGLVERTEXATTRIBS2HVNVPROC glVertexAttribs2hvNV;
extern PFNGLVERTEXATTRIBS3HVNVPROC glVertexAttribs3hvNV;
extern PFNGLVERTEXATTRIBS4HVNVPROC glVertexAttribs4hvNV;
extern PFNGLVERTEXWEIGHTHNVPROC glVertexWeighthNV;
extern PFNGLVERTEXWEIGHTHVNVPROC glVertexWeighthvNV;

// GL_NV_light_max_exponent

#ifndef GL_MAX_SHININESS_NV
    #define GL_MAX_SHININESS_NV 0x8504
#endif
#ifndef GL_MAX_SPOT_EXPONENT_NV
    #define GL_MAX_SPOT_EXPONENT_NV 0x8505
#endif

// GL_NV_multisample_coverage

#ifndef GL_COVERAGE_SAMPLES_NV
    #define GL_COVERAGE_SAMPLES_NV 0x80A9
#endif
#ifndef GL_COLOR_SAMPLES_NV
    #define GL_COLOR_SAMPLES_NV 0x8E20
#endif

// GL_NV_multisample_filter_hint

#ifndef GL_MULTISAMPLE_FILTER_HINT_NV
    #define GL_MULTISAMPLE_FILTER_HINT_NV 0x8534
#endif

// GL_NV_occlusion_query

#ifndef GL_PIXEL_COUNTER_BITS_NV
    #define GL_PIXEL_COUNTER_BITS_NV 0x8864
#endif
#ifndef GL_CURRENT_OCCLUSION_QUERY_ID_NV
    #define GL_CURRENT_OCCLUSION_QUERY_ID_NV 0x8865
#endif
#ifndef GL_PIXEL_COUNT_NV
    #define GL_PIXEL_COUNT_NV 0x8866
#endif
#ifndef GL_PIXEL_COUNT_AVAILABLE_NV
    #define GL_PIXEL_COUNT_AVAILABLE_NV 0x8867
#endif

typedef void (APIENTRY * PFNGLBEGINOCCLUSIONQUERYNVPROC)(GLuint id);
typedef void (APIENTRY * PFNGLDELETEOCCLUSIONQUERIESNVPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLENDOCCLUSIONQUERYNVPROC)(void);
typedef void (APIENTRY * PFNGLGENOCCLUSIONQUERIESNVPROC)(GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLGETOCCLUSIONQUERYIVNVPROC)(GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETOCCLUSIONQUERYUIVNVPROC)(GLuint id, GLenum pname, GLuint* params);
typedef GLboolean (APIENTRY * PFNGLISOCCLUSIONQUERYNVPROC)(GLuint id);

extern PFNGLBEGINOCCLUSIONQUERYNVPROC glBeginOcclusionQueryNV;
extern PFNGLDELETEOCCLUSIONQUERIESNVPROC glDeleteOcclusionQueriesNV;
extern PFNGLENDOCCLUSIONQUERYNVPROC glEndOcclusionQueryNV;
extern PFNGLGENOCCLUSIONQUERIESNVPROC glGenOcclusionQueriesNV;
extern PFNGLGETOCCLUSIONQUERYIVNVPROC glGetOcclusionQueryivNV;
extern PFNGLGETOCCLUSIONQUERYUIVNVPROC glGetOcclusionQueryuivNV;
extern PFNGLISOCCLUSIONQUERYNVPROC glIsOcclusionQueryNV;

// GL_NV_packed_depth_stencil

#ifndef GL_DEPTH_STENCIL_NV
    #define GL_DEPTH_STENCIL_NV 0x84F9
#endif
#ifndef GL_UNSIGNED_INT_24_8_NV
    #define GL_UNSIGNED_INT_24_8_NV 0x84FA
#endif

// GL_NV_parameter_buffer_object

#ifndef GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV
    #define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#endif
#ifndef GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV
    #define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#endif
#ifndef GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV
    #define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#endif
#ifndef GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV
    #define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#endif
#ifndef GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV
    #define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4
#endif

typedef void (APIENTRY * PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint *params);
typedef void (APIENTRY * PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint *params);
typedef void (APIENTRY * PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat *params);

extern PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glProgramBufferParametersIivNV;
extern PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glProgramBufferParametersIuivNV;
extern PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glProgramBufferParametersfvNV;

// GL_NV_pixel_data_range

#ifndef GL_WRITE_PIXEL_DATA_RANGE_NV
    #define GL_WRITE_PIXEL_DATA_RANGE_NV 0x8878
#endif
#ifndef GL_READ_PIXEL_DATA_RANGE_NV
    #define GL_READ_PIXEL_DATA_RANGE_NV 0x8879
#endif
#ifndef GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV
    #define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#endif
#ifndef GL_READ_PIXEL_DATA_RANGE_LENGTH_NV
    #define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#endif
#ifndef GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV
    #define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#endif
#ifndef GL_READ_PIXEL_DATA_RANGE_POINTER_NV
    #define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D
#endif

typedef void (APIENTRY * PFNGLFLUSHPIXELDATARANGENVPROC)(GLenum target);
typedef void (APIENTRY * PFNGLPIXELDATARANGENVPROC)(GLenum target, GLsizei length, void* pointer);

extern PFNGLFLUSHPIXELDATARANGENVPROC glFlushPixelDataRangeNV;
extern PFNGLPIXELDATARANGENVPROC glPixelDataRangeNV;

// GL_NV_point_sprite

#ifndef GL_POINT_SPRITE_NV
    #define GL_POINT_SPRITE_NV 0x8861
#endif
#ifndef GL_COORD_REPLACE_NV
    #define GL_COORD_REPLACE_NV 0x8862
#endif
#ifndef GL_POINT_SPRITE_R_MODE_NV
    #define GL_POINT_SPRITE_R_MODE_NV 0x8863
#endif

typedef void (APIENTRY * PFNGLPOINTPARAMETERINVPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLPOINTPARAMETERIVNVPROC)(GLenum pname, const GLint* params);

extern PFNGLPOINTPARAMETERINVPROC glPointParameteriNV;
extern PFNGLPOINTPARAMETERIVNVPROC glPointParameterivNV;

// GL_NV_present_video

#ifndef GL_FRAME_NV
    #define GL_FRAME_NV 0x8E26
#endif
#ifndef GL_FIELDS_NV
    #define GL_FIELDS_NV 0x8E27
#endif
#ifndef GL_CURRENT_TIME_NV
    #define GL_CURRENT_TIME_NV 0x8E28
#endif
#ifndef GL_NUM_FILL_STREAMS_NV
    #define GL_NUM_FILL_STREAMS_NV 0x8E29
#endif
#ifndef GL_PRESENT_TIME_NV
    #define GL_PRESENT_TIME_NV 0x8E2A
#endif
#ifndef GL_PRESENT_DURATION_NV
    #define GL_PRESENT_DURATION_NV 0x8E2B
#endif

typedef void (APIENTRY * PFNGLGETVIDEOI64VNVPROC)(GLuint video_slot, GLenum pname, GLint64EXT* params);
typedef void (APIENTRY * PFNGLGETVIDEOIVNVPROC)(GLuint video_slot, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETVIDEOUI64VNVPROC)(GLuint video_slot, GLenum pname, GLuint64EXT* params);
typedef void (APIENTRY * PFNGLGETVIDEOUIVNVPROC)(GLuint video_slot, GLenum pname, GLuint* params);
typedef void (APIENTRY * PFNGLPRESENTFRAMEDUALFILLNVPROC)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
typedef void (APIENTRY * PFNGLPRESENTFRAMEKEYEDNVPROC)(GLuint video_slot, GLuint64EXT minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);

extern PFNGLGETVIDEOI64VNVPROC glGetVideoi64vNV;
extern PFNGLGETVIDEOIVNVPROC glGetVideoivNV;
extern PFNGLGETVIDEOUI64VNVPROC glGetVideoui64vNV;
extern PFNGLGETVIDEOUIVNVPROC glGetVideouivNV;
extern PFNGLPRESENTFRAMEDUALFILLNVPROC glPresentFrameDualFillNV;
extern PFNGLPRESENTFRAMEKEYEDNVPROC glPresentFrameKeyedNV;

// GL_NV_primitive_restart

#ifndef GL_PRIMITIVE_RESTART_NV
    #define GL_PRIMITIVE_RESTART_NV 0x8558
#endif
#ifndef GL_PRIMITIVE_RESTART_INDEX_NV
    #define GL_PRIMITIVE_RESTART_INDEX_NV 0x8559
#endif

typedef void (APIENTRY * PFNGLPRIMITIVERESTARTINDEXNVPROC)(GLuint index);
typedef void (APIENTRY * PFNGLPRIMITIVERESTARTNVPROC)(void);

extern PFNGLPRIMITIVERESTARTINDEXNVPROC glPrimitiveRestartIndexNV;
extern PFNGLPRIMITIVERESTARTNVPROC glPrimitiveRestartNV;

// GL_NV_register_combiners

#ifndef GL_REGISTER_COMBINERS_NV
    #define GL_REGISTER_COMBINERS_NV 0x8522
#endif
#ifndef GL_VARIABLE_A_NV
    #define GL_VARIABLE_A_NV 0x8523
#endif
#ifndef GL_VARIABLE_B_NV
    #define GL_VARIABLE_B_NV 0x8524
#endif
#ifndef GL_VARIABLE_C_NV
    #define GL_VARIABLE_C_NV 0x8525
#endif
#ifndef GL_VARIABLE_D_NV
    #define GL_VARIABLE_D_NV 0x8526
#endif
#ifndef GL_VARIABLE_E_NV
    #define GL_VARIABLE_E_NV 0x8527
#endif
#ifndef GL_VARIABLE_F_NV
    #define GL_VARIABLE_F_NV 0x8528
#endif
#ifndef GL_VARIABLE_G_NV
    #define GL_VARIABLE_G_NV 0x8529
#endif
#ifndef GL_CONSTANT_COLOR0_NV
    #define GL_CONSTANT_COLOR0_NV 0x852A
#endif
#ifndef GL_CONSTANT_COLOR1_NV
    #define GL_CONSTANT_COLOR1_NV 0x852B
#endif
#ifndef GL_PRIMARY_COLOR_NV
    #define GL_PRIMARY_COLOR_NV 0x852C
#endif
#ifndef GL_SECONDARY_COLOR_NV
    #define GL_SECONDARY_COLOR_NV 0x852D
#endif
#ifndef GL_SPARE0_NV
    #define GL_SPARE0_NV 0x852E
#endif
#ifndef GL_SPARE1_NV
    #define GL_SPARE1_NV 0x852F
#endif
#ifndef GL_DISCARD_NV
    #define GL_DISCARD_NV 0x8530
#endif
#ifndef GL_E_TIMES_F_NV
    #define GL_E_TIMES_F_NV 0x8531
#endif
#ifndef GL_SPARE0_PLUS_SECONDARY_COLOR_NV
    #define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#endif
#ifndef GL_UNSIGNED_IDENTITY_NV
    #define GL_UNSIGNED_IDENTITY_NV 0x8536
#endif
#ifndef GL_UNSIGNED_INVERT_NV
    #define GL_UNSIGNED_INVERT_NV 0x8537
#endif
#ifndef GL_EXPAND_NORMAL_NV
    #define GL_EXPAND_NORMAL_NV 0x8538
#endif
#ifndef GL_EXPAND_NEGATE_NV
    #define GL_EXPAND_NEGATE_NV 0x8539
#endif
#ifndef GL_HALF_BIAS_NORMAL_NV
    #define GL_HALF_BIAS_NORMAL_NV 0x853A
#endif
#ifndef GL_HALF_BIAS_NEGATE_NV
    #define GL_HALF_BIAS_NEGATE_NV 0x853B
#endif
#ifndef GL_SIGNED_IDENTITY_NV
    #define GL_SIGNED_IDENTITY_NV 0x853C
#endif
#ifndef GL_SIGNED_NEGATE_NV
    #define GL_SIGNED_NEGATE_NV 0x853D
#endif
#ifndef GL_SCALE_BY_TWO_NV
    #define GL_SCALE_BY_TWO_NV 0x853E
#endif
#ifndef GL_SCALE_BY_FOUR_NV
    #define GL_SCALE_BY_FOUR_NV 0x853F
#endif
#ifndef GL_SCALE_BY_ONE_HALF_NV
    #define GL_SCALE_BY_ONE_HALF_NV 0x8540
#endif
#ifndef GL_BIAS_BY_NEGATIVE_ONE_HALF_NV
    #define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV 0x8541
#endif
#ifndef GL_COMBINER_INPUT_NV
    #define GL_COMBINER_INPUT_NV 0x8542
#endif
#ifndef GL_COMBINER_MAPPING_NV
    #define GL_COMBINER_MAPPING_NV 0x8543
#endif
#ifndef GL_COMBINER_COMPONENT_USAGE_NV
    #define GL_COMBINER_COMPONENT_USAGE_NV 0x8544
#endif
#ifndef GL_COMBINER_AB_DOT_PRODUCT_NV
    #define GL_COMBINER_AB_DOT_PRODUCT_NV 0x8545
#endif
#ifndef GL_COMBINER_CD_DOT_PRODUCT_NV
    #define GL_COMBINER_CD_DOT_PRODUCT_NV 0x8546
#endif
#ifndef GL_COMBINER_MUX_SUM_NV
    #define GL_COMBINER_MUX_SUM_NV 0x8547
#endif
#ifndef GL_COMBINER_SCALE_NV
    #define GL_COMBINER_SCALE_NV 0x8548
#endif
#ifndef GL_COMBINER_BIAS_NV
    #define GL_COMBINER_BIAS_NV 0x8549
#endif
#ifndef GL_COMBINER_AB_OUTPUT_NV
    #define GL_COMBINER_AB_OUTPUT_NV 0x854A
#endif
#ifndef GL_COMBINER_CD_OUTPUT_NV
    #define GL_COMBINER_CD_OUTPUT_NV 0x854B
#endif
#ifndef GL_COMBINER_SUM_OUTPUT_NV
    #define GL_COMBINER_SUM_OUTPUT_NV 0x854C
#endif
#ifndef GL_MAX_GENERAL_COMBINERS_NV
    #define GL_MAX_GENERAL_COMBINERS_NV 0x854D
#endif
#ifndef GL_NUM_GENERAL_COMBINERS_NV
    #define GL_NUM_GENERAL_COMBINERS_NV 0x854E
#endif
#ifndef GL_COLOR_SUM_CLAMP_NV
    #define GL_COLOR_SUM_CLAMP_NV 0x854F
#endif
#ifndef GL_COMBINER0_NV
    #define GL_COMBINER0_NV 0x8550
#endif
#ifndef GL_COMBINER1_NV
    #define GL_COMBINER1_NV 0x8551
#endif
#ifndef GL_COMBINER2_NV
    #define GL_COMBINER2_NV 0x8552
#endif
#ifndef GL_COMBINER3_NV
    #define GL_COMBINER3_NV 0x8553
#endif
#ifndef GL_COMBINER4_NV
    #define GL_COMBINER4_NV 0x8554
#endif
#ifndef GL_COMBINER5_NV
    #define GL_COMBINER5_NV 0x8555
#endif
#ifndef GL_COMBINER6_NV
    #define GL_COMBINER6_NV 0x8556
#endif
#ifndef GL_COMBINER7_NV
    #define GL_COMBINER7_NV 0x8557
#endif

typedef void (APIENTRY * PFNGLCOMBINERINPUTNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void (APIENTRY * PFNGLCOMBINEROUTPUTNVPROC)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
typedef void (APIENTRY * PFNGLCOMBINERPARAMETERFNVPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLCOMBINERPARAMETERFVNVPROC)(GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLCOMBINERPARAMETERINVPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLCOMBINERPARAMETERIVNVPROC)(GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLFINALCOMBINERINPUTNVPROC)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void (APIENTRY * PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC)(GLenum stage, GLenum portion, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC)(GLenum stage, GLenum portion, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC)(GLenum variable, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC)(GLenum variable, GLenum pname, GLint* params);

extern PFNGLCOMBINERINPUTNVPROC glCombinerInputNV;
extern PFNGLCOMBINEROUTPUTNVPROC glCombinerOutputNV;
extern PFNGLCOMBINERPARAMETERFNVPROC glCombinerParameterfNV;
extern PFNGLCOMBINERPARAMETERFVNVPROC glCombinerParameterfvNV;
extern PFNGLCOMBINERPARAMETERINVPROC glCombinerParameteriNV;
extern PFNGLCOMBINERPARAMETERIVNVPROC glCombinerParameterivNV;
extern PFNGLFINALCOMBINERINPUTNVPROC glFinalCombinerInputNV;
extern PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glGetCombinerInputParameterfvNV;
extern PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glGetCombinerInputParameterivNV;
extern PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glGetCombinerOutputParameterfvNV;
extern PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glGetCombinerOutputParameterivNV;
extern PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glGetFinalCombinerInputParameterfvNV;
extern PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glGetFinalCombinerInputParameterivNV;

// GL_NV_register_combiners2

#ifndef GL_PER_STAGE_CONSTANTS_NV
    #define GL_PER_STAGE_CONSTANTS_NV 0x8535
#endif

typedef void (APIENTRY * PFNGLCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC)(GLenum stage, GLenum pname, GLfloat* params);

extern PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glCombinerStageParameterfvNV;
extern PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glGetCombinerStageParameterfvNV;

// GL_NV_shader_buffer_load

#ifndef GL_BUFFER_GPU_ADDRESS_NV
    #define GL_BUFFER_GPU_ADDRESS_NV 0x8F1D
#endif
#ifndef GL_GPU_ADDRESS_NV
    #define GL_GPU_ADDRESS_NV 0x8F34
#endif
#ifndef GL_MAX_SHADER_BUFFER_ADDRESS_NV
    #define GL_MAX_SHADER_BUFFER_ADDRESS_NV 0x8F35
#endif

typedef void (APIENTRY * PFNGLGETBUFFERPARAMETERUI64VNVPROC)(GLenum target, GLenum pname, GLuint64EXT* params);
typedef void (APIENTRY * PFNGLGETINTEGERUI64VNVPROC)(GLenum value, GLuint64EXT* result);
typedef void (APIENTRY * PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC)(GLuint buffer, GLenum pname, GLuint64EXT* params);
typedef GLboolean (APIENTRY * PFNGLISBUFFERRESIDENTNVPROC)(GLenum target);
typedef GLboolean (APIENTRY * PFNGLISNAMEDBUFFERRESIDENTNVPROC)(GLuint buffer);
typedef void (APIENTRY * PFNGLMAKEBUFFERNONRESIDENTNVPROC)(GLenum target);
typedef void (APIENTRY * PFNGLMAKEBUFFERRESIDENTNVPROC)(GLenum target, GLenum access);
typedef void (APIENTRY * PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC)(GLuint buffer);
typedef void (APIENTRY * PFNGLMAKENAMEDBUFFERRESIDENTNVPROC)(GLuint buffer, GLenum access);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMUI64NVPROC)(GLuint program, GLint location, GLuint64EXT value);
typedef void (APIENTRY * PFNGLPROGRAMUNIFORMUI64VNVPROC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (APIENTRY * PFNGLUNIFORMUI64NVPROC)(GLint location, GLuint64EXT value);
typedef void (APIENTRY * PFNGLUNIFORMUI64VNVPROC)(GLint location, GLsizei count, const GLuint64EXT* value);

extern PFNGLGETBUFFERPARAMETERUI64VNVPROC glGetBufferParameterui64vNV;
extern PFNGLGETINTEGERUI64VNVPROC glGetIntegerui64vNV;
extern PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glGetNamedBufferParameterui64vNV;
extern PFNGLISBUFFERRESIDENTNVPROC glIsBufferResidentNV;
extern PFNGLISNAMEDBUFFERRESIDENTNVPROC glIsNamedBufferResidentNV;
extern PFNGLMAKEBUFFERNONRESIDENTNVPROC glMakeBufferNonResidentNV;
extern PFNGLMAKEBUFFERRESIDENTNVPROC glMakeBufferResidentNV;
extern PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glMakeNamedBufferNonResidentNV;
extern PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glMakeNamedBufferResidentNV;
extern PFNGLPROGRAMUNIFORMUI64NVPROC glProgramUniformui64NV;
extern PFNGLPROGRAMUNIFORMUI64VNVPROC glProgramUniformui64vNV;
extern PFNGLUNIFORMUI64NVPROC glUniformui64NV;
extern PFNGLUNIFORMUI64VNVPROC glUniformui64vNV;

// GL_NV_tessellation_program5

#ifndef GL_MAX_PROGRAM_PATCH_ATTRIBS_NV
    #define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV 0x86D8
#endif
#ifndef GL_TESS_CONTROL_PROGRAM_NV
    #define GL_TESS_CONTROL_PROGRAM_NV 0x891E
#endif
#ifndef GL_TESS_EVALUATION_PROGRAM_NV
    #define GL_TESS_EVALUATION_PROGRAM_NV 0x891F
#endif
#ifndef GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV
    #define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV 0x8C74
#endif
#ifndef GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV
    #define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV 0x8C75
#endif

// GL_NV_texgen_emboss

#ifndef GL_EMBOSS_LIGHT_NV
    #define GL_EMBOSS_LIGHT_NV 0x855D
#endif
#ifndef GL_EMBOSS_CONSTANT_NV
    #define GL_EMBOSS_CONSTANT_NV 0x855E
#endif
#ifndef GL_EMBOSS_MAP_NV
    #define GL_EMBOSS_MAP_NV 0x855F
#endif

// GL_NV_texgen_reflection

#ifndef GL_NORMAL_MAP_NV
    #define GL_NORMAL_MAP_NV 0x8511
#endif
#ifndef GL_REFLECTION_MAP_NV
    #define GL_REFLECTION_MAP_NV 0x8512
#endif

// GL_NV_texture_barrier


typedef void (APIENTRY * PFNGLTEXTUREBARRIERNVPROC)(void);

extern PFNGLTEXTUREBARRIERNVPROC glTextureBarrierNV;

// GL_NV_texture_env_combine4

#ifndef GL_COMBINE4_NV
    #define GL_COMBINE4_NV 0x8503
#endif
#ifndef GL_SOURCE3_RGB_NV
    #define GL_SOURCE3_RGB_NV 0x8583
#endif
#ifndef GL_SOURCE3_ALPHA_NV
    #define GL_SOURCE3_ALPHA_NV 0x858B
#endif
#ifndef GL_OPERAND3_RGB_NV
    #define GL_OPERAND3_RGB_NV 0x8593
#endif
#ifndef GL_OPERAND3_ALPHA_NV
    #define GL_OPERAND3_ALPHA_NV 0x859B
#endif

// GL_NV_texture_expand_normal

#ifndef GL_TEXTURE_UNSIGNED_REMAP_MODE_NV
    #define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV 0x888F
#endif

// GL_NV_texture_rectangle

#ifndef GL_TEXTURE_RECTANGLE_NV
    #define GL_TEXTURE_RECTANGLE_NV 0x84F5
#endif
#ifndef GL_TEXTURE_BINDING_RECTANGLE_NV
    #define GL_TEXTURE_BINDING_RECTANGLE_NV 0x84F6
#endif
#ifndef GL_PROXY_TEXTURE_RECTANGLE_NV
    #define GL_PROXY_TEXTURE_RECTANGLE_NV 0x84F7
#endif
#ifndef GL_MAX_RECTANGLE_TEXTURE_SIZE_NV
    #define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV 0x84F8
#endif

// GL_NV_texture_shader

#ifndef GL_OFFSET_TEXTURE_RECTANGLE_NV
    #define GL_OFFSET_TEXTURE_RECTANGLE_NV 0x864C
#endif
#ifndef GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV
    #define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#endif
#ifndef GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV
    #define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#endif
#ifndef GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV
    #define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#endif
#ifndef GL_UNSIGNED_INT_S8_S8_8_8_NV
    #define GL_UNSIGNED_INT_S8_S8_8_8_NV 0x86DA
#endif
#ifndef GL_UNSIGNED_INT_8_8_S8_S8_REV_NV
    #define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV 0x86DB
#endif
#ifndef GL_DSDT_MAG_INTENSITY_NV
    #define GL_DSDT_MAG_INTENSITY_NV 0x86DC
#endif
#ifndef GL_SHADER_CONSISTENT_NV
    #define GL_SHADER_CONSISTENT_NV 0x86DD
#endif
#ifndef GL_TEXTURE_SHADER_NV
    #define GL_TEXTURE_SHADER_NV 0x86DE
#endif
#ifndef GL_SHADER_OPERATION_NV
    #define GL_SHADER_OPERATION_NV 0x86DF
#endif
#ifndef GL_CULL_MODES_NV
    #define GL_CULL_MODES_NV 0x86E0
#endif
#ifndef GL_OFFSET_TEXTURE_2D_MATRIX_NV
    #define GL_OFFSET_TEXTURE_2D_MATRIX_NV 0x86E1
#endif
#ifndef GL_OFFSET_TEXTURE_MATRIX_NV
    #define GL_OFFSET_TEXTURE_MATRIX_NV 0x86E1
#endif
#ifndef GL_OFFSET_TEXTURE_2D_SCALE_NV
    #define GL_OFFSET_TEXTURE_2D_SCALE_NV 0x86E2
#endif
#ifndef GL_OFFSET_TEXTURE_SCALE_NV
    #define GL_OFFSET_TEXTURE_SCALE_NV 0x86E2
#endif
#ifndef GL_OFFSET_TEXTURE_BIAS_NV
    #define GL_OFFSET_TEXTURE_BIAS_NV 0x86E3
#endif
#ifndef GL_OFFSET_TEXTURE_2D_BIAS_NV
    #define GL_OFFSET_TEXTURE_2D_BIAS_NV 0x86E3
#endif
#ifndef GL_PREVIOUS_TEXTURE_INPUT_NV
    #define GL_PREVIOUS_TEXTURE_INPUT_NV 0x86E4
#endif
#ifndef GL_CONST_EYE_NV
    #define GL_CONST_EYE_NV 0x86E5
#endif
#ifndef GL_PASS_THROUGH_NV
    #define GL_PASS_THROUGH_NV 0x86E6
#endif
#ifndef GL_CULL_FRAGMENT_NV
    #define GL_CULL_FRAGMENT_NV 0x86E7
#endif
#ifndef GL_OFFSET_TEXTURE_2D_NV
    #define GL_OFFSET_TEXTURE_2D_NV 0x86E8
#endif
#ifndef GL_DEPENDENT_AR_TEXTURE_2D_NV
    #define GL_DEPENDENT_AR_TEXTURE_2D_NV 0x86E9
#endif
#ifndef GL_DEPENDENT_GB_TEXTURE_2D_NV
    #define GL_DEPENDENT_GB_TEXTURE_2D_NV 0x86EA
#endif
#ifndef GL_DOT_PRODUCT_NV
    #define GL_DOT_PRODUCT_NV 0x86EC
#endif
#ifndef GL_DOT_PRODUCT_DEPTH_REPLACE_NV
    #define GL_DOT_PRODUCT_DEPTH_REPLACE_NV 0x86ED
#endif
#ifndef GL_DOT_PRODUCT_TEXTURE_2D_NV
    #define GL_DOT_PRODUCT_TEXTURE_2D_NV 0x86EE
#endif
#ifndef GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV
    #define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#endif
#ifndef GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV
    #define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#endif
#ifndef GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV
    #define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#endif
#ifndef GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV
    #define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#endif
#ifndef GL_HILO_NV
    #define GL_HILO_NV 0x86F4
#endif
#ifndef GL_DSDT_NV
    #define GL_DSDT_NV 0x86F5
#endif
#ifndef GL_DSDT_MAG_NV
    #define GL_DSDT_MAG_NV 0x86F6
#endif
#ifndef GL_DSDT_MAG_VIB_NV
    #define GL_DSDT_MAG_VIB_NV 0x86F7
#endif
#ifndef GL_HILO16_NV
    #define GL_HILO16_NV 0x86F8
#endif
#ifndef GL_SIGNED_HILO_NV
    #define GL_SIGNED_HILO_NV 0x86F9
#endif
#ifndef GL_SIGNED_HILO16_NV
    #define GL_SIGNED_HILO16_NV 0x86FA
#endif
#ifndef GL_SIGNED_RGBA_NV
    #define GL_SIGNED_RGBA_NV 0x86FB
#endif
#ifndef GL_SIGNED_RGBA8_NV
    #define GL_SIGNED_RGBA8_NV 0x86FC
#endif
#ifndef GL_SIGNED_RGB_NV
    #define GL_SIGNED_RGB_NV 0x86FE
#endif
#ifndef GL_SIGNED_RGB8_NV
    #define GL_SIGNED_RGB8_NV 0x86FF
#endif
#ifndef GL_SIGNED_LUMINANCE_NV
    #define GL_SIGNED_LUMINANCE_NV 0x8701
#endif
#ifndef GL_SIGNED_LUMINANCE8_NV
    #define GL_SIGNED_LUMINANCE8_NV 0x8702
#endif
#ifndef GL_SIGNED_LUMINANCE_ALPHA_NV
    #define GL_SIGNED_LUMINANCE_ALPHA_NV 0x8703
#endif
#ifndef GL_SIGNED_LUMINANCE8_ALPHA8_NV
    #define GL_SIGNED_LUMINANCE8_ALPHA8_NV 0x8704
#endif
#ifndef GL_SIGNED_ALPHA_NV
    #define GL_SIGNED_ALPHA_NV 0x8705
#endif
#ifndef GL_SIGNED_ALPHA8_NV
    #define GL_SIGNED_ALPHA8_NV 0x8706
#endif
#ifndef GL_SIGNED_INTENSITY_NV
    #define GL_SIGNED_INTENSITY_NV 0x8707
#endif
#ifndef GL_SIGNED_INTENSITY8_NV
    #define GL_SIGNED_INTENSITY8_NV 0x8708
#endif
#ifndef GL_DSDT8_NV
    #define GL_DSDT8_NV 0x8709
#endif
#ifndef GL_DSDT8_MAG8_NV
    #define GL_DSDT8_MAG8_NV 0x870A
#endif
#ifndef GL_DSDT8_MAG8_INTENSITY8_NV
    #define GL_DSDT8_MAG8_INTENSITY8_NV 0x870B
#endif
#ifndef GL_SIGNED_RGB_UNSIGNED_ALPHA_NV
    #define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV 0x870C
#endif
#ifndef GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV
    #define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#endif
#ifndef GL_HI_SCALE_NV
    #define GL_HI_SCALE_NV 0x870E
#endif
#ifndef GL_LO_SCALE_NV
    #define GL_LO_SCALE_NV 0x870F
#endif
#ifndef GL_DS_SCALE_NV
    #define GL_DS_SCALE_NV 0x8710
#endif
#ifndef GL_DT_SCALE_NV
    #define GL_DT_SCALE_NV 0x8711
#endif
#ifndef GL_MAGNITUDE_SCALE_NV
    #define GL_MAGNITUDE_SCALE_NV 0x8712
#endif
#ifndef GL_VIBRANCE_SCALE_NV
    #define GL_VIBRANCE_SCALE_NV 0x8713
#endif
#ifndef GL_HI_BIAS_NV
    #define GL_HI_BIAS_NV 0x8714
#endif
#ifndef GL_LO_BIAS_NV
    #define GL_LO_BIAS_NV 0x8715
#endif
#ifndef GL_DS_BIAS_NV
    #define GL_DS_BIAS_NV 0x8716
#endif
#ifndef GL_DT_BIAS_NV
    #define GL_DT_BIAS_NV 0x8717
#endif
#ifndef GL_MAGNITUDE_BIAS_NV
    #define GL_MAGNITUDE_BIAS_NV 0x8718
#endif
#ifndef GL_VIBRANCE_BIAS_NV
    #define GL_VIBRANCE_BIAS_NV 0x8719
#endif
#ifndef GL_TEXTURE_BORDER_VALUES_NV
    #define GL_TEXTURE_BORDER_VALUES_NV 0x871A
#endif
#ifndef GL_TEXTURE_HI_SIZE_NV
    #define GL_TEXTURE_HI_SIZE_NV 0x871B
#endif
#ifndef GL_TEXTURE_LO_SIZE_NV
    #define GL_TEXTURE_LO_SIZE_NV 0x871C
#endif
#ifndef GL_TEXTURE_DS_SIZE_NV
    #define GL_TEXTURE_DS_SIZE_NV 0x871D
#endif
#ifndef GL_TEXTURE_DT_SIZE_NV
    #define GL_TEXTURE_DT_SIZE_NV 0x871E
#endif
#ifndef GL_TEXTURE_MAG_SIZE_NV
    #define GL_TEXTURE_MAG_SIZE_NV 0x871F
#endif

// GL_NV_texture_shader2

#ifndef GL_UNSIGNED_INT_S8_S8_8_8_NV
    #define GL_UNSIGNED_INT_S8_S8_8_8_NV 0x86DA
#endif
#ifndef GL_UNSIGNED_INT_8_8_S8_S8_REV_NV
    #define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV 0x86DB
#endif
#ifndef GL_DSDT_MAG_INTENSITY_NV
    #define GL_DSDT_MAG_INTENSITY_NV 0x86DC
#endif
#ifndef GL_DOT_PRODUCT_TEXTURE_3D_NV
    #define GL_DOT_PRODUCT_TEXTURE_3D_NV 0x86EF
#endif
#ifndef GL_HILO_NV
    #define GL_HILO_NV 0x86F4
#endif
#ifndef GL_DSDT_NV
    #define GL_DSDT_NV 0x86F5
#endif
#ifndef GL_DSDT_MAG_NV
    #define GL_DSDT_MAG_NV 0x86F6
#endif
#ifndef GL_DSDT_MAG_VIB_NV
    #define GL_DSDT_MAG_VIB_NV 0x86F7
#endif
#ifndef GL_HILO16_NV
    #define GL_HILO16_NV 0x86F8
#endif
#ifndef GL_SIGNED_HILO_NV
    #define GL_SIGNED_HILO_NV 0x86F9
#endif
#ifndef GL_SIGNED_HILO16_NV
    #define GL_SIGNED_HILO16_NV 0x86FA
#endif
#ifndef GL_SIGNED_RGBA_NV
    #define GL_SIGNED_RGBA_NV 0x86FB
#endif
#ifndef GL_SIGNED_RGBA8_NV
    #define GL_SIGNED_RGBA8_NV 0x86FC
#endif
#ifndef GL_SIGNED_RGB_NV
    #define GL_SIGNED_RGB_NV 0x86FE
#endif
#ifndef GL_SIGNED_RGB8_NV
    #define GL_SIGNED_RGB8_NV 0x86FF
#endif
#ifndef GL_SIGNED_LUMINANCE_NV
    #define GL_SIGNED_LUMINANCE_NV 0x8701
#endif
#ifndef GL_SIGNED_LUMINANCE8_NV
    #define GL_SIGNED_LUMINANCE8_NV 0x8702
#endif
#ifndef GL_SIGNED_LUMINANCE_ALPHA_NV
    #define GL_SIGNED_LUMINANCE_ALPHA_NV 0x8703
#endif
#ifndef GL_SIGNED_LUMINANCE8_ALPHA8_NV
    #define GL_SIGNED_LUMINANCE8_ALPHA8_NV 0x8704
#endif
#ifndef GL_SIGNED_ALPHA_NV
    #define GL_SIGNED_ALPHA_NV 0x8705
#endif
#ifndef GL_SIGNED_ALPHA8_NV
    #define GL_SIGNED_ALPHA8_NV 0x8706
#endif
#ifndef GL_SIGNED_INTENSITY_NV
    #define GL_SIGNED_INTENSITY_NV 0x8707
#endif
#ifndef GL_SIGNED_INTENSITY8_NV
    #define GL_SIGNED_INTENSITY8_NV 0x8708
#endif
#ifndef GL_DSDT8_NV
    #define GL_DSDT8_NV 0x8709
#endif
#ifndef GL_DSDT8_MAG8_NV
    #define GL_DSDT8_MAG8_NV 0x870A
#endif
#ifndef GL_DSDT8_MAG8_INTENSITY8_NV
    #define GL_DSDT8_MAG8_INTENSITY8_NV 0x870B
#endif
#ifndef GL_SIGNED_RGB_UNSIGNED_ALPHA_NV
    #define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV 0x870C
#endif
#ifndef GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV
    #define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#endif

// GL_NV_texture_shader3

#ifndef GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV
    #define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#endif
#ifndef GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV
    #define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#endif
#ifndef GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV
    #define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#endif
#ifndef GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV
    #define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#endif
#ifndef GL_OFFSET_HILO_TEXTURE_2D_NV
    #define GL_OFFSET_HILO_TEXTURE_2D_NV 0x8854
#endif
#ifndef GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV
    #define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#endif
#ifndef GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV
    #define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#endif
#ifndef GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV
    #define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#endif
#ifndef GL_DEPENDENT_HILO_TEXTURE_2D_NV
    #define GL_DEPENDENT_HILO_TEXTURE_2D_NV 0x8858
#endif
#ifndef GL_DEPENDENT_RGB_TEXTURE_3D_NV
    #define GL_DEPENDENT_RGB_TEXTURE_3D_NV 0x8859
#endif
#ifndef GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV
    #define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#endif
#ifndef GL_DOT_PRODUCT_PASS_THROUGH_NV
    #define GL_DOT_PRODUCT_PASS_THROUGH_NV 0x885B
#endif
#ifndef GL_DOT_PRODUCT_TEXTURE_1D_NV
    #define GL_DOT_PRODUCT_TEXTURE_1D_NV 0x885C
#endif
#ifndef GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV
    #define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#endif
#ifndef GL_HILO8_NV
    #define GL_HILO8_NV 0x885E
#endif
#ifndef GL_SIGNED_HILO8_NV
    #define GL_SIGNED_HILO8_NV 0x885F
#endif
#ifndef GL_FORCE_BLUE_TO_ONE_NV
    #define GL_FORCE_BLUE_TO_ONE_NV 0x8860
#endif

// GL_NV_transform_feedback

#ifndef GL_BACK_PRIMARY_COLOR_NV
    #define GL_BACK_PRIMARY_COLOR_NV 0x8C77
#endif
#ifndef GL_BACK_SECONDARY_COLOR_NV
    #define GL_BACK_SECONDARY_COLOR_NV 0x8C78
#endif
#ifndef GL_TEXTURE_COORD_NV
    #define GL_TEXTURE_COORD_NV 0x8C79
#endif
#ifndef GL_CLIP_DISTANCE_NV
    #define GL_CLIP_DISTANCE_NV 0x8C7A
#endif
#ifndef GL_VERTEX_ID_NV
    #define GL_VERTEX_ID_NV 0x8C7B
#endif
#ifndef GL_PRIMITIVE_ID_NV
    #define GL_PRIMITIVE_ID_NV 0x8C7C
#endif
#ifndef GL_GENERIC_ATTRIB_NV
    #define GL_GENERIC_ATTRIB_NV 0x8C7D
#endif
#ifndef GL_TRANSFORM_FEEDBACK_ATTRIBS_NV
    #define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV 0x8C7E
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV 0x8C7F
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV 0x8C80
#endif
#ifndef GL_ACTIVE_VARYINGS_NV
    #define GL_ACTIVE_VARYINGS_NV 0x8C81
#endif
#ifndef GL_ACTIVE_VARYING_MAX_LENGTH_NV
    #define GL_ACTIVE_VARYING_MAX_LENGTH_NV 0x8C82
#endif
#ifndef GL_TRANSFORM_FEEDBACK_VARYINGS_NV
    #define GL_TRANSFORM_FEEDBACK_VARYINGS_NV 0x8C83
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_START_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV 0x8C84
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV 0x8C85
#endif
#ifndef GL_TRANSFORM_FEEDBACK_RECORD_NV
    #define GL_TRANSFORM_FEEDBACK_RECORD_NV 0x8C86
#endif
#ifndef GL_PRIMITIVES_GENERATED_NV
    #define GL_PRIMITIVES_GENERATED_NV 0x8C87
#endif
#ifndef GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV
    #define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV 0x8C88
#endif
#ifndef GL_RASTERIZER_DISCARD_NV
    #define GL_RASTERIZER_DISCARD_NV 0x8C89
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV
    #define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_NV 0x8C8A
#endif
#ifndef GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV
    #define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV 0x8C8B
#endif
#ifndef GL_INTERLEAVED_ATTRIBS_NV
    #define GL_INTERLEAVED_ATTRIBS_NV 0x8C8C
#endif
#ifndef GL_SEPARATE_ATTRIBS_NV
    #define GL_SEPARATE_ATTRIBS_NV 0x8C8D
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_NV 0x8C8E
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV 0x8C8F
#endif

typedef void (APIENTRY * PFNGLACTIVEVARYINGNVPROC)(GLuint program, const GLchar *name);
typedef void (APIENTRY * PFNGLBEGINTRANSFORMFEEDBACKNVPROC)(GLenum primitiveMode);
typedef void (APIENTRY * PFNGLBINDBUFFERBASENVPROC)(GLenum target, GLuint index, GLuint buffer);
typedef void (APIENTRY * PFNGLBINDBUFFEROFFSETNVPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void (APIENTRY * PFNGLBINDBUFFERRANGENVPROC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (APIENTRY * PFNGLENDTRANSFORMFEEDBACKNVPROC)(void);
typedef void (APIENTRY * PFNGLGETACTIVEVARYINGNVPROC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLsizei *size, GLenum *type, GLchar *name);
typedef void (APIENTRY * PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC)(GLuint program, GLuint index, GLint *location);
typedef GLint (APIENTRY * PFNGLGETVARYINGLOCATIONNVPROC)(GLuint program, const GLchar *name);
typedef void (APIENTRY * PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC)(GLuint count, const GLint *attribs, GLenum bufferMode);
typedef void (APIENTRY * PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC)(GLuint program, GLsizei count, const GLint *locations, GLenum bufferMode);

extern PFNGLACTIVEVARYINGNVPROC glActiveVaryingNV;
extern PFNGLBEGINTRANSFORMFEEDBACKNVPROC glBeginTransformFeedbackNV;
extern PFNGLBINDBUFFERBASENVPROC glBindBufferBaseNV;
extern PFNGLBINDBUFFEROFFSETNVPROC glBindBufferOffsetNV;
extern PFNGLBINDBUFFERRANGENVPROC glBindBufferRangeNV;
extern PFNGLENDTRANSFORMFEEDBACKNVPROC glEndTransformFeedbackNV;
extern PFNGLGETACTIVEVARYINGNVPROC glGetActiveVaryingNV;
extern PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glGetTransformFeedbackVaryingNV;
extern PFNGLGETVARYINGLOCATIONNVPROC glGetVaryingLocationNV;
extern PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glTransformFeedbackAttribsNV;
extern PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glTransformFeedbackVaryingsNV;

// GL_NV_transform_feedback2

#ifndef GL_TRANSFORM_FEEDBACK_NV
    #define GL_TRANSFORM_FEEDBACK_NV 0x8E22
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV
    #define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#endif
#ifndef GL_TRANSFORM_FEEDBACK_BINDING_NV
    #define GL_TRANSFORM_FEEDBACK_BINDING_NV 0x8E25
#endif

typedef void (APIENTRY * PFNGLBINDTRANSFORMFEEDBACKNVPROC)(GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLDELETETRANSFORMFEEDBACKSNVPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLDRAWTRANSFORMFEEDBACKNVPROC)(GLenum mode, GLuint id);
typedef void (APIENTRY * PFNGLGENTRANSFORMFEEDBACKSNVPROC)(GLsizei n, GLuint* ids);
typedef GLboolean (APIENTRY * PFNGLISTRANSFORMFEEDBACKNVPROC)(GLuint id);
typedef void (APIENTRY * PFNGLPAUSETRANSFORMFEEDBACKNVPROC)(void);
typedef void (APIENTRY * PFNGLRESUMETRANSFORMFEEDBACKNVPROC)(void);

extern PFNGLBINDTRANSFORMFEEDBACKNVPROC glBindTransformFeedbackNV;
extern PFNGLDELETETRANSFORMFEEDBACKSNVPROC glDeleteTransformFeedbacksNV;
extern PFNGLDRAWTRANSFORMFEEDBACKNVPROC glDrawTransformFeedbackNV;
extern PFNGLGENTRANSFORMFEEDBACKSNVPROC glGenTransformFeedbacksNV;
extern PFNGLISTRANSFORMFEEDBACKNVPROC glIsTransformFeedbackNV;
extern PFNGLPAUSETRANSFORMFEEDBACKNVPROC glPauseTransformFeedbackNV;
extern PFNGLRESUMETRANSFORMFEEDBACKNVPROC glResumeTransformFeedbackNV;

// GL_NV_vdpau_interop

#ifndef GL_SURFACE_STATE_NV
    #define GL_SURFACE_STATE_NV 0x86EB
#endif
#ifndef GL_SURFACE_REGISTERED_NV
    #define GL_SURFACE_REGISTERED_NV 0x86FD
#endif
#ifndef GL_SURFACE_MAPPED_NV
    #define GL_SURFACE_MAPPED_NV 0x8700
#endif
#ifndef GL_WRITE_DISCARD_NV
    #define GL_WRITE_DISCARD_NV 0x88BE
#endif

typedef void (APIENTRY * PFNGLVDPAUFININVPROC)(void);
typedef void (APIENTRY * PFNGLVDPAUGETSURFACEIVNVPROC)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei* length, GLint *values);
typedef void (APIENTRY * PFNGLVDPAUINITNVPROC)(const void* vdpDevice, const GLvoid*getProcAddress);
typedef void (APIENTRY * PFNGLVDPAUISSURFACENVPROC)(GLvdpauSurfaceNV surface);
typedef void (APIENTRY * PFNGLVDPAUMAPSURFACESNVPROC)(GLsizei numSurfaces, const GLvdpauSurfaceNV* surfaces);
typedef GLvdpauSurfaceNV (APIENTRY * PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC)(const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
typedef GLvdpauSurfaceNV (APIENTRY * PFNGLVDPAUREGISTERVIDEOSURFACENVPROC)(const void* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint *textureNames);
typedef void (APIENTRY * PFNGLVDPAUSURFACEACCESSNVPROC)(GLvdpauSurfaceNV surface, GLenum access);
typedef void (APIENTRY * PFNGLVDPAUUNMAPSURFACESNVPROC)(GLsizei numSurface, const GLvdpauSurfaceNV* surfaces);
typedef void (APIENTRY * PFNGLVDPAUUNREGISTERSURFACENVPROC)(GLvdpauSurfaceNV surface);

extern PFNGLVDPAUFININVPROC glVDPAUFiniNV;
extern PFNGLVDPAUGETSURFACEIVNVPROC glVDPAUGetSurfaceivNV;
extern PFNGLVDPAUINITNVPROC glVDPAUInitNV;
extern PFNGLVDPAUISSURFACENVPROC glVDPAUIsSurfaceNV;
extern PFNGLVDPAUMAPSURFACESNVPROC glVDPAUMapSurfacesNV;
extern PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glVDPAURegisterOutputSurfaceNV;
extern PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glVDPAURegisterVideoSurfaceNV;
extern PFNGLVDPAUSURFACEACCESSNVPROC glVDPAUSurfaceAccessNV;
extern PFNGLVDPAUUNMAPSURFACESNVPROC glVDPAUUnmapSurfacesNV;
extern PFNGLVDPAUUNREGISTERSURFACENVPROC glVDPAUUnregisterSurfaceNV;

// GL_NV_vertex_array_range

#ifndef GL_VERTEX_ARRAY_RANGE_NV
    #define GL_VERTEX_ARRAY_RANGE_NV 0x851D
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_LENGTH_NV
    #define GL_VERTEX_ARRAY_RANGE_LENGTH_NV 0x851E
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_VALID_NV
    #define GL_VERTEX_ARRAY_RANGE_VALID_NV 0x851F
#endif
#ifndef GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV
    #define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#endif
#ifndef GL_VERTEX_ARRAY_RANGE_POINTER_NV
    #define GL_VERTEX_ARRAY_RANGE_POINTER_NV 0x8521
#endif

typedef void (APIENTRY * PFNGLFLUSHVERTEXARRAYRANGENVPROC)(void);
typedef void (APIENTRY * PFNGLVERTEXARRAYRANGENVPROC)(GLsizei length, void* pointer);

extern PFNGLFLUSHVERTEXARRAYRANGENVPROC glFlushVertexArrayRangeNV;
extern PFNGLVERTEXARRAYRANGENVPROC glVertexArrayRangeNV;

// GL_NV_vertex_array_range2

#ifndef GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV
    #define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533
#endif

// GL_NV_vertex_attrib_integer_64bit

#ifndef GL_INT64_NV
    #define GL_INT64_NV 0x140E
#endif
#ifndef GL_UNSIGNED_INT64_NV
    #define GL_UNSIGNED_INT64_NV 0x140F
#endif

typedef void (APIENTRY * PFNGLGETVERTEXATTRIBLI64VNVPROC)(GLuint index, GLenum pname, GLint64EXT* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBLUI64VNVPROC)(GLuint index, GLenum pname, GLuint64EXT* params);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1I64NVPROC)(GLuint index, GLint64EXT x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1I64VNVPROC)(GLuint index, const GLint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1UI64NVPROC)(GLuint index, GLuint64EXT x);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL1UI64VNVPROC)(GLuint index, const GLuint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2I64NVPROC)(GLuint index, GLint64EXT x, GLint64EXT y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2I64VNVPROC)(GLuint index, const GLint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2UI64NVPROC)(GLuint index, GLuint64EXT x, GLuint64EXT y);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL2UI64VNVPROC)(GLuint index, const GLuint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3I64NVPROC)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3I64VNVPROC)(GLuint index, const GLint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3UI64NVPROC)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL3UI64VNVPROC)(GLuint index, const GLuint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4I64NVPROC)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4I64VNVPROC)(GLuint index, const GLint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4UI64NVPROC)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (APIENTRY * PFNGLVERTEXATTRIBL4UI64VNVPROC)(GLuint index, const GLuint64EXT* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBLFORMATNVPROC)(GLuint index, GLint size, GLenum type, GLsizei stride);

extern PFNGLGETVERTEXATTRIBLI64VNVPROC glGetVertexAttribLi64vNV;
extern PFNGLGETVERTEXATTRIBLUI64VNVPROC glGetVertexAttribLui64vNV;
extern PFNGLVERTEXATTRIBL1I64NVPROC glVertexAttribL1i64NV;
extern PFNGLVERTEXATTRIBL1I64VNVPROC glVertexAttribL1i64vNV;
extern PFNGLVERTEXATTRIBL1UI64NVPROC glVertexAttribL1ui64NV;
extern PFNGLVERTEXATTRIBL1UI64VNVPROC glVertexAttribL1ui64vNV;
extern PFNGLVERTEXATTRIBL2I64NVPROC glVertexAttribL2i64NV;
extern PFNGLVERTEXATTRIBL2I64VNVPROC glVertexAttribL2i64vNV;
extern PFNGLVERTEXATTRIBL2UI64NVPROC glVertexAttribL2ui64NV;
extern PFNGLVERTEXATTRIBL2UI64VNVPROC glVertexAttribL2ui64vNV;
extern PFNGLVERTEXATTRIBL3I64NVPROC glVertexAttribL3i64NV;
extern PFNGLVERTEXATTRIBL3I64VNVPROC glVertexAttribL3i64vNV;
extern PFNGLVERTEXATTRIBL3UI64NVPROC glVertexAttribL3ui64NV;
extern PFNGLVERTEXATTRIBL3UI64VNVPROC glVertexAttribL3ui64vNV;
extern PFNGLVERTEXATTRIBL4I64NVPROC glVertexAttribL4i64NV;
extern PFNGLVERTEXATTRIBL4I64VNVPROC glVertexAttribL4i64vNV;
extern PFNGLVERTEXATTRIBL4UI64NVPROC glVertexAttribL4ui64NV;
extern PFNGLVERTEXATTRIBL4UI64VNVPROC glVertexAttribL4ui64vNV;
extern PFNGLVERTEXATTRIBLFORMATNVPROC glVertexAttribLFormatNV;

// GL_NV_vertex_buffer_unified_memory

#ifndef GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV
    #define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#endif
#ifndef GL_ELEMENT_ARRAY_UNIFIED_NV
    #define GL_ELEMENT_ARRAY_UNIFIED_NV 0x8F1F
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV
    #define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#endif
#ifndef GL_VERTEX_ARRAY_ADDRESS_NV
    #define GL_VERTEX_ARRAY_ADDRESS_NV 0x8F21
#endif
#ifndef GL_NORMAL_ARRAY_ADDRESS_NV
    #define GL_NORMAL_ARRAY_ADDRESS_NV 0x8F22
#endif
#ifndef GL_COLOR_ARRAY_ADDRESS_NV
    #define GL_COLOR_ARRAY_ADDRESS_NV 0x8F23
#endif
#ifndef GL_INDEX_ARRAY_ADDRESS_NV
    #define GL_INDEX_ARRAY_ADDRESS_NV 0x8F24
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_ADDRESS_NV
    #define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#endif
#ifndef GL_EDGE_FLAG_ARRAY_ADDRESS_NV
    #define GL_EDGE_FLAG_ARRAY_ADDRESS_NV 0x8F26
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV
    #define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#endif
#ifndef GL_FOG_COORD_ARRAY_ADDRESS_NV
    #define GL_FOG_COORD_ARRAY_ADDRESS_NV 0x8F28
#endif
#ifndef GL_ELEMENT_ARRAY_ADDRESS_NV
    #define GL_ELEMENT_ARRAY_ADDRESS_NV 0x8F29
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV
    #define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV 0x8F2A
#endif
#ifndef GL_VERTEX_ARRAY_LENGTH_NV
    #define GL_VERTEX_ARRAY_LENGTH_NV 0x8F2B
#endif
#ifndef GL_NORMAL_ARRAY_LENGTH_NV
    #define GL_NORMAL_ARRAY_LENGTH_NV 0x8F2C
#endif
#ifndef GL_COLOR_ARRAY_LENGTH_NV
    #define GL_COLOR_ARRAY_LENGTH_NV 0x8F2D
#endif
#ifndef GL_INDEX_ARRAY_LENGTH_NV
    #define GL_INDEX_ARRAY_LENGTH_NV 0x8F2E
#endif
#ifndef GL_TEXTURE_COORD_ARRAY_LENGTH_NV
    #define GL_TEXTURE_COORD_ARRAY_LENGTH_NV 0x8F2F
#endif
#ifndef GL_EDGE_FLAG_ARRAY_LENGTH_NV
    #define GL_EDGE_FLAG_ARRAY_LENGTH_NV 0x8F30
#endif
#ifndef GL_SECONDARY_COLOR_ARRAY_LENGTH_NV
    #define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#endif
#ifndef GL_FOG_COORD_ARRAY_LENGTH_NV
    #define GL_FOG_COORD_ARRAY_LENGTH_NV 0x8F32
#endif
#ifndef GL_ELEMENT_ARRAY_LENGTH_NV
    #define GL_ELEMENT_ARRAY_LENGTH_NV 0x8F33
#endif
#ifndef GL_DRAW_INDIRECT_UNIFIED_NV
    #define GL_DRAW_INDIRECT_UNIFIED_NV 0x8F40
#endif
#ifndef GL_DRAW_INDIRECT_ADDRESS_NV
    #define GL_DRAW_INDIRECT_ADDRESS_NV 0x8F41
#endif
#ifndef GL_DRAW_INDIRECT_LENGTH_NV
    #define GL_DRAW_INDIRECT_LENGTH_NV 0x8F42
#endif

typedef void (APIENTRY * PFNGLBUFFERADDRESSRANGENVPROC)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
typedef void (APIENTRY * PFNGLCOLORFORMATNVPROC)(GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLEDGEFLAGFORMATNVPROC)(GLsizei stride);
typedef void (APIENTRY * PFNGLFOGCOORDFORMATNVPROC)(GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLGETINTEGERUI64I_VNVPROC)(GLenum value, GLuint index, GLuint64EXT result[]);
typedef void (APIENTRY * PFNGLINDEXFORMATNVPROC)(GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLNORMALFORMATNVPROC)(GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLSECONDARYCOLORFORMATNVPROC)(GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLTEXCOORDFORMATNVPROC)(GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLVERTEXATTRIBFORMATNVPROC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
typedef void (APIENTRY * PFNGLVERTEXATTRIBIFORMATNVPROC)(GLuint index, GLint size, GLenum type, GLsizei stride);
typedef void (APIENTRY * PFNGLVERTEXFORMATNVPROC)(GLint size, GLenum type, GLsizei stride);

extern PFNGLBUFFERADDRESSRANGENVPROC glBufferAddressRangeNV;
extern PFNGLCOLORFORMATNVPROC glColorFormatNV;
extern PFNGLEDGEFLAGFORMATNVPROC glEdgeFlagFormatNV;
extern PFNGLFOGCOORDFORMATNVPROC glFogCoordFormatNV;
extern PFNGLGETINTEGERUI64I_VNVPROC glGetIntegerui64i_vNV;
extern PFNGLINDEXFORMATNVPROC glIndexFormatNV;
extern PFNGLNORMALFORMATNVPROC glNormalFormatNV;
extern PFNGLSECONDARYCOLORFORMATNVPROC glSecondaryColorFormatNV;
extern PFNGLTEXCOORDFORMATNVPROC glTexCoordFormatNV;
extern PFNGLVERTEXATTRIBFORMATNVPROC glVertexAttribFormatNV;
extern PFNGLVERTEXATTRIBIFORMATNVPROC glVertexAttribIFormatNV;
extern PFNGLVERTEXFORMATNVPROC glVertexFormatNV;

// GL_NV_vertex_program

#ifndef GL_VERTEX_PROGRAM_NV
    #define GL_VERTEX_PROGRAM_NV 0x8620
#endif
#ifndef GL_VERTEX_STATE_PROGRAM_NV
    #define GL_VERTEX_STATE_PROGRAM_NV 0x8621
#endif
#ifndef GL_ATTRIB_ARRAY_SIZE_NV
    #define GL_ATTRIB_ARRAY_SIZE_NV 0x8623
#endif
#ifndef GL_ATTRIB_ARRAY_STRIDE_NV
    #define GL_ATTRIB_ARRAY_STRIDE_NV 0x8624
#endif
#ifndef GL_ATTRIB_ARRAY_TYPE_NV
    #define GL_ATTRIB_ARRAY_TYPE_NV 0x8625
#endif
#ifndef GL_CURRENT_ATTRIB_NV
    #define GL_CURRENT_ATTRIB_NV 0x8626
#endif
#ifndef GL_PROGRAM_LENGTH_NV
    #define GL_PROGRAM_LENGTH_NV 0x8627
#endif
#ifndef GL_PROGRAM_STRING_NV
    #define GL_PROGRAM_STRING_NV 0x8628
#endif
#ifndef GL_MODELVIEW_PROJECTION_NV
    #define GL_MODELVIEW_PROJECTION_NV 0x8629
#endif
#ifndef GL_IDENTITY_NV
    #define GL_IDENTITY_NV 0x862A
#endif
#ifndef GL_INVERSE_NV
    #define GL_INVERSE_NV 0x862B
#endif
#ifndef GL_TRANSPOSE_NV
    #define GL_TRANSPOSE_NV 0x862C
#endif
#ifndef GL_INVERSE_TRANSPOSE_NV
    #define GL_INVERSE_TRANSPOSE_NV 0x862D
#endif
#ifndef GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV
    #define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#endif
#ifndef GL_MAX_TRACK_MATRICES_NV
    #define GL_MAX_TRACK_MATRICES_NV 0x862F
#endif
#ifndef GL_MATRIX0_NV
    #define GL_MATRIX0_NV 0x8630
#endif
#ifndef GL_MATRIX1_NV
    #define GL_MATRIX1_NV 0x8631
#endif
#ifndef GL_MATRIX2_NV
    #define GL_MATRIX2_NV 0x8632
#endif
#ifndef GL_MATRIX3_NV
    #define GL_MATRIX3_NV 0x8633
#endif
#ifndef GL_MATRIX4_NV
    #define GL_MATRIX4_NV 0x8634
#endif
#ifndef GL_MATRIX5_NV
    #define GL_MATRIX5_NV 0x8635
#endif
#ifndef GL_MATRIX6_NV
    #define GL_MATRIX6_NV 0x8636
#endif
#ifndef GL_MATRIX7_NV
    #define GL_MATRIX7_NV 0x8637
#endif
#ifndef GL_CURRENT_MATRIX_STACK_DEPTH_NV
    #define GL_CURRENT_MATRIX_STACK_DEPTH_NV 0x8640
#endif
#ifndef GL_CURRENT_MATRIX_NV
    #define GL_CURRENT_MATRIX_NV 0x8641
#endif
#ifndef GL_VERTEX_PROGRAM_POINT_SIZE_NV
    #define GL_VERTEX_PROGRAM_POINT_SIZE_NV 0x8642
#endif
#ifndef GL_VERTEX_PROGRAM_TWO_SIDE_NV
    #define GL_VERTEX_PROGRAM_TWO_SIDE_NV 0x8643
#endif
#ifndef GL_PROGRAM_PARAMETER_NV
    #define GL_PROGRAM_PARAMETER_NV 0x8644
#endif
#ifndef GL_ATTRIB_ARRAY_POINTER_NV
    #define GL_ATTRIB_ARRAY_POINTER_NV 0x8645
#endif
#ifndef GL_PROGRAM_TARGET_NV
    #define GL_PROGRAM_TARGET_NV 0x8646
#endif
#ifndef GL_PROGRAM_RESIDENT_NV
    #define GL_PROGRAM_RESIDENT_NV 0x8647
#endif
#ifndef GL_TRACK_MATRIX_NV
    #define GL_TRACK_MATRIX_NV 0x8648
#endif
#ifndef GL_TRACK_MATRIX_TRANSFORM_NV
    #define GL_TRACK_MATRIX_TRANSFORM_NV 0x8649
#endif
#ifndef GL_VERTEX_PROGRAM_BINDING_NV
    #define GL_VERTEX_PROGRAM_BINDING_NV 0x864A
#endif
#ifndef GL_PROGRAM_ERROR_POSITION_NV
    #define GL_PROGRAM_ERROR_POSITION_NV 0x864B
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY0_NV
    #define GL_VERTEX_ATTRIB_ARRAY0_NV 0x8650
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY1_NV
    #define GL_VERTEX_ATTRIB_ARRAY1_NV 0x8651
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY2_NV
    #define GL_VERTEX_ATTRIB_ARRAY2_NV 0x8652
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY3_NV
    #define GL_VERTEX_ATTRIB_ARRAY3_NV 0x8653
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY4_NV
    #define GL_VERTEX_ATTRIB_ARRAY4_NV 0x8654
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY5_NV
    #define GL_VERTEX_ATTRIB_ARRAY5_NV 0x8655
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY6_NV
    #define GL_VERTEX_ATTRIB_ARRAY6_NV 0x8656
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY7_NV
    #define GL_VERTEX_ATTRIB_ARRAY7_NV 0x8657
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY8_NV
    #define GL_VERTEX_ATTRIB_ARRAY8_NV 0x8658
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY9_NV
    #define GL_VERTEX_ATTRIB_ARRAY9_NV 0x8659
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY10_NV
    #define GL_VERTEX_ATTRIB_ARRAY10_NV 0x865A
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY11_NV
    #define GL_VERTEX_ATTRIB_ARRAY11_NV 0x865B
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY12_NV
    #define GL_VERTEX_ATTRIB_ARRAY12_NV 0x865C
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY13_NV
    #define GL_VERTEX_ATTRIB_ARRAY13_NV 0x865D
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY14_NV
    #define GL_VERTEX_ATTRIB_ARRAY14_NV 0x865E
#endif
#ifndef GL_VERTEX_ATTRIB_ARRAY15_NV
    #define GL_VERTEX_ATTRIB_ARRAY15_NV 0x865F
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB0_4_NV
    #define GL_MAP1_VERTEX_ATTRIB0_4_NV 0x8660
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB1_4_NV
    #define GL_MAP1_VERTEX_ATTRIB1_4_NV 0x8661
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB2_4_NV
    #define GL_MAP1_VERTEX_ATTRIB2_4_NV 0x8662
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB3_4_NV
    #define GL_MAP1_VERTEX_ATTRIB3_4_NV 0x8663
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB4_4_NV
    #define GL_MAP1_VERTEX_ATTRIB4_4_NV 0x8664
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB5_4_NV
    #define GL_MAP1_VERTEX_ATTRIB5_4_NV 0x8665
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB6_4_NV
    #define GL_MAP1_VERTEX_ATTRIB6_4_NV 0x8666
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB7_4_NV
    #define GL_MAP1_VERTEX_ATTRIB7_4_NV 0x8667
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB8_4_NV
    #define GL_MAP1_VERTEX_ATTRIB8_4_NV 0x8668
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB9_4_NV
    #define GL_MAP1_VERTEX_ATTRIB9_4_NV 0x8669
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB10_4_NV
    #define GL_MAP1_VERTEX_ATTRIB10_4_NV 0x866A
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB11_4_NV
    #define GL_MAP1_VERTEX_ATTRIB11_4_NV 0x866B
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB12_4_NV
    #define GL_MAP1_VERTEX_ATTRIB12_4_NV 0x866C
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB13_4_NV
    #define GL_MAP1_VERTEX_ATTRIB13_4_NV 0x866D
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB14_4_NV
    #define GL_MAP1_VERTEX_ATTRIB14_4_NV 0x866E
#endif
#ifndef GL_MAP1_VERTEX_ATTRIB15_4_NV
    #define GL_MAP1_VERTEX_ATTRIB15_4_NV 0x866F
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB0_4_NV
    #define GL_MAP2_VERTEX_ATTRIB0_4_NV 0x8670
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB1_4_NV
    #define GL_MAP2_VERTEX_ATTRIB1_4_NV 0x8671
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB2_4_NV
    #define GL_MAP2_VERTEX_ATTRIB2_4_NV 0x8672
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB3_4_NV
    #define GL_MAP2_VERTEX_ATTRIB3_4_NV 0x8673
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB4_4_NV
    #define GL_MAP2_VERTEX_ATTRIB4_4_NV 0x8674
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB5_4_NV
    #define GL_MAP2_VERTEX_ATTRIB5_4_NV 0x8675
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB6_4_NV
    #define GL_MAP2_VERTEX_ATTRIB6_4_NV 0x8676
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB7_4_NV
    #define GL_MAP2_VERTEX_ATTRIB7_4_NV 0x8677
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB8_4_NV
    #define GL_MAP2_VERTEX_ATTRIB8_4_NV 0x8678
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB9_4_NV
    #define GL_MAP2_VERTEX_ATTRIB9_4_NV 0x8679
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB10_4_NV
    #define GL_MAP2_VERTEX_ATTRIB10_4_NV 0x867A
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB11_4_NV
    #define GL_MAP2_VERTEX_ATTRIB11_4_NV 0x867B
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB12_4_NV
    #define GL_MAP2_VERTEX_ATTRIB12_4_NV 0x867C
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB13_4_NV
    #define GL_MAP2_VERTEX_ATTRIB13_4_NV 0x867D
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB14_4_NV
    #define GL_MAP2_VERTEX_ATTRIB14_4_NV 0x867E
#endif
#ifndef GL_MAP2_VERTEX_ATTRIB15_4_NV
    #define GL_MAP2_VERTEX_ATTRIB15_4_NV 0x867F
#endif

typedef GLboolean (APIENTRY * PFNGLAREPROGRAMSRESIDENTNVPROC)(GLsizei n, const GLuint* ids, GLboolean *residences);
typedef void (APIENTRY * PFNGLBINDPROGRAMNVPROC)(GLenum target, GLuint id);
typedef void (APIENTRY * PFNGLDELETEPROGRAMSNVPROC)(GLsizei n, const GLuint* ids);
typedef void (APIENTRY * PFNGLEXECUTEPROGRAMNVPROC)(GLenum target, GLuint id, const GLfloat* params);
typedef void (APIENTRY * PFNGLGENPROGRAMSNVPROC)(GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLGETPROGRAMPARAMETERDVNVPROC)(GLenum target, GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLGETPROGRAMPARAMETERFVNVPROC)(GLenum target, GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETPROGRAMSTRINGNVPROC)(GLuint id, GLenum pname, GLubyte* program);
typedef void (APIENTRY * PFNGLGETPROGRAMIVNVPROC)(GLuint id, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETTRACKMATRIXIVNVPROC)(GLenum target, GLuint address, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBPOINTERVNVPROC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBDVNVPROC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBFVNVPROC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETVERTEXATTRIBIVNVPROC)(GLuint index, GLenum pname, GLint* params);
typedef GLboolean (APIENTRY * PFNGLISPROGRAMNVPROC)(GLuint id);
typedef void (APIENTRY * PFNGLLOADPROGRAMNVPROC)(GLenum target, GLuint id, GLsizei len, const GLubyte* program);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETER4DNVPROC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETER4DVNVPROC)(GLenum target, GLuint index, const GLdouble* params);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETER4FNVPROC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETER4FVNVPROC)(GLenum target, GLuint index, const GLfloat* params);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETERS4DVNVPROC)(GLenum target, GLuint index, GLsizei num, const GLdouble* params);
typedef void (APIENTRY * PFNGLPROGRAMPARAMETERS4FVNVPROC)(GLenum target, GLuint index, GLsizei num, const GLfloat* params);
typedef void (APIENTRY * PFNGLREQUESTRESIDENTPROGRAMSNVPROC)(GLsizei n, GLuint* ids);
typedef void (APIENTRY * PFNGLTRACKMATRIXNVPROC)(GLenum target, GLuint address, GLenum matrix, GLenum transform);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DNVPROC)(GLuint index, GLdouble x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1DVNVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FNVPROC)(GLuint index, GLfloat x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1FVNVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SNVPROC)(GLuint index, GLshort x);
typedef void (APIENTRY * PFNGLVERTEXATTRIB1SVNVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DNVPROC)(GLuint index, GLdouble x, GLdouble y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2DVNVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FNVPROC)(GLuint index, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2FVNVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SNVPROC)(GLuint index, GLshort x, GLshort y);
typedef void (APIENTRY * PFNGLVERTEXATTRIB2SVNVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DNVPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3DVNVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FNVPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3FVNVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SNVPROC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (APIENTRY * PFNGLVERTEXATTRIB3SVNVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DNVPROC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4DVNVPROC)(GLuint index, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FNVPROC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4FVNVPROC)(GLuint index, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SNVPROC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4SVNVPROC)(GLuint index, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UBNVPROC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (APIENTRY * PFNGLVERTEXATTRIB4UBVNVPROC)(GLuint index, const GLubyte* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBPOINTERNVPROC)(GLuint index, GLint size, GLenum type, GLsizei stride, const void* pointer);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS1DVNVPROC)(GLuint index, GLsizei n, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS1FVNVPROC)(GLuint index, GLsizei n, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS1SVNVPROC)(GLuint index, GLsizei n, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS2DVNVPROC)(GLuint index, GLsizei n, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS2FVNVPROC)(GLuint index, GLsizei n, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS2SVNVPROC)(GLuint index, GLsizei n, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS3DVNVPROC)(GLuint index, GLsizei n, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS3FVNVPROC)(GLuint index, GLsizei n, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS3SVNVPROC)(GLuint index, GLsizei n, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS4DVNVPROC)(GLuint index, GLsizei n, const GLdouble* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS4FVNVPROC)(GLuint index, GLsizei n, const GLfloat* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS4SVNVPROC)(GLuint index, GLsizei n, const GLshort* v);
typedef void (APIENTRY * PFNGLVERTEXATTRIBS4UBVNVPROC)(GLuint index, GLsizei n, const GLubyte* v);

extern PFNGLAREPROGRAMSRESIDENTNVPROC glAreProgramsResidentNV;
extern PFNGLBINDPROGRAMNVPROC glBindProgramNV;
extern PFNGLDELETEPROGRAMSNVPROC glDeleteProgramsNV;
extern PFNGLEXECUTEPROGRAMNVPROC glExecuteProgramNV;
extern PFNGLGENPROGRAMSNVPROC glGenProgramsNV;
extern PFNGLGETPROGRAMPARAMETERDVNVPROC glGetProgramParameterdvNV;
extern PFNGLGETPROGRAMPARAMETERFVNVPROC glGetProgramParameterfvNV;
extern PFNGLGETPROGRAMSTRINGNVPROC glGetProgramStringNV;
extern PFNGLGETPROGRAMIVNVPROC glGetProgramivNV;
extern PFNGLGETTRACKMATRIXIVNVPROC glGetTrackMatrixivNV;
extern PFNGLGETVERTEXATTRIBPOINTERVNVPROC glGetVertexAttribPointervNV;
extern PFNGLGETVERTEXATTRIBDVNVPROC glGetVertexAttribdvNV;
extern PFNGLGETVERTEXATTRIBFVNVPROC glGetVertexAttribfvNV;
extern PFNGLGETVERTEXATTRIBIVNVPROC glGetVertexAttribivNV;
extern PFNGLISPROGRAMNVPROC glIsProgramNV;
extern PFNGLLOADPROGRAMNVPROC glLoadProgramNV;
extern PFNGLPROGRAMPARAMETER4DNVPROC glProgramParameter4dNV;
extern PFNGLPROGRAMPARAMETER4DVNVPROC glProgramParameter4dvNV;
extern PFNGLPROGRAMPARAMETER4FNVPROC glProgramParameter4fNV;
extern PFNGLPROGRAMPARAMETER4FVNVPROC glProgramParameter4fvNV;
extern PFNGLPROGRAMPARAMETERS4DVNVPROC glProgramParameters4dvNV;
extern PFNGLPROGRAMPARAMETERS4FVNVPROC glProgramParameters4fvNV;
extern PFNGLREQUESTRESIDENTPROGRAMSNVPROC glRequestResidentProgramsNV;
extern PFNGLTRACKMATRIXNVPROC glTrackMatrixNV;
extern PFNGLVERTEXATTRIB1DNVPROC glVertexAttrib1dNV;
extern PFNGLVERTEXATTRIB1DVNVPROC glVertexAttrib1dvNV;
extern PFNGLVERTEXATTRIB1FNVPROC glVertexAttrib1fNV;
extern PFNGLVERTEXATTRIB1FVNVPROC glVertexAttrib1fvNV;
extern PFNGLVERTEXATTRIB1SNVPROC glVertexAttrib1sNV;
extern PFNGLVERTEXATTRIB1SVNVPROC glVertexAttrib1svNV;
extern PFNGLVERTEXATTRIB2DNVPROC glVertexAttrib2dNV;
extern PFNGLVERTEXATTRIB2DVNVPROC glVertexAttrib2dvNV;
extern PFNGLVERTEXATTRIB2FNVPROC glVertexAttrib2fNV;
extern PFNGLVERTEXATTRIB2FVNVPROC glVertexAttrib2fvNV;
extern PFNGLVERTEXATTRIB2SNVPROC glVertexAttrib2sNV;
extern PFNGLVERTEXATTRIB2SVNVPROC glVertexAttrib2svNV;
extern PFNGLVERTEXATTRIB3DNVPROC glVertexAttrib3dNV;
extern PFNGLVERTEXATTRIB3DVNVPROC glVertexAttrib3dvNV;
extern PFNGLVERTEXATTRIB3FNVPROC glVertexAttrib3fNV;
extern PFNGLVERTEXATTRIB3FVNVPROC glVertexAttrib3fvNV;
extern PFNGLVERTEXATTRIB3SNVPROC glVertexAttrib3sNV;
extern PFNGLVERTEXATTRIB3SVNVPROC glVertexAttrib3svNV;
extern PFNGLVERTEXATTRIB4DNVPROC glVertexAttrib4dNV;
extern PFNGLVERTEXATTRIB4DVNVPROC glVertexAttrib4dvNV;
extern PFNGLVERTEXATTRIB4FNVPROC glVertexAttrib4fNV;
extern PFNGLVERTEXATTRIB4FVNVPROC glVertexAttrib4fvNV;
extern PFNGLVERTEXATTRIB4SNVPROC glVertexAttrib4sNV;
extern PFNGLVERTEXATTRIB4SVNVPROC glVertexAttrib4svNV;
extern PFNGLVERTEXATTRIB4UBNVPROC glVertexAttrib4ubNV;
extern PFNGLVERTEXATTRIB4UBVNVPROC glVertexAttrib4ubvNV;
extern PFNGLVERTEXATTRIBPOINTERNVPROC glVertexAttribPointerNV;
extern PFNGLVERTEXATTRIBS1DVNVPROC glVertexAttribs1dvNV;
extern PFNGLVERTEXATTRIBS1FVNVPROC glVertexAttribs1fvNV;
extern PFNGLVERTEXATTRIBS1SVNVPROC glVertexAttribs1svNV;
extern PFNGLVERTEXATTRIBS2DVNVPROC glVertexAttribs2dvNV;
extern PFNGLVERTEXATTRIBS2FVNVPROC glVertexAttribs2fvNV;
extern PFNGLVERTEXATTRIBS2SVNVPROC glVertexAttribs2svNV;
extern PFNGLVERTEXATTRIBS3DVNVPROC glVertexAttribs3dvNV;
extern PFNGLVERTEXATTRIBS3FVNVPROC glVertexAttribs3fvNV;
extern PFNGLVERTEXATTRIBS3SVNVPROC glVertexAttribs3svNV;
extern PFNGLVERTEXATTRIBS4DVNVPROC glVertexAttribs4dvNV;
extern PFNGLVERTEXATTRIBS4FVNVPROC glVertexAttribs4fvNV;
extern PFNGLVERTEXATTRIBS4SVNVPROC glVertexAttribs4svNV;
extern PFNGLVERTEXATTRIBS4UBVNVPROC glVertexAttribs4ubvNV;

// GL_NV_vertex_program2_option

#ifndef GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV
    #define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#endif
#ifndef GL_MAX_PROGRAM_CALL_DEPTH_NV
    #define GL_MAX_PROGRAM_CALL_DEPTH_NV 0x88F5
#endif

// GL_NV_vertex_program3

#ifndef MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB
    #define MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#endif

// GL_NV_vertex_program4

#ifndef GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV
    #define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV 0x88FD
#endif

// GL_OES_byte_coordinates

#ifndef GL_BYTE
    #define GL_BYTE 0x1400
#endif

// GL_OES_compressed_paletted_texture

#ifndef GL_PALETTE4_RGB8_OES
    #define GL_PALETTE4_RGB8_OES 0x8B90
#endif
#ifndef GL_PALETTE4_RGBA8_OES
    #define GL_PALETTE4_RGBA8_OES 0x8B91
#endif
#ifndef GL_PALETTE4_R5_G6_B5_OES
    #define GL_PALETTE4_R5_G6_B5_OES 0x8B92
#endif
#ifndef GL_PALETTE4_RGBA4_OES
    #define GL_PALETTE4_RGBA4_OES 0x8B93
#endif
#ifndef GL_PALETTE4_RGB5_A1_OES
    #define GL_PALETTE4_RGB5_A1_OES 0x8B94
#endif
#ifndef GL_PALETTE8_RGB8_OES
    #define GL_PALETTE8_RGB8_OES 0x8B95
#endif
#ifndef GL_PALETTE8_RGBA8_OES
    #define GL_PALETTE8_RGBA8_OES 0x8B96
#endif
#ifndef GL_PALETTE8_R5_G6_B5_OES
    #define GL_PALETTE8_R5_G6_B5_OES 0x8B97
#endif
#ifndef GL_PALETTE8_RGBA4_OES
    #define GL_PALETTE8_RGBA4_OES 0x8B98
#endif
#ifndef GL_PALETTE8_RGB5_A1_OES
    #define GL_PALETTE8_RGB5_A1_OES 0x8B99
#endif

// GL_OES_read_format

#ifndef GL_IMPLEMENTATION_COLOR_READ_TYPE_OES
    #define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#endif
#ifndef GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES
    #define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B
#endif

// GL_OES_single_precision


typedef void (APIENTRY * PFNGLCLEARDEPTHFOESPROC)(GLclampd depth);
typedef void (APIENTRY * PFNGLCLIPPLANEFOESPROC)(GLenum plane, const GLfloat* equation);
typedef void (APIENTRY * PFNGLDEPTHRANGEFOESPROC)(GLclampf n, GLclampf f);
typedef void (APIENTRY * PFNGLFRUSTUMFOESPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (APIENTRY * PFNGLGETCLIPPLANEFOESPROC)(GLenum plane, GLfloat* equation);
typedef void (APIENTRY * PFNGLORTHOFOESPROC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);

extern PFNGLCLEARDEPTHFOESPROC glClearDepthfOES;
extern PFNGLCLIPPLANEFOESPROC glClipPlanefOES;
extern PFNGLDEPTHRANGEFOESPROC glDepthRangefOES;
extern PFNGLFRUSTUMFOESPROC glFrustumfOES;
extern PFNGLGETCLIPPLANEFOESPROC glGetClipPlanefOES;
extern PFNGLORTHOFOESPROC glOrthofOES;

// GL_OML_interlace

#ifndef GL_INTERLACE_OML
    #define GL_INTERLACE_OML 0x8980
#endif
#ifndef GL_INTERLACE_READ_OML
    #define GL_INTERLACE_READ_OML 0x8981
#endif

// GL_OML_resample

#ifndef GL_PACK_RESAMPLE_OML
    #define GL_PACK_RESAMPLE_OML 0x8984
#endif
#ifndef GL_UNPACK_RESAMPLE_OML
    #define GL_UNPACK_RESAMPLE_OML 0x8985
#endif
#ifndef GL_RESAMPLE_REPLICATE_OML
    #define GL_RESAMPLE_REPLICATE_OML 0x8986
#endif
#ifndef GL_RESAMPLE_ZERO_FILL_OML
    #define GL_RESAMPLE_ZERO_FILL_OML 0x8987
#endif
#ifndef GL_RESAMPLE_AVERAGE_OML
    #define GL_RESAMPLE_AVERAGE_OML 0x8988
#endif
#ifndef GL_RESAMPLE_DECIMATE_OML
    #define GL_RESAMPLE_DECIMATE_OML 0x8989
#endif

// GL_OML_subsample

#ifndef GL_FORMAT_SUBSAMPLE_24_24_OML
    #define GL_FORMAT_SUBSAMPLE_24_24_OML 0x8982
#endif
#ifndef GL_FORMAT_SUBSAMPLE_244_244_OML
    #define GL_FORMAT_SUBSAMPLE_244_244_OML 0x8983
#endif

// GL_REND_screen_coordinates

#ifndef GL_SCREEN_COORDINATES_REND
    #define GL_SCREEN_COORDINATES_REND 0x8490
#endif
#ifndef GL_INVERTED_SCREEN_W_REND
    #define GL_INVERTED_SCREEN_W_REND 0x8491
#endif

// GL_S3_s3tc

#ifndef GL_RGB_S3TC
    #define GL_RGB_S3TC 0x83A0
#endif
#ifndef GL_RGB4_S3TC
    #define GL_RGB4_S3TC 0x83A1
#endif
#ifndef GL_RGBA_S3TC
    #define GL_RGBA_S3TC 0x83A2
#endif
#ifndef GL_RGBA4_S3TC
    #define GL_RGBA4_S3TC 0x83A3
#endif
#ifndef GL_RGBA_DXT5_S3TC
    #define GL_RGBA_DXT5_S3TC 0x83A4
#endif
#ifndef GL_RGBA4_DXT5_S3TC
    #define GL_RGBA4_DXT5_S3TC 0x83A5
#endif

// GL_SGIS_color_range

#ifndef GL_EXTENDED_RANGE_SGIS
    #define GL_EXTENDED_RANGE_SGIS 0x85A5
#endif
#ifndef GL_MIN_RED_SGIS
    #define GL_MIN_RED_SGIS 0x85A6
#endif
#ifndef GL_MAX_RED_SGIS
    #define GL_MAX_RED_SGIS 0x85A7
#endif
#ifndef GL_MIN_GREEN_SGIS
    #define GL_MIN_GREEN_SGIS 0x85A8
#endif
#ifndef GL_MAX_GREEN_SGIS
    #define GL_MAX_GREEN_SGIS 0x85A9
#endif
#ifndef GL_MIN_BLUE_SGIS
    #define GL_MIN_BLUE_SGIS 0x85AA
#endif
#ifndef GL_MAX_BLUE_SGIS
    #define GL_MAX_BLUE_SGIS 0x85AB
#endif
#ifndef GL_MIN_ALPHA_SGIS
    #define GL_MIN_ALPHA_SGIS 0x85AC
#endif
#ifndef GL_MAX_ALPHA_SGIS
    #define GL_MAX_ALPHA_SGIS 0x85AD
#endif

// GL_SGIS_detail_texture


typedef void (APIENTRY * PFNGLDETAILTEXFUNCSGISPROC)(GLenum target, GLsizei n, const GLfloat* points);
typedef void (APIENTRY * PFNGLGETDETAILTEXFUNCSGISPROC)(GLenum target, GLfloat* points);

extern PFNGLDETAILTEXFUNCSGISPROC glDetailTexFuncSGIS;
extern PFNGLGETDETAILTEXFUNCSGISPROC glGetDetailTexFuncSGIS;

// GL_SGIS_fog_function


typedef void (APIENTRY * PFNGLFOGFUNCSGISPROC)(GLsizei n, const GLfloat* points);
typedef void (APIENTRY * PFNGLGETFOGFUNCSGISPROC)(GLfloat* points);

extern PFNGLFOGFUNCSGISPROC glFogFuncSGIS;
extern PFNGLGETFOGFUNCSGISPROC glGetFogFuncSGIS;

// GL_SGIS_generate_mipmap

#ifndef GL_GENERATE_MIPMAP_SGIS
    #define GL_GENERATE_MIPMAP_SGIS 0x8191
#endif
#ifndef GL_GENERATE_MIPMAP_HINT_SGIS
    #define GL_GENERATE_MIPMAP_HINT_SGIS 0x8192
#endif

// GL_SGIS_multisample

#ifndef GL_MULTISAMPLE_SGIS
    #define GL_MULTISAMPLE_SGIS 0x809D
#endif
#ifndef GL_SAMPLE_ALPHA_TO_MASK_SGIS
    #define GL_SAMPLE_ALPHA_TO_MASK_SGIS 0x809E
#endif
#ifndef GL_SAMPLE_ALPHA_TO_ONE_SGIS
    #define GL_SAMPLE_ALPHA_TO_ONE_SGIS 0x809F
#endif
#ifndef GL_SAMPLE_MASK_SGIS
    #define GL_SAMPLE_MASK_SGIS 0x80A0
#endif
#ifndef GL_1PASS_SGIS
    #define GL_1PASS_SGIS 0x80A1
#endif
#ifndef GL_2PASS_0_SGIS
    #define GL_2PASS_0_SGIS 0x80A2
#endif
#ifndef GL_2PASS_1_SGIS
    #define GL_2PASS_1_SGIS 0x80A3
#endif
#ifndef GL_4PASS_0_SGIS
    #define GL_4PASS_0_SGIS 0x80A4
#endif
#ifndef GL_4PASS_1_SGIS
    #define GL_4PASS_1_SGIS 0x80A5
#endif
#ifndef GL_4PASS_2_SGIS
    #define GL_4PASS_2_SGIS 0x80A6
#endif
#ifndef GL_4PASS_3_SGIS
    #define GL_4PASS_3_SGIS 0x80A7
#endif
#ifndef GL_SAMPLE_BUFFERS_SGIS
    #define GL_SAMPLE_BUFFERS_SGIS 0x80A8
#endif
#ifndef GL_SAMPLES_SGIS
    #define GL_SAMPLES_SGIS 0x80A9
#endif
#ifndef GL_SAMPLE_MASK_VALUE_SGIS
    #define GL_SAMPLE_MASK_VALUE_SGIS 0x80AA
#endif
#ifndef GL_SAMPLE_MASK_INVERT_SGIS
    #define GL_SAMPLE_MASK_INVERT_SGIS 0x80AB
#endif
#ifndef GL_SAMPLE_PATTERN_SGIS
    #define GL_SAMPLE_PATTERN_SGIS 0x80AC
#endif

typedef void (APIENTRY * PFNGLSAMPLEMASKSGISPROC)(GLclampf value, GLboolean invert);
typedef void (APIENTRY * PFNGLSAMPLEPATTERNSGISPROC)(GLenum pattern);

extern PFNGLSAMPLEMASKSGISPROC glSampleMaskSGIS;
extern PFNGLSAMPLEPATTERNSGISPROC glSamplePatternSGIS;

// GL_SGIS_point_line_texgen

#ifndef GL_EYE_DISTANCE_TO_POINT_SGIS
    #define GL_EYE_DISTANCE_TO_POINT_SGIS 0x81F0
#endif
#ifndef GL_OBJECT_DISTANCE_TO_POINT_SGIS
    #define GL_OBJECT_DISTANCE_TO_POINT_SGIS 0x81F1
#endif
#ifndef GL_EYE_DISTANCE_TO_LINE_SGIS
    #define GL_EYE_DISTANCE_TO_LINE_SGIS 0x81F2
#endif
#ifndef GL_OBJECT_DISTANCE_TO_LINE_SGIS
    #define GL_OBJECT_DISTANCE_TO_LINE_SGIS 0x81F3
#endif
#ifndef GL_EYE_POINT_SGIS
    #define GL_EYE_POINT_SGIS 0x81F4
#endif
#ifndef GL_OBJECT_POINT_SGIS
    #define GL_OBJECT_POINT_SGIS 0x81F5
#endif
#ifndef GL_EYE_LINE_SGIS
    #define GL_EYE_LINE_SGIS 0x81F6
#endif
#ifndef GL_OBJECT_LINE_SGIS
    #define GL_OBJECT_LINE_SGIS 0x81F7
#endif

// GL_SGIS_sharpen_texture


typedef void (APIENTRY * PFNGLGETSHARPENTEXFUNCSGISPROC)(GLenum target, GLfloat* points);
typedef void (APIENTRY * PFNGLSHARPENTEXFUNCSGISPROC)(GLenum target, GLsizei n, const GLfloat* points);

extern PFNGLGETSHARPENTEXFUNCSGISPROC glGetSharpenTexFuncSGIS;
extern PFNGLSHARPENTEXFUNCSGISPROC glSharpenTexFuncSGIS;

// GL_SGIS_texture4D


typedef void (APIENTRY * PFNGLTEXIMAGE4DSGISPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei extent, GLint border, GLenum format, GLenum type, const void* pixels);
typedef void (APIENTRY * PFNGLTEXSUBIMAGE4DSGISPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei extent, GLenum format, GLenum type, const void* pixels);

extern PFNGLTEXIMAGE4DSGISPROC glTexImage4DSGIS;
extern PFNGLTEXSUBIMAGE4DSGISPROC glTexSubImage4DSGIS;

// GL_SGIS_texture_border_clamp

#ifndef GL_CLAMP_TO_BORDER_SGIS
    #define GL_CLAMP_TO_BORDER_SGIS 0x812D
#endif

// GL_SGIS_texture_edge_clamp

#ifndef GL_CLAMP_TO_EDGE_SGIS
    #define GL_CLAMP_TO_EDGE_SGIS 0x812F
#endif

// GL_SGIS_texture_filter4


typedef void (APIENTRY * PFNGLGETTEXFILTERFUNCSGISPROC)(GLenum target, GLenum filter, GLfloat* weights);
typedef void (APIENTRY * PFNGLTEXFILTERFUNCSGISPROC)(GLenum target, GLenum filter, GLsizei n, const GLfloat* weights);

extern PFNGLGETTEXFILTERFUNCSGISPROC glGetTexFilterFuncSGIS;
extern PFNGLTEXFILTERFUNCSGISPROC glTexFilterFuncSGIS;

// GL_SGIS_texture_lod

#ifndef GL_TEXTURE_MIN_LOD_SGIS
    #define GL_TEXTURE_MIN_LOD_SGIS 0x813A
#endif
#ifndef GL_TEXTURE_MAX_LOD_SGIS
    #define GL_TEXTURE_MAX_LOD_SGIS 0x813B
#endif
#ifndef GL_TEXTURE_BASE_LEVEL_SGIS
    #define GL_TEXTURE_BASE_LEVEL_SGIS 0x813C
#endif
#ifndef GL_TEXTURE_MAX_LEVEL_SGIS
    #define GL_TEXTURE_MAX_LEVEL_SGIS 0x813D
#endif

// GL_SGIX_async

#ifndef GL_ASYNC_MARKER_SGIX
    #define GL_ASYNC_MARKER_SGIX 0x8329
#endif

typedef void (APIENTRY * PFNGLASYNCMARKERSGIXPROC)(GLuint marker);
typedef void (APIENTRY * PFNGLDELETEASYNCMARKERSSGIXPROC)(GLuint marker, GLsizei range);
typedef GLint (APIENTRY * PFNGLFINISHASYNCSGIXPROC)(GLuint* markerp);
typedef GLuint (APIENTRY * PFNGLGENASYNCMARKERSSGIXPROC)(GLsizei range);
typedef GLboolean (APIENTRY * PFNGLISASYNCMARKERSGIXPROC)(GLuint marker);
typedef GLint (APIENTRY * PFNGLPOLLASYNCSGIXPROC)(GLuint* markerp);

extern PFNGLASYNCMARKERSGIXPROC glAsyncMarkerSGIX;
extern PFNGLDELETEASYNCMARKERSSGIXPROC glDeleteAsyncMarkersSGIX;
extern PFNGLFINISHASYNCSGIXPROC glFinishAsyncSGIX;
extern PFNGLGENASYNCMARKERSSGIXPROC glGenAsyncMarkersSGIX;
extern PFNGLISASYNCMARKERSGIXPROC glIsAsyncMarkerSGIX;
extern PFNGLPOLLASYNCSGIXPROC glPollAsyncSGIX;

// GL_SGIX_async_histogram

#ifndef GL_ASYNC_HISTOGRAM_SGIX
    #define GL_ASYNC_HISTOGRAM_SGIX 0x832C
#endif
#ifndef GL_MAX_ASYNC_HISTOGRAM_SGIX
    #define GL_MAX_ASYNC_HISTOGRAM_SGIX 0x832D
#endif

// GL_SGIX_async_pixel

#ifndef GL_ASYNC_TEX_IMAGE_SGIX
    #define GL_ASYNC_TEX_IMAGE_SGIX 0x835C
#endif
#ifndef GL_ASYNC_DRAW_PIXELS_SGIX
    #define GL_ASYNC_DRAW_PIXELS_SGIX 0x835D
#endif
#ifndef GL_ASYNC_READ_PIXELS_SGIX
    #define GL_ASYNC_READ_PIXELS_SGIX 0x835E
#endif
#ifndef GL_MAX_ASYNC_TEX_IMAGE_SGIX
    #define GL_MAX_ASYNC_TEX_IMAGE_SGIX 0x835F
#endif
#ifndef GL_MAX_ASYNC_DRAW_PIXELS_SGIX
    #define GL_MAX_ASYNC_DRAW_PIXELS_SGIX 0x8360
#endif
#ifndef GL_MAX_ASYNC_READ_PIXELS_SGIX
    #define GL_MAX_ASYNC_READ_PIXELS_SGIX 0x8361
#endif

// GL_SGIX_blend_alpha_minmax

#ifndef GL_ALPHA_MIN_SGIX
    #define GL_ALPHA_MIN_SGIX 0x8320
#endif
#ifndef GL_ALPHA_MAX_SGIX
    #define GL_ALPHA_MAX_SGIX 0x8321
#endif

// GL_SGIX_convolution_accuracy

#ifndef GL_CONVOLUTION_HINT_SGIX
    #define GL_CONVOLUTION_HINT_SGIX 0x8316
#endif

// GL_SGIX_depth_texture

#ifndef GL_DEPTH_COMPONENT16_SGIX
    #define GL_DEPTH_COMPONENT16_SGIX 0x81A5
#endif
#ifndef GL_DEPTH_COMPONENT24_SGIX
    #define GL_DEPTH_COMPONENT24_SGIX 0x81A6
#endif
#ifndef GL_DEPTH_COMPONENT32_SGIX
    #define GL_DEPTH_COMPONENT32_SGIX 0x81A7
#endif

// GL_SGIX_flush_raster


typedef void (APIENTRY * PFNGLFLUSHRASTERSGIXPROC)(void);

extern PFNGLFLUSHRASTERSGIXPROC glFlushRasterSGIX;

// GL_SGIX_fog_offset

#ifndef GL_FOG_OFFSET_SGIX
    #define GL_FOG_OFFSET_SGIX 0x8198
#endif
#ifndef GL_FOG_OFFSET_VALUE_SGIX
    #define GL_FOG_OFFSET_VALUE_SGIX 0x8199
#endif

// GL_SGIX_fog_texture


typedef void (APIENTRY * PFNGLTEXTUREFOGSGIXPROC)(GLenum pname);

extern PFNGLTEXTUREFOGSGIXPROC glTextureFogSGIX;

// GL_SGIX_fragment_specular_lighting


typedef void (APIENTRY * PFNGLFRAGMENTCOLORMATERIALSGIXPROC)(GLenum face, GLenum mode);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELFSGIXPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELFVSGIXPROC)(GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELISGIXPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTMODELIVSGIXPROC)(GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTFSGIXPROC)(GLenum light, GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTFVSGIXPROC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTISGIXPROC)(GLenum light, GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTLIGHTIVSGIXPROC)(GLenum light, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALFSGIXPROC)(GLenum face, GLenum pname, const GLfloat param);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALFVSGIXPROC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALISGIXPROC)(GLenum face, GLenum pname, const GLint param);
typedef void (APIENTRY * PFNGLFRAGMENTMATERIALIVSGIXPROC)(GLenum face, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLGETFRAGMENTLIGHTFVSGIXPROC)(GLenum light, GLenum value, GLfloat* data);
typedef void (APIENTRY * PFNGLGETFRAGMENTLIGHTIVSGIXPROC)(GLenum light, GLenum value, GLint* data);
typedef void (APIENTRY * PFNGLGETFRAGMENTMATERIALFVSGIXPROC)(GLenum face, GLenum pname, const GLfloat* data);
typedef void (APIENTRY * PFNGLGETFRAGMENTMATERIALIVSGIXPROC)(GLenum face, GLenum pname, const GLint* data);

extern PFNGLFRAGMENTCOLORMATERIALSGIXPROC glFragmentColorMaterialSGIX;
extern PFNGLFRAGMENTLIGHTMODELFSGIXPROC glFragmentLightModelfSGIX;
extern PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glFragmentLightModelfvSGIX;
extern PFNGLFRAGMENTLIGHTMODELISGIXPROC glFragmentLightModeliSGIX;
extern PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glFragmentLightModelivSGIX;
extern PFNGLFRAGMENTLIGHTFSGIXPROC glFragmentLightfSGIX;
extern PFNGLFRAGMENTLIGHTFVSGIXPROC glFragmentLightfvSGIX;
extern PFNGLFRAGMENTLIGHTISGIXPROC glFragmentLightiSGIX;
extern PFNGLFRAGMENTLIGHTIVSGIXPROC glFragmentLightivSGIX;
extern PFNGLFRAGMENTMATERIALFSGIXPROC glFragmentMaterialfSGIX;
extern PFNGLFRAGMENTMATERIALFVSGIXPROC glFragmentMaterialfvSGIX;
extern PFNGLFRAGMENTMATERIALISGIXPROC glFragmentMaterialiSGIX;
extern PFNGLFRAGMENTMATERIALIVSGIXPROC glFragmentMaterialivSGIX;
extern PFNGLGETFRAGMENTLIGHTFVSGIXPROC glGetFragmentLightfvSGIX;
extern PFNGLGETFRAGMENTLIGHTIVSGIXPROC glGetFragmentLightivSGIX;
extern PFNGLGETFRAGMENTMATERIALFVSGIXPROC glGetFragmentMaterialfvSGIX;
extern PFNGLGETFRAGMENTMATERIALIVSGIXPROC glGetFragmentMaterialivSGIX;

// GL_SGIX_framezoom


typedef void (APIENTRY * PFNGLFRAMEZOOMSGIXPROC)(GLint factor);

extern PFNGLFRAMEZOOMSGIXPROC glFrameZoomSGIX;

// GL_SGIX_interlace

#ifndef GL_INTERLACE_SGIX
    #define GL_INTERLACE_SGIX 0x8094
#endif

// GL_SGIX_pixel_texture


typedef void (APIENTRY * PFNGLPIXELTEXGENSGIXPROC)(GLenum mode);

extern PFNGLPIXELTEXGENSGIXPROC glPixelTexGenSGIX;

// GL_SGIX_reference_plane


typedef void (APIENTRY * PFNGLREFERENCEPLANESGIXPROC)(const GLdouble* equation);

extern PFNGLREFERENCEPLANESGIXPROC glReferencePlaneSGIX;

// GL_SGIX_resample

#ifndef GL_PACK_RESAMPLE_SGIX
    #define GL_PACK_RESAMPLE_SGIX 0x842E
#endif
#ifndef GL_UNPACK_RESAMPLE_SGIX
    #define GL_UNPACK_RESAMPLE_SGIX 0x842F
#endif
#ifndef GL_RESAMPLE_DECIMATE_SGIX
    #define GL_RESAMPLE_DECIMATE_SGIX 0x8430
#endif
#ifndef GL_RESAMPLE_REPLICATE_SGIX
    #define GL_RESAMPLE_REPLICATE_SGIX 0x8433
#endif
#ifndef GL_RESAMPLE_ZERO_FILL_SGIX
    #define GL_RESAMPLE_ZERO_FILL_SGIX 0x8434
#endif

// GL_SGIX_shadow

#ifndef GL_TEXTURE_COMPARE_SGIX
    #define GL_TEXTURE_COMPARE_SGIX 0x819A
#endif
#ifndef GL_TEXTURE_COMPARE_OPERATOR_SGIX
    #define GL_TEXTURE_COMPARE_OPERATOR_SGIX 0x819B
#endif
#ifndef GL_TEXTURE_LEQUAL_R_SGIX
    #define GL_TEXTURE_LEQUAL_R_SGIX 0x819C
#endif
#ifndef GL_TEXTURE_GEQUAL_R_SGIX
    #define GL_TEXTURE_GEQUAL_R_SGIX 0x819D
#endif

// GL_SGIX_shadow_ambient

#ifndef GL_SHADOW_AMBIENT_SGIX
    #define GL_SHADOW_AMBIENT_SGIX 0x80BF
#endif

// GL_SGIX_sprite


typedef void (APIENTRY * PFNGLSPRITEPARAMETERFSGIXPROC)(GLenum pname, GLfloat param);
typedef void (APIENTRY * PFNGLSPRITEPARAMETERFVSGIXPROC)(GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLSPRITEPARAMETERISGIXPROC)(GLenum pname, GLint param);
typedef void (APIENTRY * PFNGLSPRITEPARAMETERIVSGIXPROC)(GLenum pname, GLint* params);

extern PFNGLSPRITEPARAMETERFSGIXPROC glSpriteParameterfSGIX;
extern PFNGLSPRITEPARAMETERFVSGIXPROC glSpriteParameterfvSGIX;
extern PFNGLSPRITEPARAMETERISGIXPROC glSpriteParameteriSGIX;
extern PFNGLSPRITEPARAMETERIVSGIXPROC glSpriteParameterivSGIX;

// GL_SGIX_tag_sample_buffer


typedef void (APIENTRY * PFNGLTAGSAMPLEBUFFERSGIXPROC)(void);

extern PFNGLTAGSAMPLEBUFFERSGIXPROC glTagSampleBufferSGIX;

// GL_SGIX_texture_coordinate_clamp

#ifndef GL_TEXTURE_MAX_CLAMP_S_SGIX
    #define GL_TEXTURE_MAX_CLAMP_S_SGIX 0x8369
#endif
#ifndef GL_TEXTURE_MAX_CLAMP_T_SGIX
    #define GL_TEXTURE_MAX_CLAMP_T_SGIX 0x836A
#endif
#ifndef GL_TEXTURE_MAX_CLAMP_R_SGIX
    #define GL_TEXTURE_MAX_CLAMP_R_SGIX 0x836B
#endif

// GL_SGIX_texture_multi_buffer

#ifndef GL_TEXTURE_MULTI_BUFFER_HINT_SGIX
    #define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX 0x812E
#endif

// GL_SGIX_texture_range

#ifndef GL_RGB_SIGNED_SGIX
    #define GL_RGB_SIGNED_SGIX 0x85E0
#endif
#ifndef GL_RGBA_SIGNED_SGIX
    #define GL_RGBA_SIGNED_SGIX 0x85E1
#endif
#ifndef GL_ALPHA_SIGNED_SGIX
    #define GL_ALPHA_SIGNED_SGIX 0x85E2
#endif
#ifndef GL_LUMINANCE_SIGNED_SGIX
    #define GL_LUMINANCE_SIGNED_SGIX 0x85E3
#endif
#ifndef GL_INTENSITY_SIGNED_SGIX
    #define GL_INTENSITY_SIGNED_SGIX 0x85E4
#endif
#ifndef GL_LUMINANCE_ALPHA_SIGNED_SGIX
    #define GL_LUMINANCE_ALPHA_SIGNED_SGIX 0x85E5
#endif
#ifndef GL_RGB16_SIGNED_SGIX
    #define GL_RGB16_SIGNED_SGIX 0x85E6
#endif
#ifndef GL_RGBA16_SIGNED_SGIX
    #define GL_RGBA16_SIGNED_SGIX 0x85E7
#endif
#ifndef GL_ALPHA16_SIGNED_SGIX
    #define GL_ALPHA16_SIGNED_SGIX 0x85E8
#endif
#ifndef GL_LUMINANCE16_SIGNED_SGIX
    #define GL_LUMINANCE16_SIGNED_SGIX 0x85E9
#endif
#ifndef GL_INTENSITY16_SIGNED_SGIX
    #define GL_INTENSITY16_SIGNED_SGIX 0x85EA
#endif
#ifndef GL_LUMINANCE16_ALPHA16_SIGNED_SGIX
    #define GL_LUMINANCE16_ALPHA16_SIGNED_SGIX 0x85EB
#endif
#ifndef GL_RGB_EXTENDED_RANGE_SGIX
    #define GL_RGB_EXTENDED_RANGE_SGIX 0x85EC
#endif
#ifndef GL_RGBA_EXTENDED_RANGE_SGIX
    #define GL_RGBA_EXTENDED_RANGE_SGIX 0x85ED
#endif
#ifndef GL_ALPHA_EXTENDED_RANGE_SGIX
    #define GL_ALPHA_EXTENDED_RANGE_SGIX 0x85EE
#endif
#ifndef GL_LUMINANCE_EXTENDED_RANGE_SGIX
    #define GL_LUMINANCE_EXTENDED_RANGE_SGIX 0x85EF
#endif
#ifndef GL_INTENSITY_EXTENDED_RANGE_SGIX
    #define GL_INTENSITY_EXTENDED_RANGE_SGIX 0x85F0
#endif
#ifndef GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX
    #define GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX 0x85F1
#endif
#ifndef GL_RGB16_EXTENDED_RANGE_SGIX
    #define GL_RGB16_EXTENDED_RANGE_SGIX 0x85F2
#endif
#ifndef GL_RGBA16_EXTENDED_RANGE_SGIX
    #define GL_RGBA16_EXTENDED_RANGE_SGIX 0x85F3
#endif
#ifndef GL_ALPHA16_EXTENDED_RANGE_SGIX
    #define GL_ALPHA16_EXTENDED_RANGE_SGIX 0x85F4
#endif
#ifndef GL_LUMINANCE16_EXTENDED_RANGE_SGIX
    #define GL_LUMINANCE16_EXTENDED_RANGE_SGIX 0x85F5
#endif
#ifndef GL_INTENSITY16_EXTENDED_RANGE_SGIX
    #define GL_INTENSITY16_EXTENDED_RANGE_SGIX 0x85F6
#endif
#ifndef GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX
    #define GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX 0x85F7
#endif
#ifndef GL_MIN_LUMINANCE_SGIS
    #define GL_MIN_LUMINANCE_SGIS 0x85F8
#endif
#ifndef GL_MAX_LUMINANCE_SGIS
    #define GL_MAX_LUMINANCE_SGIS 0x85F9
#endif
#ifndef GL_MIN_INTENSITY_SGIS
    #define GL_MIN_INTENSITY_SGIS 0x85FA
#endif
#ifndef GL_MAX_INTENSITY_SGIS
    #define GL_MAX_INTENSITY_SGIS 0x85FB
#endif

// GL_SGIX_texture_scale_bias

#ifndef GL_POST_TEXTURE_FILTER_BIAS_SGIX
    #define GL_POST_TEXTURE_FILTER_BIAS_SGIX 0x8179
#endif
#ifndef GL_POST_TEXTURE_FILTER_SCALE_SGIX
    #define GL_POST_TEXTURE_FILTER_SCALE_SGIX 0x817A
#endif
#ifndef GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX
    #define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#endif
#ifndef GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX
    #define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C
#endif

// GL_SGIX_vertex_preclip

#ifndef GL_VERTEX_PRECLIP_SGIX
    #define GL_VERTEX_PRECLIP_SGIX 0x83EE
#endif
#ifndef GL_VERTEX_PRECLIP_HINT_SGIX
    #define GL_VERTEX_PRECLIP_HINT_SGIX 0x83EF
#endif

// GL_SGIX_vertex_preclip_hint

#ifndef GL_VERTEX_PRECLIP_SGIX
    #define GL_VERTEX_PRECLIP_SGIX 0x83EE
#endif
#ifndef GL_VERTEX_PRECLIP_HINT_SGIX
    #define GL_VERTEX_PRECLIP_HINT_SGIX 0x83EF
#endif

// GL_SGI_color_matrix

#ifndef GL_COLOR_MATRIX_SGI
    #define GL_COLOR_MATRIX_SGI 0x80B1
#endif
#ifndef GL_COLOR_MATRIX_STACK_DEPTH_SGI
    #define GL_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B2
#endif
#ifndef GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI
    #define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_SCALE_SGI
    #define GL_POST_COLOR_MATRIX_RED_SCALE_SGI 0x80B4
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI
    #define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI
    #define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI
    #define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#endif
#ifndef GL_POST_COLOR_MATRIX_RED_BIAS_SGI
    #define GL_POST_COLOR_MATRIX_RED_BIAS_SGI 0x80B8
#endif
#ifndef GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI
    #define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#endif
#ifndef GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI
    #define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI 0x80BA
#endif
#ifndef GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI
    #define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB
#endif

// GL_SGI_color_table

#ifndef GL_COLOR_TABLE_SGI
    #define GL_COLOR_TABLE_SGI 0x80D0
#endif
#ifndef GL_POST_CONVOLUTION_COLOR_TABLE_SGI
    #define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#endif
#ifndef GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI
    #define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#endif
#ifndef GL_PROXY_COLOR_TABLE_SGI
    #define GL_PROXY_COLOR_TABLE_SGI 0x80D3
#endif
#ifndef GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI
    #define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#endif
#ifndef GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI
    #define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#endif
#ifndef GL_COLOR_TABLE_SCALE_SGI
    #define GL_COLOR_TABLE_SCALE_SGI 0x80D6
#endif
#ifndef GL_COLOR_TABLE_BIAS_SGI
    #define GL_COLOR_TABLE_BIAS_SGI 0x80D7
#endif
#ifndef GL_COLOR_TABLE_FORMAT_SGI
    #define GL_COLOR_TABLE_FORMAT_SGI 0x80D8
#endif
#ifndef GL_COLOR_TABLE_WIDTH_SGI
    #define GL_COLOR_TABLE_WIDTH_SGI 0x80D9
#endif
#ifndef GL_COLOR_TABLE_RED_SIZE_SGI
    #define GL_COLOR_TABLE_RED_SIZE_SGI 0x80DA
#endif
#ifndef GL_COLOR_TABLE_GREEN_SIZE_SGI
    #define GL_COLOR_TABLE_GREEN_SIZE_SGI 0x80DB
#endif
#ifndef GL_COLOR_TABLE_BLUE_SIZE_SGI
    #define GL_COLOR_TABLE_BLUE_SIZE_SGI 0x80DC
#endif
#ifndef GL_COLOR_TABLE_ALPHA_SIZE_SGI
    #define GL_COLOR_TABLE_ALPHA_SIZE_SGI 0x80DD
#endif
#ifndef GL_COLOR_TABLE_LUMINANCE_SIZE_SGI
    #define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI 0x80DE
#endif
#ifndef GL_COLOR_TABLE_INTENSITY_SIZE_SGI
    #define GL_COLOR_TABLE_INTENSITY_SIZE_SGI 0x80DF
#endif

typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERFVSGIPROC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (APIENTRY * PFNGLCOLORTABLEPARAMETERIVSGIPROC)(GLenum target, GLenum pname, const GLint* params);
typedef void (APIENTRY * PFNGLCOLORTABLESGIPROC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const void* table);
typedef void (APIENTRY * PFNGLCOPYCOLORTABLESGIPROC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERFVSGIPROC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (APIENTRY * PFNGLGETCOLORTABLEPARAMETERIVSGIPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (APIENTRY * PFNGLGETCOLORTABLESGIPROC)(GLenum target, GLenum format, GLenum type, void* table);

extern PFNGLCOLORTABLEPARAMETERFVSGIPROC glColorTableParameterfvSGI;
extern PFNGLCOLORTABLEPARAMETERIVSGIPROC glColorTableParameterivSGI;
extern PFNGLCOLORTABLESGIPROC glColorTableSGI;
extern PFNGLCOPYCOLORTABLESGIPROC glCopyColorTableSGI;
extern PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glGetColorTableParameterfvSGI;
extern PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glGetColorTableParameterivSGI;
extern PFNGLGETCOLORTABLESGIPROC glGetColorTableSGI;

// GL_SGI_texture_color_table

#ifndef GL_TEXTURE_COLOR_TABLE_SGI
    #define GL_TEXTURE_COLOR_TABLE_SGI 0x80BC
#endif
#ifndef GL_PROXY_TEXTURE_COLOR_TABLE_SGI
    #define GL_PROXY_TEXTURE_COLOR_TABLE_SGI 0x80BD
#endif

// GL_SUNX_constant_data

#ifndef GL_UNPACK_CONSTANT_DATA_SUNX
    #define GL_UNPACK_CONSTANT_DATA_SUNX 0x81D5
#endif
#ifndef GL_TEXTURE_CONSTANT_DATA_SUNX
    #define GL_TEXTURE_CONSTANT_DATA_SUNX 0x81D6
#endif

typedef void (APIENTRY * PFNGLFINISHTEXTURESUNXPROC)(void);

extern PFNGLFINISHTEXTURESUNXPROC glFinishTextureSUNX;

// GL_SUN_convolution_border_modes

#ifndef GL_WRAP_BORDER_SUN
    #define GL_WRAP_BORDER_SUN 0x81D4
#endif

// GL_SUN_global_alpha

#ifndef GL_GLOBAL_ALPHA_SUN
    #define GL_GLOBAL_ALPHA_SUN 0x81D9
#endif
#ifndef GL_GLOBAL_ALPHA_FACTOR_SUN
    #define GL_GLOBAL_ALPHA_FACTOR_SUN 0x81DA
#endif

typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORBSUNPROC)(GLbyte factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORDSUNPROC)(GLdouble factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORFSUNPROC)(GLfloat factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORISUNPROC)(GLint factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORSSUNPROC)(GLshort factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORUBSUNPROC)(GLubyte factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORUISUNPROC)(GLuint factor);
typedef void (APIENTRY * PFNGLGLOBALALPHAFACTORUSSUNPROC)(GLushort factor);

extern PFNGLGLOBALALPHAFACTORBSUNPROC glGlobalAlphaFactorbSUN;
extern PFNGLGLOBALALPHAFACTORDSUNPROC glGlobalAlphaFactordSUN;
extern PFNGLGLOBALALPHAFACTORFSUNPROC glGlobalAlphaFactorfSUN;
extern PFNGLGLOBALALPHAFACTORISUNPROC glGlobalAlphaFactoriSUN;
extern PFNGLGLOBALALPHAFACTORSSUNPROC glGlobalAlphaFactorsSUN;
extern PFNGLGLOBALALPHAFACTORUBSUNPROC glGlobalAlphaFactorubSUN;
extern PFNGLGLOBALALPHAFACTORUISUNPROC glGlobalAlphaFactoruiSUN;
extern PFNGLGLOBALALPHAFACTORUSSUNPROC glGlobalAlphaFactorusSUN;

// GL_SUN_mesh_array

#ifndef GL_QUAD_MESH_SUN
    #define GL_QUAD_MESH_SUN 0x8614
#endif
#ifndef GL_TRIANGLE_MESH_SUN
    #define GL_TRIANGLE_MESH_SUN 0x8615
#endif

// GL_SUN_read_video_pixels


typedef void (APIENTRY * PFNGLREADVIDEOPIXELSSUNPROC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);

extern PFNGLREADVIDEOPIXELSSUNPROC glReadVideoPixelsSUN;

// GL_SUN_slice_accum

#ifndef GL_SLICE_ACCUM_SUN
    #define GL_SLICE_ACCUM_SUN 0x85CC
#endif

// GL_SUN_triangle_list

#ifndef GL_TRIANGLE_LIST_SUN
    #define GL_TRIANGLE_LIST_SUN 0x81D7
#endif
#ifndef GL_REPLACEMENT_CODE_SUN
    #define GL_REPLACEMENT_CODE_SUN 0x81D8
#endif
#ifndef GL_REPLACEMENT_CODE_ARRAY_SUN
    #define GL_REPLACEMENT_CODE_ARRAY_SUN 0x85C0
#endif
#ifndef GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN
    #define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN 0x85C1
#endif
#ifndef GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN
    #define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN 0x85C2
#endif
#ifndef GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN
    #define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN 0x85C3
#endif
#ifndef GL_R1UI_V3F_SUN
    #define GL_R1UI_V3F_SUN 0x85C4
#endif
#ifndef GL_R1UI_C4UB_V3F_SUN
    #define GL_R1UI_C4UB_V3F_SUN 0x85C5
#endif
#ifndef GL_R1UI_C3F_V3F_SUN
    #define GL_R1UI_C3F_V3F_SUN 0x85C6
#endif
#ifndef GL_R1UI_N3F_V3F_SUN
    #define GL_R1UI_N3F_V3F_SUN 0x85C7
#endif
#ifndef GL_R1UI_C4F_N3F_V3F_SUN
    #define GL_R1UI_C4F_N3F_V3F_SUN 0x85C8
#endif
#ifndef GL_R1UI_T2F_V3F_SUN
    #define GL_R1UI_T2F_V3F_SUN 0x85C9
#endif
#ifndef GL_R1UI_T2F_N3F_V3F_SUN
    #define GL_R1UI_T2F_N3F_V3F_SUN 0x85CA
#endif
#ifndef GL_R1UI_T2F_C4F_N3F_V3F_SUN
    #define GL_R1UI_T2F_C4F_N3F_V3F_SUN 0x85CB
#endif

typedef void (APIENTRY * PFNGLREPLACEMENTCODEPOINTERSUNPROC)(GLenum type, GLsizei stride, const void* pointer);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUBSUNPROC)(GLubyte code);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUBVSUNPROC)(const GLubyte* code);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUISUNPROC)(GLuint code);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUIVSUNPROC)(const GLuint* code);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUSSUNPROC)(GLushort code);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUSVSUNPROC)(const GLushort* code);

extern PFNGLREPLACEMENTCODEPOINTERSUNPROC glReplacementCodePointerSUN;
extern PFNGLREPLACEMENTCODEUBSUNPROC glReplacementCodeubSUN;
extern PFNGLREPLACEMENTCODEUBVSUNPROC glReplacementCodeubvSUN;
extern PFNGLREPLACEMENTCODEUISUNPROC glReplacementCodeuiSUN;
extern PFNGLREPLACEMENTCODEUIVSUNPROC glReplacementCodeuivSUN;
extern PFNGLREPLACEMENTCODEUSSUNPROC glReplacementCodeusSUN;
extern PFNGLREPLACEMENTCODEUSVSUNPROC glReplacementCodeusvSUN;

// GL_SUN_vertex


typedef void (APIENTRY * PFNGLCOLOR3FVERTEX3FSUNPROC)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLCOLOR3FVERTEX3FVSUNPROC)(const GLfloat* c, const GLfloat *v);
typedef void (APIENTRY * PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat* c, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLCOLOR4UBVERTEX2FSUNPROC)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
typedef void (APIENTRY * PFNGLCOLOR4UBVERTEX2FVSUNPROC)(const GLubyte* c, const GLfloat *v);
typedef void (APIENTRY * PFNGLCOLOR4UBVERTEX3FSUNPROC)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLCOLOR4UBVERTEX3FVSUNPROC)(const GLubyte* c, const GLfloat *v);
typedef void (APIENTRY * PFNGLNORMAL3FVERTEX3FSUNPROC)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLNORMAL3FVERTEX3FVSUNPROC)(const GLfloat* n, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *c, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC)(const GLuint* rc, const GLubyte *c, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *tc, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *tc, const GLfloat *v);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC)(GLuint rc, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC)(const GLuint* rc, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC)(const GLfloat* tc, const GLfloat *c, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat* tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC)(const GLfloat* tc, const GLubyte *c, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC)(const GLfloat* tc, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD2FVERTEX3FSUNPROC)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void (APIENTRY * PFNGLTEXCOORD2FVERTEX3FVSUNPROC)(const GLfloat* tc, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC)(const GLfloat* tc, const GLfloat *c, const GLfloat *n, const GLfloat *v);
typedef void (APIENTRY * PFNGLTEXCOORD4FVERTEX4FSUNPROC)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (APIENTRY * PFNGLTEXCOORD4FVERTEX4FVSUNPROC)(const GLfloat* tc, const GLfloat *v);

extern PFNGLCOLOR3FVERTEX3FSUNPROC glColor3fVertex3fSUN;
extern PFNGLCOLOR3FVERTEX3FVSUNPROC glColor3fVertex3fvSUN;
extern PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glColor4fNormal3fVertex3fSUN;
extern PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glColor4fNormal3fVertex3fvSUN;
extern PFNGLCOLOR4UBVERTEX2FSUNPROC glColor4ubVertex2fSUN;
extern PFNGLCOLOR4UBVERTEX2FVSUNPROC glColor4ubVertex2fvSUN;
extern PFNGLCOLOR4UBVERTEX3FSUNPROC glColor4ubVertex3fSUN;
extern PFNGLCOLOR4UBVERTEX3FVSUNPROC glColor4ubVertex3fvSUN;
extern PFNGLNORMAL3FVERTEX3FSUNPROC glNormal3fVertex3fSUN;
extern PFNGLNORMAL3FVERTEX3FVSUNPROC glNormal3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glReplacementCodeuiColor3fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glReplacementCodeuiColor3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glReplacementCodeuiColor4ubVertex3fSUN;
extern PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glReplacementCodeuiColor4ubVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glReplacementCodeuiNormal3fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiNormal3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glReplacementCodeuiTexCoord2fVertex3fSUN;
extern PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glReplacementCodeuiTexCoord2fVertex3fvSUN;
extern PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glReplacementCodeuiVertex3fSUN;
extern PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glReplacementCodeuiVertex3fvSUN;
extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glTexCoord2fColor3fVertex3fSUN;
extern PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glTexCoord2fColor3fVertex3fvSUN;
extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glTexCoord2fColor4fNormal3fVertex3fSUN;
extern PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fColor4fNormal3fVertex3fvSUN;
extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glTexCoord2fColor4ubVertex3fSUN;
extern PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glTexCoord2fColor4ubVertex3fvSUN;
extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glTexCoord2fNormal3fVertex3fSUN;
extern PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glTexCoord2fNormal3fVertex3fvSUN;
extern PFNGLTEXCOORD2FVERTEX3FSUNPROC glTexCoord2fVertex3fSUN;
extern PFNGLTEXCOORD2FVERTEX3FVSUNPROC glTexCoord2fVertex3fvSUN;
extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glTexCoord4fColor4fNormal3fVertex4fSUN;
extern PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glTexCoord4fColor4fNormal3fVertex4fvSUN;
extern PFNGLTEXCOORD4FVERTEX4FSUNPROC glTexCoord4fVertex4fSUN;
extern PFNGLTEXCOORD4FVERTEX4FVSUNPROC glTexCoord4fVertex4fvSUN;

// GL_WIN_phong_shading

#ifndef GL_PHONG_WIN
    #define GL_PHONG_WIN 0x80EA
#endif
#ifndef GL_PHONG_HINT_WIN
    #define GL_PHONG_HINT_WIN 0x80EB
#endif

// GL_WIN_specular_fog

#ifndef GL_FOG_SPECULAR_TEXTURE_WIN
    #define GL_FOG_SPECULAR_TEXTURE_WIN 0x80EC
#endif

#ifdef GLEXT_UNDEF_WINGDIAPI
#undef WINGDIAPI
#endif

#ifdef GLEXT_UNDEF_APIENTRY
#undef APIENTRY
#endif

#ifdef GLEXT_UNDEF_CALLBACK
#undef CALLBACK
#endif

void initGlExtensions();
