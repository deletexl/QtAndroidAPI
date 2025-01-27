#include "../../../JString.hpp"
#include "./UCharacterDirection.hpp"

namespace android::icu::lang
{
	// Fields
	
	// QJniObject forward
	UCharacterDirection::UCharacterDirection(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString UCharacterDirection::toString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.icu.lang.UCharacterDirection",
			"toString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
} // namespace android::icu::lang

