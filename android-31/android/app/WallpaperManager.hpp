#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class WallpaperColors;
}
namespace android::app
{
	class WallpaperInfo;
}
namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Handler;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
namespace java::io
{
	class InputStream;
}

namespace android::app
{
	class WallpaperManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_LIVE_WALLPAPER();
		static jstring ACTION_CROP_AND_SET_WALLPAPER();
		static jstring ACTION_LIVE_WALLPAPER_CHOOSER();
		static jstring COMMAND_DROP();
		static jstring COMMAND_SECONDARY_TAP();
		static jstring COMMAND_TAP();
		static jstring EXTRA_LIVE_WALLPAPER_COMPONENT();
		static jint FLAG_LOCK();
		static jint FLAG_SYSTEM();
		static jstring WALLPAPER_PREVIEW_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WallpaperManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WallpaperManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::WallpaperManager getInstance(android::content::Context arg0);
		void addOnColorsChangedListener(__JniBaseClass arg0, android::os::Handler arg1);
		void clear();
		void clear(jint arg0);
		void clearWallpaper();
		void clearWallpaperOffsets(__JniBaseClass arg0);
		void forgetLoadedWallpaper();
		android::graphics::drawable::Drawable getBuiltInDrawable();
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0);
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4);
		android::graphics::drawable::Drawable getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5);
		android::content::Intent getCropAndSetWallpaperIntent(android::net::Uri arg0);
		jint getDesiredMinimumHeight();
		jint getDesiredMinimumWidth();
		android::graphics::drawable::Drawable getDrawable();
		android::graphics::drawable::Drawable getFastDrawable();
		android::app::WallpaperColors getWallpaperColors(jint arg0);
		android::os::ParcelFileDescriptor getWallpaperFile(jint arg0);
		jint getWallpaperId(jint arg0);
		android::app::WallpaperInfo getWallpaperInfo();
		jboolean hasResourceWallpaper(jint arg0);
		jboolean isSetWallpaperAllowed();
		jboolean isWallpaperSupported();
		android::graphics::drawable::Drawable peekDrawable();
		android::graphics::drawable::Drawable peekFastDrawable();
		void removeOnColorsChangedListener(__JniBaseClass arg0);
		void sendWallpaperCommand(__JniBaseClass arg0, jstring arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		jint setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2);
		jint setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3);
		void setBitmap(android::graphics::Bitmap arg0);
		void setDisplayPadding(android::graphics::Rect arg0);
		jint setResource(jint arg0, jint arg1);
		void setResource(jint arg0);
		jint setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2);
		jint setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3);
		void setStream(java::io::InputStream arg0);
		void setWallpaperOffsetSteps(jfloat arg0, jfloat arg1);
		void setWallpaperOffsets(__JniBaseClass arg0, jfloat arg1, jfloat arg2);
		void suggestDesiredDimensions(jint arg0, jint arg1);
	};
} // namespace android::app
