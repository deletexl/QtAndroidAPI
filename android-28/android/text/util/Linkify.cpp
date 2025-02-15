#include "../../../JArray.hpp"
#include "../../widget/TextView.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./Linkify.hpp"

namespace android::text::util
{
	// Fields
	jint Linkify::ALL()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"ALL"
		);
	}
	jint Linkify::EMAIL_ADDRESSES()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"EMAIL_ADDRESSES"
		);
	}
	jint Linkify::MAP_ADDRESSES()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"MAP_ADDRESSES"
		);
	}
	jint Linkify::PHONE_NUMBERS()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"PHONE_NUMBERS"
		);
	}
	jint Linkify::WEB_URLS()
	{
		return getStaticField<jint>(
			"android.text.util.Linkify",
			"WEB_URLS"
		);
	}
	JObject Linkify::sPhoneNumberMatchFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;"
		);
	}
	JObject Linkify::sPhoneNumberTransformFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sPhoneNumberTransformFilter",
			"Landroid/text/util/Linkify$TransformFilter;"
		);
	}
	JObject Linkify::sUrlMatchFilter()
	{
		return getStaticObjectField(
			"android.text.util.Linkify",
			"sUrlMatchFilter",
			"Landroid/text/util/Linkify$MatchFilter;"
		);
	}
	
	// QJniObject forward
	Linkify::Linkify(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Linkify::Linkify()
		: JObject(
			"android.text.util.Linkify",
			"()V"
		) {}
	
	// Methods
	jboolean Linkify::addLinks(JObject arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Linkify::addLinks(android::widget::TextView arg0, jint arg1)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;I)Z",
			arg0.object(),
			arg1
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2, JObject arg3, JObject arg4)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	jboolean Linkify::addLinks(JObject arg0, java::util::regex::Pattern arg1, JString arg2, JArray arg3, JObject arg4, JObject arg5)
	{
		return callStaticMethod<jboolean>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/text/Spannable;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object(),
			arg5.object()
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2, JObject arg3, JObject arg4)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	void Linkify::addLinks(android::widget::TextView arg0, java::util::regex::Pattern arg1, JString arg2, JArray arg3, JObject arg4, JObject arg5)
	{
		callStaticMethod<void>(
			"android.text.util.Linkify",
			"addLinks",
			"(Landroid/widget/TextView;Ljava/util/regex/Pattern;Ljava/lang/String;[Ljava/lang/String;Landroid/text/util/Linkify$MatchFilter;Landroid/text/util/Linkify$TransformFilter;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jarray>(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::text::util

