//
// Created by 余天然 on 2017/4/19.
//

#include "com_soubu_jnidemo_JniUtils.h"

JNIEXPORT jstring JNICALL Java_com_soubu_jnidemo_JniUtils_getStringFormC(JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env, "这里是来自c的string");
}