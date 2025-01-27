#pragma once

#include "../../../java/lang/IllegalStateException.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::admin
{
	class UnsafeStateException : public java::lang::IllegalStateException
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UnsafeStateException(const char *className, const char *sig, Ts...agv) : java::lang::IllegalStateException(className, sig, std::forward<Ts>(agv)...) {}
		UnsafeStateException(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getMessage() const;
		JObject getReasons() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::admin

