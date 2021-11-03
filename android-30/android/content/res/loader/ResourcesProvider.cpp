#include "../../Context.hpp"
#include "../../../os/ParcelFileDescriptor.hpp"
#include "./ResourcesProvider.hpp"

namespace android::content::res::loader
{
	// Fields
	
	// QAndroidJniObject forward
	ResourcesProvider::ResourcesProvider(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::content::res::loader::ResourcesProvider ResourcesProvider::empty(JObject arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"empty",
			"(Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object()
		);
	}
	android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromApk(android::os::ParcelFileDescriptor arg0)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromApk",
			"(Landroid/os/ParcelFileDescriptor;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object()
		);
	}
	android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromApk(android::os::ParcelFileDescriptor arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromApk",
			"(Landroid/os/ParcelFileDescriptor;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1.object()
		);
	}
	android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromDirectory(jstring arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromDirectory",
			"(Ljava/lang/String;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0,
			arg1.object()
		);
	}
	android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromSplit(android::content::Context arg0, jstring arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromSplit",
			"(Landroid/content/Context;Ljava/lang/String;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1
		);
	}
	android::content::res::loader::ResourcesProvider ResourcesProvider::loadFromTable(android::os::ParcelFileDescriptor arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.content.res.loader.ResourcesProvider",
			"loadFromTable",
			"(Landroid/os/ParcelFileDescriptor;Landroid/content/res/loader/AssetsProvider;)Landroid/content/res/loader/ResourcesProvider;",
			arg0.object(),
			arg1.object()
		);
	}
	void ResourcesProvider::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
} // namespace android::content::res::loader

