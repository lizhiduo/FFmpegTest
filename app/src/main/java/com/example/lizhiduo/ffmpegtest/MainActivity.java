package com.example.lizhiduo.ffmpegtest;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;

import com.example.lizhiduo.ffmpegtest.utils.jniUtils;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        int ret = jniUtils.checkID(28);
        Log.d("jni", "ret:" + ret);
    }
}
