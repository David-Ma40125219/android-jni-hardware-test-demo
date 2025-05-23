package com.example.jnidemo;

public class NativeBridge {
    static {
        System.loadLibrary("native-lib");
    }

    public native String toggleHardwareTest();
}
