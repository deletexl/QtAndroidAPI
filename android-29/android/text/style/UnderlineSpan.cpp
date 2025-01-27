#include "../../os/Parcel.hpp"
#include "../TextPaint.hpp"
#include "./UnderlineSpan.hpp"

namespace android::text::style
{
	// Fields
	
	// QJniObject forward
	UnderlineSpan::UnderlineSpan(QJniObject obj) : android::text::style::CharacterStyle(obj) {}
	
	// Constructors
	UnderlineSpan::UnderlineSpan()
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"()V"
		) {}
	UnderlineSpan::UnderlineSpan(android::os::Parcel arg0)
		: android::text::style::CharacterStyle(
			"android.text.style.UnderlineSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint UnderlineSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint UnderlineSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void UnderlineSpan::updateDrawState(android::text::TextPaint arg0) const
	{
		callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.object()
		);
	}
	void UnderlineSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

