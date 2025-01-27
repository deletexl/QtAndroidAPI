#pragma once

#include "../../util/AndroidException.hpp"

class JString;

namespace android::content::pm
{
	class PackageManager_NameNotFoundException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageManager_NameNotFoundException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_NameNotFoundException(QJniObject obj);
		
		// Constructors
		PackageManager_NameNotFoundException();
		PackageManager_NameNotFoundException(JString arg0);
		
		// Methods
	};
} // namespace android::content::pm

