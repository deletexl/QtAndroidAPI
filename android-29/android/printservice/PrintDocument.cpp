#include "../os/ParcelFileDescriptor.hpp"
#include "../print/PrintDocumentInfo.hpp"
#include "./PrintDocument.hpp"

namespace android::printservice
{
	// Fields
	
	// QAndroidJniObject forward
	PrintDocument::PrintDocument(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PrintDocument::getData()
	{
		return callObjectMethod(
			"getData",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	QAndroidJniObject PrintDocument::getInfo()
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintDocumentInfo;"
		);
	}
} // namespace android::printservice

