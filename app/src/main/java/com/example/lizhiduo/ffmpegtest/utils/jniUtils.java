package com.example.lizhiduo.ffmpegtest.utils;

/**
 * Created by lizhiduo on 17-9-2.
 */

public class jniUtils {

    static {
        System.loadLibrary("ffmpegjni");
    }

    public static native int checkID(int ID);
}
