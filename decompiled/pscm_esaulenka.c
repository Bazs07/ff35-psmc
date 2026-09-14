// ==== FUN_0001ce70 @ 0001ce70 (size 184) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ce70(undefined1 param_1,int param_2)

{
  int5 iVar1;
  byte *pbVar2;
  uint uVar3;
  uint in_r16;
  int in_r22;
  undefined2 in_r27;
  int in_ep;
  uint in_PSW;
  ushort *in_CTBP;
  
  if ((!(bool)((byte)(in_PSW >> 2) & 1)) && (!(bool)((byte)(in_PSW >> 2) & 1))) {
    if ((bool)((byte)(in_PSW >> 2) & 1)) goto LAB_0001cf0c;
    __nop();
    __nop();
    __nop();
    __nop();
    __nop();
    __nop();
    *(undefined4 *)(in_ep + 0x28) = *(undefined4 *)(in_ep + 0x20);
    uVar3 = (uint)*(byte *)(in_ep + 0x13);
    *(undefined4 *)(in_ep + 8) = 0;
    *(undefined4 *)(in_ep + 8) = 0;
    (*(code *)((int)in_CTBP + (uint)*in_CTBP))(~in_r16);
    (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
    (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
    __nop();
    __nop();
    __nop();
    (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
    *(undefined1 *)(in_ep + 0x4e) = param_1;
    *(char *)(in_ep + 0x72) = (char)uVar3;
    *(uint *)(in_ep + 0xa8) = uVar3;
    *(uint *)(in_ep + 0xa8) = uVar3;
    *(uint *)(in_ep + 0xc4) = (uint)*(byte *)(in_ep + 0x75);
    *(uint *)(in_ep + 0xc4) = (uint)*(byte *)(in_ep + 0x75);
    pbVar2 = (byte *)((uVar3 & 0x16c2) + 0x37c2);
    *pbVar2 = *pbVar2 | 0x40;
    *(undefined1 *)(in_r22 + 0x5958) = *(undefined1 *)(in_ep + 0x51);
  }
  iVar1 = (int5)param_2 + -0xe;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  param_2 = (int)iVar1;
LAB_0001cf0c:
  (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))(param_2);
  (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
  (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
  (*(code *)((int)in_CTBP + (uint)in_CTBP[2]))();
  *(undefined2 *)(in_ep + 0x2c) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001cf5c @ 0001cf5c (size 38) ====

uint FUN_0001cf5c(void)

{
  int in_r14;
  int in_ep;
  
  return (in_r14 + 0xa5e0000U) / (uint)(int)*(short *)(in_ep + 0x6c);
}


// ==== FUN_0001d160 @ 0001d160 (size 2094) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001d7f6) overlaps instruction at (ram,0x0001d7f4)
    */
/* WARNING: Type propagation algorithm not settling */

void FUN_0001d160(int param_1,undefined2 param_2,int param_3)

{
  int5 iVar1;
  ushort uVar2;
  short sVar3;
  undefined2 uVar4;
  uint in_r10;
  int in_r13;
  undefined1 in_r16;
  uint in_r18;
  uint uVar5;
  undefined4 in_r19;
  int in_r20;
  undefined4 in_r27;
  int in_ep;
  uint uVar6;
  
  while (25000 >= in_r18 || in_r13 == 0xa206) {
    *(undefined2 *)(in_ep + 0x1a) = param_2;
    uVar2 = *(ushort *)(in_ep + 0x8e);
    *(undefined1 *)(param_3 + -0x2000) = in_r16;
    *(char *)(param_3 + 0xc00) = (char)param_3;
    in_r16 = 8;
    *(uint *)(in_ep + 0x50) = (uint)uVar2;
    if (25000 < in_r18) {
      __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *(int *)(DAT_ffffe180 + -0xf9c) = in_ep;
  *(undefined1 *)(param_3 + 0x163a) = in_r16;
  *(byte *)(in_r20 + -0x78c0) = *(byte *)(in_r20 + -0x78c0) ^ 4;
  sVar3 = *(short *)(in_ep + 0x18);
  uVar6 = in_ep * 4;
  __nop();
  uRamffffea60 = in_r16;
  *(uint *)(*(ushort *)(in_ep + 0x30) - 0xbee) = uVar6;
  DAT_000000c0 = 0;
  uVar2 = *(ushort *)(uVar6 + 0x10);
  uVar4 = *(undefined2 *)(uVar6 + 0x80);
  do {
    if (25000 < in_r18 && in_r13 != 0xa206) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(uVar6 + 0x1a) = param_2;
    __nop();
    uVar6 = (uint)*(byte *)(*(ushort *)(uVar6 + 0x18) + 5);
  } while (sVar3 == 0);
  __nop();
  __nop();
  iVar1 = -(int5)(int)(uint)uVar2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  __nop();
  *(uint *)(uVar6 + 0x98) = (uint)*(ushort *)(uVar6 + 0x20);
  uVar5 = (int)in_r18 >> 7;
  *(undefined4 *)(uVar6 + 0x7c) = in_r27;
  if (uVar5 < 0x61a9 || in_r13 == 0xa206) {
    *(undefined2 *)(uVar6 + 0x1a) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001d982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(short *)(param_1 * 2 + 0x1d984) * 2 + 0x1d984))(uVar4);
    return;
  }
  *(undefined1 *)(in_r10 - 0x2000) = *(undefined1 *)(uVar6 + 8);
  *(uint *)(uVar6 + 0x74) = (uint)iVar1 ^ uVar5 | in_r10;
  iVar1 = (int5)(int)uVar6 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  if (uVar5 < 0x61a9 || in_r13 == 0xa206) {
    *(undefined2 *)((int)iVar1 + 0x1a) = param_2;
    __nop();
    __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)((int)iVar1 + -0x2c6) = in_r19;
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001e85a @ 0001e85a (size 284) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001f022) */
/* WARNING: Removing unreachable block (ram,0x0001f02c) */
/* WARNING: Removing unreachable block (ram,0x0001f034) */
/* WARNING: Removing unreachable block (ram,0x0001f03c) */
/* WARNING: Removing unreachable block (ram,0x0001f04e) */
/* WARNING: Removing unreachable block (ram,0x0001f050) */
/* WARNING: Removing unreachable block (ram,0x0001f052) */
/* WARNING: Removing unreachable block (ram,0x0001f06c) */
/* WARNING: Removing unreachable block (ram,0x0001f06e) */
/* WARNING: Removing unreachable block (ram,0x0001f07c) */
/* WARNING: Removing unreachable block (ram,0x0001f08e) */
/* WARNING: Removing unreachable block (ram,0x0001f096) */
/* WARNING: Removing unreachable block (ram,0x0001f0a0) */
/* WARNING: Removing unreachable block (ram,0x0001f0a2) */
/* WARNING: Removing unreachable block (ram,0x0001f0a4) */

void FUN_0001e85a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001ef90 @ 0001ef90 (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ef90(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_ep;
  uint in_PSW;
  
  while( true ) {
    uVar1 = *(ushort *)(in_ep + 0xbe);
    *(ushort *)(in_ep + 0x18) = uVar1;
    *(ushort *)(in_ep + 0x74) = uVar1;
    *(ushort *)(in_ep + 0xce) = uVar1;
    *(uint *)(in_ep + 0x28) = (uint)uVar1;
    if (((((byte)(in_PSW >> 1) & 1) != ((byte)(in_PSW >> 2) & 1)) &&
        ((bool)((byte)(in_PSW >> 1) & 1))) && ((bool)((byte)in_PSW & 1))) break;
    in_PSW = 0;
    *(undefined1 *)(in_ep + 0x2a) = *(undefined1 *)(in_ep + 0x7d);
    *(undefined1 *)(in_ep + 0x57) = *(undefined1 *)(in_ep + 0x7d);
  }
  func_0x001bd780();
  *(undefined1 *)(in_ep + 0x25) = *(undefined1 *)(in_ep + 0x75);
  *(undefined1 *)(in_ep + 0x55) = *(undefined1 *)(in_ep + 0x75);
  uVar2 = *(undefined2 *)(in_ep + 200);
  *(undefined2 *)(in_ep + 0x28) = uVar2;
  *(undefined2 *)(in_ep + 0x88) = uVar2;
  *(undefined2 *)(in_ep + 0xe8) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001efc6 @ 0001efc6 (size 76) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001efc6(void)

{
  undefined2 uVar1;
  int in_ep;
  
  *(undefined1 *)(in_ep + 0x25) = *(undefined1 *)(in_ep + 0x75);
  *(undefined1 *)(in_ep + 0x55) = *(undefined1 *)(in_ep + 0x75);
  uVar1 = *(undefined2 *)(in_ep + 200);
  *(undefined2 *)(in_ep + 0x28) = uVar1;
  *(undefined2 *)(in_ep + 0x88) = uVar1;
  *(undefined2 *)(in_ep + 0xe8) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001ff46 @ 0001ff46 (size 34) ====

void FUN_0001ff46(int param_1)

{
  undefined1 in_r16;
  int in_r24;
  
  *(undefined1 *)(param_1 + 0x254c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x0001ff66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0001ff68 + *(short *)(&DAT_0001ff68 + in_r24 * 2) * 2))();
  return;
}


// ==== FUN_000212c0 @ 000212c0 (size 54) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00021328) overlaps instruction at (ram,0x00021326)
    */

void FUN_000212c0(void)

{
  int5 iVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined2 in_r11;
  uint in_r15;
  uint uVar4;
  short in_r22;
  uint in_ep;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint in_PSW;
  
  if ((bool)((byte)(in_PSW >> 3) & 1)) {
    bVar2 = *(byte *)(in_ep + 0x3b);
    iVar1 = (int5)(int)(uint)bVar2 + -5;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_ep = (uint)*(ushort *)(*(int *)(*(ushort *)((int)iVar1 + 0x18) + 0x106) + 0x18);
    if (-1 < (int)in_r15) goto LAB_00021310;
    *(short *)(in_ep + 0xac) = (short)in_r15;
    in_r15 = in_r15 / (uint)(int)in_r22;
    in_PSW = (uint)((bool)((byte)(in_PSW >> 4) & 1) || 4 < bVar2) << 4 |
             (uint)((int)in_r15 < 0) << 1;
  }
  if (!(bool)((byte)(in_PSW >> 1) & 1)) {
    halt_baddata();
  }
  uVar5 = (uint)*(ushort *)(*(int *)(in_ep + 0xf8) + 0x18);
  *(short *)(uVar5 + 0xc) = (short)in_r15;
  in_ep = (uint)*(ushort *)(uVar5 + 0x18);
  if (-1 < (int)in_r15) {
    halt_baddata();
  }
  if ((bool)((byte)(in_PSW >> 4) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00021310:
  uVar5 = (uint)in_r22;
  uVar4 = in_r15 / uVar5;
  uVar3 = *(undefined2 *)(in_ep + 0xe0);
  uVar6 = *(uint *)(in_ep + 0xf8);
  if ((int)uVar4 < 0 == (in_r15 == 0x80000000 && uVar5 == 0xffffffff || uVar5 == 0)) {
    uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  }
  else if ((int)uVar4 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar7 = *(int *)(uVar6 + 0x103);
  *(short *)(iVar7 + 0xa0) = (short)uVar4;
  uVar5 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined2 *)(uVar5 + 0xde) = uVar3;
  *(undefined2 *)(uVar5 + 0x86) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000212f6 @ 000212f6 (size 90) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00021328) overlaps instruction at (ram,0x00021326)
    */

void FUN_000212f6(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 in_r11;
  uint in_r15;
  uint uVar3;
  short in_r22;
  int in_ep;
  uint uVar4;
  int iVar5;
  uint in_PSW;
  
  if ((bool)((byte)(in_PSW >> 1) & 1)) {
    uVar4 = (uint)*(ushort *)(*(int *)(in_ep + 0xf8) + 0x18);
    *(short *)(uVar4 + 0xc) = (short)in_r15;
    uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
    if ((int)in_r15 < 0) {
      if ((bool)((byte)(in_PSW >> 4) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = (uint)in_r22;
      uVar3 = in_r15 / uVar1;
      uVar2 = *(undefined2 *)(uVar4 + 0xe0);
      uVar4 = *(uint *)(uVar4 + 0xf8);
      if ((int)uVar3 < 0 == (in_r15 == 0x80000000 && uVar1 == 0xffffffff || uVar1 == 0)) {
        uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
      }
      else if ((int)uVar3 < 0) {
        halt_baddata();
      }
      iVar5 = *(int *)(uVar4 + 0x103);
      *(short *)(iVar5 + 0xa0) = (short)uVar3;
      uVar4 = (uint)*(ushort *)(iVar5 + 0x18);
      *(undefined2 *)(uVar4 + 0xde) = uVar2;
      *(undefined2 *)(uVar4 + 0x86) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002321e @ 0002321e (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002321e(int param_1)

{
  int unaff_tp;
  int in_r10;
  byte in_r16;
  byte bVar1;
  int in_r17;
  byte in_r18;
  byte in_r27;
  int iVar2;
  short in_lp;
  
  *(char *)(in_r17 + 0x20e) = (char)in_r17;
  iVar2 = (int)DAT_ffff8f50;
  *(byte *)(in_r10 + 0x5cca) = in_r16;
  bVar1 = in_r16 & in_r18 & in_r27;
  *(byte *)(in_r10 + 0x5cca) = bVar1;
  *(byte *)(unaff_tp + 0x9b) = bVar1;
  *(short *)(iVar2 + 0xd25) = in_lp << 0xe;
  *(byte *)(param_1 + 0x5cd6) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00026672 @ 00026672 (size 92) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00026672(int param_1)

{
  bool bVar1;
  int5 iVar2;
  int in_r10;
  int in_r22;
  uint in_ep;
  undefined4 in_lp;
  
  while( true ) {
    *(undefined4 *)(in_ep + 0x74) = in_lp;
    iVar2 = (int5)(int)in_ep + -5;
    bVar1 = in_ep < 5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    *(undefined1 *)((int)iVar2 + 0x6e) = 0;
    in_ep = ~(int)*(char *)(param_1 + -0x78b7);
    DAT_fffffd00 = 0;
    if (bVar1 && in_r22 != 0) break;
    *(undefined1 *)(in_r10 + 0x5b3e) = 0;
  }
  *(undefined1 *)(*(byte *)(in_ep + 0x53) + 0x3d) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000267e2 @ 000267e2 (size 78) ====

void FUN_000267e2(void)

{
  undefined2 uVar1;
  undefined1 in_r1;
  undefined1 in_r22;
  code *UNRECOVERED_JUMPTABLE;
  int in_ep;
  
  *(undefined1 *)(in_ep + 0x14) = in_r1;
  uVar1 = *(undefined2 *)(in_ep + 0x88);
  *(undefined1 *)(*(ushort *)(in_ep + 0x86) + 0x5928) = in_r22;
                    /* WARNING: Could not recover jumptable at 0x0002682e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


// ==== FUN_0002694c @ 0002694c (size 278) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00026a7a) overlaps instruction at (ram,0x00026a78)
    */
/* WARNING: Removing unreachable block (ram,0x00026a48) */
/* WARNING: Removing unreachable block (ram,0x00026a7a) */
/* WARNING: Removing unreachable block (ram,0x00026a4e) */

void FUN_0002694c(void)

{
  uint in_r1;
  int in_r17;
  undefined1 in_r19;
  int in_ep;
  uint uVar1;
  undefined2 in_lp;
  
  if (-in_r17 < 0 == (in_r17 < 0 && in_r17 < 0 == -in_r17 < 0) && in_r17 != 0) {
    uVar1 = (uint)*(ushort *)(in_ep + 0x18);
    do {
      *(undefined2 *)((in_r1 | 0x16ce) + 0x16ce) = in_lp;
      uVar1 = (uint)*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18);
      *(undefined1 *)(uVar1 + 0x5f) = in_r19;
      in_r1 = (uint)*(byte *)(uVar1 + 0x6f);
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00027554 @ 00027554 (size 170) ====

/* WARNING: Instruction at (ram,0x000275fa) overlaps instruction at (ram,0x000275f8)
    */
/* WARNING: Removing unreachable block (ram,0x0002752e) */

void FUN_00027554(int param_1,int param_2)

{
  uint in_r1;
  int unaff_tp;
  int in_r10;
  int in_r11;
  int in_r12;
  undefined1 in_r15;
  undefined1 uVar1;
  uint in_r16;
  undefined4 in_r19;
  int iVar2;
  uint in_r21;
  uint in_r22;
  int iVar3;
  int in_ep;
  int in_lp;
  uint in_PSW;
  char local_1900;
  
  if ((bool)((byte)(in_PSW >> 3) & 1) || (bool)((byte)in_PSW & 1)) {
    *(char *)(in_r10 + 0x56b7) = (char)in_r16;
    *(byte *)(in_r11 + -0x78b5) = *(byte *)(in_r11 + -0x78b5) | 4;
    return;
  }
  iVar3 = 0x2755c;
  func_0x00116598();
  if ((bool)((byte)(in_PSW >> 3) & 1) || (bool)((byte)in_PSW & 1)) {
    *(char *)(in_r11 + 0x671) = (char)in_r16;
    *(char *)(in_r12 + 0x675) = (char)in_r16;
    iVar3 = iVar3 + -0xb;
    *(undefined1 *)(in_ep + 0x67) = in_r15;
    func_0xffee668e();
    func_0xfff2c25a();
    iVar2 = func_0xffee1d26();
    *(int *)(iVar3 + 0x17b2) = in_lp;
    *(char *)(iVar2 + 0x5c3a) = (char)in_r16;
    *(char *)(unaff_tp + 0x83) = (char)in_r16;
    *(short *)(*(char *)(param_1 + -0xf84) + 0x650) = (short)param_2;
    *(uint *)(param_2 + 0x20) = in_r16 | in_r22;
    func_0xffeb5d68(0,*(undefined2 *)(param_2 + 0xc6));
    return;
  }
  iVar3 = (int)*(char *)(in_lp + 0x7bd1);
  if ((int)(in_r21 | in_r1) < 1) {
    *(uint *)(iVar3 + 0xec) = (uint)*(ushort *)(iVar3 + 0xc);
    iVar2 = (int)local_1900;
    uVar1 = *(undefined1 *)(iVar3 + 0x5d);
    iVar3 = func_0xffea4b28();
    *(undefined4 *)(iVar2 + -0xcc6) = in_r19;
    *(undefined1 *)(iVar3 + 0x56b3) = uVar1;
    return;
  }
  return;
}


// ==== FUN_000283f6 @ 000283f6 (size 58) ====

void FUN_000283f6(undefined1 param_1,undefined4 param_2)

{
  int unaff_tp;
  undefined1 in_r16;
  int in_r18;
  int in_r28;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 in_lp;
  
  *(undefined2 *)(in_r28 + 0x189a) = in_lp;
  *(undefined1 *)(unaff_tp + 0x40) = in_r16;
  *(undefined4 *)(in_r18 + 0x5e80) = param_2;
  *(undefined1 *)(unaff_tp + 0x6f) = in_r16;
  *(undefined4 *)(in_r18 + 0x5e80) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0002842e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}


// ==== FUN_00028960 @ 00028960 (size 92) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00028960(undefined4 param_1)

{
  int5 iVar1;
  ushort uVar2;
  int unaff_tp;
  undefined1 in_r16;
  int in_r18;
  int in_r26;
  undefined4 in_r27;
  int in_ep;
  uint uVar3;
  undefined4 in_lp;
  uint in_PSW;
  
  if (!(bool)((byte)(in_PSW >> 2) & 1)) {
    *(undefined2 *)(in_ep + 0x54) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_r18 + 0x5e80) = param_1;
  uVar3 = (uint)*(ushort *)(in_ep + 0x18);
  iVar1 = (int5)in_r26 - (int5)(int)&stack0x00000000;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar2 = *(ushort *)(uVar3 + 2);
  *(undefined1 *)(unaff_tp + 0x55) = in_r16;
  *(uint *)(in_r18 + 0x5e80) = (uint)uVar2;
  *(char *)(uVar3 + 0x70) = (char)iVar1;
  *(undefined4 *)(uVar3 + 0x74) = in_lp;
  iVar1 = (int5)(int)uVar3 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002c132 @ 0002c132 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0002c198) overlaps instruction at (ram,0x0002c196)
    */

void FUN_0002c132(int param_1,undefined4 param_2)

{
  bool bVar1;
  int5 iVar2;
  ushort uVar3;
  byte bVar4;
  uint in_r1;
  int in_r10;
  int iVar5;
  uint in_r14;
  uint in_r15;
  undefined1 uVar6;
  uint in_r16;
  uint uVar7;
  uint in_r18;
  uint in_r21;
  uint in_r22;
  uint uVar8;
  uint in_r23;
  uint uVar9;
  uint uVar10;
  uint in_r27;
  int in_r29;
  int in_ep;
  uint uVar11;
  int in_CTBP;
  
  bVar4 = *(byte *)(*(ushort *)(in_ep + 0x18) + 0x50);
  *(byte *)(bVar4 + 0x20e) = bVar4;
  bVar4 = DAT_ffff8f50;
  *(char *)(in_r10 + 0x59e8) = (char)in_r16;
  uVar7 = in_r16 & in_r18 & in_r27;
  uVar10 = 0xfffffffd;
  uVar11 = (uint)(10 < bVar4) << 3 | (uint)(bVar4 == 0xb);
  iVar5 = (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x7c)))(param_2);
  do {
    uVar3 = *(ushort *)(in_r29 + 0x18);
    *(short *)(uVar3 + 0xc) = (short)in_r15;
    if (!(bool)((byte)(uVar11 >> 3) & 1) && !(bool)((byte)uVar11 & 1)) {
code_r0x0002c18e:
      uVar6 = (undefined1)uVar7;
      (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x4a)))();
      *(undefined1 *)(param_1 + 0x59e8) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_r15 = in_r15 / (uint)(int)(short)uVar7;
    in_r29 = *(int *)(*(ushort *)(uVar3 + 0x18) + 0xf8);
    if ((in_r14 & 0x400000) != 0 || in_r15 == 0) {
      *(char *)(iVar5 + 0x59e8) = (char)in_r22;
      uVar7 = in_r22;
      goto code_r0x0002c18e;
    }
    uVar8 = in_r22;
    iVar5 = (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x30)))();
    uVar9 = ~in_r22;
    in_r15 = in_r15 >> 1;
    iVar2 = (int5)(int)uVar10 - (int5)(int)in_r21;
    bVar1 = uVar10 < in_r21;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar10 = (uint)iVar2;
    in_r21 = in_r21 | in_r1;
    uVar11 = (uint)bVar1 << 3 | (uint)(in_r21 == 0);
    in_r14 = in_r23;
    uVar7 = in_r22;
    in_r22 = uVar8;
    in_r23 = uVar9;
  } while( true );
}


// ==== FUN_0002c414 @ 0002c414 (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002c414(int param_1)

{
  bool bVar1;
  int5 iVar2;
  uint in_r1;
  int in_r2;
  int in_r10;
  int in_r11;
  uint in_r14;
  uint in_r15;
  uint uVar3;
  uint in_r16;
  uint in_r18;
  uint in_r21;
  uint in_r22;
  uint in_r23;
  uint in_r26;
  uint in_r27;
  uint in_r28;
  uint in_ep;
  int in_lp;
  uint uVar4;
  uint in_PSW;
  
  do {
    if ((bool)((byte)(in_PSW >> 3) & 1) || (bool)((byte)in_PSW & 1)) {
      uVar3 = in_r15 / (uint)(int)(short)in_r22;
      if (in_r11 - in_r2 < 0 != (in_r11 < 0 != in_r2 < 0 && in_r2 < 0 == in_r11 - in_r2 < 0) ||
          in_r11 == in_r2) {
LAB_0002c42c:
        *(char *)(param_1 + 0x59e2) = (char)in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(char *)(in_r10 + 0x59e2) = (char)in_r16;
      in_r16 = in_r16 & in_r18 & in_r27;
      in_r26 = 0xfffffffd;
      uVar4 = (uint)(10 < in_r28) << 3 | (uint)(in_r28 == 0xb);
      in_ep = (uint)*(ushort *)(in_lp + 0x18);
    }
    else {
      in_r23 = ~in_r16;
      uVar3 = in_r15 >> 1;
      iVar2 = (int5)(int)in_r26 - (int5)(int)in_r21;
      bVar1 = in_r26 < in_r21;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      in_r26 = (uint)iVar2;
      in_r21 = in_r21 | in_r1;
      uVar4 = (uint)bVar1 << 3 | (uint)(in_r21 == 0);
    }
    *(short *)(in_ep + 0xc) = (short)uVar3;
    if (!SUB41(uVar4 >> 3,0) && !(bool)((byte)uVar4 & 1)) goto LAB_0002c42c;
    in_r28 = (uint)DAT_00007217;
    in_r15 = uVar3 / (uint)(int)(short)in_r16;
    in_PSW = (uint)((in_r14 & 0x400000) != 0) << 3 | (uint)(in_r15 == 0);
    in_ep = *(uint *)(*(ushort *)(in_ep + 0x18) + 0xf8);
    in_r14 = in_r23;
    in_r16 = in_r22;
  } while( true );
}


// ==== FUN_0002d086 @ 0002d086 (size 44) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0002d178) */

void FUN_0002d086(uint param_1)

{
  char cVar1;
  undefined4 unaff_tp;
  undefined1 uVar2;
  uint in_r16;
  undefined4 uVar3;
  uint in_r20;
  int in_r21;
  int iVar4;
  uint uVar5;
  uint in_lp;
  
  *(undefined2 *)((in_lp | in_r20) + 0x5e) = *(undefined2 *)((in_lp | in_r20) + 0xc6);
  iVar4 = (int)*(char *)(in_r20 - 0x7fea);
  *(char *)(iVar4 + 1) = (char)in_r16;
  *(char *)(iVar4 + 0x51) = (char)(in_r16 >> 1);
  uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x24);
  uVar5 = in_r21 >> 0x16 | in_r20;
  *(undefined2 *)(uVar5 + 0x5e) = *(undefined2 *)(uVar5 + 0xc6);
  iVar4 = (int)*(char *)(in_r20 - 0x7fea);
  uVar2 = (undefined1)uVar3;
  *(undefined1 *)(iVar4 + 1) = uVar2;
  *(undefined1 *)(iVar4 + 1) = uVar2;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x28) + 0x28) + 0x24);
  uVar5 = (int)(in_r21 >> 0x16 ^ param_1) >> 0x16 | in_r20;
  *(undefined2 *)(uVar5 + 0x5e) = *(undefined2 *)(uVar5 + 0xc6);
  cVar1 = *(char *)(in_r20 - 0x7fea);
  uVar2 = (undefined1)uVar3;
  *(undefined1 *)(cVar1 + 1) = uVar2;
  *(undefined1 *)(cVar1 + 1) = uVar2;
  *(char *)(*(ushort *)(in_r20 + 0x88) + 0x5928) = (char)((int)unaff_tp >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002d0b2 @ 0002d0b2 (size 196) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0002d178) */

void FUN_0002d0b2(uint param_1)

{
  char cVar1;
  undefined4 unaff_tp;
  undefined1 in_r15;
  undefined1 uVar2;
  undefined4 uVar3;
  uint in_r20;
  int in_r21;
  int in_ep;
  uint uVar4;
  int iVar5;
  
  *(undefined1 *)(in_ep + 0x51) = in_r15;
  uVar3 = *(undefined4 *)(*(int *)(in_ep + 0x28) + 0x24);
  uVar4 = in_r21 >> 0x16 | in_r20;
  *(undefined2 *)(uVar4 + 0x5e) = *(undefined2 *)(uVar4 + 0xc6);
  iVar5 = (int)*(char *)(in_r20 - 0x7fea);
  uVar2 = (undefined1)uVar3;
  *(undefined1 *)(iVar5 + 1) = uVar2;
  *(undefined1 *)(iVar5 + 1) = uVar2;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x28) + 0x28) + 0x24);
  uVar4 = (int)(in_r21 >> 0x16 ^ param_1) >> 0x16 | in_r20;
  *(undefined2 *)(uVar4 + 0x5e) = *(undefined2 *)(uVar4 + 0xc6);
  cVar1 = *(char *)(in_r20 - 0x7fea);
  uVar2 = (undefined1)uVar3;
  *(undefined1 *)(cVar1 + 1) = uVar2;
  *(undefined1 *)(cVar1 + 1) = uVar2;
  *(char *)(*(ushort *)(in_r20 + 0x88) + 0x5928) = (char)((int)unaff_tp >> 0x1f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002dadc @ 0002dadc (size 188) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0002db58) */
/* WARNING: Removing unreachable block (ram,0x0002db7a) */

void FUN_0002dadc(int param_1,undefined2 param_2)

{
  int5 iVar1;
  uint uVar2;
  int in_r18;
  int in_r28;
  int iVar3;
  int in_ep;
  int iVar4;
  
  iVar1 = (int5)param_1 - (int5)in_r28;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  if (param_1 < 0 != in_r28 < 0 && in_r28 < 0 == param_1 - in_r28 < 0) {
    *(undefined2 *)(in_r18 + -0xf84) = param_2;
    *(undefined1 *)(in_ep + 0x6f) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = (int)iVar1 + -0x16;
  func_0xfff5bf04();
  __nop();
  do {
    iVar4 = 0;
    while (uVar2 = iVar3 - 0xb, iVar3 = iVar3 + -0x16, uVar2 < 0xb) {
      iVar1 = (int5)(int)(uint)*(byte *)(iVar4 + 0x3b) + -5;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      iVar4 = (int)iVar1;
      iVar3 = (int)DAT_ffffe700;
    }
  } while( true );
}


// ==== FUN_0002dbc0 @ 0002dbc0 (size 28) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002dbc0(void)

{
  undefined4 in_r27;
  int in_r28;
  int in_ep;
  undefined4 in_lp;
  uint in_PSW;
  
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  if ((bool)((byte)(in_PSW >> 2) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_r28 + 0x1909) = in_lp;
  *(undefined4 *)(in_r28 + 0x190b) = in_lp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002dc16 @ 0002dc16 (size 84) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002dc16(int param_1)

{
  ushort uVar1;
  undefined1 in_r16;
  undefined4 in_r21;
  int in_r28;
  int in_ep;
  undefined4 in_lp;
  uint in_PSW;
  
  DAT_00000055 = in_r16;
  if ((bool)((byte)(in_PSW >> 3) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_r28 + 0x190b) = in_lp;
  *(undefined4 *)(in_r28 + 0x1903) = in_lp;
  *(undefined4 *)(in_r28 + 0x1901) = in_lp;
  *(undefined4 *)(in_r28 + 0x18ff) = in_lp;
  *(int *)(in_r28 + 0x4ab) = in_ep;
  DAT_00000049 = in_r16;
  if (8 < in_r28 - 0xbU) {
    uVar1 = *(ushort *)(in_ep + 0x18);
    *(undefined2 *)((undefined4 *)(uint)uVar1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x191a) = in_r16;
    *(undefined4 *)(uint)uVar1 = in_r21;
    *(undefined1 *)(param_1 + 0x5ade) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002e2fa @ 0002e2fa (size 30) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002e2fa(int param_1)

{
  int in_r10;
  byte in_r16;
  byte in_r18;
  byte in_r27;
  
  *(byte *)(in_r10 + 0x5a84) = in_r16;
  *(byte *)(param_1 + 0x5a8a) = in_r16 & in_r18 & in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002e50c @ 0002e50c (size 68) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002e50c(short param_1)

{
  undefined1 in_r16;
  undefined4 in_r21;
  int in_r28;
  int in_ep;
  undefined4 *puVar1;
  undefined4 in_lp;
  
  *(undefined4 *)(in_r28 + 0x1916) = in_lp;
  puVar1 = (undefined4 *)
           (uint)*(ushort *)
                  (*(ushort *)(*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18) + 0x18) + 0x18);
  *(undefined2 *)(puVar1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0x191a) = in_r16;
  *puVar1 = in_r21;
  *(undefined1 *)(param_1 + 0x5b26) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00030b42 @ 00030b42 (size 64) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00030b12) */
/* WARNING: Removing unreachable block (ram,0x00030b28) */

void FUN_00030b42(int param_1)

{
  undefined2 in_r11;
  int in_ep;
  
  *(undefined2 *)(in_ep + 0x84) = in_r11;
  *(char *)(param_1 + 0x5928) = (char)*(undefined2 *)(in_ep + 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00030c9c @ 00030c9c (size 42) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00030c9c(int param_1)

{
  uint in_r10;
  int in_r13;
  byte in_r16;
  byte bVar1;
  byte in_r18;
  uint in_r21;
  byte in_r27;
  
  *(byte *)(in_r10 + 0x5b56) = in_r16;
  bVar1 = in_r16 & in_r18 & in_r27;
  *(byte *)(param_1 + 0x1bb3) = bVar1;
  *(byte *)(in_r13 + 0x5928) = bVar1;
  do {
    *(byte *)(param_1 + 0x3766) = bVar1;
  } while ((int)(in_r21 | in_r10) < 0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00031250 @ 00031250 (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00031250(int param_1,int param_2)

{
  int5 iVar1;
  int in_r13;
  undefined2 in_r15;
  undefined1 in_r16;
  int in_ep;
  uint in_PSW;
  
  if ((bool)((byte)(in_PSW >> 1) & 1)) {
    *(undefined1 *)(in_r13 + 0x5f2a) = in_r16;
    in_r16 = 8;
    *(int *)(in_ep + 8) = param_2;
    iVar1 = (int5)in_ep + -5;
    in_PSW = (uint)(in_ep < 0 && in_ep < 0 != in_ep + -5 < 0) << 2;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_ep = (int)iVar1;
  }
  *(undefined2 *)(in_ep + 0xa4) = in_r15;
  *(undefined1 *)(param_2 + 0x5f14) = in_r16;
  if ((bool)((byte)(in_PSW >> 2) & 1)) {
    *(undefined1 *)(param_1 + 0x1cc0) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00031fc2 @ 00031fc2 (size 366) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00031ff0) overlaps instruction at (ram,0x00031fee)
    */
/* WARNING: Removing unreachable block (ram,0x00031f4c) */

void FUN_00031fc2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int5 iVar7;
  uint in_r2;
  int iVar8;
  int in_r11;
  uint in_r14;
  uint uVar9;
  uint in_r16;
  int in_r17;
  undefined4 in_r18;
  uint in_r20;
  uint in_r21;
  undefined2 in_r22;
  uint in_r23;
  uint in_r24;
  uint in_r25;
  uint in_r27;
  int iVar10;
  int in_r28;
  uint in_r29;
  int in_ep;
  uint uVar11;
  uint in_PSW;
  
  do {
    iVar10 = in_r28 + -0x28;
    uVar9 = in_PSW & 0xfffffff0 | (uint)(in_r28 + -0x28 < 0) << 1;
    if ((bool)((byte)(uVar9 >> 1) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_00031f06:
    uVar9 = uVar9 & 0xfffffff0;
LAB_00031f0a:
    *(char *)(in_r11 + -0x1dab) = (char)in_r18;
    bVar2 = CARRY4(in_r29,(uint)register0x0000000c);
    bVar5 = (bool)((byte)(uVar9 >> 4) & 1);
    iVar7 = (int5)(int)in_r20 + 0xf;
    bVar3 = 0xfffffff0 < in_r20;
    if (iVar7 < 0x80000000) {
      if (iVar7 < -0x80000000) {
        iVar7 = -0x80000000;
      }
    }
    else {
      iVar7 = 0x7fffffff;
    }
    in_r20 = (uint)iVar7;
    iVar7 = (int5)(int)in_r27 + (int5)(int)in_r23;
    bVar4 = CARRY4(in_r27,in_r23);
    if (iVar7 < 0x80000000) {
      if (iVar7 < -0x80000000) {
        iVar7 = -0x80000000;
      }
    }
    else {
      iVar7 = 0x7fffffff;
    }
    in_r23 = (uint)iVar7;
    if (((bVar5 || bVar2) || bVar3) || bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1 = param_1 >> 0xd;
    register0x0000000c = (BADSPACEBASE *)(int)*(short *)(&DAT_ffffe256 + param_1);
    in_r21 = (short)in_r21 * 0xd ^ param_3;
    *(short *)(in_ep + 0xe2) = (short)in_r17;
    *(char *)(in_ep + 0x55) = (char)in_r11;
    iVar8 = iVar10 + -0xa2;
    uVar11 = 0;
    *(uint *)(in_ep + -0x1dac) = in_r21;
    if (iVar10 + -0xa2 < 0 == (iVar10 + -0x97 < 0 && -1 < iVar10 + -0xa2) && iVar10 + -0x97 != 0xb)
    goto LAB_00031eb4;
    iVar8 = iVar10 + -0xad;
    bVar6 = false;
    if (((bVar5 || bVar2) || bVar3) || bVar4) {
      do {
        in_r11 = 0;
        in_r20 = in_r20 | (uint)register0x0000000c;
        in_r14 = in_r14 | *(uint *)(in_ep + 0x98);
        register0x0000000c = (BADSPACEBASE *)(*(uint *)(in_ep + 0x98) >> 0x1c);
        in_r2 = in_r21 | 0x80b6;
        iVar7 = (int5)(int)in_r16 + -0xe;
        uVar11 = (uint)((int)in_r16 < 0 && (int)in_r16 < 0 != (int)(in_r16 - 0xe) < 0) << 2 |
                 (uint)(bVar6 || 0xd < in_r16) << 4;
        if (iVar7 < 0x80000000) {
          if (iVar7 < -0x80000000) {
            iVar7 = -0x80000000;
          }
        }
        else {
          iVar7 = 0x7fffffff;
        }
        in_r16 = (uint)iVar7;
        __nop();
        iVar10 = iVar8 + -0x21;
        do {
          if (!(bool)((byte)(uVar11 >> 2) & 1)) {
            uVar9 = uVar11 & 0xfffffff0 | (uint)(iVar10 + -0xb < 0) << 1;
            if (!(bool)((byte)(uVar9 >> 1) & 1)) goto LAB_00031f0a;
            in_r20 = 3;
            param_4 = *(uint *)(in_ep + 0x80);
            *(undefined1 *)(in_ep + 0x68) = 0;
            in_r17 = in_r17 + -0xe;
            iVar7 = (int5)(int)in_r2 - (int5)(int)in_r25;
            uVar9 = (uint)(SUB41(uVar11 >> 4,0) || in_r2 < in_r25) << 4;
            if (iVar7 < 0x80000000) {
              if (iVar7 < -0x80000000) {
                iVar7 = -0x80000000;
              }
            }
            else {
              iVar7 = 0x7fffffff;
            }
            in_r2 = (uint)iVar7;
            in_r16 = (int)in_r16 >> 0x1e;
            in_r18 = *(undefined4 *)(in_r25 - 0x1dac);
            iVar10 = iVar10 + -0x42;
            goto LAB_00031f06;
          }
          __nop();
          uVar9 = in_r20 + 0xf0ca0000;
          __nop();
          in_r2 = in_r14 - 0x7f4a;
          iVar7 = (int5)(int)uVar9 + -0xe;
          if (iVar7 < 0x80000000) {
            if (iVar7 < -0x80000000) {
              iVar7 = -0x80000000;
            }
          }
          else {
            iVar7 = 0x7fffffff;
          }
          in_r16 = (uint)iVar7;
          __nop();
          if ((int)uVar9 < 0 && (int)uVar9 < 0 != (int)(in_r20 + 0xf0c9fff2) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar8 = iVar10 + -0x16;
          iVar1 = iVar10 + -0x16;
          uVar11 = (uint)(SUB41(uVar11 >> 4,0) || 0xd < uVar9) << 4 |
                   (uint)(iVar10 + -0xb < 0 && -1 < iVar1) << 2;
          iVar10 = iVar8;
        } while (-1 < iVar1);
LAB_00031eb4:
        iVar7 = (int5)(int)(in_r24 - 0x1dab) + (int5)(int)*(uint *)(in_ep + 0xf8);
        bVar6 = SUB41(uVar11 >> 4,0) || CARRY4(in_r24 - 0x1dab,*(uint *)(in_ep + 0xf8));
        if (iVar7 < 0x80000000) {
          if (iVar7 < -0x80000000) {
            iVar7 = -0x80000000;
          }
        }
        else {
          iVar7 = 0x7fffffff;
        }
        in_ep = (int)iVar7;
      } while( true );
    }
    *(undefined2 *)(in_ep + 8) = in_r22;
    iVar8 = (short)in_r11 * -0x76ac;
    *(short *)(in_ep + 0x8a) = (short)iVar8;
    in_r14 = in_r25 + 0xe2550000;
    *(char *)(in_ep + 9) = (char)param_1;
    bVar2 = param_2 < param_4;
    if (iVar10 + -0xfa < 0 == (iVar10 + -0xef < 0 && -1 < iVar10 + -0xfa) && iVar10 + -0xef != 0xb)
    {
      halt_baddata();
    }
    param_2 = (uint)*(char *)(in_r17 + -0x1dab);
    in_r24 = (uint)*(byte *)(in_ep + 0x24);
    in_r25 = 9;
    *(uint *)(iVar8 + -0x1dac) = (uint)*(ushort *)(in_ep + 100);
    iVar7 = (int5)(int)param_1 + (int5)(int)in_r2;
    in_PSW = (uint)(bVar2 || CARRY4(param_1,in_r2)) << 4;
    if (iVar7 < 0x80000000) {
      if (iVar7 < -0x80000000) {
        iVar7 = -0x80000000;
      }
    }
    else {
      iVar7 = 0x7fffffff;
    }
    in_r2 = (uint)iVar7;
    register0x0000000c = (BADSPACEBASE *)((short)param_4 * -0x1daa);
    in_r28 = iVar10 + -0x152;
  } while( true );
}


// ==== FUN_00032914 @ 00032914 (size 154) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00032914(void)

{
  uint unaff_tp;
  int in_r19;
  int in_r20;
  uint in_r21;
  uint in_r23;
  undefined4 in_r27;
  int iVar1;
  int in_r28;
  int in_ep;
  uint in_PSW;
  ushort *in_CTBP;
  
  do {
    if ((bool)((byte)(in_PSW >> 1) & 1)) {
      *(char *)(in_ep + 0x34) = (char)in_r19;
      *(byte *)(in_ep + 0x67) = (byte)((uint)register0x0000000c >> 0x1c);
      do {
      } while (-1 < in_r28 + -0x37);
      iVar1 = in_r28 + -0x4d;
      if (in_r20 + in_r19 < 0) {
        (*(code *)((int)in_CTBP + (uint)*in_CTBP))(*(undefined2 *)(in_ep + 0xe));
        *(undefined4 *)(in_ep + 0x7c) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      do {
      } while (-1 < (int)(in_r21 | 0xe255));
      in_r21 = in_r21 ^ in_r23;
      iVar1 = DAT_00004c02 + -0xb;
    }
    register0x0000000c = (BADSPACEBASE *)0x0;
    do {
    } while (-1 < (int)(in_r21 | 0xe255));
    in_r28 = iVar1 + -0x2c;
    in_r21 = in_r21 ^ unaff_tp;
    in_PSW = (uint)((int)in_r21 < 0) << 1;
    in_r20 = -4;
  } while( true );
}


// ==== FUN_00033c06 @ 00033c06 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00033c06(void)

{
  uint unaff_tp;
  undefined1 *in_r11;
  uint in_r16;
  undefined4 in_r27;
  int in_ep;
  
  *(uint *)(in_ep + 0x20) = in_r16 | unaff_tp;
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  *in_r11 = (char)in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000353c6 @ 000353c6 (size 24) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000353c6(void)

{
  int unaff_tp;
  int in_ep;
  
  *(char *)(unaff_tp + 0x400) = (char)*(undefined2 *)(in_ep + 0x62);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00035c40 @ 00035c40 (size 790) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00035e7a) overlaps instruction at (ram,0x00035e78)
    */
/* WARNING: Removing unreachable block (ram,0x00035e12) */
/* WARNING: Removing unreachable block (ram,0x00035c96) */
/* WARNING: Removing unreachable block (ram,0x00035c2e) */
/* WARNING: Removing unreachable block (ram,0x00035c30) */
/* WARNING: Removing unreachable block (ram,0x00035c38) */
/* WARNING: Removing unreachable block (ram,0x00035c3c) */
/* WARNING: Removing unreachable block (ram,0x00035bfa) */
/* WARNING: Removing unreachable block (ram,0x00035c0a) */
/* WARNING: Removing unreachable block (ram,0x00035c14) */
/* WARNING: Removing unreachable block (ram,0x00035c26) */
/* WARNING: Removing unreachable block (ram,0x00035bc8) */
/* WARNING: Removing unreachable block (ram,0x00035b8e) */
/* WARNING: Removing unreachable block (ram,0x00035b94) */
/* WARNING: Removing unreachable block (ram,0x00035bd0) */
/* WARNING: Removing unreachable block (ram,0x00035bdc) */
/* WARNING: Removing unreachable block (ram,0x00035bee) */
/* WARNING: Removing unreachable block (ram,0x00035cca) */
/* WARNING: Removing unreachable block (ram,0x00035c62) */
/* WARNING: Removing unreachable block (ram,0x00035e46) */
/* WARNING: Removing unreachable block (ram,0x00035e7a) */

void FUN_00035c40(int param_1)

{
  int5 iVar1;
  int in_r1;
  int unaff_gp;
  int in_r16;
  int iVar2;
  int iVar3;
  undefined2 in_r21;
  uint uVar4;
  int in_ep;
  int iVar5;
  
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  iVar2 = in_r16 >> 0x14;
  __nop();
  DAT_00000280 = (undefined1)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  iVar1 = -(int5)in_ep;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar5 = (int)iVar1;
  __nop();
  DAT_00007400 = DAT_00000280;
  FUN_0003dd70();
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  iVar2 = iVar2 >> 0x14;
  __nop();
  DAT_00000080 = (undefined1)iVar2;
  iVar1 = (int5)iVar2 - (int5)iVar5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar5 = (int)iVar1;
  __nop();
  DAT_00007400 = DAT_00000080;
  FUN_0003dda4();
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  iVar2 = iVar2 >> 0x14;
  __nop();
  DAT_00000280 = (undefined1)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  if (iVar5 <= 0x7fffffff) {
    if (iVar5 < -0x80000000) {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  __nop();
  DAT_00007500 = DAT_00000280;
  FUN_0003ddd8();
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  iVar2 = iVar2 >> 0x14;
  __nop();
  DAT_00000080 = (undefined1)iVar2;
  iVar1 = (int5)iVar5 - (int5)iVar2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar5 = (int)iVar1;
  __nop();
  DAT_00007500 = DAT_00000080;
  FUN_0003de0c();
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  __nop();
  if (iVar5 <= 0x7fffffff) {
    if (iVar5 < -0x80000000) {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  __nop();
  *(char *)(param_1 + -0x15a0) = (char)(iVar2 >> 0x14);
  *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
  iVar3 = iVar2 >> 0x1f;
  __nop();
  DAT_00003020 = (char)(iVar2 >> 0x1f);
  cRamffffffff = DAT_00003020;
  do {
    DAT_00004000 = (undefined1)iVar3;
    __nop();
    iVar1 = -(int5)(int)(uint)*(ushort *)(iVar5 + 0x34);
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(undefined1 *)(param_1 + 0x4b) = DAT_00004000;
    *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
    iVar1 = -(int5)((int)iVar1 + -0xb);
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    iVar3 = iVar3 >> 0x14;
    __nop();
    iVar1 = (int5)in_r1 - (int5)(int)iVar1;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    uVar4 = (uint)iVar1;
    DAT_ffffd125 = (undefined1)iVar3;
    while( true ) {
      iVar5 = 0;
      __nop();
      if ((int)uVar4 < 0 && (int)uVar4 < 0 == (int)-uVar4 < 0) break;
      iVar2 = 0x35dc0;
      FUN_0003debc();
      *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
      iVar1 = -(int5)(iVar2 + -0xb);
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      iVar3 = iVar3 >> 0x14;
      __nop();
      iVar1 = (int5)in_r1 - (int5)(int)iVar1;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      iVar2 = (int)iVar1;
      DAT_ffffd125 = (undefined1)iVar3;
      uVar4 = (uint)*(ushort *)(iVar5 + 0x34);
      __nop();
      if (iVar2 >= 0 || iVar2 < 0 != -iVar2 < 0) {
        func_0x0003deec();
        *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
        iVar3 = iVar3 >> 0x14;
        __nop();
        DAT_00000280 = (undefined1)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        __nop();
        DAT_00007000 = DAT_00000280;
        func_0x0003df20();
        *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
        iVar3 = iVar3 >> 0x14;
        __nop();
        DAT_00000080 = (undefined1)iVar3;
        __nop();
        DAT_00007000 = DAT_00000080;
        FUN_0003df54();
        *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
        iVar3 = iVar3 >> 0x14;
        __nop();
        DAT_00000280 = (undefined1)iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        __nop();
        DAT_00007100 = DAT_00000280;
        FUN_0003df88();
        *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
        __nop();
        DAT_00000080 = (undefined1)(iVar3 >> 0x14);
        __nop();
        DAT_00007100 = DAT_00000080;
        FUN_0003dfbc();
        *(undefined2 *)(unaff_gp + -0x6088) = in_r21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
  } while( true );
}


// ==== FUN_00036df6 @ 00036df6 (size 170) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00036df6(uint param_1)

{
  int5 iVar1;
  uint unaff_tp;
  int in_r10;
  uint in_r15;
  undefined1 uVar2;
  uint in_r16;
  uint uVar3;
  undefined4 in_r19;
  uint in_r21;
  short in_r24;
  uint in_r25;
  uint in_r26;
  int in_ep;
  
  uVar3 = in_r16 ^ in_r25;
  if ((int)uVar3 <= 0x7fffffff) {
    if ((int)uVar3 < -0x80000000) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  DAT_ffffff00 = (undefined1)uVar3;
  if (param_1 <= in_r26) {
    DAT_000000ff = DAT_ffffff00;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(in_ep + 0xa4) = (short)(in_r15 / (uint)(int)in_r24);
  *(undefined4 *)(in_ep + -0x2c6) = in_r19;
  iVar1 = (int5)in_ep + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar2 = (undefined1)*(undefined4 *)(in_ep + 0x24);
  *(undefined1 *)(in_r10 + -0x73a) = uVar2;
  *(undefined1 *)(in_r10 + -0x722) = uVar2;
  *(undefined1 *)(in_r10 + -0x70a) = uVar2;
  *(undefined1 *)(in_r10 + -0x6f2) = uVar2;
  *(undefined1 *)(in_r10 + -0x6da) = uVar2;
  *(undefined1 *)(in_r10 + -0x6c2) = uVar2;
  *(undefined1 *)(in_r10 + -0x6aa) = uVar2;
  *(undefined1 *)(in_r10 + -0x692) = uVar2;
  *(undefined1 *)(in_r10 + -0x67a) = uVar2;
  *(undefined1 *)(in_r10 + -0x662) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00036e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00036e9a + *(short *)(&DAT_00036e9a + (in_r21 | unaff_tp) * 2) * 2))
            (*(undefined2 *)((int)iVar1 + 0x80));
  return;
}


// ==== FUN_000370f2 @ 000370f2 (size 28) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000370f2(void)

{
  ushort uVar1;
  undefined2 unaff_sp;
  undefined4 in_r20;
  int in_ep;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar1 + 4) = in_r20;
  *(undefined2 *)(uVar1 + 0x2a) = unaff_sp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00038318 @ 00038318 (size 42) ====

void FUN_00038318(undefined2 param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_r1;
  undefined1 in_r17;
  int in_ep;
  
  *(undefined2 *)(in_ep + 0x80) = param_1;
  uVar1 = *(undefined2 *)(in_ep + 0xd0);
  uVar2 = *(undefined2 *)(in_ep + 0x80);
  *(undefined1 *)(in_r1 + -0x80) = in_r17;
  *(undefined2 *)(in_ep + 0x80) = param_1;
  *(undefined2 *)(in_ep + 0xd0) = uVar1;
  *(undefined2 *)(in_ep + 0x80) = uVar2;
  return;
}


// ==== FUN_00038a68 @ 00038a68 (size 828) ====

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x00038d4e) overlaps instruction at (ram,0x00038d4c)
    */
/* WARNING: Removing unreachable block (ram,0x00038d4e) */

void FUN_00038a68(undefined2 param_1)

{
  int5 iVar1;
  byte bVar2;
  uint in_r1;
  int unaff_tp;
  uint in_r13;
  undefined1 in_r15;
  undefined1 *in_ep;
  
  do {
    while( true ) {
      *(undefined2 *)(in_ep + 0x80) = param_1;
      iVar1 = (int5)unaff_tp + -0xd;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      unaff_tp = (int)iVar1;
      iVar1 = (int5)(int)in_r13 + 0x18f8;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      if (0xffffe707 < in_r13) break;
      iVar1 = (int5)unaff_tp + -10;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      *(undefined2 *)(in_ep + 0x80) = param_1;
      iVar1 = (int5)(int)iVar1 + -0xd;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      *(undefined2 *)(in_ep + 0x80) = param_1;
      iVar1 = (int5)(int)iVar1 + -8;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      *(undefined2 *)(in_ep + 0x80) = param_1;
      iVar1 = (int5)(int)iVar1 + -0xf;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      unaff_tp = (int)iVar1;
    }
    bVar2 = in_ep[0x77];
    *(short *)(in_ep + 0x12) = (short)iVar1;
  } while ((in_r1 | 0x2372) < 0xb);
  do {
    *(uint *)((in_r1 | 0x2372) + 0x21cb) = (uint)bVar2;
    *(short *)(in_ep + 0x12) = (short)iVar1;
  } while ((in_r1 | 0x2372) < 0xb);
  *in_ep = *in_ep;
  *in_ep = in_ep[0x40];
  cRamffffffff = in_ep[0x6d] + -0xc;
  in_ep[0x43] = (char)iVar1;
  in_ep[0x43] = (char)iVar1;
  iVar1 = (int5)(int)(uint)*(ushort *)(in_ep + 0x20) + -0x1170;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)(*(int *)((int)iVar1 + 0xf8) + 0x51) = in_r15;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ==== FUN_000396dc @ 000396dc (size 274) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000396dc(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  byte bVar3;
  undefined2 uVar4;
  char cVar5;
  uint in_r1;
  int in_r2;
  int iVar6;
  int unaff_gp;
  undefined2 unaff_tp;
  int in_r10;
  undefined2 in_r11;
  short in_r12;
  uint in_r16;
  uint uVar7;
  uint in_r18;
  int iVar8;
  uint in_r27;
  int iVar9;
  int iVar10;
  int in_r29;
  int in_ep;
  int iVar11;
  uint uVar12;
  
  uVar2 = *(ushort *)(in_ep + 0x18);
  *(undefined2 *)(uVar2 + 0xec) = in_r11;
  bVar3 = *(byte *)(uVar2 + 0x50);
  iVar1 = (int5)unaff_gp - (int5)in_r2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar6 = (int)iVar1;
  *(byte *)(bVar3 + 0x20e) = bVar3;
  iVar9 = (int)DAT_ffff8f50;
  *(char *)(in_r10 + 0x5cf4) = (char)in_r16;
  uVar7 = in_r16 & in_r18 & in_r27;
  *(char *)(in_r29 + 0x62) = (char)in_r29;
  iVar11 = (int)in_r12 * (int)(short)in_r29;
  iVar10 = iVar9 + -0x2c;
  DAT_ffffe252 = (undefined1)iVar10;
  iVar8 = -0x1dab0003;
  *(undefined1 *)(in_r1 - 0x1dab) = 0xfd;
  *(short *)(iVar11 + 0x78) = (short)iVar10;
  uVar12 = (uint)*(ushort *)(iVar11 + 0x18);
  *(undefined2 *)(uVar12 + 0xa4) = unaff_tp;
  iVar9 = iVar9 + -0x37;
  do {
    *(undefined1 *)(uVar12 + 0x44) = 0xc;
    *(undefined4 *)(uVar12 + 0xa4) = 0xc;
    *(undefined2 *)(uVar12 + 0xa4) = unaff_tp;
    uVar4 = *(undefined2 *)(uVar12 + 2);
    iVar9 = iVar9 + -0x37;
    do {
      *(char *)(uVar12 + 0x28) = (char)in_r27;
      iVar10 = iVar9 + -0xb;
      in_r27 = 0x39760;
      iVar11 = func_0x000887d8(uVar4);
      *(undefined2 *)(uVar12 + 0xa4) = unaff_tp;
      uVar4 = *(undefined2 *)(uVar12 + 2);
      uVar12 = (uint)*(byte *)(uVar12 + 0x7d);
      iVar9 = iVar10 + -0x16;
    } while (iVar10 + -0x16 < 0 == (iVar10 + -0xb < 0 && -1 < iVar10 + -0x16));
    uVar12 = (uint)*(ushort *)(*(char *)(iVar11 + -0x1dab) + 0x18);
    *(short *)(uVar12 + 0xd2) = (short)&stack0x00000000;
    iVar1 = (int5)(iVar10 + -0x42) - (int5)(int)(in_r1 | 0xa203);
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(char *)(uVar12 + 0x40) = (char)iVar1 + -0xb;
    *(short *)(uVar12 + 0x82) = (short)iVar8;
    iVar9 = (int)iVar1 + -0x21;
    iVar8 = param_1 + -0x1dab;
  } while (param_1 < 0 && -1 < param_1 + -0x1dab);
  *(undefined4 *)(uVar12 + 0x74) = 0;
  iVar1 = (int5)(int)uVar12 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  cVar5 = *(char *)(param_1 + -0x7d85);
  *(uint *)((int)iVar1 + 0x7c) = (uint)*(byte *)(uVar12 + 0x41);
  uVar2 = *(ushort *)((int)iVar1 + 0x18);
  *(char *)(iVar6 + -0x8000) = (char)uVar7;
  *(undefined4 *)(cVar5 + 0x21ec) = 0;
  *(char *)(uint)uVar2 = cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00039900 @ 00039900 (size 146) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00039900(void)

{
  int5 iVar1;
  undefined1 uVar2;
  ushort uVar3;
  int in_r13;
  undefined4 in_r19;
  int in_r22;
  int in_r23;
  undefined1 in_r27;
  int in_r28;
  undefined4 in_r29;
  int in_ep;
  int *piVar4;
  short in_lp;
  
  piVar4 = (int *)(uint)*(ushort *)(in_ep + 0x18);
  uVar3 = *(ushort *)((int)piVar4 + 2);
  *(undefined1 *)(piVar4 + 0x1b) = 0;
  uVar2 = *(undefined1 *)((int)piVar4 + 0x53);
  *(short *)(in_r28 + 0x243e) = (short)in_r29 * in_lp;
  do {
    *(undefined4 *)((int)piVar4 + -0x2c6) = in_r19;
    iVar1 = (int5)(int)(uint)*(byte *)((int)piVar4 + 0x3b) + -5;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(undefined4 *)(in_r13 + -0x1dac) = in_r29;
    piVar4 = (int *)((int)iVar1 * 0x8000);
    iVar1 = (int5)in_r22 + -0x5908;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(char *)((int)piVar4 + 0x3b) = (char)iVar1;
    *(char *)(piVar4 + 0x10) = (char)(*piVar4 - 0x16U);
  } while (10 < *piVar4 - 0x16U);
  *(undefined1 *)(in_r23 + -0x1dab) = in_r27;
  *(undefined1 *)(uVar3 + 0x5928) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003a254 @ 0003a254 (size 62) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003a254(void)

{
  int in_r2;
  byte in_r16;
  byte in_r29;
  int in_ep;
  
  *(undefined1 **)(in_ep + 0x3c) = &DAT_ffffe700 + in_r2;
  __nop();
  *(byte *)(in_ep + 0x30) = in_r16 & in_r29;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003ae52 @ 0003ae52 (size 84) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003ae52(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_r27;
  char *in_ep;
  int in_lp;
  int in_CTBP;
  
  cVar1 = *(char *)(param_1 + -0x7d85);
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  *(short *)(cVar1 + 0x2c74) = (short)in_lp;
  *in_ep = cVar1;
  iVar2 = (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x16)))(*(undefined2 *)(in_lp + 2));
  *(undefined1 *)(iVar2 + -0x7368) = *(undefined1 *)(in_lp + 0x5d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b640 @ 0003b640 (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003b640(void)

{
  ushort uVar1;
  int in_ep;
  uint *puVar2;
  undefined2 in_lp;
  
  puVar2 = (uint *)(uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  uVar1 = *(ushort *)((int)puVar2 + 2);
  *(undefined2 *)(*(char *)(*(ushort *)(in_ep + 10) - 0x7d85) + 0x2c74) = in_lp;
  *puVar2 = (uint)uVar1;
  *(short *)((ushort)puVar2[6] + 0x20) = (short)puVar2[8];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b6a2 @ 0003b6a2 (size 66) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003b6a2(void)

{
  int in_ep;
  
  *(undefined2 *)(*(ushort *)(in_ep + 0x18) + 0x20) = *(undefined2 *)(in_ep + 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b6e6 @ 0003b6e6 (size 213) ====

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void FUN_0003b6e6(undefined2 param_1)

{
  int in_r2;
  int unaff_tp;
  undefined4 in_r11;
  byte bVar1;
  int in_r16;
  byte in_r19;
  uint in_r20;
  undefined1 in_r27;
  int in_ep;
  uint uVar2;
  int iVar3;
  byte in_PSW;
  
  uVar2 = (uint)*(byte *)(in_ep + 0x7c);
  if (!(bool)(in_PSW & 1)) {
    *(undefined4 *)(uVar2 + 0xe0) = in_r11;
    uVar2 = uVar2 | in_r20;
    if (in_r16 < 1) {
      *(short *)(uVar2 + 0xe4) = (short)in_r11;
      iVar3 = *(int *)(uVar2 + 0x28);
      *(short *)(iVar3 + 0xe8) = (short)in_r11;
      bVar1 = (byte)in_r16 | in_r19 | (byte)unaff_tp;
      *(undefined2 *)(iVar3 + 0xbe) = param_1;
      *(byte *)(unaff_tp + 0xff) = bVar1;
      *(byte *)(in_r2 + 0xff) = bVar1;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  }
  *(uint *)(uVar2 + 0x58) = in_r20;
  __nop();
  *(byte *)(uVar2 + 0x30) = (byte)in_r16;
  *(undefined1 *)(uVar2 + 0x5d) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b930 @ 0003b930 (size 24) ====

void FUN_0003b930(uint param_1)

{
  int5 iVar1;
  int unaff_tp;
  uint in_r11;
  int in_r16;
  uint uVar2;
  uint in_r18;
  uint in_r27;
  int iVar3;
  int in_r29;
  int in_ep;
  short in_lp;
  
  if (in_r16 <= 0x7fffffff) {
    if (in_r16 < -0x80000000) {
      in_r16 = -0x80000000;
    }
  }
  else {
    in_r16 = 0x7fffffff;
  }
  *(undefined2 *)(in_ep + 0x90) = 0;
  *(byte *)(*(byte *)(in_ep + 0x50) + 0x210) = *(byte *)(in_ep + 0x50);
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_1 + 0x5928) = (char)in_r16;
  iVar1 = (int5)in_r16 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_r29 + 0x90) = 0;
  uVar2 = (uint)iVar1 & in_r18 & in_r27;
  *(char *)(param_1 + 0x5928) = (char)uVar2;
  iVar1 = (int5)(int)uVar2 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_r29 + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar1;
  *(short *)(iVar3 + 0x240d) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + (in_r11 ^ param_1) * 2) * 2))();
  return;
}


// ==== FUN_0003b948 @ 0003b948 (size 24) ====

void FUN_0003b948(int param_1)

{
  int5 iVar1;
  int unaff_tp;
  int in_r11;
  int in_r16;
  uint uVar2;
  uint in_r18;
  uint in_r27;
  int iVar3;
  int in_r29;
  short in_lp;
  
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_1 + 0x5928) = (char)in_r16;
  iVar1 = (int5)in_r16 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_r29 + 0x90) = 0;
  uVar2 = (uint)iVar1 & in_r18 & in_r27;
  *(char *)(param_1 + 0x5928) = (char)uVar2;
  iVar1 = (int5)(int)uVar2 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_r29 + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar1;
  *(short *)(iVar3 + 0x240d) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003b960 @ 0003b960 (size 38) ====

void FUN_0003b960(int param_1)

{
  int5 iVar1;
  int unaff_tp;
  int in_r11;
  uint in_r16;
  uint in_r27;
  int in_r28;
  int in_ep;
  short in_lp;
  
  *(char *)(param_1 + 0x5928) = (char)(in_r16 & in_r27);
  iVar1 = (int5)(int)(in_r16 & in_r27) + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_ep + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar1;
  *(short *)(in_r28 + 0x240d) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003c304 @ 0003c304 (size 64) ====

void FUN_0003c304(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 unaff_gp;
  int unaff_tp;
  int in_r11;
  int in_r16;
  uint uVar4;
  undefined1 in_r17;
  uint in_r18;
  uint in_r27;
  int in_r28;
  int in_ep;
  short in_lp;
  
  *(undefined1 *)(in_r16 + 0x2008) = in_r17;
  *(char *)(param_1 + 0x5928) = (char)in_r16;
  iVar1 = (int5)in_r16 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar4 = (uint)iVar1 & in_r18 & in_r27;
  *(char *)(param_1 + 0x5928) = (char)uVar4;
  iVar1 = (int5)(int)uVar4 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(unaff_tp + 0x84) = (char)iVar1;
  uVar2 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar2 + 0x72) = unaff_gp;
  uVar3 = *(undefined2 *)(uVar2 + 2);
  *(short *)(in_r28 + 0x23ef) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003c342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003c344 + *(short *)(&DAT_0003c344 + in_r11 * 2) * 2))(uVar3);
  return;
}


// ==== FUN_0003d0f2 @ 0003d0f2 (size 84) ====

void FUN_0003d0f2(uint param_1)

{
  int5 iVar1;
  int in_r2;
  uint unaff_gp;
  uint in_r11;
  int in_r16;
  uint uVar2;
  uint in_r18;
  uint in_r27;
  int iVar3;
  int in_r29;
  int in_ep;
  int in_lp;
  
  while( true ) {
    if (in_r16 <= 0x7fffffff) {
      if (in_r16 < -0x80000000) {
        in_r16 = -0x80000000;
      }
    }
    else {
      in_r16 = 0x7fffffff;
    }
    iVar1 = (int5)(int)unaff_gp - (int5)in_r2;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_r2 = (int)iVar1;
    *(byte *)(*(byte *)(in_ep + 0x50) + 0x210) = *(byte *)(in_ep + 0x50);
    iVar3 = (int)DAT_ffff8f50;
    *(char *)(param_1 + 0x5928) = (char)in_r16;
    iVar1 = (int5)in_r16 + 2;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    unaff_gp = param_1 & 0xff;
    uVar2 = (uint)iVar1 & in_r18 & in_r27;
    *(char *)(param_1 + 0x5928) = (char)uVar2;
    iVar1 = (int5)(int)uVar2 + 2;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_r16 = (int)iVar1;
    if (0xfffffffd < uVar2) break;
    in_r11 = in_r11 ^ param_1;
    in_ep = in_r29;
  }
  *(int *)(iVar3 + 0x23c1) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003d142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003d144 + *(short *)(&DAT_0003d144 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003d2fa @ 0003d2fa (size 86) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003d2fa(int param_1)

{
  ushort uVar1;
  undefined1 unaff_gp;
  short unaff_tp;
  undefined1 in_r16;
  int in_ep;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x51) = unaff_gp;
  iVar2 = *(int *)(uVar1 + 0xf8);
  *(undefined1 *)(iVar2 + 0x56) = unaff_gp;
  uVar3 = (uint)*(ushort *)((int)unaff_tp * (int)(short)iVar2 + 0x18);
  *(undefined1 *)(uVar3 + 0x5a) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x50) = unaff_gp;
  iVar2 = *(int *)(uVar3 + 0xf8);
  *(undefined1 *)(iVar2 + 0x57) = unaff_gp;
  *(undefined1 *)(*(ushort *)((int)unaff_tp * (int)(short)iVar2 + 0x18) + 0x59) = unaff_gp;
  *(undefined1 *)(param_1 + 0x1bed) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d6ac @ 0003d6ac (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003d6ac(void)

{
  ushort uVar1;
  undefined1 unaff_gp;
  undefined1 in_r18;
  int in_r28;
  int in_ep;
  uint uVar2;
  undefined4 in_lp;
  
  *(undefined1 *)(in_ep + 0x54) = unaff_gp;
  uVar1 = *(ushort *)(in_ep + 2);
  uVar2 = (uint)*(byte *)(in_ep + 0x7c);
  *(undefined1 *)(uVar2 + 0x53) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x54) = unaff_gp;
  *(undefined1 *)(*(ushort *)(uVar2 + 0x18) + 0x56) = unaff_gp;
  *(undefined4 *)(in_r28 + 0x23d4) = in_lp;
  *(undefined1 *)(uVar1 + 0x23c6) = in_r18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d700 @ 0003d700 (size 54) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003d700(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  undefined1 unaff_gp;
  int in_r10;
  int in_r16;
  int in_r28;
  int in_ep;
  int in_lp;
  
  __nop();
  *(int *)(in_r28 + 0x23d0) = in_ep;
  iVar1 = (int5)in_r10 + (int5)in_ep;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x51) = unaff_gp;
  *(char *)(param_1 + 0x23c6) = (char)(in_r16 >> 0x16);
  uVar2 = *(ushort *)(in_lp + 0x23ee);
  *(undefined1 *)(uVar2 + 0x57) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x4e) = unaff_gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d90c @ 0003d90c (size 74) ====

void FUN_0003d90c(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint in_r1;
  undefined1 unaff_gp;
  int in_r11;
  int in_ep;
  uint uVar3;
  undefined2 in_lp;
  
  *(byte *)(in_ep + 1) = (byte)in_r1 | 0xf0;
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x38) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar3 + 0x39) = unaff_gp;
  uVar2 = *(undefined2 *)(uVar3 + 2);
  *(undefined2 *)((in_r1 | 0x21f0) + 0x243e) = in_lp;
  *(undefined2 *)((in_r1 | 0x21f0) + 0x23c2) = in_lp;
                    /* WARNING: Could not recover jumptable at 0x0003d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003d956 + *(short *)(&DAT_0003d956 + in_r11 * 2) * 2))(uVar2);
  return;
}


// ==== FUN_0003d9ea @ 0003d9ea (size 24) ====

void FUN_0003d9ea(void)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined1 unaff_gp;
  int in_r11;
  int in_r28;
  int in_ep;
  undefined4 in_lp;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x32) = unaff_gp;
  uVar2 = *(undefined2 *)(uVar1 + 2);
  *(undefined4 *)(in_r28 + 0x23c4) = in_lp;
                    /* WARNING: Could not recover jumptable at 0x0003da00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003da02 + *(short *)(&DAT_0003da02 + in_r11 * 2) * 2))(uVar2);
  return;
}


// ==== FUN_0003dcd0 @ 0003dcd0 (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003dcd0(void)

{
  undefined1 unaff_sp;
  undefined1 unaff_gp;
  int in_ep;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x35) = unaff_gp;
  *(undefined1 *)(uVar1 + 0x35) = unaff_gp;
  uVar1 = (uint)*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18);
  *(undefined1 *)(uVar1 + 0x35) = unaff_gp;
  uVar1 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar1 + 0x42) = unaff_gp;
  *(undefined1 *)(uVar1 + 0x6c) = unaff_sp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dd3c @ 0003dd3c (size 24) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003dd3c(int param_1)

{
  undefined1 in_r16;
  int in_r26;
  
  *(undefined1 *)(param_1 + 0x23ac) = in_r16;
  *(undefined1 *)(in_r26 + 0x6c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dda4 @ 0003dda4 (size 44) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003dda4(void)

{
  ushort uVar1;
  undefined1 unaff_sp;
  undefined1 unaff_gp;
  int in_ep;
  
  *(undefined1 *)(in_ep + 0x35) = unaff_gp;
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x45) = unaff_gp;
  *(undefined1 *)(uVar1 + 0x6c) = unaff_sp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003debc @ 0003debc (size 150) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003debc(void)

{
  int5 iVar1;
  ushort uVar2;
  uint in_r1;
  undefined1 unaff_gp;
  int in_r16;
  uint uVar3;
  
  iVar1 = (int5)in_r16 - (int5)(int)DAT_ffffe700;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -0x23ac;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x33) = unaff_gp;
  *(undefined1 *)((int)iVar1 + 0x33) = unaff_gp;
  uVar3 = in_r1 | 0x23bb;
  iVar1 = (int5)(int)uVar3 + -0x23b6;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x42) = unaff_gp;
  iVar1 = (int5)(int)uVar3 + -0x23b7;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x45) = unaff_gp;
  iVar1 = (int5)(int)uVar3 + -0x23b8;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x43) = unaff_gp;
  iVar1 = (int5)(int)uVar3 + -0x23b9;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x44) = unaff_gp;
  uVar3 = (uint)*(ushort *)((int)iVar1 + 0x18);
  *(undefined1 *)(uVar3 + 0x3a) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x33) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x33) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar3 + 0x40) = 0;
  *(undefined1 *)(uVar3 + 0x33) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x42) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x2c) = unaff_gp;
  uVar2 = *(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar3 + 0x3a) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x3c) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x34) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x34) = unaff_gp;
  uVar2 = *(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = unaff_gp;
  *(undefined1 *)(uVar3 + 0x6c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003df62 @ 0003df62 (size 38) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003df62(void)

{
  ushort uVar1;
  undefined1 unaff_gp;
  int in_ep;
  uint uVar2;
  
  *(undefined1 *)(in_ep + 0x33) = unaff_gp;
  *(undefined1 *)(in_ep + 0x33) = unaff_gp;
  uVar2 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar2 + 0x40) = 0;
  *(undefined1 *)(uVar2 + 0x33) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x42) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x2c) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar1 + 0x45) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x3a) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x37) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x3c) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar1 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x6c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003df88 @ 0003df88 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003df88(void)

{
  ushort uVar1;
  undefined1 unaff_gp;
  int in_ep;
  uint uVar2;
  
  *(undefined1 *)(in_ep + 0x33) = unaff_gp;
  uVar2 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar2 + 0x40) = 0;
  *(undefined1 *)(uVar2 + 0x33) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x42) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x2c) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar1 + 0x45) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x3a) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x37) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x3c) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar1 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x6c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dfbc @ 0003dfbc (size 116) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003dfbc(void)

{
  ushort uVar1;
  undefined1 unaff_sp;
  undefined1 unaff_gp;
  int in_ep;
  uint uVar2;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x45) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x3a) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x37) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x3c) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x34) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar1 + 0x34) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x6c) = unaff_sp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e2fa @ 0003e2fa (size 32) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e2fa(int param_1)

{
  undefined1 in_r16;
  int in_r17;
  
  *(char *)(in_r17 + 0x210) = (char)in_r17;
  *(undefined1 *)(param_1 + 0x5928) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e42c @ 0003e42c (size 101) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e42c(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 unaff_gp;
  undefined1 uVar3;
  undefined1 in_r16;
  int in_ep;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(in_ep + 1);
  *(undefined1 *)(uVar4 + 0x20) = unaff_gp;
  uVar3 = (undefined1)*(undefined2 *)(uVar4 + 0x7c);
  DAT_00007fff = in_r16;
  *(undefined1 *)(uVar4 + 0x20) = uVar3;
  uVar4 = (uint)*(ushort *)(*(byte *)(uVar4 + 0x42) + 0x18);
  *(undefined1 *)(uVar4 + 0x20) = uVar3;
  uVar4 = (uint)*(byte *)(*(byte *)(uVar4 + 0x16) + 1);
  *(undefined1 *)(uVar4 + 0x20) = uVar3;
  uVar4 = (uint)*(ushort *)(*(byte *)(uVar4 + 0x42) + 0x18);
  *(undefined1 *)(uVar4 + 0x20) = uVar3;
  uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar4 + 0x24) = uVar3;
  uVar2 = *(ushort *)(uVar4 + 0x28);
  *(undefined1 *)(uVar4 + 0x24) = uVar3;
  uVar1 = *(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar1 + 0x24) = uVar3;
  uVar4 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar4 + 0x28) = uVar3;
  *(undefined1 *)(*(byte *)(uVar4 + 1) + 0x20) = uVar3;
  *(undefined1 *)(uVar2 + 0x23a0) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e492 @ 0003e492 (size 84) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e492(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 unaff_gp;
  undefined1 in_r16;
  int in_ep;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar3 + 0x24) = unaff_gp;
  uVar2 = *(ushort *)(uVar3 + 0x28);
  *(undefined1 *)(uVar3 + 0x24) = unaff_gp;
  uVar1 = *(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar1 + 0x24) = unaff_gp;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined1 *)(uVar3 + 0x28) = unaff_gp;
  *(undefined1 *)(*(byte *)(uVar3 + 1) + 0x20) = unaff_gp;
  *(undefined1 *)(uVar2 + 0x23a0) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e4f8 @ 0003e4f8 (size 30) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e4f8(int param_1)

{
  byte bVar1;
  undefined1 unaff_gp;
  undefined1 in_r16;
  int in_ep;
  
  bVar1 = *(byte *)(in_ep + 1);
  *(undefined1 *)(bVar1 + 0x20) = unaff_gp;
  *(undefined1 *)(*(ushort *)(*(byte *)(bVar1 + 0x42) + 0x18) + 0x20) = unaff_gp;
  *(undefined1 *)(param_1 + 0x23a0) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e854 @ 0003e854 (size 62) ====

void FUN_0003e854(int param_1)

{
  int5 iVar1;
  int unaff_tp;
  int in_r13;
  int in_r16;
  uint uVar2;
  uint in_r18;
  uint in_r27;
  int iVar3;
  short in_lp;
  
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_1 + 0x5928) = (char)in_r16;
  iVar1 = (int5)in_r16 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar2 = (uint)iVar1 & in_r18 & in_r27;
  *(char *)(param_1 + 0x5928) = (char)uVar2;
  iVar1 = (int5)(int)uVar2 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(unaff_tp + 0xe5) = (char)iVar1;
  *(short *)(iVar3 + 0x2387) = in_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003e892 + *(short *)(&DAT_0003e892 + in_r13 * 2) * 2))();
  return;
}


// ==== FUN_0003eb9c @ 0003eb9c (size 26) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003eb9c(void)

{
  undefined1 unaff_gp;
  int in_r10;
  undefined1 in_r16;
  undefined4 in_r27;
  int in_ep;
  
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  *(undefined1 *)(in_r10 + -0x72c8) = in_r16;
  *(undefined1 *)(in_ep + 0x13) = unaff_gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003ecb8 @ 0003ecb8 (size 386) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003ecb8(int param_1)

{
  int5 iVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  int unaff_tp;
  int in_r16;
  uint uVar5;
  uint in_r18;
  uint in_r27;
  int iVar6;
  byte in_r29;
  undefined1 *puVar7;
  
  iVar6 = (int)DAT_ffff8f50;
  *(char *)(param_1 + 0x5928) = (char)in_r16;
  iVar1 = (int5)in_r16 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar3 = (undefined1)param_1;
  uVar5 = (uint)iVar1 & in_r18 & in_r27;
  *(char *)(param_1 + 0x5928) = (char)uVar5;
  iVar1 = (int5)(int)uVar5 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(unaff_tp + 0xe4) = (char)iVar1;
  iVar1 = (int5)(int)(iVar6 - 0x22U | 0xfd3b) + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)((int)iVar1 + 0x14) = uVar3;
  uVar5 = (uint)*(ushort *)(((uint)&stack0x00000000 & 0xe708) + 0x18);
  *(undefined1 *)(uVar5 + 0x14) = uVar3;
  *(undefined1 *)(uVar5 + 0x14) = uVar3;
  uVar5 = (uint)*(ushort *)(((uint)&stack0x00000000 & 0xe708) + 0x18);
  *(undefined1 *)(uVar5 + 0xc) = uVar3;
  bVar2 = *(byte *)(uVar5 + 0x5d);
  iVar1 = (int5)(int)(uint)bVar2 - (int5)(int)DAT_ffffe700;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -0x2393;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar6 = (int)iVar1;
  uVar3 = *(undefined1 *)(iVar6 + 0x4e);
  *(undefined1 *)(iVar6 + 0xb) = uVar3;
  *(undefined1 *)(iVar6 + 0xe) = uVar3;
  *(undefined1 *)(iVar6 + 0xe) = uVar3;
  uVar5 = (uint)*(ushort *)(*(ushort *)(iVar6 + 0x18) + 0x18);
  *(undefined1 *)(uVar5 + 0x10) = uVar3;
  *(undefined1 *)(uVar5 + 0x14) = uVar3;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0xf) = uVar3;
  *(undefined1 *)(uVar5 + 0xf) = uVar3;
  uVar5 = (uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
  *(undefined1 *)(uVar5 + 0x10) = uVar3;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0xe) = uVar3;
  uVar4 = *(ushort *)(uVar5 + 10);
  *(undefined1 *)(uVar5 + 0xe) = uVar3;
  puVar7 = (undefined1 *)(uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
  puVar7[0x10] = uVar3;
  *(uint *)(puVar7 + 0x7c) = in_r27;
  iVar1 = (int5)(int)(uint)uVar4 - (int5)(int)&stack0x00000000;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *puVar7 = (char)*(undefined2 *)(puVar7 + 0x14);
  iVar1 = (int5)(int)puVar7 - (int5)(int)iVar1;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  puVar7[8] = uVar3;
  *(byte *)((int)iVar1 + 0x46fc) = bVar2 & in_r29;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003f0de @ 0003f0de (size 132) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003f0de(void)

{
  int5 iVar1;
  int iVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  byte in_r29;
  int in_ep;
  uint uVar6;
  
  bVar3 = *(byte *)(in_ep + 0x5d);
  iVar1 = (int5)(int)(uint)bVar3 - (int5)(int)DAT_ffffe700;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -0x2388;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar2 = (int)iVar1;
  uVar4 = *(undefined1 *)(iVar2 + 0x7e);
  *(undefined1 *)(iVar2 + 2) = uVar4;
  uVar5 = *(ushort *)(iVar2 + 10);
  *(undefined1 *)(iVar2 + 2) = uVar4;
  uVar6 = (uint)*(ushort *)(*(ushort *)(iVar2 + 0x18) + 0x18);
  *(undefined1 *)(uVar6 + 4) = uVar4;
  *(undefined1 *)(uVar6 + 9) = uVar4;
  *(byte *)(uVar5 + 0x46fc) = bVar3 & in_r29;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003f994 @ 0003f994 (size 24) ====

void FUN_0003f994(void)

{
  uint in_r20;
  uint in_ep;
  
                    /* WARNING: Could not recover jumptable at 0x0003f9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003f9ac +
            *(short *)(&DAT_0003f9ac +
                      ((uint)*(byte *)((in_ep | in_r20) + 0x11) & *(uint *)(in_ep + 0x28)) * 2) * 2)
  )();
  return;
}


// ==== FUN_00040678 @ 00040678 (size 180) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0004066c) */
/* WARNING: Removing unreachable block (ram,0x00040670) */

void FUN_00040678(int param_1,undefined2 param_2)

{
  bool bVar1;
  int5 iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  int in_r1;
  uint in_r13;
  uint in_r14;
  uint in_r15;
  uint uVar6;
  uint in_r16;
  uint uVar7;
  uint uVar8;
  undefined1 *in_r24;
  uint in_r25;
  undefined4 in_r27;
  int in_r28;
  uint in_ep;
  undefined4 in_lp;
  uint uVar9;
  uint in_PSW;
  
  *(short *)(in_r28 + 0x1cc8) = (short)in_lp;
  *(short *)(in_ep + 0x8e) = (short)&stack0x00000000;
  *(char *)(in_r1 + -1) = (char)in_r16;
  *(undefined2 *)(in_ep + 0x80) = param_2;
  *(undefined2 *)(in_ep + 0x80) = param_2;
  *(char *)(in_r1 + 0x15e0) = (char)in_r16;
  *(short *)(in_ep + 0x80) = (short)param_1;
  uVar9 = (uint)(((bool)((byte)(in_PSW >> 4) & 1) || in_r24 < &DAT_ffffa703) ||
                in_r24 < (undefined1 *)0xffff8011) << 4;
  if (in_r24 != (undefined1 *)0xffff8011) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(in_ep + 0xce) = *(undefined2 *)(in_ep + 0x50);
  uVar7 = 0xffff8011;
  do {
    cVar4 = *(char *)(param_1 + -0x7d85);
    *(undefined4 *)(in_ep + 0x7c) = in_r27;
    uVar3 = (int)cVar4 - 0xb;
    uVar8 = uVar7 - uVar3;
    if (SUB41(uVar9 >> 4,0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = in_r16 ^ in_r25;
    if (uVar7 < uVar3) {
LAB_000405fe:
      in_ep = (uint)*(ushort *)(in_ep + 0x18);
    }
    else {
      *(undefined4 *)(in_ep + 0x74) = in_lp;
      bVar5 = *(byte *)(param_1 + -0x7d85);
      *(undefined4 *)(in_ep + 0x7c) = in_r27;
      uVar7 = uVar9 | (uint)(10 < bVar5) << 3;
      uVar8 = uVar8 & in_r14;
      uVar6 = in_r16;
      if (SUB41(uVar9 >> 4,0)) {
        iVar2 = (int5)(int)in_r13 - (int5)(int)in_r15;
        bVar1 = in_r13 < in_r15;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        in_r15 = (uint)iVar2;
        uVar9 = (uint)((SUB41(uVar9 >> 4,0) || bVar1) || in_r16 < 0xfffff07c) << 4;
        goto LAB_000405fe;
      }
      uVar9 = uVar7;
      if (!(bool)((byte)(uVar7 >> 3) & 1)) {
        *(undefined4 *)(in_ep + 0x74) = in_lp;
        *(short *)(in_ep + 0x80) = (short)param_1;
        return;
      }
    }
    uVar9 = uVar9 & 0xfffffff0;
    *(undefined2 *)(in_ep + 0x5a) = 0;
    in_r16 = uVar6;
    uVar7 = uVar8;
  } while( true );
}


// ==== FUN_00040b86 @ 00040b86 (size 80) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00040b9e) overlaps instruction at (ram,0x00040b9c)
    */
/* WARNING: Removing unreachable block (ram,0x00040ba8) */

void FUN_00040b86(void)

{
  int iVar1;
  undefined4 in_r27;
  int in_r28;
  int in_ep;
  undefined4 in_lp;
  
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  iVar1 = in_r28 + -0x14;
  if ((iVar1 < 0 == (in_r28 + -10 < 0 && -1 < iVar1) && in_r28 + -10 != 10) || (iVar1 >= 0)) {
    *(undefined4 *)(in_ep + 0x74) = in_lp;
  }
  else {
    *(undefined4 *)(in_ep + 0x7c) = in_r27;
  }
  return;
}


// ==== FUN_00040fc4 @ 00040fc4 (size 272) ====

/* WARNING: Removing unreachable block (ram,0x0004104e) */

void FUN_00040fc4(void)

{
  ushort uVar1;
  undefined2 uVar2;
  uint in_r1;
  undefined2 uVar3;
  short unaff_gp;
  short sVar4;
  undefined2 in_r10;
  undefined4 in_r11;
  short in_r16;
  short in_r22;
  int in_r23;
  short in_r29;
  int in_ep;
  uint uVar5;
  int iVar6;
  short in_lp;
  
  uVar2 = *(undefined2 *)(in_ep + 2);
  uVar5 = (uint)*(ushort *)(in_ep + 0x18);
  sVar4 = in_r16 - unaff_gp;
  *(short *)(uVar5 + 0x8e) = sVar4;
  *(undefined2 *)(uVar5 + 2) = uVar2;
  *(short *)(uVar5 + 0x44) = (short)in_r11;
  *(undefined2 *)(uVar5 + 0xc2) = in_r10;
  uVar3 = SUB42(&stack0x00000000,0);
  *(undefined2 *)(uVar5 + 0xd0) = uVar3;
  *(undefined2 *)(uVar5 + 2) = uVar2;
  *(short *)(uVar5 + 0x44) = (short)in_r11;
  *(undefined2 *)(uVar5 + 0xc2) = in_r10;
  *(undefined4 *)(uVar5 + 0xe0) = in_r11;
  *(undefined2 *)(uVar5 + 0x48) = uVar3;
  *(short *)(uVar5 + 0x52) = sVar4;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined2 *)(uVar5 + 0x36) = uVar3;
  *(undefined4 *)(uVar5 + 0xe4) = in_r11;
  *(short *)(uVar5 + 0x50) = sVar4;
  uVar1 = *(ushort *)(uVar5 + 0x18);
  *(undefined2 *)(uVar1 + 0x38) = uVar3;
  iVar6 = *(int *)(uVar1 + 0xf8);
  sVar4 = in_r22 - sVar4;
  *(short *)(iVar6 + 0x8e) = sVar4;
  *(short *)((in_r1 | 0x247c) + 0x1ce8) = in_r29 * in_r29 * in_lp;
  *(short *)(iVar6 + 4) = (short)*(undefined4 *)(iVar6 + 4);
  *(undefined2 *)(iVar6 + 0xe2) = *(undefined2 *)(iVar6 + 0x44);
  uVar5 = (uint)*(ushort *)(iVar6 + 0x18);
  *(undefined2 *)(uVar5 + 0x48) = uVar3;
  *(short *)(uVar5 + 0x52) = sVar4;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined2 *)(uVar5 + 0x36) = uVar3;
  *(short *)(uVar5 + 0x50) = sVar4;
  uVar1 = *(ushort *)(uVar5 + 0x18);
  *(undefined2 *)(uVar1 + 0x38) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000410d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000410d4 + *(short *)(&DAT_000410d4 + in_r23 * 2) * 2))
            (*(undefined2 *)(uVar1 + 8));
  return;
}


// ==== FUN_000419c8 @ 000419c8 (size 100) ====

void FUN_000419c8(void)

{
  ushort uVar1;
  undefined2 unaff_gp;
  undefined2 in_r14;
  int in_r28;
  int in_ep;
  uint uVar2;
  undefined2 in_lp;
  
  *(undefined2 *)(in_ep + 0x4e) = in_r14;
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined2 *)(uVar1 + 0x52) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar2 + 0x50) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined2 *)(in_r28 + 0x2490) = in_lp;
  uVar2 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18) + 0x18);
  *(undefined2 *)(uVar2 + 0x4e) = in_r14;
  (*(code *)&LAB_00000030)(*(undefined2 *)(uVar2 + 2));
  return;
}


// ==== FUN_000423ee @ 000423ee (size 64) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000423ee(void)

{
  undefined2 in_r15;
  int in_ep;
  
  __nop();
  *(undefined2 *)(in_ep + 0x2c) = in_r15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042482 @ 00042482 (size 26) ====

void FUN_00042482(int param_1)

{
  int in_r2;
  undefined1 in_r16;
  
  *(undefined1 *)(param_1 + 0xf2c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x0004249a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004249c + *(short *)(&DAT_0004249c + in_r2 * 2) * 2))();
  return;
}


// ==== FUN_0004251a @ 0004251a (size 32) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004251a(void)

{
  ushort uVar1;
  undefined4 unaff_gp;
  int unaff_tp;
  int in_r10;
  undefined1 in_r16;
  int in_ep;
  
  uVar1 = *(ushort *)(in_ep + 0x88);
  *(undefined4 *)(in_ep + 0x3c) = unaff_gp;
  *(short *)(in_ep + 0xd0) = (short)in_r10;
  *(undefined1 *)(in_r10 + 0x5d48) = in_r16;
  *(undefined1 *)(unaff_tp + 0xb0) = in_r16;
  *(undefined1 *)(uVar1 + 0x5928) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042650 @ 00042650 (size 30) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042650(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042700 @ 00042700 (size 26) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042700(void)

{
  undefined2 in_r10;
  int in_ep;
  
  *(undefined2 *)(in_ep + 0x88) = in_r10;
  *(undefined4 *)(in_ep + 0x40) = *(undefined4 *)(in_ep + 0x44);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004272c @ 0004272c (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004272c(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined2 in_r15;
  int in_r21;
  uint uVar3;
  
  uVar2 = *(undefined4 *)(in_r21 + 0x40);
  uVar1 = *(ushort *)(in_r21 + 0xf8);
  *(undefined4 *)(uVar1 + 0x48) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined4 *)(uVar3 + 0x5c) = uVar2;
  *(undefined2 *)(*(ushort *)(uVar3 + 0x18) + 0xc) = in_r15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042760 @ 00042760 (size 28) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042760(void)

{
  uint in_r2;
  undefined4 in_r13;
  uint in_r21;
  int in_ep;
  
  *(undefined4 *)(*(ushort *)(in_ep + 6) + 8) = in_r13;
  *(undefined2 *)((in_r21 ^ in_r2) + 0xc) = 0xffff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000427f6 @ 000427f6 (size 284) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000428a2) */
/* WARNING: Removing unreachable block (ram,0x00042860) */
/* WARNING: Removing unreachable block (ram,0x0004285a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000427f6(int param_1,int param_2)

{
  int5 iVar1;
  ushort uVar2;
  undefined4 unaff_gp;
  undefined4 uVar3;
  undefined2 in_r15;
  undefined1 in_r17;
  int in_r20;
  int in_r28;
  int in_ep;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined2 in_lp;
  
  uVar2 = *(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar2 + 0x60) = unaff_gp;
  iVar1 = (int5)in_r20 + 5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar4 = (uint)*(ushort *)(uVar2 + 0x18);
  iVar1 = (int5)(int)iVar1 + 1;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(in_r28 + 0x2502) = in_lp;
  *(int *)(uVar4 + 4) = (int)iVar1;
  *(undefined2 *)(uVar4 + 0x3e) = in_r15;
  uVar3 = *(undefined4 *)(*(ushort *)(uVar4 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x18) + 8) = uVar3;
  Ram00000011 = uVar3;
  _DAT_00004a0b = in_lp;
  _DAT_00004a27 = in_lp;
  *(undefined1 *)(param_2 + 0x49f8) = in_r17;
  __synchronize();
  puVar5 = (undefined4 *)(uint)_DAT_00000044;
  puVar5[3] = _DAT_00000070;
  puVar5[4] = *puVar5;
  uVar2 = *(ushort *)(puVar5 + 6);
  *(undefined1 *)(param_2 + 0x49f8) = 0;
  iVar6 = (int)(short)*(undefined4 *)(uVar2 + 0x14) * (int)(short)uVar2;
  __synchronize();
  uVar4 = (uint)*(ushort *)(iVar6 + 0x18);
  *(undefined4 *)(uVar4 + 4) = *(undefined4 *)(iVar6 + 0x18);
  uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  *(uint *)(uVar4 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar4 + 0x18) + 0x44) = *(undefined4 *)(uVar4 + 0x48);
  *(undefined1 *)(param_2 + 0x1078) = 0;
  iVar1 = (int5)(int)&stack0x252e0000 + 2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(param_1 + 0x4000) = (char)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c0a @ 00042c0a (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042c0a(undefined2 param_1)

{
  int in_r2;
  undefined1 unaff_sp;
  undefined4 unaff_gp;
  undefined4 uVar1;
  undefined1 in_r14;
  undefined1 in_r23;
  int in_ep;
  uint uVar2;
  
  *(undefined2 *)(in_ep + 0x60) = param_1;
  *(undefined1 *)(in_ep + 0x17) = in_r14;
  *(undefined4 *)(in_ep + 0x28) = unaff_gp;
  uVar1 = *(undefined4 *)(in_ep + 0x80);
  DAT_ffffad02 = unaff_sp;
  *(undefined1 *)(in_r2 + 8000) = 0xf6;
  uVar2 = (uint)*(byte *)(*(ushort *)(in_ep + 0x18) + 0x7c);
  *(short *)(uVar2 + 0x60) = (short)uVar1;
  *(undefined1 *)(uVar2 + 0x17) = in_r23;
  *(undefined2 *)(uVar2 + 0x60) = *(undefined2 *)(uVar2 + 0x60);
  *(undefined4 *)(uVar2 + 0x28) = *(undefined4 *)(uVar2 + 0x28);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c3a @ 00042c3a (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042c3a(undefined2 param_1)

{
  undefined4 unaff_gp;
  undefined1 in_r14;
  int in_ep;
  
  *(undefined2 *)(in_ep + 0x60) = param_1;
  *(undefined1 *)(in_ep + 0x17) = in_r14;
  *(undefined2 *)(in_ep + 0x60) = *(undefined2 *)(in_ep + 0x60);
  *(undefined4 *)(in_ep + 0x28) = unaff_gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c7c @ 00042c7c (size 106) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00042d56) */

void FUN_00042c7c(int param_1,undefined2 param_2)

{
  int iVar1;
  uint in_r1;
  int unaff_tp;
  int in_r10;
  undefined1 in_r16;
  undefined4 in_r19;
  int in_r22;
  uint uVar3;
  int5 iVar2;
  
  *(undefined1 *)(unaff_tp + 0xb0) = in_r16;
  iVar2 = (int5)(int)((in_r1 | 0x2517) - 0xc) + -0x2514;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar1 = (int)iVar2;
  if ((int)((in_r1 | 0x2517) - 0x2520) < 0) {
    if ((int)(*(byte *)(in_r1 - 0x1980) - 0xb) < 0) {
      *(undefined4 *)(in_r22 + -0xcc6) = in_r19;
      iVar2 = (int5)iVar1 + -5;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
                    /* WARNING: Could not recover jumptable at 0x00042cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00042cae + *(short *)(&DAT_00042cae + in_r10 * 2) * 2))
                (*(undefined2 *)((int)iVar2 + 2));
      return;
    }
    *(undefined1 *)(param_1 + 0x251a) = in_r16;
    *(undefined1 *)(iVar1 + 0x40) = 0;
    *(undefined1 *)(param_1 + 0x251b) = in_r16;
    *(undefined1 *)(param_1 + 0x251c) = in_r16;
    *(undefined1 *)(param_1 + 0x251d) = in_r16;
    *(undefined2 *)(iVar1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x251e) = in_r16;
    uVar3 = (uint)*(ushort *)(*(ushort *)(iVar1 + 0x18) + 0x18);
    uRamffffffff = in_r16;
    *(short *)(uVar3 + 0x92) = (short)&stack0x00000000;
    *(short *)(*(ushort *)(uVar3 + 0x18) + 0x98) = (short)&stack0x00000000;
    *(undefined1 *)(param_1 + 0x1172) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(iVar1 + 0x60) = param_2;
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar1 + 0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042d00 @ 00042d00 (size 150) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00042d56) */

void FUN_00042d00(int param_1)

{
  undefined1 in_r16;
  int in_ep;
  uint uVar1;
  
  *(undefined1 *)(param_1 + 0x251c) = in_r16;
  *(undefined1 *)(param_1 + 0x251d) = in_r16;
  *(undefined2 *)(in_ep + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x251e) = in_r16;
  uVar1 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  uRamffffffff = in_r16;
  *(short *)(uVar1 + 0x92) = (short)&stack0x00000000;
  *(short *)(*(ushort *)(uVar1 + 0x18) + 0x98) = (short)&stack0x00000000;
  *(undefined1 *)(param_1 + 0x1172) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00043a40 @ 00043a40 (size 92) ====

void FUN_00043a40(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 unaff_gp;
  undefined4 uVar4;
  int unaff_tp;
  undefined2 in_r15;
  uint in_r16;
  short in_r22;
  undefined1 in_r23;
  int in_r28;
  int in_ep;
  uint uVar5;
  
  *(undefined4 *)(in_ep + 0xc4) = unaff_gp;
  *(undefined2 *)(in_ep + 0xc) = in_r15;
  uVar5 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar5 + 0xcc) = unaff_gp;
  uVar4 = *(undefined4 *)(uVar5 + 0xc4);
  uVar2 = *(ushort *)(uVar5 + 0x18);
  *(undefined4 *)(uVar2 + 0x88) = uVar4;
  uVar5 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined4 *)(uVar5 + 0xcc) = uVar4;
  *(short *)(uVar5 + 0xac) = (short)(in_r16 / (uint)(int)in_r22);
  uVar4 = *(undefined4 *)(uVar5 + 0xc4);
  *(undefined4 *)(uVar5 + 0xc4) = uVar4;
  *(undefined4 *)(uVar5 + 0xc4) = uVar4;
  iVar1 = (int5)in_r28 + -0x2545;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar3 = *(undefined2 *)(*(ushort *)((int)iVar1 + 0x18) + 2);
  *(undefined1 *)(param_1 + 0x4a88) = in_r23;
                    /* WARNING: Could not recover jumptable at 0x00043a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00043a9c + *(short *)(&DAT_00043a9c + unaff_tp * 2) * 2))(uVar3);
  return;
}


// ==== FUN_00044c9c @ 00044c9c (size 790) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_00044c9c(int param_1,int param_2,int param_3)

{
  int5 iVar1;
  int5 iVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint in_r1;
  short in_r2;
  int unaff_tp;
  undefined2 uVar8;
  uint in_r10;
  int in_r13;
  byte bVar9;
  uint in_r15;
  undefined1 uVar10;
  short in_r16;
  undefined2 uVar11;
  uint in_r17;
  uint in_r18;
  uint in_r20;
  uint in_r21;
  uint uVar12;
  uint in_r22;
  int in_r23;
  uint in_r24;
  undefined4 in_r27;
  int in_r28;
  int in_ep;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int in_lp;
  uint in_PSW;
  
  *(char *)(param_3 + 0x25ce) = (char)in_r16;
  uVar5 = *(ushort *)(in_ep + 0x48);
  *(short *)(in_r28 + 0x21b2) = (short)in_lp;
  uVar6 = *(ushort *)(in_ep + 6);
  *(uint *)(in_ep + 0x5c) = in_r15 / (uint)(int)in_r16;
  uVar12 = in_r21 | in_r1;
  do {
    *(short *)(in_ep + 0x82) = (short)param_2;
  } while ((bool)((byte)(in_PSW >> 4) & 1));
  *(undefined1 *)(in_r10 + 0x258c) = 0xf6;
  *(short *)(in_r28 + 0x2580) = (short)in_ep;
  if (in_r10 < 0xfffffff0 || in_ep == 0) {
    *(undefined4 *)(in_ep + 0x7c) = in_r27;
    uVar10 = (undefined1)*(undefined2 *)(in_ep + 0xf6);
    *(undefined1 *)(in_r13 + 0x14) = uVar10;
    *(undefined1 *)(param_3 + 0x1078) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00044d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00044d08 + *(short *)(&DAT_00044d08 + in_r2 * 0x10) * 2))();
    return;
  }
  uVar13 = (uint)*(byte *)(in_ep + 0x7c);
  uVar8 = *(undefined2 *)(uVar13 + 0x62);
  uVar7 = *(ushort *)(uVar13 + 0x10);
  piVar14 = (int *)(uint)uVar7;
  piVar14[0x10] = (int)(in_r17 | in_r22) >> 0x1c;
  iVar1 = (int5)(int)((longlong)in_lp * (longlong)(int)uVar13) - (int5)param_2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(uVar5 + 0x2608) = (char)((ulonglong)((longlong)in_lp * (longlong)(int)uVar13) >> 0x20);
  *(ushort *)(piVar14 + 0x18) = uVar5;
  *(undefined1 *)((int)piVar14 + 0x17) = *(undefined1 *)((int)piVar14 + 0x17);
  *piVar14 = param_3;
  *(undefined2 *)((int)piVar14 + 0x92) = uVar8;
  uVar13 = (int)iVar1 - param_1;
  uVar15 = (uint)piVar14 | uVar12;
  uVar8 = (undefined2)*(undefined4 *)(uVar15 + 0x60);
  *(undefined2 *)(uVar15 + 0x60) = uVar8;
  bVar9 = (byte)in_r23;
  *(byte *)(uVar15 + 0x47) = bVar9;
  iVar1 = (int5)param_2 + (int5)in_r23;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar2 = (int5)(int)((in_r15 / (uint)(int)in_r16) /
                     (uint)(int)(short)(uVar7 ^ 0xfff3 | (ushort)in_r23)) + -0xf;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar2 = -(int5)(int)iVar2;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  uVar5 = *(ushort *)(uVar15 + 0x62);
  *(short *)(uVar15 + 0x5c) = (short)param_3;
  uVar11 = (undefined2)(unaff_tp - 0x26d0U);
  DAT_00000100 = SUB41(&DAT_ffffe08a + unaff_tp,0);
  *(undefined2 *)(uVar15 + 0x60) = uVar8;
  *(char *)(uVar15 + 0x17) = (char)iVar1;
  if (&DAT_ffffe08a + unaff_tp < (undefined1 *)0x75a) {
    *(ushort *)(uVar15 + 0x9a) = uVar5;
    uVar15 = uVar15 | in_r24;
    uVar8 = (undefined2)*(undefined4 *)(uVar15 + 0x60);
    *(undefined2 *)(uVar15 + 0x60) = uVar8;
    *(byte *)(uVar15 + 0x47) = bVar9;
    iVar1 = (int5)param_2 + (int5)in_r23;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(short *)(uVar15 + 0x5c) = (short)in_r1 + -0x7ee9;
    DAT_00000100 = *(undefined1 *)(uVar15 + 0x11);
    *(undefined2 *)(in_r1 - 0x7e89) = uVar8;
    uVar8 = *(undefined2 *)(in_r1 - 0x7e89);
    *(char *)(in_r1 - 0x7ed2) = (char)iVar1;
    *(undefined2 *)(in_r1 - 0x7e89) = uVar8;
    *(undefined1 *)(in_r1 - 0x7ed2) = *(undefined1 *)(in_r1 - 0x7ed2);
    __nop();
    *(uint *)(in_r1 - 0x7e75) = uVar13 - unaff_tp;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar3 = (uint)uVar6 - param_2;
  uVar8 = *(undefined2 *)(*(ushort *)(uVar15 + 0x18) + 0xe4);
  iVar1 = (int5)(int)in_r1 - (int5)(int)iVar2;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar16 = (uint)*(ushort *)(*(ushort *)(uVar15 + 0x18) + 0x18);
  if (((int)(in_r1 - (int)iVar2) < 0) &&
     (-1 < (int)(~in_r20 | uVar13 | (uint)*(ushort *)(uVar15 + 2)))) {
    *(short *)(uVar16 + 0x2c) = (short)iVar1;
    if (0xfffffffb < uVar16) goto LAB_00044e9e;
    *(undefined2 *)(uVar16 + 0x60) = *(undefined2 *)(uVar16 + 0xd0);
    uVar6 = *(ushort *)(uVar16 + 0x18);
    if ((unaff_tp - 0x26d0U & 0x200) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(ushort *)(uVar6 + 0xc) = (ushort)unaff_tp | 0x8012;
    uVar16 = (uint)*(ushort *)(uVar6 + 0x1a);
  }
  uVar11 = SEXT12(*(char *)(in_r18 - 0x5bff));
  *(uint *)(uVar16 + 4) = (uint)*(ushort *)(uVar16 + 0x8e);
  uVar8 = *(undefined2 *)(uVar16 + 0xc4);
  *(uint *)(uVar16 + 0x24) = in_r18;
LAB_00044e9e:
  if (in_r18 < 0xfffff07c) {
    *(undefined2 *)(uVar16 + 0x4c) = *(undefined2 *)(uVar16 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar13 = (uint)*(ushort *)(*(int *)(uVar16 + 0xf8) + 0x18);
  *(char *)(uVar13 + 0x27) = (char)*(undefined2 *)(uVar16 + 0x4e);
  uVar13 = (uint)*(ushort *)(uVar13 + 0xf8);
  *(ushort *)(uVar13 + 0xae) = (ushort)(~uVar3 / 0xfffffff0) | (ushort)uVar3;
  *(undefined2 *)(uVar13 + 0xae) = uVar11;
  if ((int)in_r18 < 0 != (int)uVar12 < 0 && (int)uVar12 < 0 == (int)(in_r18 - uVar12) < 0) {
    *(undefined2 *)(uVar13 + 0x42) = uVar8;
    *(undefined2 *)(uVar13 + 0x88) = *(undefined2 *)(uVar13 + 0x88);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(uVar13 + 0x40) = uVar11;
  bVar4 = *(byte *)(uVar13 + 0x17);
  *(byte *)(uVar13 + 0x17) = bVar4;
  iVar1 = (int5)in_r23 - (int5)(int)(uint)bVar4;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar12 = (uint)*(ushort *)(uVar13 + 0x18);
  *(char *)(uVar12 + 0x17) = (char)iVar1;
  *(byte *)(uVar12 + 0x47) = bVar9;
  iVar1 = (int5)(int)uVar3 + (int5)in_r23;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(uVar12 + 0x50) = *(undefined2 *)(uVar12 + 0x60);
  uVar12 = (uint)*(byte *)(uVar12 + 0x7c);
  uVar6 = *(ushort *)(uVar12 + 0x60);
  *(ushort *)(uVar12 + 0x60) = uVar6;
  *(char *)(uVar12 + 0x27) = (char)iVar1;
  uVar8 = *(undefined2 *)(uVar12 + 0x8e);
  bVar4 = *(byte *)(uVar12 + 0x17);
  *(byte *)(uVar12 + 0x17) = bVar4;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(uint *)(uVar12 + 0x40) = (uint)uVar6;
  *(undefined2 *)(uVar12 + 0x8e) = uVar8;
  *(byte *)(uVar12 + 0x17) = bVar4 | bVar9;
                    /* WARNING: Could not recover jumptable at 0x00044fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00044fe4 + *(short *)(&DAT_00044fe4 + (uint)uVar5 * 2) * 2))
            (*(undefined2 *)(*(ushort *)(uVar12 + 0x18) + 0x88),*(undefined2 *)(uVar12 + 0x50));
  return;
}


// ==== FUN_000452e6 @ 000452e6 (size 304) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000452e6(undefined4 param_1)

{
  undefined2 uVar1;
  undefined2 in_r2;
  undefined2 in_r10;
  undefined4 in_r20;
  undefined2 in_r23;
  int in_r29;
  int in_ep;
  uint uVar2;
  undefined2 in_lp;
  
  *(undefined2 *)(in_ep + 0x54) = in_r2;
  *(undefined4 *)(in_ep + 0x7c) = param_1;
  *(short *)(in_ep + 0x60) = (short)param_1;
  *(undefined2 *)(in_ep + 0x54) = in_r2;
  uVar1 = *(undefined2 *)(in_ep + 0x86);
  *(undefined1 *)(in_ep + 0x7f) = 0;
  *(undefined2 *)(in_ep + 0x56) = in_r2;
  __nop();
  *(undefined2 *)(in_ep + 0x54) = in_r2;
  *(undefined4 *)(in_ep + 0x38) = in_r20;
  uVar2 = (uint)*(ushort *)(in_ep + 0x1a);
  *(undefined2 *)(uVar2 + 0x54) = in_r2;
  *(undefined2 *)(uVar2 + 0x86) = uVar1;
  *(undefined1 *)(uVar2 + 0x7f) = 0;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar2 + 0x7f) = 0;
  *(undefined2 *)(uVar2 + 0x52) = in_r2;
  uVar2 = (uint)*(ushort *)(uVar2 + 0x1a);
  *(undefined2 *)(uVar2 + 0x54) = in_r2;
  __synchronize();
  *(undefined2 *)(uVar2 + 0x54) = in_r2;
  *(undefined2 *)(uVar2 + 0x86) = *(undefined2 *)(uVar2 + 0x86);
  __synchronize();
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  uVar1 = *(undefined2 *)(uVar2 + 0x86);
  __synchronize();
  *(undefined2 *)(uVar2 + 0x52) = in_r2;
  *(undefined2 *)(in_r29 + 0x14aa) = in_lp;
  *(undefined2 *)(uVar2 + 0x56) = in_r2;
  *(undefined2 *)(uVar2 + 0x8e) = in_r10;
  *(undefined2 *)(uVar2 + 0x52) = in_r2;
  *(undefined2 *)(uVar2 + 0x52) = in_r2;
  *(undefined2 *)(uVar2 + 0x8e) = uVar1;
  *(undefined2 *)(uVar2 + 0x56) = in_r2;
  *(undefined2 *)(*(int *)(uVar2 + 0xf8) + 0x3e) = in_r23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00045df4 @ 00045df4 (size 80) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00045df4(int param_1)

{
  int5 iVar1;
  undefined1 in_r16;
  undefined4 in_r27;
  int in_ep;
  
  iVar1 = (int5)(int)(uint)*(byte *)(in_ep + 0x3b) + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
  __nop();
  *(undefined1 *)(param_1 + 0x14) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00046756 @ 00046756 (size 804) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00046a4a) overlaps instruction at (ram,0x00046a48)
    */
/* WARNING: Removing unreachable block (ram,0x000467d2) */
/* WARNING: Removing unreachable block (ram,0x000467d8) */
/* WARNING: Removing unreachable block (ram,0x000467da) */
/* WARNING: Removing unreachable block (ram,0x000467e0) */
/* WARNING: Removing unreachable block (ram,0x000467e6) */
/* WARNING: Removing unreachable block (ram,0x000467f6) */
/* WARNING: Removing unreachable block (ram,0x000467fc) */
/* WARNING: Removing unreachable block (ram,0x00046830) */
/* WARNING: Removing unreachable block (ram,0x00046838) */
/* WARNING: Removing unreachable block (ram,0x0004685c) */
/* WARNING: Removing unreachable block (ram,0x00046860) */
/* WARNING: Removing unreachable block (ram,0x00046862) */
/* WARNING: Removing unreachable block (ram,0x00046866) */
/* WARNING: Removing unreachable block (ram,0x0004687a) */
/* WARNING: Removing unreachable block (ram,0x0004696e) */
/* WARNING: Removing unreachable block (ram,0x00046880) */
/* WARNING: Removing unreachable block (ram,0x0004688c) */
/* WARNING: Removing unreachable block (ram,0x0004688e) */
/* WARNING: Removing unreachable block (ram,0x0004689e) */
/* WARNING: Removing unreachable block (ram,0x000468aa) */
/* WARNING: Removing unreachable block (ram,0x000468f4) */
/* WARNING: Removing unreachable block (ram,0x0004696c) */
/* WARNING: Removing unreachable block (ram,0x0004697c) */
/* WARNING: Removing unreachable block (ram,0x00046982) */
/* WARNING: Removing unreachable block (ram,0x0004698a) */
/* WARNING: Removing unreachable block (ram,0x00046990) */
/* WARNING: Removing unreachable block (ram,0x0004699e) */
/* WARNING: Removing unreachable block (ram,0x000469a0) */
/* WARNING: Removing unreachable block (ram,0x000469a4) */
/* WARNING: Removing unreachable block (ram,0x000469c2) */
/* WARNING: Removing unreachable block (ram,0x000469c4) */
/* WARNING: Removing unreachable block (ram,0x000469d0) */
/* WARNING: Removing unreachable block (ram,0x000469f0) */
/* WARNING: Removing unreachable block (ram,0x00046a02) */
/* WARNING: Removing unreachable block (ram,0x00046a4a) */
/* WARNING: Removing unreachable block (ram,0x00046a0c) */
/* WARNING: Removing unreachable block (ram,0x00046a20) */
/* WARNING: Removing unreachable block (ram,0x00046a2a) */
/* WARNING: Removing unreachable block (ram,0x00046a3c) */
/* WARNING: Removing unreachable block (ram,0x00046a4e) */
/* WARNING: Removing unreachable block (ram,0x00046a9a) */
/* WARNING: Removing unreachable block (ram,0x00046a9c) */
/* WARNING: Removing unreachable block (ram,0x00046aa6) */
/* WARNING: Removing unreachable block (ram,0x00046a52) */
/* WARNING: Removing unreachable block (ram,0x00046a60) */
/* WARNING: Removing unreachable block (ram,0x00046aa8) */
/* WARNING: Removing unreachable block (ram,0x00046aaa) */
/* WARNING: Removing unreachable block (ram,0x00046ac2) */
/* WARNING: Removing unreachable block (ram,0x00046b8c) */
/* WARNING: Removing unreachable block (ram,0x00046b92) */
/* WARNING: Removing unreachable block (ram,0x00046b96) */
/* WARNING: Removing unreachable block (ram,0x00046b9e) */
/* WARNING: Removing unreachable block (ram,0x00046bba) */
/* WARNING: Removing unreachable block (ram,0x00046a72) */
/* WARNING: Removing unreachable block (ram,0x00046a82) */
/* WARNING: Removing unreachable block (ram,0x00046a84) */
/* WARNING: Removing unreachable block (ram,0x00046aca) */
/* WARNING: Removing unreachable block (ram,0x00046adc) */
/* WARNING: Removing unreachable block (ram,0x00046aee) */
/* WARNING: Removing unreachable block (ram,0x00046af2) */
/* WARNING: Removing unreachable block (ram,0x00046b0c) */
/* WARNING: Removing unreachable block (ram,0x00046b10) */
/* WARNING: Removing unreachable block (ram,0x00046b12) */
/* WARNING: Removing unreachable block (ram,0x00046b24) */
/* WARNING: Removing unreachable block (ram,0x00046b2a) */

void FUN_00046756(int param_1)

{
  bool bVar1;
  int5 iVar2;
  int5 iVar3;
  byte bVar4;
  ushort uVar5;
  int in_r1;
  uint in_r2;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_tp;
  int in_r10;
  int in_r13;
  undefined4 in_r14;
  uint in_r15;
  uint uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  int in_r20;
  uint uVar11;
  uint in_r22;
  uint in_r25;
  int in_r26;
  uint uVar12;
  uint in_r27;
  int iVar13;
  int in_r28;
  int in_ep;
  uint in_lp;
  ushort *in_CTBP;
  
  while( true ) {
    iVar13 = in_r28 + -10;
    uVar6 = (uint)*(byte *)(in_ep + 0x25);
    uVar10 = ~in_r2;
    uVar7 = in_r15 & in_r25;
    *(char *)(in_r1 + 100) = (char)uVar10;
    if (-1 < (int)uVar7) break;
    in_r10 = func_0xfff947ec();
    iVar13 = iVar13 + -10;
    UNRECOVERED_JUMPTABLE = (code *)(uint)*(byte *)(in_ep + 0x25);
    iVar2 = (int5)(int)uVar10 - (int5)(int)UNRECOVERED_JUMPTABLE;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar9 = (int)iVar2;
    while( true ) {
      iVar2 = (int5)iVar9 + 2;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      uVar7 = uVar7 & in_r25;
      if (-1 < (int)uVar7) break;
      in_lp = (uint)(byte)(&DAT_ffffe081)[in_r20];
      iVar13 = (in_r20 - iVar13) + -10;
      iVar2 = (int5)(int)iVar2 - (int5)(int)(uint)*(byte *)(in_ep + 0x25);
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      iVar2 = (int5)(int)iVar2 + 2;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      iVar9 = (int)iVar2;
      while( true ) {
        in_r15 = uVar7 & in_r25;
        if (-1 < (int)in_r15) {
          iVar2 = (int5)in_r10 - (int5)iVar13;
          if (iVar2 < 0x80000000) {
            if (iVar2 < -0x80000000) {
              iVar2 = -0x80000000;
            }
          }
          else {
            iVar2 = 0x7fffffff;
          }
          iVar13 = (int)iVar2;
          goto code_r0x00046754;
        }
        func_0xfff9481e();
        iVar13 = (unaff_tp - iVar13) + -10;
        UNRECOVERED_JUMPTABLE = (code *)(uint)*(byte *)(in_ep + 0x25);
        *(char *)(param_1 + 0x8c4) = (char)iVar9;
        if (iVar9 <= 0x7fffffff) {
          if (iVar9 < -0x80000000) {
            iVar9 = -0x80000000;
          }
        }
        else {
          iVar9 = 0x7fffffff;
        }
        iVar2 = (int5)iVar9 - (int5)(int)UNRECOVERED_JUMPTABLE;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar2 = (int5)(int)iVar2 + 2;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar9 = (int)iVar2;
        in_r10 = (*(code *)((int)in_CTBP + (uint)in_CTBP[0x12]))();
        iVar2 = (int5)in_r10 - (int5)iVar13;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar13 = (int)iVar2;
        uVar7 = in_r15 & in_r25;
        if (-1 < (int)uVar7) break;
        in_r10 = func_0xfff8e8b6();
        bVar4 = *(byte *)(in_ep + 0x25);
        iVar2 = (int5)iVar9 - (int5)(int)(uint)bVar4;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar2 = (int5)(int)iVar2 + 2;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar9 = (int)iVar2;
        in_r25 = in_r25 & 0xffff;
        *(char *)(param_1 + 0x8c4) = (char)iVar2;
        iVar2 = (int5)in_r10 - (int5)(iVar13 + -10);
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar13 = (int)iVar2;
        uVar7 = uVar7 & in_r25;
        in_lp = (uint)*(ushort *)(bVar4 + 0x194);
      }
    }
    iVar2 = (int5)(int)UNRECOVERED_JUMPTABLE + (int5)in_r1;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    in_r1 = (int)iVar2;
code_r0x0004673e:
    in_r15 = uVar7 & in_r25;
    if (-1 < (int)in_r15) {
                    /* WARNING: Could not recover jumptable at 0x0004670e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    in_lp = 0x46754;
    in_r10 = func_0xfff947da();
code_r0x00046754:
    in_r28 = in_r20 - iVar13;
  }
LAB_00046728:
  uVar7 = uVar7 & in_r25;
  bVar1 = (int)uVar7 < 0;
  uVar12 = in_r27;
  if (!bVar1) {
    do {
      in_r27 = in_lp;
      uVar11 = in_r22;
      if (bVar1) {
        iVar2 = (int5)(int)in_r2 - (int5)iVar13;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar13 = (in_r10 - (int)iVar2) + -10;
        uVar6 = (uint)*(byte *)(in_ep + 0x25);
        *(char *)(param_1 + 0x8c4) = (char)uVar10;
        if ((int)uVar10 <= 0x7fffffff) {
          if ((int)uVar10 < -0x80000000) {
            uVar10 = 0x80000000;
          }
        }
        else {
          uVar10 = 0x7fffffff;
        }
        iVar2 = (int5)(int)uVar10 - (int5)(int)uVar6;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar2 = (int5)(int)iVar2 + 2;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        iVar9 = (int)iVar2;
        uVar7 = uVar7 & in_r25;
        *(char *)(in_r1 + 100) = (char)iVar2;
        uVar12 = in_r27;
        if ((int)uVar7 < 0) goto code_r0x00046712;
      }
      else {
        uVar10 = (uint)(0xb < uVar10) << 3;
        *(short *)(in_ep + 0x28) = (short)&stack0x00000000;
        in_r10 = (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
        if ((bool)((byte)(uVar10 >> 3) & 1)) {
          FUN_0004e8a2();
                    /* WARNING: Could not recover jumptable at 0x00046684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00046686 + *(short *)(&DAT_00046686 + in_r2 * 2) * 2))();
          return;
        }
        *(char *)(in_ep + 3) = (char)in_r14;
        iVar13 = (int)*(char *)(param_1 + -0x7d85);
        iVar2 = (int5)in_r26 + 0xb;
        if (iVar2 < 0x80000000) {
          if (iVar2 < -0x80000000) {
            iVar2 = -0x80000000;
          }
        }
        else {
          iVar2 = 0x7fffffff;
        }
        in_r26 = (int)iVar2;
        *(uint *)(in_ep + 0x7c) = uVar12;
        uVar7 = in_r22;
      }
      uVar5 = *(ushort *)(in_ep + 0xf6);
      uVar8 = (undefined1)uVar5;
      *(undefined1 *)(in_r13 + 0x126) = uVar8;
      *(undefined1 *)(in_r13 + 0x14) = uVar8;
      iVar2 = (int5)(int)(uint)uVar5 - (int5)(int)uVar6;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      iVar3 = (int5)(int)iVar2 + 2;
      bVar1 = (int)iVar2 + 2 < 0;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      uVar10 = (uint)iVar3;
      in_r20 = 2;
      *(char *)(param_1 + 0x8c4) = (char)iVar3;
      in_r22 = uVar11;
      in_lp = (uint)*(ushort *)(uVar6 + 0x192);
    } while( true );
  }
  iVar13 = (in_r20 - iVar13) + -10;
  UNRECOVERED_JUMPTABLE = (code *)(uint)*(byte *)(in_ep + 0x25);
  *(char *)(param_1 + 0x8c4) = (char)uVar10;
  goto code_r0x0004673e;
code_r0x00046712:
  in_lp = 0x46716;
  in_r10 = func_0xfff94794();
  iVar13 = iVar13 + -10;
  uVar6 = (uint)*(byte *)(in_ep + 0x25);
  *(char *)(param_1 + 0x8c4) = (char)iVar9;
  if (iVar9 <= 0x7fffffff) {
    if (iVar9 < -0x80000000) {
      iVar9 = -0x80000000;
    }
  }
  else {
    iVar9 = 0x7fffffff;
  }
  iVar2 = (int5)iVar9 - (int5)(int)uVar6;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar2 = (int5)(int)iVar2 + 2;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  uVar10 = (uint)iVar2;
  goto LAB_00046728;
}


// ==== FUN_000469d2 @ 000469d2 (size 388) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00046a4a) overlaps instruction at (ram,0x00046a48)
    */
/* WARNING: Removing unreachable block (ram,0x00046a3c) */

void FUN_000469d2(short *param_1)

{
  bool bVar1;
  int iVar2;
  int5 iVar3;
  ushort uVar4;
  int in_r1;
  uint unaff_gp;
  ushort uVar5;
  ushort in_r13;
  undefined1 in_r14;
  uint in_r16;
  int iVar6;
  uint in_r20;
  uint in_r22;
  uint in_r23;
  uint uVar7;
  ushort *in_ep;
  short in_lp;
  uint uVar8;
  uint uVar9;
  
  *(undefined1 *)((int)in_ep + 0x17) = in_r14;
  iVar6 = (int)*param_1;
  iVar3 = (int5)(int)in_r16 - (int5)(int)unaff_gp;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  uVar7 = (uint)iVar3;
  uVar8 = (int)(short)unaff_gp * (int)in_lp;
  in_ep[0x30] = in_ep[0x23];
  if (uVar7 != 0) {
    uVar5 = (ushort)*(byte *)(in_r20 + 0x4c22);
    if (in_r16 < unaff_gp) {
      in_ep = (ushort *)(uint)in_ep[0xc];
      in_ep[0x29] = (ushort)&stack0x00000000;
      bVar1 = (int)uVar7 < 0;
      uVar8 = uVar7;
      if (!bVar1) {
        in_ep[0x30] = uVar5;
        uVar4 = *in_ep;
        in_ep = *(ushort **)(in_ep + 0x7c);
        in_ep[0x2a] = (ushort)&stack0x00000000;
        uVar9 = (uint)(in_r20 < uVar4) << 3;
        goto LAB_00046a72;
      }
    }
    else {
      uVar7 = ~uVar8;
      bVar1 = -1 < (int)uVar8;
      uVar8 = in_r22;
    }
    if (bVar1 || uVar7 == 0) {
      uVar5 = in_ep[0x61];
      iVar3 = (int5)in_r1 - (int5)(int)(uint)in_ep[0x30];
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      *(undefined2 *)((uint)in_ep ^ in_r20) = (short)iVar3;
      ((undefined2 *)((uint)in_ep ^ in_r20))[0x21] = (short)param_1;
    }
    else {
      uVar5 = in_ep[0x30];
      *(char *)((int)in_ep + 0x27) = (char)in_ep[0x27];
      *(uint *)(in_ep + 0x12) = uVar8;
      if ((in_ep[0x35] != 0x80000000 || (short)uVar8 != -1) && (short)uVar8 != 0) {
        *(undefined1 *)((int)in_ep + 0x77) = *(undefined1 *)((int)in_ep + 0x77);
        goto LAB_00046aca;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00046bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00046bc4 + *(short *)(&DAT_00046bc4 + in_r22 * 2) * 2))(uVar5);
    return;
  }
  *(undefined1 *)((int)in_ep + 0x17) = *(undefined1 *)((int)in_ep + 0x17);
  uVar5 = in_ep[0x25];
  iVar6 = (int)*param_1;
  iVar3 = -(int5)(int)unaff_gp;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  uVar7 = (uint)iVar3;
  iVar2 = uVar8 - unaff_gp;
  uVar9 = (uint)(uVar8 < unaff_gp) << 3 | (uint)(iVar2 == 0);
  if (iVar2 < 0 == ((int)uVar8 < 0 != (int)unaff_gp < 0 && (int)unaff_gp < 0 == iVar2 < 0) &&
      !(bool)((byte)uVar9 & 1)) {
    *(uint *)(in_ep + 0x10) = uVar7;
    halt_baddata();
  }
LAB_00046a72:
  in_ep[0x1d] = in_r13;
  uVar8 = uVar7 | in_r23;
  in_ep[0x30] = uVar5;
  if (!SUB41(uVar9 >> 3,0) && uVar8 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00046aca:
  *(int *)(in_ep + 4) = (int)*(char *)(uVar8 + 0x7e85);
  in_ep[0x56] = 0xffff;
  in_ep[0x57] = 0xffff;
  uVar5 = (ushort)DAT_ffffe4ff;
  *in_ep = uVar5;
  in_ep[1] = uVar5;
  *(int *)(in_ep + -0x663) = iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000479a4 @ 000479a4 (size 306) ====

/* WARNING: Instruction at (ram,0x00047ad0) overlaps instruction at (ram,0x00047ace)
    */

void FUN_000479a4(int param_1,int param_2,int param_3)

{
  int5 unaff_0001b100;
  int5 iVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 in_r2;
  ushort uVar4;
  uint in_r12;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 in_r17;
  uint in_r24;
  undefined2 in_r27;
  int in_r29;
  int in_ep;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  int in_lp;
  uint in_PSW;
  
  if (!(bool)((byte)(in_PSW >> 3) & 1) && in_lp != 0) {
    uVar5 = (uint)*(ushort *)(in_ep + 0x18);
    *(undefined2 *)(uVar5 + 0x60) = *(undefined2 *)(uVar5 + 0x60);
    *(undefined2 *)(uVar5 + 0x34) = in_r2;
    *(undefined2 *)(uVar5 + 0xae) = in_r17;
    uVar6 = (uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
    uVar4 = (ushort)*(undefined4 *)(uVar6 + 0x58);
    *(uint *)(uVar6 + 0x8c) = (uint)*(ushort *)(uVar5 + 0x8e);
    *(undefined2 *)(uVar6 + 0x34) = in_r2;
    puVar7 = (ushort *)(uint)*(ushort *)(uVar6 + 0x18);
    if (~in_r24 != 0) {
      bVar2 = (byte)puVar7[1];
      uVar4 = puVar7[0x47];
      puVar7[0x1a] = (ushort)bVar2;
      puVar7[0x1a] = (ushort)bVar2;
      puVar7 = (ushort *)(uint)puVar7[0xc];
      puVar7[0x1a] = (ushort)bVar2;
      puVar7[0x44] = 0;
      puVar7[0x45] = 0;
      puVar7[0x30] = puVar7[0x6c];
      unaff_0001b100 = (int5)param_2 - (int5)(int)(uint)*puVar7;
      if (unaff_0001b100 < 0x80000000) {
        if (unaff_0001b100 < -0x80000000) {
          unaff_0001b100 = 0;
        }
      }
      else {
        unaff_0001b100 = 0x7fffffff;
      }
    }
    *puVar7 = (ushort)unaff_0001b100;
    uVar3 = *(ushort *)(*(ushort *)(puVar7[0xc] + 0x18) + 0x18);
    *(int *)((~in_r24 | 0x2936) + 0x2924) = in_lp;
    *(ushort *)(*(ushort *)(uVar3 + 0x18) + 2) = uVar4;
    *(undefined2 *)(in_r29 + 0x149a) = in_r27;
    iVar1 = (int5)(int)(~in_r12 | 0x2925) + -0x292d;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
                    /* WARNING: Could not recover jumptable at 0x00047aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00047aec + *(short *)(&DAT_00047aec + param_1 * 2) * 2))
              (*(undefined2 *)(*(ushort *)((int)iVar1 + 0x18) + 2));
    return;
  }
  *(short *)(*(char *)(param_3 + -0x7d85) + 0x1900) = (short)in_lp;
  *(undefined4 *)(*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18) + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x000479d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_000485ac @ 000485ac (size 458) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0004872a) overlaps instruction at (ram,0x00048728)
    */
/* WARNING: Removing unreachable block (ram,0x0004874c) */
/* WARNING: Removing unreachable block (ram,0x00048750) */
/* WARNING: Removing unreachable block (ram,0x0004877e) */
/* WARNING: Removing unreachable block (ram,0x00048754) */
/* WARNING: Removing unreachable block (ram,0x0004875e) */

void FUN_000485ac(uint param_1,int param_2)

{
  int5 iVar1;
  int5 iVar2;
  ushort uVar3;
  short sVar4;
  undefined1 in_r14;
  undefined4 in_r15;
  int iVar5;
  int in_r22;
  short in_r27;
  short in_r29;
  int in_ep;
  uint uVar6;
  undefined2 *puVar7;
  
  *(undefined4 *)(in_ep + 0x8c) = in_r15;
  *(undefined1 *)(in_ep + 0x27) = in_r14;
  sVar4 = ~(ushort)param_1 + 0xd07c;
  *(char *)(param_2 + 0x1078) = (char)in_r22;
  uVar3 = *(ushort *)(sVar4 * 0x1a5 + 0x18);
  *(char *)(param_2 + 0x1078) = (char)in_r22;
  *(uint *)(sVar4 * 0x1a5 + 0x20) = (uint)*(ushort *)(uVar3 + 0x22);
  uVar6 = (uint)*(ushort *)(sVar4 * 0x1a5 + 0x18);
  *(short *)(uVar6 + 0x6e) = (short)&stack0x00000000;
  *(char *)(param_2 + 0x1078) = (char)*(undefined2 *)(uVar6 + 0x22);
  iVar5 = 0x260f0003;
  uVar6 = (uint)*(ushort *)(sVar4 * 0x1a5 + 0x18);
  *(ushort *)(uVar6 + 0x60) = (ushort)*(byte *)(sVar4 * 0x1a5 + 0x78);
  *(uint *)(uVar6 + 0x5c) = *(uint *)(uVar6 + 0x20);
  puVar7 = (undefined2 *)(uint)*(ushort *)(uVar6 + 0x1a);
  iVar1 = (int5)(int)param_1 - (int5)(int)(*(uint *)(uVar6 + 0x20) | param_1);
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *puVar7 = (short)iVar1;
  puVar7[0x31] = (short)&stack0x00000000;
  iVar1 = (int5)(int)puVar7 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  if (((int5)(int)(uint)(ushort)puVar7[0xc] + 0xbU < 0x80000000) &&
     ((int5)((int5)(int)(uint)(ushort)puVar7[0xc] + 0xbU) < -0x80000000)) {
    iVar5 = 0x260f0003;
  }
  do {
    *(int *)((int)iVar1 + 0x7c) = (int)in_r29 * (int)in_r27;
    iVar2 = (int5)iVar5 - (int5)in_r22;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar2 = (int5)(int)iVar2 + -0xe;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar5 = (int)iVar2;
    __nop();
  } while( true );
}


// ==== FUN_0004a08c @ 0004a08c (size 80) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0004a128) */

void FUN_0004a08c(int param_1)

{
  undefined1 in_r16;
  undefined4 in_r22;
  int in_ep;
  
  __nop();
  *(undefined1 *)(param_1 + 0x5928) = in_r16;
  *(undefined4 *)(in_ep + 0x20) = in_r22;
  *(char *)(param_1 + 0x5928) = (char)in_r22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004aa20 @ 0004aa20 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004aa20(void)

{
  undefined4 in_r26;
  int in_ep;
  int in_lp;
  
  *(int *)(in_ep + 0x3c) = in_ep;
  *(undefined4 *)(in_ep + 0x3c) = in_r26;
  *(undefined2 *)(in_lp + 0x60) = *(undefined2 *)(in_lp + 0x60);
  *(undefined2 *)(in_lp + 0x7e) = *(undefined2 *)(in_lp + 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004c752 @ 0004c752 (size 30) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004c752(int param_1,int param_2)

{
  undefined1 in_r16;
  
  *(undefined1 *)(param_2 + 0x5526) = in_r16;
  *(undefined1 *)(param_1 + 0x1078) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004c770 @ 0004c770 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004c770(int param_1,int param_2)

{
  undefined1 in_r16;
  
  *(undefined1 *)(param_2 + 0x5526) = in_r16;
  *(undefined1 *)(param_1 + 0x1078) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004c7e4 @ 0004c7e4 (size 148) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004c7e4(int param_1)

{
  int5 iVar1;
  int unaff_gp;
  undefined1 in_r13;
  undefined4 in_r27;
  int in_ep;
  
  *(undefined1 *)(in_ep + 0x1a) = in_r13;
  *(undefined1 *)(in_ep + 0x42) = (&DAT_ffffe256)[unaff_gp];
  *(undefined2 *)(in_ep + 0xd2) = 0;
  iVar1 = (int5)(int)*(char *)(param_1 + -0x984) + -0x25de;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004d076 @ 0004d076 (size 42) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004d076(int param_1)

{
  int in_r10;
  byte in_r16;
  byte in_r18;
  byte in_r27;
  
  *(byte *)(in_r10 + 0x5e56) = in_r16;
  *(byte *)(param_1 + 0x5e38) = in_r16 & in_r18 & in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004d8e4 @ 0004d8e4 (size 43) ====

void FUN_0004d8e4(int param_1)

{
  undefined2 uVar1;
  int unaff_tp;
  undefined1 in_r11;
  code *UNRECOVERED_JUMPTABLE;
  int in_r28;
  int in_lp;
  
  *(short *)(in_r28 + 0x218a) = (short)in_lp;
  uVar1 = *(undefined2 *)(in_lp + 2);
  do {
    *(undefined1 *)(param_1 + 0xf2c) = in_r11;
  } while (unaff_tp + 1 < 0);
                    /* WARNING: Could not recover jumptable at 0x0004d90e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


// ==== FUN_0004e544 @ 0004e544 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e544(void)

{
  int in_r17;
  int in_ep;
  
  *(undefined2 *)(in_ep + 0x60) = *(undefined2 *)(in_ep + 0x60);
  *(short *)(in_ep + 0xae) = (short)(in_r17 >> 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e80c @ 0004e80c (size 44) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e80c(void)

{
  ushort uVar1;
  int unaff_gp;
  undefined2 in_r11;
  char in_r15;
  int in_ep;
  int in_lp;
  
  do {
  } while (in_lp - unaff_gp < 0);
  *(undefined2 *)(in_ep + 0xec) = in_r11;
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(char *)(uVar1 + 0x11) = in_r15 * -10;
  *(undefined2 *)(uVar1 + 0xae) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e8c2 @ 0004e8c2 (size 26) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e8c2(undefined2 param_1)

{
  int in_ep;
  
  *(undefined2 *)(in_ep + 0xd0) = param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004ecf2 @ 0004ecf2 (size 36) ====

void FUN_0004ecf2(void)

{
  undefined2 *in_ep;
  
                    /* WARNING: Could not recover jumptable at 0x0004ed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004ed16 + *(short *)(&DAT_0004ed16 + (int)&stack0x00000000 * 2) * 2))(*in_ep);
  return;
}


// ==== FUN_0004ed8c @ 0004ed8c (size 64) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004ed8c(int param_1)

{
  byte bVar1;
  int in_r10;
  undefined1 in_r16;
  undefined4 in_r27;
  int in_r28;
  int in_ep;
  undefined2 in_lp;
  
  *(undefined2 *)(in_r28 + 0x2b70) = in_lp;
  *(undefined4 *)(in_ep + 0x7c) = in_r27;
  bVar1 = *(byte *)(*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18) + 0xc);
  *(undefined1 *)(in_r10 + 0x5e0e) = in_r16;
  *(undefined1 *)(bVar1 + 0xd1) = in_r16;
  *(undefined1 *)(param_1 + 0x5e0e) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004eed2 @ 0004eed2 (size 58) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004eed2(void)

{
  uint uVar1;
  undefined1 in_r29;
  int in_ep;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(in_ep + 0x18);
  uVar1 = (uint)*(ushort *)(uVar2 + 2);
  func_0xfff1c46e();
  *(undefined1 *)(uVar1 + 0x5928) = in_r29;
  *(undefined2 *)(uVar2 + 0xcc) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004ef8c @ 0004ef8c (size 276) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0004ef68) */

void FUN_0004ef8c(uint param_1,int param_2)

{
  int5 iVar1;
  int5 iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  int in_r1;
  ushort in_r2;
  uint unaff_tp;
  int in_r10;
  undefined2 uVar9;
  undefined4 in_r11;
  uint in_r14;
  uint in_r15;
  byte in_r16;
  uint uVar10;
  int in_r19;
  uint in_r22;
  int in_r26;
  int in_r28;
  int iVar11;
  uint in_ep;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  short in_lp;
  uint in_PSW;
  char local_1900;
  
  while( true ) {
    *(char *)(in_ep + 0x2a) = (char)unaff_tp;
    if (!(bool)((byte)(in_PSW >> 2) & 1)) break;
    in_lp = in_lp << 0xe;
    iVar2 = (int5)in_r26 + -1;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    in_r26 = (int)iVar2;
    iVar11 = *(int *)(in_ep + 0xf8);
    *(int *)(iVar11 + 4) = (int)local_1900;
    in_r16 = in_r16 | *(byte *)(iVar11 + 0x6b);
    in_PSW = 0;
    *(short *)(iVar11 + 0x3e) = (short)in_r15;
    in_ep = (uint)*(ushort *)(iVar11 + 0x18);
    unaff_tp = (uint)*(byte *)(in_ep + 0xd);
    *(short *)(DAT_ffff8f05 + 0x2baa) = in_lp;
    in_r28 = (int)DAT_ffff8f05;
    in_r15 = in_r22;
  }
  *(short *)(in_r28 + 0x2baa) = in_lp;
  *(byte *)(unaff_tp + 0x2000) = in_r16;
  *(byte *)(unaff_tp + 0x4000) = in_r16;
  *(short *)(in_r28 + 0x2b02) = (short)in_ep;
  *(byte *)(in_r10 + 0x2afa) = in_r16;
  uVar12 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  uVar5 = *(ushort *)(uVar12 + 0xc);
  uVar10 = *(uint *)(uVar12 + 0x24);
  iVar2 = (int5)(int)uVar12 + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(char *)(param_2 + 0xf2c) = (char)uVar10;
  puVar13 = (undefined1 *)((short)iVar2 * 4);
  *puVar13 = *(undefined1 *)(param_2 + -0x7d85);
  uVar7 = (ushort)in_r1;
  *(short *)(puVar13 + 0x3e) = (short)(in_r15 / (uint)(int)(short)in_r22);
  uVar6 = *(ushort *)(*(ushort *)(puVar13 + 0x18) + 0x66);
  uVar12 = (uint)*(ushort *)(*(ushort *)(puVar13 + 0x18) + 0x18);
  *(short *)(uVar12 + 0xc) = (short)in_r22;
  uVar14 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar14 + 0x2b) = *(undefined1 *)(uVar12 + 0x4f);
  iVar2 = (int5)in_r1 - (int5)(int)(uint)*(ushort *)(uVar14 + 0xc);
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar1 = (int5)(int)(in_r14 ^ (uint)&stack0x00000000) - (int5)in_r19;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(uint *)(uVar14 + 4) = (uint)uVar6;
  *(short *)(uVar14 + 0x3e) = (short)iVar2;
  uVar12 = (uint)*(ushort *)(uVar14 + 0x18);
  *(char *)(uVar12 + 0x17) = (char)iVar1;
  *(int *)(uVar12 + 0x44) = (int)iVar2;
  *(undefined2 *)(uVar12 + 0xd4) = *(undefined2 *)(uVar12 + 0x60);
  uVar9 = (undefined2)in_r11;
  *(undefined2 *)(uVar12 + 0x86) = uVar9;
  *(undefined2 *)(uVar12 + 0x86) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  bVar3 = *(byte *)(uVar12 + 0x6e);
  *(ushort *)(uVar12 + 0xc) = (short)DAT_ffffa900 & (ushort)uVar10;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined2 *)(uVar12 + 0x86) = uVar9;
  *(undefined2 *)(uVar12 + 0x86) = uVar9;
  *(uint *)(*(ushort *)(uVar12 + 2) + 0x2b04) = uVar12;
  *(char *)(in_r10 + 0x2afe) = (char)uVar10;
  *(ushort *)(uVar12 + 0x3e) =
       uVar5 | in_r2 | uVar7 | uVar7 | (ushort)param_1 | uVar7 | (ushort)param_1 | 0xe256;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  puVar13 = &DAT_ffffe381 + in_r1;
  *(undefined4 *)(uVar12 + 0x84) = in_r11;
  do {
    cVar8 = DAT_00007c25;
    *(uint *)(uVar12 + 0x24) = uVar10 | (short)((ushort)bVar3 * -4) * -3;
    bVar4 = *(byte *)(uVar12 + 0x3b);
    iVar2 = (int5)(int)(uint)bVar4 + -5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar11 = (int)iVar2;
    *(undefined1 **)(iVar11 + 4) = puVar13;
    *(short *)(iVar11 + 0x3e) = (short)cVar8;
    uVar12 = (uint)*(ushort *)(*(ushort *)(iVar11 + 0x18) + 0x18);
    puVar13 = (undefined1 *)(*(ushort *)(*(ushort *)(iVar11 + 0x18) + 0x14) | param_1);
  } while (4 < bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f066 @ 0004f066 (size 34) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004f066(uint param_1)

{
  int iVar1;
  byte bVar3;
  char cVar4;
  int in_r1;
  short unaff_tp;
  int in_r10;
  undefined4 in_r11;
  ushort in_r15;
  uint in_r16;
  undefined1 *puVar5;
  ushort in_r21;
  int in_ep;
  uint uVar6;
  int5 iVar2;
  
  *(ushort *)(in_ep + 0xc) = in_r15 & (ushort)in_r16;
  uVar6 = (uint)*(ushort *)(in_ep + 0x18);
  *(short *)(uVar6 + 0x86) = (short)in_r11;
  *(short *)(uVar6 + 0x86) = (short)in_r11;
  *(uint *)(*(ushort *)(uVar6 + 2) + 0x2b04) = uVar6;
  *(char *)(in_r10 + 0x2afe) = (char)in_r16;
  *(ushort *)(uVar6 + 0x3e) = in_r21 | (ushort)in_r1 | (ushort)param_1 | 0xe256;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  puVar5 = &DAT_ffffe381 + in_r1;
  *(undefined4 *)(uVar6 + 0x84) = in_r11;
  do {
    cVar4 = DAT_00007c25;
    *(uint *)(uVar6 + 0x24) = in_r16 | (short)(unaff_tp * -4) * -3;
    bVar3 = *(byte *)(uVar6 + 0x3b);
    iVar2 = (int5)(int)(uint)bVar3 + -5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar1 = (int)iVar2;
    *(undefined1 **)(iVar1 + 4) = puVar5;
    *(short *)(iVar1 + 0x3e) = (short)cVar4;
    uVar6 = (uint)*(ushort *)(*(ushort *)(iVar1 + 0x18) + 0x18);
    puVar5 = (undefined1 *)(*(ushort *)(*(ushort *)(iVar1 + 0x18) + 0x14) | param_1);
  } while (4 < bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f088 @ 0004f088 (size 150) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004f088(uint param_1)

{
  int iVar1;
  byte bVar3;
  char cVar4;
  int in_r1;
  uint unaff_tp;
  int in_r10;
  undefined4 in_r11;
  uint in_r16;
  undefined1 *puVar5;
  ushort in_r21;
  int in_ep;
  uint uVar6;
  int5 iVar2;
  
  *(short *)(in_ep + 0x86) = (short)in_r11;
  *(int *)(*(ushort *)(in_ep + 2) + 0x2b04) = in_ep;
  *(char *)(in_r10 + 0x2afe) = (char)in_r16;
  *(ushort *)(in_ep + 0x3e) = in_r21 | (ushort)param_1 | 0xe256;
  uVar6 = (uint)*(ushort *)(in_ep + 0x18);
  puVar5 = &DAT_ffffe381 + in_r1;
  *(undefined4 *)(uVar6 + 0x84) = in_r11;
  do {
    cVar4 = DAT_00007c25;
    *(uint *)(uVar6 + 0x24) = in_r16 | unaff_tp;
    bVar3 = *(byte *)(uVar6 + 0x3b);
    iVar2 = (int5)(int)(uint)bVar3 + -5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar1 = (int)iVar2;
    *(undefined1 **)(iVar1 + 4) = puVar5;
    *(short *)(iVar1 + 0x3e) = (short)cVar4;
    uVar6 = (uint)*(ushort *)(*(ushort *)(iVar1 + 0x18) + 0x18);
    puVar5 = (undefined1 *)(*(ushort *)(*(ushort *)(iVar1 + 0x18) + 0x14) | param_1);
  } while (4 < bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f294 @ 0004f294 (size 58) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0004f2ca) */
/* WARNING: Removing unreachable block (ram,0x0004f3be) */
/* WARNING: Removing unreachable block (ram,0x0004f392) */
/* WARNING: Removing unreachable block (ram,0x0004f398) */
/* WARNING: Removing unreachable block (ram,0x0004f3d4) */
/* WARNING: Removing unreachable block (ram,0x0004f3da) */
/* WARNING: Removing unreachable block (ram,0x0004f3e2) */
/* WARNING: Removing unreachable block (ram,0x0004f3e8) */
/* WARNING: Removing unreachable block (ram,0x0004f3f4) */

void FUN_0004f294(uint param_1,int param_2,int param_3)

{
  int5 iVar1;
  int unaff_tp;
  int in_r10;
  undefined1 in_r16;
  undefined1 in_r17;
  int in_ep;
  short *psVar2;
  undefined4 in_lp;
  
  *(undefined1 *)(in_r10 + 0x5e1a) = in_r16;
  *(undefined4 *)(in_ep + 0x74) = in_lp;
  iVar1 = (int5)in_ep + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined1 *)(param_3 + -0x18f8) = *(undefined1 *)((int)iVar1 + 8);
  psVar2 = (short *)(uint)*(ushort *)((int)iVar1 + 0x2c);
  *psVar2 = (short)DAT_00007a71;
  *(undefined1 *)(unaff_tp + 10000) = in_r17;
  *(undefined1 *)((param_1 & 0xff) + 10000) = in_r17;
  *(undefined1 *)((int)psVar2 + 0x2d) = in_r17;
  *(uint *)(psVar2 + 0x3e) = (uint)(ushort)psVar2[0x6c];
  *psVar2 = psVar2[0x20];
  *(undefined1 *)(param_2 + 0x58b8) = in_r17;
  *(undefined1 *)(param_2 + 0x58b8) = in_r17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f2ce @ 0004f2ce (size 186) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004f2ce(int param_1,int param_2)

{
  int5 iVar1;
  int unaff_gp;
  int unaff_tp;
  undefined4 in_r10;
  int in_r13;
  undefined1 in_r14;
  undefined1 in_r16;
  undefined1 in_r17;
  undefined4 in_r19;
  int in_r21;
  undefined4 in_r27;
  int in_ep;
  short *psVar2;
  undefined4 in_lp;
  uint in_PSW;
  
  if (!(bool)((byte)(in_PSW >> 2) & 1)) {
    psVar2 = (short *)(uint)*(ushort *)(in_ep + 0x2c);
    *psVar2 = (short)DAT_00007a71;
    *(undefined1 *)(unaff_tp + 10000) = in_r17;
    *(undefined1 *)(unaff_gp + 10000) = in_r17;
    *(undefined1 *)((int)psVar2 + 0x2d) = in_r17;
    *(uint *)(psVar2 + 0x3e) = (uint)(ushort)psVar2[0x6c];
    *psVar2 = psVar2[0x20];
    *(undefined1 *)(param_1 + 0x58b8) = in_r17;
    *(undefined1 *)(param_1 + 0x58b8) = in_r17;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined4 *)(in_ep + 0x48) = in_r10;
  *(undefined4 *)(*(byte *)(in_ep + 3) + 0x9d75) = in_lp;
  if ((bool)((byte)(in_PSW >> 4) & 1)) {
    (&DAT_ffffe256)[in_r21] = in_r14;
  }
  else if (!(bool)((byte)(in_PSW >> 4) & 1)) {
    *(undefined4 *)(in_ep + -0x2c6) = in_r19;
    iVar1 = (int5)in_ep + -5;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
    *(undefined1 *)(param_2 + 0x58b8) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(in_r13 + 0x61ff) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f856 @ 0004f856 (size 438) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0004f88c) */
/* WARNING: Removing unreachable block (ram,0x0004f984) */

void FUN_0004f856(int param_1,short param_2)

{
  int5 iVar1;
  undefined1 *puVar2;
  ushort uVar4;
  char cVar5;
  short *in_r1;
  byte unaff_gp;
  byte bVar6;
  int in_r18;
  undefined4 in_r19;
  int iVar7;
  undefined4 uVar8;
  undefined4 in_r27;
  int in_ep;
  uint uVar9;
  short *psVar10;
  int in_lp;
  ushort *in_CTBP;
  int5 iVar3;
  
  iVar3 = (int5)(int)(uint)*(byte *)(in_ep + 0x3b) + -5;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  puVar2 = (undefined1 *)iVar3;
  *(uint *)(puVar2 + 0x14) = (uint)*(ushort *)(in_ep + 0xe0);
  iVar3 = (int5)in_lp - (int5)(int)in_r1;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  iVar1 = (int5)(int)&stack0x00000000 + -3;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  cVar5 = *(char *)(param_1 + -0x7d85);
  puVar2[0x23] = (char)iVar1;
  iVar1 = -(int5)(int)cVar5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar7 = *(int *)(puVar2 + 0x2c);
  bVar6 = *(byte *)(in_r18 + -0x6882);
  *puVar2 = (char)iVar1;
  *(int *)(puVar2 + 0x14) = iVar7;
  *(short *)(puVar2 + 0x42) = (short)iVar3;
  *(byte *)(in_r18 + 0x7e7a) = *(byte *)(in_r18 + 0x7e7a) ^ 0x80;
  iVar3 = (int5)(int)(uint)bVar6 - (int5)iVar7;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  puVar2[5] = (char)iVar3;
  uVar4 = *(ushort *)(puVar2 + 0xda);
  *(undefined4 *)(puVar2 + -0xcc6) = in_r19;
  iVar3 = (int5)(int)puVar2 + -5;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  psVar10 = (short *)iVar3;
  *psVar10 = (short)*(char *)(param_1 + 0x73a3);
  *(uint *)(psVar10 + 0xc) = (uint)uVar4;
  psVar10[10] = psVar10[0x52];
  *(char *)((int)psVar10 + 0x45) = (char)psVar10[0x52];
  *psVar10 = (short)*(char *)(param_1 + 0x73a3);
  *(uint *)(psVar10 + 0xc) = (uint)(ushort)psVar10[0x79];
  uVar9 = (uint)psVar10 | (uint)in_r1;
  *(undefined2 *)(uVar9 + 0x14) = *(undefined2 *)(uVar9 + 0xa4);
  *(char *)(uVar9 + 0x45) = (char)*(undefined2 *)(uVar9 + 0xa4);
  *(uint *)(uVar9 + 0x14) = (uint)*(ushort *)(uVar9 + 0xf2);
  *in_r1 = (short)*(char *)(param_1 + 0x73a3);
  *(uint *)(in_r1 + 0xc) = (uint)(ushort)in_r1[0x7b];
  in_r1[10] = in_r1[0x52];
  *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
  *in_r1 = (short)*(char *)(param_1 + 0x73a3);
  *(uint *)(in_r1 + 0xc) = (uint)(ushort)in_r1[0x79];
  in_r1[10] = in_r1[0x52];
  *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
  bVar6 = *(byte *)((int)in_r1 + 7);
  *in_r1 = (short)*(char *)(param_1 + -0x7d85);
  uVar8 = *(undefined4 *)(in_r1 + 0x12);
  psVar10 = in_r1;
  func_0xfff7df12();
  *(undefined4 *)(psVar10 + 8) = uVar8;
  iVar3 = (int5)(int)(uint)*(byte *)((int)psVar10 + 0x3b) + -5;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(uint *)((int)iVar3 + 0x14) = (uint)(ushort)psVar10[0x70];
  bVar6 = bVar6 ^ (byte)in_r1 ^ unaff_gp;
  *(undefined4 *)(in_r1 + 0x3e) = in_r27;
  *(byte *)(param_1 + 0x126) = bVar6;
  *(byte *)(param_1 + 0x14) = bVar6;
  __nop();
  (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
  in_r1[0x30] = param_2;
  *(byte *)(param_1 + 0x450) = bVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004fe0c @ 0004fe0c (size 78) ====

/* WARNING: Instruction at (ram,0x0004fe32) overlaps instruction at (ram,0x0004fe30)
    */

void FUN_0004fe0c(int param_1,uint param_2)

{
  int5 iVar1;
  int5 iVar2;
  int5 iVar3;
  bool bVar4;
  uint in_r2;
  int unaff_tp;
  undefined4 in_r10;
  uint in_r14;
  char cVar5;
  uint in_r16;
  uint in_r17;
  uint uVar6;
  int in_r18;
  uint in_r21;
  int in_r26;
  undefined4 uVar7;
  undefined4 in_r27;
  undefined4 *in_ep;
  undefined4 in_lp;
  undefined4 uVar8;
  
  iVar2 = (int5)in_r26 + 0xb;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  do {
    uVar7 = (undefined4)iVar2;
    in_ep[0x1f] = in_r27;
    cVar5 = (char)((int)in_r16 >> 0x1f);
    *(char *)(param_1 + 0x126) = cVar5;
    *(char *)(param_1 + 0x14) = cVar5;
    in_r17 = (int)in_r17 >> 0x15;
    uVar8 = in_lp;
    while( true ) {
      uVar6 = in_r17 ^ in_r2 ^ in_r21;
      iVar3 = (int5)in_r18 + 0x75e;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      *(char *)(unaff_tp + -0x8000) = (char)iVar3;
      iVar1 = (int5)(int)&stack0x00000000 - (int5)(int)in_r14;
      if (iVar1 < 0x80000000) {
        if (iVar1 < -0x80000000) {
          iVar1 = -0x80000000;
        }
      }
      else {
        iVar1 = 0x7fffffff;
      }
      *in_ep = uVar7;
      *(short *)(in_ep + 0x13) = (short)in_r10;
      in_r14 = (uint)iVar1 | (uint)&stack0x00000000;
      in_ep[0x14] = in_r10;
      iVar3 = (int5)(int)iVar3 + 0x798d;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      *(char *)(param_1 + 0x1d0b) = (char)iVar3;
      in_r17 = (int)uVar6 >> 0x16;
      bVar4 = (uVar6 & 0x200000) != 0;
      uVar6 = (uint)bVar4 << 3;
      in_ep = (undefined4 *)(int)(short)in_ep;
      if (!bVar4) break;
      in_r10 = func_0x000be0ca();
      if ((bool)((byte)(uVar6 >> 3) & 1)) {
        func_0x000b7e9e();
                    /* WARNING: Could not recover jumptable at 0x0004fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0004fe86 + *(short *)(&DAT_0004fe86 + in_r2 * 2) * 2))();
        return;
      }
    }
    in_r16 = ~param_2;
    in_r27 = in_lp;
    in_lp = uVar8;
  } while( true );
}


// ==== FUN_0004fe5a @ 0004fe5a (size 44) ====

void FUN_0004fe5a(int param_1)

{
  int5 iVar1;
  bool bVar2;
  uint in_r2;
  int unaff_tp;
  undefined4 in_r10;
  uint in_r14;
  uint uVar3;
  int in_r16;
  uint in_r17;
  uint uVar4;
  int in_r18;
  uint in_r21;
  undefined4 in_r26;
  undefined4 *in_ep;
  uint uVar5;
  
  while( true ) {
    uVar3 = in_r14 | (uint)&stack0x00000000;
    in_ep[0x14] = in_r10;
    iVar1 = (int5)in_r16 + 0x798d;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    *(char *)(param_1 + 0x1d0b) = (char)iVar1;
    uVar4 = (int)in_r17 >> 0x16;
    bVar2 = (in_r17 & 0x200000) != 0;
    uVar5 = (uint)bVar2 << 3;
    in_ep = (undefined4 *)(int)(short)in_ep;
    if ((bVar2) && (in_r10 = func_0x000be0ca(), (bool)((byte)(uVar5 >> 3) & 1))) break;
    in_r17 = uVar4 ^ in_r2 ^ in_r21;
    iVar1 = (int5)in_r18 + 0x75e;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_r16 = (int)iVar1;
    *(char *)(unaff_tp + -0x8000) = (char)iVar1;
    iVar1 = (int5)(int)&stack0x00000000 - (int5)(int)uVar3;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_r14 = (uint)iVar1;
    *in_ep = in_r26;
    *(short *)(in_ep + 0x13) = (short)in_r10;
  }
  func_0x000b7e9e();
                    /* WARNING: Could not recover jumptable at 0x0004fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004fe86 + *(short *)(&DAT_0004fe86 + in_r2 * 2) * 2))();
  return;
}


// ==== FUN_0004ff00 @ 0004ff00 (size 219) ====

/* WARNING: This function may have set the stack pointer */

void FUN_0004ff00(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int5 iVar4;
  ushort uVar5;
  undefined2 uVar6;
  int in_r1;
  int in_r2;
  char cVar7;
  int unaff_gp;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int in_r13;
  uint in_r14;
  uint uVar12;
  undefined1 uVar13;
  undefined4 in_r16;
  uint uVar14;
  int iVar15;
  uint in_r17;
  undefined1 in_r19;
  uint in_r22;
  int in_r24;
  int in_r25;
  uint in_r27;
  int in_ep;
  uint *puVar16;
  short sVar17;
  int in_lp;
  int iVar18;
  uint in_PSW;
  
  while (uVar13 = (undefined1)in_r16, uVar14 = in_r17,
        ((byte)(in_PSW >> 1) & 1) != ((byte)(in_PSW >> 2) & 1)) {
    while( true ) {
      in_ep = 0;
      uVar12 = (uint)uRam000000f0;
      uVar6 = Ram0000001e;
      Ram00000003 = (char)in_r14;
      iVar4 = (int5)in_r24 + 0x5ea6;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = 0;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      in_r16 = (undefined4)iVar4;
      *(char *)(param_2 + 0x1d0b) = (char)iVar4;
      in_r17 = (int)uVar14 >> 0x16;
      in_PSW = 0;
      if ((uVar14 & 0x200000) != 0) break;
      iVar4 = (int5)in_lp - (int5)in_r1;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      in_lp = (int)iVar4;
      in_r14 = in_r14 >> 3;
      uRam00000060 = (undefined2)param_3;
      uVar6 = Ram00000000;
      uVar14 = in_r17;
    }
    iVar8 = func_0x000be148();
    *(char *)(iVar8 + 0x87a) = (char)in_r16;
    *(char *)(uVar12 + 0x1f9c) = (char)in_r16;
  }
  puVar16 = (uint *)(uint)*(ushort *)(in_ep + 0x18);
  iVar4 = -(int5)in_r1;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  iVar8 = (int)iVar4;
  func_0x0020ef88();
  sVar17 = (short)in_lp;
  iVar4 = (int5)iVar8 - (int5)iVar8;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  iVar8 = (int)iVar4;
  *(undefined1 *)(param_2 + 0x1078) = uVar13;
  func_0x001ff5fc();
  iVar4 = (int5)(param_2 + -0x7e10000) + -0x6666;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  iVar11 = (int)iVar4;
  iVar18 = sVar17 * 4;
  do {
    uVar14 = puVar16[9];
    uVar13 = (undefined1)uVar14;
    *(undefined1 *)(param_2 + 0x1d0b) = uVar13;
    *(undefined1 *)(param_2 + -0x2c5) = in_r19;
    iVar4 = (int5)(int)puVar16 + -5;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    puVar16 = (uint *)iVar4;
    puVar16[0x1f] = in_r27;
    *(undefined1 *)(in_r13 + 0x14) = uVar13;
    iVar4 = (int5)(int)uVar14 - (int5)unaff_gp;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    iVar4 = (int5)(int)iVar4 + 2;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    *(char *)(param_2 + 0x1d0b) = (char)iVar4;
    iVar4 = (int5)(int)iVar4 + 3;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    iVar15 = (int)iVar4;
    uVar14 = (uint)(param_3 < 0 && param_3 < 0 == -param_3 < 0) << 2;
    while (SUB41(uVar14 >> 2,0)) {
      func_0x0011e1ca();
      uVar12 = (uint)(ushort)puVar16[0x11];
      *(char *)(param_2 + 0x1d0b) = (char)iVar15;
      iVar4 = (int5)iVar15 + 4;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      iVar15 = (int)iVar4;
      while( true ) {
        *(short *)((int)puVar16 + 0x9a) = (short)in_r25;
        *(short *)(puVar16 + 0x26) = (short)in_r25;
        puVar16 = (uint *)*puVar16;
        uVar10 = 0x42a5d;
        in_r14 = in_r14 | 0x4ff1c;
        uVar9 = puVar16[0x16];
        iVar4 = (int5)iVar15 - (int5)unaff_gp;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar4 = (int5)(int)iVar4 + 2;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar15 = (int)iVar4;
        *(char *)(param_2 + 0x3a16) = (char)iVar4;
        iVar4 = (int5)iVar15 + 3;
        uVar14 = (uint)(iVar15 >= 0 && iVar15 < 0 != iVar15 + 3 < 0) << 2 |
                 (uint)(iVar15 + 3 < 0) << 1;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar15 = (int)iVar4;
        if (!(bool)((byte)(uVar14 >> 1) & 1)) break;
        *(char *)(puVar16 + 0x1e) = (char)uVar12;
        *(char *)(param_2 + 0x1078) = (char)iVar4;
        puVar16 = (uint *)(uint)(ushort)puVar16[6];
        iVar4 = (int5)in_r2 - (int5)iVar8;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar8 = (int)iVar4;
        uVar12 = (uint)*(ushort *)((int)puVar16 + 0x1e);
        iVar4 = (int5)iVar15 + 2;
        bVar1 = iVar15 + 2 < 0;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar15 = (int)iVar4;
        cVar7 = (char)unaff_gp;
        unaff_gp = (int)cVar7;
LAB_0004ffc6:
        *(char *)(uVar10 + 0x1f73) = (char)iVar15;
        if (!bVar1) {
          (&DAT_ffffe256)[iVar11] = 0x1c;
          uVar12 = (uint)*(ushort *)((int)puVar16 + 0x6a);
          *(char *)(param_2 + 0x1078) = (char)iVar15;
          puVar16 = (uint *)((short)cVar7 * 0x1ae);
          do {
            uVar14 = uVar9 + 0x87490000;
            *(undefined2 *)(&DAT_ffffe180 + uVar12) = 0xff1c;
            if (iVar15 <= 0x7fffffff) {
              if (iVar15 < -0x80000000) {
                iVar15 = -0x80000000;
              }
            }
            else {
              iVar15 = 0x7fffffff;
            }
            param_2 = (int)(char)param_2;
            if (iVar18 <= 0x7fffffff) {
              if (iVar18 < -0x80000000) {
                iVar18 = -0x80000000;
              }
            }
            else {
              iVar18 = 0x7fffffff;
            }
            uVar10 = (uint)*(ushort *)((int)puVar16 + 0xee);
            iVar4 = 0x4ff1c - (int5)(int)in_r14;
            if (iVar4 < 0x80000000) {
              if (iVar4 < -0x80000000) {
                iVar4 = 0;
              }
            }
            else {
              iVar4 = 0x7fffffff;
            }
            in_r14 = (uint)iVar4;
            while( true ) {
              *(short *)(puVar16 + 0x12) = (short)uVar9;
              *(char *)(param_2 + 0x1078) = (char)iVar15;
              iVar4 = (int5)iVar15 + 2;
              iVar2 = iVar15 + 2;
              bVar3 = iVar15 < 0;
              bVar1 = iVar2 < 0;
              if (iVar4 < 0x80000000) {
                if (iVar4 < -0x80000000) {
                  iVar4 = -0x80000000;
                }
              }
              else {
                iVar4 = 0x7fffffff;
              }
              iVar15 = (int)iVar4;
              in_r14 = in_r14 & 0xff;
              *(char *)(uVar10 + 0x1f6b) = (char)iVar4;
              if (bVar1 != (!bVar3 && bVar3 != iVar2 < 0)) goto LAB_0004ffc6;
              uVar9 = func_0x0009e25e(uVar14);
              uVar5 = *(ushort *)((int)puVar16 + 0xd2);
              uVar12 = (uint)uVar5;
              *(char *)(in_r13 + 0xf2c) = (char)iVar15;
              *(char *)(param_2 + 0x1078) = (char)iVar15;
              iVar4 = (int5)in_r25 + 0x7dde;
              if (iVar4 < 0x80000000) {
                if (iVar4 < -0x80000000) {
                  iVar4 = -0x80000000;
                }
              }
              else {
                iVar4 = 0x7fffffff;
              }
              iVar15 = (int)iVar4;
              uVar13 = (undefined1)iVar4;
              *(undefined1 *)(uVar10 + 0x1f53) = uVar13;
              if (-1 < param_1) break;
              uVar14 = in_r22 | 0xe256;
              *(ushort *)((int)puVar16 + 0x3a) = uVar5;
              *(undefined1 *)(uVar9 + 0x852) = uVar13;
              *(undefined1 *)(uVar10 + 0x1f4e) = uVar13;
            }
          } while( true );
        }
      }
    }
  } while( true );
}


// ==== FUN_0004ff9c @ 0004ff9c (size 31) ====

void FUN_0004ff9c(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int5 iVar3;
  ushort uVar4;
  int in_r1;
  int in_r2;
  char cVar5;
  int unaff_gp;
  int iVar6;
  uint in_r11;
  int in_r12;
  int in_r13;
  uint in_r14;
  uint in_r15;
  undefined1 uVar7;
  int iVar8;
  int in_r16;
  undefined1 in_r19;
  uint in_r22;
  int in_r25;
  undefined4 in_r27;
  undefined4 *in_ep;
  int in_lp;
  uint uVar9;
  
  do {
    in_r14 = in_r14 | (uint)&stack0x00000000;
    iVar6 = in_ep[0x16];
    iVar3 = (int5)in_r16 - (int5)unaff_gp;
    if (iVar3 < 0x80000000) {
      if (iVar3 < -0x80000000) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    iVar3 = (int5)(int)iVar3 + 2;
    if (iVar3 < 0x80000000) {
      if (iVar3 < -0x80000000) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    iVar8 = (int)iVar3;
    *(char *)(param_2 + 0x3a16) = (char)iVar3;
    iVar3 = (int5)iVar8 + 3;
    uVar9 = (uint)(iVar8 >= 0 && iVar8 < 0 != iVar8 + 3 < 0) << 2 | (uint)(iVar8 + 3 < 0) << 1;
    if (iVar3 < 0x80000000) {
      if (iVar3 < -0x80000000) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    iVar8 = (int)iVar3;
    if ((bool)((byte)(uVar9 >> 1) & 1)) {
      *(char *)(in_ep + 0x1e) = (char)in_r15;
      *(char *)(param_2 + 0x1078) = (char)iVar3;
      in_ep = (undefined4 *)(uint)*(ushort *)(in_ep + 6);
      iVar3 = (int5)in_r2 - (int5)in_r1;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      in_r1 = (int)iVar3;
      in_r15 = (uint)*(ushort *)((int)in_ep + 0x1e);
      iVar3 = (int5)iVar8 + 2;
      bVar1 = iVar8 + 2 < 0;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      in_r16 = (int)iVar3;
      cVar5 = (char)unaff_gp;
      unaff_gp = (int)cVar5;
LAB_0004ffc6:
      *(char *)(in_r11 + 0x1f73) = (char)in_r16;
      if (!bVar1) {
        (&DAT_ffffe256)[in_r12] = 0;
        in_r15 = (uint)*(ushort *)((int)in_ep + 0x6a);
        *(char *)(param_2 + 0x1078) = (char)in_r16;
        in_ep = (undefined4 *)((short)cVar5 * 0x1ae);
        do {
          uVar9 = iVar6 + 0x87490000;
          *(short *)(&DAT_ffffe180 + in_r15) = (short)&stack0x00000000;
          if (in_r16 <= 0x7fffffff) {
            if (in_r16 < -0x80000000) {
              in_r16 = -0x80000000;
            }
          }
          else {
            in_r16 = 0x7fffffff;
          }
          param_2 = (int)(char)param_2;
          if (in_lp <= 0x7fffffff) {
            if (in_lp < -0x80000000) {
              in_lp = -0x80000000;
            }
          }
          else {
            in_lp = 0x7fffffff;
          }
          in_r11 = (uint)*(ushort *)((int)in_ep + 0xee);
          iVar3 = (int5)(int)&stack0x00000000 - (int5)(int)in_r14;
          if (iVar3 < 0x80000000) {
            if (iVar3 < -0x80000000) {
              iVar3 = 0;
            }
          }
          else {
            iVar3 = 0x7fffffff;
          }
          in_r14 = (uint)iVar3;
          while( true ) {
            *(short *)(in_ep + 0x12) = (short)iVar6;
            *(char *)(param_2 + 0x1078) = (char)in_r16;
            iVar3 = (int5)in_r16 + 2;
            iVar8 = in_r16 + 2;
            bVar2 = in_r16 < 0;
            bVar1 = iVar8 < 0;
            if (iVar3 < 0x80000000) {
              if (iVar3 < -0x80000000) {
                iVar3 = -0x80000000;
              }
            }
            else {
              iVar3 = 0x7fffffff;
            }
            in_r16 = (int)iVar3;
            in_r14 = in_r14 & 0xff;
            *(char *)(in_r11 + 0x1f6b) = (char)iVar3;
            if (bVar1 != (!bVar2 && bVar2 != iVar8 < 0)) goto LAB_0004ffc6;
            iVar6 = func_0x0009e25e(uVar9);
            uVar4 = *(ushort *)((int)in_ep + 0xd2);
            in_r15 = (uint)uVar4;
            *(char *)(in_r13 + 0xf2c) = (char)in_r16;
            *(char *)(param_2 + 0x1078) = (char)in_r16;
            iVar3 = (int5)in_r25 + 0x7dde;
            if (iVar3 < 0x80000000) {
              if (iVar3 < -0x80000000) {
                iVar3 = -0x80000000;
              }
            }
            else {
              iVar3 = 0x7fffffff;
            }
            in_r16 = (int)iVar3;
            uVar7 = (undefined1)iVar3;
            *(undefined1 *)(in_r11 + 0x1f53) = uVar7;
            if (-1 < param_1) break;
            uVar9 = in_r22 | 0xe256;
            *(ushort *)((int)in_ep + 0x3a) = uVar4;
            *(undefined1 *)(iVar6 + 0x852) = uVar7;
            *(undefined1 *)(in_r11 + 0x1f4e) = uVar7;
          }
        } while( true );
      }
    }
    else {
      while (!SUB41(uVar9 >> 2,0)) {
        iVar6 = in_ep[9];
        uVar7 = (undefined1)iVar6;
        *(undefined1 *)(param_2 + 0x1d0b) = uVar7;
        *(undefined1 *)(param_2 + -0x2c5) = in_r19;
        iVar3 = (int5)(int)in_ep + -5;
        if (iVar3 < 0x80000000) {
          if (iVar3 < -0x80000000) {
            iVar3 = -0x80000000;
          }
        }
        else {
          iVar3 = 0x7fffffff;
        }
        in_ep = (undefined4 *)iVar3;
        in_ep[0x1f] = in_r27;
        *(undefined1 *)(in_r13 + 0x14) = uVar7;
        iVar3 = (int5)iVar6 - (int5)unaff_gp;
        if (iVar3 < 0x80000000) {
          if (iVar3 < -0x80000000) {
            iVar3 = -0x80000000;
          }
        }
        else {
          iVar3 = 0x7fffffff;
        }
        iVar3 = (int5)(int)iVar3 + 2;
        if (iVar3 < 0x80000000) {
          if (iVar3 < -0x80000000) {
            iVar3 = -0x80000000;
          }
        }
        else {
          iVar3 = 0x7fffffff;
        }
        *(char *)(param_2 + 0x1d0b) = (char)iVar3;
        iVar3 = (int5)(int)iVar3 + 3;
        if (iVar3 < 0x80000000) {
          if (iVar3 < -0x80000000) {
            iVar3 = -0x80000000;
          }
        }
        else {
          iVar3 = 0x7fffffff;
        }
        iVar8 = (int)iVar3;
        uVar9 = (uint)(param_3 < 0 && param_3 < 0 == -param_3 < 0) << 2;
      }
      func_0x0011e1ca();
      in_r15 = (uint)*(ushort *)(in_ep + 0x11);
      *(char *)(param_2 + 0x1d0b) = (char)iVar8;
      iVar3 = (int5)iVar8 + 4;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      in_r16 = (int)iVar3;
    }
    *(short *)((int)in_ep + 0x9a) = (short)in_r25;
    *(short *)(in_ep + 0x26) = (short)in_r25;
    in_ep = (undefined4 *)*in_ep;
    in_r11 = (uint)&stack0x00000000 ^ 0xd541;
  } while( true );
}


// ==== FUN_0004ffbc @ 0004ffbc (size 121) ====

void FUN_0004ffbc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int5 iVar4;
  ushort uVar5;
  int in_r1;
  int in_r2;
  char cVar6;
  int unaff_gp;
  uint uVar7;
  int in_r10;
  uint in_r11;
  int in_r12;
  int in_r13;
  uint in_r14;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  int in_r16;
  undefined1 in_r19;
  uint in_r22;
  int in_r25;
  int in_r27;
  int *in_ep;
  int in_lp;
  
  do {
    in_ep = (int *)(uint)*(ushort *)((int)in_ep + 0x18);
    iVar4 = (int5)in_r2 - (int5)in_r1;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    in_r1 = (int)iVar4;
    uVar8 = (uint)*(ushort *)((int)in_ep + 0x1e);
    iVar4 = (int5)in_r16 + 2;
    bVar1 = in_r16 + 2 < 0;
    if (iVar4 < 0x80000000) {
      if (iVar4 < -0x80000000) {
        iVar4 = -0x80000000;
      }
    }
    else {
      iVar4 = 0x7fffffff;
    }
    iVar10 = (int)iVar4;
    cVar6 = (char)unaff_gp;
    unaff_gp = (int)cVar6;
LAB_0004ffc6:
    *(char *)(in_r11 + 0x1f73) = (char)iVar10;
    if (!bVar1) {
      (&DAT_ffffe256)[in_r12] = 0;
      uVar8 = (uint)*(ushort *)((int)in_ep + 0x6a);
      *(char *)(param_2 + 0x1078) = (char)iVar10;
      in_ep = (int *)((short)cVar6 * 0x1ae);
      do {
        uVar7 = in_r10 + 0x87490000;
        *(short *)(&DAT_ffffe180 + uVar8) = (short)&stack0x00000000;
        if (iVar10 <= 0x7fffffff) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        param_2 = (int)(char)param_2;
        if (in_lp <= 0x7fffffff) {
          if (in_lp < -0x80000000) {
            in_lp = -0x80000000;
          }
        }
        else {
          in_lp = 0x7fffffff;
        }
        in_r11 = (uint)*(ushort *)((int)in_ep + 0xee);
        iVar4 = (int5)(int)&stack0x00000000 - (int5)(int)in_r14;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        in_r14 = (uint)iVar4;
        while( true ) {
          *(short *)(in_ep + 0x12) = (short)in_r10;
          *(char *)(param_2 + 0x1078) = (char)iVar10;
          iVar4 = (int5)iVar10 + 2;
          iVar2 = iVar10 + 2;
          bVar3 = iVar10 < 0;
          bVar1 = iVar2 < 0;
          if (iVar4 < 0x80000000) {
            if (iVar4 < -0x80000000) {
              iVar4 = -0x80000000;
            }
          }
          else {
            iVar4 = 0x7fffffff;
          }
          iVar10 = (int)iVar4;
          in_r14 = in_r14 & 0xff;
          *(char *)(in_r11 + 0x1f6b) = (char)iVar4;
          if (bVar1 != (!bVar3 && bVar3 != iVar2 < 0)) goto LAB_0004ffc6;
          in_r10 = func_0x0009e25e(uVar7);
          uVar5 = *(ushort *)((int)in_ep + 0xd2);
          uVar8 = (uint)uVar5;
          *(char *)(in_r13 + 0xf2c) = (char)iVar10;
          *(char *)(param_2 + 0x1078) = (char)iVar10;
          iVar4 = (int5)in_r25 + 0x7dde;
          if (iVar4 < 0x80000000) {
            if (iVar4 < -0x80000000) {
              iVar4 = -0x80000000;
            }
          }
          else {
            iVar4 = 0x7fffffff;
          }
          iVar10 = (int)iVar4;
          uVar9 = (undefined1)iVar4;
          *(undefined1 *)(in_r11 + 0x1f53) = uVar9;
          if (-1 < param_1) break;
          uVar7 = in_r22 | 0xe256;
          *(ushort *)((int)in_ep + 0x3a) = uVar5;
          *(undefined1 *)(in_r10 + 0x852) = uVar9;
          *(undefined1 *)(in_r11 + 0x1f4e) = uVar9;
        }
      } while( true );
    }
    while( true ) {
      *(short *)((int)in_ep + 0x9a) = (short)in_r25;
      *(short *)(in_ep + 0x26) = (short)in_r25;
      in_ep = (int *)*in_ep;
      in_r11 = (uint)&stack0x00000000 ^ 0xd541;
      in_r14 = in_r14 | (uint)&stack0x00000000;
      in_r10 = in_ep[0x16];
      iVar4 = (int5)iVar10 - (int5)unaff_gp;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      iVar4 = (int5)(int)iVar4 + 2;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      iVar10 = (int)iVar4;
      *(char *)(param_2 + 0x3a16) = (char)iVar4;
      iVar4 = (int5)iVar10 + 3;
      uVar7 = (uint)(iVar10 >= 0 && iVar10 < 0 != iVar10 + 3 < 0) << 2 | (uint)(iVar10 + 3 < 0) << 1
      ;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      in_r16 = (int)iVar4;
      if ((bool)((byte)(uVar7 >> 1) & 1)) break;
      while (!SUB41(uVar7 >> 2,0)) {
        iVar10 = in_ep[9];
        uVar9 = (undefined1)iVar10;
        *(undefined1 *)(param_2 + 0x1d0b) = uVar9;
        *(undefined1 *)(param_2 + -0x2c5) = in_r19;
        iVar4 = (int5)(int)in_ep + -5;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        in_ep = (int *)iVar4;
        in_ep[0x1f] = in_r27;
        *(undefined1 *)(in_r13 + 0x14) = uVar9;
        iVar4 = (int5)iVar10 - (int5)unaff_gp;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar4 = (int5)(int)iVar4 + 2;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        *(char *)(param_2 + 0x1d0b) = (char)iVar4;
        iVar4 = (int5)(int)iVar4 + 3;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        in_r16 = (int)iVar4;
        uVar7 = (uint)(param_3 < 0 && param_3 < 0 == -param_3 < 0) << 2;
      }
      func_0x0011e1ca();
      uVar8 = (uint)*(ushort *)(in_ep + 0x11);
      *(char *)(param_2 + 0x1d0b) = (char)in_r16;
      iVar4 = (int5)in_r16 + 4;
      if (iVar4 < 0x80000000) {
        if (iVar4 < -0x80000000) {
          iVar4 = -0x80000000;
        }
      }
      else {
        iVar4 = 0x7fffffff;
      }
      iVar10 = (int)iVar4;
    }
    *(char *)(in_ep + 0x1e) = (char)uVar8;
    *(char *)(param_2 + 0x1078) = (char)iVar4;
  } while( true );
}


// ==== FUN_0005004e @ 0005004e (size 64) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005004e(void)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 unaff_sp;
  int in_r13;
  int in_r24;
  int in_r27;
  int in_r28;
  int in_r29;
  int in_ep;
  int in_lp;
  
  uVar2 = (undefined1)unaff_sp;
  _DAT_fffff07c = unaff_sp;
  *(undefined1 *)(in_r29 + -0xf84) = uVar2;
  *(undefined1 *)(in_lp + -0xf84) = uVar2;
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined1 *)(in_r28 + -0x984) = uVar2;
  *(undefined2 *)(in_ep + 0x3e) = unaff_sp;
  *(undefined1 *)(in_r27 + -0x984) = uVar2;
  *(undefined2 *)(in_ep + 0x3c) = unaff_sp;
  *(undefined1 *)(uVar1 - 0x943) = uVar2;
  *(undefined2 *)(in_ep + 0x50) = unaff_sp;
  *(undefined1 *)(in_r24 + -0x984) = uVar2;
  *(undefined2 *)(in_ep + 0x4c) = unaff_sp;
  *(undefined1 *)(in_r13 + -0x2c5) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005010c @ 0005010c (size 30) ====

void FUN_0005010c(void)

{
  int in_r16;
  int in_r21;
  code *UNRECOVERED_JUMPTABLE;
  
  *(byte *)(in_r16 + -0x2f84) = *(byte *)(in_r16 + -0x2f84) | 1;
  *(byte *)(in_r21 + 0x7c00) = *(byte *)(in_r21 + 0x7c00) | 1;
                    /* WARNING: Could not recover jumptable at 0x00050128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_00050420 @ 00050420 (size 134) ====

/* WARNING: Removing unreachable block (ram,0x00050460) */
/* WARNING: Removing unreachable block (ram,0x00050468) */
/* WARNING: Removing unreachable block (ram,0x00050470) */
/* WARNING: Removing unreachable block (ram,0x00050478) */
/* WARNING: Removing unreachable block (ram,0x00050480) */
/* WARNING: Removing unreachable block (ram,0x00050488) */

void FUN_00050420(int param_1)

{
  ushort uVar1;
  undefined2 in_r19;
  int in_ep;
  
  uVar1 = *(ushort *)
           (*(ushort *)
             (*(ushort *)
               (*(ushort *)
                 (*(ushort *)
                   (*(ushort *)
                     (*(ushort *)
                       (*(ushort *)
                         (*(ushort *)
                           (*(ushort *)
                             (*(ushort *)
                               (*(ushort *)(*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18) + 0x18) +
                               0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18)
             + 0x18) + 0x18);
  *(undefined2 *)(param_1 + -0x18f8) = in_r19;
  *(ushort *)(uVar1 - 0x78b8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000504a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_00000020)();
  return;
}


// ==== FUN_0005069c @ 0005069c (size 146) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005069c(uint param_1)

{
  undefined4 in_r28;
  uint in_ep;
  
  param_1 = in_ep | param_1 | param_1 | param_1 | param_1 | param_1 | param_1 | param_1 | param_1;
  *(undefined4 *)(param_1 + 0xd4) = in_r28;
  func_0xfff88e70(*(undefined2 *)(param_1 + 0x18));
  *(BADSPACEBASE **)(param_1 + 0x14) = register0x0000000c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005091c @ 0005091c (size 216) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005091c(int param_1,uint param_2)

{
  int5 iVar1;
  ushort uVar2;
  int in_r1;
  undefined2 uVar3;
  uint in_r13;
  int in_r15;
  int iVar4;
  undefined4 in_r19;
  undefined2 in_r27;
  int in_r28;
  int iVar5;
  int in_r29;
  int in_ep;
  undefined1 *puVar6;
  uint uVar7;
  int in_lp;
  
  *(short *)(in_r28 + 0x2186) = (short)in_lp;
  uVar2 = *(ushort *)(in_ep + 0x18);
  uVar3 = SUB42(&stack0x00000000,0);
  *(undefined2 *)(in_r1 + 0x7826) = uVar3;
  _DAT_00007886 = uVar3;
  *(undefined1 *)(in_lp + -0xfe1) = 0;
  iVar1 = (int5)param_1 - (int5)in_r15;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar4 = (int)iVar1;
  puVar6 = (undefined1 *)(uint)*(ushort *)(uVar2 + 0x18);
  *(undefined4 *)(puVar6 + 0xa8) = 0;
  do {
    iVar5 = (int)DAT_ffffe381;
    puVar6 = (undefined1 *)(uint)*(ushort *)(*(ushort *)(puVar6 + 0x18) + 0x18);
    puVar6[0x7826] = 0;
    (&DAT_00007886)[in_r29] = 0;
    *(undefined1 *)(iVar5 + -0xfe1) = 0;
    iVar1 = (int5)param_1 - (int5)iVar4;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    iVar4 = (int)iVar1;
    *puVar6 = DAT_ffffbf7e;
  } while (-1 < (int)(in_r13 | 0xfffffff1 | param_2 | (uint)&stack0x00000000));
  *(undefined4 *)((byte)puVar6[0x7c] - 0xcc6) = in_r19;
  iVar1 = (int5)(int)puVar6 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)((int)iVar1 + 0x70) = uVar3;
  __nop();
  __nop();
  uVar7 = (uint)*(ushort *)(*(ushort *)(*(ushort *)((int)iVar1 + 0x1a) + 0xf8) + 0x1a);
  *(undefined2 *)(in_r29 + 0x1622) = in_r27;
  __nop();
  __nop();
  __nop();
  *(undefined2 *)(uVar7 + 0x86) = *(undefined2 *)(uVar7 + 0x86);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000509f4 @ 000509f4 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000509f4(void)

{
  undefined2 in_r27;
  int in_r29;
  int in_ep;
  uint uVar1;
  
  __nop();
  uVar1 = (uint)*(ushort *)(*(ushort *)(in_ep + 0xf8) + 0x1a);
  *(undefined2 *)(in_r29 + 0x1622) = in_r27;
  __nop();
  __nop();
  __nop();
  *(undefined2 *)(uVar1 + 0x86) = *(undefined2 *)(uVar1 + 0x86);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050ba4 @ 00050ba4 (size 131) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00050ba4(void)

{
  int5 iVar1;
  char cVar2;
  undefined4 in_r11;
  undefined4 in_r27;
  int in_r28;
  uint uVar3;
  
  iVar1 = (int5)in_r28 + -0x2c56;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
  uVar3 = (uint)*(ushort *)
                 (*(ushort *)
                   (*(ushort *)(*(ushort *)(*(ushort *)((int)iVar1 + 0x18) + 0x18) + 0x18) + 0x18) +
                 0x18);
  *(undefined4 *)(uVar3 + 0x84) = in_r11;
  cVar2 = DAT_ffffa905;
  *(undefined4 *)(uVar3 + 0x84) = in_r11;
  *(short *)(*(ushort *)(uVar3 + 0x18) + 0xc) = (short)cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050c9c @ 00050c9c (size 28) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00050c9c(int param_1)

{
  ushort uVar1;
  int in_r10;
  undefined1 in_r16;
  int in_ep;
  
  *(undefined4 *)(in_ep + 0xac) = 0;
  uVar1 = *(ushort *)(in_ep + 0xb4);
  *(undefined1 *)(in_r10 + 0x5cc4) = in_r16;
  *(undefined1 *)(uVar1 + 0x9a) = in_r16;
  *(undefined1 *)(param_1 + 0x5cc4) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050e68 @ 00050e68 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00050e68(void)

{
  undefined4 in_r15;
  int in_r21;
  undefined2 in_r23;
  int in_r29;
  int in_ep;
  
  *(char *)(in_ep + 0x10) = (char)in_r15;
  DAT_ffffe000 = DAT_ffffe000 ^ 1;
  *(undefined4 *)(in_r21 + 0x5c) = in_r15;
  *(undefined2 *)(in_r29 + -0x58d8) = in_r23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050ea6 @ 00050ea6 (size 44) ====

void FUN_00050ea6(int param_1)

{
  undefined4 unaff_tp;
  undefined4 in_r26;
  undefined4 *in_ep;
  
  in_ep[10] = in_r26;
  *in_ep = unaff_tp;
                    /* WARNING: Could not recover jumptable at 0x00050ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00050ed2 + *(short *)(&DAT_00050ed2 + param_1 * 2) * 2))();
  return;
}


// ==== FUN_000510aa @ 000510aa (size 332) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000510aa(int param_1)

{
  bool bVar1;
  int5 iVar2;
  ushort uVar3;
  char cVar4;
  uint in_r1;
  uint in_r2;
  undefined1 uVar5;
  undefined2 unaff_tp;
  short sVar6;
  int in_r10;
  undefined1 in_r14;
  undefined2 uVar7;
  undefined1 in_r16;
  uint in_r20;
  uint in_r21;
  int iVar8;
  uint in_r29;
  int in_ep;
  uint uVar9;
  int iVar10;
  short *psVar11;
  uint in_PSW;
  uint uVar12;
  
  iVar8 = (int)*(char *)(param_1 + -0xa84);
  *(undefined2 *)(in_ep + 0x94) = unaff_tp;
  *(undefined2 *)(in_ep + 0x96) = unaff_tp;
  uVar9 = (uint)*(ushort *)(in_ep + 0x18);
  uVar5 = (undefined1)*(undefined2 *)(uVar9 + 0x76);
  *(undefined1 *)(uVar9 + 0x4f) = uVar5;
  *(undefined1 *)(uVar9 + 0x50) = uVar5;
  bVar1 = (bool)((byte)(in_PSW >> 4) & 1) || 0xfffffffd < in_r20;
  uVar12 = (uint)bVar1 << 4;
  uVar7 = *(undefined2 *)(uVar9 + 0xa0);
  sVar6 = *(short *)(uVar9 + 0xc4);
  if ((int)(in_r20 + 2) < 0) {
    uVar7 = *(undefined2 *)(uVar9 + 0x20);
    *(undefined1 *)(uVar9 + 0x51) = uVar5;
    *(undefined1 *)(uVar9 + 0x53) = uVar5;
    *(undefined1 *)(uVar9 + 0x55) = uVar5;
    *(undefined1 *)(uVar9 + 0x52) = uVar5;
    *(undefined1 *)(uVar9 + 0x54) = uVar5;
    *(undefined1 *)(uVar9 + 0x56) = uVar5;
    iVar2 = (int5)(int)in_r29 + -0x15ec;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar9 = (uint)iVar2;
    if ((int)(in_r29 - 0x15ec) < 0 == ((int)in_r29 < 0 && -1 < (int)(in_r29 - 0x15ec))) {
LAB_00051116:
      *(short *)(iVar8 + 0x2bac) = (short)uVar9;
      *(undefined1 *)(in_r10 + 0x2bdc) = in_r16;
    }
    else {
      sVar6 = *(short *)(uVar9 + 0xc4);
      iVar2 = (int5)(int)in_r29 + -0x15ee;
      uVar12 = (uint)((int)in_r29 < 0 && -1 < (int)(in_r29 - 0x15ee)) << 2 |
               (uint)((bVar1 || in_r29 < 0x15ec) || in_r29 < 0x15ee) << 4;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      uVar9 = (uint)iVar2;
      if (!(bool)((byte)(uVar12 >> 2) & 1)) goto LAB_000510f6;
    }
LAB_00051122:
    *(undefined1 *)(uVar9 + 0x51) = uVar5;
    iVar8 = iVar8 + -10;
  }
  else {
LAB_000510f6:
    if (SUB41(uVar12 >> 4,0)) goto LAB_00051122;
    iVar2 = (int5)(int)in_r29 + -0x15ed;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar9 = (uint)iVar2;
    if ((int)(in_r29 - 0x15ed) < 0 != ((int)in_r29 < 0 && -1 < (int)(in_r29 - 0x15ed)) ||
        in_r29 == 0x15ed) {
      iVar2 = (int5)(int)in_r29 + -0x15ef;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      iVar10 = (int)iVar2;
      if (in_r29 < 0x15ef) goto LAB_00051130;
      uVar9 = *(uint *)(iVar10 + 0xf8);
      *(undefined1 *)(uVar9 + 0x4f) = uVar5;
      _DAT_000057e7 = (undefined2)uVar9;
      *(undefined1 *)(in_r10 + 0x2bd8) = in_r16;
      iVar8 = 0x2c31;
      goto LAB_00051116;
    }
  }
  *(undefined1 *)(uVar9 + 0x53) = uVar5;
  iVar10 = *(int *)(uVar9 + 0xf8);
  *(undefined1 *)(iVar10 + 0x50) = uVar5;
LAB_00051130:
  *(short *)(iVar8 + 0x2bac) = (short)iVar10;
  *(undefined1 *)(in_r10 + 0x2bda) = in_r16;
  *(short *)(iVar8 + 0x2ba2) = (short)iVar10;
  *(undefined1 *)(in_r10 + 0x2bde) = in_r16;
  *(undefined1 *)(iVar10 + 0x52) = uVar5;
  *(undefined1 *)(iVar10 + 0x54) = uVar5;
  cVar4 = *(char *)(param_1 + -0xa84);
  *(undefined1 *)(iVar10 + 0x53) = uVar5;
  *(int *)(cVar4 + 0x2bac) = iVar10;
  *(undefined1 *)(in_r10 + 0x2be0) = in_r16;
  *(undefined1 *)(iVar10 + 0x55) = uVar5;
  iVar8 = *(int *)(iVar10 + 0xf8);
  *(undefined1 *)(iVar8 + 0x54) = uVar5;
  *(int *)(cVar4 + 0x2ba2) = iVar8;
  *(undefined1 *)(in_r10 + 0x2be2) = in_r16;
  uVar12 = (uint)*(ushort *)(iVar8 + 0x18);
  *(undefined1 *)(uVar12 + 0x53) = uVar5;
  *(undefined2 *)(uVar12 + 0xc) = uVar7;
  uVar3 = *(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar3 + 0x55) = uVar5;
  uVar12 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar12 + 0x30) = uVar5;
  *(undefined1 *)(uVar12 + 0x56) = uVar5;
  psVar11 = (short *)(uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)((int)psVar11 + 0x2f) = uVar5;
  *(uint *)(psVar11 + 2) = (uint)(ushort)psVar11[3];
  *psVar11 = (short)DAT_ffffe481;
  *(undefined1 *)(psVar11 + 0x17) = uVar5;
  psVar11[0x30] = sVar6;
  *(undefined1 *)((int)psVar11 + 0x17) = in_r14;
  __nop();
  *(uint *)(psVar11 + 2) = in_r21 | in_r1 | in_r2;
  __nop();
  psVar11[0x43] = (short)param_1;
  return;
}


// ==== FUN_0005139e @ 0005139e (size 42) ====

void FUN_0005139e(int param_1)

{
  undefined2 uVar1;
  undefined1 in_r14;
  undefined1 in_r16;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 in_r26;
  int in_ep;
  
  uVar1 = *(undefined2 *)(in_ep + 0x60);
  *(undefined2 *)(in_ep + 0xee) = *(undefined2 *)(in_ep + 4);
  *(undefined1 *)(in_ep + 0x17) = in_r14;
  *(undefined1 *)(param_1 + 0x5754) = in_r16;
  *(undefined2 *)(in_ep + 200) = in_r26;
                    /* WARNING: Could not recover jumptable at 0x000513c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


// ==== FUN_000513d4 @ 000513d4 (size 24) ====

void FUN_000513d4(int param_1)

{
  undefined1 in_r16;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 in_r26;
  int in_ep;
  
  *(undefined1 *)(in_ep + 0x17) = *(undefined1 *)(in_ep + 0x17);
  *(undefined1 *)(param_1 + 0x5754) = in_r16;
  *(undefined2 *)(in_ep + 200) = in_r26;
                    /* WARNING: Could not recover jumptable at 0x000513ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_00051438 @ 00051438 (size 54) ====

void FUN_00051438(int param_1,undefined2 param_2)

{
  undefined2 uVar1;
  undefined1 in_r14;
  undefined1 in_r16;
  undefined4 in_r20;
  code *UNRECOVERED_JUMPTABLE;
  undefined2 in_r26;
  int in_ep;
  
  *(undefined4 *)(in_ep + 4) = in_r20;
  *(undefined2 *)(in_ep + 0x60) = param_2;
  uVar1 = *(undefined2 *)(in_ep + 0x60);
  *(undefined1 *)(in_ep + 0x17) = in_r14;
  *(undefined1 *)(param_1 + 0x5754) = in_r16;
  *(undefined2 *)(in_ep + 200) = in_r26;
                    /* WARNING: Could not recover jumptable at 0x0005146c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}


// ==== FUN_000515e2 @ 000515e2 (size 264) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000516fa) */

void FUN_000515e2(uint param_1)

{
  int5 iVar1;
  int5 iVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint in_r1;
  undefined4 unaff_gp;
  undefined1 unaff_tp;
  undefined1 uVar5;
  undefined1 in_r16;
  uint in_r21;
  uint uVar6;
  int in_r22;
  int in_r28;
  int in_ep;
  int iVar7;
  
  *(undefined1 *)(in_ep + 0x35) = unaff_tp;
  iVar2 = (int5)in_r28 + -0x2bb4;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  uVar3 = *(ushort *)((int)iVar2 + 0x32);
  iVar2 = (int5)in_r28 + -0x2bb3;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar7 = *(int *)((int)iVar2 + 0xf8);
  *(undefined4 *)(iVar7 + 4) = unaff_gp;
  uVar6 = in_r21 | param_1 | (uint)uVar3 | in_r1;
  if ((int)uVar6 < 1) {
    iVar7 = *(int *)(iVar7 + 0xf8);
    uVar5 = *(undefined1 *)(iVar7 + 0x52);
    *(int *)(DAT_ffffe700 + 0x2bc2) = iVar7;
    *(char *)(iVar7 + 0x46) = (char)uVar6 + '\x13';
    uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
    *(undefined1 *)(uVar6 + 0x42) = uVar5;
    *(undefined1 *)(uVar6 + 0x73) = uVar5;
    iVar2 = (int5)(int)in_r1 + -0x2bf3;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar4 = *(undefined2 *)(uVar6 + 2);
    uVar3 = *(ushort *)(uVar6 + 0x18);
    *(undefined1 *)(uVar3 + 0x33) = uVar5;
    *(undefined1 *)(*(ushort *)(uVar3 + 0x18) + 0x34) = uVar5;
    iVar2 = (int5)(int)iVar2 + -0x2c19;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar1 = (int5)(int)(uint)*(byte *)((int)iVar2 + 0x3b) + -5;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    iVar7 = (int)iVar1;
    uVar5 = (undefined1)*(undefined2 *)((int)iVar2 + 0x1a);
    *(undefined1 *)(iVar7 + 0x7c) = uVar5;
    *(undefined2 *)(iVar7 + 0x60) = uVar4;
    *(undefined1 *)(iVar7 + 0x17) = *(undefined1 *)(iVar7 + 0x17);
    *(undefined1 *)(*(int *)(iVar7 + 0xf8) + 0x3a) = uVar5;
    *(char *)(param_1 + 0x5754) = (char)in_r22;
    iVar2 = (int5)in_r22 + 1;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    DAT_ffffc000 = (char)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_ffffc000 = in_r16;
  *(int *)(DAT_ffffe700 + 0x2b52) = iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00052634 @ 00052634 (size 74) ====

/* WARNING: Instruction at (ram,0x0005263e) overlaps instruction at (ram,0x0005263c)
    */

void FUN_00052634(void)

{
  int5 iVar1;
  undefined1 unaff_tp;
  int in_r26;
  undefined4 in_r27;
  int in_ep;
  
  do {
    iVar1 = (int5)in_r26 + 0xb;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_r26 = (int)iVar1;
    *(undefined4 *)(in_ep + 0x7c) = in_r27;
    *(undefined1 *)(in_ep + 0x15) = unaff_tp;
  } while( true );
}


// ==== FUN_00052d7c @ 00052d7c (size 42) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00052d7c(void)

{
  int iVar1;
  int5 iVar2;
  int5 iVar3;
  undefined2 in_r15;
  undefined1 in_r16;
  int in_r17;
  int in_r28;
  undefined4 in_ep;
  uint in_PSW;
  
  *(BADSPACEBASE **)in_ep = register0x0000000c;
  if (((byte)(in_PSW >> 1) & 1) != ((byte)(in_PSW >> 2) & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00052e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00052e0c + *(short *)(&DAT_00052e0c + in_r17 * 2) * 2))();
    return;
  }
  iVar2 = (int5)in_r28 + -0x232f;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar3 = (int5)in_r28 + -0x232a;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar3 + 0xc) = *(undefined4 *)((int)iVar2 + 0xc);
  iVar2 = (int5)in_r28 + -0x232b;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar3 = (int5)in_r28 + -0x232e;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar3 + 0x10) = *(undefined4 *)((int)iVar2 + 0x10);
  iVar2 = (int5)in_r28 + -0x232d;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar1 = (int)iVar2;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  DAT_00001680 = in_r16;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
  *(undefined2 *)(iVar1 + 0x2c) = in_r15;
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00052d9e @ 00052d9e (size 46) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00052d9e(void)

{
  int iVar1;
  int5 iVar2;
  undefined2 in_r15;
  undefined1 in_r16;
  int in_r28;
  
  iVar2 = (int5)in_r28 + -0x232e;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(BADSPACEBASE **)((int)iVar2 + 0x10) = register0x0000000c;
  iVar2 = (int5)in_r28 + -0x232d;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar1 = (int)iVar2;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 0x14);
  DAT_00001680 = in_r16;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
  *(undefined2 *)(iVar1 + 0x2c) = in_r15;
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00053786 @ 00053786 (size 100) ====

/* WARNING: Removing unreachable block (ram,0x000537c2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00053786(int param_1,undefined2 param_2)

{
  int5 iVar1;
  uint in_r2;
  undefined2 unaff_tp;
  undefined1 *puVar2;
  undefined1 in_r16;
  uint in_r21;
  undefined1 *puVar3;
  int in_ep;
  uint uVar4;
  uint uVar5;
  int in_lp;
  
  *(undefined2 *)(in_ep + 4) = param_2;
  uVar4 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  do {
    *(int *)(DAT_ffff8f11 + 0x2298) = in_lp;
    uVar5 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x18);
    *(undefined2 *)(uVar5 + 0x6c) = unaff_tp;
    in_r21 = in_r21 | in_r2;
    uVar4 = 0;
    puVar3 = (undefined1 *)(int)*(char *)(param_1 + -0x78b6);
    puVar2 = &DAT_ffffe180 + param_1;
    iVar1 = (int5)in_lp - (int5)(int)in_r2;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    in_lp = (int)iVar1;
    Ram00000000 = in_r21;
  } while ((int)puVar2 - (int)puVar3 < 0 !=
           ((int)puVar2 < 0 != (int)puVar3 < 0 && (int)puVar3 < 0 == (int)puVar2 - (int)puVar3 < 0)
           || puVar2 == puVar3);
  uRam0000006c = unaff_tp;
  *(undefined1 *)(*(ushort *)(uVar5 + 2) + 0x590c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x000537e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000537ea + _DAT_000537ea * 2))();
  return;
}


// ==== FUN_0005381e @ 0005381e (size 158) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005381e(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int unaff_tp;
  undefined1 in_r16;
  int in_ep;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  uVar2 = (undefined2)unaff_tp;
  *(undefined2 *)(uVar1 + 0x16) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar3 + 0xc) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x18) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x40) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x4c) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x1a) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x1c) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x10) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0xe) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar3 + 0x12) = uVar2;
  uVar4 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined2 *)(uVar4 + 0x42) = uVar2;
  *(undefined1 *)(param_1 + 0x2c84) = in_r16;
  uVar3 = (uint)*(ushort *)(uVar4 + 2);
  *(undefined1 *)(uVar3 + 0x2c84) = in_r16;
  *(undefined1 *)(uVar3 + 0x2c84) = in_r16;
  *(undefined1 *)(*(ushort *)(uVar4 + 0x42) + 0x5e3e) = in_r16;
  *(undefined1 *)(unaff_tp + 0xd9) = in_r16;
  *(undefined1 *)(uVar3 + 0x5e3e) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000539a0 @ 000539a0 (size 164) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00053a14) overlaps instruction at (ram,0x00053a12)
    */
/* WARNING: Removing unreachable block (ram,0x00053a20) */
/* WARNING: Removing unreachable block (ram,0x000539ce) */
/* WARNING: Removing unreachable block (ram,0x000539fa) */
/* WARNING: Removing unreachable block (ram,0x00053a24) */
/* WARNING: Removing unreachable block (ram,0x000539d2) */

void FUN_000539a0(void)

{
  undefined1 in_r17;
  undefined2 in_r19;
  undefined4 in_r27;
  int in_ep;
  uint uVar1;
  uint in_PSW;
  
  uVar1 = (uint)*(ushort *)(in_ep + 0x18);
  if (((byte)(in_PSW >> 1) & 1) == ((byte)(in_PSW >> 2) & 1) && !(bool)((byte)in_PSW & 1)) {
    uVar1 = *(uint *)(uVar1 + 0xf8);
  }
  uVar1 = (uint)*(ushort *)
                 (*(ushort *)
                   (*(ushort *)
                     (*(int *)(*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18) + 0xf8) + 0x18) + 0x18)
                 + 0x18);
  *(undefined2 *)(uVar1 + 0x88) = 8;
  *(undefined2 *)(uVar1 + 0x2a) = in_r19;
  *(undefined2 *)(uVar1 + 0x8e) = in_r19;
  *(undefined4 *)(uVar1 + 0x7c) = in_r27;
  *(undefined1 *)(*(ushort *)(uVar1 + 0x88) + 0x5928) = in_r17;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00053e60 @ 00053e60 (size 246) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00053f08) overlaps instruction at (ram,0x00053f06)
    */

void FUN_00053e60(int param_1,int param_2)

{
  ushort uVar1;
  undefined2 unaff_tp;
  undefined2 uVar2;
  undefined1 in_r11;
  undefined4 in_r27;
  int in_r28;
  int iVar3;
  int in_r29;
  int in_ep;
  uint uVar4;
  undefined4 in_lp;
  int in_CTBP;
  
  uVar1 = *(ushort *)(in_ep + 0x18);
  *(undefined4 *)(in_r28 + 0x2190) = in_lp;
  uVar4 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18) + 0x18);
  uVar2 = *(undefined2 *)(uVar4 + 2);
  *(short *)(uVar4 + 0x98) = (short)&stack0x00000000;
  *(undefined2 *)(uVar4 + 0xd2) = unaff_tp;
  iVar3 = (int)*(char *)(param_2 + -0x7d85);
  *(undefined4 *)(uVar4 + 0x7c) = in_r27;
  *(short *)(iVar3 + 0x2ce2) = (short)in_lp;
  uVar4 = (uint)*(byte *)(uVar4 + 0x7c);
  if (-iVar3 < 0 != (iVar3 < 0 && iVar3 < 0 == -iVar3 < 0)) {
    uVar1 = *(ushort *)(uVar4 + 0x18);
    *(short *)(in_r29 + 0x1670) = (short)in_lp;
    uVar4 = (uint)*(ushort *)(uVar1 + 0x1a);
    (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x6a)))(param_1 + 0x16700000);
    uVar2 = *(undefined2 *)(uVar4 + 0x46);
  }
  uVar4 = (uint)*(ushort *)(uVar4 + 0x1a);
  (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x68)))(uVar2);
  uVar4 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x1a);
  (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x68)))(param_1 + 0x16700000);
  (*(code *)(in_CTBP + (uint)*(ushort *)(in_CTBP + 0x6a)))(*(undefined2 *)(uVar4 + 0x46));
  *(undefined1 *)(param_2 + 0x5928) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000554f0 @ 000554f0 (size 202) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055614) overlaps instruction at (ram,0x00055612)
    */
/* WARNING: Removing unreachable block (ram,0x0005556a) */
/* WARNING: Removing unreachable block (ram,0x00055570) */
/* WARNING: Removing unreachable block (ram,0x00055574) */
/* WARNING: Removing unreachable block (ram,0x000555c8) */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */
/* WARNING: Removing unreachable block (ram,0x000555e0) */
/* WARNING: Removing unreachable block (ram,0x000555e8) */
/* WARNING: Removing unreachable block (ram,0x00055658) */
/* WARNING: Removing unreachable block (ram,0x00055604) */
/* WARNING: Removing unreachable block (ram,0x000556d2) */
/* WARNING: Removing unreachable block (ram,0x000556d6) */
/* WARNING: Removing unreachable block (ram,0x000556e2) */
/* WARNING: Removing unreachable block (ram,0x0005566a) */

void FUN_000554f0(code *UNRECOVERED_JUMPTABLE,uint param_2)

{
  int5 iVar1;
  ushort uVar2;
  undefined2 uVar3;
  ushort unaff_gp;
  uint unaff_tp;
  int in_r10;
  uint in_r12;
  undefined1 in_r16;
  int in_r21;
  uint uVar4;
  uint in_ep;
  uint uVar5;
  undefined4 in_lp;
  uint in_PSW;
  uint uVar6;
  
  if (((byte)(in_PSW >> 1) & 1) == ((byte)(in_PSW >> 2) & 1)) {
    iVar1 = (int5)(int)in_ep + -5;
    uVar6 = (uint)((bool)((byte)(in_PSW >> 4) & 1) || 4 < in_ep) << 4;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    uVar5 = (uint)iVar1;
    if ((int)(in_ep - 5) < 0 == ((int)in_ep < 0 && (int)in_ep < 0 != (int)(in_ep - 5) < 0)) {
      *(undefined1 *)(param_2 + 0x5928) = in_r16;
      *(undefined2 *)(uVar5 + 0x48) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (!(bool)((byte)(in_PSW >> 2) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar6 = in_PSW & 0xfffffff8 | (uint)(in_r21 == 0 && in_r10 == 0);
    uVar5 = (uint)*(ushort *)(in_ep + 0x18);
    if (!(bool)((byte)(in_PSW >> 3) & 1) && !(bool)((byte)uVar6 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if ((unaff_gp & 0x2dab) == 0) {
    uVar4 = unaff_tp | 0x2dac;
    uRamfffffffe = in_r16;
    if ((bool)((byte)(uVar6 >> 4) & 1)) {
      if (-1 < (int)uVar4) {
        if (uVar4 != 0) {
          halt_baddata();
        }
                    /* WARNING: Could not recover jumptable at 0x000556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&LAB_000556d2 + *(short *)(&LAB_000556d2 + in_r10 * 2) * 2))();
        return;
      }
      param_2 = (uint)*(ushort *)(uVar5 + 0x10);
      goto code_r0x00055696;
    }
    *(undefined4 *)(uVar4 + 0x2de0) = in_lp;
    uVar2 = *(ushort *)(uVar5 + 0x18);
  }
  else {
    *(short *)(DAT_00004c83 + 0x2db8) = (short)in_lp;
    uVar2 = *(ushort *)(uVar5 + 0x18);
  }
  uVar5 = (uint)*(ushort *)(uVar2 + 0x18);
  uVar3 = *(undefined2 *)(uVar5 + 0x88);
  if (!(bool)((byte)(uVar6 >> 4) & 1)) {
    if (-1 < (int)(*(byte *)(uVar2 + 0x11) | in_r12)) {
      *(undefined2 *)(*(ushort *)(uVar5 + 0x18) + 6) = uVar3;
      uRamfffffffe = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_000556ae + sRam0005b208 * 2))(uVar3);
    return;
  }
  *(undefined2 *)(uVar5 + 2) = uVar3;
code_r0x00055696:
                    /* WARNING: Could not recover jumptable at 0x00055698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}


// ==== FUN_000555fe @ 000555fe (size 40) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055d0c) overlaps instruction at (ram,0x00055d0a)
    */
/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x00055bc6) */
/* WARNING: Removing unreachable block (ram,0x00055bce) */
/* WARNING: Removing unreachable block (ram,0x000557be) */
/* WARNING: Removing unreachable block (ram,0x00050460) */
/* WARNING: Removing unreachable block (ram,0x00050308) */
/* WARNING: Removing unreachable block (ram,0x0005025c) */
/* WARNING: Removing unreachable block (ram,0x000539fa) */
/* WARNING: Removing unreachable block (ram,0x00064826) */
/* WARNING: Removing unreachable block (ram,0x0004f88c) */
/* WARNING: Removing unreachable block (ram,0x0004f832) */
/* WARNING: Removing unreachable block (ram,0x00054662) */
/* WARNING: Removing unreachable block (ram,0x00053fd6) */
/* WARNING: Removing unreachable block (ram,0x00053fde) */
/* WARNING: Removing unreachable block (ram,0x00053ffe) */
/* WARNING: Removing unreachable block (ram,0x00054062) */
/* WARNING: Removing unreachable block (ram,0x000555e0) */
/* WARNING: Removing unreachable block (ram,0x000555e8) */
/* WARNING: Removing unreachable block (ram,0x000537c2) */
/* WARNING: Removing unreachable block (ram,0x0005f262) */
/* WARNING: Removing unreachable block (ram,0x000557f2) */
/* WARNING: Removing unreachable block (ram,0x0005583e) */
/* WARNING: Removing unreachable block (ram,0x00055846) */
/* WARNING: Removing unreachable block (ram,0x00055932) */
/* WARNING: Removing unreachable block (ram,0x00055992) */
/* WARNING: Removing unreachable block (ram,0x000559e6) */
/* WARNING: Removing unreachable block (ram,0x0005593a) */
/* WARNING: Removing unreachable block (ram,0x00055b2c) */
/* WARNING: Removing unreachable block (ram,0x0004af84) */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */
/* WARNING: Removing unreachable block (ram,0x00050264) */
/* WARNING: Removing unreachable block (ram,0x00053a20) */
/* WARNING: Removing unreachable block (ram,0x0004b078) */
/* WARNING: Removing unreachable block (ram,0x00051a70) */
/* WARNING: Removing unreachable block (ram,0x0005584e) */
/* WARNING: Removing unreachable block (ram,0x00051aca) */
/* WARNING: Removing unreachable block (ram,0x00051ade) */
/* WARNING: Removing unreachable block (ram,0x00051b16) */
/* WARNING: Removing unreachable block (ram,0x00051b2a) */
/* WARNING: Removing unreachable block (ram,0x00051b44) */
/* WARNING: Removing unreachable block (ram,0x00051b50) */
/* WARNING: Removing unreachable block (ram,0x0005f406) */
/* WARNING: Removing unreachable block (ram,0x00047552) */
/* WARNING: Removing unreachable block (ram,0x0004f984) */
/* WARNING: Removing unreachable block (ram,0x000503c4) */
/* WARNING: Removing unreachable block (ram,0x00050310) */
/* WARNING: Removing unreachable block (ram,0x0005026c) */
/* WARNING: Removing unreachable block (ram,0x00053a24) */
/* WARNING: Removing unreachable block (ram,0x00055a64) */
/* WARNING: Removing unreachable block (ram,0x00055c22) */
/* WARNING: Removing unreachable block (ram,0x00055c2c) */
/* WARNING: Removing unreachable block (ram,0x00055c4c) */
/* WARNING: Removing unreachable block (ram,0x00055c50) */
/* WARNING: Removing unreachable block (ram,0x00055c52) */
/* WARNING: Removing unreachable block (ram,0x00055c5a) */
/* WARNING: Removing unreachable block (ram,0x000559aa) */
/* WARNING: Removing unreachable block (ram,0x00055a0a) */
/* WARNING: Removing unreachable block (ram,0x00055a10) */
/* WARNING: Removing unreachable block (ram,0x000559b2) */
/* WARNING: Removing unreachable block (ram,0x00050468) */
/* WARNING: Removing unreachable block (ram,0x000503cc) */
/* WARNING: Removing unreachable block (ram,0x00050318) */
/* WARNING: Removing unreachable block (ram,0x00050278) */
/* WARNING: Removing unreachable block (ram,0x00055cb4) */
/* WARNING: Removing unreachable block (ram,0x00055cc0) */
/* WARNING: Removing unreachable block (ram,0x00055ccc) */
/* WARNING: Removing unreachable block (ram,0x00055cce) */
/* WARNING: Removing unreachable block (ram,0x00055cd8) */
/* WARNING: Removing unreachable block (ram,0x00050470) */
/* WARNING: Removing unreachable block (ram,0x000503d4) */
/* WARNING: Removing unreachable block (ram,0x00050320) */
/* WARNING: Removing unreachable block (ram,0x00050280) */
/* WARNING: Removing unreachable block (ram,0x00050478) */
/* WARNING: Removing unreachable block (ram,0x000503e0) */
/* WARNING: Removing unreachable block (ram,0x00050288) */
/* WARNING: Removing unreachable block (ram,0x00050480) */
/* WARNING: Removing unreachable block (ram,0x000503e8) */
/* WARNING: Removing unreachable block (ram,0x00050290) */
/* WARNING: Removing unreachable block (ram,0x00050488) */
/* WARNING: Removing unreachable block (ram,0x000503f0) */
/* WARNING: Removing unreachable block (ram,0x00050298) */
/* WARNING: Removing unreachable block (ram,0x000502a0) */
/* WARNING: Removing unreachable block (ram,0x000502a8) */
/* WARNING: Removing unreachable block (ram,0x000502b4) */
/* WARNING: Removing unreachable block (ram,0x000502bc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000555fe(code *UNRECOVERED_JUMPTABLE_04,code *UNRECOVERED_JUMPTABLE_00,uint param_3,
                 undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  uint5 uVar3;
  int5 iVar4;
  int5 iVar5;
  int5 iVar6;
  int5 iVar7;
  int5 iVar8;
  undefined1 *puVar9;
  int5 iVar10;
  undefined2 *puVar11;
  ushort *puVar12;
  undefined2 uVar13;
  char cVar14;
  char cVar15;
  short *in_r1;
  ushort uVar16;
  uint in_r2;
  byte unaff_gp;
  uint uVar17;
  code *UNRECOVERED_JUMPTABLE_02;
  undefined4 uVar18;
  ushort uVar19;
  ushort uVar20;
  uint uVar21;
  char in_r10;
  int iVar22;
  ushort uVar23;
  uint in_r11;
  undefined1 in_r12;
  undefined1 in_register_00000031;
  undefined2 in_register_00000032;
  undefined2 in_r13;
  undefined2 in_register_00000036;
  code in_r14;
  ushort uVar24;
  uint uVar25;
  ushort uVar26;
  undefined2 uVar27;
  uint in_r15;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar28;
  short *psVar29;
  byte bVar30;
  code cVar31;
  undefined1 uVar32;
  short sVar33;
  code *in_r16;
  uint in_r17;
  uint in_r18;
  byte in_r19;
  short sVar34;
  code *UNRECOVERED_JUMPTABLE_03;
  uint uVar35;
  ulonglong in_r20r21;
  uint uVar36;
  code *in_r22;
  code *in_r23;
  int in_r24;
  ushort uVar37;
  uint in_r25;
  code *UNRECOVERED_JUMPTABLE_01;
  uint in_r27;
  uint uVar38;
  int iVar39;
  code *UNRECOVERED_JUMPTABLE_05;
  uint *puVar40;
  int in_ep;
  code *pcVar41;
  byte *pbVar42;
  undefined4 *puVar43;
  ushort uVar44;
  short sVar45;
  uint in_lp;
  uint in_PSW;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  ushort *in_CTBP;
  
  UNRECOVERED_JUMPTABLE_03 = (code *)(int)(char)in_r19;
  pcVar41 = (code *)(uint)*(ushort *)(in_ep + 0x18);
  if (((byte)(in_PSW >> 1) & 1) != ((byte)(in_PSW >> 2) & 1) || (bool)((byte)in_PSW & 1)) {
                    /* WARNING: Could not recover jumptable at 0x0005566a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar46 = (*UNRECOVERED_JUMPTABLE_05)(param_4);
    return uVar46;
  }
  UNRECOVERED_JUMPTABLE = (code *)(in_r15 / (uint)(int)(short)in_r22);
  uVar25 = (uint)(char)in_r14;
  iVar22 = (int)in_r10;
  uVar38 = (uint)UNRECOVERED_JUMPTABLE_02 | 0x2dac;
  uVar46 = in_PSW & 0xfffffff0 | (uint)(DAT_00004c81 < 8) << 3 | (uint)(uVar38 == 0);
  uVar17 = (uint)(char)unaff_gp;
  cVar31 = SUB41(in_r16,0);
  cRamfffffffe = cVar31;
  uVar20 = *(ushort *)(pcVar41 + 0x88);
  uVar21 = (uint)uVar20;
  if ((bool)((byte)(in_PSW >> 4) & 1)) {
    if ((int)uVar38 < 0) {
      param_3 = (uint)*(ushort *)(pcVar41 + 0x10);
code_r0x00055696:
                    /* WARNING: Could not recover jumptable at 0x00055698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar46 = (*UNRECOVERED_JUMPTABLE_04)(param_3);
      return uVar46;
    }
    if ((bool)((byte)uVar46 & 1)) {
code_r0x000556ce:
      uVar47 = uVar46;
      bVar1 = (int)uVar38 < 0;
      uVar48 = uVar47 & 0xfffffffc;
      uVar46 = uVar48 | uVar38 == 0;
      bVar30 = (byte)uVar46;
code_r0x000556d0:
      uVar26 = (ushort)UNRECOVERED_JUMPTABLE;
      uVar16 = (ushort)&stack0x00000000;
      sVar33 = (short)in_r16;
      uVar19 = (ushort)param_3;
      uVar35 = (uint)in_r20r21;
      uVar36 = (uint)(in_r20r21 >> 0x20);
      sVar34 = (short)(char)in_r19;
      uVar23 = (ushort)in_r11;
      uVar44 = (ushort)in_lp;
      uVar24 = (ushort)UNRECOVERED_JUMPTABLE_02;
      uVar32 = SUB41(in_r22,0);
      sVar45 = (short)in_r1;
      uVar37 = (ushort)in_r25;
      pcVar28 = UNRECOVERED_JUMPTABLE;
      switch(in_r10) {
      case '\0':
      case '@':
      case 'L':
      case '{':
      case -0x7b:
      case -0x77:
      case -0x69:
      case -0x50:
      case -0x4c:
      case -0x47:
      case -0x40:
      case -0x2e:
      case -0x29:
      case -0x25:
        *(code *)(iVar22 + 0x3e08) = cVar31;
        UNRECOVERED_JUMPTABLE_03 = (code *)-uVar38;
        while( true ) {
          iVar10 = (int5)(int)in_lp - (int5)(int)in_r2;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          in_lp = (uint)iVar10;
          uVar46 = (uint)(in_r20r21 >> 0x20);
          *(uint *)pcVar41 = uVar46;
          if ((int)UNRECOVERED_JUMPTABLE_00 - (int)UNRECOVERED_JUMPTABLE_03 < 0 ==
              ((int)UNRECOVERED_JUMPTABLE_00 < 0 != (int)UNRECOVERED_JUMPTABLE_03 < 0 &&
              (int)UNRECOVERED_JUMPTABLE_03 < 0 ==
              (int)UNRECOVERED_JUMPTABLE_00 - (int)UNRECOVERED_JUMPTABLE_03 < 0) &&
              UNRECOVERED_JUMPTABLE_00 != UNRECOVERED_JUMPTABLE_03) break;
          *(uint *)(DAT_ffff8f11 + 0x2298) = in_lp;
          uVar17 = uVar17 >> 0x1a;
          uVar20 = *(ushort *)(*(ushort *)(pcVar41 + 0x18) + 0x18);
          *(ushort *)(uVar20 + 0x6c) = uVar24;
          uVar21 = (uint)*(ushort *)(uVar20 + 2);
          in_r20r21 = (ulonglong)(uVar46 | in_r2) << 0x20;
          pcVar41 = (code *)0x0;
          UNRECOVERED_JUMPTABLE_03 = (code *)(int)*(char *)(param_3 - 0x78b6);
          UNRECOVERED_JUMPTABLE_00 = (code *)(&DAT_ffffe180 + param_3);
          uRam0000006c = uVar24;
        }
        *(code *)(uVar21 + 0x590c) = cVar31;
                    /* WARNING: Could not recover jumptable at 0x000537e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)(&DAT_000537ea + *(short *)(&DAT_000537ea + uVar17 * 2) * 2))();
        return uVar46;
      case '\x01':
      case '>':
      case -0x52:
        goto code_r0x0005b294;
      case '\x02':
      case 'W':
      case '}':
        if (!(bool)((byte)(uVar47 >> 3) & 1) && !(bool)(bVar30 & 1)) {
          iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_00 -
                   (int5)(int)(uint)*(ushort *)(uint)*(ushort *)(pcVar41 + 0x18);
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = 0;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          *(ushort *)(uint)*(ushort *)(pcVar41 + 0x18) = (ushort)iVar10;
          UNRECOVERED_JUMPTABLE_04 = (code *)-(int)UNRECOVERED_JUMPTABLE_04;
          uVar38 = (uint)in_r1 | 0x3174;
          uVar20 = *(ushort *)(in_lp + 0x18);
          *(uint *)(uVar38 + 0x3174) = in_lp;
          param_3 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar20 + 0x18) + 0x18) + 4);
        }
        iVar10 = (int5)(int)uVar38 + -0x317e;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(uint *)(UNRECOVERED_JUMPTABLE_05 + 0x18ba) = in_r27;
                    /* WARNING: Could not recover jumptable at 0x0005e006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)(&DAT_0005e008 + *(short *)(&DAT_0005e008 + param_3 * 2) * 2))
                           (UNRECOVERED_JUMPTABLE_04,
                            *(undefined2 *)(*(ushort *)((int)iVar10 + 0x18) + 2));
        return uVar46;
      case '\x03':
      case '~':
        goto code_r0x000556d0;
      case '\x04':
      case '\x7f':
      case -0x79:
      case -0x75:
      case -0x4e:
      case -0x45:
      case -0x3e:
        while (UNRECOVERED_JUMPTABLE = in_r22, uVar20 = (ushort)uVar21,
              in_r22 = UNRECOVERED_JUMPTABLE, bVar1) {
          uVar17 = uVar17 + in_r27;
          uVar46 = (uint)(((bool)((byte)(uVar46 >> 4) & 1) || &DAT_0000000b < pcVar28) ||
                         uVar38 < 0x3214) << 4;
          iVar22 = uVar38 - 10;
          func_0x0013d110(0xfffffff4);
          iVar39 = 0x5eec2;
          func_0xffedd114();
          *(short *)(in_r16 + -0x2a84) = (short)iVar39;
          uVar38 = iVar22 - 10;
          in_lp = 0;
          pcVar41 = (code *)(uint)*(ushort *)(iVar39 + 0x1a);
          register0x0000000c = (BADSPACEBASE *)((uint)register0x0000000c | in_r11);
          bVar1 = (int)register0x0000000c < 0;
          uVar46 = uVar46 & 0xfffffff0;
          uVar21 = (uint)*(ushort *)(pcVar41 + 200);
code_r0x0005eed2:
          in_r16 = in_r22;
          pcVar28 = UNRECOVERED_JUMPTABLE;
          in_r22 = in_r16;
        }
      case -0x27:
        uVar17 = uVar17 + *(ushort *)(pcVar41 + 0x18);
        uVar46 = uVar46 & 0xfffffff0;
        uVar38 = (uint)*(char *)(param_3 - 0xf84);
      case 'N':
        in_lp = in_lp | uVar17;
        uVar16 = *(ushort *)(pcVar41 + 0x18);
        *(uint *)(uVar38 + 0x21da) = in_lp;
        uRam000053ee = (undefined2)in_lp;
        *(undefined2 *)(uVar38 + 0x31fc) = uRam000053ee;
        *(undefined2 *)(*(char *)(param_3 - 0xf84) + 0x3210) = uRam000053ee;
        uRam000053f4 = (undefined2)(in_lp >> 0x10);
        uVar38 = (uint)*(char *)(param_3 - 0x7d85);
        iVar10 = (int5)(int)uVar38 + -0x21a1;
        uVar46 = (uint)((((bool)((byte)(uVar46 >> 4) & 1) || DAT_ffffe081 != '\0') ||
                        *(short *)(uVar16 + 0x18) != 0) || uVar38 < 0x21a1) << 4;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        uRam000053f0 = uRam000053f4;
        uRam000053f2 = uRam000053ee;
        *(int *)(uVar38 + 0x3210) = (int)iVar10;
        in_r16 = in_r22;
code_r0x0005ef5c:
        uVar16 = (ushort)in_lp;
        iVar10 = (int5)(int)uVar38 + -0x231f;
        uVar46 = (uint)((((((bool)((byte)(uVar46 >> 4) & 1) || uVar38 < 0x21cf) || uVar38 < 0x21cb)
                         || uVar38 < 0x21ba) || uVar38 < 0x21bb) || uVar38 < 0x231f) << 4;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        in_r17 = (uint)*(char *)((char)UNRECOVERED_JUMPTABLE_02[-0x5bff] + -0x5bff);
        *(ushort *)((int)iVar10 + 0x3e) = uVar16 & 0xf17c;
        uVar25 = (uint)*(ushort *)((int)iVar10 + 0x18);
        func_0x00116812(0xfffffff3);
        pcVar41 = (code *)(uint)*(ushort *)(uVar25 + 0x18);
        func_0x0010681a();
        in_lp = (int)(short)UNRECOVERED_JUMPTABLE_05 * (int)(short)uVar16;
        UNRECOVERED_JUMPTABLE_00 = *(code **)(in_r1 + 0x2e3a);
        *(short *)(cRamffffa12b + 0x3204) = (short)in_lp;
        *(ushort *)(pcVar41 + 0x60) = uVar20;
        pcVar41[0x17] = pcVar41[0x17];
        uVar46 = uVar46 & 0xfffffff8;
        uVar21 = (uint)*(ushort *)(pcVar41 + 0x4e);
        *(uint *)(pcVar41 + 0x50) = uVar21;
        in_r22 = in_r16;
      case -99:
      case -0x1f:
        uVar46 = uVar46 & 0xfffffff8;
      case '\n':
      case '\x18':
      case -0x42:
        *(uint *)(pcVar41 + 0x40) = uVar21;
        uVar25 = (uint)*(ushort *)(pcVar41 + 0x40);
        uVar17 = (uint)in_r16 | (uint)in_r22;
        uVar46 = uVar46 & 0xfffffff0;
        uVar38 = (uint)*(ushort *)(pcVar41 + 0x18);
        func_0x00156802(*(ushort *)(pcVar41 + 0x4a));
        cRamffffffff = SUB41(uVar17,0);
        uVar38 = (uint)*(ushort *)(*(ushort *)(uVar38 + 0x18) + 0x18);
        bVar1 = DAT_ffffe081 != '\0';
        iVar10 = (int5)(int)uVar38 + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)iVar10;
        *(undefined2 *)(iVar22 + 0xd6) = *(undefined2 *)(uVar38 + 2);
        psVar29 = (short *)(uVar25 / (uint)(int)(short)uVar17);
        uVar16 = *(ushort *)(iVar22 + 0xd0);
        uVar25 = (uint)uVar16;
        uVar20 = *(ushort *)(iVar22 + 0x1a);
        iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_05 + -0x190d;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        uVar21 = (uint)*(ushort *)(*(byte *)((int)iVar10 + 0x7d) + 0x1a);
        *(short *)(uVar21 + 0x60) = (short)psVar29;
        iVar10 = (int5)(int)in_r1 - (int5)(int)psVar29;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar4 = (int5)(int)in_r23 - (int5)(int)UNRECOVERED_JUMPTABLE_03;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = -0x80000000;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar5 = (int5)(int)(code *)iVar4 - (int5)(int)UNRECOVERED_JUMPTABLE_03;
        if (iVar5 < 0x80000000) {
          if (iVar5 < -0x80000000) {
            iVar5 = -0x80000000;
          }
        }
        else {
          iVar5 = 0x7fffffff;
        }
        *(uint *)(uVar21 + 0x1c) = uVar17;
        iVar6 = (int5)(int)(code *)iVar5 - (int5)(int)UNRECOVERED_JUMPTABLE_03;
        if (iVar6 < 0x80000000) {
          if (iVar6 < -0x80000000) {
            iVar6 = -0x80000000;
          }
        }
        else {
          iVar6 = 0x7fffffff;
        }
        *(short *)(uVar21 + 0x3e) = (short)iVar10;
        uVar16 = ~uVar16;
        iVar7 = (int5)(int)(short *)iVar10 - (int5)(int)in_r1;
        if (iVar7 < 0x80000000) {
          if (iVar7 < -0x80000000) {
            iVar7 = -0x80000000;
          }
        }
        else {
          iVar7 = 0x7fffffff;
        }
        uVar47 = (uint)iVar7;
        iVar7 = (int5)(int)(code *)iVar6 - (int5)(int)UNRECOVERED_JUMPTABLE_03;
        if (iVar7 < 0x80000000) {
          if (iVar7 < -0x80000000) {
            iVar7 = 0;
          }
        }
        else {
          iVar7 = 0x7fffffff;
        }
        iVar8 = (int5)(int)uVar17 + (int5)(int)uVar47;
        uVar46 = (uint)((int)uVar17 < 0 == (int)uVar47 < 0 &&
                       (int)uVar47 < 0 != (int)(uVar17 + uVar47) < 0) << 2 |
                 (uint)(((((((((((((bool)((byte)(uVar46 >> 4) & 1) || bVar1) || 4 < uVar38) ||
                                UNRECOVERED_JUMPTABLE_05 < (code *)0x190d) || 0xfffffff4 < uVar20)
                              || in_r1 < psVar29) || in_r23 < UNRECOVERED_JUMPTABLE_03) ||
                            (code *)iVar4 < UNRECOVERED_JUMPTABLE_03) ||
                           (code *)iVar5 < UNRECOVERED_JUMPTABLE_03) || (short *)iVar10 < in_r1) ||
                         (code *)iVar6 < UNRECOVERED_JUMPTABLE_03) ||
                        CARRY4((uint)UNRECOVERED_JUMPTABLE_00,((int)iVar7 + 7) * 0x80)) ||
                       CARRY4(uVar17,uVar47)) << 4;
        if (iVar8 < 0x80000000) {
          if (iVar8 < -0x80000000) {
            iVar8 = 0;
          }
        }
        else {
          iVar8 = 0x7fffffff;
        }
        iVar22 = (int)iVar8;
        uVar27 = (undefined2)iVar8;
        if (!(bool)((byte)(uVar46 >> 2) & 1)) {
          do {
            iVar22 = uVar17 - iVar22;
            uVar38 = (uint)*(char *)(param_3 - 0x7d85);
            iVar10 = (int5)(int)in_r1 + 0x7fea;
            bVar1 = in_r1 < (short *)0xffff8016;
            if (iVar10 < 0x80000000) {
              if (iVar10 < -0x80000000) {
                iVar10 = -0x80000000;
              }
            }
            else {
              iVar10 = 0x7fffffff;
            }
            in_r1 = (short *)iVar10;
            uVar17 = (uint)*(char *)(in_r17 - 0x984);
            iVar10 = (int5)(int)uVar38 + -0x1cb8;
            bVar1 = (((SUB41(uVar46 >> 4,0) || 4 < *(byte *)(uVar21 + 0x3b)) ||
                     0xfffffff4 < *(byte *)(uVar21 + 0x7d)) || bVar1) || uVar38 < 0x1cb8;
            uVar46 = (uint)(uVar38 < 0x1cb8) << 3 | (uint)bVar1 << 4;
            if (iVar10 < 0x80000000) {
              if (iVar10 < -0x80000000) {
                iVar10 = -0x80000000;
              }
            }
            else {
              iVar10 = 0x7fffffff;
            }
            uVar21 = (uint)iVar10;
            *(short *)(uVar21 + 0x3e) = (short)iVar22;
            in_r17 = uVar17;
          } while ((bool)((byte)(uVar46 >> 3) & 1));
          uVar16 = ~(ushort)param_3;
          sVar45 = (short)in_lp;
          *(short *)(uVar38 + 0x1f26) = sVar45;
          iVar10 = (int5)(int)uVar38 + -0x1f8e;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          *(undefined4 *)(*(ushort *)((int)iVar10 + 0xf8) + 4) = 0xfffffff6;
          *(short *)(UNRECOVERED_JUMPTABLE_05 + 0x18fc) = sVar45;
          *(short *)(UNRECOVERED_JUMPTABLE_05 + 0x18fc) = sVar45;
          sVar45 = (short)UNRECOVERED_JUMPTABLE_05 * sVar45;
          iVar10 = (int5)(int)DAT_ffffa61c + -0x1f8e;
          uVar46 = (uint)((bVar1 || uVar38 < 0x1f8e) || (uint)(int)DAT_ffffa61c < 0x1f8e) << 4;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          iVar22 = *(int *)((int)iVar10 + 0xf8);
          func_0x00146c18(0xfffffff2,_DAT_00005c72);
          uVar27 = SUB42(in_r22,0);
          *(undefined4 *)(iVar22 + 4) = 0xfffffff4;
          *(short *)(UNRECOVERED_JUMPTABLE_05 + 0x18fc) = sVar45;
          *(short *)(UNRECOVERED_JUMPTABLE_05 + 0x18fc) = sVar45;
          in_lp = (int)(short)UNRECOVERED_JUMPTABLE_05 * (int)sVar45;
          *(uint *)(DAT_ffffa603 + 0x3206) = in_lp;
          uVar46 = uVar46 & 0xfffffff8;
          uVar21 = (uint)*(ushort *)(iVar22 + 0x18);
          *(short *)(uVar21 + 0x60) = (short)uVar25;
        }
        uVar32 = SUB41(in_r22,0);
        bVar30 = *(byte *)(uVar21 + 0x17);
        *(byte *)(uVar21 + 0x17) = bVar30;
        uVar24 = (ushort)bVar30 | (ushort)in_r23;
        uVar20 = *(ushort *)(uVar21 + 0x18);
        *(undefined2 *)(uint)uVar20 = uVar27;
        uVar38 = (uint)(ushort)((undefined2 *)(uint)uVar20)[0xc];
        *(uint *)(uVar38 + 0x40) = uVar25;
        *(short *)(uVar38 + 0xc6) = (short)uVar25;
        uVar25 = (uint)*(ushort *)(uVar38 + 0xc2);
        *(short *)(uVar38 + 0x40) = (short)uVar17;
        *(undefined2 *)(uVar38 + 0x40) = *(undefined2 *)(uVar38 + 0x60);
        uVar20 = (ushort)in_lp;
        cVar14 = *(char *)(uVar17 - 0x5cfa);
        *(ushort *)(DAT_ffff8f10 + 0x21e4) = uVar20;
        *(uint *)(UNRECOVERED_JUMPTABLE_05 + 0x10f0) = in_r27;
        iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_05 + -0x190c;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)iVar10;
        cVar15 = (&DAT_00007d00)[in_r24];
        iVar39 = *(int *)(iVar22 + 0x44);
        uVar27 = (undefined2)~uVar17;
        *(undefined2 *)(iVar22 + 0x40) = uVar27;
        puVar43 = (undefined4 *)(uint)*(ushort *)(iVar22 + 0x1a);
        *(undefined2 *)((int)puVar43 + 0x3e) = uVar27;
        psVar29 = (short *)(int)DAT_ffffe700;
        sVar45 = (short)*puVar43 * (short)cVar14 * (short)cVar14 * uVar16;
        iVar22 = (int)(short)UNRECOVERED_JUMPTABLE_05 * (int)(short)~uVar20;
        *(undefined1 *)(puVar43 + 0x1d) = in_r12;
        *(code **)((int)puVar43 + -0xcc6) = UNRECOVERED_JUMPTABLE_03;
        iVar10 = (int5)(int)puVar43 + -5;
        uVar46 = (uint)(((((bool)((byte)(uVar46 >> 4) & 1) ||
                          UNRECOVERED_JUMPTABLE_05 < (code *)0x190c) ||
                         (uint)(int)cVar15 < (~uVar17 | (int)cVar15)) || in_r1 < psVar29) ||
                       (undefined4 *)0x4 < puVar43) << 4;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(ushort *)(*(char *)(iVar39 + -0xf84) + 0x3200) = (short)UNRECOVERED_JUMPTABLE_05 * uVar20;
        uVar17 = (uint)DAT_ffffe580;
        *(short *)(uVar17 + 0x31fe) = (short)iVar10;
        uVar38 = (uint)*(ushort *)(*(int *)((int)iVar10 + 0xf8) + 0x18);
        func_0x00136aa6();
        uVar46 = uVar46 & 0xfffffff8;
        iVar39 = 0x5f23a;
        func_0x0007c3b2();
        *(int *)(uVar17 + 0x31fa) = iVar22;
        uVar20 = *(ushort *)(*(ushort *)(uVar38 + 0x18) + 0x18);
        uVar17 = (uint)in_r1 | 0x3205;
        iVar10 = (int5)(int)uVar17 + -0x3205;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        puVar43 = (undefined4 *)iVar10;
        if (9 < (int)*(char *)(iVar39 + -0x7d85) - 0x14U || in_r1 == (short *)0xffffffff) {
          sVar45 = uVar24 * sVar45;
          puVar43[0x17] = *puVar43;
          *(short *)(puVar43 + 0x32) = (short)uVar25;
          bVar30 = *(byte *)((int)puVar43 + 0x3b);
          iVar10 = (int5)(int)(uint)bVar30 + -5;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          puVar43 = (undefined4 *)iVar10;
          puVar43[0x1f] = in_r27;
          *(short *)(puVar43 + 0x32) = sVar45;
          puVar12 = (ushort *)(puVar43 + 6);
          do {
            puVar43 = (undefined4 *)(uint)*(ushort *)((int)puVar43 + 0x1a);
          } while (((((bool)((byte)(uVar46 >> 4) & 1) || uVar17 < 0x31fd) || uVar17 < 0x3205) ||
                   0xfffffff4 < uVar20) || 4 < bVar30);
          puVar43[0x1d] = (uint)*puVar12;
        }
        puVar43[0x1f] = in_r27;
        *(short *)(puVar43 + 0x32) = sVar45;
        *(uint *)(*(ushort *)((int)puVar43 + 0x1a) + 0x74) = (uint)*(ushort *)(puVar43 + 6);
        *(undefined1 *)(uVar25 + 0x11dc) = uVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\x05':
        goto code_r0x0004aee8;
      case '\x06':
      case '\t':
      case '\f':
      case '\x1a':
      case '\x1d':
      case 'S':
      case -100:
      case -0x43:
      case -0x20:
        goto code_r0x000524d2;
      case '\a':
      case '\x1b':
        bVar30 = 1;
      case 'v':
        if (!(bool)(bVar30 & 1)) {
code_r0x000474e0:
          uVar20 = *(ushort *)(pcVar41 + 0x60);
          uVar38 = (uint)DAT_00007317;
          pcVar41[0x17] = in_r14;
          if (pcVar41 == (code *)0x0) goto code_r0x00047534;
          iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE + -0x10;
          UNRECOVERED_JUMPTABLE_03 = UNRECOVERED_JUMPTABLE + -0x10;
          bVar2 = (int)UNRECOVERED_JUMPTABLE < 0;
          bVar1 = UNRECOVERED_JUMPTABLE == (code *)&DAT_00000010;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          UNRECOVERED_JUMPTABLE = (code *)iVar10;
          *(ushort *)(pcVar41 + 0x60) = uVar20;
          if ((int)UNRECOVERED_JUMPTABLE_03 < 0 !=
              (bVar2 && bVar2 != (int)UNRECOVERED_JUMPTABLE_03 < 0) || bVar1) {
code_r0x000475ea:
            *(ushort *)pcVar41 = (ushort)*(uint *)(pcVar41 + 0x8c);
            *(char *)(param_3 + 0x126) = (char)in_r16;
            *(char *)(param_3 + 0x14) = (char)in_r16;
            __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
code_r0x000474f4:
          pcVar41[0x57] = pcVar41[0x57];
          iVar10 = (int5)(int)in_r16 + (int5)(int)((uint)UNRECOVERED_JUMPTABLE / (uint)(int)sVar33);
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          *(ushort *)(pcVar41 + 0x50) = uVar20;
          if ((int)iVar10 != 0) {
            uVar20 = (ushort)*(uint *)(pcVar41 + 0xe8);
            *(ushort *)(pcVar41 + 0x86) = uVar19;
            (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
            *(ushort *)(pcVar41 + 0xd4) = uVar20;
            *(ushort *)(pcVar41 + 0xea) = uVar16;
            *(ushort *)pcVar41 = (ushort)*(uint *)(pcVar41 + 0x2c);
            iVar10 = (int5)(int)uVar38 + -0x1cee;
            if (iVar10 < 0x80000000) {
              if (iVar10 < -0x80000000) {
                iVar10 = -0x80000000;
              }
            }
            else {
              iVar10 = 0x7fffffff;
            }
            *(ushort *)((int)iVar10 + 0xd8) = uVar16;
            uVar46 = (uint)*(ushort *)((int)iVar10 + 0x18);
            *(ushort *)(uVar46 + 0x3c) = uVar16;
            *(ushort *)(uVar46 + 0x3e) = uVar16;
            uVar20 = (short)(char)unaff_gp & 0x1ced;
            *(ushort *)(uVar46 + 0xdc) = uVar16;
            *(ushort *)(uVar46 + 0x88) = uVar20;
            *(ushort *)(uVar46 + 0xda) = uVar16;
            *(ushort *)(uVar46 + 0xda) = uVar16;
            uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
            *(ushort *)(uVar46 + 0xda) = uVar16;
            *(ushort *)(uVar46 + 0xd8) = uVar16;
            *(short *)(uVar46 + 0x54) = (short)param_3;
            uVar46 = (uint)*(ushort *)(uVar46 + 0x1a);
            *(short *)(uVar46 + 0x12) = (short)in_r2;
            *(ushort *)(uVar46 + 0xe8) = uVar20;
            uVar46 = (uint)*(ushort *)(uVar46 + 0x1a);
            *(short *)(uVar46 + 0x86) = (short)param_3;
            (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
            uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
            *(ushort *)(uVar46 + 0xea) = uVar16;
            *(ushort *)(uVar46 + 0xd4) = uVar20;
            pcVar41 = (code *)(uint)*(ushort *)(uVar46 + 0x18);
            *(ushort *)(pcVar41 + 0xea) = uVar16;
            in_r16 = in_r22;
            goto code_r0x000475ea;
          }
          *(uint *)(pcVar41 + 0x74) = in_lp;
          iVar10 = (int5)(int)(uint)(byte)pcVar41[0x3b] + -5;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          pcVar41 = (code *)(uint)*(ushort *)((int)iVar10 + 0x18);
          *(ushort *)(pcVar41 + 0xfc) = uVar16;
        }
        uVar20 = *(ushort *)pcVar41;
code_r0x00047534:
        uVar46 = (*(code *)0x0)(uVar20);
        return uVar46;
      case '\b':
      case '\x19':
      case '9':
        goto code_r0x00049af0;
      case '\v':
      case '\x1c':
      case '<':
        goto code_r0x00049aea;
      case '\r':
      case '\x1e':
        goto code_r0x000474e0;
      case '\x0e':
      case '\x1f':
      case '?':
        goto code_r0x00049ae4;
      default:
        goto code_r0x000523d2;
      case '\x10':
      case '!':
      case ',':
      case -0x72:
      case -0x5f:
      case -9:
        goto code_r0x0005b248;
      case '\x11':
      case '\"':
      case -0x39:
        goto code_r0x000523d6;
      case '\x12':
      case '#':
      case '.':
      case 'F':
      case -0x6e:
      case -0x5d:
      case -0x3a:
      case -0x1b:
      case -5:
        pcVar41 = (code *)~uVar35;
      case '\x16':
      case '\'':
      case -0x7e:
      case -0x70:
      case -0x57:
      case -0x54:
      case -0x49:
      case -0x15:
      case -7:
code_r0x0005b22e:
code_r0x0005b230:
        pcVar41 = (code *)((uint)pcVar41 ^ (uint)UNRECOVERED_JUMPTABLE_05);
        iVar10 = -(int5)(int)UNRECOVERED_JUMPTABLE;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        UNRECOVERED_JUMPTABLE = (code *)iVar10;
code_r0x0005b23c:
        *(ushort *)(pcVar41 + 0x9a) = uVar37;
code_r0x0005b240:
        *(ushort *)(pcVar41 + 0x98) = uVar37;
code_r0x0005b242:
        pcVar41 = (code *)~uVar35;
code_r0x0005b246:
code_r0x0005b248:
        pcVar41 = (code *)((uint)pcVar41 ^ uVar35);
        iVar10 = -(int5)(int)UNRECOVERED_JUMPTABLE;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        UNRECOVERED_JUMPTABLE = (code *)iVar10;
code_r0x0005b256:
code_r0x0005b258:
        *(ushort *)(pcVar41 + 0x9a) = uVar37;
        *(ushort *)(pcVar41 + 0x98) = uVar37;
        iVar10 = -(int5)(int)UNRECOVERED_JUMPTABLE;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar10 = -(int5)(int)iVar10;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        UNRECOVERED_JUMPTABLE = (code *)iVar10;
        pcVar41 = (code *)(uint)bRam0000003a;
        uRam00000097 = uVar37;
        uRam00000099 = uVar37;
        bRamfffffd3a = in_r19;
code_r0x0005b28e:
        iVar10 = (int5)(int)pcVar41 + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        pcVar41 = (code *)iVar10;
code_r0x0005b294:
        *(uint *)(pcVar41 + 0x7c) = in_r27;
        *(short *)(*(ushort *)(pcVar41 + 0x1a) + 0x40) = (short)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\x13':
      case '$':
      case 'E':
      case -0x60:
        goto code_r0x000523d4;
      case '\x14':
      case '%':
      case 'H':
      case -0x80:
      case -0x6c:
      case -0x38:
      case -0x19:
      case -3:
        goto code_r0x0005b246;
      case '\x17':
        goto code_r0x0004a934;
      case '(':
        goto code_r0x0004a912;
      case ')':
        goto code_r0x000474f4;
      case '*':
        goto code_r0x00049b0e;
      case '-':
        goto code_r0x000523da;
      case '/':
        iVar10 = (int5)(int)in_r23 + -0x1ff;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        uVar25 = (uint)iVar10;
        iVar10 = (int5)(int)in_r16 + (int5)(int)(uint)*(ushort *)(pcVar41 + 0xac);
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        UNRECOVERED_JUMPTABLE = (code *)iVar10;
        goto code_r0x0004a912;
      case '0':
      case -0x5a:
      case -0x33:
        uVar27 = (undefined2)in_r27;
        *(undefined2 *)(UNRECOVERED_JUMPTABLE_05 + 0x1316) = uVar27;
        *(undefined2 *)(UNRECOVERED_JUMPTABLE_05 + 0x132a) = uVar27;
        *(uint *)(UNRECOVERED_JUMPTABLE_05 + 0x1314) = in_r27;
        *(uint *)(UNRECOVERED_JUMPTABLE_05 + 0x1328) = in_r27;
        *(undefined2 *)(UNRECOVERED_JUMPTABLE_05 + 0x1314) = uVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '1':
      case -0x59:
      case -0x32:
        goto code_r0x000556ce;
      case '2':
      case 'B':
      case -0x58:
      case -0x4a:
      case -0x31:
      case -0x23:
        in_r16 = in_r22;
        goto code_r0x0005ef5c;
      case '3':
      case '6':
      case 'C':
      case -0x17:
        goto code_r0x0005b23c;
      case '4':
      case -0x56:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '5':
      case -0x55:
        *(code **)(pcVar41 + -0x2c6) = UNRECOVERED_JUMPTABLE_03;
        iVar10 = (int5)(int)(uint)(byte)pcVar41[0x3b] + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)(char)DAT_ffffe580;
        *(ushort *)((int)iVar10 + 0xa4) = uVar26;
        iVar10 = (int5)iVar22 - (int5)(int)~(uint)&stack0x00000000;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(char *)((in_r25 & 5) + 0x12a6) = (char)in_r18;
                    /* WARNING: Could not recover jumptable at 0x0005f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)(*(short *)((int)iVar10 * 2 + 0x5f498) * 2 + 0x5f498))();
        return uVar46;
      case '7':
      case ':':
      case '=':
      case 'x':
      case -0x53:
        uVar47 = uVar47 & 0xfffffffc;
        uVar16 = *(ushort *)(pcVar41 + 0x18);
        goto LAB_00055634;
      case '8':
      case 'u':
      case -0x7a:
      case -0x46:
      case -0x11:
        goto code_r0x0005b242;
      case ';':
      case -0x76:
      case -0x3f:
      case -0xd:
        goto code_r0x0005b256;
      case 'A':
        goto code_r0x000568b2;
      case 'D':
        if (in_r18 == 0x754c) {
          in_lp = 0;
        }
        *(uint *)(in_lp | uVar36) = uVar36;
        ((uint *)(in_lp | uVar36))[4] = uVar21;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'I':
        uVar20 = *(ushort *)
                  (*(ushort *)
                    (*(ushort *)
                      (*(ushort *)
                        (*(ushort *)
                          (*(ushort *)
                            (*(ushort *)
                              (*(ushort *)
                                (*(ushort *)
                                  (*(ushort *)
                                    (*(ushort *)
                                      (*(ushort *)
                                        (*(ushort *)
                                          (*(ushort *)
                                            (*(ushort *)
                                              (*(ushort *)
                                                (*(ushort *)
                                                  (*(ushort *)
                                                    (*(ushort *)
                                                      (*(ushort *)
                                                        (*(ushort *)
                                                          (*(ushort *)
                                                            (*(ushort *)
                                                              (*(ushort *)
                                                                (*(ushort *)
                                                                  (*(ushort *)
                                                                    (*(ushort *)
                                                                      (*(ushort *)
                                                                        (*(ushort *)
                                                                          (*(ushort *)
                                                                            (*(ushort *)
                                                                              (*(ushort *)
                                                                                (*(ushort *)
                                                                                  (*(ushort *)
                                                                                    (*(ushort *)
                                                                                      (*(ushort *)
                                                                                        (*(ushort *)
                                                                                          (*(ushort 
                                                  *)(*(ushort *)
                                                      (*(ushort *)
                                                        (*(ushort *)
                                                          (*(ushort *)
                                                            (*(ushort *)
                                                              (*(ushort *)
                                                                (*(ushort *)
                                                                  (*(ushort *)
                                                                    (*(ushort *)
                                                                      (*(ushort *)
                                                                        (*(ushort *)
                                                                          (*(ushort *)
                                                                            (*(ushort *)
                                                                              (*(ushort *)
                                                                                (*(ushort *)
                                                                                  (*(ushort *)
                                                                                    (*(ushort *)
                                                                                      (*(ushort *)
                                                                                        (*(ushort *)
                                                                                          (*(ushort 
                                                  *)(*(ushort *)
                                                      (*(ushort *)
                                                        (*(ushort *)
                                                          (*(ushort *)
                                                            (*(ushort *)
                                                              (*(ushort *)
                                                                (*(ushort *)
                                                                  (*(ushort *)
                                                                    (*(ushort *)
                                                                      (*(ushort *)
                                                                        (*(ushort *)
                                                                          (*(ushort *)
                                                                            (*(ushort *)
                                                                              (*(ushort *)
                                                                                (*(ushort *)
                                                                                  (*(ushort *)
                                                                                    (*(ushort *)
                                                                                      (*(ushort *)
                                                                                        (*(ushort *)
                                                                                          (*(ushort 
                                                  *)(*(ushort *)
                                                      (*(ushort *)
                                                        (*(ushort *)
                                                          (*(ushort *)
                                                            (*(ushort *)
                                                              (*(ushort *)(pcVar41 + 0x18) + 0x18) +
                                                            0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                                  0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) +
                                      0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18)
                      + 0x18) + 0x18) + 0x18);
        *(short *)(param_3 - 0x18f8) = sVar34;
        *(ushort *)(uVar20 - 0x78b8) = uVar20;
                    /* WARNING: Could not recover jumptable at 0x000504a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)&LAB_00000020)();
        return uVar46;
      case 'J':
      case -0x68:
        goto code_r0x0005b240;
      case 'K':
        goto code_r0x000524e2;
      case 'M':
        goto code_r0x0005b230;
      case 'O':
        uVar46 = (uint)*(ushort *)
                        (*(ushort *)(*(ushort *)(*(uint *)(pcVar41 + 0xf8) + 0x18) + 0x18) + 0x18);
        *(undefined2 *)(uVar46 + 0x88) = 8;
        *(short *)(uVar46 + 0x2a) = sVar34;
        *(short *)(uVar46 + 0x8e) = sVar34;
        *(uint *)(uVar46 + 0x7c) = in_r27;
        *(char *)(*(ushort *)(uVar46 + 0x88) + 0x5928) = (char)in_r17;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'P':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'Q':
        goto code_r0x000523d2;
      case 'R':
        if (bVar1 || (bool)(bVar30 & 1)) goto code_r0x000559f6;
        if (!(bool)((byte)(uVar47 >> 3) & 1) && !(bool)(bVar30 & 1)) {
          *(ushort *)(uVar38 + 0x2db8) = uVar44;
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          uVar25 = uVar46;
          goto code_r0x00055a4a;
        }
        goto code_r0x00055a96;
      case 'T':
        goto code_r0x0005eed2;
      case 'U':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'V':
        goto code_r0x000559e4;
      case 'X':
        pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
        if ((bool)((byte)(uVar47 >> 3) & 1)) {
          cRamfffffffe = cVar31;
          halt_baddata();
        }
      case 'c':
      case 'e':
      case 'g':
      case 'i':
      case 'k':
      case 'm':
      case 'o':
      case 'q':
      case 's':
        goto LAB_000556f0;
      case 'Y':
        in_r20r21 = in_r20r21 & 0xffffffff;
      case 'Z':
        *(uint *)(pcVar41 + 4) = (uint)in_r20r21;
        iVar22 = (int)DAT_ffffe700;
        *(ushort *)(pcVar41 + 0x3e) = uVar44 & 0x8f11;
        *(ushort *)(pcVar41 + 0x80) = uVar20;
        *(ushort *)(pcVar41 + 0x80) = uVar20;
        *(ushort *)(pcVar41 + 0x80) = uVar20;
        *(ushort *)(pcVar41 + 0x80) = uVar20;
        *(short *)(iVar22 + 0x2c0e) = (short)UNRECOVERED_JUMPTABLE_01;
        uVar16 = *(ushort *)(pcVar41 + 0x18);
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(ushort *)(iVar22 + 0x2b58) = *(ushort *)(pcVar41 + 0x18);
        uVar18 = *(undefined4 *)(uVar46 + 0x20);
        *(int *)(uVar46 + 4) = (int)UNRECOVERED_JUMPTABLE_01 - (int)&stack0x00000000;
        *(int *)(uVar46 + 4) = (int)UNRECOVERED_JUMPTABLE_01 - (int)&stack0x00000000;
        iVar22 = (int)DAT_ffffe700;
        *(ushort *)(uVar46 + 0x3e) = uVar44 & 0x8f11;
        *(ushort *)(uVar46 + 0x80) = uVar20;
        *(ushort *)(uVar46 + 0x80) = uVar20;
        *(ushort *)(uVar46 + 0x80) = uVar20;
        *(ushort *)(uVar46 + 0x80) = uVar20;
        *(ushort *)(iVar22 + 0x2c10) = uVar16;
        *(char *)(param_3 + 0x5754) = (char)uVar18;
        *(ushort *)(uVar46 + 0x80) = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '[':
        cRamfffffffe = cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case '\\':
        *(code *)(in_r11 + 0x5db) = cVar31;
        *(code *)(param_3 + 0x5de) = cVar31;
        pcVar41 = *(code **)(uVar36 + 8);
        in_r22 = UNRECOVERED_JUMPTABLE_02;
      case 'd':
        *(uint *)(pcVar41 + 0x20) = in_r18;
        UNRECOVERED_JUMPTABLE_02 = (code *)(in_r27 - (int)UNRECOVERED_JUMPTABLE_02);
        uVar20 = *(ushort *)(pcVar41 + 0x80);
        uVar16 = *(ushort *)(pcVar41 + 6);
        in_r20r21 = (ulonglong)(uVar16 | in_r2) << 0x20;
        *(char *)(in_r11 + 0x5db) = (char)in_r22;
        *(char *)(uVar20 + 0x5de) = (char)in_r22;
        pcVar41 = *(code **)((uVar16 | in_r2) + 8);
code_r0x0004aee8:
        param_3 = (uint)*(ushort *)(pcVar41 + 0x86);
        *(uint *)(pcVar41 + 0x20) = in_r18;
        goto code_r0x0004aefe;
      case ']':
      case '_':
        pcVar41[0x56] = SUB41(UNRECOVERED_JUMPTABLE,0);
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(ushort *)(uVar46 + 0x52) = uVar16;
        uVar27 = *(undefined2 *)(uVar46 + 0x60);
        *(short *)(uVar46 + 0xae) =
             (short)((uint)UNRECOVERED_JUMPTABLE / (uint)(int)(short)in_r22) * -0xf;
        uVar46 = (uint)*(ushort *)(uVar46 + 0x1a);
        *(short *)(uVar46 + 0x10) = (short)in_r2;
        *(undefined1 *)(uVar46 + 0x17) = *(undefined1 *)(uVar46 + 0x17);
        *(undefined2 *)(uVar46 + 0x4e) = uVar27;
        uVar20 = *(ushort *)(uVar46 + 0x18);
        *(short *)(uVar20 + 0x5a) = (short)in_r2;
        iVar10 = (int5)(int)(uint)*(byte *)(uVar20 + 0x3b) + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(uint *)((int)iVar10 + 0x7c) = in_r27;
        __nop();
        *(undefined1 *)(param_3 + 0x14) = uVar32;
        halt_baddata();
      case '^':
                    /* WARNING: Could not recover jumptable at 0x00064eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)(*(short *)(in_r24 * 2 + 0x64eec) * 2 + 0x64eec))();
        return uVar46;
      case '`':
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'a':
        goto code_r0x0005250e;
      case 'b':
        goto code_r0x0004b162;
      case 'f':
        goto code_r0x0004aefe;
      case 'h':
        goto code_r0x0004af4e;
      case 'j':
      case 'p':
        uVar21 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(uint *)(uVar21 + 0x3c) = uVar21;
        in_r17 = (uint)*(char *)(((int)UNRECOVERED_JUMPTABLE_05 - (int)UNRECOVERED_JUMPTABLE_02) +
                                -0xe84);
        uVar25 = in_lp - ((int)UNRECOVERED_JUMPTABLE_05 - (int)UNRECOVERED_JUMPTABLE_02);
        uVar17 = uVar38 - uVar25;
        uVar46 = (uint)((int)(uVar38 - uVar25) < 0) << 1 | (uint)(uVar38 == uVar25);
        uVar27 = *(undefined2 *)(*(ushort *)(uVar21 + 0x18) + 2);
        if (uVar25 <= uVar38 && !(bool)((byte)uVar46 & 1)) {
          uVar46 = 0;
        }
        if (!SUB41(uVar46 >> 1,0)) {
          uVar38 = 0x299f;
        }
        uVar46 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar21 + 0x18) + 0x18) + 0x18);
        if (0 < (int)(uVar36 ^ param_3)) {
          *(undefined4 *)(uVar46 + 8) = 8;
        }
        *(undefined2 *)(uVar46 + 4) = uVar27;
        uVar25 = (uint)((int)(uVar38 - uVar17) < 0) << 1 | (uint)(uVar38 == uVar17);
        uVar21 = (uint)*(ushort *)(*(ushort *)(uVar46 + 0x18) + 2);
        pcVar41 = (code *)(uint)*(ushort *)(*(ushort *)(uVar46 + 0x18) + 0x18);
        if (uVar17 <= uVar38 && !(bool)((byte)uVar25 & 1)) {
          uVar25 = 0;
        }
        if (!SUB41(uVar25 >> 1,0)) {
          uVar38 = 0x299f;
        }
      case 'r':
        *(ushort *)(uVar38 + 0x299c) = uVar44;
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(uint *)(uVar46 + 0xcc) = uVar21;
        *(char *)(uVar46 + 0x2d) = (char)in_r17;
        *(uint *)(uVar46 + 0x7c) = (uint)*(ushort *)(uVar46 + 0xd8);
        *(uint *)(*(ushort *)(uVar46 + 0x22) + 0x2994) = uVar46;
        iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_04 - (int5)(int)(uint)*(ushort *)(in_lp + 2);
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(short *)(in_lp + 0x3e) = (short)iVar10;
        *(uint *)(in_lp + 0x3c) = in_lp;
        *(uint *)(in_lp + 0x3c) = in_lp;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'l':
        goto code_r0x0004af90;
      case 'n':
        goto code_r0x0004b106;
      case 't':
        iVar10 = (int5)(int)uVar38 + -0x2cd7;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(ushort *)((int)iVar10 + 0xb2) = uVar24;
        iVar10 = (int5)(int)uVar38 + -0x2cd6;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(ushort *)((int)iVar10 + 0xb4) = uVar24;
        iVar10 = (int5)(int)uVar38 + -0x2cd8;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(ushort *)((int)iVar10 + 0xb2) = uVar24;
        iVar10 = (int5)(int)uVar38 + -0x2cdc;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)iVar10;
        *(ushort *)(iVar22 + 0xb4) = uVar24;
        *(ushort *)(iVar22 + 0xb6) = uVar24;
        uVar20 = *(ushort *)(iVar22 + 0x18);
        *(ushort *)(uVar20 + 0xb2) = uVar24;
        uVar46 = (uint)*(ushort *)(uVar20 + 0x18);
        *(ushort *)(uVar46 + 0xb4) = uVar24;
        *(ushort *)(uVar46 + 0xb6) = uVar24;
        *(undefined1 *)(uVar46 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 'w':
        goto code_r0x00049afa;
      case 'y':
        goto code_r0x0005b258;
      case 'z':
        goto code_r0x00049af4;
      case '|':
        goto code_r0x0005b28e;
      case -0x7d:
      case -0x6b:
      case -0x5c:
      case -0x35:
      case -0x14:
      case -2:
        pcVar41[0x72] = SUB21(*(ushort *)(pcVar41 + 0x1a),0);
        *(ushort *)(pcVar41 + 0xc) = uVar26;
        *(ushort *)(pcVar41 + 0xc) = (ushort)((uint)*(ushort *)(pcVar41 + 0x8e) / (uint)(int)sVar33)
        ;
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(code *)(uVar46 + 0x7a) = SUB21(*(ushort *)(pcVar41 + 0x1a),0);
        *(char *)(uVar46 + 0x7b) = (char)*(undefined2 *)(uVar46 + 0x24);
        *(uint *)(uVar46 + 0x48) = *(uint *)(uVar46 + 0x4c) & (uint)in_r22;
        *(uint *)(uVar46 + 0x84) = in_r11;
        *(uint *)(uVar46 + 0x84) = in_r11;
        *(undefined1 *)(uVar46 + 0x76) = 0;
        uVar25 = (uint)*(ushort *)(uVar46 + 0x18);
        *(uint *)(uVar25 + 0x48) = *(uint *)(uVar25 + 0x4c) & (uint)in_r22;
        *(ushort *)(uVar25 + 0x86) = uVar23;
        uVar46 = (uint)*(ushort *)(uVar25 + 2);
        *(ushort *)(uVar25 + 0x86) = uVar23;
        *(undefined1 *)(uVar25 + 0x7d) = 0;
        iVar10 = (int5)(int)uVar46 + -0x2bf1;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(undefined1 *)((int)iVar10 + 0x72) = 0;
        iVar10 = (int5)(int)uVar46 + -0x2bf0;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(undefined1 *)((int)iVar10 + 0x71) = 0;
        iVar10 = (int5)(int)uVar46 + -0x2bfa;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(undefined1 *)((int)iVar10 + 0x7b) = 0;
        iVar10 = (int5)(int)uVar46 + -0x2bf6;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(undefined1 *)((int)iVar10 + 0x7a) = 0;
        iVar10 = (int5)(int)uVar46 + -0x2bfd;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        puVar11 = (undefined2 *)iVar10;
        uVar27 = *puVar11;
        puVar11[0x44] = uVar19;
        *(char *)(puVar11 + 0x3b) = (char)uVar27;
        uVar46 = (uint)(ushort)puVar11[0xc];
        do {
          *(char *)(uVar46 + 0x75) = (char)uVar27;
          *(undefined1 *)(uVar46 + 0x7f) = 0;
          *(byte *)(*(ushort *)(uVar46 + 0x86) + 0x8c4) = (byte)in_r23 | 0xf2;
        } while (-1 < (int)UNRECOVERED_JUMPTABLE_03);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x7c:
        if ((bool)(bVar30 & 1)) {
          if ((bool)((byte)(uVar47 >> 3) & 1)) goto code_r0x000558b6;
          goto code_r0x0005590a;
        }
code_r0x0005586e:
        uVar38 = (uint)&stack0x00000000 | 0x2daf;
        uVar46 = uVar48 & 0xfffffffc | (uint)(UNRECOVERED_JUMPTABLE_02 == (code *)0x0);
        uVar21 = (uint)*(ushort *)(pcVar41 + 0x88);
        if (!(bool)((byte)(uVar48 >> 3) & 1) && !(bool)((byte)uVar46 & 1)) {
          in_r20r21 = (ulonglong)*(uint *)(pcVar41 + 4) << 0x20;
          uVar46 = uVar48 & 0xfffffffc | (uint)((uVar17 & 0x2db3) == 0);
          goto code_r0x00055888;
        }
code_r0x000558d6:
        uVar25 = uVar46 & 0xfffffffc;
        uVar17 = uVar25 | ((uint)in_r1 | 0xa30b) == 0;
        pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
        if ((int)((uint)in_r1 | 0xa30b) < 0) {
          uVar21 = (uint)*(ushort *)(pcVar41 + 8);
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          uVar25 = uVar46 >> 3;
          uVar46 = uVar17;
          if ((bool)((byte)uVar25 & 1)) {
            uVar25 = uVar17;
            if ((bool)((byte)uVar17 & 1)) {
              *(short *)((in_r2 | 0x2daf) + 0x2daa) = (short)in_lp;
              goto code_r0x000559fe;
            }
            goto code_r0x00055950;
          }
          goto code_r0x000558f8;
        }
code_r0x00055950:
        if (-1 < (int)((uint)in_r1 | 0xa30b)) {
          *(uint *)((in_r2 | 0x2daf) + 0x2dc2) = in_lp;
code_r0x000559be:
                    /* WARNING: Could not recover jumptable at 0x000559ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar46 = (*UNRECOVERED_JUMPTABLE_01)(param_3,uVar21);
          return uVar46;
        }
        uVar21 = (uint)*(ushort *)(*(ushort *)(pcVar41 + 0x18) + 8);
        uVar20 = *(ushort *)(*(ushort *)(pcVar41 + 0x18) + 0x18);
        if ((bool)((byte)(uVar25 >> 3) & 1)) goto code_r0x000559be;
        goto code_r0x00055968;
      case -0x78:
      case -0xf:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x74:
      case -0xb:
        goto code_r0x00049ae6;
      case -0x6d:
      case -0x3b:
      case -0x1a:
      case -4:
        goto code_r0x000523d8;
      case -0x6a:
        if (!(bool)(bVar30 & 1)) goto code_r0x0005583a;
        goto code_r0x0005588e;
      case -0x67:
        uVar46 = (uint)(8 < (byte)in_r16[-0x1e80]) << 3 | (uint)(in_r16[-0x1e80] == (code)0x9);
        if ((bool)((byte)uVar46 & 1)) goto code_r0x00064882;
        if (!(bool)((byte)uVar46 & 1)) {
          if ((int)UNRECOVERED_JUMPTABLE_01 < 0 != (int)UNRECOVERED_JUMPTABLE_05 < 0 &&
              (int)UNRECOVERED_JUMPTABLE_05 < 0 ==
              (int)UNRECOVERED_JUMPTABLE_01 - (int)UNRECOVERED_JUMPTABLE_05 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Could not recover jumptable at 0x0006479a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar46 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar46;
        }
        do {
          *(ushort *)(pcVar41 + 2) = (ushort)param_3;
          in_r16 = (code *)(in_r18 - 0x2f5c);
          param_3 = (uint)*(ushort *)(pcVar41 + 2);
          cVar31 = UNRECOVERED_JUMPTABLE_02[-0x1c98];
          *(char *)(param_3 + 0x12f2) = (char)in_r16;
          *(byte *)(in_r11 - 3) = (byte)in_r27 | (byte)in_r23;
          uVar46 = (uint)(((int)(char)cVar31 & 0x100000U) != 0) << 3;
code_r0x00064882:
          *(char *)(iVar22 + -0x3ab8) = (char)in_r16;
        } while (SUB41(uVar46 >> 3,0));
        *(char *)(CONCAT22(in_register_00000036,in_r13) + 0x62a4) = (char)in_r18;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x66:
        *(uint *)(uVar38 + 0x2c1e) = in_lp;
        cRamffffffff = cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x65:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x62:
      case -0x3d:
        *(code *)(iVar22 + 0x2c36) = cVar31;
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(char *)(uVar46 + 0x6a) = (char)*(ushort *)(pcVar41 + 100);
        *(ushort *)(uVar46 + 0xc) = uVar26;
        puVar40 = (uint *)(uint)*(ushort *)(uVar46 + 0x18);
        iVar10 = (int5)(int)in_r16 + (int5)(int)UNRECOVERED_JUMPTABLE;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(short *)((int)puVar40 + 0x3e) = (short)iVar10;
        *(ushort *)(puVar40 + 0x34) = (ushort)puVar40[0x18];
        *puVar40 = (uint)(ushort)puVar40[0x18];
        uVar46 = (uint)*(ushort *)((ushort)puVar40[6] + 0x18);
        *(uint *)(uVar46 + 4) = uVar36 | (uint)in_r1;
        uVar46 = (uint)*(ushort *)(*(ushort *)(uVar46 + 0x18) + 0x18);
        *(uint *)(uVar46 + 4) = uVar36 | (uint)in_r1 | uVar17 | 0x2c34;
        uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
        uVar25 = (uint)*(ushort *)(uVar46 + 0x18);
        *(undefined2 *)(uVar25 + 0x60) = *(undefined2 *)(uVar46 + 2);
        *(undefined1 *)(uVar25 + 0x17) = *(undefined1 *)(uVar25 + 0x17);
        iVar22 = *(int *)(uVar25 + 0xf8);
        *(short *)(iVar22 + 0xae) = (short)((uint)in_r23 / (uint)(int)sVar33);
        uVar46 = (uint)*(ushort *)(iVar22 + 0x18);
        uVar20 = *(ushort *)(uVar46 + 0x60);
        *(undefined2 *)(uVar46 + 0x60) = *(undefined2 *)(iVar22 + 0x50);
        *(undefined1 *)(uVar46 + 0x17) = *(undefined1 *)(uVar46 + 0x17);
        *(ushort *)(uVar46 + 0xae) = uVar20 | 0xf27c;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
        halt_unimplemented();
      case -0x61:
        if ((bool)((byte)(uVar47 >> 3) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x00055828;
      case -0x5e:
        goto code_r0x00052422;
      case -0x5b:
code_r0x0005581a:
        uVar46 = uVar46 & 0xfffffffc;
code_r0x00055824:
        uVar38 = 0x2db1;
        uVar46 = uVar46 & 0xfffffffc;
code_r0x00055828:
        uVar46 = uVar46 & 0xfffffffc | 1;
code_r0x00055832:
        if ((bool)((byte)uVar46 & 1)) {
code_r0x00055888:
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          UNRECOVERED_JUMPTABLE_02 = *(code **)(pcVar41 + 0xa4);
        }
        else {
          in_r20r21 = (ulonglong)*(uint *)(pcVar41 + 4) << 0x20;
code_r0x0005583a:
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          uVar46 = (uint)(uVar17 == 0);
        }
code_r0x0005588e:
        cRamfffffffe = cVar31;
        *(ushort *)(uVar38 + 0x2260) = uVar44;
        uVar36 = (uint)(in_r20r21 >> 0x20);
        uVar20 = *(ushort *)(pcVar41 + 0x18);
        in_r1 = (short *)((int)(short)in_r18 * (int)sVar45);
code_r0x000558a6:
        pcVar41 = (code *)(uint)uVar20;
        if ((bool)((byte)(uVar46 >> 3) & 1) || (bool)((byte)uVar46 & 1)) {
          *(ushort *)(pcVar41 + 6) = *(ushort *)(pcVar41 + 0x88);
code_r0x000558f8:
          uVar46 = uVar46 & 0xfffffffc;
code_r0x0005590a:
          uVar20 = *(ushort *)(pcVar41 + 0x18);
          uVar25 = uVar46;
code_r0x00055968:
          if ((bool)((byte)(uVar25 >> 3) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar21 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar20 + 0x18) + 0x18) + 2);
code_r0x000559e4:
code_r0x000559f6:
                    /* WARNING: Could not recover jumptable at 0x000559f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar46 = (*UNRECOVERED_JUMPTABLE_02)(uVar21);
          return uVar46;
        }
code_r0x000558b6:
        pcVar41 = *(code **)(pcVar41 + 0xf8);
code_r0x00055922:
        UNRECOVERED_JUMPTABLE = (code *)((uint)UNRECOVERED_JUMPTABLE & 0xffff);
        pcVar41 = *(code **)(pcVar41 + 0xf8);
        bVar2 = ((uint)UNRECOVERED_JUMPTABLE_00 | 0x2daf) < 8;
        uVar38 = param_3 | 0x2daf;
        bVar1 = (int)uVar38 < 0;
        uVar25 = (uint)bVar2 << 3 | (uint)(uVar38 == 0);
        in_r22 = (code *)((uint)in_r22 & 0xff);
        uVar21 = (uint)*(ushort *)(pcVar41 + 0x88);
        if (!bVar1) {
          uVar21 = uVar17 & 0x2db4;
          pcVar41 = *(code **)(pcVar41 + 0xf8);
          cRamfffffffe = cVar31;
code_r0x000559fe:
                    /* WARNING: Could not recover jumptable at 0x00055a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar46 = (*(code *)(*(short *)((int)pcVar41 * 2 + 0x55a08) * 2 + 0x55a08))(uVar21);
          return uVar46;
        }
        cRamfffffffe = cVar31;
        if (!bVar2 && !(bool)((byte)uVar25 & 1)) goto code_r0x000559f6;
code_r0x00055a4a:
        if (bVar1) {
          uVar16 = *(ushort *)(pcVar41 + 0x80);
          param_3 = (uint)uVar16;
          uVar24 = *(ushort *)(&DAT_00004c00 + in_lp);
          in_lp = (uint)uVar24;
          uVar20 = *(ushort *)(pcVar41 + 0x14);
          *(uint *)(uVar38 + 0x2dc2) = in_lp;
          uVar46 = uVar25 & 0xfffffffc;
          uVar36 = (uint)uVar20 ^ CONCAT22(in_register_00000036,in_r13);
          uVar20 = *(ushort *)(pcVar41 + 0x18);
          UNRECOVERED_JUMPTABLE_02 = *(code **)(uVar20 + 0xa4);
          *(ushort *)((in_r2 | 0x2daf) + 0x2260) = uVar24;
          pcVar41 = (code *)(uint)*(ushort *)(uVar20 + 0x18);
          in_r1 = (short *)((int)(short)uVar16 * (int)(short)in_r1);
          if ((bool)((byte)(uVar25 >> 3) & 1) || uVar36 == 0) goto code_r0x00055b0e;
          uVar38 = 0x2db9;
          in_r20r21 = (ulonglong)(*(ushort *)(pcVar41 + 0x3c) | in_r25) << 0x20;
          uVar21 = (uint)*(ushort *)(pcVar41 + 0x88);
code_r0x00055a96:
          uVar36 = (uint)(in_r20r21 >> 0x20);
          if (!(bool)((byte)(uVar46 >> 3) & 1)) {
            uVar36 = *(uint *)(pcVar41 + 4);
            uVar25 = uVar46 & 0xfffffffc;
            cRamfffffffe = cVar31;
            *(short *)(uVar38 + 0x2db8) = (short)in_lp;
            goto code_r0x00055aa4;
          }
          cRamfffffffe = cVar31;
          if (!(bool)((byte)(uVar46 >> 3) & 1)) goto code_r0x00055b0e;
          uVar46 = uVar46 & 0xfffffffc | (uint)(uVar36 == 0 && in_r1 == (short *)0x0);
          *(ushort *)(pcVar41 + 0x3e) = (ushort)UNRECOVERED_JUMPTABLE;
          pbVar42 = (byte *)(uint)*(ushort *)(pcVar41 + 0x18);
          if ((bool)((byte)uVar46 & 1)) {
            pcVar41 = (code *)(uint)*(ushort *)(pbVar42 + 0x18);
            param_3 = (uint)*(ushort *)(pcVar41 + 0x88);
            goto code_r0x00055b62;
          }
        }
        else {
code_r0x00055aa4:
          *(uint *)(uVar38 + 0x2dc2) = in_lp;
          *(short *)(uVar38 + 0x2dde) = (short)in_lp;
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          if ((bool)((byte)(uVar25 >> 3) & 1)) {
            if ((bool)((byte)(uVar25 >> 3) & 1)) goto code_r0x00055b0e;
code_r0x00055b62:
            uVar46 = (uint)(UNRECOVERED_JUMPTABLE_04 < UNRECOVERED_JUMPTABLE) << 3;
            UNRECOVERED_JUMPTABLE_03 = pcVar41 + 0x30;
            iVar22 = 0x2daa;
            pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
            if (UNRECOVERED_JUMPTABLE_04 < UNRECOVERED_JUMPTABLE) {
              uVar36 = *(uint *)UNRECOVERED_JUMPTABLE_03 | in_r17;
              pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
              goto code_r0x00055b78;
            }
            iVar22 = (int)(char)(&DAT_ffffe256)[param_3];
            uRam00005af6 = (uint)*(ushort *)(pcVar41 + 0x18);
code_r0x00055b7c:
            *(uint *)(iVar22 + 0x2da8) = in_lp;
          }
          else {
            uVar25 = (int)(char)(&DAT_ffffe256)[param_3] - 10;
            uVar36 = (int)(uVar36 >> 1) >> 0x13;
            uVar46 = (uint)(9 < uVar25) << 3;
            pcVar41[0x35] = SUB41(uVar36,0);
            if (9 < uVar25) {
code_r0x00055b0e:
              iVar22 = (int)*(char *)(param_3 - 0x784);
              uVar46 = CONCAT22(in_register_00000032,CONCAT11(in_register_00000031,in_r12));
              uVar46 = (uint)(uVar46 < 0xfffffff3) << 3 | (uint)((int)(uVar46 + 0xd) < 0) << 1;
              pcVar41 = *(code **)(pcVar41 + 0xf8);
              if (!(bool)((byte)(uVar46 >> 1) & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
code_r0x00055b78:
              *(uint *)(pcVar41 + 0x10) = uVar36;
              goto code_r0x00055b7c;
            }
            if (9 >= uVar25) {
              halt_baddata();
            }
          }
          uVar21 = uVar17 + 0x2da90000;
          pbVar42 = (byte *)(uint)*(ushort *)(pcVar41 + 0x18);
          if (!SUB41(uVar46 >> 3,0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar46 = (uint)(*(short *)(pbVar42 + 0x18) != 0) << 3;
        }
        if (!(bool)((byte)(uVar46 >> 3) & 1) && pbVar42 != (byte *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        uVar46 = (uint)*pbVar42;
        iVar22 = func_0xffe60584(uVar21);
        *(code **)(uVar46 + 0x9c) = UNRECOVERED_JUMPTABLE_02;
        iVar39 = (int)*(char *)(param_3 - 0x7d85);
        uRam00000047 = SUB41(in_r22,0);
        uVar27 = SUB42(in_r22,0);
        uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
        bVar1 = false;
        *(uint *)(iVar39 + 0x2d56) = in_lp;
        goto code_r0x00055d10;
      case -0x51:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x4f:
      case -0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x4d:
        pcVar41[1] = SUB41(uVar38,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x4b:
        goto code_r0x000568b0;
      case -0x48:
        goto code_r0x000498ea;
      case -0x44:
        cRamfffffffe = cVar31;
        halt_baddata();
      case -0x41:
        *(ushort *)(pcVar41 + 0xe2) = uVar23;
        pcVar41 = (code *)~uVar35;
        goto code_r0x00049ae4;
      case -0x3c:
        if ((bool)((byte)(uVar47 >> 3) & 1)) goto code_r0x000557de;
        goto code_r0x00055832;
      case -0x36:
      case -0x30:
      case -0x2d:
      case -0x2a:
      case -0x22:
        goto code_r0x0005b22e;
      case -0x34:
code_r0x000557cc:
        param_3 = (uint)*(ushort *)(pcVar41 + 0x80);
        in_lp = (uint)*(ushort *)(&DAT_00004c00 + in_lp);
        in_r20r21 = (ulonglong)*(ushort *)(pcVar41 + 0x16) << 0x20;
        uVar46 = uVar47 & 0xfffffffc;
code_r0x000557de:
        uVar36 = (uint)(in_r20r21 >> 0x20);
        uVar46 = uVar46 & 0xfffffffc | 1;
        in_r17 = (uint)(char)UNRECOVERED_JUMPTABLE_02[-0x5df0];
        uVar20 = *(ushort *)(*(ushort *)(pcVar41 + 0x18) + 0x18);
        goto code_r0x000558a6;
      case -0x2f:
        *(code **)(uVar35 - 0xdc6) = UNRECOVERED_JUMPTABLE_03;
        *(undefined1 *)(in_r11 + 0x5fc) = uVar32;
        *(undefined1 *)(param_3 + 0x5ff) = uVar32;
        goto code_r0x0004b106;
      case -0x2c:
                    /* WARNING: Could not recover jumptable at 0x0005dee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*UNRECOVERED_JUMPTABLE)();
        return uVar46;
      case -0x2b:
        func_0xffee7cec();
        sVar45 = (short)uVar21;
        iVar10 = (int5)(int)pcVar41 + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)iVar10;
        *(int *)(iVar22 + 0x14) = (int)(in_r20r21 >> 0x20);
        iVar10 = (int5)(int)in_lp - (int5)(int)in_r1;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar39 = (int)iVar10;
        *(uint *)(iVar22 + 0x14) = (uint)*(ushort *)(iVar22 + 0xf6);
        *in_r1 = (short)*(char *)(param_3 - 0x7d85);
        uVar18 = *(undefined4 *)(in_r1 + 0x12);
        psVar29 = in_r1;
        func_0xfff7ddc0();
        *(undefined4 *)(psVar29 + 8) = uVar18;
        iVar10 = (int5)(int)(uint)*(byte *)(((uint)psVar29 | (uint)in_r1) + 0x3b) + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        puVar9 = (undefined1 *)iVar10;
        *(uint *)(puVar9 + 0x14) = (uint)*(ushort *)(((uint)psVar29 | (uint)in_r1) + 0xe0);
        iVar10 = (int5)iVar39 - (int5)(int)in_r1;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar4 = (int5)(int)&stack0x00000000 + -3;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        cVar14 = *(char *)(param_3 - 0x7d85);
        puVar9[0x23] = (char)iVar4;
        iVar4 = -(int5)(int)cVar14;
        if (iVar4 < 0x80000000) {
          if (iVar4 < -0x80000000) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 0x7fffffff;
        }
        iVar22 = *(int *)(puVar9 + 0x2c);
        bVar30 = *(byte *)(in_r18 - 0x6882);
        *puVar9 = (char)iVar4;
        *(int *)(puVar9 + 0x14) = iVar22;
        *(short *)(puVar9 + 0x42) = (short)iVar10;
        *(byte *)(in_r18 + 0x7e7a) = *(byte *)(in_r18 + 0x7e7a) ^ 0x80;
        iVar10 = (int5)(int)(uint)bVar30 - (int5)iVar22;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = 0;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        puVar9[5] = (char)iVar10;
        uVar20 = *(ushort *)(puVar9 + 0xda);
        *(code **)(puVar9 + -0xcc6) = UNRECOVERED_JUMPTABLE_03;
        iVar10 = (int5)(int)puVar9 + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        psVar29 = (short *)iVar10;
        *psVar29 = (short)*(char *)(param_3 + 0x73a3);
        *(uint *)(psVar29 + 0xc) = (uint)uVar20;
        psVar29[10] = psVar29[0x52];
        *(char *)((int)psVar29 + 0x45) = (char)psVar29[0x52];
        *psVar29 = (short)*(char *)(param_3 + 0x73a3);
        *(uint *)(psVar29 + 0xc) = (uint)(ushort)psVar29[0x79];
        uVar46 = (uint)psVar29 | (uint)in_r1;
        *(undefined2 *)(uVar46 + 0x14) = *(undefined2 *)(uVar46 + 0xa4);
        *(char *)(uVar46 + 0x45) = (char)*(undefined2 *)(uVar46 + 0xa4);
        *(uint *)(uVar46 + 0x14) = (uint)*(ushort *)(uVar46 + 0xf2);
        *in_r1 = (short)*(char *)(param_3 + 0x73a3);
        *(uint *)(in_r1 + 0xc) = (uint)(ushort)in_r1[0x7b];
        in_r1[10] = in_r1[0x52];
        *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
        *in_r1 = (short)*(char *)(param_3 + 0x73a3);
        *(uint *)(in_r1 + 0xc) = (uint)(ushort)in_r1[0x79];
        in_r1[10] = in_r1[0x52];
        *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
        bVar30 = *(byte *)((int)in_r1 + 7);
        *in_r1 = (short)*(char *)(param_3 - 0x7d85);
        uVar18 = *(undefined4 *)(in_r1 + 0x12);
        psVar29 = in_r1;
        func_0xfff7df12();
        *(undefined4 *)(psVar29 + 8) = uVar18;
        iVar10 = (int5)(int)(uint)*(byte *)((int)psVar29 + 0x3b) + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        *(uint *)((int)iVar10 + 0x14) = (uint)(ushort)psVar29[0x70];
        bVar30 = bVar30 ^ (byte)in_r1 ^ unaff_gp;
        *(uint *)(in_r1 + 0x3e) = in_r27;
        *(byte *)(param_3 + 0x126) = bVar30;
        *(byte *)(param_3 + 0x14) = bVar30;
        __nop();
        (*(code *)((int)in_CTBP + (uint)*in_CTBP))();
        in_r1[0x30] = sVar45;
        *(byte *)(param_3 + 0x450) = bVar30;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x24:
        pcVar41 = (code *)((uint)pcVar41 / (uint)(int)sVar45);
        uVar46 = uVar47 & 0xfffffffc;
        goto code_r0x000568b0;
      case -0x21:
        uVar21 = (uint)*(ushort *)(pcVar41 + 0xd0);
        in_r16 = UNRECOVERED_JUMPTABLE_03;
        goto code_r0x000498ea;
      case -0x1e:
        *(code *)(param_3 + 0x8c4) = cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x1d:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0x13:
code_r0x0005578a:
        pcVar41[0x4b] = SUB81(in_r20r21 >> 0x20,0);
        halt_baddata();
      case -0x12:
        *(code **)(pcVar41 + 0x3c) = in_r16;
        *(ushort *)(pcVar41 + 0x94) = uVar24;
        uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
        *(undefined2 *)(uVar46 + 0x60) = *(undefined2 *)(uVar46 + 0x60);
        *(uint *)(uVar46 + 0x3c) = (uint)in_r22 | (uint)UNRECOVERED_JUMPTABLE_03;
        *(ushort *)(uVar46 + 0x96) = uVar24;
        iVar10 = (int5)(int)(uint)*(byte *)(uVar46 + 0x3b) + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        uVar46 = (uint)*(ushort *)(*(ushort *)(*(ushort *)((int)iVar10 + 0x18) + 0x18) + 0x18);
        *(undefined1 *)(uVar46 + 0x27) = *(undefined1 *)(uVar46 + 0x27);
        *(code **)(uVar46 + 0x3c) = in_r22;
        *(undefined1 *)(uVar46 + 0x27) = *(undefined1 *)(uVar46 + 0x27);
        *(code **)(uVar46 + 0x3c) = in_r22;
        iVar10 = (int5)(int)uVar46 + -5;
        if (iVar10 < 0x80000000) {
          if (iVar10 < -0x80000000) {
            iVar10 = -0x80000000;
          }
        }
        else {
          iVar10 = 0x7fffffff;
        }
        iVar22 = (int)iVar10;
        *(undefined1 *)(iVar22 + 0x17) = *(undefined1 *)(iVar22 + 0x17);
        *(uint *)(iVar22 + 0x48) =
             CONCAT22(in_register_00000032,CONCAT11(in_register_00000031,in_r12));
        uVar46 = (uint)*(ushort *)(*(ushort *)(iVar22 + 0x18) + 0x18);
        *(ushort *)(uVar46 + 0xa4) = uVar24 + sVar45;
        uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
        *(ushort *)(uVar46 + 0x82) = uVar24 + sVar45;
                    /* WARNING: Could not recover jumptable at 0x0005471a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar46 = (*(code *)(*(short *)((int)&stack0x00000000 * 2 + 0x5471c) * 2 + 0x5471c))
                           (0,*(undefined2 *)(uVar46 + 0x80));
        return uVar46;
      case -0x10:
        *(uint *)(pcVar41 + 0x7c) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case -0xe:
        do {
          *(char *)(param_3 + 0x5928) = (char)in_r16;
          iVar10 = (int5)(int)in_r16 + 2;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          iVar22 = (int)iVar10;
          if (iVar22 <= 0x7fffffff) {
            if (iVar22 < -0x80000000) {
              iVar22 = -0x80000000;
            }
          }
          else {
            iVar22 = 0x7fffffff;
          }
          iVar10 = (int5)(int)uVar17 - (int5)(int)in_r2;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          in_r2 = (uint)iVar10;
          *(code *)((byte)pcVar41[0x50] + 0x210) = pcVar41[0x50];
          *(char *)(param_3 + 0x5928) = (char)iVar22;
          iVar10 = (int5)iVar22 + 2;
          if (iVar10 < 0x80000000) {
            if (iVar10 < -0x80000000) {
              iVar10 = -0x80000000;
            }
          }
          else {
            iVar10 = 0x7fffffff;
          }
          uVar17 = param_3 & 0xff;
          in_r16 = (code *)((uint)iVar10 & in_r18 & in_r27);
          pcVar41 = UNRECOVERED_JUMPTABLE_05;
        } while( true );
      case -0xc:
        return (uint)*(ushort *)(uVar36 + 0xe0);
      case -1:
        if (!bVar1 && !(bool)(bVar30 & 1)) {
          if (bVar1 || (bool)(bVar30 & 1)) {
            __nop();
            pcVar41[0x30] = cVar31;
            goto code_r0x0005578a;
          }
          in_r20r21 = (ulonglong)uVar36 << 0x20;
          *(uint *)(*(char *)(param_3 - 0xf84) + 0x2dc2) = in_lp;
          pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
          if (bVar1) goto code_r0x000557cc;
          goto code_r0x00055824;
        }
        pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
        if (!(bool)((byte)(uVar47 >> 3) & 1) && !(bool)(bVar30 & 1)) {
          uVar46 = (uint)(uVar38 < 8) << 3;
          goto code_r0x0005581a;
        }
        uVar48 = uVar46;
        if ((bool)((byte)(uVar47 >> 3) & 1)) goto code_r0x0005586e;
        in_r17 = (uint)(char)UNRECOVERED_JUMPTABLE_02[-0x5def];
        pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
        if (bVar1) {
          param_3 = (uint)*(ushort *)(pcVar41 + 0x80);
          in_lp = (uint)*(ushort *)(&DAT_00004c00 + in_lp);
          *(uint *)(uVar38 + 0x2dc2) = in_lp;
          goto code_r0x000558d6;
        }
        goto code_r0x00055922;
      }
    }
  }
  else {
    uVar47 = in_PSW & 0xfffffff0;
    *(uint *)(uVar38 + 0x2de0) = in_lp;
    uVar16 = *(ushort *)(pcVar41 + 0x18);
LAB_00055634:
    uVar46 = (uint)*(ushort *)(uVar16 + 0x18);
    uVar20 = *(ushort *)(uVar46 + 0x88);
    if ((bool)((byte)(uVar47 >> 4) & 1)) {
      *(ushort *)(uVar46 + 2) = uVar20;
      goto code_r0x00055696;
    }
    pcVar41 = (code *)(uint)*(ushort *)(uVar46 + 0x18);
    if ((int)((uint)*(byte *)(uVar16 + 0x11) |
             CONCAT22(in_register_00000032,CONCAT11(in_register_00000031,in_r12))) < 0) {
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar46 = (*(code *)(&DAT_000556ae + sRam0005b208 * 2))(uVar20);
      return uVar46;
    }
LAB_000556f0:
    *(ushort *)(pcVar41 + 6) = uVar20;
  }
  cRamfffffffe = cVar31;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x00055d10:
  pbVar42 = (byte *)(uint)*(ushort *)(uVar46 + 0x18);
  uVar13 = *(undefined2 *)(pbVar42 + 2);
  uVar32 = (undefined1)uVar27;
  *(undefined1 *)(iVar22 + 0x6278) = uVar32;
  if (bVar1) {
code_r0x00055ce8:
    uVar13 = *(undefined2 *)(pbVar42 + 0xdc);
    pbVar42 = (byte *)(uint)*pbVar42;
  }
  else {
    *(undefined1 *)(iVar22 + 0x6276) = uVar32;
    if (iVar39 < 0 && -1 < iVar39 + -0xb) goto code_r0x00055ce8;
    *(undefined1 *)(iVar22 + 0x627c) = uVar32;
    if (-1 < iVar39 + -0xb || iVar39 + -0x16 < 0) {
      *(short *)(pbVar42 + 0xaa) = (short)in_r22;
      uVar46 = (uint)*(ushort *)(pbVar42 + 0x18);
      *(code **)(uVar46 + 0xac) = UNRECOVERED_JUMPTABLE_02;
      uVar13 = *(undefined2 *)(uVar46 + 2);
      *(short *)(iVar39 + 0x18a7) = (short)in_lp;
      *(uint *)(iVar39 + 0x18d7) = in_lp;
      *(short *)(uVar46 + 0x88) = (short)param_3;
      uVar18 = *(undefined4 *)(uVar46 + 0xac);
      uVar46 = (uint)*(ushort *)(uVar46 + 0x18);
      *(undefined4 *)(uVar46 + 0x9c) = uVar18;
      *(undefined4 *)(uVar46 + 0xa8) = uVar18;
      *(undefined2 *)(*(ushort *)(uVar46 + 0x18) + 0xc) = uVar27;
                    /* WARNING: Could not recover jumptable at 0x00055db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar46 = (*(code *)(*(short *)((int)UNRECOVERED_JUMPTABLE_00 * 2 + 0x55db6) * 2 + 0x55db6))
                         (uVar13);
      return uVar46;
    }
  }
  uVar46 = (uint)*pbVar42;
  iVar22 = func_0xffe605fe(uVar13);
  uVar27 = SUB42(in_r22,0);
  UNRECOVERED_JUMPTABLE_02 = *(code **)(uVar46 + 0x9c);
  iVar10 = (int5)(int)uVar46 + -5;
  bVar1 = (int)uVar46 < 0 && (int)uVar46 < 0 != (int)(uVar46 - 5) < 0;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  uVar46 = (uint)iVar10;
  iVar39 = (int)*(char *)(param_3 - 0x84);
  *(code **)(uVar46 + 0xac) = UNRECOVERED_JUMPTABLE_02;
  goto code_r0x00055d10;
code_r0x000523d2:
code_r0x000523d4:
code_r0x000523d6:
code_r0x000523d8:
code_r0x000523da:
code_r0x00052422:
  iVar10 = (int5)(int)uVar38 + -0x2abc;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  in_r22 = (code *)(uint)*(byte *)((int)iVar10 + 0x78);
  iVar10 = (int5)(int)uVar38 + -0x257d;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  *(ushort *)((int)iVar10 + 0xae) = uVar16;
code_r0x000524d2:
  iVar10 = (int5)(int)uVar38 + -0x2ee3;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  UNRECOVERED_JUMPTABLE_01 = (code *)(uint)*(ushort *)((int)iVar10 + 0xf8);
code_r0x000524e2:
  *(code **)(uVar38 + 0x2264) = UNRECOVERED_JUMPTABLE_01;
code_r0x0005250e:
  iVar10 = (int5)(int)uVar38 + -0x2241;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  *(undefined2 *)(uVar38 + 0x22a0) = *(undefined2 *)((int)iVar10 + 0xf8);
  iVar10 = (int5)(int)uVar38 + -0x2340;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  uVar27 = *(undefined2 *)((int)iVar10 + 0x70);
  *(code **)(in_r22 + -0xcc6) = UNRECOVERED_JUMPTABLE_03;
  iVar10 = (int5)(int)*(char *)(param_3 - 0x784) + -0x218b;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  iVar22 = (int)iVar10;
  __nop();
  uVar46 = (uint)*(ushort *)(iVar22 + 0x1a);
  uVar32 = (undefined1)uVar27;
  if (&stack0x00000000 != (undefined1 *)0x0 ||
      CONCAT22(in_register_00000032,CONCAT11(in_register_00000031,in_r12)) +
      CONCAT22(in_register_00000036,in_r13) != 0) {
    uVar46 = (int)(short)UNRECOVERED_JUMPTABLE_05 * (int)(short)*(ushort *)(iVar22 + 0x1a);
    *(undefined1 *)(iVar22 + 10) = uVar32;
  }
  do {
    iVar10 = (int5)(int)uVar46 + 0xb;
    if (iVar10 < 0x80000000) {
      if (iVar10 < -0x80000000) {
        iVar10 = -0x80000000;
      }
    }
    else {
      iVar10 = 0x7fffffff;
    }
    uVar46 = (uint)iVar10;
    *(uint *)(iVar22 + 0x7c) = in_r27;
    *(undefined1 *)(iVar22 + 0x15) = uVar32;
  } while( true );
code_r0x000498ea:
  *(byte *)(uVar21 + 0x286c) = (byte)in_r16 | in_r19;
  *(ushort *)(pcVar41 + 0x80) = uVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x0004b106:
  uVar20 = *(ushort *)(*(int *)(uVar36 + 8) + 0x86);
  *(uint *)(*(int *)(uVar36 + 8) + 0x20) = in_r18;
  *(char *)(in_r11 + 0x5fc) = (char)UNRECOVERED_JUMPTABLE_02;
  *(char *)(uVar20 + 0x5ff) = (char)UNRECOVERED_JUMPTABLE_02;
  pcVar41 = *(code **)(uVar36 + 8);
code_r0x0004b162:
  uVar16 = *(ushort *)(pcVar41 + 0x86);
  *(uint *)(pcVar41 + 0x20) = in_r18;
  uVar20 = *(ushort *)(*(ushort *)(pcVar41 + 0x18) + 0x18);
  *(ushort *)(uVar20 + 0x80) = uVar16;
  *(ushort *)(uVar20 + 0x80) = uVar16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x000568b0:
code_r0x000568b2:
  uVar17 = (uint)pcVar41 / (uint)(int)sVar45;
  if ((bool)((byte)(uVar46 >> 3) & 1)) {
    while( true ) {
      *(ushort *)(uVar17 + 0x2a) = uVar16;
      if (-1 < (int)in_r16 || (int)(in_r16 + -0xc) < 0) break;
      *(undefined1 *)(uVar17 + 0x7a) = 0;
      uVar46 = (uint)*(ushort *)(uVar17 + 0x18);
      *(undefined1 *)(uVar46 + 0x7b) = 0;
      iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_04 - (int5)(int)UNRECOVERED_JUMPTABLE;
      if (iVar10 < 0x80000000) {
        if (iVar10 < -0x80000000) {
          iVar10 = -0x80000000;
        }
      }
      else {
        iVar10 = 0x7fffffff;
      }
      *(undefined1 *)(uVar46 + 0x7c) = 0;
      uVar17 = (uint)*(ushort *)(uVar46 + 0x18);
      iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_04 - (int5)(int)iVar10;
      if (iVar10 < 0x80000000) {
        if (iVar10 < -0x80000000) {
          iVar10 = -0x80000000;
        }
      }
      else {
        iVar10 = 0x7fffffff;
      }
      UNRECOVERED_JUMPTABLE = (code *)iVar10;
      in_r16 = in_r16 + -0xc;
    }
                    /* WARNING: Could not recover jumptable at 0x00056894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar46 = (*UNRECOVERED_JUMPTABLE_03)((uint)UNRECOVERED_JUMPTABLE_00 & 0xffff);
    return uVar46;
  }
  iVar10 = (int5)(int)&stack0x00000000 - (int5)(int)uVar25;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  *(ushort *)(uVar17 + 8) = uVar20;
  *(code *)(param_3 + 0x6a8) = cVar31;
                    /* WARNING: Could not recover jumptable at 0x000568d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar46 = (*(code *)iVar10)();
  return uVar46;
code_r0x0004a912:
  uVar3 = (int5)(int)uVar25 - (int5)(int)UNRECOVERED_JUMPTABLE_03;
  if ((int5)uVar3 < 0x80000000) {
    if ((int5)uVar3 < -0x80000000) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(ushort *)(pcVar41 + 0x86) = uVar19;
  pcVar41 = (code *)(uint)*(ushort *)(pcVar41 + 0x18);
  *(ushort *)(pcVar41 + 0xcc) = uVar20;
  uVar20 = *(ushort *)(pcVar41 + 0x60);
  if ((uVar3 & 0x400000) != 0 || ((uint)UNRECOVERED_JUMPTABLE & (uint)in_r16) == 0) {
    *(ushort *)(pcVar41 + 0xe4) = uVar20;
    *(ushort *)(pcVar41 + 0x60) = (ushort)((uint)UNRECOVERED_JUMPTABLE & (uint)in_r16);
    *(ushort *)(pcVar41 + 0x7e) = uVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_r2 = (uint)(byte)pcVar41[2];
code_r0x0004a934:
  uVar20 = *(ushort *)(pcVar41 + 0x40);
  *(uint *)(pcVar41 + 0x7c) = (uint)*(ushort *)(pcVar41 + 200);
  if ((int)in_r17 < 0 && (int)in_r17 < 0 == (int)-in_r17 < 0) {
    *(ushort *)(pcVar41 + 0x60) = *(ushort *)(pcVar41 + 0x60);
    *(ushort *)(pcVar41 + 0x7e) = *(ushort *)(pcVar41 + 0xe4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(pcVar41 + 0xac) = (ushort)in_r2;
  *(uint *)(pcVar41 + 4) = uVar35;
  *(ushort *)(pcVar41 + 0x40) = uVar20;
  *(ushort *)(pcVar41 + 0x3e) = uVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x00049ae4:
code_r0x00049ae6:
  *(code **)(pcVar41 + 0xfc) = in_r22;
code_r0x00049aea:
  iVar10 = (int5)(int)pcVar41 + -0xb;
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = -0x80000000;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  UNRECOVERED_JUMPTABLE = (code *)~(uint)in_r1;
  pcVar41 = (code *)((uint)iVar10 | in_lp);
code_r0x00049af0:
  UNRECOVERED_JUMPTABLE = (code *)((uint)UNRECOVERED_JUMPTABLE >> 0x11);
  param_3 = (uint)*(ushort *)(pcVar41 + 0x50);
code_r0x00049af4:
  *(ushort *)(pcVar41 + 0xac) = (ushort)UNRECOVERED_JUMPTABLE;
code_r0x00049afa:
  pcVar41 = (code *)((uint)pcVar41 | in_lp);
  *(ushort *)(pcVar41 + 0xac) = (ushort)((uint)UNRECOVERED_JUMPTABLE >> 0x11);
  uVar21 = (uint)*(ushort *)(pcVar41 + 0xd0);
code_r0x00049b0e:
  *(byte *)(uVar21 + 0x277c) = in_r19;
  *(ushort *)(pcVar41 + 0x80) = (ushort)param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
code_r0x0004aefe:
  uVar46 = (uint)*(ushort *)(pcVar41 + 0x18);
  *(uint *)(uVar46 + 0x3c) = uVar46;
  in_r17 = (uint)*(char *)((in_r27 - ((int)UNRECOVERED_JUMPTABLE_05 - (int)UNRECOVERED_JUMPTABLE_02)
                           ) + -0xe84);
  uVar20 = *(ushort *)(*(ushort *)(uVar46 + 0x18) + 2);
  pcVar41 = (code *)(uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar46 + 0x18) + 0x18) + 0x18);
  if (0 < (int)((uint)(in_r20r21 >> 0x20) ^ param_3)) {
    *(uint *)(pcVar41 + 8) = 8;
  }
code_r0x0004af4e:
  *(ushort *)(pcVar41 + 4) = uVar20;
  uVar21 = (uint)*(ushort *)(*(ushort *)(pcVar41 + 0x18) + 2);
  pcVar41 = (code *)(uint)*(ushort *)(*(ushort *)(*(ushort *)(pcVar41 + 0x18) + 0x18) + 0x18);
code_r0x0004af90:
  *(uint *)(pcVar41 + 0xcc) = uVar21;
  pcVar41[0x2d] = SUB41(in_r17,0);
  *(uint *)(pcVar41 + 0x7c) = (uint)*(ushort *)(pcVar41 + 0xd8);
  *(short *)(*(ushort *)(pcVar41 + 0x22) + 0x2994) = (short)pcVar41;
  iVar10 = (int5)(int)UNRECOVERED_JUMPTABLE_04 - (int5)(int)(uint)*(ushort *)(in_lp + 2);
  if (iVar10 < 0x80000000) {
    if (iVar10 < -0x80000000) {
      iVar10 = 0;
    }
  }
  else {
    iVar10 = 0x7fffffff;
  }
  *(short *)(in_lp + 0x3e) = (short)iVar10;
  *(uint *)(in_lp + 0x3c) = in_lp;
  *(uint *)(in_lp + 0x3c) = in_lp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00055626 @ 00055626 (size 128) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */

void FUN_00055626(code *UNRECOVERED_JUMPTABLE)

{
  undefined2 uVar1;
  uint in_r12;
  undefined1 in_r16;
  int in_r28;
  int in_ep;
  uint uVar2;
  undefined4 in_lp;
  uint in_PSW;
  
  *(undefined4 *)(in_r28 + 0x2de0) = in_lp;
  uVar2 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  uVar1 = *(undefined2 *)(uVar2 + 0x88);
  if ((bool)((byte)(in_PSW >> 4) & 1)) {
    *(undefined2 *)(uVar2 + 2) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00055698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((int)(*(byte *)(*(ushort *)(in_ep + 0x18) + 0x11) | in_r12) < 0) {
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_000556ae + sRam0005b208 * 2))(uVar1);
    return;
  }
  *(undefined2 *)(*(ushort *)(uVar2 + 0x18) + 6) = uVar1;
  uRamfffffffe = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00055652 @ 00055652 (size 28) ====

void FUN_00055652(void)

{
  int in_r28;
  code *UNRECOVERED_JUMPTABLE;
  int in_ep;
  byte in_PSW;
  
  if (!(bool)(in_PSW & 1)) {
                    /* WARNING: Could not recover jumptable at 0x0005566a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*(undefined2 *)(*(ushort *)(in_ep + 0x18) + 2));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000556ae + *(short *)(&DAT_000556ae + in_r28 * 2) * 2))();
  return;
}


// ==== FUN_000566f4 @ 000566f4 (size 218) ====

/* WARNING: Removing unreachable block (ram,0x000567a6) */
/* WARNING: Removing unreachable block (ram,0x0005681a) */
/* WARNING: Removing unreachable block (ram,0x00056830) */
/* WARNING: Removing unreachable block (ram,0x00056846) */
/* WARNING: Removing unreachable block (ram,0x0005684e) */
/* WARNING: Removing unreachable block (ram,0x0005685c) */
/* WARNING: Removing unreachable block (ram,0x00056872) */
/* WARNING: Removing unreachable block (ram,0x00056890) */
/* WARNING: Removing unreachable block (ram,0x00056892) */

void FUN_000566f4(undefined2 param_1,undefined2 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  uint in_r11;
  int in_r23;
  int in_ep;
  uint uVar1;
  
  *(undefined2 *)(in_ep + 0x8e) = param_1;
  if (((in_r11 & 0x4ce8) == 0) &&
     (uVar1 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18), in_r23 != 0)) {
    *(undefined2 *)(uVar1 + 0x60) = param_2;
    *(short *)(uVar1 + 0x8e) = (short)UNRECOVERED_JUMPTABLE;
    *(undefined2 *)(uVar1 + 0x8e) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00056760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}


// ==== FUN_00056806 @ 00056806 (size 144) ====

void FUN_00056806(int param_1)

{
  int iVar1;
  bool bVar2;
  int5 iVar3;
  int in_r15;
  int iVar4;
  int in_r16;
  code *UNRECOVERED_JUMPTABLE;
  int in_ep;
  uint uVar5;
  
  *(undefined1 *)(in_ep + 0x3b) = 0;
  uVar5 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar5 + 0x3c) = 0;
  iVar3 = (int5)param_1 - (int5)in_r15;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(undefined1 *)(uVar5 + 0x3d) = 0;
  *(undefined1 *)(uVar5 + 0x50) = 0;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0x51) = 0;
  iVar3 = (int5)param_1 - (int5)(int)iVar3;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(undefined1 *)(uVar5 + 0x52) = 0;
  *(undefined1 *)(uVar5 + 0x65) = 0;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0x66) = 0;
  iVar3 = (int5)param_1 - (int5)(int)iVar3;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  iVar4 = (int)iVar3;
  *(undefined1 *)(uVar5 + 0x67) = 0;
  do {
    *(undefined1 *)(uVar5 + 0x7a) = 0;
    uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
    *(undefined1 *)(uVar5 + 0x7b) = 0;
    iVar3 = (int5)param_1 - (int5)iVar4;
    if (iVar3 < 0x80000000) {
      if (iVar3 < -0x80000000) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    *(undefined1 *)(uVar5 + 0x7c) = 0;
    uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
    iVar3 = (int5)param_1 - (int5)(int)iVar3;
    if (iVar3 < 0x80000000) {
      if (iVar3 < -0x80000000) {
        iVar3 = -0x80000000;
      }
    }
    else {
      iVar3 = 0x7fffffff;
    }
    iVar4 = (int)iVar3;
    iVar1 = in_r16 + -0xc;
    bVar2 = in_r16 < 0;
    *(short *)(uVar5 + 0x2a) = (short)&stack0x00000000;
    in_r16 = in_r16 + -0xc;
  } while (bVar2 && -1 < iVar1);
                    /* WARNING: Could not recover jumptable at 0x00056894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_00056a9c @ 00056a9c (size 1271) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00056ee8) overlaps instruction at (ram,0x00056ee6)
    */
/* WARNING: Removing unreachable block (ram,0x00056ccc) */
/* WARNING: Removing unreachable block (ram,0x00056cd6) */
/* WARNING: Removing unreachable block (ram,0x00056e32) */
/* WARNING: Removing unreachable block (ram,0x00056ee8) */
/* WARNING: Removing unreachable block (ram,0x00056e50) */
/* WARNING: Removing unreachable block (ram,0x00056e7e) */
/* WARNING: Removing unreachable block (ram,0x00056e86) */
/* WARNING: Removing unreachable block (ram,0x00056e8e) */
/* WARNING: Removing unreachable block (ram,0x00056e90) */
/* WARNING: Removing unreachable block (ram,0x00056eac) */
/* WARNING: Removing unreachable block (ram,0x00056f2e) */
/* WARNING: Removing unreachable block (ram,0x00056ed6) */
/* WARNING: Removing unreachable block (ram,0x00056eec) */
/* WARNING: Removing unreachable block (ram,0x00056f12) */
/* WARNING: Removing unreachable block (ram,0x00056f20) */
/* WARNING: Removing unreachable block (ram,0x00056f78) */
/* WARNING: Removing unreachable block (ram,0x00056f86) */
/* WARNING: Removing unreachable block (ram,0x00056fc2) */
/* WARNING: Removing unreachable block (ram,0x00056fc4) */
/* WARNING: Removing unreachable block (ram,0x00056fc6) */
/* WARNING: Removing unreachable block (ram,0x00056fc8) */
/* WARNING: Removing unreachable block (ram,0x00056ff4) */
/* WARNING: Removing unreachable block (ram,0x00057014) */
/* WARNING: Removing unreachable block (ram,0x00057016) */
/* WARNING: Removing unreachable block (ram,0x00057018) */
/* WARNING: Removing unreachable block (ram,0x00057054) */
/* WARNING: Removing unreachable block (ram,0x00057064) */
/* WARNING: Removing unreachable block (ram,0x00057066) */
/* WARNING: Removing unreachable block (ram,0x00057072) */
/* WARNING: Removing unreachable block (ram,0x000570b8) */
/* WARNING: Removing unreachable block (ram,0x000570de) */
/* WARNING: Removing unreachable block (ram,0x000570ee) */
/* WARNING: Removing unreachable block (ram,0x00056cfc) */

void FUN_00056a9c(uint param_1,uint param_2)

{
  bool bVar1;
  int5 iVar2;
  ushort uVar3;
  uint in_r1;
  uint unaff_gp;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar4;
  code in_r16;
  uint uVar5;
  undefined1 in_r22;
  int in_r24;
  uint in_r26;
  undefined2 uVar6;
  undefined4 in_r27;
  uint uVar7;
  uint uVar8;
  int in_r29;
  int in_ep;
  ushort *puVar9;
  undefined4 in_lp;
  uint in_PSW;
  uint uVar10;
  uint uVar11;
  
  puVar9 = (ushort *)(uint)*(ushort *)(in_ep + 0x18);
  *(undefined1 *)((int)puVar9 + 0x4b) = 0;
  uVar3 = *puVar9;
  uVar10 = in_PSW & 0xfffffff8;
  uVar6 = (undefined2)in_r27;
  *(undefined2 *)(in_r29 + 0x16c2) = uVar6;
  if (!(bool)((byte)(in_PSW >> 3) & 1)) {
    param_2 = (uint)puVar9[0x23];
    in_r26 = (uint)puVar9[0xd];
    uVar10 = in_PSW & 0xfffffff0 | (uint)((unaff_gp & 0xf07c) == 0);
    *(undefined1 *)(puVar9 + 0x30) = 0;
    uVar4 = (uint)*puVar9;
    if ((bool)((byte)uVar10 & 1)) goto LAB_00056bdc;
    *(undefined4 *)(in_r29 + 0x16c4) = in_r27;
    *(undefined2 *)(in_r29 + 0x16c8) = uVar6;
    *(undefined4 *)(in_r29 + 0x16ca) = in_r27;
    *(undefined1 *)((int)puVar9 + 0x75) = 0;
    uVar3 = *puVar9;
    param_2 = (uint)puVar9[0x23];
    *(undefined2 *)(in_r29 + 0x16ce) = uVar6;
    in_r26 = (uint)puVar9[0xd];
    uVar10 = in_PSW & 0xfffffff0;
  }
  uVar4 = (uint)uVar3;
  puVar9 = *(ushort **)(puVar9 + 0x7c);
  if ((bool)((byte)(uVar10 >> 3) & 1)) goto LAB_00056c6c;
LAB_00056bdc:
  uVar5 = uVar10 & 0xfffffff0;
  if (-1 < (int)((uint)&stack0x00000000 ^ 0xd57c)) {
    iVar2 = (int5)(int)puVar9 + -5;
    uVar5 = (uint)((bool)((byte)(uVar10 >> 4) & 1) || (ushort *)0x4 < puVar9) << 4;
    uVar10 = (uint)((ushort *)0x4 < puVar9) << 3 | uVar5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    puVar9 = (ushort *)iVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0x2a);
    do {
      uVar11 = uVar10 | DAT_ffffe700 == '\0';
      puVar9 = (ushort *)(uint)puVar9[0xc];
      if (!(bool)((byte)uVar11 & 1)) goto code_r0x00056c52;
      puVar9 = (ushort *)(uint)puVar9[0xc];
      *(code **)(puVar9 + 0x3a) = UNRECOVERED_JUMPTABLE;
    } while ((bool)((byte)(uVar10 >> 3) & 1));
    *(undefined1 *)(in_r24 + -0x1980) = in_r22;
    *(code **)(puVar9 + 0x3a) = UNRECOVERED_JUMPTABLE;
  }
  puVar9 = (ushort *)(uint)puVar9[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0x2c);
  uVar11 = uVar5;
code_r0x00056c52:
  uVar10 = uVar11 & 0xfffffff0 | 8;
  *(undefined1 *)(in_r24 + -0xf84) = in_r22;
  *(code **)(puVar9 + 0x2a) = UNRECOVERED_JUMPTABLE;
LAB_00056c6c:
  uVar3 = puVar9[0xc];
  UNRECOVERED_JUMPTABLE = *(code **)(uVar3 + 0x5c);
  uVar5 = 0xc;
  uVar11 = 0x2ded;
  *(undefined2 *)(in_r29 + 0x169c) = uVar6;
  puVar9 = (ushort *)(uint)*(ushort *)(uVar3 + 0x18);
  uVar7 = uVar11;
  if ((bool)((byte)(uVar10 >> 4) & 1)) goto LAB_00056cf4;
LAB_00056c9a:
  puVar9[4] = (ushort)param_2;
  param_2 = (uint)puVar9[0x44];
  uVar11 = uVar10 & 0xfffffff8;
  do {
    if (!(bool)((byte)(uVar11 >> 4) & 1)) {
      iVar2 = (int5)(int)param_1 - (int5)(int)uVar4;
      uVar11 = (uint)(param_1 < uVar4) << 3 | (uint)(param_1 == uVar4) |
               (uint)((bool)((byte)(uVar11 >> 4) & 1) || param_1 < uVar4) << 4;
      if (iVar2 < 0x80000000) {
        if (iVar2 < -0x80000000) {
          iVar2 = -0x80000000;
        }
      }
      else {
        iVar2 = 0x7fffffff;
      }
      uVar4 = (uint)iVar2;
      if (!(bool)((byte)(uVar11 >> 3) & 1) && !(bool)((byte)uVar11 & 1)) {
        bVar1 = 9 < uVar7;
        *(undefined1 *)(in_r24 + -0x56e4) = in_r22;
        puVar9 = (ushort *)(uint)puVar9[0xc];
LAB_00056cc4:
        uVar10 = (uint)bVar1 << 3;
        puVar9 = (ushort *)(uint)puVar9[0xc];
        goto code_r0x00056d2a;
      }
      goto code_r0x00056c52;
    }
    *(undefined4 *)(uVar7 + 0x2d2c) = in_lp;
    iVar2 = (int5)(int)uVar5 + -5;
    bVar1 = 4 < uVar5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar10 = (uint)iVar2;
    if ((int)(uVar5 - 5) < 0) goto LAB_00056cc4;
    *(undefined1 *)(in_r24 + -0x56c9) = in_r22;
    uVar8 = in_r1 | 0x2d3c;
    *(undefined4 *)(uVar8 + 0x2d2e) = in_lp;
    iVar2 = (int5)(int)uVar10 + -0x10;
    uVar11 = (uint)(((bool)((byte)(uVar11 >> 4) & 1) || bVar1) || 0xf < uVar10) << 4;
    uVar10 = uVar10 == 0x10 | uVar11;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar5 = (uint)iVar2;
    uVar7 = uVar8;
    if ((bool)((byte)uVar10 & 1)) goto LAB_00056c9a;
    uVar7 = uVar8 - 10;
    *(undefined1 *)(in_r24 + -0x56fd) = in_r22;
    if (-1 < (int)uVar8 || (int)(uVar8 - 10) < 0) {
      uVar11 = uVar8 - 0x14;
      uVar10 = (uint)(9 < uVar7) << 3 | (uint)(uVar7 == 10);
      *(undefined1 *)(in_r24 + -0xf84) = in_r22;
      if ((bool)((byte)uVar10 & 1)) goto LAB_00056cf0;
      if ((int)(uVar8 - 0x14) < 0 == ((int)uVar7 < 0 && -1 < (int)(uVar8 - 0x14)) &&
          !(bool)((byte)uVar10 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00056d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(unaff_gp & 0x2dec);
        return;
      }
      break;
    }
  } while( true );
code_r0x00056d42:
  param_2 = (uint)*(ushort *)(uVar5 + 8);
  uVar3 = *(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
  puVar9 = (ushort *)(uint)uVar3;
  in_r26 = uVar5;
  if (!(bool)((byte)uVar10 & 1)) {
    *(code **)(puVar9 + 0x2c) = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE[1000] = in_r16;
    *(ushort *)(uVar11 + 0x362) = uVar3;
    UNRECOVERED_JUMPTABLE[1000] = in_r16;
    *(ushort **)(uVar11 + 0x354) = puVar9;
    *(undefined1 *)(puVar9 + 0x34) = 0;
    *(code *)((unaff_gp & 0x2df0) + 0x5a54) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    *(code *)(param_2 + 0x1078) = in_r16;
    uVar5 = (uint)*(byte *)((int)puVar9 + 0xb);
    if ((bool)((byte)(uVar10 >> 3) & 1)) break;
    uVar10 = (uint)(9 < uVar11) << 3;
    (&DAT_ffffa907)[in_r24] = in_r22;
    if ((int)uVar11 < 0 && -1 < (int)(uVar11 - 10)) goto LAB_00056d2c;
    uVar10 = (uint)(9 < uVar11 - 10) << 3;
    *(undefined1 *)(in_r24 + -0x56fd) = in_r22;
    if ((int)(uVar11 - 10) < 0 && -1 < (int)(uVar11 - 0x14)) {
      UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0x3c);
      goto code_r0x00056d36;
    }
    uVar10 = uVar11 - 0x1e;
    *(undefined1 *)(in_r24 + -0x18f8) = in_r22;
    iVar2 = (int5)(int)in_r26 + -1;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    in_r26 = (uint)iVar2;
    uVar11 = uVar11 - 0x28;
    uVar10 = (uint)(9 < uVar10) << 3;
LAB_00056cf0:
    *(code *)(param_2 + 0x1078) = in_r16;
LAB_00056cf4:
    uVar10 = uVar10 & 0xfffffff8;
  }
  *(undefined2 *)(in_r29 + 0x169c) = uVar6;
code_r0x00056d2a:
  uVar10 = uVar10 & 0xfffffff8;
  puVar9 = (ushort *)(uint)puVar9[0xc];
LAB_00056d2c:
  UNRECOVERED_JUMPTABLE = *(code **)(puVar9 + 0x2c);
  uVar5 = 6;
code_r0x00056d36:
  uVar11 = 0x2d2c;
  *(code *)(param_2 + 0x2def) = in_r16;
  goto code_r0x00056d42;
}


// ==== FUN_00057054 @ 00057054 (size 38) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00057054(undefined2 param_1)

{
  int5 iVar1;
  short in_r1;
  int iVar2;
  short in_r11;
  uint in_r12;
  undefined2 in_r15;
  uint in_r17;
  undefined4 in_r20;
  uint in_r21;
  uint in_r22;
  uint in_r27;
  int in_ep;
  int iVar3;
  uint uVar4;
  
  iVar1 = (int5)in_ep + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar3 = *(int *)((int)iVar1 + 0xf8);
  iVar2 = (int)in_r11 * (int)(short)((short)in_r12 * in_r1);
  *(undefined2 *)(iVar3 + 0xac) = in_r15;
  iVar1 = (int5)iVar2 - (int5)(int)(uint)*(ushort *)(iVar3 + 0xec);
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar4 = (uint)*(ushort *)(iVar3 + 0xf8);
  *(undefined4 *)(uVar4 + 0x2c) = in_r20;
  *(char *)(uVar4 + 0x46) = (char)iVar1;
  uVar4 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x18);
  *(uint *)(uVar4 + 4) = in_r21 | in_r27 | in_r17 | in_r12;
  uVar4 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0xf8) + 0x18);
  *(short *)(uVar4 + 0xc) = (short)(in_r22 / (uint)(int)(short)((short)in_r12 * (short)iVar2));
  uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined2 *)(uVar4 + 0x60) = param_1;
  iVar1 = (int5)(int)uVar4 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(*(int *)((int)iVar1 + 0x54) + 0x13e5) = (char)*(undefined4 *)(uVar4 + 0x24);
  _DAT_0000362b = (short)iVar1;
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005707a @ 0005707a (size 167) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005707a(undefined2 param_1)

{
  int5 iVar1;
  short in_r1;
  uint in_r12;
  undefined1 in_r15;
  uint in_r17;
  uint in_r21;
  uint in_r22;
  uint in_r27;
  int in_ep;
  uint uVar2;
  
  *(undefined1 *)(in_ep + 0x46) = in_r15;
  uVar2 = (uint)*(ushort *)(*(ushort *)(in_ep + 0x18) + 0x18);
  *(uint *)(uVar2 + 4) = in_r21 | in_r27 | in_r17 | in_r12;
  uVar2 = (uint)*(ushort *)(*(ushort *)(uVar2 + 0xf8) + 0x18);
  *(short *)(uVar2 + 0xc) = (short)(in_r22 / (uint)(int)(short)((short)in_r12 * in_r1));
  uVar2 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined2 *)(uVar2 + 0x60) = param_1;
  iVar1 = (int5)(int)uVar2 + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(char *)(*(int *)((int)iVar1 + 0x54) + 0x13e5) = (char)*(undefined4 *)(uVar2 + 0x24);
  _DAT_0000362b = (short)iVar1;
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00057130 @ 00057130 (size 170) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x0005716e) */

void FUN_00057130(void)

{
  int5 iVar1;
  undefined4 unaff_tp;
  undefined4 uVar2;
  int in_ep;
  uint uVar3;
  
  *(undefined4 *)(in_ep + 100) = unaff_tp;
  iVar1 = (int5)(int)(uint)*(byte *)(in_ep + 0x5d) - (int5)(int)DAT_ffffe700;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar1 = (int5)(int)iVar1 + -0x2daa;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  uVar2 = *(undefined4 *)((int)iVar1 + 0x50);
  uVar3 = (uint)*(ushort *)((int)iVar1 + 0x18);
  *(undefined4 *)(uVar3 + 0xa4) = uVar2;
  *(undefined4 *)(uVar3 + 0x40) = uVar2;
  *(undefined2 *)(uVar3 + 0x48) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000571da @ 000571da (size 52) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000571da(void)

{
  undefined4 unaff_tp;
  int in_ep;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar1 + 0xa4) = unaff_tp;
  *(undefined4 *)(uVar1 + 0x40) = unaff_tp;
  *(undefined2 *)(uVar1 + 0x48) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005731a @ 0005731a (size 36) ====

void FUN_0005731a(code *UNRECOVERED_JUMPTABLE)

{
  undefined4 unaff_tp;
  undefined2 in_r11;
  undefined2 in_r15;
  code *UNRECOVERED_JUMPTABLE_00;
  int in_ep;
  uint in_PSW;
  
  if ((bool)((byte)(in_PSW >> 3) & 1)) {
    *(undefined2 *)(in_ep + 0xe8) = in_r11;
    *(undefined2 *)(in_ep + 0x60) = *(undefined2 *)(in_ep + 8);
                    /* WARNING: Could not recover jumptable at 0x0005733c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(undefined2 *)(in_ep + 0x60) = in_r15;
  *(undefined2 *)(in_ep + 0x7e) = *(undefined2 *)(in_ep + 0xc6);
  *(undefined4 *)(in_ep + 0x40) = unaff_tp;
                    /* WARNING: Could not recover jumptable at 0x00057386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_00057366 @ 00057366 (size 34) ====

void FUN_00057366(code *UNRECOVERED_JUMPTABLE)

{
  undefined4 unaff_tp;
  undefined2 in_r15;
  int in_ep;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(in_ep + 0x7d);
  *(undefined2 *)(uVar1 + 0x60) = in_r15;
  *(undefined2 *)(uVar1 + 0x7e) = *(undefined2 *)(uVar1 + 0xc6);
  *(undefined4 *)(uVar1 + 0x40) = unaff_tp;
                    /* WARNING: Could not recover jumptable at 0x00057386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


// ==== FUN_00057424 @ 00057424 (size 132) ====

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_00057424(uint param_1,uint param_2,undefined2 param_3)

{
  bool bVar1;
  int5 iVar2;
  int5 iVar3;
  ushort uVar4;
  ushort in_r1;
  short unaff_gp;
  undefined4 unaff_tp;
  undefined2 uVar5;
  uint uVar6;
  int in_r10;
  uint in_r12;
  uint in_r13;
  uint uVar7;
  undefined1 uVar8;
  int in_r16;
  uint uVar9;
  undefined4 in_r19;
  uint in_r22;
  uint in_r23;
  undefined2 in_r25;
  uint uVar10;
  undefined2 in_r27;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *UNRECOVERED_JUMPTABLE;
  int in_ep;
  uint uVar15;
  uint uVar16;
  int in_lp;
  uint in_PSW;
  uint uVar17;
  
  *(undefined2 *)(in_ep + 4) = param_3;
  uVar15 = (uint)*(ushort *)(in_ep + 0x18);
  if ((bool)((byte)(in_PSW >> 3) & 1)) {
    uVar15 = (uint)*(ushort *)(uVar15 + 0x18);
    *(undefined4 *)(uVar15 + 0xa4) = unaff_tp;
    in_r16 = *(ushort *)(uVar15 + 0xc4) + 0x10000;
    param_2 = (uint)*(ushort *)(*(ushort *)(uVar15 + 0x18) + 0x88);
    uVar15 = (uint)*(ushort *)(*(ushort *)(uVar15 + 0x18) + 0x18);
    if ((bool)((byte)(in_PSW >> 3) & 1)) {
                    /* WARNING: Could not recover jumptable at 0x00057478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined2 *)(in_lp + 2));
      return;
    }
  }
  else {
    *(undefined4 *)(uVar15 - 0xcc6) = in_r19;
    iVar2 = (int5)(int)uVar15 + -5;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar15 = (uint)iVar2;
    in_r23 = (in_r23 | (uint)&stack0x00000000) ^ in_r13;
    *(undefined2 *)(UNRECOVERED_JUMPTABLE + 0x1692) = in_r27;
  }
  *(int *)(uVar15 + 0x20) = in_r16;
  *(int *)(uVar15 + 0x20) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(short *)(uVar15 + 0x1a) = (short)in_r13;
  *(short *)(uVar15 + 0x8e) = (short)in_r10;
  *(int *)(uVar15 + 0x3c) = in_r16;
  uVar6 = (uint)*(ushort *)(uVar15 + 0xca);
  *(uint *)(uVar15 + 0x7c) = uVar6;
  uVar4 = *(ushort *)(uVar15 + 0x1e);
  iVar2 = (int5)(int)uVar15 + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar3 = (int5)(int)(uint)*(ushort *)(uVar15 + 0x18) + -1;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  uVar10 = (uint)iVar3;
  uVar16 = (uint)*(ushort *)((int)iVar2 + 0x18);
  *(ushort *)(uVar16 + 0x60) = *(ushort *)(uVar15 + 0xca);
  uVar15 = in_r23 | 0x1ff;
  uVar7 = uVar4 & in_r22;
  uVar11 = (uint)*(ushort *)(uVar16 + 0x22);
  uVar17 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  uVar9 = in_r22;
code_r0x000575ee:
  uVar5 = (undefined2)uVar6;
  if ((bool)((byte)(uVar17 >> 2) & 1)) goto LAB_000575ae;
  iVar12 = uVar11 - 0xb;
  bVar1 = (int)uVar11 < 0 && -1 < (int)(uVar11 - 0xb);
FUN_000575f2:
  *(char *)(in_r10 + 0x6286) = (char)uVar9;
  if (bVar1) goto LAB_000575b8;
  iVar14 = iVar12 + -0xb;
  bVar1 = iVar12 < 0 && -1 < iVar12 + -0xb;
LAB_000575fc:
  uVar7 = (uint)*(byte *)(uVar16 + 0x10);
  *(char *)(in_r10 + 0x6288) = (char)uVar9;
  if (bVar1) goto LAB_000575c2;
  iVar12 = iVar14 + -0xb;
  uVar7 = (uint)*(byte *)(uVar16 + 0x10);
  *(char *)(in_r10 + 0x628a) = (char)uVar9;
  bVar1 = true;
  if (iVar14 < 0 && -1 < iVar14 + -0xb) goto LAB_000575cc;
  iVar13 = iVar14 + -0x16;
  uVar11 = (uint)(iVar12 < 0 && -1 < iVar14 + -0x16) << 2;
  uVar7 = (uint)*(byte *)(uVar16 + 0x10);
  do {
    uVar5 = (undefined2)uVar6;
    uVar8 = (undefined1)uVar9;
    *(undefined1 *)(in_r10 + 0x628c) = uVar8;
    if (SUB41(uVar11 >> 2,0)) {
      while( true ) {
        *(char *)(in_r10 + 0x6280) = (char)uVar9;
        if (SUB41(uVar11 >> 2,0)) {
          uVar16 = (uint)*(ushort *)(uVar16 + 0x18);
          goto LAB_00057590;
        }
        uVar17 = iVar13 - 0xb;
        uVar7 = (uint)*(byte *)(uVar16 + 0x10);
        *(char *)(in_r10 + 0x6282) = (char)uVar9;
        if (-1 < iVar13 || iVar13 + -0xb < 0) break;
        while( true ) {
          uVar5 = (undefined2)uVar6;
          uVar15 = in_r23 | 0x1ff;
          uVar7 = uVar7 & uVar9;
          uVar17 = uVar7 == 0 | 8;
LAB_000575ae:
          uVar8 = (undefined1)uVar7;
          if (SUB41(uVar17 >> 3,0) || (bool)((byte)uVar17 & 1)) goto LAB_0005764a;
LAB_000575b8:
          uVar6 = (uint)*(ushort *)(uVar16 + 0xcc);
          *(uint *)(uVar16 + 0x7c) = uVar6;
          uVar7 = 0xffffffff;
          uVar10 = (uint)*(ushort *)(uVar16 + 0x1a);
LAB_000575c2:
          bVar1 = false;
          iVar12 = (int)(char)(&DAT_ffffe256)[param_2];
          *(short *)(uVar16 + 0x38) = (short)in_r23;
LAB_000575cc:
          *(char *)(in_r10 + 0x627e) = (char)uVar9;
          if (!bVar1) break;
LAB_00057590:
          uVar7 = uVar7 / (uint)(int)(short)uVar9;
          uVar10 = (uint)*(ushort *)(uVar16 + 0x1a);
          *(short *)(uVar16 + 0x60) = (short)uVar6;
        }
        iVar13 = iVar12 + -0xb;
        uVar11 = (uint)(iVar12 < 0 && -1 < iVar12 + -0xb) << 2;
        uVar7 = (uint)*(byte *)(uVar16 + 0x10);
      }
      uVar11 = iVar13 - 0x16;
      uVar17 = (uint)((int)uVar17 < 0 && -1 < iVar13 + -0x16) << 2 | (uint)(10 < uVar17) << 3 |
               (uint)(uVar17 == 0xb);
LAB_000575e8:
      uVar7 = (uint)*(byte *)(uVar16 + 0x10);
      *(char *)(in_r10 + 0x6284) = (char)uVar9;
      goto code_r0x000575ee;
    }
    *(char *)(uVar16 + 0x4d) = (char)in_r25;
    uVar11 = iVar13 - 0x1f;
    uVar7 = (uint)(short)in_r23;
    bVar1 = uVar10 == 0x80000000 && uVar7 == 0xffffffff || uVar7 == 0;
    uVar10 = uVar10 / uVar7;
    uVar17 = (uint)(9 < iVar13 - 0x15U) << 3 | (uint)bVar1 << 2 | (uint)(uVar10 == 0);
    *(undefined1 *)(in_r10 + 0x628e) = uVar8;
    if (bVar1) goto LAB_000575e8;
    iVar12 = iVar13 + -0x2a;
    *(undefined1 *)(in_r10 + 0x6290) = uVar8;
    bVar1 = true;
    if ((int)uVar11 < 0 && -1 < iVar13 + -0x2a) goto FUN_000575f2;
    iVar14 = iVar13 + -0x35;
    *(undefined1 *)(in_r10 + 0x6292) = uVar8;
    bVar1 = true;
    if (iVar12 < 0 && -1 < iVar13 + -0x35) goto LAB_000575fc;
    uVar8 = *(undefined1 *)(uVar16 + 0x10);
LAB_0005764a:
    *(undefined1 *)(uVar16 + 6) = uVar8;
    uVar9 = (uint)*(char *)(uVar9 + 0x7083);
    iVar2 = (int5)(int)&stack0x00000000 - (int5)(int)uVar15;
    iVar12 = (int)&stack0x00000000 - uVar15;
    bVar1 = (int)uVar15 < 0;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar15 = (uint)iVar2;
    iVar14 = (int)*(char *)(param_2 - 0xf84);
    if ((int)&stack0x00000000 < 0 == bVar1 || bVar1 != iVar12 < 0) goto LAB_000576c6;
    uVar6 = (uint)*(ushort *)(uVar16 + 2);
    *(short *)(iVar14 + 0x2e74) = (short)in_lp;
    *(short *)(iVar14 + 0x18d2) = (short)in_lp;
    *(int *)(iVar14 + 0x1902) = in_lp;
    *(undefined2 *)(uVar16 + 0x44) = 0xb;
    in_r25 = *(undefined2 *)(uVar16 + 0x5c);
    iVar13 = iVar14 + -0x1e;
    uVar11 = (uint)(iVar14 + -0x14 < 0 && -1 < iVar14 + -0x1e) << 2 |
             (uint)(iVar14 + -0x1e < 0) << 1;
    uVar7 = in_r22;
    if (!(bool)((byte)(uVar11 >> 1) & 1)) {
      *(short *)(uVar16 + 0x34) = unaff_gp + -0x1daa;
      uVar16 = uVar16 | param_1;
      uVar5 = (undefined2)*(undefined4 *)(uVar16 + 0x60);
      *(ushort *)(uVar16 + 0xee) = (ushort)in_r22 | in_r1;
LAB_000576c6:
      *(undefined2 *)(uVar16 + 0xd0) = uVar5;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  } while( true );
}


// ==== FUN_000574b8 @ 000574b8 (size 286) ====

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_000574b8(uint param_1,int param_2)

{
  bool bVar1;
  int5 iVar2;
  int5 iVar3;
  ushort uVar4;
  ushort in_r1;
  short unaff_gp;
  undefined2 uVar5;
  uint uVar6;
  int in_r10;
  uint in_r12;
  undefined2 in_r13;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined4 in_r16;
  uint uVar10;
  uint in_r22;
  uint in_r23;
  undefined2 in_r25;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int in_ep;
  uint uVar16;
  undefined4 in_lp;
  uint uVar17;
  
  *(undefined4 *)(in_ep + 0x20) = in_r16;
  *(undefined4 *)(in_ep + 0x20) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(undefined2 *)(in_ep + 0x1a) = in_r13;
  *(short *)(in_ep + 0x8e) = (short)in_r10;
  *(undefined4 *)(in_ep + 0x3c) = in_r16;
  uVar6 = (uint)*(ushort *)(in_ep + 0xca);
  *(uint *)(in_ep + 0x7c) = uVar6;
  uVar4 = *(ushort *)(in_ep + 0x1e);
  iVar2 = (int5)in_ep + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar3 = (int5)(int)(uint)*(ushort *)(in_ep + 0x18) + -1;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  uVar11 = (uint)iVar3;
  uVar16 = (uint)*(ushort *)((int)iVar2 + 0x18);
  *(ushort *)(uVar16 + 0x60) = *(ushort *)(in_ep + 0xca);
  uVar7 = in_r23 | 0x1ff;
  uVar8 = uVar4 & in_r22;
  uVar12 = (uint)*(ushort *)(uVar16 + 0x22);
  uVar17 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  uVar10 = in_r22;
code_r0x000575ee:
  uVar5 = (undefined2)uVar6;
  if ((bool)((byte)(uVar17 >> 2) & 1)) goto LAB_000575ae;
  iVar13 = uVar12 - 0xb;
  bVar1 = (int)uVar12 < 0 && -1 < (int)(uVar12 - 0xb);
FUN_000575f2:
  *(char *)(in_r10 + 0x6286) = (char)uVar10;
  if (bVar1) goto LAB_000575b8;
  iVar15 = iVar13 + -0xb;
  bVar1 = iVar13 < 0 && -1 < iVar13 + -0xb;
LAB_000575fc:
  uVar8 = (uint)*(byte *)(uVar16 + 0x10);
  *(char *)(in_r10 + 0x6288) = (char)uVar10;
  if (bVar1) goto LAB_000575c2;
  iVar13 = iVar15 + -0xb;
  uVar8 = (uint)*(byte *)(uVar16 + 0x10);
  *(char *)(in_r10 + 0x628a) = (char)uVar10;
  bVar1 = true;
  if (iVar15 < 0 && -1 < iVar15 + -0xb) goto LAB_000575cc;
  iVar14 = iVar15 + -0x16;
  uVar12 = (uint)(iVar13 < 0 && -1 < iVar15 + -0x16) << 2;
  uVar8 = (uint)*(byte *)(uVar16 + 0x10);
  do {
    uVar5 = (undefined2)uVar6;
    uVar9 = (undefined1)uVar10;
    *(undefined1 *)(in_r10 + 0x628c) = uVar9;
    if (SUB41(uVar12 >> 2,0)) {
      while( true ) {
        *(char *)(in_r10 + 0x6280) = (char)uVar10;
        if (SUB41(uVar12 >> 2,0)) {
          uVar16 = (uint)*(ushort *)(uVar16 + 0x18);
          goto LAB_00057590;
        }
        uVar17 = iVar14 - 0xb;
        uVar8 = (uint)*(byte *)(uVar16 + 0x10);
        *(char *)(in_r10 + 0x6282) = (char)uVar10;
        if (-1 < iVar14 || iVar14 + -0xb < 0) break;
        while( true ) {
          uVar5 = (undefined2)uVar6;
          uVar7 = in_r23 | 0x1ff;
          uVar8 = uVar8 & uVar10;
          uVar17 = uVar8 == 0 | 8;
LAB_000575ae:
          uVar9 = (undefined1)uVar8;
          if (SUB41(uVar17 >> 3,0) || (bool)((byte)uVar17 & 1)) goto LAB_0005764a;
LAB_000575b8:
          uVar6 = (uint)*(ushort *)(uVar16 + 0xcc);
          *(uint *)(uVar16 + 0x7c) = uVar6;
          uVar8 = 0xffffffff;
          uVar11 = (uint)*(ushort *)(uVar16 + 0x1a);
LAB_000575c2:
          bVar1 = false;
          iVar13 = (int)(char)(&DAT_ffffe256)[param_2];
          *(short *)(uVar16 + 0x38) = (short)in_r23;
LAB_000575cc:
          *(char *)(in_r10 + 0x627e) = (char)uVar10;
          if (!bVar1) break;
LAB_00057590:
          uVar8 = uVar8 / (uint)(int)(short)uVar10;
          uVar11 = (uint)*(ushort *)(uVar16 + 0x1a);
          *(short *)(uVar16 + 0x60) = (short)uVar6;
        }
        iVar14 = iVar13 + -0xb;
        uVar12 = (uint)(iVar13 < 0 && -1 < iVar13 + -0xb) << 2;
        uVar8 = (uint)*(byte *)(uVar16 + 0x10);
      }
      uVar12 = iVar14 - 0x16;
      uVar17 = (uint)((int)uVar17 < 0 && -1 < iVar14 + -0x16) << 2 | (uint)(10 < uVar17) << 3 |
               (uint)(uVar17 == 0xb);
LAB_000575e8:
      uVar8 = (uint)*(byte *)(uVar16 + 0x10);
      *(char *)(in_r10 + 0x6284) = (char)uVar10;
      goto code_r0x000575ee;
    }
    *(char *)(uVar16 + 0x4d) = (char)in_r25;
    uVar12 = iVar14 - 0x1f;
    uVar8 = (uint)(short)in_r23;
    bVar1 = uVar11 == 0x80000000 && uVar8 == 0xffffffff || uVar8 == 0;
    uVar11 = uVar11 / uVar8;
    uVar17 = (uint)(9 < iVar14 - 0x15U) << 3 | (uint)bVar1 << 2 | (uint)(uVar11 == 0);
    *(undefined1 *)(in_r10 + 0x628e) = uVar9;
    if (bVar1) goto LAB_000575e8;
    iVar13 = iVar14 + -0x2a;
    *(undefined1 *)(in_r10 + 0x6290) = uVar9;
    bVar1 = true;
    if ((int)uVar12 < 0 && -1 < iVar14 + -0x2a) goto FUN_000575f2;
    iVar15 = iVar14 + -0x35;
    *(undefined1 *)(in_r10 + 0x6292) = uVar9;
    bVar1 = true;
    if (iVar13 < 0 && -1 < iVar14 + -0x35) goto LAB_000575fc;
    uVar9 = *(undefined1 *)(uVar16 + 0x10);
LAB_0005764a:
    *(undefined1 *)(uVar16 + 6) = uVar9;
    uVar10 = (uint)*(char *)(uVar10 + 0x7083);
    iVar2 = (int5)(int)&stack0x00000000 - (int5)(int)uVar7;
    iVar13 = (int)&stack0x00000000 - uVar7;
    bVar1 = (int)uVar7 < 0;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar7 = (uint)iVar2;
    iVar15 = (int)*(char *)(param_2 + -0xf84);
    if ((int)&stack0x00000000 < 0 == bVar1 || bVar1 != iVar13 < 0) goto LAB_000576c6;
    uVar6 = (uint)*(ushort *)(uVar16 + 2);
    *(short *)(iVar15 + 0x2e74) = (short)in_lp;
    *(short *)(iVar15 + 0x18d2) = (short)in_lp;
    *(undefined4 *)(iVar15 + 0x1902) = in_lp;
    *(undefined2 *)(uVar16 + 0x44) = 0xb;
    in_r25 = *(undefined2 *)(uVar16 + 0x5c);
    iVar14 = iVar15 + -0x1e;
    uVar12 = (uint)(iVar15 + -0x14 < 0 && -1 < iVar15 + -0x1e) << 2 |
             (uint)(iVar15 + -0x1e < 0) << 1;
    uVar8 = in_r22;
    if (!(bool)((byte)(uVar12 >> 1) & 1)) {
      *(short *)(uVar16 + 0x34) = unaff_gp + -0x1daa;
      uVar16 = uVar16 | param_1;
      uVar5 = (undefined2)*(undefined4 *)(uVar16 + 0x60);
      *(ushort *)(uVar16 + 0xee) = (ushort)in_r22 | in_r1;
LAB_000576c6:
      *(undefined2 *)(uVar16 + 0xd0) = uVar5;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  } while( true );
}


// ==== FUN_000575f2 @ 000575f2 (size 816) ====

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_000575f2(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  int5 iVar2;
  ushort in_r1;
  short unaff_gp;
  undefined2 uVar3;
  int in_r10;
  uint in_r14;
  uint uVar4;
  undefined1 uVar5;
  uint in_r16;
  uint in_r22;
  uint in_r23;
  undefined2 in_r25;
  uint in_r26;
  int in_r28;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_ep;
  undefined4 in_lp;
  uint in_PSW;
  uint uVar9;
  
code_r0x000575f2:
  *(char *)(in_r10 + 0x6286) = (char)in_r16;
  if ((bool)((byte)(in_PSW >> 2) & 1)) goto LAB_000575b8;
  iVar6 = in_r28 + -0xb;
  bVar1 = in_r28 < 0 && -1 < in_r28 + -0xb;
LAB_000575fc:
  uVar4 = (uint)*(byte *)(in_ep + 0x10);
  *(char *)(in_r10 + 0x6288) = (char)in_r16;
  if (bVar1) goto LAB_000575c2;
  iVar8 = iVar6 + -0xb;
  uVar4 = (uint)*(byte *)(in_ep + 0x10);
  *(char *)(in_r10 + 0x628a) = (char)in_r16;
  bVar1 = true;
  if (iVar6 < 0 && -1 < iVar6 + -0xb) goto LAB_000575cc;
  iVar7 = iVar6 + -0x16;
  uVar9 = (uint)(iVar8 < 0 && -1 < iVar6 + -0x16) << 2;
  uVar4 = (uint)*(byte *)(in_ep + 0x10);
  do {
    uVar3 = (undefined2)param_3;
    uVar5 = (undefined1)in_r16;
    *(undefined1 *)(in_r10 + 0x628c) = uVar5;
    if (SUB41(uVar9 >> 2,0)) goto LAB_000575d6;
    *(char *)(in_ep + 0x4d) = (char)in_r25;
    iVar6 = iVar7 + -0x1f;
    uVar4 = (uint)(short)in_r23;
    bVar1 = in_r26 == 0x80000000 && uVar4 == 0xffffffff || uVar4 == 0;
    in_r26 = in_r26 / uVar4;
    uVar9 = (uint)(9 < iVar7 - 0x15U) << 3 | (uint)bVar1 << 2 | (uint)(in_r26 == 0);
    *(undefined1 *)(in_r10 + 0x628e) = uVar5;
    if (bVar1) {
LAB_000575e8:
      uVar4 = (uint)*(byte *)(in_ep + 0x10);
      *(char *)(in_r10 + 0x6284) = (char)in_r16;
      if ((bool)((byte)(uVar9 >> 2) & 1)) {
        do {
          uVar3 = (undefined2)param_3;
          uVar5 = (undefined1)uVar4;
          if (SUB41(uVar9 >> 3,0) || (bool)((byte)uVar9 & 1)) goto LAB_0005764a;
LAB_000575b8:
          param_3 = (uint)*(ushort *)(in_ep + 0xcc);
          *(uint *)(in_ep + 0x7c) = param_3;
          uVar4 = 0xffffffff;
          in_r26 = (uint)*(ushort *)(in_ep + 0x1a);
LAB_000575c2:
          bVar1 = false;
          iVar8 = (int)(char)(&DAT_ffffe256)[param_2];
          *(short *)(in_ep + 0x38) = (short)in_r23;
LAB_000575cc:
          *(char *)(in_r10 + 0x627e) = (char)in_r16;
          if (bVar1) {
            uVar4 = uVar4 / (uint)(int)(short)in_r16;
            in_r26 = (uint)*(ushort *)(in_ep + 0x1a);
code_r0x0005759c:
            *(short *)(in_ep + 0x60) = (short)param_3;
          }
          else {
            iVar7 = iVar8 + -0xb;
            uVar9 = (uint)(iVar8 < 0 && -1 < iVar8 + -0xb) << 2;
            uVar4 = (uint)*(byte *)(in_ep + 0x10);
LAB_000575d6:
            *(char *)(in_r10 + 0x6280) = (char)in_r16;
            if (SUB41(uVar9 >> 2,0)) {
              in_ep = (uint)*(ushort *)(in_ep + 0x18);
              goto code_r0x0005759c;
            }
            uVar9 = iVar7 - 0xb;
            uVar4 = (uint)*(byte *)(in_ep + 0x10);
            *(char *)(in_r10 + 0x6282) = (char)in_r16;
            if (-1 < iVar7 || iVar7 + -0xb < 0) goto code_r0x000575e6;
          }
          in_r14 = in_r23 | 0x1ff;
          uVar4 = uVar4 & in_r16;
          uVar9 = uVar4 == 0 | 8;
        } while( true );
      }
      in_r28 = iVar6 + -0xb;
      in_PSW = (uint)(iVar6 < 0 && -1 < iVar6 + -0xb) << 2;
      goto code_r0x000575f2;
    }
    in_r28 = iVar7 + -0x2a;
    bVar1 = iVar6 < 0 && -1 < iVar7 + -0x2a;
    in_PSW = (uint)bVar1 << 2;
    *(undefined1 *)(in_r10 + 0x6290) = uVar5;
    if (bVar1) goto code_r0x000575f2;
    iVar6 = iVar7 + -0x35;
    *(undefined1 *)(in_r10 + 0x6292) = uVar5;
    bVar1 = true;
    if (in_r28 < 0 && -1 < iVar7 + -0x35) goto LAB_000575fc;
    uVar5 = *(undefined1 *)(in_ep + 0x10);
LAB_0005764a:
    *(undefined1 *)(in_ep + 6) = uVar5;
    in_r16 = (uint)*(char *)(in_r16 + 0x7083);
    iVar2 = (int5)(int)&stack0x00000000 - (int5)(int)in_r14;
    iVar6 = (int)&stack0x00000000 - in_r14;
    bVar1 = (int)in_r14 < 0;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    in_r14 = (uint)iVar2;
    iVar8 = (int)*(char *)(param_2 + -0xf84);
    if ((int)&stack0x00000000 < 0 == bVar1 || bVar1 != iVar6 < 0) goto LAB_000576c6;
    param_3 = (uint)*(ushort *)(in_ep + 2);
    *(short *)(iVar8 + 0x2e74) = (short)in_lp;
    *(short *)(iVar8 + 0x18d2) = (short)in_lp;
    *(undefined4 *)(iVar8 + 0x1902) = in_lp;
    *(undefined2 *)(in_ep + 0x44) = 0xb;
    in_r25 = *(undefined2 *)(in_ep + 0x5c);
    iVar7 = iVar8 + -0x1e;
    uVar9 = (uint)(iVar8 + -0x14 < 0 && -1 < iVar8 + -0x1e) << 2 | (uint)(iVar8 + -0x1e < 0) << 1;
    uVar4 = in_r22;
    if (!(bool)((byte)(uVar9 >> 1) & 1)) {
      *(short *)(in_ep + 0x34) = unaff_gp + -0x1daa;
      in_ep = in_ep | param_1;
      uVar3 = (undefined2)*(undefined4 *)(in_ep + 0x60);
      *(ushort *)(in_ep + 0xee) = (ushort)in_r22 | in_r1;
LAB_000576c6:
      *(undefined2 *)(in_ep + 0xd0) = uVar3;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
      halt_unimplemented();
    }
  } while( true );
code_r0x000575e6:
  iVar6 = iVar7 + -0x16;
  uVar9 = (uint)((int)uVar9 < 0 && -1 < iVar7 + -0x16) << 2 | (uint)(10 < uVar9) << 3 |
          (uint)(uVar9 == 0xb);
  goto LAB_000575e8;
}


// ==== FUN_00057c0a @ 00057c0a (size 438) ====

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Control flow encountered bad instruction data */

void FUN_00057c0a(undefined2 param_1)

{
  int iVar1;
  int5 iVar2;
  byte bVar3;
  int in_r1;
  undefined1 unaff_tp;
  undefined2 uVar4;
  int iVar5;
  int in_r12;
  uint in_r15;
  uint uVar6;
  uint in_r17;
  int in_r24;
  undefined1 *puVar7;
  int in_ep;
  uint uVar8;
  uint uVar9;
  
  *(char *)(in_r12 + -0x7afb) = (char)(in_r15 >> 0x11);
  uVar4 = *(undefined2 *)(in_ep + 0x60);
  *(ushort *)(in_ep + 0xac) = (ushort)(in_r15 >> 0x11);
  iVar2 = -(int5)(int)(in_r15 >> 0x11);
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  uVar6 = (uint)iVar2;
  uVar8 = (uint)*(ushort *)(in_ep + 0x1a);
  func_0xfff8c048();
  FUN_00065e7a();
  func_0xffef6caa();
  *(undefined1 *)(in_r1 + 0x7c86) = unaff_tp;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x1a);
  uVar6 = uVar6 / (uint)(int)(short)in_r17;
  func_0xfffb6054();
  func_0xfffb2052();
  uVar9 = (uint)*(ushort *)(in_r24 + 0x7e);
  iVar2 = (int5)(int)in_r17 + (int5)(int)uVar6;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  uVar6 = (uint)iVar2;
  *(undefined2 *)(uVar8 + 0xcc) = uVar4;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x1a);
  uVar4 = 0x7c6e;
  func_0xfffac092();
  *(undefined2 *)(uVar8 + 0x86) = param_1;
  uVar8 = uVar8 | uVar9;
  *(short *)(uVar8 + 0x2c) = (short)uVar6;
  *(char *)(*(ushort *)(uVar8 + 0x4e) + 0x1078) = (char)in_r17;
  *(undefined2 *)(uVar9 - 0x61c) = uVar4;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x1a);
  iVar5 = func_0xfff5f924();
  iVar1 = uVar6 + in_r17;
  if ((!CARRY4(uVar6,in_r17) && iVar1 != 0) &&
     (iVar1 < 0 == ((int)uVar6 < 0 == (int)in_r17 < 0 && (int)in_r17 < 0 != iVar1 < 0))) {
    *(uint *)(uVar8 + 0x7c) = (uint)*(ushort *)(uVar8 + 0xc6);
    func_0x001af5be();
    __nop();
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
    halt_unimplemented();
  }
  uVar6 = (uint)*(ushort *)(uVar8 + 0xec);
  puVar7 = &DAT_00007217 + iVar5;
  *(uint *)(uVar8 + 0x7c) = (uint)*(ushort *)(uVar8 + 0xc6);
  *(undefined2 *)(uVar8 + 0xc) = 0xffff;
  func_0x00086186();
  func_0xfffa5fec(*(undefined2 *)(uVar8 + 0xc4));
  *(uint *)(puVar7 + 0x177e) = uVar9;
  bVar3 = (&DAT_ffffa503)[uVar6];
  *(uint *)(uVar9 - 0x56fe) = (uint)bVar3;
  *(uint *)(uVar9 + 0x7c0e) = (uint)bVar3;
  uVar6 = (uint)*(byte *)(uVar6 + 0x7887);
  *(uint *)(uVar9 - 0x5afe) = uVar6;
  *(uint *)(uVar9 - 0x56fe) = uVar6;
  *(uint *)(uVar9 + 0x7c9e) = uVar6;
  *(uint *)(puVar7 + 0x177e) = uVar9;
  *(uint *)(&DAT_ffffa402 + uVar9) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00058382 @ 00058382 (size 150) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00058382(int param_1,undefined2 param_2)

{
  int5 iVar1;
  ushort uVar2;
  int in_r2;
  int in_r10;
  undefined2 uVar3;
  uint in_r16;
  undefined2 *in_ep;
  undefined2 *puVar4;
  
  *(byte *)(in_r16 - 0xf84) = *(byte *)(in_r16 - 0xf84) | 4;
  uVar3 = (undefined2)~in_r16;
  *in_ep = uVar3;
  in_ep[0x22] = param_2;
  puVar4 = (undefined2 *)(uint)(ushort)in_ep[0xd];
  *(byte *)(in_r16 + 0x7887) = *(byte *)(in_r16 + 0x7887) | 4;
  puVar4[0x10] = uVar3;
  puVar4[0x22] = param_2;
  iVar1 = (int5)param_1 - (int5)(int)~in_r16;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *puVar4 = (short)iVar1;
  uVar2 = puVar4[0xc];
  *(byte *)(in_r16 - 0x2e83) = *(byte *)(in_r16 - 0x2e83) | 4;
  *(byte *)(in_r10 + 0x4ce8) = *(byte *)(in_r10 + 0x4ce8) | 4;
  *(byte *)(in_r2 + 0x4447) = *(byte *)(in_r2 + 0x4447) | 4;
  DAT_00007880 = DAT_00007880 | 4;
  *(uint *)(DAT_00007217 + 0x2ef2) = (uint)*(ushort *)(*(ushort *)(uVar2 + 0x18) + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000584e6 @ 000584e6 (size 328) ====

void FUN_000584e6(int param_1,int param_2)

{
  int5 iVar1;
  short *psVar2;
  int5 iVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  int in_r12;
  int in_r13;
  undefined1 uVar8;
  short sVar9;
  short in_r19;
  undefined4 in_r27;
  int in_r29;
  int in_ep;
  uint uVar10;
  undefined4 in_lp;
  
  sVar9 = -0x10;
  uVar10 = (uint)*(ushort *)(in_ep + 0x18);
  func_0x00100170();
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  func_0xe705d120();
  uVar7 = (undefined2)*(undefined4 *)(uVar10 + 0x60);
  *(undefined2 *)(uVar10 + 0x60) = uVar7;
  iVar6 = *(int *)(uVar10 + 0x48);
  *(byte *)(param_1 + 0x7c20) = *(byte *)(param_1 + 0x7c20) | 4;
  (&DAT_00007817)[in_r13] = (&DAT_00007817)[in_r13] | 4;
  uVar4 = *(ushort *)(uVar10 + 0x40);
  *(byte *)(param_1 + 0x44a3) = *(byte *)(param_1 + 0x44a3) | 4;
  *(undefined2 *)(uVar10 + 0xc4) = uVar7;
  uVar8 = (undefined1)sVar9;
  *(undefined1 *)(iVar6 + 0x8c4) = uVar8;
  iVar1 = -(int5)(int)(uint)uVar4;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(byte *)(param_2 + -0xe1c) = *(byte *)(param_2 + -0xe1c) | 4;
  *(undefined1 *)(uVar10 + 1) = 0;
  *(short *)(uVar10 + 0x2c) = (short)iVar1;
  *(byte *)(in_r12 + 0x7297) = *(byte *)(in_r12 + 0x7297) | 4;
  iVar3 = (int5)in_r29 + -0x17c7;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  *(byte *)(in_r13 + -0x6082) = *(byte *)(in_r13 + -0x6082) | 4;
  *(undefined4 *)((int)iVar3 + 0x74) = in_lp;
  iVar3 = (int5)(int)(uint)*(byte *)((int)iVar3 + 0x3b) + -5;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  psVar2 = (short *)iVar3;
  cVar5 = *(char *)(iVar6 + -0x7d85);
  *(short *)(cVar5 + 0x2fa6) = (short)in_lp;
  *(short *)(cVar5 + 0x2fa2) = (short)in_lp;
  *(undefined1 *)(iVar6 + 0x8c4) = uVar8;
  *(undefined1 *)((int)psVar2 + 5) = 0;
  *psVar2 = (short)DAT_ffffe481;
  uVar10 = (uint)*(byte *)(psVar2 + 0x3e);
  *(uint *)(uVar10 + 0x5c) = (uint)iVar1 / (uint)(int)sVar9;
  *(uint *)(uVar10 + 4) = (uint)*(byte *)(uVar10 + 0xb);
  *(ushort *)(uVar10 + 0x3e) = *(ushort *)(uVar10 + 0x1e) | (ushort)param_1;
  uVar10 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(uVar10 + 0x18) + 0x18) + 0x18);
  uVar7 = *(undefined2 *)(uVar10 + 0x88);
  *(undefined1 *)(iVar6 + 0x8c4) = uVar8;
  *(undefined1 *)(uVar10 + 5) = 0;
  *(undefined4 *)(in_r29 + 0x178a) = in_r27;
                    /* WARNING: Could not recover jumptable at 0x0005862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005862e + *(short *)(&DAT_0005862e + in_r19 * -0xb1f4) * 2))(uVar7);
  return;
}


// ==== FUN_00058910 @ 00058910 (size 102) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00058910(undefined2 param_1)

{
  int5 iVar1;
  short unaff_gp;
  short sVar2;
  int in_ep;
  
  sVar2 = *(short *)(in_ep + 0x18);
  func_0xfff5105c();
  func_0x00000a34();
  *(undefined1 *)((int)unaff_gp * (int)sVar2 + 0xb) = 0;
  iVar1 = (int5)((int)unaff_gp * (int)sVar2) + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined2 *)(*(ushort *)(*(ushort *)(*(ushort *)((int)iVar1 + 0x18) + 0x18) + 0x18) + 0xda) =
       param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00059ac2 @ 00059ac2 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00059ac2(void)

{
  undefined1 uVar1;
  int in_r10;
  int in_r18;
  undefined4 uVar2;
  int in_r27;
  int in_ep;
  
  uVar1 = *(undefined1 *)(in_r18 + -0x2f84);
  uVar2 = *(undefined4 *)(*(ushort *)(in_ep + 0x18) + 0xf8);
  *(undefined1 *)(in_r10 + 0x2fc) = uVar1;
  *(short *)(&DAT_ffffe256 + in_r27) = (short)uVar2;
  *(undefined1 *)(in_r10 + 0x34b) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005a10c @ 0005a10c (size 254) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a10c(void)

{
  int5 iVar1;
  int unaff_gp;
  int in_ep;
  
  iVar1 = (int5)in_ep + 0x18f8;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  (&DAT_00004c01)[unaff_gp] = (char)iVar1;
  (*(code *)0x0)();
  return;
}


// ==== FUN_0005b590 @ 0005b590 (size 38) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005b590(void)

{
  int5 iVar1;
  undefined2 in_r15;
  undefined1 in_r19;
  int in_r20;
  undefined4 in_r27;
  int in_ep;
  
  *(undefined1 *)(in_r20 + -0x2c5) = in_r19;
  iVar1 = (int5)(int)(uint)*(byte *)(in_ep + 0x3b) + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
  *(undefined2 *)(*(ushort *)((int)iVar1 + 0x1a) + 0x40) = in_r15;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005b9ac @ 0005b9ac (size 44) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005b9ac(void)

{
  undefined2 uVar1;
  uint in_r23;
  int in_ep;
  uint uVar2;
  uint in_PSW;
  
  if (!(bool)((byte)(in_PSW >> 1) & 1)) {
    in_r23 = 0xfffffffb;
  }
  uVar1 = *(undefined2 *)(in_ep + 0x1e);
  uVar2 = ~in_r23;
  *(undefined1 *)(uVar2 + 0x17) = *(undefined1 *)(uVar2 + 0x17);
  *(char *)(uVar2 + 0x27) = (char)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005bc0a @ 0005bc0a (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005bc0a(void)

{
  uint in_r20;
  undefined1 in_r23;
  uint uVar1;
  
  uVar1 = ~in_r20;
  *(undefined1 *)(uVar1 + 0x17) = *(undefined1 *)(uVar1 + 0x17);
  *(undefined1 *)(uVar1 + 0x27) = in_r23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005bd80 @ 0005bd80 (size 106) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005bd80(void)

{
  int5 iVar1;
  undefined2 in_r16;
  undefined1 in_r19;
  uint in_r20;
  undefined4 in_r27;
  
  *(undefined1 *)(in_r20 - 0x2c5) = in_r19;
  iVar1 = (int5)(int)(uint)*(byte *)(~in_r20 + 0x3b) + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)((int)iVar1 + 0x7c) = in_r27;
  __synchronize();
  *(undefined2 *)(*(ushort *)((int)iVar1 + 0x1a) + 0x40) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005d4f0 @ 0005d4f0 (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005d4f0(void)

{
  undefined2 in_r18;
  int in_lp;
  
  *(undefined2 *)(in_lp + -0x2f84) = in_r18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005d948 @ 0005d948 (size 24) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005d948(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005df70 @ 0005df70 (size 152) ====

void FUN_0005df70(int param_1,int param_2)

{
  int5 iVar1;
  ushort uVar2;
  uint in_r1;
  undefined4 in_r27;
  int in_r29;
  int in_ep;
  int in_lp;
  
  iVar1 = (int5)param_2 - (int5)(int)(uint)*(ushort *)(uint)*(ushort *)(in_ep + 0x18);
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(ushort *)(uint)*(ushort *)(in_ep + 0x18) = (ushort)iVar1;
  uVar2 = *(ushort *)(in_lp + 0x18);
  *(int *)((in_r1 | 0x3174) + 0x3174) = in_lp;
  uVar2 = *(ushort *)(*(ushort *)(*(ushort *)(uVar2 + 0x18) + 0x18) + 4);
  iVar1 = (int5)(int)(in_r1 | 0x3174) + -0x317e;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(undefined4 *)(in_r29 + 0x18ba) = in_r27;
                    /* WARNING: Could not recover jumptable at 0x0005e006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005e008 + *(short *)(&DAT_0005e008 + (uint)uVar2 * 2) * 2))
            (-param_1,*(undefined2 *)(*(ushort *)((int)iVar1 + 0x18) + 2));
  return;
}


// ==== FUN_0005e7b4 @ 0005e7b4 (size 431) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_0005e7b4(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int5 iVar2;
  undefined1 *puVar3;
  int5 iVar4;
  ushort uVar5;
  char cVar6;
  undefined1 *in_r1;
  short unaff_gp;
  uint unaff_tp;
  undefined4 uVar7;
  int iVar8;
  undefined1 uVar9;
  int in_r14;
  int in_r15;
  undefined4 in_r18;
  undefined4 in_r19;
  uint in_r21;
  uint in_r22;
  int in_r23;
  undefined4 in_r27;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  uint in_r29;
  uint in_ep;
  uint uVar13;
  int iVar14;
  int iVar15;
  int in_lp;
  uint in_PSW;
  uint uVar16;
  
  uVar5 = *(ushort *)(in_ep + 0x18);
  *(undefined4 *)(uVar5 - 0xcc6) = in_r19;
  puVar10 = (undefined1 *)(int)*(char *)(param_3 + -0x7d85);
  *(int *)(puVar10 + 0x31a4) = in_lp;
  iVar4 = (int5)(int)puVar10 + -0x196c;
  uVar16 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) || 4 < in_ep) || uVar5 != 0) ||
                  puVar10 < (undefined1 *)0x196a) || puVar10 < (undefined1 *)0x196c) << 4;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  iVar11 = (int)iVar4;
  DAT_00000320 = (undefined1)in_r22;
  iVar15 = (((param_1 - in_ep) - unaff_tp) - in_r15) - (int)in_r1;
  iVar8 = func_0x000b6f2c();
  *(short *)(iVar11 + 0xc0) = (short)param_2;
  *(int *)(iVar11 + 0x3c) = iVar11;
  *(int *)(iVar11 + 0x3c) = in_lp;
  iVar4 = (int5)(int)puVar10 + -0x31ba;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  uVar13 = (uint)*(ushort *)((int)iVar4 + 0x18);
  *(uint *)(uVar13 + 0x20) = (uint)*(ushort *)(iVar11 + 0x22);
  iVar4 = (int5)(int)param_2 + -0x6666;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  *(uint *)(uVar13 + 0x7c) = (uint)*(ushort *)(uVar13 + 200);
  uVar5 = *(ushort *)(uVar13 + 0x20);
  __nop();
  *(undefined2 *)(uVar13 + 0x2c) = 0xffff;
  *(char *)(unaff_tp + 0x7fff) = (char)in_r22;
  uVar13 = (uint)*(ushort *)(uVar13 + 0x18);
  *(short *)(uVar13 + 0xc) = (short)(unaff_tp | 0xa902);
  *(uint *)(uVar5 + 0x31ae) = uVar13;
  *(uint *)(uVar13 + 0x3c) = uVar13;
  uVar7 = *(undefined4 *)(uVar13 + 0xdc);
  iVar11 = (int)DAT_00007227;
  *(undefined4 *)(uVar13 + 0xdc) = uVar7;
  iVar14 = *(int *)(uVar13 + 0xf8);
  *(undefined2 *)(iVar14 + 0x46) = 0;
  cVar6 = *(char *)(unaff_tp + 0x5ee3);
  *(short *)(iVar11 + 0x31c2) = (short)in_lp;
  *(short *)(iVar11 + 0x31bc) = (short)iVar14;
  *(int *)(iVar14 + 0x3c) = iVar14;
  *(char *)(iVar14 + 0x51) = cVar6 * -0x10;
  iVar2 = (int5)(int)in_r22 + (int5)(int)*(uint *)(iVar14 + 0xec);
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(short *)(iVar14 + 0xdc) = (short)uVar7;
  *(short *)(iVar14 + 0x2c) = (short)iVar2;
  *(undefined2 *)(iVar14 + 0x44) = 0;
  puVar3 = &stack0x00000000 +
           (((((iVar15 - (int)in_r1) - in_r29) - (unaff_tp | 0xa902)) - in_r22) - in_r23);
  uVar13 = (uint)*(ushort *)(in_lp + 0x18);
  uVar16 = (uint)((((((bool)((byte)(uVar16 >> 4) & 1) || puVar10 < (undefined1 *)0x31ba) ||
                    puVar10 < in_r1) || param_2 < 0x6666) ||
                  CARRY4(param_2,(((int)((in_r14 + 7) * 0x80 & param_2) >> 7 ^ param_2) + 7) * 0x80)
                  ) || CARRY4(in_r22,*(uint *)(iVar14 + 0xec))) << 4 | (uint)(puVar3 < in_r1) << 3 |
           (uint)(puVar3 == in_r1);
  *(undefined4 *)(in_lp + -0xdc6) = in_r19;
  iVar15 = *(int *)(in_lp + 0x80);
  if (puVar3 < in_r1 || (bool)((byte)uVar16 & 1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    if ((bool)((byte)(uVar16 >> 3) & 1) || (bool)((byte)uVar16 & 1)) {
                    /* WARNING: Could not recover jumptable at 0x0005e97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0005e97c + *(short *)(&DAT_0005e97c + in_r22 * 2) * 2))();
      return;
    }
    uVar12 = (uint)cRamffff827b;
    bVar1 = 0xfffffff4 < uVar13;
    uVar13 = (uint)*(byte *)(*(int *)(iVar15 + 0x80) + 0x2b);
    *(undefined4 *)(*(int *)(iVar15 + 0x80) + 0x7c) = in_r27;
    uVar9 = (undefined1)iVar4;
    uRam000032c0 = (char)in_r22;
    *(undefined1 *)(unaff_gp * 0x1a + 0x48) = uVar9;
    *(undefined1 *)(unaff_gp * 0x1b + 0x4c) = uVar9;
    iVar2 = (int5)(int)in_r29 + -0xcb8;
    bVar1 = (((SUB41(uVar16 >> 4,0) || bVar1) || uVar12 < 0x196e) || uVar12 < 0x1972) ||
            in_r29 < 0xcb8;
    uVar16 = (uint)(in_r29 < 0xcb8) << 3 | (uint)(in_r29 == 0xcb8) | (uint)bVar1 << 4;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    iVar15 = (int)iVar2;
  } while ((bool)((byte)uVar16 & 1));
  *(char *)(iVar15 + 100) = (char)in_lp;
  do {
  } while (bVar1);
  *(undefined1 *)(iVar15 + 0x4c) = uVar9;
  *(int *)(uVar12 + 0x31da) = iVar15;
  iVar15 = (int)(short)in_r29 * (int)(short)iVar2;
  *(undefined1 *)(iVar15 + 0x48) = uVar9;
  do {
    *(int *)(iVar15 + 0xa4) = iVar15;
    uVar5 = *(ushort *)(iVar15 + 0x1a);
    *(undefined4 *)(uVar5 + 0xfc) = in_r18;
    iVar14 = uVar12 - 0x1e;
    iVar15 = *(int *)(uVar5 + 0x14);
    *(uint *)(iVar15 + 0x3c) = uVar13;
    iVar15 = *(int *)(iVar15 + 0xf8);
    iVar11 = uVar12 - 0x28;
    uVar12 = uVar12 - 0x14;
  } while (iVar11 < 0 == (iVar14 < 0 && -1 < iVar11) && iVar14 != 10);
                    /* WARNING: Could not recover jumptable at 0x0005e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005e956 + *(short *)(&DAT_0005e956 + (in_r21 | (uint)&stack0x00000000) * 2) * 2))
            (puVar3 + (iVar8 - (int)in_r1));
  return;
}


// ==== FUN_0005f0f4 @ 0005f0f4 (size 598) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005f322) overlaps instruction at (ram,0x0005f320)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0005f262) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005f0f4(undefined4 param_1)

{
  int5 iVar1;
  ushort *puVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  uint in_r1;
  short in_r2;
  int iVar7;
  undefined1 in_r12;
  undefined2 uVar8;
  uint in_r16;
  undefined4 in_r19;
  undefined4 in_r20;
  undefined1 uVar9;
  undefined4 in_r22;
  ushort in_r23;
  int in_r24;
  undefined4 in_r27;
  short sVar10;
  uint in_r29;
  int in_ep;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  short in_lp;
  short sVar16;
  uint in_PSW;
  uint uVar17;
  
  *(undefined4 *)(in_ep + 4) = in_r20;
  *(short *)(in_r29 + 0x18fc) = in_lp;
  *(short *)(in_r29 + 0x18fc) = in_lp;
  sVar16 = (short)in_r29 * in_lp;
  iVar1 = (int5)(int)DAT_ffffa61c + -0x1f8e;
  uVar17 = (uint)((bool)((byte)(in_PSW >> 4) & 1) || (uint)(int)DAT_ffffa61c < 0x1f8e) << 4;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar11 = *(int *)((int)iVar1 + 0xf8);
  func_0x00146c18(_DAT_00005c72);
  *(undefined4 *)(iVar11 + 4) = 0xfffffff4;
  *(short *)(in_r29 + 0x18fc) = sVar16;
  *(short *)(in_r29 + 0x18fc) = sVar16;
  sVar10 = (short)in_r29;
  *(int *)(DAT_ffffa603 + 0x3206) = (int)sVar10 * (int)sVar16;
  uVar12 = (uint)*(ushort *)(iVar11 + 0x18);
  *(short *)(uVar12 + 0x60) = (short)param_1;
  bVar4 = *(byte *)(uVar12 + 0x17);
  *(byte *)(uVar12 + 0x17) = bVar4;
  in_r23 = bVar4 | in_r23;
  uVar3 = *(ushort *)(uVar12 + 0x18);
  *(undefined2 *)(uint)uVar3 = (short)in_r22;
  uVar13 = (uint)(ushort)((undefined2 *)(uint)uVar3)[0xc];
  *(undefined4 *)(uVar13 + 0x40) = param_1;
  *(short *)(uVar13 + 0xc6) = (short)param_1;
  uVar12 = (uint)*(ushort *)(uVar13 + 0xc2);
  *(short *)(uVar13 + 0x40) = (short)in_r16;
  *(undefined2 *)(uVar13 + 0x40) = *(undefined2 *)(uVar13 + 0x60);
  uVar3 = (ushort)((int)sVar10 * (int)sVar16);
  cVar5 = *(char *)(in_r16 - 0x5cfa);
  *(ushort *)(DAT_ffff8f10 + 0x21e4) = uVar3;
  *(undefined4 *)(in_r29 + 0x10f0) = in_r27;
  iVar1 = (int5)(int)in_r29 + -0x190c;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar11 = (int)iVar1;
  cVar6 = (&DAT_00007d00)[in_r24];
  iVar7 = *(int *)(iVar11 + 0x44);
  uVar8 = (undefined2)~in_r16;
  *(undefined2 *)(iVar11 + 0x40) = uVar8;
  puVar14 = (undefined4 *)(uint)*(ushort *)(iVar11 + 0x1a);
  *(undefined2 *)((int)puVar14 + 0x3e) = uVar8;
  uVar13 = (uint)DAT_ffffe700;
  sVar16 = (short)*puVar14 * (short)cVar5 * cVar5 * in_r2;
  iVar11 = (int)sVar10 * (int)(short)~uVar3;
  *(undefined1 *)(puVar14 + 0x1d) = in_r12;
  *(undefined4 *)((int)puVar14 + -0xcc6) = in_r19;
  iVar1 = (int5)(int)puVar14 + -5;
  uVar17 = (uint)(((((bool)((byte)(uVar17 >> 4) & 1) || in_r29 < 0x190c) ||
                   (uint)(int)cVar6 < (~in_r16 | (int)cVar6)) || in_r1 < uVar13) ||
                 (undefined4 *)0x4 < puVar14) << 4;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(ushort *)(*(char *)(iVar7 + -0xf84) + 0x3200) = sVar10 * uVar3;
  uVar13 = (uint)DAT_ffffe580;
  *(short *)(uVar13 + 0x31fe) = (short)iVar1;
  uVar15 = (uint)*(ushort *)(*(int *)((int)iVar1 + 0xf8) + 0x18);
  func_0x00136aa6();
  uVar9 = (undefined1)in_r22;
  uVar17 = uVar17 & 0xfffffff8;
  iVar7 = 0x5f23a;
  func_0x0007c3b2();
  *(int *)(uVar13 + 0x31fa) = iVar11;
  uVar3 = *(ushort *)(*(ushort *)(uVar15 + 0x18) + 0x18);
  uVar13 = in_r1 | 0x3205;
  iVar1 = (int5)(int)uVar13 + -0x3205;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  puVar14 = (undefined4 *)iVar1;
  if (9 < (int)*(char *)(iVar7 + -0x7d85) - 0x14U || in_r1 == 0xffffffff) {
    sVar16 = in_r23 * sVar16;
    puVar14[0x17] = *puVar14;
    *(short *)(puVar14 + 0x32) = (short)uVar12;
    bVar4 = *(byte *)((int)puVar14 + 0x3b);
    iVar1 = (int5)(int)(uint)bVar4 + -5;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    puVar14 = (undefined4 *)iVar1;
    puVar14[0x1f] = in_r27;
    *(short *)(puVar14 + 0x32) = sVar16;
    puVar2 = (ushort *)(puVar14 + 6);
    do {
      puVar14 = (undefined4 *)(uint)*(ushort *)((int)puVar14 + 0x1a);
    } while (((((bool)((byte)(uVar17 >> 4) & 1) || uVar13 < 0x31fd) || uVar13 < 0x3205) ||
             0xfffffff4 < uVar3) || 4 < bVar4);
    puVar14[0x1d] = (uint)*puVar2;
  }
  puVar14[0x1f] = in_r27;
  *(short *)(puVar14 + 0x32) = sVar16;
  *(uint *)(*(ushort *)((int)puVar14 + 0x1a) + 0x74) = (uint)*(ushort *)(puVar14 + 6);
  *(undefined1 *)(uVar12 + 0x11dc) = uVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005f3ee @ 0005f3ee (size 34) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005f3ee(void)

{
  undefined4 in_r10;
  int in_r13;
  undefined4 in_r27;
  undefined4 *in_ep;
  
  in_ep[0x1f] = in_r27;
  *in_ep = in_r10;
  *(undefined1 *)(in_r13 + 0x11dc) = *(undefined1 *)((int)in_ep + 5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005fe00 @ 0005fe00 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0005fe1a) */
/* WARNING: Removing unreachable block (ram,0x0005fe16) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005fe00(void)

{
  _DAT_00006441 = 0x1565;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000604a8 @ 000604a8 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0006050c) */

void FUN_000604a8(int param_1)

{
  undefined1 in_r16;
  undefined2 in_r21;
  byte in_r22;
  undefined4 in_r27;
  int iVar1;
  int in_r29;
  int in_ep;
  
  *(undefined1 *)(param_1 + 0x8c4) = in_r16;
  iVar1 = (int)DAT_ffffa606;
  *(byte *)(in_ep + 0x51) = ~in_r22;
  *(undefined2 *)(iVar1 + 0x325e) = in_r21;
  *(undefined4 *)(in_r29 + 0x1930) = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006076a @ 0006076a (size 156) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006076a(undefined2 param_1)

{
  short unaff_tp;
  int in_lp;
  int iVar1;
  
  *(int *)(in_lp + 0x3c) = in_lp;
  *(int *)(in_lp + 0x3c) = in_lp;
  *(int *)(in_lp + 0x3c) = in_lp;
  *(int *)(in_lp + 0x3c) = in_lp;
  iVar1 = (int)(char)(&DAT_ffffa403)[in_lp];
  *(undefined2 *)(iVar1 + 0x80) = param_1;
  *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(iVar1 + 200);
  *(short *)(iVar1 + 0xc) = unaff_tp + -0xfe1;
  *(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)(iVar1 + 0x17);
  *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(iVar1 + 0x5a);
  *(undefined1 *)(iVar1 + 0x17) = *(undefined1 *)(iVar1 + 0x17);
  *(undefined2 *)(iVar1 + 0x60) = *(undefined2 *)(iVar1 + 0x4a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060894 @ 00060894 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060894(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  int iVar3;
  undefined2 in_r12;
  undefined1 in_r16;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined4 in_lp;
  uint in_PSW;
  uint uVar8;
  
  uVar5 = (uint)DAT_ffff8f11;
  iVar1 = (int5)(int)uVar5 + -0x326d;
  uVar8 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) || (uint)(int)DAT_ffff8f11 < 0x1cdd) ||
                  (uint)(int)DAT_ffff8f11 < 0x1cdb) || uVar5 < 0x1cdc) || uVar5 < 0x326d) << 4;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar6 = (int)iVar1;
  iVar4 = uVar5 - 9;
  iVar3 = func_0x3271f950();
  iVar6 = *(int *)(iVar6 + 0xf8);
  uVar7 = (undefined2)in_lp;
  *(undefined2 *)(iVar4 + 2) = uVar7;
  *(undefined2 *)(iVar4 + 2) = uVar7;
  iVar4 = *(int *)(iVar6 + 0xf8);
  uVar5 = (uint)*(ushort *)(iVar6 + 0x18);
  *(undefined2 *)(uVar5 + 0xb8) = in_r12;
  uVar2 = *(ushort *)(uVar5 + 0x18);
  *(undefined2 *)(DAT_ffff820f + 0x325e) = uVar7;
  uVar2 = *(ushort *)(uVar2 + 0x18);
  iVar6 = (int)DAT_ffff8f10;
  *(undefined4 *)(iVar6 + 0x1cd6) = in_lp;
  uVar5 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined2 *)(uVar5 + 0xb8) = in_r12;
  *(undefined4 *)(uVar5 + 0x18) = 0;
  uVar2 = *(ushort *)(uVar5 + 0x18);
  do {
  } while ((bool)((byte)(uVar8 >> 4) & 1) || iVar4 != 0);
  *(undefined2 *)(uVar2 + 0xb8) = in_r12;
  *(undefined1 *)(iVar3 + 0x3274) = in_r16;
  *(ushort *)(iVar6 + 0x326d) = uVar2;
  iVar1 = (int5)(int)*(char *)(param_1 + -0x7d85) + -0x21a1;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(short *)(*(char *)(param_1 + -0x7d85) + 0x327a) = (short)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006090e @ 0006090e (size 154) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006090e(int param_1)

{
  int5 iVar1;
  ushort uVar2;
  int in_r10;
  undefined2 in_r12;
  undefined1 in_r16;
  int in_r26;
  int iVar3;
  int in_ep;
  uint uVar4;
  undefined4 in_lp;
  uint in_PSW;
  
  uVar2 = *(ushort *)(in_ep + 0x18);
  *(undefined2 *)(uVar2 + 0xb8) = in_r12;
  uVar2 = *(ushort *)(uVar2 + 0x18);
  *(short *)(DAT_ffff820f + 0x325e) = (short)in_lp;
  uVar2 = *(ushort *)(uVar2 + 0x18);
  iVar3 = (int)DAT_ffff8f10;
  *(undefined4 *)(iVar3 + 0x1cd6) = in_lp;
  uVar4 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined2 *)(uVar4 + 0xb8) = in_r12;
  *(undefined4 *)(uVar4 + 0x18) = 0;
  uVar2 = *(ushort *)(uVar4 + 0x18);
  do {
  } while ((bool)((byte)(in_PSW >> 4) & 1) || in_r26 != 0);
  *(undefined2 *)(uVar2 + 0xb8) = in_r12;
  *(undefined1 *)(in_r10 + 0x3274) = in_r16;
  *(ushort *)(iVar3 + 0x326d) = uVar2;
  iVar1 = (int5)(int)*(char *)(param_1 + -0x7d85) + -0x21a1;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  *(short *)(*(char *)(param_1 + -0x7d85) + 0x327a) = (short)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060bfe @ 00060bfe (size 396) ====

/* WARNING: Control flow encountered unimplemented instructions */

void FUN_00060bfe(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int unaff_tp;
  undefined2 in_r13;
  uint uVar3;
  undefined1 in_r23;
  int iVar4;
  int in_ep;
  uint uVar5;
  uint in_lp;
  char local_1900;
  
  *(undefined2 *)(in_ep + 0x60) = *(undefined2 *)(in_ep + 0x46);
  *(undefined2 *)(in_ep + 0x86) = param_1;
  iVar4 = (int)DAT_00007c26;
  bVar1 = *(byte *)(*(int *)(*(int *)(*(ushort *)(in_ep + 0x18) + 0xf8) + 0xf8) + 0x7c);
  uVar5 = (uint)bVar1;
  *(ushort *)(iVar4 + 0x21a8) = (ushort)bVar1;
  *(undefined1 *)(uVar5 + 0x50) = in_r23;
  *(ushort *)(iVar4 + 0x21aa) = (ushort)bVar1;
  *(undefined1 *)(uVar5 + 0x50) = in_r23;
  uVar2 = *(undefined2 *)(uVar5 + 2);
  uVar3 = in_lp & 0xf17c;
  if (uVar3 < 0x80000000) {
    if ((int)uVar3 < -0x80000000) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *(int *)(uVar5 + 4) = (int)local_1900;
  uVar5 = (uint)*(ushort *)(*(ushort *)(*(int *)(*(int *)(uVar5 + 0xf8) + 0xf8) + 0x18) + 0x18);
  *(short *)(uVar5 + 0xc) = (short)uVar3;
  *(char *)(unaff_tp + 0x40) = (char)uVar2;
  *(undefined2 *)(uVar5 + 0x3a) = in_r13;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}


// ==== FUN_00060d8a @ 00060d8a (size 50) ====

void FUN_00060d8a(uint param_1)

{
  int in_r29;
  int in_ep;
  
                    /* WARNING: Could not recover jumptable at 0x00060dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00060dbc + *(short *)(&DAT_00060dbc + in_r29 * 2) * 2))
            (param_1 >> 0x1c,*(undefined2 *)(*(byte *)(*(int *)(in_ep + 0xf8) + 0x1f) + 0x80));
  return;
}


// ==== FUN_00060efe @ 00060efe (size 32) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060efe(int param_1,undefined4 param_2)

{
  int iVar1;
  int5 iVar2;
  int unaff_gp;
  uint in_r23;
  int in_ep;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(in_ep + 0x18);
  while( true ) {
    *(short *)(uVar3 + 0x60) = (short)param_2;
    iVar1 = unaff_gp + in_r23 * 2;
    unaff_gp = iVar1 + in_r23;
    if (iVar1 + in_r23 != 0) break;
    param_2 = *(undefined4 *)(uVar3 + 0xcc);
    *(uint *)(uVar3 + 0x5c) = *(ushort *)(uVar3 + 0x4a) & in_r23;
  }
  iVar2 = (int5)(int)uVar3 + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(int *)(*(char *)(param_1 + -0x7d85) + 0x21a0) = (int)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060f10 @ 00060f10 (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060f10(int param_1)

{
  int iVar1;
  int5 iVar2;
  int unaff_gp;
  uint in_r23;
  int in_ep;
  
  while( true ) {
    iVar1 = unaff_gp + in_r23 * 2;
    unaff_gp = iVar1 + in_r23;
    if (iVar1 + in_r23 != 0) break;
    *(uint *)(in_ep + 0x5c) = *(ushort *)(in_ep + 0x4a) & in_r23;
    *(short *)(in_ep + 0x60) = (short)*(undefined4 *)(in_ep + 0xcc);
  }
  iVar2 = (int5)in_ep + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(int *)(*(char *)(param_1 + -0x7d85) + 0x21a0) = (int)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00061968 @ 00061968 (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00061968(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00062bbc @ 00062bbc (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00062bbc(void)

{
  undefined4 in_r12;
  undefined2 in_r19;
  uint in_r27;
  int in_lp;
  
  *(undefined2 *)(in_lp + -0x1ae6) = in_r19;
  *(undefined4 *)(~in_r27 + 0xc4) = in_r12;
  *(undefined4 *)(~in_r27 + 0xb8) = in_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00062f8e @ 00062f8e (size 96) ====

/* WARNING: Instruction at (ram,0x00063072) overlaps instruction at (ram,0x00063070)
    */
/* WARNING: Removing unreachable block (ram,0x000630b4) */
/* WARNING: Removing unreachable block (ram,0x000630e0) */
/* WARNING: Removing unreachable block (ram,0x000630e8) */
/* WARNING: Removing unreachable block (ram,0x000630ee) */

void FUN_00062f8e(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int5 iVar2;
  int5 iVar3;
  int5 iVar4;
  int5 iVar5;
  int5 iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  undefined4 in_r12;
  undefined4 uVar10;
  undefined1 in_r16;
  uint in_r21;
  int in_r25;
  undefined4 uVar11;
  uint uVar12;
  undefined4 in_r27;
  int in_r28;
  uint uVar13;
  short sVar14;
  uint in_r29;
  int in_ep;
  uint uVar15;
  uint in_lp;
  uint in_PSW;
  
  *(undefined4 *)(in_ep + 0xc4) = in_r12;
  iVar9 = in_r28 + -9;
  uVar13 = in_PSW & 0xfffffff0;
  func_0x001f169c();
  *(uint *)(iVar9 + 0x32ba) = in_lp;
  uVar11 = *(undefined4 *)(in_ep + 0xf8);
  sVar14 = (short)in_r29;
  uVar10 = *(undefined4 *)(in_ep + 0xc0);
  iVar2 = (int5)(int)in_lp + -9;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  *(undefined1 *)(param_3 + 0x655f) = in_r16;
  uVar12 = (int)sVar14 * (int)(short)(sVar14 * (short)uVar11);
  *(undefined4 *)(in_ep + 0xc0) = uVar10;
  iVar3 = (int5)(int)(uint)iVar2 - (int5)(int)in_r21;
  if (iVar3 < 0x80000000) {
    if (iVar3 < -0x80000000) {
      iVar3 = -0x80000000;
    }
  }
  else {
    iVar3 = 0x7fffffff;
  }
  iVar4 = (int5)(int)uVar12 + -9;
  if (iVar4 < 0x80000000) {
    if (iVar4 < -0x80000000) {
      iVar4 = -0x80000000;
    }
  }
  else {
    iVar4 = 0x7fffffff;
  }
  *(undefined1 *)(param_2 + 0x655e) = in_r16;
  iVar5 = (int5)(int)(uint)iVar4 - (int5)(int)in_r21;
  if (iVar5 < 0x80000000) {
    if (iVar5 < -0x80000000) {
      iVar5 = -0x80000000;
    }
  }
  else {
    iVar5 = 0x7fffffff;
  }
  *(undefined4 *)(in_ep + 0xb8) = uVar10;
  iVar6 = (int5)(int)(uint)iVar5 + -9;
  if (iVar6 < 0x80000000) {
    if (iVar6 < -0x80000000) {
      iVar6 = -0x80000000;
    }
  }
  else {
    iVar6 = 0x7fffffff;
  }
  uVar15 = sVar14 * 0x6563;
  *(undefined4 *)(uVar15 + 0xb8) = uVar10;
  bVar8 = ((((((((bool)((byte)(uVar13 >> 4) & 1) || iVar9 != 9) || in_lp < 9) ||
              (uint)iVar2 < in_r21) || uVar12 < 9) || (uint)iVar3 < 9) || (uint)iVar4 < in_r21) ||
          (uint)iVar5 < 9) || (int)iVar6 != 0;
  uVar13 = (int)*(char *)(*(ushort *)(uVar15 + 0x80) - 0x7d85) - 9;
  *(uint *)(uVar15 + 0xc4) = *(uint *)(uVar15 + 0xb8) >> 0x17;
  do {
    iVar2 = (int5)(param_1 >> 0xd) - (int5)(int)uVar13;
    bVar1 = bVar8 || (uint)(param_1 >> 0xd) < uVar13;
    if (iVar2 < 0x80000000) {
      if (iVar2 < -0x80000000) {
        iVar2 = -0x80000000;
      }
    }
    else {
      iVar2 = 0x7fffffff;
    }
    uVar13 = (uint)iVar2;
    bVar8 = true;
  } while (bVar1);
  uVar10 = *(undefined4 *)(uVar15 + 0x74);
  *(undefined4 *)(uVar15 + 0xc4) = 0;
  iVar9 = *(int *)(uVar15 + 0x84);
  param_1 = param_1 >> 0x19;
  *(undefined4 *)(uVar15 + 0xa8) = 0;
  iVar2 = (int5)(int)uVar15 + -5;
  if (iVar2 < 0x80000000) {
    if (iVar2 < -0x80000000) {
      iVar2 = -0x80000000;
    }
  }
  else {
    iVar2 = 0x7fffffff;
  }
  iVar7 = (int)iVar2;
  do {
  } while (4 < uVar15 || CARRY4(in_r29,(uint)&stack0x00000000));
  do {
    *(undefined4 *)(iVar7 + 0x74) = uVar10;
    *(undefined4 *)(iVar7 + 0xc4) = 0;
    param_1 = param_1 >> 0xc;
    *(undefined4 *)(iVar7 + 0xa8) = 0;
    *(undefined4 *)(iVar7 + 0xc4) = 0;
    *(undefined4 *)(iVar7 + 0xc4) = 0;
    *(undefined4 *)(iVar7 + 0xc4) = 0;
    *(undefined4 *)(iVar7 + 0xc4) = 0;
    *(byte *)(in_r25 + -0x18f8) = *(byte *)(in_r25 + -0x18f8) | 4;
    *(undefined4 *)(iVar7 + 0x7c) = in_r27;
    *(char *)(iVar9 + 0x654c) = '\x05' - (char)param_1;
  } while( true );
}


// ==== FUN_00062fee @ 00062fee (size 284) ====

/* WARNING: Instruction at (ram,0x00063072) overlaps instruction at (ram,0x00063070)
    */
/* WARNING: Removing unreachable block (ram,0x000630b4) */
/* WARNING: Removing unreachable block (ram,0x000630e0) */
/* WARNING: Removing unreachable block (ram,0x000630e8) */
/* WARNING: Removing unreachable block (ram,0x000630ee) */

void FUN_00062fee(uint param_1,int param_2)

{
  int5 iVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint in_r12;
  undefined4 uVar7;
  int in_r25;
  int in_r26;
  undefined4 in_r27;
  uint uVar8;
  uint in_r29;
  uint in_ep;
  uint in_PSW;
  
  bVar4 = (bool)((byte)(in_PSW >> 4) & 1) || in_r26 != 0;
  uVar8 = (int)*(char *)(param_2 + -0x7d85) - 9;
  *(uint *)(in_ep + 0xc4) = in_r12 >> 0x17;
  do {
    iVar1 = (int5)(int)param_1 - (int5)(int)uVar8;
    bVar2 = bVar4 || param_1 < uVar8;
    if (iVar1 < 0x80000000) {
      if (iVar1 < -0x80000000) {
        iVar1 = -0x80000000;
      }
    }
    else {
      iVar1 = 0x7fffffff;
    }
    uVar8 = (uint)iVar1;
    bVar4 = true;
  } while (bVar2);
  uVar7 = *(undefined4 *)(in_ep + 0x74);
  *(undefined4 *)(in_ep + 0xc4) = 0;
  iVar6 = *(int *)(in_ep + 0x84);
  iVar5 = (int)param_1 >> 0xc;
  *(undefined4 *)(in_ep + 0xa8) = 0;
  iVar1 = (int5)(int)in_ep + -5;
  if (iVar1 < 0x80000000) {
    if (iVar1 < -0x80000000) {
      iVar1 = -0x80000000;
    }
  }
  else {
    iVar1 = 0x7fffffff;
  }
  iVar3 = (int)iVar1;
  do {
  } while (4 < in_ep || CARRY4(in_r29,(uint)&stack0x00000000));
  do {
    *(undefined4 *)(iVar3 + 0x74) = uVar7;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    iVar5 = iVar5 >> 0xc;
    *(undefined4 *)(iVar3 + 0xa8) = 0;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(undefined4 *)(iVar3 + 0xc4) = 0;
    *(byte *)(in_r25 + -0x18f8) = *(byte *)(in_r25 + -0x18f8) | 4;
    *(undefined4 *)(iVar3 + 0x7c) = in_r27;
    *(char *)(iVar6 + 0x654c) = '\x05' - (char)iVar5;
  } while( true );
}


// ==== FUN_00063362 @ 00063362 (size 86) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0006333a) */

void FUN_00063362(void)

{
  undefined2 *in_r11;
  undefined2 in_r27;
  
  *in_r11 = in_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000637be @ 000637be (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

void FUN_000637be(int param_1)

{
  undefined1 in_r16;
  int in_ep;
  
  *(undefined1 *)(param_1 + 0x12f2) = in_r16;
  if (in_ep >= 0 || in_ep < 0 == in_ep + -5 < 0) {
    *(undefined1 *)(param_1 + 0x2646) = in_r16;
    *(undefined1 *)(param_1 + 0x1323) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}


// ==== FUN_00063c08 @ 00063c08 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00063c08(int param_1)

{
  ushort uVar1;
  undefined2 unaff_tp;
  undefined1 uVar2;
  uint in_r17;
  int in_r19;
  uint in_r21;
  uint in_r24;
  int in_ep;
  undefined2 in_lp;
  
  uVar1 = *(ushort *)(in_ep + 2);
  *(undefined2 *)(DAT_ffffa204 + 0x1318) = in_lp;
  uVar2 = (undefined1)(in_r17 / 4);
  *(undefined1 *)(param_1 + 0x1320) = uVar2;
  *(undefined2 *)(in_ep + 0x5e) = *(undefined2 *)(in_ep + 0x5e);
  *(ushort *)(in_ep + 2) = uVar1;
  if ((in_r21 ^ in_r24) == (uint)uVar1 && in_r19 == 0) {
    *(undefined1 *)(param_1 + 0x12ef) = uVar2;
    *(undefined1 *)(param_1 + 0x12f2) = uVar2;
    *(undefined1 *)(param_1 + 0x2646) = uVar2;
    *(undefined1 *)(param_1 + 0x12f2) = uVar2;
    *(undefined2 *)(in_ep + 0xe8) = unaff_tp;
    *(undefined1 *)(param_1 + 0x4736) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x4736) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00063c2c @ 00063c2c (size 156) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00063c2c(int param_1,int param_2)

{
  undefined2 unaff_tp;
  undefined1 in_r16;
  int in_r19;
  int in_r21;
  int in_r28;
  int in_ep;
  undefined2 in_lp;
  
  *(undefined2 *)(in_r28 + 0x1318) = in_lp;
  *(undefined1 *)(param_1 + 0x1320) = in_r16;
  *(undefined2 *)(in_ep + 0x5e) = *(undefined2 *)(in_ep + 0x5e);
  *(short *)(in_ep + 2) = (short)param_2;
  if (in_r21 == param_2 && in_r19 == 0) {
    *(undefined1 *)(param_1 + 0x12ef) = in_r16;
    *(undefined1 *)(param_1 + 0x12f2) = in_r16;
    *(undefined1 *)(param_1 + 0x2646) = in_r16;
    *(undefined1 *)(param_1 + 0x12f2) = in_r16;
    *(undefined2 *)(in_ep + 0xe8) = unaff_tp;
    *(undefined1 *)(param_1 + 0x4736) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x4736) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00063d34 @ 00063d34 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00063d34(int param_1)

{
  undefined2 unaff_tp;
  undefined1 in_r16;
  int in_ep;
  
  *(undefined1 *)(param_1 + 0x12f2) = in_r16;
  *(undefined2 *)(in_ep + 0xe8) = unaff_tp;
  *(undefined1 *)(param_1 + 0x4736) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00064b9c @ 00064b9c (size 106) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00064b9c(short param_1)

{
  ushort uVar1;
  int unaff_tp;
  int in_r10;
  int in_r15;
  undefined1 in_r16;
  uint in_r20;
  undefined4 in_r21;
  uint in_r28;
  int in_r29;
  int in_ep;
  int in_lp;
  uint uVar2;
  
  uVar1 = *(ushort *)(in_ep + 4);
  if (in_lp < 0 == in_r29 < 0 || in_r29 < 0 != in_lp - in_r29 < 0) {
    if (-1 < in_lp - in_r29) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(in_r10 + 0x25e4) = in_r16;
    *(undefined1 *)(uVar1 + 0x131d) = in_r16;
    ((uint *)(in_r28 | in_r20))[8] = 0xfffffff0;
    *(uint *)(in_r28 | in_r20) = (uint)uVar1;
  }
  else {
    uVar2 = (uint)(unaff_tp < 0 != in_r15 < 0 && in_r15 < 0 == unaff_tp - in_r15 < 0) << 2;
    FUN_000532b0(param_1 * -3);
    if (!(bool)((byte)(uVar2 >> 2) & 1)) {
      *(undefined4 *)(in_ep + 0xc) = in_r21;
      (*(code *)0x0)(*(undefined4 *)(in_ep + 4));
      return;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00064df0 @ 00064df0 (size 298) ====

/* WARNING: Removing unreachable block (ram,0x00064e92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064df0(int param_1,int param_2)

{
  bool bVar1;
  int5 iVar2;
  int5 iVar3;
  short sVar4;
  byte bVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined1 uVar8;
  char cVar9;
  int in_r1;
  int iVar10;
  uint unaff_gp;
  int in_r10;
  int in_r12;
  int in_r13;
  undefined1 in_r16;
  uint uVar11;
  uint in_r20;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar12;
  int iVar13;
  uint in_ep;
  
  do {
    iVar13 = (int)DAT_ffffe0fe;
    uVar6 = *(ushort *)(in_ep + 0x88);
    sVar4 = *(short *)(in_ep + 0x18);
    bVar5 = *(byte *)(in_ep + 0x1e);
    *(undefined1 *)(uVar6 + 0x2646) = in_r16;
    uVar12 = (int)(short)unaff_gp * (int)sVar4;
    iVar10 = (int)(char)bVar5;
    if (-1 < iVar13 || (int)(iVar13 - (uint)bVar5) < 0) {
      *(undefined1 *)(((uint)&stack0x00000000 | 0xa20d) + 0x25e4) = in_r16;
      *(undefined1 *)(in_r12 + 0x131e) = in_r16;
      *(undefined1 *)(in_r10 + 0x2646) = in_r16;
      *(undefined1 *)(uVar6 + 0x131d) = in_r16;
      uVar12 = (uint)_DAT_0000002c;
      do {
        uVar12 = uVar12 | in_r20;
        _DAT_fffffff6 = (short)in_r1 + -0x76cb;
        while( true ) {
          cVar9 = DAT_00005ff1;
          iVar3 = (int5)(int)uVar12 - (int5)param_1;
          if (iVar3 < 0x80000000) {
            if (iVar3 < -0x80000000) {
              iVar3 = -0x80000000;
            }
          }
          else {
            iVar3 = 0x7fffffff;
          }
          uVar12 = (uint)iVar3;
          uVar7 = Ram0000000e;
          param_1 = param_1 + in_r10;
          iVar13 = (int)DAT_00005ff1;
          *(undefined1 *)(param_2 + 0x471e) = 0xff;
          _DAT_00000038 = (short)cVar9;
          iVar2 = -(int5)iVar13;
          if (iVar2 < 0x80000000) {
            if (iVar2 < -0x80000000) {
              iVar2 = -0x80000000;
            }
          }
          else {
            iVar2 = 0x7fffffff;
          }
          uVar8 = (undefined1)in_r20;
          __nop();
          if (iVar13 < 0 && iVar13 < 0 == -iVar13 < 0) break;
          iVar13 = (int)iVar2 - iVar10;
          bVar1 = iVar10 < 0;
          uVar12 = (int)(short)param_1 * (int)(short)iVar3;
          iVar10 = (int)(char)iVar10;
          if ((int)iVar2 < 0 == bVar1 || bVar1 != iVar13 < 0) {
            DAT_ffffffef = *(char *)(in_r1 + -0xf450);
            iVar10 = (int)DAT_ffffffef;
            *(undefined1 *)(in_r1 + -0x63d9) = uVar8;
            *(undefined1 *)(in_r1 + -0x63a8) = uVar8;
            DAT_0000000b = 0;
            uVar6 = Ram00000007;
            uVar7 = *(undefined2 *)((undefined1 *)(uint)uVar6 + 4);
            *(undefined1 *)(in_r1 + -0x5085) = uVar8;
            iVar3 = (int5)(int)unaff_gp - (int5)(iVar10 + -0xb);
            if (iVar3 < 0x80000000) {
              if (iVar3 < -0x80000000) {
                iVar3 = 0;
              }
            }
            else {
              iVar3 = 0x7fffffff;
            }
            *(undefined1 *)(uint)uVar6 = (char)iVar3;
                    /* WARNING: Could not recover jumptable at 0x00064ed2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(uVar7);
            return;
          }
        }
      } while( true );
    }
    while( true ) {
      uVar11 = (uint)*(byte *)(in_ep + 6);
      in_r10 = func_0xffe92e5a();
      in_r20 = 5;
      in_r16 = 5;
      __nop();
      if (-1 < (int)uVar11 || (int)(&DAT_ffff8f05 + uVar11) < 0) break;
      iVar3 = (int5)(int)uVar12 - (int5)(int)unaff_gp;
      bVar1 = uVar12 < unaff_gp;
      if (iVar3 < 0x80000000) {
        if (iVar3 < -0x80000000) {
          iVar3 = -0x80000000;
        }
      }
      else {
        iVar3 = 0x7fffffff;
      }
      uVar12 = (uint)iVar3;
      if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00064d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00064d76 + *(short *)(&DAT_00064d76 + in_r13 * 2) * 2))();
        return;
      }
      param_1 = param_1 + in_r10;
      *(undefined1 *)(in_r10 + 0x25e4) = 0xff;
      in_ep = (uint)*(ushort *)(in_ep + 0x18);
    }
  } while( true );
}


// ==== FUN_00065600 @ 00065600 (size 40) ====

void FUN_00065600(int param_1,int param_2,uint param_3)

{
  int in_r11;
  undefined1 in_r16;
  undefined4 in_r18;
  int in_r25;
  undefined4 in_r27;
  int in_ep;
  
  __nop();
  *(undefined4 *)(in_r11 + -4) = in_r27;
  *(undefined1 *)(param_2 + 0x2646) = in_r16;
  *(undefined1 *)(param_2 + 0x12f2) = in_r16;
  *(uint *)(in_r25 + -0x1dac) = ~param_3;
  *(undefined1 *)(in_ep + 0x12) = 0;
  *(undefined4 *)(in_ep + 0xf4) = in_r18;
  *(undefined2 *)(in_ep + 0xe4) = 0;
  *(undefined4 *)(in_ep + 0xf8) = in_r18;
  *(undefined1 *)(in_ep + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0006564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006564e + *(short *)(&DAT_0006564e + param_1 * 2) * 2))();
  return;
}


// ==== FUN_00065628 @ 00065628 (size 38) ====

void FUN_00065628(int param_1,uint param_2)

{
  undefined4 in_r18;
  int in_r25;
  int in_ep;
  
  *(uint *)(in_r25 + -0x1dac) = ~param_2;
  *(undefined1 *)(in_ep + 0x12) = 0;
  *(undefined4 *)(in_ep + 0xf4) = in_r18;
  *(undefined2 *)(in_ep + 0xe4) = 0;
  *(undefined4 *)(in_ep + 0xf8) = in_r18;
  *(undefined1 *)(in_ep + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0006564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006564e + *(short *)(&DAT_0006564e + param_1 * 2) * 2))();
  return;
}


// ==== FUN_00065e7a @ 00065e7a (size 24) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00065e7a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00066116 @ 00066116 (size 34) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00066116(int param_1)

{
  undefined1 unaff_tp;
  
  FUN_0006e00a();
  *(undefined1 *)(param_1 + 0x26f0) = unaff_tp;
  *(undefined1 *)(param_1 + -0x71d8) = unaff_tp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00066150 @ 00066150 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00066150(int param_1)

{
  undefined1 unaff_tp;
  
  *(undefined1 *)(param_1 + 0x26f0) = unaff_tp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00066560 @ 00066560 (size 240) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000665de) */

void FUN_00066560(undefined2 param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  uint in_r14;
  undefined1 in_r18;
  uint in_r21;
  uint uVar4;
  int in_ep;
  uint uVar5;
  uint in_PSW;
  
  uVar3 = *(undefined1 *)(in_ep + 0x76);
  while( true ) {
    *(uint *)(in_ep + 0x20) = (uint)*(byte *)(in_ep + 0x50);
    cVar2 = *(char *)(*(byte *)(in_ep + 0x50) - 0x5901);
    __nop();
    if (!(bool)((byte)(in_PSW >> 4) & 1)) break;
    *(undefined2 *)(in_ep + 0xc4) = param_1;
    uVar3 = *(undefined1 *)(in_ep + 0x77);
    in_PSW = in_PSW & 0xfffffff0;
    *(undefined1 *)(param_2 + 0x1376) = uVar3;
  }
  *(undefined2 *)(in_ep + 0xc4) = param_1;
  uVar4 = in_r21 | in_r14;
  uVar5 = (uint)*(ushort *)(in_ep + 0x18);
  *(undefined1 *)(uVar5 + 0x16) = uVar3;
  *(undefined1 *)(uVar5 + 0x17) = uVar3;
  *(uint *)(uVar5 + 0x10) = uVar4;
  uVar1 = *(ushort *)(uVar5 + 0x42);
  *(char *)(*(ushort *)(uVar5 + 0x88) + 0x1395) = cVar2;
  *(char *)(param_2 + 0x2721) = cVar2;
  *(char *)(uVar1 + 0x25e4) = cVar2;
  *(int *)((uVar5 | uVar4) + 0x24) = (int)cVar2;
  uVar1 = *(ushort *)(*(ushort *)((uVar5 | uVar4) + 0x18) + 0x42);
  *(char *)(((uVar4 | (uint)&stack0x00000000) & 0x7a96) + 0x26f0) = cVar2;
  *(undefined1 *)(uVar1 + 0x1376) = in_r18;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00066bbc @ 00066bbc (size 42) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00066bbc(undefined4 param_1,int param_2)

{
  int in_r10;
  undefined1 in_r16;
  
  *(undefined1 *)(in_r10 + 10000) = in_r16;
  *(undefined4 *)(param_2 + -0x604) = param_1;
  *(undefined1 *)(param_2 + 0x1376) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006731a @ 0006731a (size 6776) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006731a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00068d96 @ 00068d96 (size 2477) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00068d96(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00069746 @ 00069746 (size 5364) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00069746(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006ac3a @ 0006ac3a (size 8383) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006ac3a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006ccfa @ 0006ccfa (size 1908) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006ccfa(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006d46e @ 0006d46e (size 764) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006d46e(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006d76a @ 0006d76a (size 1011) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006d76a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006db62 @ 0006db62 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006db62(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006db86 @ 0006db86 (size 1155) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006db86(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e00a @ 0006e00a (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e00a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e046 @ 0006e046 (size 1876) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e046(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e79a @ 0006e79a (size 2336) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e79a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f0be @ 0006f0be (size 92) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f0be(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f11a @ 0006f11a (size 316) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f11a(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f256 @ 0006f256 (size 1888) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f256(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f9b6 @ 0006f9b6 (size 1224) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f9b6(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006fe7e @ 0006fe7e (size 860) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006fe7e(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000701dc @ 000701dc (size 212) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000701dc(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000702b0 @ 000702b0 (size 7924) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000702b0(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000721a8 @ 000721a8 (size 1964) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000721a8(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00072954 @ 00072954 (size 1640) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00072954(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00072fbc @ 00072fbc (size 2007) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00072fbc(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00073794 @ 00073794 (size 2812) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00073794(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00074290 @ 00074290 (size 248) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00074290(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00074388 @ 00074388 (size 2151) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00074388(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00074bf0 @ 00074bf0 (size 1346) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00074bf0(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00075134 @ 00075134 (size 1924) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00075134(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000758bc @ 000758bc (size 3768) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000758bc(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00076774 @ 00076774 (size 10965) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00076774(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007924c @ 0007924c (size 14110) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007924c(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007c96c @ 0007c96c (size 1390) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007c96c(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007cedc @ 0007cedc (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007cedc(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007cf0c @ 0007cf0c (size 8735) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007cf0c(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f12c @ 0007f12c (size 348) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f12c(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f288 @ 0007f288 (size 188) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f288(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f344 @ 0007f344 (size 512) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f344(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f544 @ 0007f544 (size 2747) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f544(void)

{
  __nop();
  __nop();
  __nop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


