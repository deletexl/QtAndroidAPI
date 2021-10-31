#include "../../os/Bundle.hpp"
#include "../../util/ArraySet.hpp"
#include "../../../java/util/ArrayList.hpp"
#include "./FillEventHistory_Event.hpp"

namespace android::service::autofill
{
	// Fields
	jint FillEventHistory_Event::TYPE_AUTHENTICATION_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_CONTEXT_COMMITTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_CONTEXT_COMMITTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_AUTHENTICATION_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_AUTHENTICATION_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_DATASET_SELECTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_DATASET_SELECTED"
		);
	}
	jint FillEventHistory_Event::TYPE_SAVE_SHOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillEventHistory$Event",
			"TYPE_SAVE_SHOWN"
		);
	}
	
	// QAndroidJniObject forward
	FillEventHistory_Event::FillEventHistory_Event(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject FillEventHistory_Event::getChangedFields()
	{
		return callObjectMethod(
			"getChangedFields",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getClientState()
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	jstring FillEventHistory_Event::getDatasetId()
	{
		return callObjectMethod(
			"getDatasetId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FillEventHistory_Event::getFieldsClassification()
	{
		return callObjectMethod(
			"getFieldsClassification",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getIgnoredDatasetIds()
	{
		return callObjectMethod(
			"getIgnoredDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getManuallyEnteredField()
	{
		return callObjectMethod(
			"getManuallyEnteredField",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject FillEventHistory_Event::getSelectedDatasetIds()
	{
		return callObjectMethod(
			"getSelectedDatasetIds",
			"()Ljava/util/Set;"
		);
	}
	jint FillEventHistory_Event::getType()
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	jstring FillEventHistory_Event::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::autofill

