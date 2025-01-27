#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/FileInputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"
#include "../../../JString.hpp"
#include "./AssetFileDescriptor.hpp"

namespace android::content::res
{
	// Fields
	JObject AssetFileDescriptor::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.AssetFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong AssetFileDescriptor::UNKNOWN_LENGTH()
	{
		return getStaticField<jlong>(
			"android.content.res.AssetFileDescriptor",
			"UNKNOWN_LENGTH"
		);
	}
	
	// QJniObject forward
	AssetFileDescriptor::AssetFileDescriptor(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	AssetFileDescriptor::AssetFileDescriptor(android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, android::os::Bundle arg3)
		: JObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJLandroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		) {}
	
	// Methods
	void AssetFileDescriptor::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::io::FileInputStream AssetFileDescriptor::createInputStream() const
	{
		return callObjectMethod(
			"createInputStream",
			"()Ljava/io/FileInputStream;"
		);
	}
	java::io::FileOutputStream AssetFileDescriptor::createOutputStream() const
	{
		return callObjectMethod(
			"createOutputStream",
			"()Ljava/io/FileOutputStream;"
		);
	}
	jint AssetFileDescriptor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssetFileDescriptor::getDeclaredLength() const
	{
		return callMethod<jlong>(
			"getDeclaredLength",
			"()J"
		);
	}
	android::os::Bundle AssetFileDescriptor::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	java::io::FileDescriptor AssetFileDescriptor::getFileDescriptor() const
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getLength() const
	{
		return callMethod<jlong>(
			"getLength",
			"()J"
		);
	}
	android::os::ParcelFileDescriptor AssetFileDescriptor::getParcelFileDescriptor() const
	{
		return callObjectMethod(
			"getParcelFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getStartOffset() const
	{
		return callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	JString AssetFileDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AssetFileDescriptor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

