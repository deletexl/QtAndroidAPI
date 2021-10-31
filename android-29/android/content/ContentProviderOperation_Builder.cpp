#include "./ContentProviderOperation.hpp"
#include "./ContentValues.hpp"
#include "../net/Uri.hpp"
#include "./ContentProviderOperation_Builder.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ContentProviderOperation_Builder::ContentProviderOperation_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ContentProviderOperation_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContentProviderOperation;"
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withExpectedCount(jint arg0)
	{
		return callObjectMethod(
			"withExpectedCount",
			"(I)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withSelection(jstring arg0, jarray arg1)
	{
		return callObjectMethod(
			"withSelection",
			"(Ljava/lang/String;[Ljava/lang/String;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withSelectionBackReference(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"withSelectionBackReference",
			"(II)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValue(jstring arg0, jobject arg1)
	{
		return callObjectMethod(
			"withValue",
			"(Ljava/lang/String;Ljava/lang/Object;)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReference(jstring arg0, jint arg1)
	{
		return callObjectMethod(
			"withValueBackReference",
			"(Ljava/lang/String;I)Landroid/content/ContentProviderOperation$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValueBackReferences(android::content::ContentValues arg0)
	{
		return callObjectMethod(
			"withValueBackReferences",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withValues(android::content::ContentValues arg0)
	{
		return callObjectMethod(
			"withValues",
			"(Landroid/content/ContentValues;)Landroid/content/ContentProviderOperation$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject ContentProviderOperation_Builder::withYieldAllowed(jboolean arg0)
	{
		return callObjectMethod(
			"withYieldAllowed",
			"(Z)Landroid/content/ContentProviderOperation$Builder;",
			arg0
		);
	}
} // namespace android::content

