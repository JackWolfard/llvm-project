// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +v -target-feature +zfh \
// RUN:   -target-feature +experimental-zvfh -disable-O0-optnone  \
// RUN:   -emit-llvm %s -o - | opt -S -passes=mem2reg | \
// RUN:   FileCheck --check-prefix=CHECK-RV64 %s

#include <riscv_vector.h>

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x float>, <vscale x 1 x float> } @test_vlseg2e32_v_f32mf2x2_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0:[0-9]+]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x float>, <vscale x 1 x float> } @llvm.riscv.vlseg2.mask.nxv1f32.i64(<vscale x 1 x float> poison, <vscale x 1 x float> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x float>, <vscale x 1 x float> } [[TMP0]]
//
vfloat32mf2x2_t test_vlseg2e32_v_f32mf2x2_m(vbool64_t mask, const float *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x float>, <vscale x 2 x float> } @test_vlseg2e32_v_f32m1x2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x float>, <vscale x 2 x float> } @llvm.riscv.vlseg2.mask.nxv2f32.i64(<vscale x 2 x float> poison, <vscale x 2 x float> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x float>, <vscale x 2 x float> } [[TMP0]]
//
vfloat32m1x2_t test_vlseg2e32_v_f32m1x2_m(vbool32_t mask, const float *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x float>, <vscale x 4 x float> } @test_vlseg2e32_v_f32m2x2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x float>, <vscale x 4 x float> } @llvm.riscv.vlseg2.mask.nxv4f32.i64(<vscale x 4 x float> poison, <vscale x 4 x float> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x float>, <vscale x 4 x float> } [[TMP0]]
//
vfloat32m2x2_t test_vlseg2e32_v_f32m2x2_m(vbool16_t mask, const float *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x float>, <vscale x 8 x float> } @test_vlseg2e32_v_f32m4x2_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x float>, <vscale x 8 x float> } @llvm.riscv.vlseg2.mask.nxv8f32.i64(<vscale x 8 x float> poison, <vscale x 8 x float> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x float>, <vscale x 8 x float> } [[TMP0]]
//
vfloat32m4x2_t test_vlseg2e32_v_f32m4x2_m(vbool8_t mask, const float *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x i32>, <vscale x 1 x i32> } @test_vlseg2e32_v_i32mf2x2_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x i32>, <vscale x 1 x i32> } @llvm.riscv.vlseg2.mask.nxv1i32.i64(<vscale x 1 x i32> poison, <vscale x 1 x i32> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x i32>, <vscale x 1 x i32> } [[TMP0]]
//
vint32mf2x2_t test_vlseg2e32_v_i32mf2x2_m(vbool64_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x i32>, <vscale x 2 x i32> } @test_vlseg2e32_v_i32m1x2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x i32>, <vscale x 2 x i32> } @llvm.riscv.vlseg2.mask.nxv2i32.i64(<vscale x 2 x i32> poison, <vscale x 2 x i32> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x i32>, <vscale x 2 x i32> } [[TMP0]]
//
vint32m1x2_t test_vlseg2e32_v_i32m1x2_m(vbool32_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x i32>, <vscale x 4 x i32> } @test_vlseg2e32_v_i32m2x2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x i32>, <vscale x 4 x i32> } @llvm.riscv.vlseg2.mask.nxv4i32.i64(<vscale x 4 x i32> poison, <vscale x 4 x i32> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x i32>, <vscale x 4 x i32> } [[TMP0]]
//
vint32m2x2_t test_vlseg2e32_v_i32m2x2_m(vbool16_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x i32>, <vscale x 8 x i32> } @test_vlseg2e32_v_i32m4x2_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x i32>, <vscale x 8 x i32> } @llvm.riscv.vlseg2.mask.nxv8i32.i64(<vscale x 8 x i32> poison, <vscale x 8 x i32> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x i32>, <vscale x 8 x i32> } [[TMP0]]
//
vint32m4x2_t test_vlseg2e32_v_i32m4x2_m(vbool8_t mask, const int32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 1 x i32>, <vscale x 1 x i32> } @test_vlseg2e32_v_u32mf2x2_m
// CHECK-RV64-SAME: (<vscale x 1 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 1 x i32>, <vscale x 1 x i32> } @llvm.riscv.vlseg2.mask.nxv1i32.i64(<vscale x 1 x i32> poison, <vscale x 1 x i32> poison, ptr [[BASE]], <vscale x 1 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 1 x i32>, <vscale x 1 x i32> } [[TMP0]]
//
vuint32mf2x2_t test_vlseg2e32_v_u32mf2x2_m(vbool64_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 2 x i32>, <vscale x 2 x i32> } @test_vlseg2e32_v_u32m1x2_m
// CHECK-RV64-SAME: (<vscale x 2 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 2 x i32>, <vscale x 2 x i32> } @llvm.riscv.vlseg2.mask.nxv2i32.i64(<vscale x 2 x i32> poison, <vscale x 2 x i32> poison, ptr [[BASE]], <vscale x 2 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 2 x i32>, <vscale x 2 x i32> } [[TMP0]]
//
vuint32m1x2_t test_vlseg2e32_v_u32m1x2_m(vbool32_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 4 x i32>, <vscale x 4 x i32> } @test_vlseg2e32_v_u32m2x2_m
// CHECK-RV64-SAME: (<vscale x 4 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 4 x i32>, <vscale x 4 x i32> } @llvm.riscv.vlseg2.mask.nxv4i32.i64(<vscale x 4 x i32> poison, <vscale x 4 x i32> poison, ptr [[BASE]], <vscale x 4 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 4 x i32>, <vscale x 4 x i32> } [[TMP0]]
//
vuint32m2x2_t test_vlseg2e32_v_u32m2x2_m(vbool16_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

// CHECK-RV64-LABEL: define dso_local { <vscale x 8 x i32>, <vscale x 8 x i32> } @test_vlseg2e32_v_u32m4x2_m
// CHECK-RV64-SAME: (<vscale x 8 x i1> [[MASK:%.*]], ptr noundef [[BASE:%.*]], i64 noundef [[VL:%.*]]) #[[ATTR0]] {
// CHECK-RV64-NEXT:  entry:
// CHECK-RV64-NEXT:    [[TMP0:%.*]] = call { <vscale x 8 x i32>, <vscale x 8 x i32> } @llvm.riscv.vlseg2.mask.nxv8i32.i64(<vscale x 8 x i32> poison, <vscale x 8 x i32> poison, ptr [[BASE]], <vscale x 8 x i1> [[MASK]], i64 [[VL]], i64 3)
// CHECK-RV64-NEXT:    ret { <vscale x 8 x i32>, <vscale x 8 x i32> } [[TMP0]]
//
vuint32m4x2_t test_vlseg2e32_v_u32m4x2_m(vbool8_t mask, const uint32_t *base, size_t vl) {
  return __riscv_vlseg2e32_tuple(mask, base, vl);
}

