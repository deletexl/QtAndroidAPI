#include "./LoginFilter_UsernameFilterGeneric.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(QJniObject obj) : android::text::LoginFilter(obj) {}
	
	// Constructors
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric()
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"()V"
		) {}
	LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	jboolean LoginFilter_UsernameFilterGeneric::isAllowed(jchar arg0) const
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

