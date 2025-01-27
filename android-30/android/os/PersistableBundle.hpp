#pragma once

#include "./BaseBundle.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;

namespace android::os
{
	class PersistableBundle : public android::os::BaseBundle
	{
	public:
		// Fields
		static JObject CREATOR();
		static android::os::PersistableBundle EMPTY();
		
		// QJniObject forward
		template<typename ...Ts> explicit PersistableBundle(const char *className, const char *sig, Ts...agv) : android::os::BaseBundle(className, sig, std::forward<Ts>(agv)...) {}
		PersistableBundle(QJniObject obj);
		
		// Constructors
		PersistableBundle();
		PersistableBundle(android::os::PersistableBundle &arg0);
		PersistableBundle(jint arg0);
		
		// Methods
		static android::os::PersistableBundle readFromStream(java::io::InputStream arg0);
		JObject clone() const;
		android::os::PersistableBundle deepCopy() const;
		jint describeContents() const;
		android::os::PersistableBundle getPersistableBundle(JString arg0) const;
		void putPersistableBundle(JString arg0, android::os::PersistableBundle arg1) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
		void writeToStream(java::io::OutputStream arg0) const;
	};
} // namespace android::os

