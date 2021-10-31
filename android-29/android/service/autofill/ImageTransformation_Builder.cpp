#include "./ImageTransformation.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./ImageTransformation_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	ImageTransformation_Builder::ImageTransformation_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ImageTransformation_Builder::ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2)
		: __JniBaseClass(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	ImageTransformation_Builder::ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2, jstring arg3)
		: __JniBaseClass(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	QAndroidJniObject ImageTransformation_Builder::addOption(java::util::regex::Pattern arg0, jint arg1)
	{
		return callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;I)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject ImageTransformation_Builder::addOption(java::util::regex::Pattern arg0, jint arg1, jstring arg2)
	{
		return callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ImageTransformation_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/ImageTransformation;"
		);
	}
} // namespace android::service::autofill

