#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class AssetManager;
}
namespace java::io
{
	class File;
}

namespace android::graphics
{
	class Typeface : public __JniBaseClass
	{
	public:
		// Fields
		static jint BOLD();
		static jint BOLD_ITALIC();
		static QAndroidJniObject DEFAULT();
		static QAndroidJniObject DEFAULT_BOLD();
		static jint ITALIC();
		static QAndroidJniObject MONOSPACE();
		static jint NORMAL();
		static QAndroidJniObject SANS_SERIF();
		static QAndroidJniObject SERIF();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Typeface(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Typeface(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject create(android::graphics::Typeface arg0, jint arg1);
		static QAndroidJniObject create(jstring arg0, jint arg1);
		static QAndroidJniObject create(android::graphics::Typeface arg0, jint arg1, jboolean arg2);
		static QAndroidJniObject createFromAsset(android::content::res::AssetManager arg0, jstring arg1);
		static QAndroidJniObject createFromFile(java::io::File arg0);
		static QAndroidJniObject createFromFile(jstring arg0);
		static QAndroidJniObject defaultFromStyle(jint arg0);
		jboolean equals(jobject arg0);
		jint getStyle();
		jint getWeight();
		jint hashCode();
		jboolean isBold();
		jboolean isItalic();
	};
} // namespace android::graphics

