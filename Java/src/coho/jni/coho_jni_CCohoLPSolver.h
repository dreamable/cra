/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class coho_jni_CCohoLPSolver */

#ifndef _Included_coho_jni_CCohoLPSolver
#define _Included_coho_jni_CCohoLPSolver
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    initCSolver
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_initCSolver
  (JNIEnv *, jclass);

/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    createCSolver
 * Signature: (Lcoho/lp/solver/DoubleCohoMatrix;Lcoho/common/matrix/DoubleMatrix;)V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_createCSolver
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    cOpt
 * Signature: (Lcoho/common/matrix/DoubleMatrix;)V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_cOpt__Lcoho_common_matrix_DoubleMatrix_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    cOpt
 * Signature: (Lcoho/common/matrix/DoubleMatrix;Lcoho/common/matrix/IntegerMatrix;I)V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_cOpt__Lcoho_common_matrix_DoubleMatrix_2Lcoho_common_matrix_IntegerMatrix_2I
  (JNIEnv *, jobject, jobject, jobject, jint);

/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    cOpt
 * Signature: (Lcoho/common/matrix/APRMatrix;)V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_cOpt__Lcoho_common_matrix_APRMatrix_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     coho_jni_CCohoLPSolver
 * Method:    cOpt
 * Signature: (Lcoho/common/matrix/APRMatrix;Lcoho/common/matrix/IntegerMatrix;I)V
 */
JNIEXPORT void JNICALL Java_coho_jni_CCohoLPSolver_cOpt__Lcoho_common_matrix_APRMatrix_2Lcoho_common_matrix_IntegerMatrix_2I
  (JNIEnv *, jobject, jobject, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif