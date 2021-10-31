#include "./CharSequenceTransformation.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./CharSequenceTransformation_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2)
		: __JniBaseClass(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	QAndroidJniObject CharSequenceTransformation_Builder::addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jstring arg2)
	{
		return callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	QAndroidJniObject CharSequenceTransformation_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/CharSequenceTransformation;"
		);
	}
} // namespace android::service::autofill

