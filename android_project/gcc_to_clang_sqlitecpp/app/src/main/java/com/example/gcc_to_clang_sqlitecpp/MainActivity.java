package com.example.gcc_to_clang_sqlitecpp;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

public class MainActivity extends AppCompatActivity {

    static {
        System.loadLibrary("example");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TestCpp testCpp = TestCpp.create();

        Log.d("TAG", "onCreate: " + testCpp.getStringTest());

    }
}
