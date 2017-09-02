//
// Created by lizhiduo on 17-9-2.
//

#include "libavformat/avformat.h"

#include "com_example_lizhiduo_ffmpegtest_utils_jniUtils.h"

#include <android/log.h>


#define  LOG_TAG    "testJni"
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)



JNIEXPORT jint JNICALL Java_com_example_lizhiduo_ffmpegtest_utils_jniUtils_checkID
  (JNIEnv *env, jclass obj, jint id){

    AVCodec* codec = NULL;

    av_register_all();//该函数在所有基于ffmpeg的应用程序中几乎都是第一个被调用的。只有调用了该函数，才能使用复用器，编码器等
    codec = avcodec_find_decoder(id);//通过code ID查找一个已经注册的音视频编码器。H264的codecID是28，所以我们java那边传28下来如果检测到H264注册过了这边codec就不为空，返回0

    LOGI("id : %d\n", id);

    if(codec != NULL)
    {
        return 0;
    }else{
        return -1;
    }

  }