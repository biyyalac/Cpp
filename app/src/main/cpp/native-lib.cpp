#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_cpp_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    int d = 10;
    std::string hello = "Hello from C++";
    d = 75;
    int i = d + 10;
    std::string hello2 = "Hello from C++"+i;
    return env->NewStringUTF(hello.c_str());
}