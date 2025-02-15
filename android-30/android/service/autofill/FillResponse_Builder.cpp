#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/IntentSender.hpp"
#include "../../os/Bundle.hpp"
#include "./Dataset.hpp"
#include "./FillResponse.hpp"
#include "./InlinePresentation.hpp"
#include "./SaveInfo.hpp"
#include "./UserData.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./FillResponse_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	FillResponse_Builder::FillResponse_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FillResponse_Builder::FillResponse_Builder()
		: JObject(
			"android.service.autofill.FillResponse$Builder",
			"()V"
		) {}
	
	// Methods
	android::service::autofill::FillResponse_Builder FillResponse_Builder::addDataset(android::service::autofill::Dataset arg0) const
	{
		return callObjectMethod(
			"addDataset",
			"(Landroid/service/autofill/Dataset;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::FillResponse FillResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/FillResponse;"
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::disableAutofill(jlong arg0) const
	{
		return callObjectMethod(
			"disableAutofill",
			"(J)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2) const
	{
		return callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3) const
	{
		return callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setClientState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setClientState",
			"(Landroid/os/Bundle;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setFieldClassificationIds(JArray arg0) const
	{
		return callObjectMethod(
			"setFieldClassificationIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setFooter(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setFooter",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setHeader(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setHeader",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setIgnoredIds(JArray arg0) const
	{
		return callObjectMethod(
			"setIgnoredIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setPresentationCancelIds(JIntArray arg0) const
	{
		return callObjectMethod(
			"setPresentationCancelIds",
			"([I)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jintArray>()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setSaveInfo(android::service::autofill::SaveInfo arg0) const
	{
		return callObjectMethod(
			"setSaveInfo",
			"(Landroid/service/autofill/SaveInfo;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::FillResponse_Builder FillResponse_Builder::setUserData(android::service::autofill::UserData arg0) const
	{
		return callObjectMethod(
			"setUserData",
			"(Landroid/service/autofill/UserData;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

