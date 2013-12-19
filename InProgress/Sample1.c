
#include "sm

#ifndef _Included_Sample1
#define _Included_Sample1
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Sample1
 * Method:    intMethod
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_Sample1_intMethod
  (JNIEnv *, jobject, jint);

/*
 * Class:     Sample1
 * Method:    booleanMethod
 * Signature: (Z)Z
 */
JNIEXPORT jboolean JNICALL Java_Sample1_booleanMethod
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     Sample1
 * Method:    stringMethod
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_Sample1_stringMethod
  (JNIEnv *, jobject, jstring);

/*
 * Class:     Sample1
 * Method:    intArrayMethod
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_Sample1_intArrayMethod
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif
