#ifndef __UFO_FILTER_FILTER_H
#define __UFO_FILTER_FILTER_H

#include <glib.h>

#include <ufo/ufo-filter.h>

#define UFO_TYPE_FILTER_FILTER             (ufo_filter_filter_get_type())
#define UFO_FILTER_FILTER(obj)             (G_TYPE_CHECK_INSTANCE_CAST((obj), UFO_TYPE_FILTER_FILTER, UfoFilterFilter))
#define UFO_IS_FILTER_FILTER(obj)          (G_TYPE_CHECK_INSTANCE_TYPE((obj), UFO_TYPE_FILTER_FILTER))
#define UFO_FILTER_FILTER_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST((klass), UFO_TYPE_FILTER_FILTER, UfoFilterFilterClass))
#define UFO_IS_FILTER_FILTER_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE((klass), UFO_TYPE_FILTER_FILTER))
#define UFO_FILTER_FILTER_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS((obj), UFO_TYPE_FILTER_FILTER, UfoFilterFilterClass))

typedef struct _UfoFilterFilter           UfoFilterFilter;
typedef struct _UfoFilterFilterClass      UfoFilterFilterClass;
typedef struct _UfoFilterFilterPrivate    UfoFilterFilterPrivate;

struct _UfoFilterFilter {
    /*< private >*/
    UfoFilter parent_instance;

    UfoFilterFilterPrivate *priv;
};

/**
 * UfoFilterFilterClass:
 *
 * #UfoFilterFilter class
 */
struct _UfoFilterFilterClass {
    /*< private >*/
    UfoFilterClass parent_class;
};

GType ufo_filter_filter_get_type(void);

#endif
