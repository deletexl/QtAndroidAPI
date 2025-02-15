#include "../../graphics/Canvas.hpp"
#include "../../graphics/Paint.hpp"
#include "../../os/Parcel.hpp"
#include "../Layout.hpp"
#include "../../../JString.hpp"
#include "./BulletSpan.hpp"

namespace android::text::style
{
	// Fields
	jint BulletSpan::STANDARD_GAP_WIDTH()
	{
		return getStaticField<jint>(
			"android.text.style.BulletSpan",
			"STANDARD_GAP_WIDTH"
		);
	}
	
	// QJniObject forward
	BulletSpan::BulletSpan(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BulletSpan::BulletSpan()
		: JObject(
			"android.text.style.BulletSpan",
			"()V"
		) {}
	BulletSpan::BulletSpan(android::os::Parcel arg0)
		: JObject(
			"android.text.style.BulletSpan",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	BulletSpan::BulletSpan(jint arg0)
		: JObject(
			"android.text.style.BulletSpan",
			"(I)V",
			arg0
		) {}
	BulletSpan::BulletSpan(jint arg0, jint arg1)
		: JObject(
			"android.text.style.BulletSpan",
			"(II)V",
			arg0,
			arg1
		) {}
	BulletSpan::BulletSpan(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.text.style.BulletSpan",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint BulletSpan::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void BulletSpan::drawLeadingMargin(android::graphics::Canvas arg0, android::graphics::Paint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, JString arg7, jint arg8, jint arg9, jboolean arg10, android::text::Layout arg11) const
	{
		callMethod<void>(
			"drawLeadingMargin",
			"(Landroid/graphics/Canvas;Landroid/graphics/Paint;IIIIILjava/lang/CharSequence;IIZLandroid/text/Layout;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7.object<jstring>(),
			arg8,
			arg9,
			arg10,
			arg11.object()
		);
	}
	jint BulletSpan::getBulletRadius() const
	{
		return callMethod<jint>(
			"getBulletRadius",
			"()I"
		);
	}
	jint BulletSpan::getColor() const
	{
		return callMethod<jint>(
			"getColor",
			"()I"
		);
	}
	jint BulletSpan::getGapWidth() const
	{
		return callMethod<jint>(
			"getGapWidth",
			"()I"
		);
	}
	jint BulletSpan::getLeadingMargin(jboolean arg0) const
	{
		return callMethod<jint>(
			"getLeadingMargin",
			"(Z)I",
			arg0
		);
	}
	jint BulletSpan::getSpanTypeId() const
	{
		return callMethod<jint>(
			"getSpanTypeId",
			"()I"
		);
	}
	void BulletSpan::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::text::style

