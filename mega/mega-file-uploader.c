/**
 * SECTION:mega-file-uploader
 * @title 
 * @short_description: 
 *
 * Description...
 */

#include "mega-file-uploader.h"

struct _MegaFileUploaderPrivate
{
  int dummy;
};

// {{{ GObject property and signal enums

enum MegaFileUploaderProp
{
  PROP_0,
  N_PROPERTIES
};

enum MegaFileUploaderSignal
{
  N_SIGNALS
};

static guint signals[N_SIGNALS];

// }}}

/**
 * mega_file_uploader_new:
 *
 * Create new #MegaFileUploader object.
 *
 * Returns: #MegaFileUploader object.
 */
MegaFileUploader* mega_file_uploader_new(void)
{
  MegaFileUploader *file_uploader = g_object_new(MEGA_TYPE_FILE_UPLOADER, NULL);

  return file_uploader;
}

// {{{ GObject type setup

static void mega_file_uploader_set_property(GObject *object, guint property_id, const GValue *value, GParamSpec *pspec)
{
  MegaFileUploader *file_uploader = MEGA_FILE_UPLOADER(object);

  switch (property_id)
  {
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
  }
}

static void mega_file_uploader_get_property(GObject *object, guint property_id, GValue *value, GParamSpec *pspec)
{
  MegaFileUploader *file_uploader = MEGA_FILE_UPLOADER(object);

  switch (property_id)
  {
    default:
      G_OBJECT_WARN_INVALID_PROPERTY_ID(object, property_id, pspec);
  }
}

G_DEFINE_TYPE(MegaFileUploader, mega_file_uploader, G_TYPE_OBJECT);

static void mega_file_uploader_init(MegaFileUploader *file_uploader)
{
  file_uploader->priv = G_TYPE_INSTANCE_GET_PRIVATE(file_uploader, MEGA_TYPE_FILE_UPLOADER, MegaFileUploaderPrivate);
}

static void mega_file_uploader_dispose(GObject *object)
{
  G_GNUC_UNUSED MegaFileUploader *file_uploader = MEGA_FILE_UPLOADER(object);

  // Free everything that may hold reference to MegaFileUploader

  G_OBJECT_CLASS(mega_file_uploader_parent_class)->dispose(object);
}

static void mega_file_uploader_finalize(GObject *object)
{
  G_GNUC_UNUSED MegaFileUploader *file_uploader = MEGA_FILE_UPLOADER(object);


  G_OBJECT_CLASS(mega_file_uploader_parent_class)->finalize(object);
}

static void mega_file_uploader_class_init(MegaFileUploaderClass *klass)
{
  GObjectClass *gobject_class = G_OBJECT_CLASS(klass);
  GParamSpec *param_spec;

  gobject_class->set_property = mega_file_uploader_set_property;
  gobject_class->get_property = mega_file_uploader_get_property;
  gobject_class->dispose = mega_file_uploader_dispose;
  gobject_class->finalize = mega_file_uploader_finalize;

  g_type_class_add_private(klass, sizeof(MegaFileUploaderPrivate));

  /* object properties */

  /* object properties end */

  /* object signals */

  /* object signals end */
}

// }}}
