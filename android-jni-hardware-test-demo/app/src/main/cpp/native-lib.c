#include <jni.h>
#include <string.h>
#include <android/log.h>

#define LOG_TAG "JNI_DEMO"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)

JNIEXPORT jstring JNICALL
Java_com_example_jnidemo_NativeBridge_toggleHardwareTest(JNIEnv* env, jobject obj) {
    LOGI("Simulating GPIO toggle - ON");
    return (*env)->NewStringUTF(env, "Hardware test triggered: GPIO toggled");
}
