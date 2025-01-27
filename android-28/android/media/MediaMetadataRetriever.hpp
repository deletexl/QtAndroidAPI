#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::media
{
	class MediaDataSource;
}
namespace android::media
{
	class MediaMetadataRetriever_BitmapParams;
}
namespace android::net
{
	class Uri;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::media
{
	class MediaMetadataRetriever : public JObject
	{
	public:
		// Fields
		static jint METADATA_KEY_ALBUM();
		static jint METADATA_KEY_ALBUMARTIST();
		static jint METADATA_KEY_ARTIST();
		static jint METADATA_KEY_AUTHOR();
		static jint METADATA_KEY_BITRATE();
		static jint METADATA_KEY_CAPTURE_FRAMERATE();
		static jint METADATA_KEY_CD_TRACK_NUMBER();
		static jint METADATA_KEY_COMPILATION();
		static jint METADATA_KEY_COMPOSER();
		static jint METADATA_KEY_DATE();
		static jint METADATA_KEY_DISC_NUMBER();
		static jint METADATA_KEY_DURATION();
		static jint METADATA_KEY_GENRE();
		static jint METADATA_KEY_HAS_AUDIO();
		static jint METADATA_KEY_HAS_IMAGE();
		static jint METADATA_KEY_HAS_VIDEO();
		static jint METADATA_KEY_IMAGE_COUNT();
		static jint METADATA_KEY_IMAGE_HEIGHT();
		static jint METADATA_KEY_IMAGE_PRIMARY();
		static jint METADATA_KEY_IMAGE_ROTATION();
		static jint METADATA_KEY_IMAGE_WIDTH();
		static jint METADATA_KEY_LOCATION();
		static jint METADATA_KEY_MIMETYPE();
		static jint METADATA_KEY_NUM_TRACKS();
		static jint METADATA_KEY_TITLE();
		static jint METADATA_KEY_VIDEO_FRAME_COUNT();
		static jint METADATA_KEY_VIDEO_HEIGHT();
		static jint METADATA_KEY_VIDEO_ROTATION();
		static jint METADATA_KEY_VIDEO_WIDTH();
		static jint METADATA_KEY_WRITER();
		static jint METADATA_KEY_YEAR();
		static jint OPTION_CLOSEST();
		static jint OPTION_CLOSEST_SYNC();
		static jint OPTION_NEXT_SYNC();
		static jint OPTION_PREVIOUS_SYNC();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaMetadataRetriever(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaMetadataRetriever(QJniObject obj);
		
		// Constructors
		MediaMetadataRetriever();
		
		// Methods
		JString extractMetadata(jint arg0) const;
		JByteArray getEmbeddedPicture() const;
		android::graphics::Bitmap getFrameAtIndex(jint arg0) const;
		android::graphics::Bitmap getFrameAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1) const;
		android::graphics::Bitmap getFrameAtTime() const;
		android::graphics::Bitmap getFrameAtTime(jlong arg0) const;
		android::graphics::Bitmap getFrameAtTime(jlong arg0, jint arg1) const;
		JObject getFramesAtIndex(jint arg0, jint arg1) const;
		JObject getFramesAtIndex(jint arg0, jint arg1, android::media::MediaMetadataRetriever_BitmapParams arg2) const;
		android::graphics::Bitmap getImageAtIndex(jint arg0) const;
		android::graphics::Bitmap getImageAtIndex(jint arg0, android::media::MediaMetadataRetriever_BitmapParams arg1) const;
		android::graphics::Bitmap getPrimaryImage() const;
		android::graphics::Bitmap getPrimaryImage(android::media::MediaMetadataRetriever_BitmapParams arg0) const;
		android::graphics::Bitmap getScaledFrameAtTime(jlong arg0, jint arg1, jint arg2, jint arg3) const;
		void release() const;
		void setDataSource(android::media::MediaDataSource arg0) const;
		void setDataSource(java::io::FileDescriptor arg0) const;
		void setDataSource(JString arg0) const;
		void setDataSource(android::content::Context arg0, android::net::Uri arg1) const;
		void setDataSource(JString arg0, JObject arg1) const;
		void setDataSource(java::io::FileDescriptor arg0, jlong arg1, jlong arg2) const;
	};
} // namespace android::media

