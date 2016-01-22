/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_kryptnostic_krypto_engine_KryptnosticEngine */

#ifndef _Included_com_kryptnostic_krypto_engine_KryptnosticEngine
#define _Included_com_kryptnostic_krypto_engine_KryptnosticEngine
#ifdef __cplusplus
extern "C" {
#endif
#undef com_kryptnostic_krypto_engine_KryptnosticEngine_CLIENT_HASH_FUNCTION_LENGTH
#define com_kryptnostic_krypto_engine_KryptnosticEngine_CLIENT_HASH_FUNCTION_LENGTH 1060896L
#undef com_kryptnostic_krypto_engine_KryptnosticEngine_INDEX_PAIR_LENGTH
#define com_kryptnostic_krypto_engine_KryptnosticEngine_INDEX_PAIR_LENGTH 2064L
#undef com_kryptnostic_krypto_engine_KryptnosticEngine_SHARE_PAIR_LENGTH
#define com_kryptnostic_krypto_engine_KryptnosticEngine_SHARE_PAIR_LENGTH 2064L
#undef com_kryptnostic_krypto_engine_KryptnosticEngine_SEARCH_PAIR_LENGTH
#define com_kryptnostic_krypto_engine_KryptnosticEngine_SEARCH_PAIR_LENGTH 2080L
/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    destroyServer
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_destroyServer
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    destroyClient
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_destroyClient
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    initKryptnosticService
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_initKryptnosticService
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    calculateMetadataAddress
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_calculateMetadataAddress
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    initClient
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_initClient__
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    initClient
 * Signature: ([B[B)V
 */
JNIEXPORT void JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_initClient___3B_3B
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getSearchPrivateKey
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getSearchPrivateKey
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getPrivateKey
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getPrivateKey
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getClientHashFunction
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getClientHashFunction
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getObjectIndexPair
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getObjectIndexPair
  (JNIEnv *, jobject);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getObjectSearchPairFromObjectIndexPair
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getObjectSearchPairFromObjectIndexPair
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getObjectSharePairFromObjectSearchPair
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getObjectSharePairFromObjectSearchPair
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getObjectSearchPairFromObjectSharePair
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getObjectSearchPairFromObjectSharePair
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    getEncryptedSearchToken
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_getEncryptedSearchToken
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    clientGetMetadatumAddress
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_clientGetMetadatumAddress
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testBitMatrixConversion
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testBitMatrixConversion
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testBitVectorConversion
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testBitVectorConversion
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testClientHashFunctionConversion
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testClientHashFunctionConversion
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testPrivateKey
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testPrivateKey
  (JNIEnv *, jclass);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testSearchPrivateKey
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testSearchPrivateKey
  (JNIEnv *, jclass);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testObjectIndexPair
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testObjectIndexPair
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testObjectSearchPairFromIndexPair
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testObjectSearchPairFromIndexPair
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testClientMetadataAddress
 * Signature: ([B[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testClientMetadataAddress
  (JNIEnv *, jclass, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testClientHashFunction
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testClientHashFunction
  (JNIEnv *, jclass, jbyteArray, jbyteArray);

/*
 * Class:     com_kryptnostic_krypto_engine_KryptnosticEngine
 * Method:    testEncryptionFHE
 * Signature: ([B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_kryptnostic_krypto_engine_KryptnosticEngine_testEncryptionFHE
  (JNIEnv *, jclass, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
