#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.hpp"
#include "./TimeKeyListener.hpp"

namespace android::text::method
{
	// Fields
	JCharArray TimeKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.TimeKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// QJniObject forward
	TimeKeyListener::TimeKeyListener(QJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	TimeKeyListener::TimeKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.TimeKeyListener",
			"()V"
		) {}
	TimeKeyListener::TimeKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.TimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::text::method::TimeKeyListener TimeKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"()Landroid/text/method/TimeKeyListener;"
		);
	}
	android::text::method::TimeKeyListener TimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/TimeKeyListener;",
			arg0.object()
		);
	}
	jint TimeKeyListener::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

