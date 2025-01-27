#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AlteredCharSequence.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	AlteredCharSequence::AlteredCharSequence(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::text::AlteredCharSequence AlteredCharSequence::make(JString arg0, JCharArray arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.text.AlteredCharSequence",
			"make",
			"(Ljava/lang/CharSequence;[CII)Landroid/text/AlteredCharSequence;",
			arg0.object<jstring>(),
			arg1.object<jcharArray>(),
			arg2,
			arg3
		);
	}
	jchar AlteredCharSequence::charAt(jint arg0) const
	{
		return callMethod<jchar>(
			"charAt",
			"(I)C",
			arg0
		);
	}
	void AlteredCharSequence::getChars(jint arg0, jint arg1, JCharArray arg2, jint arg3) const
	{
		callMethod<void>(
			"getChars",
			"(II[CI)V",
			arg0,
			arg1,
			arg2.object<jcharArray>(),
			arg3
		);
	}
	jint AlteredCharSequence::length() const
	{
		return callMethod<jint>(
			"length",
			"()I"
		);
	}
	JString AlteredCharSequence::subSequence(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"subSequence",
			"(II)Ljava/lang/CharSequence;",
			arg0,
			arg1
		);
	}
	JString AlteredCharSequence::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::text

