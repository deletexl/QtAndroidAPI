#include "../../JString.hpp"
#include "./LoginFilter.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	LoginFilter::LoginFilter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString LoginFilter::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	jboolean LoginFilter::isAllowed(jchar arg0) const
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
	void LoginFilter::onInvalidCharacter(jchar arg0) const
	{
		callMethod<void>(
			"onInvalidCharacter",
			"(C)V",
			arg0
		);
	}
	void LoginFilter::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	void LoginFilter::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::text

