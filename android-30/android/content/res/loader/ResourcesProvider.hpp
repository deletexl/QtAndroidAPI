#pragma once

#include "../../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class ParcelFileDescriptor;
}

namespace android::content::res::loader
{
	class ResourcesProvider : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResourcesProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ResourcesProvider(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::content::res::loader::ResourcesProvider empty(JObject arg0);
		static android::content::res::loader::ResourcesProvider loadFromApk(android::os::ParcelFileDescriptor arg0);
		static android::content::res::loader::ResourcesProvider loadFromApk(android::os::ParcelFileDescriptor arg0, JObject arg1);
		static android::content::res::loader::ResourcesProvider loadFromDirectory(jstring arg0, JObject arg1);
		static android::content::res::loader::ResourcesProvider loadFromSplit(android::content::Context arg0, jstring arg1);
		static android::content::res::loader::ResourcesProvider loadFromTable(android::os::ParcelFileDescriptor arg0, JObject arg1);
		void close();
	};
} // namespace android::content::res::loader

