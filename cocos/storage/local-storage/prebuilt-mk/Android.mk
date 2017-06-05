LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := cocos_localstorage_static

LOCAL_MODULE_FILENAME := liblocalstorage

LOCAL_ARM_MODE := arm

LOCAL_SRC_FILES := ../../../../prebuilt/android/$(TARGET_ARCH_ABI)/liblocalstorage.a


LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/../..



LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_internal_static

include $(PREBUILT_STATIC_LIBRARY)

$(call import-module, ./prebuilt-mk)
