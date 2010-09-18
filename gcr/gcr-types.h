#ifndef GCRTYPES_H_
#define GCRTYPES_H_

#ifndef GCR_API_SUBJECT_TO_CHANGE
#error "This API has not yet reached stability."
#endif

#include <glib.h>

G_BEGIN_DECLS

#define             GCR_DATA_ERROR                    (gcr_data_error_get_domain ())

GQuark 	            gcr_data_error_get_domain         (void) G_GNUC_CONST;

enum {
	GCR_ERROR_FAILURE = -1,
	GCR_ERROR_UNRECOGNIZED = 1,
	GCR_ERROR_CANCELLED = 2,
	GCR_ERROR_LOCKED = 3
};

#define             GCR_ERROR                    (gcr_error_get_domain ())

GQuark 	            gcr_error_get_domain         (void) G_GNUC_CONST;

enum {
	GCR_FORMAT_INVALID = 0,

	GCR_FORMAT_DER_PRIVATE_KEY = 100,
	GCR_FORMAT_DER_PRIVATE_KEY_RSA,
	GCR_FORMAT_DER_PRIVATE_KEY_DSA,

	GCR_FORMAT_DER_CERTIFICATE_X509 = 200,

	GCR_FORMAT_DER_PKCS7 = 300,

	GCR_FORMAT_DER_PKCS8 = 400,
	GCR_FORMAT_DER_PKCS8_PLAIN,
	GCR_FORMAT_DER_PKCS8_ENCRYPTED,

	GCR_FORMAT_DER_PKCS12 = 500,

	GCR_FORMAT_PEM = 1000,
	GCR_FORMAT_PEM_PRIVATE_KEY_RSA,
	GCR_FORMAT_PEM_PRIVATE_KEY_DSA,
	GCR_FORMAT_PEM_CERTIFICATE_X509,
	GCR_FORMAT_PEM_PKCS7,
	GCR_FORMAT_PEM_PKCS8_PLAIN,
	GCR_FORMAT_PEM_PKCS8_ENCRYPTED,
	GCR_FORMAT_PEM_PKCS12
};

/* Forward declare some of the Gck objects */
struct _GckAttributes;
struct _GckObject;
struct _GckSlot;

G_END_DECLS

#endif /* GCRTYPES_H_ */
