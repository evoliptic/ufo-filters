#ifndef __UFO_FILTER_FFT_H
#define __UFO_FILTER_FFT_H

#include <glib.h>

#include <ufo/ufo-filter.h>

#define UFO_TYPE_FILTER_FFT             (ufo_filter_fft_get_type())
#define UFO_FILTER_FFT(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), UFO_TYPE_FILTER_FFT, UfoFilterFFT))
#define UFO_IS_FILTER_FFT(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), UFO_TYPE_FILTER_FFT))
#define UFO_FILTER_FFT_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST((klass), UFO_TYPE_FILTER_FFT, UfoFilterFFTClass))
#define UFO_IS_FILTER_FFT_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE((klass), UFO_TYPE_FILTER_FFT))
#define UFO_FILTER_FFT_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS((obj), UFO_TYPE_FILTER_FFT, UfoFilterFFTClass))

typedef struct _UfoFilterFFT           UfoFilterFFT;
typedef struct _UfoFilterFFTClass      UfoFilterFFTClass;
typedef struct _UfoFilterFFTPrivate    UfoFilterFFTPrivate;

struct _UfoFilterFFT {
    /*< private >*/
    UfoFilter parent_instance;

    UfoFilterFFTPrivate *priv;
};

/**
 * UfoFilterFFTClass:
 *
 * #UfoFilterFFT class
 */
struct _UfoFilterFFTClass {
    /*< private >*/
    UfoFilterClass parent_class;
};

GType ufo_filter_fft_get_type(void);

#endif
