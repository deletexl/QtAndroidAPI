#include "./PrintAttributes.hpp"
#include "./PrintDocumentAdapter.hpp"
#include "./PrintJob.hpp"
#include "../../JString.hpp"
#include "./PrintManager.hpp"

namespace android::print
{
	// Fields
	
	// QJniObject forward
	PrintManager::PrintManager(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject PrintManager::getPrintJobs() const
	{
		return callObjectMethod(
			"getPrintJobs",
			"()Ljava/util/List;"
		);
	}
	android::print::PrintJob PrintManager::print(JString arg0, android::print::PrintDocumentAdapter arg1, android::print::PrintAttributes arg2) const
	{
		return callObjectMethod(
			"print",
			"(Ljava/lang/String;Landroid/print/PrintDocumentAdapter;Landroid/print/PrintAttributes;)Landroid/print/PrintJob;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::print

