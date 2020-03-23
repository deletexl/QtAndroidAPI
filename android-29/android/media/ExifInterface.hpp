#pragma once

#ifndef ANDROID_MEDIA_EXIFINTERFACE
#define ANDROID_MEDIA_EXIFINTERFACE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::media
{
	class ExifInterface : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_FLIP_HORIZONTAL();
		static jint ORIENTATION_FLIP_VERTICAL();
		static jint ORIENTATION_NORMAL();
		static jint ORIENTATION_ROTATE_180();
		static jint ORIENTATION_ROTATE_270();
		static jint ORIENTATION_ROTATE_90();
		static jint ORIENTATION_TRANSPOSE();
		static jint ORIENTATION_TRANSVERSE();
		static jint ORIENTATION_UNDEFINED();
		static QAndroidJniObject TAG_APERTURE();
		static QAndroidJniObject TAG_APERTURE_VALUE();
		static QAndroidJniObject TAG_ARTIST();
		static QAndroidJniObject TAG_BITS_PER_SAMPLE();
		static QAndroidJniObject TAG_BRIGHTNESS_VALUE();
		static QAndroidJniObject TAG_CFA_PATTERN();
		static QAndroidJniObject TAG_COLOR_SPACE();
		static QAndroidJniObject TAG_COMPONENTS_CONFIGURATION();
		static QAndroidJniObject TAG_COMPRESSED_BITS_PER_PIXEL();
		static QAndroidJniObject TAG_COMPRESSION();
		static QAndroidJniObject TAG_CONTRAST();
		static QAndroidJniObject TAG_COPYRIGHT();
		static QAndroidJniObject TAG_CUSTOM_RENDERED();
		static QAndroidJniObject TAG_DATETIME();
		static QAndroidJniObject TAG_DATETIME_DIGITIZED();
		static QAndroidJniObject TAG_DATETIME_ORIGINAL();
		static QAndroidJniObject TAG_DEFAULT_CROP_SIZE();
		static QAndroidJniObject TAG_DEVICE_SETTING_DESCRIPTION();
		static QAndroidJniObject TAG_DIGITAL_ZOOM_RATIO();
		static QAndroidJniObject TAG_DNG_VERSION();
		static QAndroidJniObject TAG_EXIF_VERSION();
		static QAndroidJniObject TAG_EXPOSURE_BIAS_VALUE();
		static QAndroidJniObject TAG_EXPOSURE_INDEX();
		static QAndroidJniObject TAG_EXPOSURE_MODE();
		static QAndroidJniObject TAG_EXPOSURE_PROGRAM();
		static QAndroidJniObject TAG_EXPOSURE_TIME();
		static QAndroidJniObject TAG_FILE_SOURCE();
		static QAndroidJniObject TAG_FLASH();
		static QAndroidJniObject TAG_FLASHPIX_VERSION();
		static QAndroidJniObject TAG_FLASH_ENERGY();
		static QAndroidJniObject TAG_FOCAL_LENGTH();
		static QAndroidJniObject TAG_FOCAL_LENGTH_IN_35MM_FILM();
		static QAndroidJniObject TAG_FOCAL_PLANE_RESOLUTION_UNIT();
		static QAndroidJniObject TAG_FOCAL_PLANE_X_RESOLUTION();
		static QAndroidJniObject TAG_FOCAL_PLANE_Y_RESOLUTION();
		static QAndroidJniObject TAG_F_NUMBER();
		static QAndroidJniObject TAG_GAIN_CONTROL();
		static QAndroidJniObject TAG_GPS_ALTITUDE();
		static QAndroidJniObject TAG_GPS_ALTITUDE_REF();
		static QAndroidJniObject TAG_GPS_AREA_INFORMATION();
		static QAndroidJniObject TAG_GPS_DATESTAMP();
		static QAndroidJniObject TAG_GPS_DEST_BEARING();
		static QAndroidJniObject TAG_GPS_DEST_BEARING_REF();
		static QAndroidJniObject TAG_GPS_DEST_DISTANCE();
		static QAndroidJniObject TAG_GPS_DEST_DISTANCE_REF();
		static QAndroidJniObject TAG_GPS_DEST_LATITUDE();
		static QAndroidJniObject TAG_GPS_DEST_LATITUDE_REF();
		static QAndroidJniObject TAG_GPS_DEST_LONGITUDE();
		static QAndroidJniObject TAG_GPS_DEST_LONGITUDE_REF();
		static QAndroidJniObject TAG_GPS_DIFFERENTIAL();
		static QAndroidJniObject TAG_GPS_DOP();
		static QAndroidJniObject TAG_GPS_IMG_DIRECTION();
		static QAndroidJniObject TAG_GPS_IMG_DIRECTION_REF();
		static QAndroidJniObject TAG_GPS_LATITUDE();
		static QAndroidJniObject TAG_GPS_LATITUDE_REF();
		static QAndroidJniObject TAG_GPS_LONGITUDE();
		static QAndroidJniObject TAG_GPS_LONGITUDE_REF();
		static QAndroidJniObject TAG_GPS_MAP_DATUM();
		static QAndroidJniObject TAG_GPS_MEASURE_MODE();
		static QAndroidJniObject TAG_GPS_PROCESSING_METHOD();
		static QAndroidJniObject TAG_GPS_SATELLITES();
		static QAndroidJniObject TAG_GPS_SPEED();
		static QAndroidJniObject TAG_GPS_SPEED_REF();
		static QAndroidJniObject TAG_GPS_STATUS();
		static QAndroidJniObject TAG_GPS_TIMESTAMP();
		static QAndroidJniObject TAG_GPS_TRACK();
		static QAndroidJniObject TAG_GPS_TRACK_REF();
		static QAndroidJniObject TAG_GPS_VERSION_ID();
		static QAndroidJniObject TAG_IMAGE_DESCRIPTION();
		static QAndroidJniObject TAG_IMAGE_LENGTH();
		static QAndroidJniObject TAG_IMAGE_UNIQUE_ID();
		static QAndroidJniObject TAG_IMAGE_WIDTH();
		static QAndroidJniObject TAG_INTEROPERABILITY_INDEX();
		static QAndroidJniObject TAG_ISO();
		static QAndroidJniObject TAG_ISO_SPEED_RATINGS();
		static QAndroidJniObject TAG_JPEG_INTERCHANGE_FORMAT();
		static QAndroidJniObject TAG_JPEG_INTERCHANGE_FORMAT_LENGTH();
		static QAndroidJniObject TAG_LIGHT_SOURCE();
		static QAndroidJniObject TAG_MAKE();
		static QAndroidJniObject TAG_MAKER_NOTE();
		static QAndroidJniObject TAG_MAX_APERTURE_VALUE();
		static QAndroidJniObject TAG_METERING_MODE();
		static QAndroidJniObject TAG_MODEL();
		static QAndroidJniObject TAG_NEW_SUBFILE_TYPE();
		static QAndroidJniObject TAG_OECF();
		static QAndroidJniObject TAG_ORF_ASPECT_FRAME();
		static QAndroidJniObject TAG_ORF_PREVIEW_IMAGE_LENGTH();
		static QAndroidJniObject TAG_ORF_PREVIEW_IMAGE_START();
		static QAndroidJniObject TAG_ORF_THUMBNAIL_IMAGE();
		static QAndroidJniObject TAG_ORIENTATION();
		static QAndroidJniObject TAG_PHOTOMETRIC_INTERPRETATION();
		static QAndroidJniObject TAG_PIXEL_X_DIMENSION();
		static QAndroidJniObject TAG_PIXEL_Y_DIMENSION();
		static QAndroidJniObject TAG_PLANAR_CONFIGURATION();
		static QAndroidJniObject TAG_PRIMARY_CHROMATICITIES();
		static QAndroidJniObject TAG_REFERENCE_BLACK_WHITE();
		static QAndroidJniObject TAG_RELATED_SOUND_FILE();
		static QAndroidJniObject TAG_RESOLUTION_UNIT();
		static QAndroidJniObject TAG_ROWS_PER_STRIP();
		static QAndroidJniObject TAG_RW2_ISO();
		static QAndroidJniObject TAG_RW2_JPG_FROM_RAW();
		static QAndroidJniObject TAG_RW2_SENSOR_BOTTOM_BORDER();
		static QAndroidJniObject TAG_RW2_SENSOR_LEFT_BORDER();
		static QAndroidJniObject TAG_RW2_SENSOR_RIGHT_BORDER();
		static QAndroidJniObject TAG_RW2_SENSOR_TOP_BORDER();
		static QAndroidJniObject TAG_SAMPLES_PER_PIXEL();
		static QAndroidJniObject TAG_SATURATION();
		static QAndroidJniObject TAG_SCENE_CAPTURE_TYPE();
		static QAndroidJniObject TAG_SCENE_TYPE();
		static QAndroidJniObject TAG_SENSING_METHOD();
		static QAndroidJniObject TAG_SHARPNESS();
		static QAndroidJniObject TAG_SHUTTER_SPEED_VALUE();
		static QAndroidJniObject TAG_SOFTWARE();
		static QAndroidJniObject TAG_SPATIAL_FREQUENCY_RESPONSE();
		static QAndroidJniObject TAG_SPECTRAL_SENSITIVITY();
		static QAndroidJniObject TAG_STRIP_BYTE_COUNTS();
		static QAndroidJniObject TAG_STRIP_OFFSETS();
		static QAndroidJniObject TAG_SUBFILE_TYPE();
		static QAndroidJniObject TAG_SUBJECT_AREA();
		static QAndroidJniObject TAG_SUBJECT_DISTANCE();
		static QAndroidJniObject TAG_SUBJECT_DISTANCE_RANGE();
		static QAndroidJniObject TAG_SUBJECT_LOCATION();
		static QAndroidJniObject TAG_SUBSEC_TIME();
		static QAndroidJniObject TAG_SUBSEC_TIME_DIG();
		static QAndroidJniObject TAG_SUBSEC_TIME_DIGITIZED();
		static QAndroidJniObject TAG_SUBSEC_TIME_ORIG();
		static QAndroidJniObject TAG_SUBSEC_TIME_ORIGINAL();
		static QAndroidJniObject TAG_THUMBNAIL_IMAGE_LENGTH();
		static QAndroidJniObject TAG_THUMBNAIL_IMAGE_WIDTH();
		static QAndroidJniObject TAG_TRANSFER_FUNCTION();
		static QAndroidJniObject TAG_USER_COMMENT();
		static QAndroidJniObject TAG_WHITE_BALANCE();
		static QAndroidJniObject TAG_WHITE_POINT();
		static QAndroidJniObject TAG_XMP();
		static QAndroidJniObject TAG_X_RESOLUTION();
		static QAndroidJniObject TAG_Y_CB_CR_COEFFICIENTS();
		static QAndroidJniObject TAG_Y_CB_CR_POSITIONING();
		static QAndroidJniObject TAG_Y_CB_CR_SUB_SAMPLING();
		static QAndroidJniObject TAG_Y_RESOLUTION();
		static jint WHITEBALANCE_AUTO();
		static jint WHITEBALANCE_MANUAL();
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::io::FileDescriptor arg0);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::io::File arg0);
		
		// Methods
		QAndroidJniObject getAttribute(jstring arg0);
		void setAttribute(jstring arg0, jstring arg1);
		jdouble getAltitude(jdouble arg0);
		jint getAttributeInt(jstring arg0, jint arg1);
		jdouble getAttributeDouble(jstring arg0, jdouble arg1);
		void saveAttributes();
		jboolean hasThumbnail();
		jboolean hasAttribute(jstring arg0);
		QAndroidJniObject getThumbnailBytes();
		QAndroidJniObject getThumbnailBitmap();
		jboolean isThumbnailCompressed();
		QAndroidJniObject getThumbnailRange();
		QAndroidJniObject getAttributeRange(jstring arg0);
		QAndroidJniObject getAttributeBytes(jstring arg0);
		jboolean getLatLong(jfloatArray arg0);
		QAndroidJniObject getThumbnail();
	};
} // namespace __jni_impl::android::media

#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "../../java/io/File.hpp"
#include "../graphics/Bitmap.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint ExifInterface::ORIENTATION_FLIP_HORIZONTAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_FLIP_HORIZONTAL");
	}
	jint ExifInterface::ORIENTATION_FLIP_VERTICAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_FLIP_VERTICAL");
	}
	jint ExifInterface::ORIENTATION_NORMAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_NORMAL");
	}
	jint ExifInterface::ORIENTATION_ROTATE_180()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_180");
	}
	jint ExifInterface::ORIENTATION_ROTATE_270()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_270");
	}
	jint ExifInterface::ORIENTATION_ROTATE_90()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_ROTATE_90");
	}
	jint ExifInterface::ORIENTATION_TRANSPOSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_TRANSPOSE");
	}
	jint ExifInterface::ORIENTATION_TRANSVERSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_TRANSVERSE");
	}
	jint ExifInterface::ORIENTATION_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"ORIENTATION_UNDEFINED");
	}
	QAndroidJniObject ExifInterface::TAG_APERTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_APERTURE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_APERTURE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_APERTURE_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ARTIST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_BITS_PER_SAMPLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_BITS_PER_SAMPLE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_BRIGHTNESS_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_BRIGHTNESS_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_CFA_PATTERN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CFA_PATTERN",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_COLOR_SPACE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COLOR_SPACE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_COMPONENTS_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPONENTS_CONFIGURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_COMPRESSED_BITS_PER_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPRESSED_BITS_PER_PIXEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_COMPRESSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COMPRESSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_CONTRAST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CONTRAST",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_COPYRIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_COPYRIGHT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_CUSTOM_RENDERED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_CUSTOM_RENDERED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DATETIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DATETIME_DIGITIZED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME_DIGITIZED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DATETIME_ORIGINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DATETIME_ORIGINAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DEFAULT_CROP_SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DEFAULT_CROP_SIZE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DEVICE_SETTING_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DEVICE_SETTING_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DIGITAL_ZOOM_RATIO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DIGITAL_ZOOM_RATIO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_DNG_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_DNG_VERSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXIF_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXIF_VERSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXPOSURE_BIAS_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_BIAS_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXPOSURE_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXPOSURE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXPOSURE_PROGRAM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_PROGRAM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_EXPOSURE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_EXPOSURE_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FILE_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FILE_SOURCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FLASH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FLASHPIX_VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASHPIX_VERSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FLASH_ENERGY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FLASH_ENERGY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FOCAL_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FOCAL_LENGTH_IN_35MM_FILM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_LENGTH_IN_35MM_FILM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FOCAL_PLANE_RESOLUTION_UNIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_RESOLUTION_UNIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FOCAL_PLANE_X_RESOLUTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_X_RESOLUTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_FOCAL_PLANE_Y_RESOLUTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_FOCAL_PLANE_Y_RESOLUTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_F_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_F_NUMBER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GAIN_CONTROL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GAIN_CONTROL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_ALTITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_ALTITUDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_ALTITUDE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_ALTITUDE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_AREA_INFORMATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_AREA_INFORMATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DATESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DATESTAMP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_BEARING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_BEARING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_BEARING_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_BEARING_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_DISTANCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_DISTANCE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_DISTANCE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_LATITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LATITUDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_LATITUDE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LATITUDE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_LONGITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LONGITUDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DEST_LONGITUDE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DEST_LONGITUDE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DIFFERENTIAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DIFFERENTIAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_DOP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_DOP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_IMG_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_IMG_DIRECTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_IMG_DIRECTION_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_IMG_DIRECTION_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_LATITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LATITUDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_LATITUDE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LATITUDE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_LONGITUDE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LONGITUDE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_LONGITUDE_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_LONGITUDE_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_MAP_DATUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_MAP_DATUM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_MEASURE_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_MEASURE_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_PROCESSING_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_PROCESSING_METHOD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_SATELLITES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SATELLITES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_SPEED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SPEED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_SPEED_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_SPEED_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_STATUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_STATUS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_TIMESTAMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TIMESTAMP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_TRACK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TRACK",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_TRACK_REF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_TRACK_REF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_GPS_VERSION_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_GPS_VERSION_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_IMAGE_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_DESCRIPTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_IMAGE_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_IMAGE_UNIQUE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_UNIQUE_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_IMAGE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_IMAGE_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_INTEROPERABILITY_INDEX()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_INTEROPERABILITY_INDEX",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ISO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ISO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ISO_SPEED_RATINGS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ISO_SPEED_RATINGS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_JPEG_INTERCHANGE_FORMAT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_JPEG_INTERCHANGE_FORMAT_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_JPEG_INTERCHANGE_FORMAT_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_LIGHT_SOURCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_LIGHT_SOURCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_MAKE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAKE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_MAKER_NOTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAKER_NOTE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_MAX_APERTURE_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MAX_APERTURE_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_METERING_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_METERING_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_MODEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_MODEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_NEW_SUBFILE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_NEW_SUBFILE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_OECF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_OECF",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ORF_ASPECT_FRAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_ASPECT_FRAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ORF_PREVIEW_IMAGE_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_PREVIEW_IMAGE_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ORF_PREVIEW_IMAGE_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_PREVIEW_IMAGE_START",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ORF_THUMBNAIL_IMAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORF_THUMBNAIL_IMAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ORIENTATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ORIENTATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_PHOTOMETRIC_INTERPRETATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PHOTOMETRIC_INTERPRETATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_PIXEL_X_DIMENSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PIXEL_X_DIMENSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_PIXEL_Y_DIMENSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PIXEL_Y_DIMENSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_PLANAR_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PLANAR_CONFIGURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_PRIMARY_CHROMATICITIES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_PRIMARY_CHROMATICITIES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_REFERENCE_BLACK_WHITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_REFERENCE_BLACK_WHITE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RELATED_SOUND_FILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RELATED_SOUND_FILE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RESOLUTION_UNIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RESOLUTION_UNIT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_ROWS_PER_STRIP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_ROWS_PER_STRIP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_ISO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_ISO",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_JPG_FROM_RAW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_JPG_FROM_RAW",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_SENSOR_BOTTOM_BORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_BOTTOM_BORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_SENSOR_LEFT_BORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_LEFT_BORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_SENSOR_RIGHT_BORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_RIGHT_BORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_RW2_SENSOR_TOP_BORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_RW2_SENSOR_TOP_BORDER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SAMPLES_PER_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SAMPLES_PER_PIXEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SATURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SATURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SCENE_CAPTURE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SCENE_CAPTURE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SCENE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SCENE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SENSING_METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SENSING_METHOD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SHARPNESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SHARPNESS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SHUTTER_SPEED_VALUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SHUTTER_SPEED_VALUE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SOFTWARE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SOFTWARE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SPATIAL_FREQUENCY_RESPONSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SPATIAL_FREQUENCY_RESPONSE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SPECTRAL_SENSITIVITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SPECTRAL_SENSITIVITY",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_STRIP_BYTE_COUNTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_STRIP_BYTE_COUNTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_STRIP_OFFSETS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_STRIP_OFFSETS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBFILE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBFILE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBJECT_AREA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_AREA",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBJECT_DISTANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_DISTANCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBJECT_DISTANCE_RANGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_DISTANCE_RANGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBJECT_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBJECT_LOCATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBSEC_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBSEC_TIME_DIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_DIG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBSEC_TIME_DIGITIZED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_DIGITIZED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBSEC_TIME_ORIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_ORIG",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_SUBSEC_TIME_ORIGINAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_SUBSEC_TIME_ORIGINAL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_THUMBNAIL_IMAGE_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_THUMBNAIL_IMAGE_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_THUMBNAIL_IMAGE_WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_THUMBNAIL_IMAGE_WIDTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_TRANSFER_FUNCTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_TRANSFER_FUNCTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_USER_COMMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_USER_COMMENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_WHITE_BALANCE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_WHITE_BALANCE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_WHITE_POINT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_WHITE_POINT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_XMP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_XMP",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_X_RESOLUTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_X_RESOLUTION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_Y_CB_CR_COEFFICIENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_COEFFICIENTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_Y_CB_CR_POSITIONING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_POSITIONING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_Y_CB_CR_SUB_SAMPLING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_CB_CR_SUB_SAMPLING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject ExifInterface::TAG_Y_RESOLUTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.ExifInterface",
			"TAG_Y_RESOLUTION",
			"Ljava/lang/String;");
	}
	jint ExifInterface::WHITEBALANCE_AUTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"WHITEBALANCE_AUTO");
	}
	jint ExifInterface::WHITEBALANCE_MANUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.ExifInterface",
			"WHITEBALANCE_MANUAL");
	}
	
	// Constructors
	void ExifInterface::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ExifInterface",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object());
	}
	void ExifInterface::__constructor(__jni_impl::java::io::FileDescriptor arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ExifInterface",
			"(Ljava/io/FileDescriptor;)V",
			arg0.__jniObject().object());
	}
	void ExifInterface::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ExifInterface",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void ExifInterface::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.ExifInterface",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject ExifInterface::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void ExifInterface::setAttribute(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setAttribute",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	jdouble ExifInterface::getAltitude(jdouble arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getAltitude",
			"(D)D",
			arg0);
	}
	jint ExifInterface::getAttributeInt(jstring arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getAttributeInt",
			"(Ljava/lang/String;I)I",
			arg0,
			arg1);
	}
	jdouble ExifInterface::getAttributeDouble(jstring arg0, jdouble arg1)
	{
		return __thiz.callMethod<jdouble>(
			"getAttributeDouble",
			"(Ljava/lang/String;D)D",
			arg0,
			arg1);
	}
	void ExifInterface::saveAttributes()
	{
		__thiz.callMethod<void>(
			"saveAttributes",
			"()V");
	}
	jboolean ExifInterface::hasThumbnail()
	{
		return __thiz.callMethod<jboolean>(
			"hasThumbnail",
			"()Z");
	}
	jboolean ExifInterface::hasAttribute(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasAttribute",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject ExifInterface::getThumbnailBytes()
	{
		return __thiz.callObjectMethod(
			"getThumbnailBytes",
			"()[B");
	}
	QAndroidJniObject ExifInterface::getThumbnailBitmap()
	{
		return __thiz.callObjectMethod(
			"getThumbnailBitmap",
			"()Landroid/graphics/Bitmap;");
	}
	jboolean ExifInterface::isThumbnailCompressed()
	{
		return __thiz.callMethod<jboolean>(
			"isThumbnailCompressed",
			"()Z");
	}
	QAndroidJniObject ExifInterface::getThumbnailRange()
	{
		return __thiz.callObjectMethod(
			"getThumbnailRange",
			"()[J");
	}
	QAndroidJniObject ExifInterface::getAttributeRange(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributeRange",
			"(Ljava/lang/String;)[J",
			arg0);
	}
	QAndroidJniObject ExifInterface::getAttributeBytes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributeBytes",
			"(Ljava/lang/String;)[B",
			arg0);
	}
	jboolean ExifInterface::getLatLong(jfloatArray arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getLatLong",
			"([F)Z",
			arg0);
	}
	QAndroidJniObject ExifInterface::getThumbnail()
	{
		return __thiz.callObjectMethod(
			"getThumbnail",
			"()[B");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class ExifInterface : public __jni_impl::android::media::ExifInterface
	{
	public:
		ExifInterface(QAndroidJniObject obj) { __thiz = obj; }
		ExifInterface(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		ExifInterface(__jni_impl::java::io::FileDescriptor arg0)
		{
			__constructor(
				arg0);
		}
		ExifInterface(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ExifInterface(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_EXIFINTERFACE

