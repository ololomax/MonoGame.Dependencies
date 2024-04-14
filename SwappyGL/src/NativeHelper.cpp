#include "NativeHelper.h"
#include <jni.h>
#include <android/native_window.h>
#include <android/native_window_jni.h>

extern "C"
{
    __attribute__((visibility("default")))
    int Java_crc64493ac3851fab1842_MonoGameAndroidGameView_MyMathFuncsAdd(JNIEnv *env, jobject thiz, jint a, jint b)
    {
        return a + b;
    }

    __attribute__((visibility("default")))
    ANativeWindow* Java_crc64493ac3851fab1842_MonoGameAndroidGameView_GetNativeWindow(JNIEnv *env, jobject thiz, jobject surface)
    {
        ANativeWindow *window = ANativeWindow_fromSurface(env, surface);
        return window;
    }
}