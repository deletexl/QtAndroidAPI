#include "../os/Parcel.hpp"
#include "./HardwareBuffer.hpp"

namespace android::hardware
{
	// Fields
	jint HardwareBuffer::BLOB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"BLOB"
		);
	}
	QAndroidJniObject HardwareBuffer::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.hardware.HardwareBuffer",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint HardwareBuffer::DS_24UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_24UI8"
		);
	}
	jint HardwareBuffer::DS_FP32UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"DS_FP32UI8"
		);
	}
	jint HardwareBuffer::D_16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_16"
		);
	}
	jint HardwareBuffer::D_24()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_24"
		);
	}
	jint HardwareBuffer::D_FP32()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"D_FP32"
		);
	}
	jint HardwareBuffer::RGBA_1010102()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_1010102"
		);
	}
	jint HardwareBuffer::RGBA_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_8888"
		);
	}
	jint HardwareBuffer::RGBA_FP16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBA_FP16"
		);
	}
	jint HardwareBuffer::RGBX_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGBX_8888"
		);
	}
	jint HardwareBuffer::RGB_565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_565"
		);
	}
	jint HardwareBuffer::RGB_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"RGB_888"
		);
	}
	jint HardwareBuffer::S_UI8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.HardwareBuffer",
			"S_UI8"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_READ_OFTEN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_OFTEN"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_READ_RARELY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_READ_RARELY"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_WRITE_OFTEN()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_OFTEN"
		);
	}
	jlong HardwareBuffer::USAGE_CPU_WRITE_RARELY()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_CPU_WRITE_RARELY"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_COLOR_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_COLOR_OUTPUT"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_CUBE_MAP()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_CUBE_MAP"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_DATA_BUFFER()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_DATA_BUFFER"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_MIPMAP_COMPLETE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_MIPMAP_COMPLETE"
		);
	}
	jlong HardwareBuffer::USAGE_GPU_SAMPLED_IMAGE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_GPU_SAMPLED_IMAGE"
		);
	}
	jlong HardwareBuffer::USAGE_PROTECTED_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_PROTECTED_CONTENT"
		);
	}
	jlong HardwareBuffer::USAGE_SENSOR_DIRECT_DATA()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_SENSOR_DIRECT_DATA"
		);
	}
	jlong HardwareBuffer::USAGE_VIDEO_ENCODE()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.hardware.HardwareBuffer",
			"USAGE_VIDEO_ENCODE"
		);
	}
	
	// QAndroidJniObject forward
	HardwareBuffer::HardwareBuffer(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject HardwareBuffer::create(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.hardware.HardwareBuffer",
			"create",
			"(IIIIJ)Landroid/hardware/HardwareBuffer;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	jboolean HardwareBuffer::isSupported(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.hardware.HardwareBuffer",
			"isSupported",
			"(IIIIJ)Z",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void HardwareBuffer::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	jint HardwareBuffer::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint HardwareBuffer::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint HardwareBuffer::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint HardwareBuffer::getLayers()
	{
		return callMethod<jint>(
			"getLayers",
			"()I"
		);
	}
	jlong HardwareBuffer::getUsage()
	{
		return callMethod<jlong>(
			"getUsage",
			"()J"
		);
	}
	jint HardwareBuffer::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean HardwareBuffer::isClosed()
	{
		return callMethod<jboolean>(
			"isClosed",
			"()Z"
		);
	}
	void HardwareBuffer::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

