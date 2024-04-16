#include "NativeHelper.h"
#include "swappyGL.h"
#include "swappyGL_extra.h"
#include <jni.h>
#include <android/native_window.h>
#include <android/native_window_jni.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>

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

    __attribute__((visibility("default")))
    bool Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLInit(JNIEnv *env, jobject thiz, jobject activity)
    {
        return SwappyGL_init(env, activity);
    }

    __attribute__((visibility("default")))
    bool Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLIsEnabled(JNIEnv *env, jobject thiz)
    {
        return SwappyGL_isEnabled();
    }

    __attribute__((visibility("default")))
    void Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLDestroy(JNIEnv *env, jobject thiz)
    {
        SwappyGL_destroy();
    }

    __attribute__((visibility("default")))
    bool Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLSetWindow(JNIEnv *env, jobject thiz, jobject window)
    {
        return SwappyGL_setWindow((ANativeWindow*)window);
    }

    __attribute__((visibility("default")))
    bool Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLSwap(JNIEnv *env, jobject thiz, jobject display, jobject surface)
    {
        return SwappyGL_swap((EGLDisplay)display, (EGLSurface)surface);
    }

    __attribute__((visibility("default")))
    void Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLSetUseAffinity(JNIEnv *env, jobject thiz, jboolean enabled)
    {
        SwappyGL_setUseAffinity(enabled);
    }

    __attribute__((visibility("default")))
    void Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLSetAutoSwapInterval(JNIEnv *env, jobject thiz, jboolean enabled)
    {
        SwappyGL_setAutoSwapInterval(enabled);
    }

    __attribute__((visibility("default")))
    void Java_crc64493ac3851fab1842_MonoGameAndroidGameView_SwappyGLSetAutoPipelineMode(JNIEnv *env, jobject thiz, jboolean enabled)
    {
        SwappyGL_setAutoPipelineMode(enabled);
    }
}