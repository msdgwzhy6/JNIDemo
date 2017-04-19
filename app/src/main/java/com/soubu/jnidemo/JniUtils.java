package com.soubu.jnidemo;

/**
 * 作者：余天然 on 2017/4/19 下午4:31
 */
public class JniUtils {
    public static native String getStringFormC();

    static {
        System.loadLibrary("NdkJniDemo");//之前在build.gradle里面设置的so名字，必须一致
    }

}
