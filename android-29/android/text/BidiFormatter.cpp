#include "../../java/util/Locale.hpp"
#include "./BidiFormatter.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	BidiFormatter::BidiFormatter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject BidiFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
		);
	}
	QAndroidJniObject BidiFormatter::getInstance(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Z)Landroid/text/BidiFormatter;",
			arg0
		);
	}
	QAndroidJniObject BidiFormatter::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.object()
		);
	}
	jboolean BidiFormatter::getStereoReset()
	{
		return callMethod<jboolean>(
			"getStereoReset",
			"()Z"
		);
	}
	jboolean BidiFormatter::isRtl(jstring arg0)
	{
		return callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean BidiFormatter::isRtlContext()
	{
		return callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			arg0,
			arg1.object()
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, jboolean arg1)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __JniBaseClass arg1, jboolean arg2)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1.object(),
			arg2
		).object<jstring>();
	}
} // namespace android::text

