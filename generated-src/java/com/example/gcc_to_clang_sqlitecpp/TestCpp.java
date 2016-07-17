// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from gcc_to_clang_sqlitecpp.djinni

package com.example.gcc_to_clang_sqlitecpp;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class TestCpp {
    public abstract String getStringTest();

    public static native TestCpp create();

    private static final class CppProxy extends TestCpp
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public String getStringTest()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getStringTest(this.nativeRef);
        }
        private native String native_getStringTest(long _nativeRef);
    }
}
