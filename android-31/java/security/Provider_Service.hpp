#pragma once

#include "../../JObject.hpp"

namespace java::lang
{
	class Boolean;
}
namespace java::lang::ref
{
	class Reference;
}
namespace java::security
{
	class Provider;
}

namespace java::security
{
	class Provider_Service : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Provider_Service(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Provider_Service(QAndroidJniObject obj);
		
		// Constructors
		Provider_Service(java::security::Provider arg0, jstring arg1, jstring arg2, jstring arg3, JObject arg4, JObject arg5);
		
		// Methods
		jstring getAlgorithm();
		jstring getAttribute(jstring arg0);
		jstring getClassName();
		java::security::Provider getProvider();
		jstring getType();
		jobject newInstance(jobject arg0);
		jboolean supportsParameter(jobject arg0);
		jstring toString();
	};
} // namespace java::security

