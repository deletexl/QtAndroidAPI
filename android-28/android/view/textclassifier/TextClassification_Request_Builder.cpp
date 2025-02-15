#include "../../os/LocaleList.hpp"
#include "./TextClassification_Request.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./TextClassification_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextClassification_Request_Builder::TextClassification_Request_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextClassification_Request_Builder::TextClassification_Request_Builder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.textclassifier.TextClassification$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	android::view::textclassifier::TextClassification_Request TextClassification_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification$Request;"
		);
	}
	android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setDefaultLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setReferenceTime(java::time::ZonedDateTime arg0) const
	{
		return callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

