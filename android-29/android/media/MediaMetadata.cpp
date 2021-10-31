#include "../graphics/Bitmap.hpp"
#include "./MediaDescription.hpp"
#include "./Rating.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./MediaMetadata.hpp"

namespace android::media
{
	// Fields
	QAndroidJniObject MediaMetadata::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ALBUM_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ALBUM_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ARTIST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ARTIST",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_ART_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_ART_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_AUTHOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_AUTHOR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_BT_FOLDER_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_BT_FOLDER_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPILATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPILATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_COMPOSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_COMPOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISC_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISC_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_DESCRIPTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_DESCRIPTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_ICON_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_ICON_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_SUBTITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_SUBTITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DISPLAY_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DISPLAY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_GENRE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_GENRE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_MEDIA_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_MEDIA_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_NUM_TRACKS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_NUM_TRACKS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_TRACK_NUMBER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_TRACK_NUMBER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_USER_RATING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_USER_RATING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_WRITER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_WRITER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaMetadata::METADATA_KEY_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.MediaMetadata",
			"METADATA_KEY_YEAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	MediaMetadata::MediaMetadata(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaMetadata::containsKey(jstring arg0)
	{
		return callMethod<jboolean>(
			"containsKey",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jint MediaMetadata::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean MediaMetadata::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getBitmap(jstring arg0)
	{
		return callObjectMethod(
			"getBitmap",
			"(Ljava/lang/String;)Landroid/graphics/Bitmap;",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/media/MediaDescription;"
		);
	}
	jlong MediaMetadata::getLong(jstring arg0)
	{
		return callMethod<jlong>(
			"getLong",
			"(Ljava/lang/String;)J",
			arg0
		);
	}
	QAndroidJniObject MediaMetadata::getRating(jstring arg0)
	{
		return callObjectMethod(
			"getRating",
			"(Ljava/lang/String;)Landroid/media/Rating;",
			arg0
		);
	}
	jstring MediaMetadata::getString(jstring arg0)
	{
		return callObjectMethod(
			"getString",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MediaMetadata::getText(jstring arg0)
	{
		return callObjectMethod(
			"getText",
			"(Ljava/lang/String;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint MediaMetadata::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject MediaMetadata::keySet()
	{
		return callObjectMethod(
			"keySet",
			"()Ljava/util/Set;"
		);
	}
	jint MediaMetadata::size()
	{
		return callMethod<jint>(
			"size",
			"()I"
		);
	}
	void MediaMetadata::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media

