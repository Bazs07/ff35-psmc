// ==== FUN_0001ce70 @ 0001ce70 (size 184) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ce70(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  uint in_r16;
  int unaff_r22;
  undefined2 unaff_r27;
  int unaff_ep;
  int unaff_lp;
  uint in_PSW;
  ushort *unaff_CTBP;
  
  if ((((byte)(in_PSW >> 2) & 1) != 1) && (((byte)(in_PSW >> 2) & 1) != 1)) {
    if (((byte)(in_PSW >> 2) & 1) == 1) goto LAB_0001cf0c;
    *(undefined4 *)(unaff_ep + 0x28) = *(undefined4 *)(unaff_ep + 0x20);
    uVar2 = (uint)*(char *)(unaff_ep + 0x13);
    *(undefined4 *)(unaff_ep + 8) = 0;
    *(undefined4 *)(unaff_ep + 8) = 0;
    (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))(param_1,param_2,~in_r16);
    uVar3 = (undefined1)param_1;
    (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
    (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
    (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
    *(undefined1 *)(unaff_ep + 0x4e) = uVar3;
    *(char *)(unaff_ep + 0x72) = (char)uVar2;
    *(uint *)(unaff_ep + 0xa8) = uVar2;
    *(uint *)(unaff_ep + 0xa8) = uVar2;
    *(int *)(unaff_ep + 0xc4) = (int)*(char *)(unaff_ep + 0x75);
    *(int *)(unaff_ep + 0xc4) = (int)*(char *)(unaff_ep + 0x75);
    pbVar1 = (byte *)((uVar2 & 0x16c2) + 0x37c2);
    *pbVar1 = *pbVar1 | 0x40;
    __saturate(unaff_lp + -0x667f);
    *(undefined1 *)(unaff_r22 + 0x5958) = *(undefined1 *)(unaff_ep + 0x51);
  }
  __saturate(param_4 + -0xe);
LAB_0001cf0c:
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[2]))();
  *(undefined2 *)(unaff_ep + 0x2c) = unaff_r27;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001cf5c @ 0001cf5c (size 38) ====

uint FUN_0001cf5c(undefined4 param_1,int param_2)

{
  int in_r14;
  int unaff_ep;
  
  __saturate(param_2 + 0xc);
  return (in_r14 + 0xa5e0000U) / (uint)(int)*(short *)(unaff_ep + 0x6c);
}


// ==== FUN_0001dbf8 @ 0001dbf8 (size 108) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001e15a) overlaps instruction at (ram,0x0001e158)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001e1f6) */
/* WARNING: Removing unreachable block (ram,0x0001e222) */
/* WARNING: Removing unreachable block (ram,0x0001e1f4) */
/* WARNING: Removing unreachable block (ram,0x0001da1e) */
/* WARNING: Removing unreachable block (ram,0x0001dec4) */
/* WARNING: Removing unreachable block (ram,0x0001decc) */
/* WARNING: Removing unreachable block (ram,0x0001ded8) */
/* WARNING: Removing unreachable block (ram,0x0001dee0) */
/* WARNING: Removing unreachable block (ram,0x0001dee4) */
/* WARNING: Removing unreachable block (ram,0x0001dfde) */
/* WARNING: Removing unreachable block (ram,0x0001dfe2) */
/* WARNING: Removing unreachable block (ram,0x0001dfe4) */
/* WARNING: Removing unreachable block (ram,0x0001dfe8) */
/* WARNING: Removing unreachable block (ram,0x0001dff8) */
/* WARNING: Removing unreachable block (ram,0x0001dffa) */
/* WARNING: Removing unreachable block (ram,0x0001dffc) */
/* WARNING: Removing unreachable block (ram,0x0001e0bc) */
/* WARNING: Removing unreachable block (ram,0x0001e03e) */
/* WARNING: Removing unreachable block (ram,0x0001e042) */
/* WARNING: Removing unreachable block (ram,0x0001e0c6) */
/* WARNING: Removing unreachable block (ram,0x0001e0f2) */
/* WARNING: Removing unreachable block (ram,0x0001e0f4) */
/* WARNING: Removing unreachable block (ram,0x0001e0f6) */
/* WARNING: Removing unreachable block (ram,0x0001e0fa) */
/* WARNING: Removing unreachable block (ram,0x0001e0fe) */
/* WARNING: Removing unreachable block (ram,0x0001e102) */
/* WARNING: Removing unreachable block (ram,0x0001e10c) */
/* WARNING: Removing unreachable block (ram,0x0001e152) */
/* WARNING: Removing unreachable block (ram,0x0001e144) */
/* WARNING: Removing unreachable block (ram,0x0001e15a) */
/* WARNING: Removing unreachable block (ram,0x0001e146) */
/* WARNING: Removing unreachable block (ram,0x0001e148) */
/* WARNING: Removing unreachable block (ram,0x0001e15e) */
/* WARNING: Removing unreachable block (ram,0x0001e162) */
/* WARNING: Removing unreachable block (ram,0x0001e19a) */
/* WARNING: Removing unreachable block (ram,0x0001e19c) */
/* WARNING: Removing unreachable block (ram,0x0001e1bc) */
/* WARNING: Removing unreachable block (ram,0x0001e1c4) */
/* WARNING: Removing unreachable block (ram,0x0001e1f2) */
/* WARNING: Removing unreachable block (ram,0x0001e228) */
/* WARNING: Removing unreachable block (ram,0x0001e230) */
/* WARNING: Removing unreachable block (ram,0x0001e252) */
/* WARNING: Removing unreachable block (ram,0x0001e254) */
/* WARNING: Removing unreachable block (ram,0x0001e256) */
/* WARNING: Removing unreachable block (ram,0x0001e292) */
/* WARNING: Removing unreachable block (ram,0x0001e298) */
/* WARNING: Removing unreachable block (ram,0x0001e2a0) */
/* WARNING: Removing unreachable block (ram,0x0001e30e) */
/* WARNING: Removing unreachable block (ram,0x0001e2be) */
/* WARNING: Removing unreachable block (ram,0x0001e314) */
/* WARNING: Removing unreachable block (ram,0x0001e31c) */
/* WARNING: Removing unreachable block (ram,0x0001e340) */
/* WARNING: Removing unreachable block (ram,0x0001e342) */
/* WARNING: Removing unreachable block (ram,0x0001e344) */
/* WARNING: Removing unreachable block (ram,0x0001e346) */
/* WARNING: Removing unreachable block (ram,0x0001e3a0) */
/* WARNING: Removing unreachable block (ram,0x0001e3a6) */
/* WARNING: Removing unreachable block (ram,0x0001e3aa) */
/* WARNING: Removing unreachable block (ram,0x0001e3b0) */
/* WARNING: Removing unreachable block (ram,0x0001e472) */
/* WARNING: Removing unreachable block (ram,0x0001e404) */
/* WARNING: Removing unreachable block (ram,0x0001e476) */
/* WARNING: Removing unreachable block (ram,0x0001e406) */
/* WARNING: Removing unreachable block (ram,0x0001e47a) */
/* WARNING: Removing unreachable block (ram,0x0001e2c0) */
/* WARNING: Removing unreachable block (ram,0x0001e2c2) */
/* WARNING: Removing unreachable block (ram,0x0001d9d8) */
/* WARNING: Removing unreachable block (ram,0x0001dab0) */
/* WARNING: Removing unreachable block (ram,0x0001da24) */
/* WARNING: Removing unreachable block (ram,0x0001da56) */
/* WARNING: Removing unreachable block (ram,0x0001da5a) */
/* WARNING: Removing unreachable block (ram,0x0001da98) */
/* WARNING: Removing unreachable block (ram,0x0001dab4) */
/* WARNING: Removing unreachable block (ram,0x0001e408) */
/* WARNING: Removing unreachable block (ram,0x0001e47e) */
/* WARNING: Removing unreachable block (ram,0x0001deb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dbf8(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int in_r1;
  undefined2 uVar2;
  uint in_r2;
  int unaff_gp;
  uint unaff_tp;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  short extraout_r11;
  int in_r12;
  undefined4 in_r13;
  uint in_r14;
  code *in_r16;
  int in_r18;
  int in_r19;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  int unaff_r23;
  int unaff_r24;
  undefined1 *puVar6;
  uint uVar7;
  int unaff_r25;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  int unaff_r29;
  int unaff_ep;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int unaff_lp;
  undefined4 uVar11;
  ushort *unaff_CTBP;
  undefined8 uVar12;
  
  uVar12 = FUN_0001dbf8();
  __saturate(unaff_r28 - unaff_r24);
  __saturate(unaff_lp - (unaff_r28 - unaff_r24));
  iVar8 = in_r12 - (param_3 + unaff_ep);
  __saturate((int)in_r16 - (uint)*(ushort *)(in_r16 + (0x10 - iVar8)));
  pbVar9 = (byte *)(int)*(short *)(*(short *)(in_r16 + (0x18 - iVar8)) + 0x1a);
  *(int *)pbVar9 = unaff_lp;
  __saturate((uint)*(ushort *)(pbVar9 + 0x1c) - unaff_r20);
  *(int *)(pbVar9 + 4) = unaff_lp;
  iVar8 = (int)(short)((uint)*(ushort *)(pbVar9 + 0x1c) - unaff_r20) *
          (int)(short)((ulonglong)uVar12 >> 0x20) - unaff_r23;
  __saturate(iVar8);
  iVar8 = iVar8 - unaff_r26;
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0xc) = *(undefined4 *)(pbVar9 + 8);
  iVar8 = in_r1 - (int)(short)iVar8 * (int)(short)unaff_r28;
  __saturate(iVar8);
  iVar8 = in_r19 - iVar8;
  __saturate(iVar8);
  iVar8 = unaff_gp - iVar8;
  __saturate(iVar8);
  iVar8 = unaff_r22 - iVar8;
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0x10) = *(undefined4 *)(pbVar9 + 0x10);
  iVar8 = param_2 - iVar8;
  __saturate(iVar8);
  iVar8 = unaff_r25 - iVar8;
  __saturate(iVar8);
  iVar8 = (int)((ulonglong)uVar12 >> 0x20) - iVar8;
  __saturate(iVar8);
  iVar8 = iVar8 + in_r12;
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0x14) = *(undefined4 *)(pbVar9 + 0x14);
  iVar8 = iVar8 - unaff_r29;
  __saturate(iVar8);
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0x18) = *(undefined4 *)(pbVar9 + 0x18);
  puVar6 = &stack0x00000000 + iVar8;
  __saturate(puVar6);
  puVar6 = puVar6 + param_1;
  __saturate(puVar6);
  *(undefined4 *)(pbVar9 + 0x1c) = *(undefined4 *)(pbVar9 + 0x1c);
  puVar6 = puVar6 + param_4;
  __saturate(puVar6);
  __saturate(pbVar9 + (int)puVar6);
  *(undefined4 *)(pbVar9 + 0x20) = *(undefined4 *)(pbVar9 + 0x20);
  iVar8 = (int)(short)((short)(pbVar9 + (int)puVar6) * (short)param_2 * (short)in_r13) *
          (int)(short)in_r19 + in_r18;
  __saturate(iVar8);
  iVar8 = iVar8 + unaff_r21;
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0x24) = *(undefined4 *)(pbVar9 + 0x24);
  iVar8 = iVar8 * 2;
  __saturate(iVar8);
  iVar8 = (int)(short)iVar8 * (int)(short)in_r1 + unaff_r27;
  __saturate(iVar8);
  *(undefined4 *)(pbVar9 + 0x28) = *(undefined4 *)(pbVar9 + 0x28);
  uVar11 = *(undefined4 *)(pbVar9 + 0x40);
  *(undefined4 *)(pbVar9 + 0x40) = uVar11;
  uVar7 = (int)(short)((short)iVar8 * (short)unaff_gp * (short)in_r16 * (short)unaff_r22 *
                      (short)unaff_r25) * (int)(short)uVar11 | in_r2;
  do {
  } while (0 < (int)uVar7);
  *(undefined4 *)(pbVar9 + 0x44) = *(undefined4 *)(pbVar9 + 0x44);
  in_r16[0x50b0] = SUB21(*(undefined2 *)pbVar9,0);
  *(undefined2 *)(pbVar9 + 0xa0) = *(undefined2 *)(pbVar9 + 0x40);
  func_0x001235de();
  uVar2 = (undefined2)in_r1;
  pbVar9[0x30] = *pbVar9;
  if (!SCARRY4((int)extraout_r11 * (int)(short)in_r16,-0x10)) {
    __saturate(in_r16 + -0x5f20);
    in_r16[0x6080] = (code)((byte)in_r16[0x6080] ^ 8);
    pbVar9[0x70] = pbVar9[0x40];
    *(short *)(pbVar9 + 0x40) = (short)(char)pbVar9[0x40];
    _DAT_00006810 = 0x66b0;
    __saturate(in_r13);
    __saturate(in_r13);
    *pbVar9 = 0;
    *(undefined2 *)(pbVar9 + 0xc0) = *(undefined2 *)(pbVar9 + 0x60);
    func_0xffe24e34();
    pbVar9[0x40] = pbVar9[0x10];
    bVar1 = -(char)((int)in_r16 >> 0x1f);
    *(undefined2 *)(pbVar9 + 0xe0) = *(undefined2 *)(pbVar9 + 0x40);
    if (bVar1 != 0 && bVar1 == (byte)((uint)-(int)in_r16 >> 0x1f)) goto code_r0x0001deee;
    in_r16 = (code *)(*(uint *)(pbVar9 + 0x20) ^ 0x8780);
    *(short *)pbVar9 = (short)(char)pbVar9[0x60];
    __saturate(in_r18);
    __saturate(unaff_r20);
    __saturate(0x5880);
    __saturate(unaff_r21);
  }
  __saturate(-unaff_r22);
  pbVar9[0x60] = (byte)-unaff_r22;
  pbVar9[0x40] = (byte)-(ushort)*pbVar9;
  *(ushort *)(pbVar9 + 0xc0) = -(ushort)*pbVar9;
  uVar7 = (uVar7 | param_3 | unaff_tp | (uint)uVar12 | in_r14) / 0;
  pbVar9[0x20] = (byte)uVar7;
  *(short *)(pbVar9 + 0x80) = (short)uVar7;
  iVar8 = (int)DAT_ffffc820;
  *pbVar9 = 0;
  pbVar9[0x40] = 0;
  pbVar9[0x41] = 0;
  *pbVar9 = pbVar9[0x70];
  pbVar9[0xf0] = 0;
  pbVar9[0xf1] = 0;
  *(undefined2 *)(pbVar9 + 0x30) = uVar2;
  *(byte *)(iVar8 + 22000) = *(byte *)(iVar8 + 22000) ^ 0x80;
code_r0x0001deee:
  pcVar4 = in_r16 + 0x42680000;
  pcVar3 = (code *)((uint)in_r16 ^ 13000);
  DAT_00001b58 = 0;
  *(short *)(in_r16 + 5000) = (short)in_r2;
  func_0xffe1eac8();
  in_r16[1000] = (code)((byte)in_r16[1000] | 1);
  puVar10 = (undefined4 *)(uint)*(byte *)(int)*(short *)(pbVar9 + 0x90);
  __saturate((int)in_r16 - (int)*(short *)(puVar10 + 0x3c));
  *(short *)(puVar10 + 0x14) = (short)unaff_r28;
  puVar10[0xc] = in_r2;
  *(short *)(puVar10 + 0x3b) = (short)in_r2;
  pcVar5 = (code *)(*pcVar3)();
  uVar2 = (undefined2)in_r2;
  *(undefined2 *)(puVar10 + 0x3c) = uVar2;
  (*pcVar5)();
  *(undefined2 *)((int)puVar10 + 0xf2) = uVar2;
  *(undefined2 *)(puVar10 + 0x3d) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x24]))();
  *(undefined2 *)((int)puVar10 + 0xf6) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x14]))();
  *(undefined2 *)(puVar10 + 0x3e) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x1c]))();
  *(undefined2 *)((int)puVar10 + 0xfa) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x2a]))();
  *(undefined2 *)(puVar10 + 0x3f) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x30]))();
  *(undefined2 *)((int)puVar10 + 0xfe) = uVar2;
  *(undefined1 *)((int)puVar10 + 0x72) = 0;
  *puVar10 = *puVar10;
  uVar11 = puVar10[1];
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  puVar10[1] = uVar11;
  (*in_r16)();
  puVar10[2] = puVar10[2];
  puVar10[3] = puVar10[3];
  uVar11 = puVar10[4];
  (*pcVar4)();
  *(undefined1 *)(puVar10 + 6) = 0;
  puVar10[4] = uVar11;
  uVar11 = puVar10[5];
  (*pcVar3)();
  puVar10[5] = uVar11;
  puVar10[6] = puVar10[6];
  *(undefined2 *)(puVar10 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001dfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0001dfc2 + *(short *)(&DAT_0001dfc2 + unaff_r28 * 2) * 2))();
  return;
}


// ==== FUN_0001dc64 @ 0001dc64 (size 180) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001e15a) overlaps instruction at (ram,0x0001e158)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001e1f6) */
/* WARNING: Removing unreachable block (ram,0x0001e222) */
/* WARNING: Removing unreachable block (ram,0x0001e1f4) */
/* WARNING: Removing unreachable block (ram,0x0001da1e) */
/* WARNING: Removing unreachable block (ram,0x0001dec4) */
/* WARNING: Removing unreachable block (ram,0x0001decc) */
/* WARNING: Removing unreachable block (ram,0x0001ded8) */
/* WARNING: Removing unreachable block (ram,0x0001dee0) */
/* WARNING: Removing unreachable block (ram,0x0001dee4) */
/* WARNING: Removing unreachable block (ram,0x0001dfde) */
/* WARNING: Removing unreachable block (ram,0x0001dfe2) */
/* WARNING: Removing unreachable block (ram,0x0001dfe4) */
/* WARNING: Removing unreachable block (ram,0x0001dfe8) */
/* WARNING: Removing unreachable block (ram,0x0001dff8) */
/* WARNING: Removing unreachable block (ram,0x0001dffa) */
/* WARNING: Removing unreachable block (ram,0x0001dffc) */
/* WARNING: Removing unreachable block (ram,0x0001e0bc) */
/* WARNING: Removing unreachable block (ram,0x0001e03e) */
/* WARNING: Removing unreachable block (ram,0x0001e042) */
/* WARNING: Removing unreachable block (ram,0x0001e0c6) */
/* WARNING: Removing unreachable block (ram,0x0001e0f2) */
/* WARNING: Removing unreachable block (ram,0x0001e0f4) */
/* WARNING: Removing unreachable block (ram,0x0001e0f6) */
/* WARNING: Removing unreachable block (ram,0x0001e0fa) */
/* WARNING: Removing unreachable block (ram,0x0001e0fe) */
/* WARNING: Removing unreachable block (ram,0x0001e102) */
/* WARNING: Removing unreachable block (ram,0x0001e10c) */
/* WARNING: Removing unreachable block (ram,0x0001e152) */
/* WARNING: Removing unreachable block (ram,0x0001e144) */
/* WARNING: Removing unreachable block (ram,0x0001e15a) */
/* WARNING: Removing unreachable block (ram,0x0001e146) */
/* WARNING: Removing unreachable block (ram,0x0001e148) */
/* WARNING: Removing unreachable block (ram,0x0001e15e) */
/* WARNING: Removing unreachable block (ram,0x0001e162) */
/* WARNING: Removing unreachable block (ram,0x0001e19a) */
/* WARNING: Removing unreachable block (ram,0x0001e19c) */
/* WARNING: Removing unreachable block (ram,0x0001e1bc) */
/* WARNING: Removing unreachable block (ram,0x0001e1c4) */
/* WARNING: Removing unreachable block (ram,0x0001e1f2) */
/* WARNING: Removing unreachable block (ram,0x0001e228) */
/* WARNING: Removing unreachable block (ram,0x0001e230) */
/* WARNING: Removing unreachable block (ram,0x0001e252) */
/* WARNING: Removing unreachable block (ram,0x0001e254) */
/* WARNING: Removing unreachable block (ram,0x0001e256) */
/* WARNING: Removing unreachable block (ram,0x0001e292) */
/* WARNING: Removing unreachable block (ram,0x0001e298) */
/* WARNING: Removing unreachable block (ram,0x0001e2a0) */
/* WARNING: Removing unreachable block (ram,0x0001e30e) */
/* WARNING: Removing unreachable block (ram,0x0001e2be) */
/* WARNING: Removing unreachable block (ram,0x0001e314) */
/* WARNING: Removing unreachable block (ram,0x0001e31c) */
/* WARNING: Removing unreachable block (ram,0x0001e340) */
/* WARNING: Removing unreachable block (ram,0x0001e342) */
/* WARNING: Removing unreachable block (ram,0x0001e344) */
/* WARNING: Removing unreachable block (ram,0x0001e346) */
/* WARNING: Removing unreachable block (ram,0x0001e3a0) */
/* WARNING: Removing unreachable block (ram,0x0001e3a6) */
/* WARNING: Removing unreachable block (ram,0x0001e3aa) */
/* WARNING: Removing unreachable block (ram,0x0001e3b0) */
/* WARNING: Removing unreachable block (ram,0x0001e472) */
/* WARNING: Removing unreachable block (ram,0x0001e404) */
/* WARNING: Removing unreachable block (ram,0x0001e476) */
/* WARNING: Removing unreachable block (ram,0x0001e406) */
/* WARNING: Removing unreachable block (ram,0x0001e47a) */
/* WARNING: Removing unreachable block (ram,0x0001e2c0) */
/* WARNING: Removing unreachable block (ram,0x0001e2c2) */
/* WARNING: Removing unreachable block (ram,0x0001d9d8) */
/* WARNING: Removing unreachable block (ram,0x0001dab0) */
/* WARNING: Removing unreachable block (ram,0x0001da24) */
/* WARNING: Removing unreachable block (ram,0x0001da56) */
/* WARNING: Removing unreachable block (ram,0x0001da5a) */
/* WARNING: Removing unreachable block (ram,0x0001da98) */
/* WARNING: Removing unreachable block (ram,0x0001dab4) */
/* WARNING: Removing unreachable block (ram,0x0001e408) */
/* WARNING: Removing unreachable block (ram,0x0001e47e) */
/* WARNING: Removing unreachable block (ram,0x0001deb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dc64(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int in_r1;
  undefined2 uVar2;
  uint in_r2;
  int unaff_gp;
  uint unaff_tp;
  code *pcVar3;
  code *pcVar4;
  int in_r10;
  code *pcVar5;
  short extraout_r11;
  uint in_r11;
  int in_r12;
  undefined4 in_r13;
  uint in_r14;
  code *in_r16;
  int in_r18;
  int in_r19;
  undefined4 unaff_r20;
  int unaff_r21;
  int unaff_r22;
  int unaff_r23;
  int unaff_r24;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int unaff_r25;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  int unaff_r29;
  byte *unaff_ep;
  undefined4 *puVar9;
  undefined4 uVar10;
  ushort *unaff_CTBP;
  
  __saturate(unaff_r24 - unaff_r23);
  iVar6 = (unaff_r24 - unaff_r23) - unaff_r26;
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0xc) = *(undefined4 *)(unaff_ep + 8);
  iVar6 = in_r1 - (int)(short)iVar6 * (int)(short)unaff_r28;
  __saturate(iVar6);
  iVar6 = in_r19 - iVar6;
  __saturate(iVar6);
  iVar6 = unaff_gp - iVar6;
  __saturate(iVar6);
  iVar6 = unaff_r22 - iVar6;
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0x10) = *(undefined4 *)(unaff_ep + 0x10);
  iVar6 = param_2 - iVar6;
  __saturate(iVar6);
  iVar6 = unaff_r25 - iVar6;
  __saturate(iVar6);
  iVar6 = in_r10 - iVar6;
  __saturate(iVar6);
  iVar6 = iVar6 + in_r12;
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0x14) = *(undefined4 *)(unaff_ep + 0x14);
  iVar6 = iVar6 - unaff_r29;
  __saturate(iVar6);
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0x18) = *(undefined4 *)(unaff_ep + 0x18);
  puVar7 = &stack0x00000000 + iVar6;
  __saturate(puVar7);
  puVar7 = puVar7 + param_1;
  __saturate(puVar7);
  *(undefined4 *)(unaff_ep + 0x1c) = *(undefined4 *)(unaff_ep + 0x1c);
  puVar7 = puVar7 + param_4;
  __saturate(puVar7);
  __saturate(unaff_ep + (int)puVar7);
  *(undefined4 *)(unaff_ep + 0x20) = *(undefined4 *)(unaff_ep + 0x20);
  iVar6 = (int)(short)((short)(unaff_ep + (int)puVar7) * (short)param_2 * (short)in_r13) *
          (int)(short)in_r19 + in_r18;
  __saturate(iVar6);
  iVar6 = iVar6 + unaff_r21;
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0x24) = *(undefined4 *)(unaff_ep + 0x24);
  iVar6 = iVar6 * 2;
  __saturate(iVar6);
  iVar6 = (int)(short)iVar6 * (int)(short)in_r1 + unaff_r27;
  __saturate(iVar6);
  *(undefined4 *)(unaff_ep + 0x28) = *(undefined4 *)(unaff_ep + 0x28);
  uVar10 = *(undefined4 *)(unaff_ep + 0x40);
  *(undefined4 *)(unaff_ep + 0x40) = uVar10;
  uVar8 = (int)(short)((short)iVar6 * (short)unaff_gp * (short)in_r16 * (short)unaff_r22 *
                      (short)unaff_r25) * (int)(short)uVar10 | in_r2;
  do {
  } while (0 < (int)uVar8);
  *(undefined4 *)(unaff_ep + 0x44) = *(undefined4 *)(unaff_ep + 0x44);
  in_r16[0x50b0] = SUB21(*(undefined2 *)unaff_ep,0);
  *(undefined2 *)(unaff_ep + 0xa0) = *(undefined2 *)(unaff_ep + 0x40);
  func_0x001235de();
  uVar2 = (undefined2)in_r1;
  unaff_ep[0x30] = *unaff_ep;
  if (!SCARRY4((int)extraout_r11 * (int)(short)in_r16,-0x10)) {
    __saturate(in_r16 + -0x5f20);
    in_r16[0x6080] = (code)((byte)in_r16[0x6080] ^ 8);
    unaff_ep[0x70] = unaff_ep[0x40];
    *(short *)(unaff_ep + 0x40) = (short)(char)unaff_ep[0x40];
    _DAT_00006810 = 0x66b0;
    __saturate(in_r13);
    __saturate(in_r13);
    *unaff_ep = 0;
    *(undefined2 *)(unaff_ep + 0xc0) = *(undefined2 *)(unaff_ep + 0x60);
    func_0xffe24e34();
    unaff_ep[0x40] = unaff_ep[0x10];
    bVar1 = -(char)((int)in_r16 >> 0x1f);
    *(undefined2 *)(unaff_ep + 0xe0) = *(undefined2 *)(unaff_ep + 0x40);
    if (bVar1 != 0 && bVar1 == (byte)((uint)-(int)in_r16 >> 0x1f)) goto code_r0x0001deee;
    in_r16 = (code *)(*(uint *)(unaff_ep + 0x20) ^ 0x8780);
    *(short *)unaff_ep = (short)(char)unaff_ep[0x60];
    __saturate(in_r18);
    __saturate(unaff_r20);
    __saturate(0x5880);
    __saturate(unaff_r21);
  }
  __saturate(-unaff_r22);
  unaff_ep[0x60] = (byte)-unaff_r22;
  unaff_ep[0x40] = (byte)-(ushort)*unaff_ep;
  *(ushort *)(unaff_ep + 0xc0) = -(ushort)*unaff_ep;
  uVar8 = (uVar8 | param_3 | unaff_tp | in_r11 | in_r14) / 0;
  unaff_ep[0x20] = (byte)uVar8;
  *(short *)(unaff_ep + 0x80) = (short)uVar8;
  iVar6 = (int)DAT_ffffc820;
  *unaff_ep = 0;
  unaff_ep[0x40] = 0;
  unaff_ep[0x41] = 0;
  *unaff_ep = unaff_ep[0x70];
  unaff_ep[0xf0] = 0;
  unaff_ep[0xf1] = 0;
  *(undefined2 *)(unaff_ep + 0x30) = uVar2;
  *(byte *)(iVar6 + 22000) = *(byte *)(iVar6 + 22000) ^ 0x80;
code_r0x0001deee:
  pcVar4 = in_r16 + 0x42680000;
  pcVar3 = (code *)((uint)in_r16 ^ 13000);
  DAT_00001b58 = 0;
  *(short *)(in_r16 + 5000) = (short)in_r2;
  func_0xffe1eac8();
  in_r16[1000] = (code)((byte)in_r16[1000] | 1);
  puVar9 = (undefined4 *)(uint)*(byte *)(int)*(short *)(unaff_ep + 0x90);
  __saturate((int)in_r16 - (int)*(short *)(puVar9 + 0x3c));
  *(short *)(puVar9 + 0x14) = (short)unaff_r28;
  puVar9[0xc] = in_r2;
  *(short *)(puVar9 + 0x3b) = (short)in_r2;
  pcVar5 = (code *)(*pcVar3)();
  uVar2 = (undefined2)in_r2;
  *(undefined2 *)(puVar9 + 0x3c) = uVar2;
  (*pcVar5)();
  *(undefined2 *)((int)puVar9 + 0xf2) = uVar2;
  *(undefined2 *)(puVar9 + 0x3d) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x24]))();
  *(undefined2 *)((int)puVar9 + 0xf6) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x14]))();
  *(undefined2 *)(puVar9 + 0x3e) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x1c]))();
  *(undefined2 *)((int)puVar9 + 0xfa) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x2a]))();
  *(undefined2 *)(puVar9 + 0x3f) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x30]))();
  *(undefined2 *)((int)puVar9 + 0xfe) = uVar2;
  *(undefined1 *)((int)puVar9 + 0x72) = 0;
  *puVar9 = *puVar9;
  uVar10 = puVar9[1];
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  puVar9[1] = uVar10;
  (*in_r16)();
  puVar9[2] = puVar9[2];
  puVar9[3] = puVar9[3];
  uVar10 = puVar9[4];
  (*pcVar4)();
  *(undefined1 *)(puVar9 + 6) = 0;
  puVar9[4] = uVar10;
  uVar10 = puVar9[5];
  (*pcVar3)();
  puVar9[5] = uVar10;
  puVar9[6] = puVar9[6];
  *(undefined2 *)(puVar9 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001dfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0001dfc2 + *(short *)(&DAT_0001dfc2 + unaff_r28 * 2) * 2))();
  return;
}


// ==== FUN_0001dd18 @ 0001dd18 (size 1732) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001e15a) overlaps instruction at (ram,0x0001e158)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x0001e1f6) */
/* WARNING: Removing unreachable block (ram,0x0001e222) */
/* WARNING: Removing unreachable block (ram,0x0001e1f4) */
/* WARNING: Removing unreachable block (ram,0x0001da1e) */
/* WARNING: Removing unreachable block (ram,0x0001dec4) */
/* WARNING: Removing unreachable block (ram,0x0001decc) */
/* WARNING: Removing unreachable block (ram,0x0001ded8) */
/* WARNING: Removing unreachable block (ram,0x0001dee0) */
/* WARNING: Removing unreachable block (ram,0x0001dee4) */
/* WARNING: Removing unreachable block (ram,0x0001dfde) */
/* WARNING: Removing unreachable block (ram,0x0001dfe2) */
/* WARNING: Removing unreachable block (ram,0x0001dfe4) */
/* WARNING: Removing unreachable block (ram,0x0001dfe8) */
/* WARNING: Removing unreachable block (ram,0x0001dff8) */
/* WARNING: Removing unreachable block (ram,0x0001dffa) */
/* WARNING: Removing unreachable block (ram,0x0001dffc) */
/* WARNING: Removing unreachable block (ram,0x0001e0bc) */
/* WARNING: Removing unreachable block (ram,0x0001e03e) */
/* WARNING: Removing unreachable block (ram,0x0001e042) */
/* WARNING: Removing unreachable block (ram,0x0001e0c6) */
/* WARNING: Removing unreachable block (ram,0x0001e0f2) */
/* WARNING: Removing unreachable block (ram,0x0001e0f4) */
/* WARNING: Removing unreachable block (ram,0x0001e0f6) */
/* WARNING: Removing unreachable block (ram,0x0001e0fa) */
/* WARNING: Removing unreachable block (ram,0x0001e0fe) */
/* WARNING: Removing unreachable block (ram,0x0001e102) */
/* WARNING: Removing unreachable block (ram,0x0001e10c) */
/* WARNING: Removing unreachable block (ram,0x0001e152) */
/* WARNING: Removing unreachable block (ram,0x0001e144) */
/* WARNING: Removing unreachable block (ram,0x0001e15a) */
/* WARNING: Removing unreachable block (ram,0x0001e146) */
/* WARNING: Removing unreachable block (ram,0x0001e148) */
/* WARNING: Removing unreachable block (ram,0x0001e15e) */
/* WARNING: Removing unreachable block (ram,0x0001e162) */
/* WARNING: Removing unreachable block (ram,0x0001e19a) */
/* WARNING: Removing unreachable block (ram,0x0001e19c) */
/* WARNING: Removing unreachable block (ram,0x0001e1bc) */
/* WARNING: Removing unreachable block (ram,0x0001e1c4) */
/* WARNING: Removing unreachable block (ram,0x0001e1f2) */
/* WARNING: Removing unreachable block (ram,0x0001e228) */
/* WARNING: Removing unreachable block (ram,0x0001e230) */
/* WARNING: Removing unreachable block (ram,0x0001e252) */
/* WARNING: Removing unreachable block (ram,0x0001e254) */
/* WARNING: Removing unreachable block (ram,0x0001e256) */
/* WARNING: Removing unreachable block (ram,0x0001e292) */
/* WARNING: Removing unreachable block (ram,0x0001e298) */
/* WARNING: Removing unreachable block (ram,0x0001e2a0) */
/* WARNING: Removing unreachable block (ram,0x0001e30e) */
/* WARNING: Removing unreachable block (ram,0x0001e2be) */
/* WARNING: Removing unreachable block (ram,0x0001e314) */
/* WARNING: Removing unreachable block (ram,0x0001e31c) */
/* WARNING: Removing unreachable block (ram,0x0001e340) */
/* WARNING: Removing unreachable block (ram,0x0001e342) */
/* WARNING: Removing unreachable block (ram,0x0001e344) */
/* WARNING: Removing unreachable block (ram,0x0001e346) */
/* WARNING: Removing unreachable block (ram,0x0001e3a0) */
/* WARNING: Removing unreachable block (ram,0x0001e3a6) */
/* WARNING: Removing unreachable block (ram,0x0001e3aa) */
/* WARNING: Removing unreachable block (ram,0x0001e3b0) */
/* WARNING: Removing unreachable block (ram,0x0001e472) */
/* WARNING: Removing unreachable block (ram,0x0001e404) */
/* WARNING: Removing unreachable block (ram,0x0001e476) */
/* WARNING: Removing unreachable block (ram,0x0001e406) */
/* WARNING: Removing unreachable block (ram,0x0001e47a) */
/* WARNING: Removing unreachable block (ram,0x0001e2c0) */
/* WARNING: Removing unreachable block (ram,0x0001e2c2) */
/* WARNING: Removing unreachable block (ram,0x0001d9d8) */
/* WARNING: Removing unreachable block (ram,0x0001dab0) */
/* WARNING: Removing unreachable block (ram,0x0001da24) */
/* WARNING: Removing unreachable block (ram,0x0001da56) */
/* WARNING: Removing unreachable block (ram,0x0001da5a) */
/* WARNING: Removing unreachable block (ram,0x0001da98) */
/* WARNING: Removing unreachable block (ram,0x0001dab4) */
/* WARNING: Removing unreachable block (ram,0x0001e408) */
/* WARNING: Removing unreachable block (ram,0x0001e47e) */
/* WARNING: Removing unreachable block (ram,0x0001deb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001dd18(undefined4 param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  undefined2 in_r1;
  undefined2 uVar2;
  uint in_r2;
  short unaff_gp;
  uint unaff_tp;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  short extraout_r11;
  uint in_r11;
  undefined4 in_r13;
  uint in_r14;
  code *in_r16;
  undefined4 in_r18;
  undefined4 unaff_r20;
  undefined4 unaff_r21;
  int unaff_r22;
  int unaff_r24;
  uint uVar6;
  int iVar7;
  short unaff_r25;
  int unaff_r27;
  int unaff_r28;
  byte *unaff_ep;
  undefined4 *puVar8;
  undefined4 unaff_lp;
  undefined4 uVar9;
  ushort *unaff_CTBP;
  
  __saturate(unaff_r24 + unaff_r27);
  *(undefined4 *)(unaff_ep + 0x28) = unaff_lp;
  uVar9 = *(undefined4 *)(unaff_ep + 0x40);
  *(undefined4 *)(unaff_ep + 0x40) = uVar9;
  uVar6 = (int)(short)((short)(unaff_r24 + unaff_r27) * unaff_gp * (short)in_r16 * (short)unaff_r22
                      * unaff_r25) * (int)(short)uVar9 | in_r2;
  do {
  } while (0 < (int)uVar6);
  *(undefined4 *)(unaff_ep + 0x44) = *(undefined4 *)(unaff_ep + 0x44);
  in_r16[0x50b0] = SUB21(*(undefined2 *)unaff_ep,0);
  *(undefined2 *)(unaff_ep + 0xa0) = *(undefined2 *)(unaff_ep + 0x40);
  func_0x001235de();
  unaff_ep[0x30] = *unaff_ep;
  if (!SCARRY4((int)extraout_r11 * (int)(short)in_r16,-0x10)) {
    __saturate(in_r16 + -0x5f20);
    in_r16[0x6080] = (code)((byte)in_r16[0x6080] ^ 8);
    unaff_ep[0x70] = unaff_ep[0x40];
    *(short *)(unaff_ep + 0x40) = (short)(char)unaff_ep[0x40];
    _DAT_00006810 = 0x66b0;
    __saturate(in_r13);
    __saturate(in_r13);
    *unaff_ep = 0;
    *(undefined2 *)(unaff_ep + 0xc0) = *(undefined2 *)(unaff_ep + 0x60);
    func_0xffe24e34();
    unaff_ep[0x40] = unaff_ep[0x10];
    bVar1 = -(char)((int)in_r16 >> 0x1f);
    *(undefined2 *)(unaff_ep + 0xe0) = *(undefined2 *)(unaff_ep + 0x40);
    if (bVar1 != 0 && bVar1 == (byte)((uint)-(int)in_r16 >> 0x1f)) goto code_r0x0001deee;
    in_r16 = (code *)(*(uint *)(unaff_ep + 0x20) ^ 0x8780);
    *(short *)unaff_ep = (short)(char)unaff_ep[0x60];
    __saturate(in_r18);
    __saturate(unaff_r20);
    __saturate(0x5880);
    __saturate(unaff_r21);
  }
  __saturate(-unaff_r22);
  unaff_ep[0x60] = (byte)-unaff_r22;
  unaff_ep[0x40] = (byte)-(ushort)*unaff_ep;
  *(ushort *)(unaff_ep + 0xc0) = -(ushort)*unaff_ep;
  uVar6 = (uVar6 | param_3 | unaff_tp | in_r11 | in_r14) / 0;
  unaff_ep[0x20] = (byte)uVar6;
  *(short *)(unaff_ep + 0x80) = (short)uVar6;
  iVar7 = (int)DAT_ffffc820;
  *unaff_ep = 0;
  unaff_ep[0x40] = 0;
  unaff_ep[0x41] = 0;
  *unaff_ep = unaff_ep[0x70];
  unaff_ep[0xf0] = 0;
  unaff_ep[0xf1] = 0;
  *(undefined2 *)(unaff_ep + 0x30) = in_r1;
  *(byte *)(iVar7 + 22000) = *(byte *)(iVar7 + 22000) ^ 0x80;
code_r0x0001deee:
  pcVar4 = in_r16 + 0x42680000;
  pcVar3 = (code *)((uint)in_r16 ^ 13000);
  DAT_00001b58 = 0;
  *(short *)(in_r16 + 5000) = (short)in_r2;
  func_0xffe1eac8();
  in_r16[1000] = (code)((byte)in_r16[1000] | 1);
  puVar8 = (undefined4 *)(uint)*(byte *)(int)*(short *)(unaff_ep + 0x90);
  __saturate((int)in_r16 - (int)*(short *)(puVar8 + 0x3c));
  *(short *)(puVar8 + 0x14) = (short)unaff_r28;
  puVar8[0xc] = in_r2;
  *(short *)(puVar8 + 0x3b) = (short)in_r2;
  pcVar5 = (code *)(*pcVar3)();
  uVar2 = (undefined2)in_r2;
  *(undefined2 *)(puVar8 + 0x3c) = uVar2;
  (*pcVar5)();
  *(undefined2 *)((int)puVar8 + 0xf2) = uVar2;
  *(undefined2 *)(puVar8 + 0x3d) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x24]))();
  *(undefined2 *)((int)puVar8 + 0xf6) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x14]))();
  *(undefined2 *)(puVar8 + 0x3e) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x1c]))();
  *(undefined2 *)((int)puVar8 + 0xfa) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x2a]))();
  *(undefined2 *)(puVar8 + 0x3f) = uVar2;
  (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x30]))();
  *(undefined2 *)((int)puVar8 + 0xfe) = uVar2;
  *(undefined1 *)((int)puVar8 + 0x72) = 0;
  *puVar8 = *puVar8;
  uVar9 = puVar8[1];
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  puVar8[1] = uVar9;
  (*in_r16)();
  puVar8[2] = puVar8[2];
  puVar8[3] = puVar8[3];
  uVar9 = puVar8[4];
  (*pcVar4)();
  *(undefined1 *)(puVar8 + 6) = 0;
  puVar8[4] = uVar9;
  uVar9 = puVar8[5];
  (*pcVar3)();
  puVar8[5] = uVar9;
  puVar8[6] = puVar8[6];
  *(undefined2 *)(puVar8 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001dfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0001dfc2 + *(short *)(&DAT_0001dfc2 + unaff_r28 * 2) * 2))();
  return;
}


// ==== FUN_0001e85a @ 0001e85a (size 32) ====

void FUN_0001e85a(undefined4 param_1,undefined4 param_2,short param_3)

{
  ushort in_r1;
  int iVar1;
  int unaff_gp;
  int unaff_r22;
  ushort unaff_r25;
  
  iVar1 = (int)(short)(in_r1 | unaff_r25) * (int)param_3 - unaff_r22;
  __saturate(iVar1);
  __saturate(unaff_gp - iVar1);
  return;
}


// ==== FUN_0001ef90 @ 0001ef90 (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001ef90(void)

{
  short sVar1;
  undefined2 uVar2;
  int in_r2;
  int in_r10;
  int extraout_r11;
  uint in_r15;
  int in_r17;
  uint in_r19;
  uint unaff_r20;
  int unaff_r21;
  int unaff_r22;
  int iVar3;
  uint unaff_r29;
  uint unaff_ep;
  uint in_PSW;
  
  do {
    sVar1 = *(short *)(unaff_ep + 0xbe);
    *(short *)(unaff_ep + 0x18) = sVar1;
    *(short *)(unaff_ep + 0x74) = sVar1;
    *(short *)(unaff_ep + 0xce) = sVar1;
    *(int *)(unaff_ep + 0x28) = (int)sVar1;
    if (((byte)(in_PSW >> 1) & 1) == ((byte)(in_PSW >> 2) & 1)) {
      iVar3 = in_r10 - ~in_r19 / unaff_ep;
      __saturate(iVar3);
      __saturate(iVar3 - unaff_r22);
    }
    else if (((in_PSW >> 1 & 1) != 0) && ((in_PSW & 1) != 0)) {
      func_0x001bd780();
      in_r2 = in_r2 - unaff_r29 / unaff_r20;
      __saturate(in_r2);
      __saturate(in_r2 - in_r17);
      __saturate(((uint)*(ushort *)(unaff_r22 + -0x17dc) - (in_r15 ^ unaff_ep)) + extraout_r11 + 9);
      *(undefined1 *)(unaff_ep + 0x25) = *(undefined1 *)(unaff_ep + 0x75);
      *(undefined1 *)(unaff_ep + 0x55) = *(undefined1 *)(unaff_ep + 0x75);
      uVar2 = *(undefined2 *)(unaff_ep + 200);
      *(undefined2 *)(unaff_ep + 0x28) = uVar2;
      *(undefined2 *)(unaff_ep + 0x88) = uVar2;
      *(undefined2 *)(unaff_ep + 0xe8) = uVar2;
      __saturate(unaff_r21 + 0x115a);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    in_PSW = 0;
    *(undefined1 *)(unaff_ep + 0x2a) = *(undefined1 *)(unaff_ep + 0x7d);
    *(undefined1 *)(unaff_ep + 0x57) = *(undefined1 *)(unaff_ep + 0x7d);
  } while( true );
}


// ==== FUN_0001efc6 @ 0001efc6 (size 76) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0001efc6(void)

{
  undefined2 uVar1;
  int in_r11;
  uint in_r15;
  int unaff_r21;
  int unaff_r28;
  uint unaff_ep;
  
  __saturate((unaff_r28 - (in_r15 ^ unaff_ep)) + in_r11 + 9);
  *(undefined1 *)(unaff_ep + 0x25) = *(undefined1 *)(unaff_ep + 0x75);
  *(undefined1 *)(unaff_ep + 0x55) = *(undefined1 *)(unaff_ep + 0x75);
  uVar1 = *(undefined2 *)(unaff_ep + 200);
  *(undefined2 *)(unaff_ep + 0x28) = uVar1;
  *(undefined2 *)(unaff_ep + 0x88) = uVar1;
  *(undefined2 *)(unaff_ep + 0xe8) = uVar1;
  __saturate(unaff_r21 + 0x115a);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0001ff46 @ 0001ff46 (size 34) ====

void FUN_0001ff46(void)

{
  int in_r1;
  int unaff_gp;
  int in_r9;
  int in_r16;
  int unaff_r24;
  int unaff_lp;
  
  __saturate(unaff_lp - in_r1);
  *(char *)(in_r9 + 0x254c) = (char)in_r16;
  __saturate(in_r16 - unaff_gp);
                    /* WARNING: Could not recover jumptable at 0x0001ff66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0001ff68 + *(short *)(&DAT_0001ff68 + unaff_r24 * 2) * 2))();
  return;
}


// ==== FUN_000212c0 @ 000212c0 (size 54) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00021328) overlaps instruction at (ram,0x00021326)
    */

void FUN_000212c0(void)

{
  undefined2 uVar1;
  undefined2 in_r11;
  uint in_r15;
  uint unaff_r22;
  uint unaff_ep;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint in_PSW;
  
  if ((in_PSW >> 3 & 1) != 0) {
    iVar2 = (int)*(char *)(unaff_ep + 0x3b);
    __saturate(iVar2 + -5);
    unaff_ep = (uint)*(ushort *)(*(int *)(*(ushort *)(iVar2 + 0x13) + 0x106) + 0x18);
    if (-1 < (int)in_r15) goto LAB_00021310;
    *(short *)(unaff_ep + 0xac) = (short)in_r15;
    in_r15 = in_r15 / unaff_r22;
    in_PSW = (uint)((bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(iVar2,-5)) << 4 |
             (uint)((int)in_r15 < 0) << 1;
  }
  if ((in_PSW >> 1 & 1) == 0) {
    halt_baddata();
  }
  uVar3 = (uint)*(ushort *)(*(int *)(unaff_ep + 0xf8) + 0x18);
  *(short *)(uVar3 + 0xc) = (short)in_r15;
  unaff_ep = (uint)*(ushort *)(uVar3 + 0x18);
  if (-1 < (int)in_r15) {
    halt_baddata();
  }
  if (((byte)(in_PSW >> 4) & 1) == 1) {
    halt_baddata();
  }
LAB_00021310:
  uVar3 = in_r15 / unaff_r22;
  uVar1 = *(undefined2 *)(unaff_ep + 0xe0);
  uVar4 = *(uint *)(unaff_ep + 0xf8);
  if ((int)uVar3 < 0 == (in_r15 == 0x80000000 && unaff_r22 == 0xffffffff || unaff_r22 == 0)) {
    uVar4 = (uint)*(ushort *)(uVar4 + 0x18);
  }
  else if ((int)uVar3 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = *(int *)(uVar4 + 0x103);
  *(short *)(iVar2 + 0xa0) = (short)uVar3;
  uVar3 = (uint)*(ushort *)(iVar2 + 0x18);
  *(undefined2 *)(uVar3 + 0xde) = uVar1;
  __saturate(-(int)*(short *)(uVar3 + 0xc));
  *(undefined2 *)(uVar3 + 0x86) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000212f6 @ 000212f6 (size 94) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00021328) overlaps instruction at (ram,0x00021326)
    */

void FUN_000212f6(void)

{
  undefined2 uVar1;
  undefined2 in_r11;
  uint in_r15;
  uint uVar2;
  uint unaff_r22;
  int unaff_ep;
  uint uVar3;
  int iVar4;
  uint in_PSW;
  
  if ((in_PSW >> 1 & 1) != 0) {
    uVar3 = (uint)*(ushort *)(*(int *)(unaff_ep + 0xf8) + 0x18);
    *(short *)(uVar3 + 0xc) = (short)in_r15;
    uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
    if (((int)in_r15 < 0) && (((byte)(in_PSW >> 4) & 1) != 1)) {
      uVar2 = in_r15 / unaff_r22;
      uVar1 = *(undefined2 *)(uVar3 + 0xe0);
      uVar3 = *(uint *)(uVar3 + 0xf8);
      if ((int)uVar2 < 0 == (in_r15 == 0x80000000 && unaff_r22 == 0xffffffff || unaff_r22 == 0)) {
        uVar3 = (uint)*(ushort *)(uVar3 + 0x18);
      }
      else if ((int)uVar2 < 0) {
        halt_baddata();
      }
      iVar4 = *(int *)(uVar3 + 0x103);
      *(short *)(iVar4 + 0xa0) = (short)uVar2;
      uVar3 = (uint)*(ushort *)(iVar4 + 0x18);
      *(undefined2 *)(uVar3 + 0xde) = uVar1;
      __saturate(-(int)*(short *)(uVar3 + 0xc));
      *(undefined2 *)(uVar3 + 0x86) = in_r11;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000225dc @ 000225dc (size 212) ====

void FUN_000225dc(int param_1,code *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  uint in_r1;
  undefined4 uVar5;
  int unaff_gp;
  int in_r12;
  int iVar6;
  uint in_r18;
  code *pcVar7;
  int in_r19;
  int unaff_r20;
  uint unaff_r21;
  uint uVar8;
  undefined1 unaff_r27;
  int iVar9;
  short unaff_r29;
  int unaff_ep;
  
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  uVar5 = *(undefined4 *)(unaff_ep + 0x5c);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  uVar4 = (undefined1)(param_4 + 0x10000);
  *(undefined1 *)(in_r12 + 0x159a) = uVar4;
  uVar3 = (undefined2)uVar5;
  *(undefined2 *)(unaff_ep + 0x5c) = uVar3;
  *(undefined1 *)(param_4 + 2) = unaff_r27;
  *(undefined2 *)(unaff_ep + 0xaa) = uVar3;
  *(undefined1 *)(param_4 + 0x159a) = uVar4;
  *(int *)(unaff_ep + 0x68) = param_4 + 0x10000;
  uVar5 = *(undefined4 *)(unaff_ep + 0x5c);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(short *)(unaff_ep + 0xaa) = (short)uVar5;
  uVar8 = unaff_r21 | in_r1 | in_r1;
  *(char *)(param_4 + 0x159a) = (char)(param_4 + 0x2020000);
  *(int *)(unaff_ep + 0x68) = param_4 + 0x2020000;
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  pcVar7 = (code *)(in_r18 & 0xffff);
  __saturate(unaff_r20 + 7);
  iVar6 = (param_4 + 0x10000) - (unaff_gp + in_r19);
  __saturate(iVar6);
  __saturate(in_r1 - (int)DAT_ffff8f05);
  __saturate(uVar8 + 0xb);
  iVar9 = -(in_r1 - (int)DAT_ffff8f05);
  __saturate(iVar9);
  __saturate((iVar6 - (unaff_gp + in_r19)) + 0x5e1);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 8) = unaff_r27;
  __saturate(param_4 - param_1);
  uVar2 = *(ushort *)(unaff_ep + 6);
  __saturate((int)(short)((short)(0xffffffff / 0) * (short)param_4) * (int)unaff_r29 - uVar8);
  sVar1 = *(short *)(unaff_ep + 2);
  iVar6 = (int)(short)(uVar8 + 0xb) * (int)(short)param_4 - uVar8;
  __saturate(iVar6);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  __saturate((uVar8 | 0xfffffff5) + 4);
  iVar9 = in_r1 - (iVar9 + -0x16);
  __saturate(iVar9);
  iVar6 = iVar6 - unaff_r20;
  __saturate(iVar6);
  __saturate(-iVar9);
  __saturate(iVar6 - uVar8);
  (*(code *)(uint)uVar2)(param_1,param_2,(int)sVar1);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  (*pcVar7)();
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 8) = unaff_r27;
  (*param_2)();
  (*(code *)0x0)();
  *(undefined1 *)(param_4 + 1) = unaff_r27;
                    /* WARNING: Could not recover jumptable at 0x000227ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000227d0 + *(short *)(&DAT_000227d0 + unaff_r29 * 2) * 2))();
  return;
}


// ==== FUN_000226b0 @ 000226b0 (size 288) ====

void FUN_000226b0(int param_1,code *param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  ushort uVar2;
  int in_r1;
  int unaff_gp;
  undefined4 in_r16;
  int iVar3;
  uint in_r18;
  code *pcVar4;
  int in_r19;
  int unaff_r20;
  uint unaff_r21;
  undefined1 unaff_r27;
  int iVar5;
  int unaff_r29;
  int unaff_ep;
  
  *(undefined4 *)(unaff_ep + 0x68) = in_r16;
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  pcVar4 = (code *)(in_r18 & 0xffff);
  __saturate(unaff_r20 + 7);
  iVar3 = (param_4 + 0x10000) - (unaff_gp + in_r19);
  __saturate(iVar3);
  __saturate(in_r1 - DAT_ffff8f05);
  __saturate(unaff_r21 + 0xb);
  iVar5 = -(in_r1 - DAT_ffff8f05);
  __saturate(iVar5);
  __saturate((iVar3 - (unaff_gp + in_r19)) + 0x5e1);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 8) = unaff_r27;
  __saturate(param_4 - param_1);
  uVar2 = *(ushort *)(unaff_ep + 6);
  __saturate((int)(short)((short)(0xffffffff / 0) * (short)param_4) * (int)(short)unaff_r29 -
             unaff_r21);
  sVar1 = *(short *)(unaff_ep + 2);
  iVar3 = (int)(short)(unaff_r21 + 0xb) * (int)(short)param_4 - unaff_r21;
  __saturate(iVar3);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  __saturate((unaff_r21 | 0xfffffff5) + 4);
  iVar5 = in_r1 - (iVar5 + -0x16);
  __saturate(iVar5);
  iVar3 = iVar3 - unaff_r20;
  __saturate(iVar3);
  __saturate(-iVar5);
  __saturate(iVar3 - unaff_r21);
  (*(code *)(uint)uVar2)(param_1,param_2,(int)sVar1);
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  (*pcVar4)();
  *(undefined1 *)(param_4 + 1) = unaff_r27;
  *(undefined1 *)(param_4 + 8) = unaff_r27;
  (*param_2)();
  (*(code *)0x0)();
  *(undefined1 *)(param_4 + 1) = unaff_r27;
                    /* WARNING: Could not recover jumptable at 0x000227ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000227d0 + *(short *)(&DAT_000227d0 + unaff_r29 * 2) * 2))();
  return;
}


// ==== FUN_0002294a @ 0002294a (size 46) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002294a(uint param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  undefined1 uVar14;
  byte bVar15;
  byte bVar16;
  uint in_r1;
  uint in_r2;
  uint unaff_gp;
  uint unaff_tp;
  int iVar17;
  int iVar18;
  int in_r14;
  undefined1 in_r15;
  short sVar19;
  uint uVar20;
  int iVar21;
  undefined4 in_r19;
  uint unaff_r21;
  uint uVar22;
  uint unaff_r25;
  int unaff_r26;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  uint unaff_r29;
  int unaff_ep;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint in_PSW;
  undefined4 in_stack_0000007c;
  
  while( true ) {
    unaff_r21 = unaff_r21 | in_r2;
    cVar10 = *(char *)(unaff_ep + 0x40);
    cVar9 = *(char *)(param_3 + -0x4fca);
    uVar31 = in_r2 + 0x50000 & in_r2;
    if (((byte)(in_PSW >> 3) & 1) != 1) break;
    *(short *)(unaff_ep + 0x44) = (short)in_r2;
    in_r2 = (int)(short)in_r2 * (int)(short)in_r14;
    *(undefined4 *)(unaff_ep + -0x2c6) = in_r19;
    in_PSW = in_PSW & 0xfffffff0 | (uint)(10 < (int)cVar9 - 0xbU) << 3;
  }
  iVar27 = (int)DAT_fffff016;
  cVar9 = DAT_fffff016 >> 7;
  __saturate(-iVar27);
  *(undefined1 *)(unaff_ep + 1) = in_r15;
  *(undefined1 *)(unaff_ep + 0x41) = in_r15;
  uVar30 = (uint)*(ushort *)(unaff_ep + 0x18);
  sVar19 = *(short *)(uVar30 + 0xc);
  iVar17 = (int)*(short *)(uVar30 + 0xa2);
  bVar4 = (byte)((uint)&stack0x00000000 >> 0x18);
  bVar2 = bVar4 >> 7;
  __saturate(uVar31 - (int)&stack0x00000000);
  bVar3 = (byte)(*(short *)(uVar30 + 0xa2) >> 0xf) >> 7;
  iVar23 = unaff_r26 - iVar17;
  __saturate(iVar23);
  *(char *)(uVar30 + 0xb) = (char)in_r14;
  uVar31 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) ||
                    -cVar9 != 0 && -cVar9 == (byte)((uint)-iVar27 >> 0x1f)) ||
                   (byte)(uVar31 >> 0x1f) != bVar2 &&
                   bVar2 == (byte)(uVar31 - (int)&stack0x00000000 >> 0x1f)) ||
                  (byte)((uint)unaff_r26 >> 0x1f) != bVar3 &&
                  bVar3 == (byte)((uint)(unaff_r26 - iVar17) >> 0x1f)) || SCARRY4(iVar23,0xb)) << 4;
  __saturate(iVar23 + 0xbU);
  *(int *)(uVar30 + 0x7c) = (int)cVar10;
  uVar32 = *(uint *)(uVar30 + 0x84);
  uVar22 = unaff_r21 | in_r1 | (uint)&stack0x00000000 | in_r1;
  uVar20 = unaff_gp;
  iVar18 = FUN_0002dadc();
  *(uint *)(uVar30 + 0x3c) = uVar30;
  iVar27 = (int)sVar19;
  *(uint *)(uVar30 + 0x3c) = iVar23 + 0xbU | uVar32;
  bVar2 = (byte)((uint)(iVar27 * -0xf) >> 0x1f);
  __saturate(in_r1 + iVar27 * 0xf);
  iVar23 = *(int *)((uVar30 | uVar32) + 0xf8);
  uRam00028a02 = (undefined2)iVar23;
  *(undefined1 *)(iVar17 + 0x159a) = param_2;
  sVar19 = *(short *)(iVar23 + 0x60);
  *(uint *)(iVar23 + 0x38) = uVar20;
  sVar11 = *(short *)(uVar32 + 0xb2);
  iVar17 = (int)sVar11;
  uVar20 = *(uint *)(uVar32 + 0x24);
  *(undefined4 *)(uVar32 - 0x2c6) = in_r19;
  bVar8 = ((bool)((byte)(uVar31 >> 4) & 1) ||
          (byte)(in_r1 >> 0x1f) != bVar2 && bVar2 == (byte)(in_r1 + iVar27 * 0xf >> 0x1f)) ||
          SCARRY4(uVar32,-5);
  __saturate(uVar32 - 5);
  *(int *)(uVar32 + 0x77) = (int)cVar10;
  uVar33 = uVar32 / in_r2;
  uVar20 = uVar20 ^ unaff_r25;
  *(char *)(iVar18 + 0x159a) = (char)uVar20;
  *(uint *)(uVar32 + 0x33) = uVar20;
  *(undefined4 *)(uVar32 - 0x2cb) = in_r19;
  *(uint *)(uVar32 + 0x77) = uVar33;
  uVar30 = ~unaff_r29;
  iVar27 = *(int *)(uVar32 + 0x7f);
  *(char *)(iVar18 + 0x159a) = (char)uVar20;
  param_1 = uVar22 | (int)sVar19 | param_1;
  uVar31 = (uint)*(short *)(uVar32 + 0x89);
  iVar18 = in_r14 >> 6;
  *(uint *)(uVar32 + 0x33) = uVar20;
  *(int *)(uVar32 + 0x6f) = iVar27 + 9;
  cVar9 = *(char *)(iVar17 + -0x7d85);
  *(uint *)(uVar32 + 0x77) = uVar33;
  iVar27 = (int)cVar9;
  do {
    iVar23 = iVar27;
    bVar2 = -(char)(iVar23 >> 0x1f);
    bVar8 = bVar8 || bVar2 != 0 && bVar2 == (byte)((uint)-iVar23 >> 0x1f);
    __saturate(-iVar23);
    iVar27 = -iVar23;
  } while (iVar23 == 0);
  __saturate(param_1);
  *(uint *)(uVar32 + 0x2f) = param_1;
  do {
    bVar1 = unaff_tp <= uVar20;
    bVar2 = (byte)(unaff_tp >> 0x1f);
    bVar8 = bVar8 || (byte)(uVar20 >> 0x1f) != bVar2 && bVar2 == (byte)(uVar20 - unaff_tp >> 0x1f);
    __saturate(uVar20 - unaff_tp);
    uVar20 = uVar20 - unaff_tp ^ unaff_gp;
  } while (bVar1);
  uVar20 = (uint)(bVar8 || SCARRY4(param_1,param_1)) << 4;
  __saturate(param_1 * 2);
  uVar22 = *(int *)(uVar32 + 0x7f) - (int)*(char *)(uVar32 + 1);
  *(short *)(uVar32 - 3) = sVar11;
  func_0xffe3ccd2();
  bVar4 = bVar4 >> 7;
  __saturate(iVar18 - (int)&stack0x00000000);
  iVar23 = in_r1 + iVar23;
  bVar15 = (byte)(in_r1 >> 0x18);
  bVar2 = (byte)((uint)-iVar23 >> 0x1f);
  iVar28 = in_r1 + iVar23;
  __saturate(iVar28);
  bVar3 = (byte)((uint)iVar28 >> 0x1f);
  __saturate(in_r1 - iVar28);
  sVar19 = *(short *)(uVar32 - 3);
  iVar27 = (int)sVar19;
  *(short *)((in_r1 - iVar28) + 0xd3c) = (short)uVar22;
  cVar10 = *(char *)(uVar32 + 1);
  uVar14 = (undefined1)uVar33;
  *(undefined1 *)(iVar27 + 2) = uVar14;
  *(undefined1 *)(iVar27 + 1) = uVar14;
  iVar21 = iVar27 + 0x10000;
  *(undefined1 *)(iVar27 + 1) = uVar14;
  *(uint *)(uVar32 + 0x6f) = uVar22 / uVar31;
  iVar24 = *(int *)(uVar32 + 0x7b);
  cVar9 = *(char *)(iVar17 + -0x7d85);
  *(uint *)(uVar32 + 0x77) = uVar33;
  __saturate((int)cVar10);
  iVar34 = (int)(short)*(undefined4 *)(uVar32 + 0x7f) * (int)sVar19;
  bVar5 = (byte)(unaff_gp >> 0x1f);
  __saturate(iVar21 - unaff_gp);
  sVar11 = *(short *)(uVar32 + 0x3d);
  *(undefined1 *)(iVar27 + 1) = uVar14;
  bVar6 = (byte)(cVar9 >> 7) >> 7;
  uVar31 = in_r1 - (int)cVar9;
  __saturate(uVar31);
  iVar25 = iVar24 + -9;
  __saturate(iVar25);
  if (uVar31 < 0xb) {
    *(undefined1 *)(iVar27 + 1) = uVar14;
    *(undefined1 *)(iVar27 + 8) = uVar14;
    *(undefined1 *)(iVar27 + 1) = uVar14;
    *(int *)(uVar32 + 0x6f) = iVar34;
  }
  sVar12 = *(short *)(uVar32 + 0x89);
  uVar14 = (undefined1)sVar19;
  *(undefined1 *)(sVar11 + 0x159a) = uVar14;
  *(int *)(uVar32 + 0x33) = iVar27;
  cVar10 = (&DAT_ffff8f05)[iVar17];
  iVar29 = (int)cVar10;
  uVar13 = *(ushort *)(uVar32 + 0x13);
  *(uint *)(uVar13 + 0x34) = in_r1;
  bVar16 = (byte)(uVar30 >> 0x18);
  iVar27 = iVar25 - uVar30;
  __saturate(iVar27);
  *(short *)(iVar29 + 0xd1c) = (short)iVar34;
  *(uint *)(*(ushort *)(uVar13 + 0x18) + 0x38) = in_r1;
  bVar7 = (byte)(cVar10 >> 7) >> 7;
  __saturate(sVar12 - iVar29);
  iVar34 = iVar27 - uVar30;
  __saturate(iVar34);
  *(undefined1 *)(iVar17 + 0x47ff) = uVar14;
  iVar26 = iVar34 - uVar30;
  __saturate(iVar26);
  *(undefined1 *)(iVar17 + 0x47ff) = uVar14;
  __saturate(iVar26 - uVar30);
  if (((((((((((!(bool)((byte)(uVar20 >> 4) & 1) &&
               ((byte)((uint)iVar18 >> 0x1f) == bVar4 ||
               bVar4 != (byte)((uint)(iVar18 - (int)&stack0x00000000) >> 0x1f))) &&
              (bVar15 >> 7 == bVar2 || bVar2 != (byte)(in_r1 + iVar23 >> 0x1f))) &&
             (bVar15 >> 7 == bVar3 || bVar3 != (byte)(in_r1 - iVar28 >> 0x1f))) &&
            ((byte)((uint)iVar21 >> 0x1f) == bVar5 || bVar5 != (byte)(iVar21 - unaff_gp >> 0x1f)))
           && (bVar15 >> 7 == bVar6 || bVar6 != (byte)(in_r1 - (int)cVar9 >> 0x1f))) &&
          (-1 < iVar24 || iVar24 + -9 < 0)) &&
         ((byte)((uint)iVar25 >> 0x1f) == bVar16 >> 7 ||
         bVar16 >> 7 != (byte)(iVar25 - uVar30 >> 0x1f))) &&
        ((byte)(sVar12 >> 0xf) >> 7 == bVar7 || bVar7 != (byte)((uint)(sVar12 - iVar29) >> 0x1f)))
       && ((byte)((uint)iVar27 >> 0x1f) == bVar16 >> 7 ||
          bVar16 >> 7 != (byte)(iVar27 - uVar30 >> 0x1f))) &&
      ((byte)((uint)iVar34 >> 0x1f) == bVar16 >> 7 || bVar16 >> 7 != (byte)(iVar34 - uVar30 >> 0x1f)
      )) && ((byte)((uint)iVar26 >> 0x1f) == bVar16 >> 7 ||
            bVar16 >> 7 != (byte)(iVar26 - uVar30 >> 0x1f))) {
    __saturate((iVar26 - uVar30) + 0xb);
    __saturate(*(char *)(*(ushort *)((unaff_gp >> 0x17) / 0 - 0x7af0) - 0x7d85) + 0xe);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002295e @ 0002295e (size 716) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0002295e(uint param_1,undefined1 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  undefined1 uVar14;
  byte bVar15;
  byte bVar16;
  uint in_r1;
  uint in_r2;
  uint unaff_gp;
  uint unaff_tp;
  int iVar17;
  int iVar18;
  int in_r14;
  undefined1 in_r15;
  short sVar19;
  uint uVar20;
  int iVar21;
  undefined4 in_r19;
  uint unaff_r21;
  uint uVar22;
  uint unaff_r25;
  int unaff_r26;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int unaff_r27;
  int unaff_r28;
  int iVar27;
  int iVar28;
  int iVar29;
  uint unaff_r29;
  int unaff_ep;
  uint uVar30;
  uint unaff_lp;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  uint in_PSW;
  undefined4 in_stack_0000007c;
  
  while( true ) {
    uVar31 = unaff_lp & in_r2;
    if (((byte)(in_PSW >> 3) & 1) != 1) break;
    *(short *)(unaff_ep + 0x44) = (short)in_r2;
    in_r2 = (int)(short)in_r2 * (int)(short)in_r14;
    *(undefined4 *)(unaff_ep + -0x2c6) = in_r19;
    unaff_lp = in_r2 + 0x50000;
    unaff_r21 = unaff_r21 | in_r2;
    in_PSW = in_PSW & 0xfffffff0 | (uint)(10 < unaff_r28 - 0xbU) << 3;
    unaff_r27 = (int)*(char *)(unaff_ep + 0x40);
    unaff_r28 = (int)*(char *)(param_3 + -0x4fca);
  }
  iVar27 = (int)DAT_fffff016;
  cVar9 = DAT_fffff016 >> 7;
  __saturate(-iVar27);
  *(undefined1 *)(unaff_ep + 1) = in_r15;
  *(undefined1 *)(unaff_ep + 0x41) = in_r15;
  uVar30 = (uint)*(ushort *)(unaff_ep + 0x18);
  sVar19 = *(short *)(uVar30 + 0xc);
  iVar17 = (int)*(short *)(uVar30 + 0xa2);
  bVar4 = (byte)((uint)&stack0x00000000 >> 0x18);
  bVar2 = bVar4 >> 7;
  __saturate(uVar31 - (int)&stack0x00000000);
  bVar3 = (byte)(*(short *)(uVar30 + 0xa2) >> 0xf) >> 7;
  iVar23 = unaff_r26 - iVar17;
  __saturate(iVar23);
  *(char *)(uVar30 + 0xb) = (char)in_r14;
  uVar31 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) ||
                    -cVar9 != 0 && -cVar9 == (byte)((uint)-iVar27 >> 0x1f)) ||
                   (byte)(uVar31 >> 0x1f) != bVar2 &&
                   bVar2 == (byte)(uVar31 - (int)&stack0x00000000 >> 0x1f)) ||
                  (byte)((uint)unaff_r26 >> 0x1f) != bVar3 &&
                  bVar3 == (byte)((uint)(unaff_r26 - iVar17) >> 0x1f)) || SCARRY4(iVar23,0xb)) << 4;
  __saturate(iVar23 + 0xbU);
  *(int *)(uVar30 + 0x7c) = unaff_r27;
  uVar32 = *(uint *)(uVar30 + 0x84);
  uVar22 = unaff_r21 | in_r1 | (uint)&stack0x00000000 | in_r1;
  uVar20 = unaff_gp;
  iVar18 = FUN_0002dadc();
  *(uint *)(uVar30 + 0x3c) = uVar30;
  iVar27 = (int)sVar19;
  *(uint *)(uVar30 + 0x3c) = iVar23 + 0xbU | uVar32;
  bVar2 = (byte)((uint)(iVar27 * -0xf) >> 0x1f);
  __saturate(in_r1 + iVar27 * 0xf);
  iVar23 = *(int *)((uVar30 | uVar32) + 0xf8);
  uRam00028a02 = (undefined2)iVar23;
  *(undefined1 *)(iVar17 + 0x159a) = param_2;
  sVar19 = *(short *)(iVar23 + 0x60);
  *(uint *)(iVar23 + 0x38) = uVar20;
  sVar11 = *(short *)(uVar32 + 0xb2);
  iVar17 = (int)sVar11;
  uVar20 = *(uint *)(uVar32 + 0x24);
  *(undefined4 *)(uVar32 - 0x2c6) = in_r19;
  bVar8 = ((bool)((byte)(uVar31 >> 4) & 1) ||
          (byte)(in_r1 >> 0x1f) != bVar2 && bVar2 == (byte)(in_r1 + iVar27 * 0xf >> 0x1f)) ||
          SCARRY4(uVar32,-5);
  __saturate(uVar32 - 5);
  *(int *)(uVar32 + 0x77) = unaff_r27;
  uVar33 = uVar32 / in_r2;
  uVar20 = uVar20 ^ unaff_r25;
  *(char *)(iVar18 + 0x159a) = (char)uVar20;
  *(uint *)(uVar32 + 0x33) = uVar20;
  *(undefined4 *)(uVar32 - 0x2cb) = in_r19;
  *(uint *)(uVar32 + 0x77) = uVar33;
  uVar30 = ~unaff_r29;
  iVar27 = *(int *)(uVar32 + 0x7f);
  *(char *)(iVar18 + 0x159a) = (char)uVar20;
  param_1 = uVar22 | (int)sVar19 | param_1;
  uVar31 = (uint)*(short *)(uVar32 + 0x89);
  iVar18 = in_r14 >> 6;
  *(uint *)(uVar32 + 0x33) = uVar20;
  *(int *)(uVar32 + 0x6f) = iVar27 + 9;
  cVar9 = *(char *)(iVar17 + -0x7d85);
  *(uint *)(uVar32 + 0x77) = uVar33;
  iVar27 = (int)cVar9;
  do {
    iVar23 = iVar27;
    bVar2 = -(char)(iVar23 >> 0x1f);
    bVar8 = bVar8 || bVar2 != 0 && bVar2 == (byte)((uint)-iVar23 >> 0x1f);
    __saturate(-iVar23);
    iVar27 = -iVar23;
  } while (iVar23 == 0);
  __saturate(param_1);
  *(uint *)(uVar32 + 0x2f) = param_1;
  do {
    bVar1 = unaff_tp <= uVar20;
    bVar2 = (byte)(unaff_tp >> 0x1f);
    bVar8 = bVar8 || (byte)(uVar20 >> 0x1f) != bVar2 && bVar2 == (byte)(uVar20 - unaff_tp >> 0x1f);
    __saturate(uVar20 - unaff_tp);
    uVar20 = uVar20 - unaff_tp ^ unaff_gp;
  } while (bVar1);
  uVar20 = (uint)(bVar8 || SCARRY4(param_1,param_1)) << 4;
  __saturate(param_1 * 2);
  uVar22 = *(int *)(uVar32 + 0x7f) - (int)*(char *)(uVar32 + 1);
  *(short *)(uVar32 - 3) = sVar11;
  func_0xffe3ccd2();
  bVar4 = bVar4 >> 7;
  __saturate(iVar18 - (int)&stack0x00000000);
  iVar23 = in_r1 + iVar23;
  bVar15 = (byte)(in_r1 >> 0x18);
  bVar2 = (byte)((uint)-iVar23 >> 0x1f);
  iVar28 = in_r1 + iVar23;
  __saturate(iVar28);
  bVar3 = (byte)((uint)iVar28 >> 0x1f);
  __saturate(in_r1 - iVar28);
  sVar19 = *(short *)(uVar32 - 3);
  iVar27 = (int)sVar19;
  *(short *)((in_r1 - iVar28) + 0xd3c) = (short)uVar22;
  cVar10 = *(char *)(uVar32 + 1);
  uVar14 = (undefined1)uVar33;
  *(undefined1 *)(iVar27 + 2) = uVar14;
  *(undefined1 *)(iVar27 + 1) = uVar14;
  iVar21 = iVar27 + 0x10000;
  *(undefined1 *)(iVar27 + 1) = uVar14;
  *(uint *)(uVar32 + 0x6f) = uVar22 / uVar31;
  iVar24 = *(int *)(uVar32 + 0x7b);
  cVar9 = *(char *)(iVar17 + -0x7d85);
  *(uint *)(uVar32 + 0x77) = uVar33;
  __saturate((int)cVar10);
  iVar34 = (int)(short)*(undefined4 *)(uVar32 + 0x7f) * (int)sVar19;
  bVar5 = (byte)(unaff_gp >> 0x1f);
  __saturate(iVar21 - unaff_gp);
  sVar11 = *(short *)(uVar32 + 0x3d);
  *(undefined1 *)(iVar27 + 1) = uVar14;
  bVar6 = (byte)(cVar9 >> 7) >> 7;
  uVar31 = in_r1 - (int)cVar9;
  __saturate(uVar31);
  iVar25 = iVar24 + -9;
  __saturate(iVar25);
  if (uVar31 < 0xb) {
    *(undefined1 *)(iVar27 + 1) = uVar14;
    *(undefined1 *)(iVar27 + 8) = uVar14;
    *(undefined1 *)(iVar27 + 1) = uVar14;
    *(int *)(uVar32 + 0x6f) = iVar34;
  }
  sVar12 = *(short *)(uVar32 + 0x89);
  uVar14 = (undefined1)sVar19;
  *(undefined1 *)(sVar11 + 0x159a) = uVar14;
  *(int *)(uVar32 + 0x33) = iVar27;
  cVar10 = (&DAT_ffff8f05)[iVar17];
  iVar29 = (int)cVar10;
  uVar13 = *(ushort *)(uVar32 + 0x13);
  *(uint *)(uVar13 + 0x34) = in_r1;
  bVar16 = (byte)(uVar30 >> 0x18);
  iVar27 = iVar25 - uVar30;
  __saturate(iVar27);
  *(short *)(iVar29 + 0xd1c) = (short)iVar34;
  *(uint *)(*(ushort *)(uVar13 + 0x18) + 0x38) = in_r1;
  bVar7 = (byte)(cVar10 >> 7) >> 7;
  __saturate(sVar12 - iVar29);
  iVar34 = iVar27 - uVar30;
  __saturate(iVar34);
  *(undefined1 *)(iVar17 + 0x47ff) = uVar14;
  iVar26 = iVar34 - uVar30;
  __saturate(iVar26);
  *(undefined1 *)(iVar17 + 0x47ff) = uVar14;
  __saturate(iVar26 - uVar30);
  if (((((((((((!(bool)((byte)(uVar20 >> 4) & 1) &&
               ((byte)((uint)iVar18 >> 0x1f) == bVar4 ||
               bVar4 != (byte)((uint)(iVar18 - (int)&stack0x00000000) >> 0x1f))) &&
              (bVar15 >> 7 == bVar2 || bVar2 != (byte)(in_r1 + iVar23 >> 0x1f))) &&
             (bVar15 >> 7 == bVar3 || bVar3 != (byte)(in_r1 - iVar28 >> 0x1f))) &&
            ((byte)((uint)iVar21 >> 0x1f) == bVar5 || bVar5 != (byte)(iVar21 - unaff_gp >> 0x1f)))
           && (bVar15 >> 7 == bVar6 || bVar6 != (byte)(in_r1 - (int)cVar9 >> 0x1f))) &&
          (-1 < iVar24 || iVar24 + -9 < 0)) &&
         ((byte)((uint)iVar25 >> 0x1f) == bVar16 >> 7 ||
         bVar16 >> 7 != (byte)(iVar25 - uVar30 >> 0x1f))) &&
        ((byte)(sVar12 >> 0xf) >> 7 == bVar7 || bVar7 != (byte)((uint)(sVar12 - iVar29) >> 0x1f)))
       && ((byte)((uint)iVar27 >> 0x1f) == bVar16 >> 7 ||
          bVar16 >> 7 != (byte)(iVar27 - uVar30 >> 0x1f))) &&
      ((byte)((uint)iVar34 >> 0x1f) == bVar16 >> 7 || bVar16 >> 7 != (byte)(iVar34 - uVar30 >> 0x1f)
      )) && ((byte)((uint)iVar26 >> 0x1f) == bVar16 >> 7 ||
            bVar16 >> 7 != (byte)(iVar26 - uVar30 >> 0x1f))) {
    __saturate((iVar26 - uVar30) + 0xb);
    __saturate(*(char *)(*(ushort *)((unaff_gp >> 0x17) / 0 - 0x7af0) - 0x7d85) + 0xe);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0002570c @ 0002570c (size 332) ====

void FUN_0002570c(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  int in_r1;
  ushort unaff_gp;
  int unaff_tp;
  ushort uVar4;
  undefined1 in_r14;
  int in_r19;
  int iVar5;
  int unaff_r29;
  int unaff_ep;
  int iVar6;
  ushort *unaff_CTBP;
  
  *(undefined2 *)(unaff_ep + 0x4c) = *(undefined2 *)(unaff_ep + 0xd6);
  uVar4 = unaff_gp & 0x1697;
  DAT_00001fe0 = (undefined1)*(undefined2 *)(unaff_ep + 0xd6);
  iVar6 = (int)*(char *)(((uint)*(ushort *)(unaff_ep + 0x18) - unaff_r29) + 0x53);
  *(undefined1 *)(iVar6 + 0x3d) = 0;
  cVar1 = *(char *)(iVar6 + 0x40);
  iVar6 = (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  iVar6 = *(char *)(cVar1 + 0x50) - iVar6;
  uVar2 = *(undefined1 *)(iVar6 + 0x5c);
  iVar5 = (int)DAT_ffffe700;
  *(short *)(iVar6 + 0xfe) = (short)DAT_ffffe700;
  uVar3 = *(ushort *)(iVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x3d) = 0;
  iVar6 = (int)*(char *)(uVar3 + 0x55);
  __saturate(-iVar5);
  *(undefined1 *)(unaff_tp + 0x37c9) = uVar2;
  *(undefined1 *)(param_2 + 0x4000) = uVar2;
  __saturate(-unaff_r29);
  *(undefined1 *)(in_r1 + -0x6c6d) = uVar2;
  *(undefined1 *)(iVar6 + 0xb) = in_r14;
  *(undefined1 *)(unaff_tp + 0x37c9) = uVar2;
  *(undefined1 *)(param_2 + 0x4000) = uVar2;
  __saturate(unaff_r29);
  *(undefined1 *)(in_r1 + -0x6c6d) = uVar2;
  *(undefined1 *)(iVar6 + 0xb) = in_r14;
  *(undefined1 *)(in_r1 + 0x18f5) = uVar2;
  *(undefined1 *)(unaff_tp + 0x4000) = uVar2;
  __saturate(-unaff_r29);
  *(undefined1 *)(in_r1 + 0x18f5) = uVar2;
  *(undefined1 *)(unaff_tp + 0x4000) = uVar2;
  __saturate(unaff_r29);
  *(ushort *)(iVar6 + 0xa8) = uVar4;
  *(undefined1 *)(in_r1 + -0x18f6) = uVar2;
  *(undefined1 *)(unaff_tp + 0x4000) = uVar2;
  __saturate(-unaff_r29);
  *(undefined1 *)(in_r1 + -0x18f6) = uVar2;
  *(undefined1 *)(unaff_tp + 0x4000) = uVar2;
  __saturate(unaff_r29);
  *(ushort *)(iVar6 + 0xa8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00025856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00025858 + *(short *)(&DAT_00025858 + in_r19 * 2) * 2))();
  return;
}


// ==== FUN_00026672 @ 00026672 (size 228) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000266de) overlaps instruction at (ram,0x000266dc)
    */
/* WARNING: Removing unreachable block (ram,0x000266de) */

void FUN_00026672(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int in_r10;
  int iVar4;
  undefined1 unaff_r20;
  int unaff_r22;
  uint unaff_ep;
  uint uVar5;
  undefined4 unaff_lp;
  ushort *unaff_CTBP;
  
  while( true ) {
    *(undefined4 *)(unaff_ep + 0x74) = unaff_lp;
    bVar1 = unaff_ep < 5;
    __saturate(unaff_ep - 5);
    *(undefined1 *)(unaff_ep + 0x69) = 0;
    uVar3 = *(undefined1 *)(unaff_ep + 0x72);
    unaff_ep = ~(int)*(char *)(param_3 + -0x78b7);
    DAT_fffffd00 = 0;
    if (bVar1 && unaff_r22 != 0) break;
    *(undefined1 *)(in_r10 + 0x5b3e) = 0;
  }
  cVar2 = *(char *)(unaff_ep + 0x53);
  *(undefined1 *)(cVar2 + 0x3d) = 0;
  cVar2 = *(char *)(cVar2 + 0x40);
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  uVar5 = (uint)*(ushort *)(*(char *)(cVar2 + 0x50) + 0x18);
  *(undefined1 *)(uVar5 + 0x3e) = 0;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0x3d) = 0;
  iVar4 = FUN_00053786();
  *(undefined1 *)(uVar5 + 0x15) = uVar3;
  *(undefined1 *)(iVar4 + 0x49da) = unaff_r20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000267e2 @ 000267e2 (size 254) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000268c0) overlaps instruction at (ram,0x000268be)
    */

void FUN_000267e2(void)

{
  byte bVar1;
  short sVar2;
  undefined1 in_r1;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint in_r10;
  undefined4 uVar6;
  uint unaff_r20;
  uint unaff_r21;
  undefined4 unaff_r22;
  code *unaff_r24;
  int unaff_r29;
  uint unaff_ep;
  uint uVar7;
  
  iVar4 = (int)*(short *)(unaff_ep + 0x86);
  *(undefined1 *)(unaff_ep + 0x14) = in_r1;
  uVar5 = (uint)*(short *)(unaff_ep + 0x88);
  uVar3 = (uint)(char)(&DAT_ffffa702)[unaff_r29];
  __saturate(*(int *)(unaff_ep + 0xf8) + -1);
  *(char *)(iVar4 + 0x5928) = (char)unaff_r22;
  __saturate(unaff_r22);
  uVar6 = unaff_r22;
  (*unaff_r24)();
  DAT_000000ff = (undefined1)uVar6;
  uVar7 = (uint)*(ushort *)(*(ushort *)((unaff_ep | unaff_r20) + 0x18) + 0x18);
  *(short *)(uVar7 + 200) = (short)uVar5;
  *(char *)(uVar7 + 0xf) = (char)in_r10;
  __saturate((int)unaff_r24 - in_r10);
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(char *)(uVar7 + 0xf) = (char)in_r10;
  sVar2 = *(short *)(uVar7 + 4);
  *(int *)(uVar7 + 0x84) = iVar4;
  bVar1 = *(byte *)((*(uint *)(uVar7 + 0xf8) | unaff_r21 | uVar3 | uVar5 | in_r10) + 1);
  __saturate(unaff_r22);
  (*unaff_r24)();
  DAT_000000ff = (undefined1)unaff_r22;
  *(char *)(*(ushort *)(*(ushort *)(((uint)bVar1 | (int)sVar2) + 0x18) + 0x18) + 0xf) = (char)in_r10
  ;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
  byte bVar1;
  uint in_r1;
  int in_r17;
  undefined1 in_r19;
  int unaff_ep;
  uint uVar2;
  undefined2 unaff_lp;
  
  bVar1 = -(char)(in_r17 >> 0x1f);
  if (-in_r17 < 0 == (bVar1 != 0 && bVar1 == (byte)((uint)-in_r17 >> 0x1f)) && in_r17 != 0) {
    uVar2 = (uint)*(ushort *)(unaff_ep + 0x18);
    do {
      *(undefined2 *)((in_r1 | 0x16ce) + 0x16ce) = unaff_lp;
      uVar2 = (uint)*(ushort *)(*(ushort *)(uVar2 + 0x18) + 0x18);
      *(undefined1 *)(uVar2 + 0x5f) = in_r19;
      in_r1 = (uint)*(char *)(uVar2 + 0x6f);
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00027554 @ 00027554 (size 170) ====

/* WARNING: Instruction at (ram,0x000275fa) overlaps instruction at (ram,0x000275f8)
    */
/* WARNING: Removing unreachable block (ram,0x0002752e) */

void FUN_00027554(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint in_r1;
  int unaff_tp;
  int in_r10;
  int in_r11;
  int extraout_r11;
  int in_r12;
  undefined1 in_r15;
  undefined1 uVar2;
  uint in_r16;
  undefined4 in_r19;
  uint unaff_r21;
  uint unaff_r22;
  int unaff_ep;
  int iVar3;
  int unaff_lp;
  uint in_PSW;
  int in_stack_00000020;
  char local_1900;
  
  if ((bool)((byte)(in_PSW >> 3) & 1) || (bool)((byte)in_PSW & 1)) {
    *(char *)(in_r10 + 0x56b7) = (char)in_r16;
    *(byte *)(in_r11 + -0x78b5) = *(byte *)(in_r11 + -0x78b5) | 4;
    return;
  }
  func_0x00116598();
  if (!(bool)((byte)(in_PSW >> 3) & 1) && !(bool)((byte)in_PSW & 1)) {
    iVar3 = (int)*(char *)(unaff_lp + 0x7bd1);
    if (0 < (int)(unaff_r21 | in_r1)) {
      return;
    }
    *(uint *)(iVar3 + 0xec) = (uint)*(ushort *)(iVar3 + 0xc);
    uVar2 = *(undefined1 *)(iVar3 + 0x5d);
    uVar1 = *(ushort *)(unaff_lp + 0x18);
    iVar3 = func_0xffea4b28();
    *(undefined4 *)(local_1900 + -0xcc6) = in_r19;
    __saturate(unaff_lp + -5);
    __saturate(uVar1 + 0xb);
    (&DAT_000056b3)[iVar3] = uVar2;
    return;
  }
  *(char *)(extraout_r11 + 0x671) = (char)in_r16;
  *(char *)(in_r12 + 0x675) = (char)in_r16;
  *(undefined1 *)(unaff_ep + 0x67) = in_r15;
  func_0xffee668e();
  func_0xfff2c25a();
  iVar3 = func_0xffee1d26();
  iRam00028d03 = unaff_lp;
  *(char *)(iVar3 + 0x5c3a) = (char)in_r16;
  *(char *)(unaff_tp + 0x83) = (char)in_r16;
  __saturate(*(char *)(unaff_ep + 0x3b) + -5);
  *(short *)(*(char *)(param_3 + -0xf84) + 0x650) = (short)in_stack_00000020;
  *(uint *)(in_stack_00000020 + 0x20) = in_r16 | unaff_r22;
  func_0xffeb5d68();
  return;
}


// ==== FUN_000275ea @ 000275ea (size 20) ====

void FUN_000275ea(void)

{
  int in_r10;
  int in_r11;
  undefined1 in_r15;
  int unaff_ep;
  
  *(undefined1 *)(unaff_ep + 0x67) = in_r15;
  *(undefined1 *)(in_r10 + 0x56b7) = *(undefined1 *)(unaff_ep + 5);
  *(byte *)(in_r11 + -0x78b5) = *(byte *)(in_r11 + -0x78b5) | 4;
  return;
}


// ==== FUN_00029638 @ 00029638 (size 130) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00029638(undefined4 param_1,uint param_2,uint param_3)

{
  char cVar1;
  code *unaff_tp;
  short sVar2;
  code *pcVar3;
  int in_r17;
  code *in_r18;
  int unaff_r27;
  int unaff_ep;
  int unaff_lp;
  
  cVar1 = *(char *)(unaff_ep + 0x7e);
  sVar2 = (short)cVar1;
  *(char *)(unaff_ep + 2) = cVar1;
  *(char *)(unaff_ep + 6) = cVar1;
  *(char *)(unaff_ep + 10) = cVar1;
  *(char *)(unaff_ep + 0xe) = cVar1;
  *(char *)(unaff_ep + 0x12) = cVar1;
  *(char *)(unaff_ep + 0x16) = cVar1;
  *(char *)(unaff_ep + 0x1a) = cVar1;
  *(char *)(unaff_ep + 0x1e) = cVar1;
  *(char *)(unaff_ep + 0x22) = cVar1;
  *(char *)(unaff_ep + 0x26) = cVar1;
  pcVar3 = (code *)(*in_r18)(param_1,param_2,param_3 / param_2);
  *(undefined1 *)(unaff_ep + 0x6d) = 0;
  (*pcVar3)();
  *(short *)(unaff_ep + 0x3e) = sVar2;
  (*unaff_tp)();
  __saturate(in_r17 + unaff_lp);
  (*(code *)0x0)();
                    /* WARNING: Could not recover jumptable at 0x000296b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000296ba + *(short *)(&DAT_000296ba + unaff_r27 * 2) * 2))
            (param_1,(int)_DAT_ffffe286);
  return;
}


// ==== FUN_0002d086 @ 0002d086 (size 44) ====

void FUN_0002d086(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int unaff_tp;
  int iVar7;
  int iVar8;
  int in_r10;
  uint in_r16;
  undefined4 uVar9;
  int iVar10;
  char cVar11;
  int in_r19;
  uint unaff_r20;
  int iVar12;
  int unaff_r21;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint unaff_lp;
  
  *(undefined2 *)((unaff_lp | unaff_r20) + 0x5e) = *(undefined2 *)((unaff_lp | unaff_r20) + 0xc6);
  iVar13 = (int)(char)(&DAT_ffff8016)[unaff_r20];
  *(char *)(iVar13 + 1) = (char)in_r16;
  *(char *)(iVar13 + 0x51) = (char)(in_r16 >> 1);
  iVar7 = unaff_tp >> 0x14;
  cVar11 = *(char *)(param_2 + -0x5ad8) >> 0x15;
  uVar9 = *(undefined4 *)(*(int *)(iVar13 + 0x28) + 0x24);
  uVar14 = unaff_r21 >> 0x16 | unaff_r20;
  *(undefined2 *)(uVar14 + 0x5e) = *(undefined2 *)(uVar14 + 0xc6);
  iVar13 = (int)(char)(&DAT_ffff8016)[unaff_r20];
  uVar5 = (undefined1)uVar9;
  *(undefined1 *)(iVar13 + 1) = uVar5;
  *(undefined1 *)(iVar13 + 1) = uVar5;
  uVar15 = *(uint *)(iVar13 + 0x28);
  uVar14 = unaff_r21 >> 0x16 ^ param_4;
  do {
    iVar13 = *(int *)(uVar15 + 0x28);
    sVar2 = *(short *)(iVar13 + 0x20);
    iVar7 = iVar7 >> 0x14;
    cVar11 = cVar11 >> 0x15;
    uVar1 = *(ushort *)(iVar13 + -0x2aec);
    iVar10 = *(int *)(iVar13 + 0x24);
    uVar15 = (int)uVar14 >> 0x16 | unaff_r20;
    *(undefined2 *)(uVar15 + 0x5e) = *(undefined2 *)(uVar15 + 0xc6);
    iVar13 = (int)(char)(&DAT_ffff8016)[unaff_r20];
    uVar5 = (undefined1)iVar10;
    *(undefined1 *)(iVar13 + 1) = uVar5;
    *(undefined1 *)(iVar13 + 1) = uVar5;
    sVar3 = *(short *)(*(int *)(iVar13 + 0x28) + 0x1e);
    __saturate((undefined1 *)((int)register0x0000000c + param_4));
    iVar8 = (int)*(short *)(unaff_r20 + 0x30);
    iVar12 = (int)*(char *)(iVar7 + -0x1f30);
    sVar4 = *(short *)(unaff_r20 + 0x88);
    iVar13 = iVar8 + param_4;
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 + param_4));
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + param_4));
    uVar5 = (undefined1)iVar7;
    *(undefined1 *)(sVar4 + 0x5928) = uVar5;
    __saturate(iVar7);
    *(undefined1 *)((int)register0x0000000c + iVar8 * 2 + param_4 + 0xff) = uVar5;
    *(uint *)((sVar2 - iVar10) + 0x18bc) = uVar1 / 0;
    *(int *)(iVar12 + 4) = iVar12;
    iVar10 = iVar8 + iVar8 + iVar13;
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + iVar13));
    uVar14 = (int)uVar14 >> 0x16 | (uint)((int)register0x0000000c + iVar8 * 2 + iVar13);
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + iVar8 + iVar13));
    *(short *)(iVar12 + 0x3e) = sVar4 - sVar3;
    uVar15 = (uint)*(ushort *)(*(ushort *)(iVar12 + 0x18) + 0x18);
    puVar6 = (undefined1 *)((int)register0x0000000c + in_r19 + iVar8 + iVar10);
    register0x0000000c = (BADSPACEBASE *)((int)register0x0000000c + in_r19 + iVar8 + iVar10);
    __saturate(puVar6);
    param_4 = (uint)*(short *)(uVar15 + 2);
    unaff_r20 = 0xfffffff4;
    *(char *)(in_r19 + 0x210) = cVar11;
    *(undefined1 *)(in_r10 + 0x5ec8) = uVar5;
    *(undefined1 *)(iVar7 + 0xf0) = uVar5;
  } while( true );
}


// ==== FUN_0002d0b2 @ 0002d0b2 (size 276) ====

void FUN_0002d0b2(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int unaff_tp;
  int iVar7;
  int iVar8;
  int in_r10;
  undefined1 in_r15;
  undefined4 uVar9;
  int iVar10;
  char cVar11;
  int in_r19;
  uint unaff_r20;
  int iVar12;
  int unaff_r21;
  int unaff_ep;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  *(undefined1 *)(unaff_ep + 0x51) = in_r15;
  iVar7 = unaff_tp >> 0x14;
  cVar11 = *(char *)(param_2 + -0x5ad8) >> 0x15;
  uVar9 = *(undefined4 *)(*(int *)(unaff_ep + 0x28) + 0x24);
  uVar13 = unaff_r21 >> 0x16 | unaff_r20;
  *(undefined2 *)(uVar13 + 0x5e) = *(undefined2 *)(uVar13 + 0xc6);
  iVar14 = (int)(char)(&DAT_ffff8016)[unaff_r20];
  uVar5 = (undefined1)uVar9;
  *(undefined1 *)(iVar14 + 1) = uVar5;
  *(undefined1 *)(iVar14 + 1) = uVar5;
  uVar15 = *(uint *)(iVar14 + 0x28);
  uVar13 = unaff_r21 >> 0x16 ^ param_4;
  do {
    iVar14 = *(int *)(uVar15 + 0x28);
    sVar2 = *(short *)(iVar14 + 0x20);
    iVar7 = iVar7 >> 0x14;
    cVar11 = cVar11 >> 0x15;
    uVar1 = *(ushort *)(iVar14 + -0x2aec);
    iVar10 = *(int *)(iVar14 + 0x24);
    uVar15 = (int)uVar13 >> 0x16 | unaff_r20;
    *(undefined2 *)(uVar15 + 0x5e) = *(undefined2 *)(uVar15 + 0xc6);
    iVar14 = (int)(char)(&DAT_ffff8016)[unaff_r20];
    uVar5 = (undefined1)iVar10;
    *(undefined1 *)(iVar14 + 1) = uVar5;
    *(undefined1 *)(iVar14 + 1) = uVar5;
    sVar3 = *(short *)(*(int *)(iVar14 + 0x28) + 0x1e);
    __saturate((undefined1 *)((int)register0x0000000c + param_4));
    iVar8 = (int)*(short *)(unaff_r20 + 0x30);
    iVar12 = (int)*(char *)(iVar7 + -0x1f30);
    sVar4 = *(short *)(unaff_r20 + 0x88);
    iVar14 = iVar8 + param_4;
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 + param_4));
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + param_4));
    uVar5 = (undefined1)iVar7;
    *(undefined1 *)(sVar4 + 0x5928) = uVar5;
    __saturate(iVar7);
    *(undefined1 *)((int)register0x0000000c + iVar8 * 2 + param_4 + 0xff) = uVar5;
    *(uint *)((sVar2 - iVar10) + 0x18bc) = uVar1 / 0;
    *(int *)(iVar12 + 4) = iVar12;
    iVar10 = iVar8 + iVar8 + iVar14;
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + iVar14));
    uVar13 = (int)uVar13 >> 0x16 | (uint)((int)register0x0000000c + iVar8 * 2 + iVar14);
    __saturate((undefined1 *)((int)register0x0000000c + iVar8 * 2 + iVar8 + iVar14));
    *(short *)(iVar12 + 0x3e) = sVar4 - sVar3;
    uVar15 = (uint)*(ushort *)(*(ushort *)(iVar12 + 0x18) + 0x18);
    puVar6 = (undefined1 *)((int)register0x0000000c + in_r19 + iVar8 + iVar10);
    register0x0000000c = (BADSPACEBASE *)((int)register0x0000000c + in_r19 + iVar8 + iVar10);
    __saturate(puVar6);
    param_4 = (uint)*(short *)(uVar15 + 2);
    unaff_r20 = 0xfffffff4;
    *(char *)(in_r19 + 0x210) = cVar11;
    *(undefined1 *)(in_r10 + 0x5ec8) = uVar5;
    *(undefined1 *)(iVar7 + 0xf0) = uVar5;
  } while( true );
}


// ==== FUN_00030b42 @ 00030b42 (size 278) ====

/* WARNING: Instruction at (ram,0x00030bb2) overlaps instruction at (ram,0x00030bb0)
    */
/* WARNING: Removing unreachable block (ram,0x00030b12) */

void FUN_00030b42(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int in_r1;
  uint in_r2;
  uint unaff_gp;
  int unaff_tp;
  int iVar4;
  int in_r10;
  undefined2 extraout_r11;
  uint in_r11;
  uint in_r14;
  uint uVar5;
  uint in_r15;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint in_r18;
  uint unaff_r21;
  uint *unaff_r22;
  uint unaff_r24;
  uint unaff_r26;
  uint uVar9;
  uint unaff_r27;
  int unaff_r28;
  uint *unaff_ep;
  uint unaff_lp;
  int unaff_CTBP;
  
  do {
    __saturate(-unaff_r28);
    *(short *)(unaff_ep + 0x21) = (short)in_r11;
    uVar8 = (uint)(short)unaff_ep[0x39];
    *(char *)(param_3 + 0x5928) = (char)(short)unaff_ep[0x39];
    while( true ) {
      *(char *)(in_r1 + 0xff) = (char)uVar8;
      __saturate(param_3 - in_r15);
      uVar9 = unaff_r26 | unaff_r21 | unaff_lp;
      iVar4 = (int)(short)unaff_r22[0x20];
      *(char *)(in_r10 + 0x5898) = (char)uVar8;
      uVar6 = iVar4 - (param_3 - in_r15);
      __saturate(uVar6);
      uVar5 = in_r14 >> 3;
      __saturate(uVar8 + 0x5e9b);
      *(char *)(in_r10 + 0x5898) = (char)(uVar8 + 0x5e9b);
      unaff_lp = (int)(short)unaff_lp + 2U & in_r2;
      uVar7 = (undefined1)(short)unaff_r22[0x39];
      *unaff_r22 = in_r2;
      in_r10 = (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 8)))();
      cVar1 = *(char *)((int)unaff_r22 + 0x45);
      DAT_ffffffef = (undefined1)unaff_r22[8];
      DAT_ffffffbf = uVar7;
      *(char *)(param_3 + 0x5898) = (char)unaff_r22[8];
      in_r15 = ((uVar6 / unaff_r24) / unaff_r24) / unaff_r24;
      in_r14 = (int)&stack0x00000000 - uVar5;
      __saturate(in_r14);
      *(undefined2 *)(unaff_r22 + 0x21) = extraout_r11;
      unaff_r26 = uVar9 + 0xb;
      __saturate(unaff_r26);
      unaff_r22[0x1f] = unaff_r27;
      uVar8 = unaff_r22[8];
      *(char *)((int)unaff_r22 + 0x5f) = (char)in_r1;
      in_r2 = (uint)*(char *)((int)unaff_r22 + 0x57);
      sVar2 = *(short *)((int)unaff_r22 + 0x8e);
      *(undefined2 *)(iVar4 + -0x1d80) = 0;
      unaff_r28 = (int)(short)uVar8 - 0xb;
      if (10 < (uint)(int)(short)uVar8 || (unaff_gp | 0xe255) == 0) break;
      uVar8 = (unaff_gp | 0xe255) / 9;
      *(undefined1 *)((int)unaff_r22 + 0x33) = 0;
      *(char *)(in_r10 + 0x5898) = (char)uVar8;
      if (!SCARRY4((int)cVar1,-4)) {
        __saturate(uVar8 - 0xf);
        uVar3 = Ram00000013;
        __saturate(in_r1 - unaff_gp);
        __saturate((in_r18 & 0xff) - 0x7283);
                    /* WARNING: Could not recover jumptable at 0x00030c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00030c28 + *(short *)(&DAT_00030c28 + unaff_tp * 2) * 2))();
        return;
      }
      __saturate(unaff_r24 - (int)sVar2);
    }
    in_r11 = (int)sVar2 ^ param_3;
    unaff_ep = unaff_r22;
  } while( true );
}


// ==== FUN_00030c88 @ 00030c88 (size 20) ====

/* WARNING: Instruction at (ram,0x00030f3c) overlaps instruction at (ram,0x00030f3a)
    */
/* WARNING: Removing unreachable block (ram,0x00030e88) */
/* WARNING: Removing unreachable block (ram,0x00030e8a) */
/* WARNING: Removing unreachable block (ram,0x00030e90) */
/* WARNING: Removing unreachable block (ram,0x00030d38) */
/* WARNING: Removing unreachable block (ram,0x00030d3e) */
/* WARNING: Removing unreachable block (ram,0x00030d6a) */
/* WARNING: Removing unreachable block (ram,0x00030dc8) */
/* WARNING: Removing unreachable block (ram,0x00030e0a) */
/* WARNING: Removing unreachable block (ram,0x00030e24) */
/* WARNING: Removing unreachable block (ram,0x00030e2a) */
/* WARNING: Removing unreachable block (ram,0x00030e32) */
/* WARNING: Removing unreachable block (ram,0x00030e3c) */
/* WARNING: Removing unreachable block (ram,0x00030e48) */
/* WARNING: Removing unreachable block (ram,0x00030e66) */
/* WARNING: Removing unreachable block (ram,0x00030e6c) */
/* WARNING: Removing unreachable block (ram,0x00030e74) */
/* WARNING: Removing unreachable block (ram,0x00030e7e) */
/* WARNING: Removing unreachable block (ram,0x00030eb4) */
/* WARNING: Removing unreachable block (ram,0x00030ebc) */
/* WARNING: Removing unreachable block (ram,0x00030eee) */
/* WARNING: Removing unreachable block (ram,0x00030f2e) */
/* WARNING: Removing unreachable block (ram,0x00030f34) */
/* WARNING: Removing unreachable block (ram,0x00030f60) */
/* WARNING: Removing unreachable block (ram,0x00030f72) */
/* WARNING: Removing unreachable block (ram,0x00030f3c) */
/* WARNING: Removing unreachable block (ram,0x00030f7c) */
/* WARNING: Removing unreachable block (ram,0x00030f84) */
/* WARNING: Removing unreachable block (ram,0x00030fb0) */
/* WARNING: Removing unreachable block (ram,0x00030fb2) */
/* WARNING: Removing unreachable block (ram,0x00030fba) */
/* WARNING: Removing unreachable block (ram,0x00030fe6) */

void FUN_00030c88(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int in_r2;
  int unaff_gp;
  int iVar3;
  uint in_r10;
  undefined2 in_r11;
  int in_r13;
  int in_r14;
  byte in_r16;
  int in_r17;
  int in_r18;
  uint unaff_r21;
  int unaff_r25;
  int iVar4;
  int unaff_r27;
  int unaff_r29;
  undefined4 unaff_lp;
  
  __saturate(unaff_gp - in_r2);
  *(char *)(in_r17 + 0x20e) = (char)in_r17;
  __saturate(0);
  *(byte *)(in_r10 + 0x5b56) = in_r16;
  bVar2 = in_r16 & (byte)in_r18 & (byte)unaff_r27;
  iVar4 = -3;
  *(byte *)(param_3 + 0x1bb3) = bVar2;
  __saturate(-(DAT_ffff8f50 + -0xb));
  *(byte *)(in_r13 + 0x5928) = bVar2;
  do {
    *(byte *)(param_3 + 0x3766) = bVar2;
  } while ((int)(unaff_r21 | in_r10) < 0);
  __saturate(*(char *)(in_r18 + -0x1dab) + unaff_r27);
  __saturate(unaff_r25 + -0x7103);
  iVar3 = *(int *)(unaff_r29 + 0x80);
  *(undefined4 *)(unaff_r29 + 0x74) = unaff_lp;
  __saturate((char *)(unaff_r29 + -5));
  cVar1 = *(char *)(param_3 + -0x78b8);
  *(undefined1 *)(unaff_r29 + 0x2e) = 0;
  __saturate(-(int)cVar1);
  *(char *)(in_r10 + 0x1bbe) = (char)(unaff_r25 + -0x7103);
  do {
    cVar1 = *(char *)(param_3 + -0x7d85);
    __saturate(iVar4 + 0xb);
    iVar4 = (int)*(char *)(unaff_r29 + 0x26);
    *(int *)(unaff_r29 + 0x77) = unaff_r27;
    *(undefined1 *)(iVar3 + 0x5898) = 2;
    *(char *)(unaff_r29 + -5) = -cVar1;
    __saturate((int)cVar1);
    in_r14 = (int)&stack0x00000000 - in_r14;
    __saturate(in_r14);
    *(undefined2 *)(unaff_r29 + 0x7f) = in_r11;
    Ram00000002 = (byte)unaff_r27;
  } while( true );
}


// ==== FUN_00030c9c @ 00030c9c (size 840) ====

/* WARNING: Instruction at (ram,0x00030f3c) overlaps instruction at (ram,0x00030f3a)
    */
/* WARNING: Removing unreachable block (ram,0x00030e88) */
/* WARNING: Removing unreachable block (ram,0x00030e8a) */
/* WARNING: Removing unreachable block (ram,0x00030e90) */
/* WARNING: Removing unreachable block (ram,0x00030d38) */
/* WARNING: Removing unreachable block (ram,0x00030d3e) */
/* WARNING: Removing unreachable block (ram,0x00030d6a) */
/* WARNING: Removing unreachable block (ram,0x00030dc8) */
/* WARNING: Removing unreachable block (ram,0x00030e0a) */
/* WARNING: Removing unreachable block (ram,0x00030e24) */
/* WARNING: Removing unreachable block (ram,0x00030e2a) */
/* WARNING: Removing unreachable block (ram,0x00030e32) */
/* WARNING: Removing unreachable block (ram,0x00030e3c) */
/* WARNING: Removing unreachable block (ram,0x00030e48) */
/* WARNING: Removing unreachable block (ram,0x00030e66) */
/* WARNING: Removing unreachable block (ram,0x00030e6c) */
/* WARNING: Removing unreachable block (ram,0x00030e74) */
/* WARNING: Removing unreachable block (ram,0x00030e7e) */
/* WARNING: Removing unreachable block (ram,0x00030eb4) */
/* WARNING: Removing unreachable block (ram,0x00030ebc) */
/* WARNING: Removing unreachable block (ram,0x00030eee) */
/* WARNING: Removing unreachable block (ram,0x00030f2e) */
/* WARNING: Removing unreachable block (ram,0x00030f34) */
/* WARNING: Removing unreachable block (ram,0x00030f60) */
/* WARNING: Removing unreachable block (ram,0x00030f72) */
/* WARNING: Removing unreachable block (ram,0x00030f3c) */
/* WARNING: Removing unreachable block (ram,0x00030f7c) */
/* WARNING: Removing unreachable block (ram,0x00030f84) */
/* WARNING: Removing unreachable block (ram,0x00030fb0) */
/* WARNING: Removing unreachable block (ram,0x00030fb2) */
/* WARNING: Removing unreachable block (ram,0x00030fba) */
/* WARNING: Removing unreachable block (ram,0x00030fe6) */

void FUN_00030c9c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint in_r10;
  undefined2 in_r11;
  int in_r13;
  int in_r14;
  byte in_r16;
  int in_r18;
  uint unaff_r21;
  int unaff_r25;
  int iVar4;
  int unaff_r27;
  int unaff_ep;
  undefined4 unaff_lp;
  
  *(byte *)(in_r10 + 0x5b56) = in_r16;
  bVar2 = in_r16 & (byte)in_r18 & (byte)unaff_r27;
  iVar4 = -3;
  *(byte *)(param_3 + 0x1bb3) = bVar2;
  __saturate(-(DAT_ffff8f50 + -0xb));
  *(byte *)(in_r13 + 0x5928) = bVar2;
  do {
    *(byte *)(param_3 + 0x3766) = bVar2;
  } while ((int)(unaff_r21 | in_r10) < 0);
  __saturate(*(char *)(in_r18 + -0x1dab) + unaff_r27);
  __saturate(unaff_r25 + -0x7103);
  iVar3 = *(int *)(unaff_ep + 0x80);
  *(undefined4 *)(unaff_ep + 0x74) = unaff_lp;
  __saturate((char *)(unaff_ep + -5));
  cVar1 = *(char *)(param_3 + -0x78b8);
  *(undefined1 *)(unaff_ep + 0x2e) = 0;
  __saturate(-(int)cVar1);
  *(char *)(in_r10 + 0x1bbe) = (char)(unaff_r25 + -0x7103);
  do {
    cVar1 = *(char *)(param_3 + -0x7d85);
    __saturate(iVar4 + 0xb);
    iVar4 = (int)*(char *)(unaff_ep + 0x26);
    *(int *)(unaff_ep + 0x77) = unaff_r27;
    *(undefined1 *)(iVar3 + 0x5898) = 2;
    *(char *)(unaff_ep + -5) = -cVar1;
    __saturate((int)cVar1);
    in_r14 = (int)&stack0x00000000 - in_r14;
    __saturate(in_r14);
    *(undefined2 *)(unaff_ep + 0x7f) = in_r11;
    Ram00000002 = (byte)unaff_r27;
  } while( true );
}


// ==== FUN_00031250 @ 00031250 (size 558) ====

/* WARNING: Removing unreachable block (ram,0x00031308) */
/* WARNING: Removing unreachable block (ram,0x00031314) */
/* WARNING: Removing unreachable block (ram,0x000312d2) */

void FUN_00031250(code *param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint in_r1;
  uint in_r2;
  uint unaff_tp;
  uint uVar5;
  int in_r13;
  uint in_r14;
  uint in_r15;
  undefined1 uVar6;
  int in_r16;
  uint unaff_r21;
  uint unaff_r22;
  uint unaff_r25;
  int unaff_r26;
  int iVar7;
  undefined4 unaff_r27;
  int unaff_r28;
  int unaff_r29;
  short *unaff_ep;
  int iVar8;
  short *psVar9;
  uint unaff_lp;
  uint uVar10;
  uint in_PSW;
  
  do {
    if ((in_PSW >> 1 & 1) != 0) {
      unaff_lp = unaff_lp - unaff_r29;
      __saturate(unaff_lp);
      *(char *)(in_r13 + 0x5f2a) = (char)in_r16;
      unaff_r21 = unaff_r21 | unaff_tp;
      in_r16 = 8;
      in_r14 = in_r14 | (uint)&stack0x00000000;
      *(int *)(unaff_ep + 4) = param_4;
      unaff_r22 = unaff_tp & 0xfd3b;
      in_PSW = (uint)SCARRY4((int)unaff_ep,-5) << 2;
      unaff_ep = (short *)((int)unaff_ep + -5);
      __saturate(unaff_ep);
      unaff_r28 = (int)*(char *)(param_3 - 0x78b9);
    }
    unaff_lp = (uint)(short)unaff_lp;
    unaff_ep[0x52] = (short)in_r15;
    *(char *)(param_4 + 0x5f14) = (char)in_r16;
    if (((byte)(in_PSW >> 2) & 1) != 1) {
      uVar6 = *(undefined1 *)(unaff_tp + 0x7283);
      uVar5 = unaff_tp ^ 0xa176;
      cVar2 = *(char *)(param_3 - 0x7d85);
      __saturate(unaff_r26 + 0xb);
      iVar7 = (int)*(char *)((int)unaff_ep + 0x3f);
      *(undefined1 *)(in_r1 + 0xff) = uVar6;
      *(undefined1 *)(param_4 + 0x5f14) = uVar6;
      *unaff_ep = (short)cVar2;
      iVar8 = -(int)cVar2;
      __saturate(iVar8);
      *(char *)unaff_ep = (char)iVar8;
      uVar10 = (unaff_lp / in_r1) / in_r1;
      cVar2 = *(char *)((int)unaff_ep + 1);
      unaff_ep[1] = (short)iVar8;
      while( true ) {
        iVar8 = (int)*(char *)((int)unaff_ep + 0x3b);
        unaff_ep = (short *)(iVar8 + -5);
        __saturate(unaff_ep);
        iVar7 = iVar7 + 0xb;
        __saturate(iVar7);
        *(undefined4 *)(iVar8 + 0x77) = unaff_r27;
        *(undefined1 *)(in_r13 + 0x5f2a) = uVar6;
        *(uint *)(iVar8 + 0x43) = uVar5;
        if ((int)((int)cVar2 & unaff_r25) < 0) break;
        uVar6 = 8;
        uVar10 = uVar10 / in_r2;
        *(char *)(iVar8 + 0x10) = (char)unaff_r21;
        *(short *)(iVar8 + -3) = (short)param_3;
        uVar5 = unaff_tp ^ 0xa175;
        *(undefined4 *)(iVar8 + 0x1b) = 8;
      }
      *(uint *)(iVar8 + 0x6f) = uVar10;
      psVar9 = (short *)(iVar8 + -10);
      __saturate(psVar9);
      cVar2 = *(char *)(param_3 - 0x78b9);
      *(undefined1 *)(param_4 + 0x5f14) = 8;
      *psVar9 = (short)cVar2;
      uVar10 = (uint)(int)(short)uVar10 / in_r1;
      *(short *)(iVar8 + -8) = (short)param_3;
      uVar5 = ~unaff_r22;
      psVar9 = (short *)((uint)psVar9 & unaff_tp - 0x5e8c);
      DAT_00000400 = (undefined1)unaff_r22;
      iVar8 = (*param_1)();
      __saturate((int)param_1 - uVar5);
      *(char *)(param_4 + 0x5928) = (char)unaff_r22;
      *(short *)(~param_3 + 0xd62) = (short)uVar10;
      sVar3 = (short)~param_3;
      *psVar9 = sVar3;
      *(uint *)(psVar9 + 0x5c) = in_r1;
      sVar4 = Ram00000008;
      psVar9[0x40] = (short)param_4;
      __saturate((int)param_1 - (int)sVar3);
      psVar9[0x60] = sVar4;
                    /* WARNING: Could not recover jumptable at 0x0003140e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00031410 + *(short *)(&DAT_00031410 + iVar8 * 2) * 2))();
      return;
    }
    while( true ) {
      *(char *)(param_3 + 0x1cc0) = (char)in_r16;
      iVar8 = in_r16 + 9;
      in_r16 = in_r16 + 9;
      __saturate(in_r16);
      if (iVar8 < 0) break;
      while( true ) {
        in_r14 = (int)&stack0x00000000 - in_r14;
        __saturate(in_r14);
        unaff_ep[0x25] = unaff_ep[1];
        bVar1 = (byte)((uint)unaff_r28 >> 0x1f);
        __saturate(unaff_tp - unaff_r28);
        if ((int)(unaff_tp - unaff_r28) < 0 !=
            ((byte)(unaff_tp >> 0x1f) != bVar1 && bVar1 == (byte)(unaff_tp - unaff_r28 >> 0x1f)))
        break;
        *(undefined1 *)(param_3 + 0x5f2a) = 7;
        uVar5 = *(uint *)(unaff_ep + 0x16);
        in_r16 = 8;
        *(undefined1 *)(param_4 + 0x5f14) = 8;
        unaff_r28 = -((unaff_tp - unaff_r28) + -0x16);
        unaff_lp = uVar5 / in_r1;
        in_r15 = ~(uint)param_1 | unaff_tp;
      }
      unaff_r28 = *(byte *)(in_r1 - 0x67f8) - 0xb;
      if (10 < *(byte *)(in_r1 - 0x67f8)) break;
      *(uint *)(unaff_ep + 0x3a) = unaff_lp;
      __saturate((undefined1 *)((int)unaff_ep + -5));
      __synchronize();
      unaff_r28 = (int)*(char *)(param_3 - 0x77fb);
      unaff_ep = *(short **)((int)unaff_ep + 0x7b);
      unaff_r26 = unaff_r26 + 0xb;
      __saturate(unaff_r26);
      *(undefined4 *)(unaff_ep + 0x3e) = unaff_r27;
    }
    in_r16 = in_r16 - (int)param_1;
    in_PSW = (uint)SCARRY4(unaff_r28,-0xb) << 2 | (uint)(unaff_r28 + -0xb < 0) << 1;
    unaff_r28 = unaff_r28 + -0xb;
  } while( true );
}


// ==== FUN_00031fc2 @ 00031fc2 (size 456) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00031ff0) overlaps instruction at (ram,0x00031fee)
    */
/* WARNING: Removing unreachable block (ram,0x00031f4c) */

void FUN_00031fc2(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  uint in_r2;
  uint unaff_gp;
  uint uVar8;
  int in_r11;
  uint extraout_r11;
  undefined4 in_r13;
  uint in_r14;
  int in_r16;
  int in_r17;
  undefined4 in_r18;
  int in_r19;
  uint unaff_r20;
  uint unaff_r21;
  short unaff_r22;
  int unaff_r23;
  int unaff_r24;
  int unaff_r25;
  int unaff_r26;
  int unaff_r27;
  int iVar9;
  int unaff_r28;
  int iVar10;
  int unaff_r29;
  short *unaff_ep;
  int iVar11;
  uint uVar12;
  uint in_PSW;
  
  while( true ) {
    unaff_gp = unaff_gp >> 0x15;
    uVar12 = in_PSW & 0xfffffff0;
    iVar10 = unaff_r28 + -0x28;
    if (unaff_r28 + -0x28 < 0) break;
LAB_00031f0a:
    *(char *)(in_r11 + -0x1dab) = (char)in_r18;
    bVar1 = SCARRY4((int)register0x0000000c,unaff_r29);
    bVar5 = (bool)((byte)(uVar12 >> 4) & 1);
    __saturate((undefined1 *)((int)register0x0000000c + unaff_r29));
    bVar2 = SCARRY4(unaff_r20,0xf);
    unaff_r20 = unaff_r20 + 0xf;
    __saturate(unaff_r20);
    bVar3 = SCARRY4(unaff_r23,unaff_r27);
    unaff_r23 = unaff_r23 + unaff_r27;
    __saturate(unaff_r23);
    if (((bVar5 || bVar1) || bVar2) || bVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1 = param_1 >> 0xd;
    register0x0000000c = (BADSPACEBASE *)(int)*(short *)(&DAT_ffffe256 + param_1);
    iVar11 = (int)unaff_ep[0x3b];
    uVar8 = unaff_r24 - 0x1dab;
    unaff_r21 = (short)unaff_r21 * 0xd ^ param_3;
    unaff_ep[0x71] = (short)in_r17;
    *(char *)((int)unaff_ep + 0x55) = (char)in_r11;
    uVar12 = 0;
    iVar9 = iVar10 + -0xa2;
    *(uint *)(unaff_ep + -0xed6) = unaff_r21;
    if (10 < iVar10 + -0x97 && iVar10 != 0xa2) goto LAB_00031eb4;
    iVar9 = iVar10 + -0xad;
    bVar6 = false;
    if (((bVar5 || bVar1) || bVar2) || bVar3) {
      do {
        in_r11 = 0;
        unaff_r20 = unaff_r20 | (uint)register0x0000000c;
        in_r14 = in_r14 | *(uint *)(unaff_ep + 0x4c);
        register0x0000000c = (BADSPACEBASE *)(*(uint *)(unaff_ep + 0x4c) >> 0x1c);
        iVar9 = iVar9 + -0x21;
        in_r2 = unaff_r21 | 0x80b6;
        bVar1 = SCARRY4(in_r16,-0xe);
        uVar12 = (uint)(bVar6 || bVar1) << 4;
        in_r16 = in_r16 + -0xe;
        __saturate(in_r16);
        do {
          if (bVar1) {
            in_r2 = in_r14 - 0x7f4a;
            bVar1 = SCARRY4(unaff_r20 + 0xf0ca0000,-0xe);
            bVar2 = SUB41(uVar12 >> 4,0) || bVar1;
            in_r16 = unaff_r20 + 0xf0c9fff2;
            __saturate(in_r16);
          }
          else {
            iVar10 = iVar9;
            if (-1 < iVar9 + -0xb) goto LAB_00031f0a;
            bVar7 = (byte)((uint)iVar11 >> 0x18);
            bVar4 = -((char)bVar7 >> 7);
            bVar2 = SUB41(uVar12 >> 4,0) || bVar7 >> 7 != bVar4 && bVar4 == 0;
            iVar11 = 0;
            __saturate(0);
            unaff_r20 = 3;
            param_4 = *(int *)(unaff_ep + 0x40);
            *(undefined1 *)(unaff_ep + 0x34) = 0;
            bVar1 = false;
            if ((uVar8 & 3) != 0) {
              in_r17 = in_r17 + -0xe;
              bVar4 = (byte)((uint)unaff_r25 >> 0x1f);
              uVar12 = (uint)(bVar2 || (byte)(in_r2 >> 0x1f) != bVar4 &&
                                       bVar4 == (byte)(in_r2 - unaff_r25 >> 0x1f)) << 4;
              in_r2 = in_r2 - unaff_r25;
              __saturate(in_r2);
              in_r16 = in_r16 >> 0x1e;
              in_r18 = *(undefined4 *)(&DAT_ffffe254 + unaff_r25);
              iVar10 = iVar9 + -0x42;
              goto LAB_00031f0a;
            }
          }
          if (bVar1) {
            __saturate((int)unaff_ep + param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar10 = iVar9 + -0x16;
          bVar1 = SCARRY4(iVar9 + -0xb,-0xb);
          uVar12 = (uint)bVar2 << 4;
          iVar9 = iVar9 + -0x16;
        } while (-1 < iVar10);
LAB_00031eb4:
        bVar6 = SUB41(uVar12 >> 4,0) || SCARRY4(*(int *)(unaff_ep + 0x7c),uVar8);
        unaff_ep = (short *)(*(int *)(unaff_ep + 0x7c) + uVar8);
        __saturate(unaff_ep);
      } while( true );
    }
    unaff_ep[4] = unaff_r22;
    unaff_gp = in_r11 * -0x76ac;
    unaff_ep[0x45] = (short)unaff_gp;
    in_r14 = unaff_r25 + 0xe2550000;
    *(char *)((int)unaff_ep + 9) = (char)param_1;
    iVar9 = param_2 - param_4;
    uVar12 = (uint)param_2 >> 0x1f;
    bVar4 = (byte)((uint)param_4 >> 0x1f);
    __saturate(param_2 - param_4);
    if (10 < iVar10 + -0xef && iVar10 != 0xfa) goto LAB_00031fe2;
    param_2 = (int)*(char *)(in_r17 + -0x1dab);
    unaff_r24 = (int)(char)unaff_ep[0x12];
    unaff_r25 = 9;
    *(int *)(&DAT_ffffe254 + unaff_gp) = (int)unaff_ep[0x32];
    in_PSW = (uint)((byte)uVar12 != bVar4 && bVar4 == (byte)((uint)iVar9 >> 0x1f) ||
                   SCARRY4(in_r2,param_1)) << 4;
    in_r2 = in_r2 + param_1;
    __saturate(in_r2);
    register0x0000000c = (BADSPACEBASE *)(param_4 * -0x1daa);
    unaff_r28 = iVar10 + -0x152;
  }
  unaff_r20 = (uint)*(char *)((int)unaff_ep + 0x65);
LAB_00031fe2:
  __saturate(unaff_gp + 0xc);
  do {
    iVar10 = in_r17 + -0x1dab;
    do {
      *(char *)((int)unaff_ep + 0x75) = (char)in_r13;
    } while (0 < (int)(unaff_r20 ^ 0xe254));
    (&DAT_ffffe583)[unaff_r23] = (&DAT_ffffe583)[unaff_r23] ^ 8;
    FUN_0003a254();
    in_r19 = in_r19 << 0xe;
    in_r17 = (int)*unaff_ep;
    unaff_ep[0x31] = *unaff_ep;
    *(int *)(unaff_ep + -0x663) = in_r19;
    unaff_ep = (short *)((int)unaff_ep + -5);
    __saturate(unaff_ep);
  } while (extraout_r11 == unaff_r20);
  __saturate(unaff_r26 + 0xb);
  __saturate((int)unaff_ep + iVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00032682 @ 00032682 (size 172) ====

void FUN_00032682(undefined4 param_1,int param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint in_r1;
  int in_r16;
  int unaff_r20;
  int unaff_r21;
  uint unaff_r24;
  uint uVar3;
  int iVar4;
  int unaff_ep;
  undefined2 unaff_lp;
  ushort *unaff_CTBP;
  
  do {
    iVar4 = 0x164a;
    while (SCARRY4(iVar4 + -0x16,-0xb)) {
      uVar3 = iVar4 - 0x2c;
      iVar4 = in_r16 - param_2;
      uVar2 = (uint)in_r16 >> 0x1f;
      bVar1 = (byte)((uint)param_2 >> 0x1f);
      in_r16 = in_r16 - param_2;
      __saturate(in_r16);
      if ((byte)uVar2 != bVar1 && bVar1 == (byte)((uint)iVar4 >> 0x1f)) {
LAB_00032620:
                    /* WARNING: Could not recover jumptable at 0x00032620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00032622 + *(short *)(&DAT_00032622 + uVar3 * 2) * 2))();
        return;
      }
      if (-1 < (int)(param_3 | unaff_r24)) {
        (*(code *)0x0)((int)*(char *)(unaff_ep + 0x3c));
        uVar3 = in_r1 | 0x1be2;
        goto LAB_00032620;
      }
      param_3 = unaff_r21 + 0x1dac;
      __saturate(param_3);
      *(undefined2 *)(unaff_ep + 0x24) = unaff_lp;
      in_r1 = (uint)*(char *)(unaff_ep + 0x51);
      unaff_r20 = 4;
      *(short *)(unaff_ep + 0xc6) = (short)*(char *)(unaff_r21 + -0xf84);
      iVar4 = 0x1649;
    }
    unaff_lp = *(undefined2 *)(unaff_ep + 0x18);
    (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))((int)*(short *)(unaff_ep + 0x90));
    in_r16 = unaff_r20 + -0xe99ffff;
  } while( true );
}


// ==== FUN_00032914 @ 00032914 (size 182) ====

void FUN_00032914(undefined4 param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  uint unaff_tp;
  int extraout_r11;
  code *in_r14;
  int in_r19;
  int unaff_r20;
  uint unaff_r21;
  int unaff_r22;
  uint unaff_r23;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_r28;
  uint uVar2;
  uint unaff_ep;
  uint in_PSW;
  uint uVar3;
  ushort *unaff_CTBP;
  
  do {
    if ((in_PSW >> 1 & 1) == 0) {
      do {
      } while (-1 < (int)(unaff_r21 | 0xe255));
    }
    else {
      *(char *)(unaff_ep + 0x34) = (char)in_r19;
      puVar1 = (undefined1 *)((uint)register0x0000000c >> 0x1c);
      *(byte *)(unaff_ep + 0x67) = (byte)((uint)register0x0000000c >> 0x1c);
      do {
      } while (-1 < unaff_r28 + -0x37);
      uVar2 = unaff_r28 - 0x4d;
      do {
        if (-1 < in_r19 + unaff_r20) goto LAB_000328fa;
        in_r19 = in_r19 << 0xe;
        unaff_r21 = unaff_r21 | param_2;
        unaff_r20 = (int)*(char *)(unaff_ep + 2);
        puVar1 = puVar1 + -unaff_r20;
        (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
        uVar2 = (uint)*(char *)(param_3 + -0x7d85);
        unaff_r26 = unaff_r26 + 0xb;
        __saturate(unaff_r26);
        *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
        __saturate(unaff_r22 - extraout_r11);
        unaff_ep = unaff_ep / 0;
        uVar3 = (uint)(uVar2 < 8) << 3;
        (*in_r14)();
      } while ((uVar3 >> 3 & 1) == 0);
      *(char *)(unaff_ep + 0x34) = (char)in_r19;
    }
    unaff_r21 = unaff_r21 ^ unaff_r23;
    uVar2 = (int)DAT_00004c02 - 0xb;
    puVar1 = (undefined1 *)0x0;
LAB_000328fa:
    do {
    } while (-1 < (int)(unaff_r21 | 0xe255));
    unaff_r28 = uVar2 - 0x2c;
    unaff_r21 = unaff_r21 ^ unaff_tp;
    in_PSW = (uint)((int)unaff_r21 < 0) << 1;
    unaff_r20 = -4;
    register0x0000000c = (BADSPACEBASE *)puVar1;
  } while( true );
}


// ==== FUN_00033c06 @ 00033c06 (size 46) ====

void FUN_00033c06(void)

{
  int in_r2;
  uint unaff_tp;
  undefined1 *in_r11;
  uint in_r16;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_ep;
  
  *(uint *)(unaff_ep + 0x20) = in_r16 | unaff_tp;
  __saturate(unaff_r26 + 0xb);
  *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
  *in_r11 = (char)unaff_r27;
                    /* WARNING: Could not recover jumptable at 0x00033c32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00033c34 + *(short *)(&DAT_00033c34 + in_r2 * 2) * 2))();
  return;
}


// ==== FUN_000353c6 @ 000353c6 (size 144) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000353c6(int param_1,undefined2 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  int in_r2;
  uint unaff_gp;
  int unaff_tp;
  uint in_r15;
  uint uVar3;
  uint in_r18;
  int unaff_r21;
  uint unaff_r22;
  int unaff_r25;
  int iVar4;
  undefined4 unaff_r27;
  int unaff_ep;
  int unaff_lp;
  
  sVar2 = *(short *)(unaff_ep + 0x62);
  *(char *)(unaff_tp + 0x400) = (char)sVar2;
  uVar3 = (int)sVar2 ^ unaff_gp;
  __saturate(uVar3);
  *(undefined4 *)(unaff_ep + 0x14) = param_4;
  __saturate(in_r18 - 0x61a9);
  if (in_r18 < 0x61aa) {
    *(undefined2 *)(unaff_ep + 0x1a) = param_2;
    __saturate(unaff_ep + -5);
                    /* WARNING: Could not recover jumptable at 0x00035404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00035406 + *(short *)(&DAT_00035406 + unaff_r21 * 2) * 2))();
    return;
  }
  iVar4 = *(int *)(unaff_ep + 0xf8);
  *(char *)(in_r2 + -0x6667) = (char)uVar3;
  *(int *)(unaff_ep + 0x74) = unaff_lp;
  __saturate(unaff_ep + -5);
  cVar1 = *(char *)(param_3 + -0x7d85);
  __saturate(iVar4 + 0xb);
  *(undefined4 *)(unaff_ep + 0x77) = unaff_r27;
  *(short *)(unaff_ep + 0x9f) = (short)(in_r15 / unaff_r22);
  __saturate(param_1 - cVar1);
  *(char *)(param_3 + -0x76a) = (char)unaff_r22;
  param_1 = param_1 - (unaff_lp - unaff_r25);
  __saturate(param_1);
  __saturate(param_3 + 0x2efe);
  __saturate(param_1 + 0x1900);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00035c40 @ 00035c40 (size 882) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00035e7a) overlaps instruction at (ram,0x00035e78)
    */

void FUN_00035c40(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  int in_r1;
  int unaff_gp;
  uint in_r16;
  undefined2 unaff_r21;
  undefined1 unaff_r27;
  code *unaff_r28;
  int iVar5;
  ushort *unaff_ep;
  
  do {
    while( true ) {
      *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
      __saturate(-(int)(unaff_r28 + -0xb));
      in_r16 = (int)in_r16 >> 0x14;
      DAT_00000280 = (undefined1)in_r16;
      __saturate(unaff_r28 + -0xb);
      uVar4 = unaff_ep[0x1a];
      unaff_ep = (ushort *)-(int)unaff_ep;
      __saturate(unaff_ep);
      __saturate(-(int)(short)uVar4);
      DAT_00007400 = DAT_00000280;
      if (-(char)((short)uVar4 >> 7) == 0 ||
          -(char)((short)uVar4 >> 7) != (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
      while( true ) {
        uVar4 = unaff_ep[0x1a];
        unaff_ep = (ushort *)(uint)*unaff_ep;
        bVar1 = -(char)((short)uVar4 >> 7);
        bVar3 = bVar1 == (byte)((uint)-(int)(short)uVar4 >> 0x1f);
        bVar2 = bVar1 != 0 && bVar3;
        __saturate(-(int)(short)uVar4);
        if (bVar1 == 0 || !bVar3) break;
        while( true ) {
          iVar5 = (int)(short)unaff_ep[0x1a];
          unaff_ep = (ushort *)(uint)(byte)*unaff_ep;
          uRamffffffff = (undefined1)in_r16;
          *(undefined1 *)(param_2 + -1) = uRamffffffff;
          if (!bVar2) break;
          while (bVar3 = unaff_ep == (ushort *)0x80000000,
                unaff_ep = (ushort *)((uint)unaff_ep / in_r16),
                bVar3 && in_r16 == 0xffffffff || in_r16 == 0) {
            while( true ) {
              __saturate(-iVar5);
              __saturate(-iVar5);
              uVar4 = unaff_ep[0x1a];
              unaff_ep = (ushort *)((uint)unaff_ep / 0);
              __saturate(-(int)(short)uVar4);
              if (-(char)((short)uVar4 >> 7) == 0 ||
                  -(char)((short)uVar4 >> 7) != (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
              Ram00000001 = unaff_r27;
              Ram00000002 = unaff_r27;
              Ram00000003 = unaff_r27;
              DAT_00000004 = unaff_r27;
              iVar5 = -(int)*(char *)(param_3 + -0x7785);
              __saturate(iVar5);
              in_r16 = 0;
              DAT_ffff80a0 = 0;
            }
            FUN_0003dca2();
            *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
            __saturate(0xfffca465);
            in_r16 = (int)in_r16 >> 0x14;
            DAT_00003008 = (undefined1)in_r16;
            __saturate(0x35b9b);
            iVar5 = (int)(short)unaff_ep[0x1a];
          }
          FUN_0003dcd0();
          *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
          __saturate(0xfffca437);
          in_r16 = (int)in_r16 >> 0x14;
          DAT_000000c0 = (undefined1)in_r16;
          bVar2 = false;
          __saturate(0x35bc9);
          DAT_00003100 = DAT_000000c0;
        }
        *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
        __saturate(-(-0xb - iVar5));
        in_r16 = (int)in_r16 >> 0x14;
        DAT_000000c0 = (undefined1)in_r16;
        __saturate(-0xb - iVar5);
        DAT_ffffed00 = DAT_000000c0;
      }
      unaff_r28 = FUN_00035c40;
      FUN_0003dd3c();
    }
    while( true ) {
      FUN_0003dd70();
      *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
      __saturate(0xfffca397);
      in_r16 = (int)in_r16 >> 0x14;
      DAT_00000080 = (undefined1)in_r16;
      __saturate(0x35c69);
      uVar4 = unaff_ep[0x1a];
      unaff_ep = (ushort *)(in_r16 - (int)unaff_ep);
      __saturate(unaff_ep);
      unaff_r28 = (code *)-(int)(short)uVar4;
      __saturate(unaff_r28);
      DAT_00007400 = DAT_00000080;
      if (-(char)((short)uVar4 >> 7) != 0 &&
          -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
      while( true ) {
        FUN_0003dda4();
        *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
        __saturate(0xfffca363);
        in_r16 = (int)in_r16 >> 0x14;
        DAT_00000280 = (undefined1)in_r16;
        __saturate(0x35c9d);
        uVar4 = unaff_ep[0x1a];
        __saturate(unaff_ep);
        __saturate(-(int)(short)uVar4);
        DAT_00007500 = DAT_00000280;
        if (-(char)((short)uVar4 >> 7) != 0 &&
            -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
        FUN_0003ddd8();
        *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
        __saturate(0xfffca32f);
        in_r16 = (int)in_r16 >> 0x14;
        DAT_00000080 = (undefined1)in_r16;
        __saturate(0x35cd1);
        uVar4 = unaff_ep[0x1a];
        unaff_ep = (ushort *)((int)unaff_ep - in_r16);
        __saturate(unaff_ep);
        __saturate(-(int)(short)uVar4);
        DAT_00007500 = DAT_00000080;
        if (-(char)((short)uVar4 >> 7) == 0 ||
            -(char)((short)uVar4 >> 7) != (byte)((uint)-(int)(short)uVar4 >> 0x1f)) {
          do {
            FUN_0003de0c();
            *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
            __saturate(0xfffca2fb);
            in_r16 = (int)in_r16 >> 0x14;
            DAT_00003020 = (undefined1)in_r16;
            __saturate(0x35d05);
            __saturate(0xfffca2fb);
            uVar4 = unaff_ep[0x1a];
            __saturate(unaff_ep);
            bVar3 = -(char)((short)uVar4 >> 7) != 0 &&
                    -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f);
            iVar5 = -(int)(short)uVar4;
            __saturate(iVar5);
            DAT_00004000 = DAT_00003020;
            uRamffffffff = DAT_00003020;
            *(undefined1 *)(param_2 + -0x15a0) = DAT_00003020;
            while (!bVar3) {
              iVar5 = iVar5 + -0xb;
              *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
              __saturate(-iVar5);
              in_r16 = (int)in_r16 >> 0x14;
              DAT_00003020 = (undefined1)in_r16;
              __saturate(iVar5);
              __saturate(-iVar5);
              uRamffffffff = DAT_00003020;
              while( true ) {
                DAT_00004000 = (undefined1)in_r16;
                uVar4 = unaff_ep[0x1a];
                unaff_ep = (ushort *)((int)unaff_ep + in_r16);
                __saturate(unaff_ep);
                iVar5 = -(int)(short)uVar4;
                __saturate(iVar5);
                *(undefined1 *)(param_2 + 0x4b) = DAT_00004000;
                bVar3 = true;
                if (-(char)((short)uVar4 >> 7) != 0 &&
                    -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f)) break;
                *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                __saturate(-(iVar5 + -0xb));
                in_r16 = (int)in_r16 >> 0x14;
                iVar5 = in_r1 + iVar5 + -0xb;
                __saturate(iVar5);
                DAT_ffffd125 = (undefined1)in_r16;
                while( true ) {
                  bVar1 = -(char)(iVar5 >> 0x1f);
                  __saturate(-iVar5);
                  unaff_ep = (ushort *)0x0;
                  if (bVar1 != 0 && bVar1 == (byte)((uint)-iVar5 >> 0x1f)) break;
                  FUN_0003debc();
                  *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                  __saturate(0xfffca24b);
                  in_r16 = (int)in_r16 >> 0x14;
                  iVar5 = in_r1 + 0x35db5;
                  __saturate(iVar5);
                  DAT_ffffd125 = (undefined1)in_r16;
                  bVar1 = -(char)(iVar5 >> 0x1f);
                  bVar3 = bVar1 != 0 && bVar1 == (byte)((uint)-iVar5 >> 0x1f);
                  __saturate(-iVar5);
                  while( true ) {
                    iVar5 = (int)(short)unaff_ep[0x1a];
                    unaff_ep = (ushort *)((int)(short)unaff_ep * (int)(short)in_r16);
                    if (bVar3) break;
                    while( true ) {
                      func_0x0003deec();
                      *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                      __saturate(0xfffca21b);
                      in_r16 = (int)in_r16 >> 0x14;
                      DAT_00000280 = (undefined1)in_r16;
                      __saturate(0x35de5);
                      uVar4 = unaff_ep[0x1a];
                      __saturate(-(int)(short)uVar4);
                      bVar3 = true;
                      DAT_00007000 = DAT_00000280;
                      if (-(char)((short)uVar4 >> 7) != 0 &&
                          -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f))
                      break;
                      while( true ) {
                        func_0x0003df20();
                        *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                        __saturate(0xfffca1e7);
                        in_r16 = (int)in_r16 >> 0x14;
                        DAT_00000080 = (undefined1)in_r16;
                        __saturate(0x35e19);
                        uVar4 = unaff_ep[0x1a];
                        unaff_ep = (ushort *)((uint)unaff_ep | in_r16);
                        __saturate(-(int)(short)uVar4);
                        DAT_00007000 = DAT_00000080;
                        if (-(char)((short)uVar4 >> 7) != 0 &&
                            -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f))
                        break;
                        while( true ) {
                          FUN_0003df54();
                          *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                          __saturate(0xfffca1b3);
                          in_r16 = (int)in_r16 >> 0x14;
                          DAT_00000280 = (undefined1)in_r16;
                          __saturate(0x35e4d);
                          uVar4 = unaff_ep[0x1a];
                          __saturate(-(int)(short)uVar4);
                          DAT_00007100 = DAT_00000280;
                          if (-(char)((short)uVar4 >> 7) != 0 &&
                              -(char)((short)uVar4 >> 7) == (byte)((uint)-(int)(short)uVar4 >> 0x1f)
                             ) break;
                          FUN_0003df88();
                          *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                          __saturate(0xfffca17f);
                          in_r16 = (int)in_r16 >> 0x14;
                          DAT_00000080 = (undefined1)in_r16;
                          __saturate(0x35e81);
                          uVar4 = unaff_ep[0x1a];
                          unaff_ep = (ushort *)((uint)unaff_ep ^ in_r16);
                          __saturate(-(int)(short)uVar4);
                          DAT_00007100 = DAT_00000080;
                          if (-(char)((short)uVar4 >> 7) == 0 ||
                              -(char)((short)uVar4 >> 7) != (byte)((uint)-(int)(short)uVar4 >> 0x1f)
                             ) {
                            FUN_0003dfbc();
                            *(undefined2 *)(unaff_gp + -0x6088) = unaff_r21;
                    /* WARNING: Bad instruction - Truncating control flow here */
                            halt_baddata();
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          } while( true );
        }
      }
    }
  } while( true );
}


// ==== FUN_000367ec @ 000367ec (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000367ec(void)

{
  int in_r1;
  int unaff_tp;
  uint in_r15;
  int iVar1;
  undefined1 in_r16;
  uint unaff_r20;
  uint unaff_ep;
  
  *(undefined1 *)(unaff_tp + 0x1efa) = in_r16;
  DAT_000000aa = DAT_000000aa ^ 1;
  ((byte *)(unaff_ep | unaff_r20))[0x11] = (byte)(in_r15 >> 1);
  iVar1 = (in_r15 >> 0x12) - in_r1;
  __saturate(iVar1);
  *(short *)(*(byte *)(uint)*(byte *)(unaff_ep | unaff_r20) + 0x2c) = (short)iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00036df6 @ 00036df6 (size 228) ====

void FUN_00036df6(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  char cVar1;
  undefined1 uVar2;
  ushort in_r1;
  uint unaff_tp;
  int in_r10;
  int in_r14;
  int iVar3;
  uint in_r15;
  uint in_r16;
  undefined4 in_r19;
  uint unaff_r21;
  uint unaff_r24;
  uint unaff_r25;
  uint unaff_r26;
  int unaff_ep;
  int unaff_lp;
  
  while( true ) {
    __saturate(in_r16 ^ unaff_r25);
    DAT_ffffff00 = (undefined1)(in_r16 ^ unaff_r25);
    in_r15 = in_r15 / unaff_r24;
    __saturate(unaff_r26 - param_4);
    if (unaff_r26 < param_4) break;
    DAT_000000ff = DAT_ffffff00;
    *(ushort *)(unaff_ep + 0x84) = in_r1 ^ 0x7ed2;
    cVar1 = *(char *)(param_3 + -0x7d85);
    unaff_r26 = 0xb;
    __saturate(0xb);
    *(int *)(unaff_ep + 0x7c) = unaff_lp;
    in_r16 = 5;
    __saturate(cVar1 + 8);
  }
  *(short *)(unaff_ep + 0xa4) = (short)in_r15;
  iVar3 = *(short *)(unaff_ep + 0x50) - in_r14;
  __saturate(iVar3);
  __saturate(unaff_lp);
  __saturate((unaff_r26 - param_4) - param_4);
  iVar3 = iVar3 - (int)&stack0x00000000;
  __saturate(iVar3);
  *(undefined4 *)(unaff_ep + -0x2c6) = in_r19;
  __saturate(unaff_ep + -5);
  __saturate(unaff_lp - iVar3);
  uVar2 = (undefined1)*(undefined4 *)(unaff_ep + 0x24);
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
  (*(code *)(&DAT_00036e9a + *(short *)(&DAT_00036e9a + (unaff_r21 | unaff_tp) * 2) * 2))();
  return;
}


// ==== FUN_000370f2 @ 000370f2 (size 122) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000370f2(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  char in_r16;
  undefined4 unaff_r20;
  int unaff_r26;
  int unaff_ep;
  uint uVar4;
  int *piVar5;
  
  __saturate(unaff_r26 + -1);
  uVar4 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar4 + 4) = unaff_r20;
  sVar1 = *(short *)(uVar4 + 0x80);
  *(short *)(uVar4 + 0x2a) = (short)&stack0x00000000;
  *(char *)(param_3 + 0x450) = in_r16;
  do {
    iVar3 = (int)_DAT_00000042;
    uVar2 = Ram00000018;
    piVar5 = (int *)(uint)uVar2;
    uVar4 = (uint)DAT_00004c02;
    in_r16 = in_r16 + -0x18;
    *(short *)((int)piVar5 + 0x2a) = (short)&stack0x00000000;
    *piVar5 = (int)sVar1;
    *(char *)(iVar3 + 0x5934) = in_r16;
  } while (uVar4 >> 1 == 0);
  __saturate((int)piVar5 + -5);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// ==== FUN_00037e5e @ 00037e5e (size 458) ====

void FUN_00037e5e(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  uint unaff_gp;
  short sVar9;
  int unaff_tp;
  int in_r10;
  uint uVar10;
  uint in_r12;
  uint in_r14;
  undefined2 in_r15;
  uint in_r16;
  ushort in_r17;
  short sVar11;
  uint in_r18;
  uint unaff_r20;
  short unaff_r26;
  int iVar12;
  int unaff_ep;
  uint uVar13;
  short unaff_lp;
  int iVar14;
  
  sVar9 = (short)unaff_tp;
  sVar11 = (short)unaff_gp;
  __synchronize();
  iVar14 = (int)(short)(unaff_lp * sVar11 * sVar11 * sVar11 * sVar11 * sVar11 * sVar11) *
           (int)sVar11;
  __synchronize();
  __synchronize();
  cVar1 = *(char *)(param_3 - 0x18f8);
  iVar12 = (int)(short)(unaff_r26 * sVar9 * sVar9 * sVar9 * sVar9 * sVar9 * sVar9 * sVar9 * sVar9 *
                        sVar9 * sVar9) * (int)sVar9 + -1;
  __saturate(iVar12);
  *(undefined2 *)(unaff_ep + 0xa4) = in_r15;
  __saturate(in_r10 - cVar1);
  __saturate(unaff_tp + 8);
  uVar5 = (ushort)in_r18;
  *(undefined1 *)(in_r14 + 0xfa4) = 0xf6;
  *(int *)(unaff_ep + 8) = iVar12;
  *(undefined1 *)(in_r14 + 0xfa5) = 0xf6;
  uVar4 = *(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(in_r14 + 0xfa6) = 0xf6;
  uVar4 = *(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(in_r14 + 0xfa7) = 0xf6;
  uVar8 = unaff_r20 | 0xd005;
  uVar13 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x18);
  *(undefined1 *)(uVar13 + 0x43) = 0;
  *(ushort *)(uVar13 + 0xaa) = in_r17 | uVar5;
  *(ushort *)(uVar13 + 0xaa) = uVar5 + 0xe030;
  sVar11 = uVar5 + 0xe030;
  func_0xffee6498();
  *(short *)(uVar13 + 0xaa) = sVar11;
  *(short *)(uVar13 + 0xaa) = (short)in_r18 + -0x1fd0;
  sVar11 = (short)in_r18 + -0x1fd0;
  uVar10 = func_0xfff064b6();
  *(short *)(uVar13 + 0xaa) = sVar11;
  cVar1 = *(char *)(param_3 - 0x7d85);
  __saturate(*(int *)(uVar13 + 0x94) + -1);
  *(undefined2 *)(uVar13 + 0xa4) = in_r15;
  __saturate(in_r12 - (int)cVar1);
  sVar11 = *(short *)(uVar13 + 0x22);
  bVar2 = *(byte *)(uVar13 + 0xc);
  *(undefined1 *)(uVar10 + 0xfc2) = 0xf6;
  uVar4 = *(ushort *)(uVar13 + 0x18);
  uVar13 = in_r14 / (uint)&stack0x00000000;
  bVar6 = (byte)(unaff_gp ^ 0xfffffff6);
  *(byte *)(uVar13 + 0xfc4) = bVar6;
  *(byte *)(uVar13 + 0xfc5) = bVar6;
  uVar8 = (uint)*(ushort *)((uVar4 & uVar8) + 0x18);
  uVar4 = *(ushort *)(uVar8 + 0xc);
  *(byte *)(uVar13 + 0xfc6) = bVar6;
  uVar5 = *(ushort *)(uVar8 + 0x18);
  iVar12 = -(uint)uVar4;
  __saturate(~in_r16 + iVar12);
  *(byte *)(uVar13 + 0xfc7) = bVar6;
  uVar4 = *(ushort *)(uVar5 + 0x18);
  iVar12 = -(~in_r16 + iVar12);
  __saturate(iVar14 + iVar12);
  *(byte *)(uVar13 + 0xfc8) = bVar6;
  uVar4 = *(ushort *)(uVar4 + 0x18);
  *(byte *)(uVar13 + 0xfc9) = bVar6;
  uVar4 = *(ushort *)(uVar4 + 0x18);
  *(byte *)(uVar13 + 0xfca) = bVar6;
  uVar4 = *(ushort *)(uVar4 + 0x18);
  *(byte *)(uVar13 + 0xfcb) = bVar6;
  uVar4 = *(ushort *)(uVar4 + 0x18);
  *(byte *)(uVar13 + 0xfcc) = bVar6;
  bVar6 = bVar6 ^ (byte)uVar13;
  uVar4 = *(ushort *)(*(ushort *)(uVar4 + 0x18) + 0x18);
  pbVar7 = (byte *)(sVar11 + -0xdc5);
  *pbVar7 = *pbVar7 | 2;
  *(byte *)(uVar10 + 0x6110) = bVar6;
  *(byte *)(uVar10 + 0x612c) = bVar6;
  *(byte *)(uVar10 + 0x6148) = bVar6;
  *(byte *)(uVar10 + 0x6164) = bVar6;
  uVar3 = *(undefined1 *)(uVar4 + 0xc);
  *(byte *)(param_3 + 0x450) = bVar6;
  __saturate(uVar13 - (iVar14 + iVar12 | (in_r18 - 0x1fd0 | in_r18) ^ unaff_gp ^ 0xfffffff6 |
                       (uint)bVar2 | param_3 | uVar13 | in_r12 | uVar10));
  (*(code *)&LAB_00000030)(param_1,uVar3);
  return;
}


// ==== FUN_00038318 @ 00038318 (size 42) ====

void FUN_00038318(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_r1;
  undefined1 in_r17;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0x80) = param_3;
  uVar1 = *(undefined2 *)(unaff_ep + 0xd0);
  uVar2 = *(undefined2 *)(unaff_ep + 0x80);
  *(undefined1 *)(in_r1 + -0x80) = in_r17;
  *(undefined2 *)(unaff_ep + 0x80) = param_3;
  *(undefined2 *)(unaff_ep + 0xd0) = uVar1;
  *(undefined2 *)(unaff_ep + 0x80) = uVar2;
  return;
}


// ==== FUN_00038a68 @ 00038a68 (size 804) ====

/* WARNING: Instruction at (ram,0x00038d4e) overlaps instruction at (ram,0x00038d4c)
    */
/* WARNING: Removing unreachable block (ram,0x00038d4e) */

void FUN_00038a68(void)

{
  char cVar1;
  uint in_r1;
  int unaff_tp;
  undefined2 in_r9;
  int in_r10;
  uint in_r13;
  undefined1 in_r15;
  int iVar2;
  undefined1 *unaff_ep;
  
  do {
    while( true ) {
      *(undefined2 *)(unaff_ep + 0x80) = in_r9;
      __saturate(unaff_tp + -0xd);
      iVar2 = in_r13 + 0x18f8;
      __saturate(iVar2);
      if (0xffffe707 < in_r13) break;
      __saturate(unaff_tp + -0x17);
      *(undefined2 *)(unaff_ep + 0x80) = in_r9;
      __saturate(unaff_tp + -0x24);
      *(undefined2 *)(unaff_ep + 0x80) = in_r9;
      __saturate(unaff_tp + -0x2c);
      *(undefined2 *)(unaff_ep + 0x80) = in_r9;
      unaff_tp = unaff_tp + -0x3b;
      __saturate(unaff_tp);
    }
    cVar1 = unaff_ep[0x77];
    *(short *)(unaff_ep + 0x12) = (short)iVar2;
    unaff_tp = unaff_tp + -0xd;
  } while ((in_r1 | 0x2372) < 0xb);
  do {
    *(int *)((in_r1 | 0x2372) + 0x21cb) = (int)cVar1;
    *(short *)(unaff_ep + 0x12) = (short)iVar2;
  } while ((in_r1 | 0x2372) < 0xb);
  *unaff_ep = *unaff_ep;
  cVar1 = unaff_ep[0x6d];
  *unaff_ep = unaff_ep[0x40];
  cRamffffffff = cVar1 + -0xc;
  unaff_ep[0x43] = (char)iVar2;
  unaff_ep[0x43] = (char)iVar2;
  __saturate(*(short *)(unaff_ep + 0x20) + -0x1170);
  *(undefined1 *)(*(int *)(*(short *)(unaff_ep + 0x20) + -0x1078) + 0x51) = in_r15;
  __saturate(cVar1 - in_r10);
  (*(code *)&LAB_00000030)();
  return;
}


// ==== FUN_000396dc @ 000396dc (size 384) ====

void FUN_000396dc(undefined4 param_1,uint param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint in_r1;
  int in_r2;
  uint uVar6;
  int unaff_gp;
  int unaff_tp;
  int in_r10;
  uint in_r11;
  int in_r12;
  uint in_r15;
  char cVar7;
  uint in_r16;
  uint uVar8;
  uint in_r18;
  uint unaff_r21;
  short unaff_r23;
  int iVar9;
  uint unaff_r27;
  int iVar10;
  int iVar11;
  int unaff_r29;
  int unaff_ep;
  int iVar12;
  uint uVar13;
  char *pcVar14;
  ushort *unaff_CTBP;
  
  uVar3 = *(ushort *)(unaff_ep + 0x18);
  *(short *)(uVar3 + 0xec) = (short)in_r11;
  cVar7 = *(char *)(uVar3 + 0x50);
  uVar6 = unaff_gp - in_r2;
  __saturate(uVar6);
  *(char *)(cVar7 + 0x20e) = cVar7;
  __saturate(0);
  iVar10 = (int)DAT_ffff8f50;
  *(char *)(in_r10 + 0x5cf4) = (char)in_r16;
  uVar8 = in_r16 & in_r18 & unaff_r27;
  *(char *)(unaff_r29 + 0x62) = (char)unaff_r29;
  iVar12 = (int)(short)unaff_r29 * (int)(short)in_r12;
  iVar11 = iVar10 + -0x2c;
  DAT_ffffe252 = (undefined1)iVar11;
  iVar9 = -0x1dab0003;
  *(undefined1 *)(in_r1 - 0x1dab) = 0xfd;
  *(short *)(iVar12 + 0x78) = (short)iVar11;
  uVar13 = (uint)*(ushort *)(iVar12 + 0x18);
  uVar4 = (undefined2)unaff_tp;
  *(undefined2 *)(uVar13 + 0xa4) = uVar4;
  iVar10 = iVar10 + -0x37;
  do {
    *(undefined1 *)(uVar13 + 0x44) = 0xc;
    *(undefined4 *)(uVar13 + 0xa4) = 0xc;
    sVar2 = *(short *)(in_r11 - 0xf84);
    *(undefined2 *)(uVar13 + 0xa4) = uVar4;
    iVar11 = iVar10 + -0x37;
    do {
      iVar12 = iVar11;
      *(char *)(uVar13 + 0x28) = (char)unaff_r27;
      __saturate(in_r1 + 0x1dab);
      unaff_r27 = 0x39760;
      iVar10 = func_0x000887d8();
      *(undefined2 *)(uVar13 + 0xa4) = uVar4;
      uVar13 = (uint)*(char *)(uVar13 + 0x7d);
      iVar11 = iVar12 + -0x21;
    } while (10 < iVar12 + -0x16);
    in_r11 = in_r1 | 0xa203;
    uVar13 = (uint)*(ushort *)(*(char *)(iVar10 + -0x1dab) + 0x18);
    uVar5 = SUB42(&stack0x00000000,0);
    *(undefined2 *)(uVar13 + 0xd2) = uVar5;
    iVar10 = (iVar12 + -0x4d) - in_r11;
    __saturate(iVar10);
    unaff_r21 = unaff_r21 | uVar6 | uVar6;
    *(char *)(uVar13 + 0x40) = (char)iVar10 + -0xb;
    *(short *)(uVar13 + 0x82) = (short)iVar9;
    iVar10 = iVar10 + -0x21;
    iVar9 = param_3 - 0x1dab;
  } while (SCARRY4(param_3,-0x1dab));
  __saturate(sVar2 + unaff_r29);
  cVar7 = *(char *)(unaff_r21 - 0x1dab);
  *(undefined4 *)(uVar13 + 0x74) = 0;
  __saturate(uVar13 - 5);
  cVar1 = *(char *)(param_3 - 0x7d85);
  __saturate(cVar7 + 0xb);
  *(int *)(uVar13 + 0x77) = (int)*(char *)(uVar13 + 0x41);
  pcVar14 = (char *)(uint)*(ushort *)(uVar13 + 0x13);
  sVar2 = *(short *)(pcVar14 + 0x7c);
  *(char *)(uVar6 - 0x8000) = (char)uVar8;
  in_r15 = in_r15 | param_3;
  *(undefined4 *)(cVar1 + 0x21ec) = 0;
  *pcVar14 = cVar1;
  __saturate((int)pcVar14[0x53] - in_r1);
  iVar9 = (int)cVar1;
  do {
    iVar11 = iVar9;
    uVar6 = (int)(short)uVar6 * (int)unaff_r23;
    *(short *)(pcVar14 + 0x86) = (short)param_3;
    pcVar14[8] = (char)uVar6;
    uVar13 = param_2 - in_r15;
    __saturate(uVar13);
    uVar8 = (uint)*(ushort *)(pcVar14 + 0x18);
    *(undefined2 *)(uVar8 + 0x98) = uVar5;
    __saturate((int)*(char *)(uVar8 + 0x53) - in_r1);
    in_r1 = unaff_tp - 0x44c3;
    __saturate(in_r1);
    *(char *)(uVar8 + 8) = (char)uVar6;
    in_r15 = param_2 - uVar13;
    __saturate(in_r15);
    pcVar14 = (char *)(uint)*(ushort *)(uVar8 + 0x18);
    *(undefined2 *)(pcVar14 + 0x98) = uVar5;
    uVar8 = (uint)*(short *)(pcVar14 + 8);
    iVar9 = iVar11 + -0xb;
  } while (param_2 < uVar13);
  *(short *)(iVar11 + 0x21e0) = (short)pcVar14[0x77];
  cVar7 = pcVar14[0x53];
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  *(char *)(uVar8 + 0x243e) = cVar7;
  __saturate(~(int)sVar2 ^ uVar8);
                    /* WARNING: Could not recover jumptable at 0x0003985a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003985c + *(short *)(&DAT_0003985c + in_r12 * 2) * 2))();
  return;
}


// ==== FUN_00039900 @ 00039900 (size 1020) ====

/* WARNING: Instruction at (ram,0x00039bea) overlaps instruction at (ram,0x00039be8)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039900(uint param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined1 uVar6;
  uint in_r1;
  uint in_r2;
  uint uVar7;
  int unaff_tp;
  uint uVar8;
  int iVar9;
  int in_r13;
  uint in_r14;
  int iVar10;
  uint uVar11;
  int in_r18;
  undefined4 in_r19;
  undefined1 *puVar12;
  uint unaff_r21;
  int unaff_r22;
  int unaff_r23;
  uint unaff_r24;
  uint uVar13;
  undefined1 unaff_r27;
  int unaff_r28;
  uint uVar14;
  uint unaff_r29;
  int unaff_ep;
  int *piVar15;
  int iVar16;
  uint uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  short unaff_lp;
  uint uVar20;
  uint in_FPSR;
  
  uVar8 = in_r1 | 0xa202;
  piVar15 = (int *)(uint)*(ushort *)(unaff_ep + 0x18);
  sVar3 = *(short *)((int)piVar15 + 2);
  *(undefined1 *)(piVar15 + 0x1b) = 0;
  cVar1 = *(char *)((int)piVar15 + 0x53);
  *(short *)(unaff_r28 + 0x243e) = unaff_lp * (short)unaff_r29;
  do {
    *(undefined4 *)((int)piVar15 + -0x2c6) = in_r19;
    iVar16 = *(char *)((int)piVar15 + 0x3b) + -5;
    __saturate(iVar16);
    *(uint *)(&DAT_ffffe254 + in_r13) = unaff_r29;
    piVar15 = (int *)(iVar16 * 0x8000);
    iVar16 = *(int *)(&DAT_ffffe254 + unaff_r22);
    __saturate(unaff_r22 + -0x5908);
    *(char *)((int)piVar15 + 0x3b) = (char)(unaff_r22 + -0x5908);
    *(char *)(piVar15 + 0x10) = (char)(*piVar15 - 0x16U);
  } while (10 < *piVar15 - 0x16U);
  *(undefined1 *)(unaff_r23 + -0x1dab) = unaff_r27;
  cVar2 = cRamffff827b;
  uVar14 = (uint)cRamffff827b;
  __saturate(uVar8 * -0x1dab + 0xb);
  uVar13 = (uint)*(char *)((int)piVar15 + 0x3f);
  *(char *)(sVar3 + 0x5928) = cVar1;
  iVar10 = cVar1 + 4;
  __saturate(iVar10);
  *(char *)(unaff_tp + 0xff) = (char)iVar10;
  __saturate(cVar1 + 8);
  uVar17 = 2;
  Ram00000003 = cVar2;
  DAT_000000ff = (undefined1)uVar8;
  __saturate(uVar8);
  puVar12 = (undefined1 *)0x3;
  do {
    uVar20 = uVar14 & 1;
    uVar17 = (uint)*(ushort *)
                    (*(ushort *)(*(ushort *)((uVar17 | (uint)puVar12) + 0x18) + 0x18) + 0x18);
    uVar11 = uVar8 + 0x10000;
    unaff_r21 = unaff_r21 | in_r2 | in_r2;
    uVar14 = in_r1 | 0x2471;
    puVar12 = (undefined1 *)register0x0000000c;
  } while (uVar20 != 0);
  uVar20 = (uint)*(ushort *)(uVar17 + 0x18);
  uRam00005928 = DAT_000000ff;
  *(uint *)(uVar14 + 0x18f2) = uVar20;
  puVar18 = (undefined2 *)(uint)*(ushort *)(uVar17 / 0 + 0x18);
  uVar4 = puVar18[0xc];
  uVar14 = unaff_r21 ^ param_1 | uVar20 | unaff_r29;
  uVar8 = unaff_r24;
  if ((DAT_ffffe28c & 4) != 0) goto LAB_00039ade;
  *(int *)(uint)*(ushort *)((ushort)puVar18[0xc] + 0x18) =
       (int)*(short *)((int)(uint)*(ushort *)((ushort)puVar18[0xc] + 0x18) + 2);
  puVar19 = (undefined2 *)(uint)*(ushort *)(uVar20 + 0x18);
  uVar14 = uVar14 | uVar11 | in_r1;
  __saturate(uVar11 - (int)DAT_ffffe281);
  uVar11 = (uint)*(char *)((int)puVar19 + 0x5d);
  uVar8 = in_r2 ^ 0xe254;
  uVar20 = iVar16 - 0x7c22;
  __saturate(uVar20);
  uVar13 = (uint)(ushort)puVar19[0xc];
  __saturate(uVar11 - (int)DAT_ffffe700);
  do {
    uVar17 = 2;
    uVar11 = uVar11 & unaff_r29;
    *(undefined4 *)(puVar19 + -0x663) = in_r19;
    puVar18 = (undefined2 *)((int)puVar19 + -5);
    __saturate(puVar18);
    if ((int)puVar19 < 6) goto LAB_00039aee;
    puVar18 = (undefined2 *)(uint)*(ushort *)((int)puVar19 + 0x13);
    puVar18[0x52] = (short)uVar8;
    uVar4 = *puVar18;
LAB_00039ade:
    uVar14 = uVar14 ^ uVar8;
    puVar18[4] = uVar4;
    while( true ) {
      uVar17 = (int)*(char *)((int)puVar18 + 3) + 10;
      __saturate(uVar17);
      *(uint *)(DAT_00004c8a + 0x21ec) = uVar20;
LAB_00039aee:
      __saturate(uVar17 + 7);
      puVar19 = puVar18;
      if (0xfffffff8 < uVar17) break;
      uVar14 = uVar14 ^ in_r1 | unaff_r24;
      uVar20 = (uint)*(ushort *)((ushort)puVar18[0xc] + 0x18);
      puVar18 = (undefined2 *)((ushort)puVar18[0xc] / 0);
      puVar18[1] = puVar18[4];
      if (in_r1 != -((in_r1 | 0x2442) - 9)) {
        uVar7 = (uint)(ushort)puVar18[6];
        uVar5 = puVar18[0xc];
        uVar4 = *(undefined2 *)(uVar5 + 2);
        iVar16 = (int)cRamffff827b;
        __saturate(uVar13 + 0xb);
        *(char *)(unaff_tp + 0x80) = (char)uVar11;
        *(char *)(uVar7 + 0x3ff) = (char)uVar11;
        uVar13 = (uint)*(ushort *)(uVar5 + 0x18);
        Ram00000008 = uVar4;
        __saturate(5);
        Ram00000006 = uVar4;
        iVar9 = (int)_DAT_00000044;
        iVar10 = (int)sRam000000c2;
        __saturate((iVar16 + -0xc) - in_r18);
        iVar16 = (int)sRam00000086;
        uVar8 = (uint)DAT_ffffa503;
        uVar6 = DAT_00000016;
        DAT_0000007f = 0;
        Ram00000008 = uVar14 | uVar7;
        *(undefined1 *)(uVar7 + 0x3ff) = uVar6;
        *(char *)(iVar16 + 0x243e) = (char)(iVar9 + 0x10000);
        __saturate((iVar9 + 0x10000) - (uVar8 >> 1));
        cVar1 = *(char *)(uVar13 + 0x7c);
        cVar2 = *(char *)(uVar13 + 0x5d);
        iVar9 = *(int *)(uVar13 + 0xf8);
        __saturate(iVar9 + 0x78b8);
        while (-1 < iVar9 && iVar9 + 0x78b8 < 0) {
          *(char *)(iVar16 + 0x243e) = cVar2;
        }
        *(undefined4 *)(iVar9 + -0xcc6) = in_r19;
        __saturate(iVar9 - 5U);
        uVar8 = (iVar9 - 5U) / 0;
        __saturate(((int)cVar2 & unaff_r29) - (in_r1 - (int)DAT_00004c01));
        iVar9 = *(int *)(uVar8 + 0xf8);
        __saturate(((int)*(char *)(uVar8 + 0x5d) & unaff_r29) -
                   (in_r1 - ((in_r14 & 0xe680) + (int)DAT_ffffe700)));
        __saturate(cVar1 + -1);
        __saturate(((int)*(char *)(iVar9 + 0x5d) & unaff_r29) - (int)*(char *)(iVar16 + -0x7d85));
        cVar1 = *(char *)(iVar9 + 0x5d);
        *(char *)(iVar10 + -0x7340) = cVar1;
        uVar8 = in_FPSR >> 0x1d & 1;
        __saturate((int)cVar1 - (unaff_r22 * (uint)(uVar8 == 1) + in_r1 * (uVar8 != 1) + -9));
        *(short *)(iVar9 + 0xa4) = (short)*(undefined4 *)(iVar9 + 0xa4);
                    /* WARNING: Could not recover jumptable at 0x00039cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00039cfc + *(short *)(&DAT_00039cfc + in_r1 * 2) * 2))
                  (param_1,param_2,~(int)cVar1,(int)*(short *)(uint)*(ushort *)(iVar9 + 0x18));
        return;
      }
    }
  } while( true );
}


// ==== FUN_0003ae52 @ 0003ae52 (size 84) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003ae52(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int in_r11;
  int iVar3;
  int unaff_r26;
  undefined4 unaff_r27;
  char *unaff_ep;
  int unaff_lp;
  int unaff_CTBP;
  
  cVar1 = *(char *)(param_3 + -0x7d85);
  __saturate(unaff_r26 + 0xb);
  *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
  *(short *)(cVar1 + 0x2c74) = (short)unaff_lp;
  *unaff_ep = cVar1;
  iVar3 = in_r11 + 0x10000;
  iVar2 = (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x16)))();
  __saturate(iVar3 - (cVar1 + -0xb));
  *(undefined1 *)(iVar2 + -0x7368) = *(undefined1 *)(unaff_lp + 0x5d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b640 @ 0003b640 (size 98) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003b640(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int unaff_r27;
  int iVar4;
  int unaff_ep;
  int *piVar5;
  undefined2 unaff_lp;
  
  piVar5 = (int *)(uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
  sVar2 = *(short *)((int)piVar5 + 2);
  __saturate((unaff_r27 >> 0x14) + -1);
  iVar4 = (int)*(char *)(*(short *)(unaff_ep + 10) + -0x7d85);
  __saturate(*(ushort *)(unaff_ep + 0x18) + 0xb);
  sVar3 = *(short *)((int)piVar5 + 0xf6);
  *(undefined2 *)(iVar4 + 0x2c74) = unaff_lp;
  *piVar5 = (int)sVar2;
  __saturate((int)sVar3 - (iVar4 - 0xbU >> 1));
  cVar1 = *(char *)((int)piVar5 + 0x5d);
  iVar4 = (int)DAT_ffffe700;
  *(short *)(*(ushort *)(piVar5 + 6) + 0x20) = (short)piVar5[8];
  __saturate(-(cVar1 - iVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b6a2 @ 0003b6a2 (size 66) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003b6a2(void)

{
  char cVar1;
  int in_r16;
  int unaff_r28;
  int iVar2;
  int unaff_ep;
  
  __saturate(in_r16 - unaff_r28);
  cVar1 = *(char *)(unaff_ep + 0x5d);
  iVar2 = (int)DAT_ffffe700;
  *(undefined2 *)(*(ushort *)(unaff_ep + 0x18) + 0x20) = *(undefined2 *)(unaff_ep + 0x20);
  __saturate(-(cVar1 - iVar2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003b6e6 @ 0003b6e6 (size 245) ====

/* WARNING: Instruction at (ram,0x0003b7ba) overlaps instruction at (ram,0x0003b7b8)
    */

void FUN_0003b6e6(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int in_r2;
  int unaff_tp;
  int in_r11;
  undefined4 in_r15;
  int in_r16;
  byte in_r19;
  uint unaff_r20;
  undefined4 unaff_r27;
  uint uVar4;
  int unaff_ep;
  uint uVar5;
  int iVar6;
  int unaff_lp;
  byte in_PSW;
  
  uVar5 = (uint)*(char *)(unaff_ep + 0x7c);
  if ((in_PSW & 1) != 1) {
    *(int *)(uVar5 + 0xe0) = in_r11;
    uVar5 = uVar5 | unaff_r20;
    __saturate(in_r15);
    if (in_r16 < 1) {
      *(short *)(uVar5 + 0xe4) = (short)in_r11;
      iVar6 = *(int *)(uVar5 + 0x28);
      *(short *)(iVar6 + 0xe8) = (short)in_r11;
      bVar3 = (byte)in_r16 | in_r19 | (byte)unaff_tp;
      *(undefined2 *)(iVar6 + 0xbe) = param_3;
      *(byte *)(unaff_tp + 0xff) = bVar3;
      *(byte *)(in_r2 + 0xff) = bVar3;
      (*(code *)&LAB_00000030)();
      return;
    }
  }
  while( true ) {
    *(uint *)(uVar5 + 0x58) = unaff_r20;
    *(char *)(uVar5 + 0x30) = (char)in_r16;
    uVar2 = (undefined1)unaff_r27;
    *(undefined1 *)(uVar5 + 0x5d) = uVar2;
    in_r16 = (int)*(char *)(uVar5 + 0x68);
    cVar1 = *(char *)(unaff_lp + -0x2413);
    *(undefined1 *)(uVar5 + 0x70) = uVar2;
    *(undefined1 *)(uVar5 + 0x7f) = uVar2;
    *(undefined1 *)(uVar5 + 0x7f) = uVar2;
    *(undefined1 *)(uVar5 + 0x76) = uVar2;
    *(undefined1 *)(uVar5 + 0x73) = uVar2;
    *(undefined1 *)(uVar5 + 0x79) = uVar2;
    *(undefined1 *)(uVar5 + 0x7c) = uVar2;
    unaff_r27 = *(undefined4 *)(uVar5 + 0x48);
    *(undefined4 *)(uVar5 + 0x5c) = unaff_r27;
    *(undefined4 *)(uVar5 + 0x78) = unaff_r27;
    *(undefined4 *)(uVar5 + 200) = unaff_r27;
    *(undefined4 *)(uVar5 + 0xf4) = unaff_r27;
    if ((int)cVar1 - 0x42U < 0xb) break;
    *(char *)(uVar5 + 0x6d) = (char)unaff_r27;
  }
  uVar4 = (int)cVar1 - 0x4dU >> 1;
  *(char *)(*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18) + 1) = (char)uVar4;
  *(short *)(uVar4 + 0x243e) = (short)unaff_lp;
  *(short *)(uVar4 + 0x2420) = (short)unaff_lp;
                    /* WARNING: Could not recover jumptable at 0x0003b836. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b838 + *(short *)(&DAT_0003b838 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003b930 @ 0003b930 (size 24) ====

void FUN_0003b930(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_r2;
  int unaff_gp;
  int unaff_tp;
  uint in_r11;
  int in_r16;
  uint uVar1;
  int iVar2;
  uint in_r18;
  uint unaff_r27;
  int iVar3;
  int unaff_r29;
  int unaff_ep;
  short unaff_lp;
  
  __saturate(in_r16);
  *(undefined2 *)(unaff_ep + 0x90) = 0;
  __saturate(unaff_gp - in_r2);
  *(char *)(*(char *)(unaff_ep + 0x50) + 0x210) = *(char *)(unaff_ep + 0x50);
  __saturate(0);
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  *(undefined2 *)(unaff_r29 + 0x90) = 0;
  uVar1 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar1;
  iVar2 = uVar1 + 2;
  __saturate(iVar2);
  *(undefined2 *)(unaff_r29 + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar2;
  *(short *)(iVar3 + 0x240d) = unaff_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + (in_r11 ^ param_3) * 2) * 2))();
  return;
}


// ==== FUN_0003b948 @ 0003b948 (size 24) ====

void FUN_0003b948(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_tp;
  int in_r11;
  int in_r16;
  uint uVar1;
  int iVar2;
  uint in_r18;
  uint unaff_r27;
  int iVar3;
  int unaff_r29;
  short unaff_lp;
  
  __saturate(0);
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  *(undefined2 *)(unaff_r29 + 0x90) = 0;
  uVar1 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar1;
  iVar2 = uVar1 + 2;
  __saturate(iVar2);
  *(undefined2 *)(unaff_r29 + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar2;
  *(short *)(iVar3 + 0x240d) = unaff_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003b960 @ 0003b960 (size 38) ====

void FUN_0003b960(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_tp;
  int in_r11;
  uint in_r16;
  int iVar1;
  uint unaff_r27;
  int unaff_r28;
  int unaff_ep;
  short unaff_lp;
  
  *(char *)(param_3 + 0x5928) = (char)(in_r16 & unaff_r27);
  iVar1 = (in_r16 & unaff_r27) + 2;
  __saturate(iVar1);
  *(undefined2 *)(unaff_ep + 0x90) = 0;
  *(char *)(unaff_tp + 0xcc) = (char)iVar1;
  *(short *)(unaff_r28 + 0x240d) = unaff_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003b984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003b986 + *(short *)(&DAT_0003b986 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003c304 @ 0003c304 (size 64) ====

void FUN_0003c304(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 unaff_gp;
  int unaff_tp;
  int in_r11;
  int in_r16;
  uint uVar1;
  int iVar2;
  undefined1 in_r17;
  uint in_r18;
  uint unaff_r27;
  int unaff_r28;
  int unaff_ep;
  short unaff_lp;
  
  *(undefined1 *)(in_r16 + 0x2008) = in_r17;
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  uVar1 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar1;
  iVar2 = uVar1 + 2;
  __saturate(iVar2);
  *(char *)(unaff_tp + 0x84) = (char)iVar2;
  *(undefined1 *)(*(ushort *)(unaff_ep + 0x18) + 0x72) = unaff_gp;
  *(short *)(unaff_r28 + 0x23ef) = unaff_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003c342. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003c344 + *(short *)(&DAT_0003c344 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003d0f2 @ 0003d0f2 (size 84) ====

void FUN_0003d0f2(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int in_r2;
  uint unaff_gp;
  uint in_r11;
  int in_r16;
  uint uVar1;
  uint in_r18;
  uint unaff_r27;
  int iVar2;
  int unaff_r29;
  int unaff_ep;
  int unaff_lp;
  
  while( true ) {
    __saturate(in_r16);
    in_r2 = unaff_gp - in_r2;
    __saturate(in_r2);
    *(char *)(*(char *)(unaff_ep + 0x50) + 0x210) = *(char *)(unaff_ep + 0x50);
    __saturate(0);
    iVar2 = (int)DAT_ffff8f50;
    *(char *)(param_3 + 0x5928) = (char)in_r16;
    __saturate(in_r16 + 2U);
    unaff_gp = param_3 & 0xff;
    uVar1 = in_r16 + 2U & in_r18 & unaff_r27;
    *(char *)(param_3 + 0x5928) = (char)uVar1;
    in_r16 = uVar1 + 2;
    __saturate(in_r16);
    if (0xfffffffd < uVar1) break;
    in_r11 = in_r11 ^ param_3;
    unaff_ep = unaff_r29;
  }
  *(int *)(iVar2 + 0x23c1) = unaff_lp << 0xe;
                    /* WARNING: Could not recover jumptable at 0x0003d142. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003d144 + *(short *)(&DAT_0003d144 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003d2fa @ 0003d2fa (size 946) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d2fa(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  undefined1 unaff_gp;
  int unaff_tp;
  byte bVar5;
  undefined1 uVar6;
  uint in_r16;
  undefined4 in_r18;
  uint unaff_r24;
  int unaff_ep;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  uVar4 = *(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar4 + 0x51) = unaff_gp;
  iVar7 = *(int *)(uVar4 + 0xf8);
  *(undefined1 *)(iVar7 + 0x56) = unaff_gp;
  uVar8 = (uint)*(ushort *)((int)(short)iVar7 * (int)(short)unaff_tp + 0x18);
  *(undefined1 *)(uVar8 + 0x5a) = unaff_gp;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x50) = unaff_gp;
  iVar7 = *(int *)(uVar8 + 0xf8);
  *(undefined1 *)(iVar7 + 0x57) = unaff_gp;
  uVar9 = (uint)*(ushort *)((int)(short)iVar7 * (int)(short)unaff_tp + 0x18);
  *(undefined1 *)(uVar9 + 0x59) = unaff_gp;
  *(char *)(param_3 + 0x1bed) = (char)in_r16;
  uVar8 = (((in_r16 / 0) / 0) / 0) / 2;
  *(undefined1 *)(uVar9 + 0x6d) = 0;
  *(undefined1 *)(uVar9 + 0x46) = 0;
  __saturate(5);
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x4a) = 0;
  sVar2 = *(short *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x4a) = 0;
  uVar4 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar4 + 0x4a) = 0;
  uVar9 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar9 + 0x58) = 0;
  *(char *)(sVar2 + 0x1bed) = (char)uVar8;
  uVar8 = uVar8 / 0;
  *(char *)(sVar2 + 0x1bed) = (char)uVar8;
  *(undefined1 *)(uVar9 + 0x46) = 0;
  uVar8 = ((((((((uVar8 / 0) / 0) / 0) / 0) / 0) / 0) / 0) / 0) / 0;
  *(undefined1 *)(uVar9 + 0x46) = 0;
  __saturate(10);
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x4a) = 0;
  sVar2 = *(short *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x4a) = 0;
  uVar4 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar4 + 0x4a) = 0;
  uVar9 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar9 + 0x5b) = 0;
  *(char *)(sVar2 + 0x1bed) = (char)uVar8;
  *(undefined1 *)(uVar9 + 0x6d) = 0;
  *(undefined1 *)(uVar9 + 0x46) = 0;
  uVar8 = (((((((uVar8 / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2;
  *(undefined1 *)(uVar9 + 0x6d) = 0;
  *(undefined1 *)(uVar9 + 0x46) = 0;
  _DAT_0000478d = 0;
  uVar4 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar4 + 0x59) = 0;
  uVar9 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar9 + 0x5a) = 0;
  uRam00001bed = (undefined1)uVar8;
  *(undefined1 *)(uVar9 + 0x6d) = 0;
  *(undefined1 *)(uVar9 + 0x47) = 0;
  uVar4 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar4 + 0x4f) = 0;
  uVar9 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar9 + 0x50) = 0;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x51) = 0;
  __saturate((((uVar8 / 0) / 0) / 0) / 2 + (int)DAT_ffffe180);
  iVar7 = (int)DAT_ffffe700;
  __saturate(iVar7 + -0x23cd);
  __saturate(iVar7 + -0x23c7);
  iVar7 = *(char *)(uVar9 + 0x5d) - iVar7;
  __saturate(iVar7);
  __saturate(iVar7 + -0x23cf);
  *(char *)(iVar7 + -0x2388) = -(char)unaff_tp;
  *(undefined1 *)(iVar7 + -0x2387) = 0;
  __saturate(0xe);
  uRam00000066 = 0;
  __saturate(6);
  uRam00000061 = 0;
  __saturate(5);
  __saturate(4);
  uRam0000005e = 0;
  uVar4 = Ram0000001c;
  uVar8 = (uint)uVar4;
  *(undefined1 *)(uVar8 + 0x52) = 0;
  *(undefined1 *)(uVar8 + 0x48) = 0;
  *(undefined1 *)(uVar8 + 0x48) = 0;
  uVar4 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar4 + 0x48) = 0;
  uVar8 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar8 + 0x58) = 0;
  *(undefined1 *)(uVar8 + 0x46) = 0;
  uVar4 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar4 + 0x5b) = 0;
  uVar8 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar8 + 0x52) = 0;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x4f) = 0;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x49) = 0;
  sVar2 = *(short *)(uVar8 + 0x28);
  uVar4 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x49) = 0;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined4 *)(uVar8 + 0x34) = 0;
  *(undefined1 *)(uVar8 + 0x49) = 0;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x5b) = 0;
  *(undefined1 *)(uVar8 + 0x6d) = 0;
  iVar7 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar4 + 0xb);
  *(undefined1 *)(uVar8 + 0x54) = 0;
  sVar2 = *(short *)(uVar8 + 2);
  iVar10 = (int)*(char *)(uVar8 + 0x7c);
  *(undefined1 *)(iVar10 + 0x53) = 0;
  *(undefined1 *)(iVar10 + 0x54) = 0;
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  *(undefined1 *)(uVar8 + 0x56) = 0;
  *(undefined4 *)(iVar7 + 0x23d4) = 0;
  __saturate(6);
  *(char *)(sVar2 + 0x23c6) = (char)in_r18;
  sVar2 = *(short *)(uVar8 + 0x20);
  bVar5 = (byte)(*(short *)(uVar8 + 4) >> 0xf);
  sVar3 = *(short *)(uVar8 + 0x42);
  iVar10 = *(int *)(uVar8 + 0xf8);
  *(int *)(iVar7 + 0x23d0) = iVar10;
  iVar10 = iVar10 - unaff_r24;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x51) = 0;
  iVar10 = *(int *)(iVar10 + 0xf8);
  *(undefined4 *)(iVar10 + 0x38) = 0;
  *(int *)(iVar7 + 0x23c5) = iVar10;
  iVar10 = iVar10 + sVar3;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x51) = 0;
  cRam000023c6 = (char)((int)in_r18 >> 0x1f);
  cVar1 = *(char *)(iVar10 + 0x70);
  uVar8 = (uint)uRam000023ee;
  *(undefined1 *)(uVar8 + 0x57) = 0;
  *(undefined1 *)(uVar8 + 0x4e) = 0;
  uVar6 = (&DAT_00005c72)[cVar1];
  func_0xffec5314(param_1,param_2,(int)sVar2);
  *(undefined1 *)(unaff_tp + 0xff) = uVar6;
  DAT_000000ff = uVar6;
  *(short *)(uVar8 + 4) = (short)((uint)((short)(ushort)bVar5 * -0x10) / unaff_r24);
  *(undefined4 *)(*(int *)(uVar8 + 0xf8) + 0x3c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d6ac @ 0003d6ac (size 84) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003d6ac(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  ushort unaff_gp;
  int unaff_tp;
  byte bVar4;
  undefined1 uVar5;
  undefined4 in_r18;
  int unaff_r20;
  uint unaff_r24;
  int unaff_r28;
  int unaff_ep;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lp;
  
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x54) = uVar5;
  sVar2 = *(short *)(unaff_ep + 2);
  iVar6 = (int)*(char *)(unaff_ep + 0x7c);
  *(undefined1 *)(iVar6 + 0x53) = uVar5;
  *(undefined1 *)(iVar6 + 0x54) = uVar5;
  uVar7 = (uint)*(ushort *)(iVar6 + 0x18);
  *(undefined1 *)(uVar7 + 0x56) = uVar5;
  *(undefined4 *)(unaff_r28 + 0x23d4) = unaff_lp;
  __saturate(unaff_r20 + 4);
  *(char *)(sVar2 + 0x23c6) = (char)in_r18;
  sVar2 = *(short *)(uVar7 + 0x20);
  bVar4 = (byte)(*(short *)(uVar7 + 4) >> 0xf);
  sVar3 = *(short *)(uVar7 + 0x42);
  iVar6 = *(int *)(uVar7 + 0xf8);
  *(int *)(unaff_r28 + 0x23d0) = iVar6;
  iVar6 = iVar6 - unaff_r24;
  __saturate(iVar6);
  *(undefined1 *)(iVar6 + 0x51) = uVar5;
  iVar6 = *(int *)(iVar6 + 0xf8);
  *(undefined4 *)(iVar6 + 0x38) = 0;
  *(int *)(unaff_r28 + 0x23c5) = iVar6;
  iVar6 = iVar6 + sVar3;
  __saturate(iVar6);
  *(undefined1 *)(iVar6 + 0x51) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23d3) * (int)(short)in_r18 + 0x23c6) =
       (char)((int)in_r18 >> 0x1f);
  cVar1 = *(char *)(iVar6 + 0x70);
  uVar7 = (uint)uRam000023ee;
  *(undefined1 *)(uVar7 + 0x57) = uVar5;
  *(undefined1 *)(uVar7 + 0x4e) = uVar5;
  uVar5 = (&DAT_00005c72)[cVar1];
  func_0xffec5314(param_1,param_2,(int)sVar2);
  *(undefined1 *)(unaff_tp + 0xff) = uVar5;
  DAT_000000ff = uVar5;
  *(short *)(uVar7 + 4) = (short)((uint)((short)(ushort)bVar4 * -0x10) / unaff_r24);
  *(undefined4 *)(*(int *)(uVar7 + 0xf8) + 0x3c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d700 @ 0003d700 (size 104) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003d700(void)

{
  char cVar1;
  undefined1 unaff_gp;
  int unaff_tp;
  int in_r9;
  int in_r10;
  undefined4 in_r15;
  byte bVar2;
  undefined1 uVar3;
  int in_r16;
  uint unaff_r24;
  int unaff_r28;
  int unaff_ep;
  int iVar4;
  uint uVar5;
  uint unaff_lp;
  
  bVar2 = (byte)((uint)in_r15 >> 0x18);
  *(int *)(unaff_r28 + 0x23d0) = unaff_ep;
  iVar4 = unaff_ep + in_r10;
  __saturate(iVar4);
  *(undefined1 *)(iVar4 + 0x51) = unaff_gp;
  *(char *)(in_r9 + 0x23c6) = (char)(in_r16 >> 0x16);
  cVar1 = *(char *)(iVar4 + 0x70);
  uVar5 = (uint)*(ushort *)(unaff_lp + 0x23ee);
  *(undefined1 *)(uVar5 + 0x57) = unaff_gp;
  *(undefined1 *)(uVar5 + 0x4e) = unaff_gp;
  do {
  } while (0xffffdc29 < unaff_lp);
  uVar3 = (&DAT_00005c72)[cVar1];
  func_0xffec5314();
  *(undefined1 *)(unaff_tp + 0xff) = uVar3;
  DAT_000000ff = uVar3;
  *(short *)(uVar5 + 4) = (short)((uint)((short)(ushort)bVar2 * -0x10) / unaff_r24);
  *(undefined4 *)(*(int *)(uVar5 + 0xf8) + 0x3c) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003d886 @ 0003d886 (size 134) ====

void FUN_0003d886(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  uint in_r1;
  int in_r2;
  undefined1 unaff_gp;
  int in_r11;
  int in_r13;
  undefined1 in_r16;
  int in_r19;
  int unaff_r28;
  int unaff_ep;
  uint uVar4;
  undefined2 unaff_lp;
  
  do {
    iVar1 = unaff_r28 + -0xb;
    unaff_r28 = unaff_r28 + -0xb;
  } while (iVar1 < 0);
  __saturate(in_r2 + 0x56e8);
  cVar2 = *(char *)(in_r19 + -0x56f4);
  *(undefined1 *)(param_3 + 0x1bec) = in_r16;
  *(short *)(in_r13 + -0xf84) = (short)cVar2;
  *(undefined1 *)(unaff_ep + 0x36) = unaff_gp;
  uVar4 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar4 + 0x37) = unaff_gp;
  *(byte *)(uVar4 + 1) = (byte)in_r1 | 0xf0;
  uVar3 = *(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar3 + 0x38) = unaff_gp;
  *(undefined1 *)(*(ushort *)(uVar3 + 0x18) + 0x39) = unaff_gp;
  *(undefined2 *)((in_r1 | 0x21f0) + 0x243e) = unaff_lp;
  *(undefined2 *)((in_r1 | 0x21f0) + 0x23c2) = unaff_lp;
                    /* WARNING: Could not recover jumptable at 0x0003d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003d956 + *(short *)(&DAT_0003d956 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003d90c @ 0003d90c (size 74) ====

void FUN_0003d90c(void)

{
  ushort uVar1;
  uint in_r1;
  undefined1 unaff_gp;
  int in_r11;
  int unaff_ep;
  undefined2 unaff_lp;
  
  *(byte *)(unaff_ep + 1) = (byte)in_r1 | 0xf0;
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar1 + 0x38) = unaff_gp;
  *(undefined1 *)(*(ushort *)(uVar1 + 0x18) + 0x39) = unaff_gp;
  *(undefined2 *)((in_r1 | 0x21f0) + 0x243e) = unaff_lp;
  *(undefined2 *)((in_r1 | 0x21f0) + 0x23c2) = unaff_lp;
                    /* WARNING: Could not recover jumptable at 0x0003d954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003d956 + *(short *)(&DAT_0003d956 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003d9ea @ 0003d9ea (size 24) ====

void FUN_0003d9ea(void)

{
  undefined1 unaff_gp;
  int in_r11;
  int unaff_r28;
  int unaff_ep;
  undefined4 unaff_lp;
  
  *(undefined1 *)(*(ushort *)(unaff_ep + 0x18) + 0x32) = unaff_gp;
  *(undefined4 *)(unaff_r28 + 0x23c4) = unaff_lp;
                    /* WARNING: Could not recover jumptable at 0x0003da00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003da02 + *(short *)(&DAT_0003da02 + in_r11 * 2) * 2))();
  return;
}


// ==== FUN_0003dca2 @ 0003dca2 (size 46) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dca2(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  uint unaff_r20;
  int unaff_r24;
  uint uVar6;
  int iVar7;
  int unaff_ep;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_lp;
  
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x32) = uVar5;
  __saturate(unaff_r20 + 2);
  uVar8 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x35) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar9 + 0x42) = uVar5;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  uVar8 = ((((in_r16 / 0) / 0) / 0) / unaff_r20) / 0x10;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x32) = uVar5;
  *(char *)(sVar2 + 0x23ac) = (char)uVar8;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  uVar8 = uVar8 / 0x100;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  __saturate(9);
  *(char *)(sVar2 + 0x23ac) = (char)uVar8;
  uVar9 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar9 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined4 *)(uVar9 + 0x44) = 0;
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x45) = uVar5;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x32) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x44) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  cVar1 = *(char *)(sVar2 + -0xf84);
  *(undefined1 *)(uVar6 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x38) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((((((uVar8 / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar7 = (int)*(char *)(uVar6 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar7);
  __saturate(iVar7 + -0x23ac);
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  uVar8 = in_r1 | 0x23bb;
  __saturate(uVar8 - 0x23b6);
  *(undefined1 *)(uVar8 - 0x2374) = uVar5;
  __saturate(uVar8 - 0x23b7);
  *(undefined1 *)(uVar8 - 0x2372) = uVar5;
  __saturate(uVar8 - 0x23b8);
  *(undefined1 *)(uVar8 - 0x2375) = uVar5;
  __saturate(uVar8 - 0x23b9);
  *(undefined1 *)(uVar8 - 0x2375) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 - 0x23a1);
  *(undefined1 *)(uVar8 + 0x3a) = uVar5;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined4 *)(uVar8 + 0x40) = 0;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x42) = uVar5;
  *(undefined1 *)(uVar8 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar8 + 0x3a) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x37) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x3c) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar3 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar8 + 0x45) = uVar5;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  iVar7 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar8 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar8 + 2);
  iVar10 = (int)*(char *)(uVar8 + 0x7c);
  *(undefined1 *)(iVar10 + 0x3f) = uVar5;
  *(undefined1 *)(iVar10 + 0x40) = uVar5;
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  *(undefined1 *)(uVar8 + 0x3e) = uVar5;
  *(undefined4 *)(iVar7 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar8 + 0x42);
  iVar10 = *(int *)(uVar8 + 0xf8);
  *(undefined4 *)(iVar10 + 0x4c) = 0;
  *(int *)(iVar7 + 0x23b8) = iVar10;
  iVar10 = iVar10 - unaff_r24;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x39) = uVar5;
  iVar10 = *(int *)(iVar10 + 0xf8);
  *(int *)(iVar7 + 0x23ad) = iVar10;
  iVar10 = iVar10 + sVar2;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar8 = (uint)uRam000023d6;
  *(undefined1 *)(uVar8 + 0x3d) = uVar5;
  *(undefined1 *)(uVar8 + 0x2d) = uVar5;
  *(undefined1 *)(uVar8 + 0x2f) = uVar5;
  *(undefined2 *)(uVar8 + 0xe8) = *(undefined2 *)(uVar8 + 0x50);
  *(undefined2 *)(uVar8 + 0xa4) = *(undefined2 *)(uVar8 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dcd0 @ 0003dcd0 (size 108) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dcd0(void)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  uint uVar6;
  int iVar7;
  int unaff_ep;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_lp;
  
  uVar8 = (uint)*(ushort *)(unaff_ep + 0x18);
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x35) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar8 + 0x42) = uVar5;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x32) = uVar5;
  *(char *)(sVar2 + 0x23ac) = (char)(in_r16 / 0x10);
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  uVar8 = (in_r16 / 0x10) / 0x100;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  __saturate(9);
  *(char *)(sVar2 + 0x23ac) = (char)uVar8;
  uVar9 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar9 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined4 *)(uVar9 + 0x44) = 0;
  *(undefined1 *)(uVar9 + 0x35) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x45) = uVar5;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x6c) = 0;
  *(undefined1 *)(uVar9 + 0x32) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x44) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  cVar1 = *(char *)(sVar2 + -0xf84);
  *(undefined1 *)(uVar6 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x38) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((((((uVar8 / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar7 = (int)*(char *)(uVar6 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar7);
  __saturate(iVar7 + -0x23ac);
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  uVar8 = in_r1 | 0x23bb;
  __saturate(uVar8 - 0x23b6);
  *(undefined1 *)(uVar8 - 0x2374) = uVar5;
  __saturate(uVar8 - 0x23b7);
  *(undefined1 *)(uVar8 - 0x2372) = uVar5;
  __saturate(uVar8 - 0x23b8);
  *(undefined1 *)(uVar8 - 0x2375) = uVar5;
  __saturate(uVar8 - 0x23b9);
  *(undefined1 *)(uVar8 - 0x2375) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 - 0x23a1);
  *(undefined1 *)(uVar8 + 0x3a) = uVar5;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined4 *)(uVar8 + 0x40) = 0;
  *(undefined1 *)(uVar8 + 0x33) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x42) = uVar5;
  *(undefined1 *)(uVar8 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar8 + 0x3a) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x37) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x3c) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar3 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar8 + 0x45) = uVar5;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  iVar7 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar8 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar8 + 2);
  iVar10 = (int)*(char *)(uVar8 + 0x7c);
  *(undefined1 *)(iVar10 + 0x3f) = uVar5;
  *(undefined1 *)(iVar10 + 0x40) = uVar5;
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  *(undefined1 *)(uVar8 + 0x3e) = uVar5;
  *(undefined4 *)(iVar7 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar8 + 0x42);
  iVar10 = *(int *)(uVar8 + 0xf8);
  *(undefined4 *)(iVar10 + 0x4c) = 0;
  *(int *)(iVar7 + 0x23b8) = iVar10;
  iVar10 = iVar10 - unaff_r24;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x39) = uVar5;
  iVar10 = *(int *)(iVar10 + 0xf8);
  *(int *)(iVar7 + 0x23ad) = iVar10;
  iVar10 = iVar10 + sVar2;
  __saturate(iVar10);
  *(undefined1 *)(iVar10 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar8 = (uint)uRam000023d6;
  *(undefined1 *)(uVar8 + 0x3d) = uVar5;
  *(undefined1 *)(uVar8 + 0x2d) = uVar5;
  *(undefined1 *)(uVar8 + 0x2f) = uVar5;
  *(undefined2 *)(uVar8 + 0xe8) = *(undefined2 *)(uVar8 + 0x50);
  *(undefined2 *)(uVar8 + 0xa4) = *(undefined2 *)(uVar8 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dd3c @ 0003dd3c (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dd3c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int unaff_r26;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lp;
  
  *(char *)(param_3 + 0x23ac) = (char)in_r16;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_r26 + 0x32) = uVar5;
  __saturate(9);
  *(char *)(param_3 + 0x23ac) = (char)(in_r16 / 0x100);
  uVar8 = (uint)*(ushort *)(unaff_r26 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined4 *)(uVar8 + 0x44) = 0;
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x45) = uVar5;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x32) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x44) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  cVar1 = *(char *)(sVar2 + -0xf84);
  *(undefined1 *)(uVar6 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x38) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate(((((((((((((in_r16 / 0x100) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2
             - (in_r1 - (int)DAT_ffffe180));
  iVar7 = (int)*(char *)(uVar6 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar7);
  __saturate(iVar7 + -0x23ac);
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  uVar6 = in_r1 | 0x23bb;
  __saturate(uVar6 - 0x23b6);
  *(undefined1 *)(uVar6 - 0x2374) = uVar5;
  __saturate(uVar6 - 0x23b7);
  *(undefined1 *)(uVar6 - 0x2372) = uVar5;
  __saturate(uVar6 - 0x23b8);
  *(undefined1 *)(uVar6 - 0x2375) = uVar5;
  __saturate(uVar6 - 0x23b9);
  *(undefined1 *)(uVar6 - 0x2375) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 - 0x23a1);
  *(undefined1 *)(uVar6 + 0x3a) = uVar5;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined4 *)(uVar6 + 0x40) = 0;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x42) = uVar5;
  *(undefined1 *)(uVar6 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar6 + 0x14);
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar7 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar6 + 2);
  iVar9 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar9 + 0x3f) = uVar5;
  *(undefined1 *)(iVar9 + 0x40) = uVar5;
  uVar6 = (uint)*(ushort *)(iVar9 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar5;
  *(undefined4 *)(iVar7 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar6 + 0x42);
  iVar9 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar9 + 0x4c) = 0;
  *(int *)(iVar7 + 0x23b8) = iVar9;
  iVar9 = iVar9 - unaff_r24;
  __saturate(iVar9);
  *(undefined1 *)(iVar9 + 0x39) = uVar5;
  iVar9 = *(int *)(iVar9 + 0xf8);
  *(int *)(iVar7 + 0x23ad) = iVar9;
  iVar9 = iVar9 + sVar2;
  __saturate(iVar9);
  *(undefined1 *)(iVar9 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar5;
  *(undefined1 *)(uVar6 + 0x2d) = uVar5;
  *(undefined1 *)(uVar6 + 0x2f) = uVar5;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dd70 @ 0003dd70 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dd70(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  int unaff_r20;
  int unaff_r24;
  int unaff_r26;
  uint uVar6;
  int iVar7;
  int unaff_ep;
  uint uVar8;
  int iVar9;
  undefined4 unaff_lp;
  
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x32) = uVar5;
  __saturate(unaff_r20 + 5);
  *(char *)(param_3 + 0x23ac) = (char)in_r16;
  uVar8 = (uint)*(ushort *)(unaff_r26 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  sVar2 = *(short *)(uVar8 + 0x14);
  uVar6 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined4 *)(uVar8 + 0x44) = 0;
  *(undefined1 *)(uVar8 + 0x35) = uVar5;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar8 + 0x45) = uVar5;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x6c) = 0;
  *(undefined1 *)(uVar8 + 0x32) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x32) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x44) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  cVar1 = *(char *)(sVar2 + -0xf84);
  *(undefined1 *)(uVar6 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x38) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((((((in_r16 / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar7 = (int)*(char *)(uVar6 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar7);
  __saturate(iVar7 + -0x23ac);
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  *(undefined1 *)(iVar7 + -0x2379) = uVar5;
  uVar6 = in_r1 | 0x23bb;
  __saturate(uVar6 - 0x23b6);
  *(undefined1 *)(uVar6 - 0x2374) = uVar5;
  __saturate(uVar6 - 0x23b7);
  *(undefined1 *)(uVar6 - 0x2372) = uVar5;
  __saturate(uVar6 - 0x23b8);
  *(undefined1 *)(uVar6 - 0x2375) = uVar5;
  __saturate(uVar6 - 0x23b9);
  *(undefined1 *)(uVar6 - 0x2375) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 - 0x23a1);
  *(undefined1 *)(uVar6 + 0x3a) = uVar5;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined4 *)(uVar6 + 0x40) = 0;
  *(undefined1 *)(uVar6 + 0x33) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x42) = uVar5;
  *(undefined1 *)(uVar6 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar6 + 0x14);
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar6 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar5;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar7 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar6 + 2);
  iVar9 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar9 + 0x3f) = uVar5;
  *(undefined1 *)(iVar9 + 0x40) = uVar5;
  uVar6 = (uint)*(ushort *)(iVar9 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar5;
  *(undefined4 *)(iVar7 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar6 + 0x42);
  iVar9 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar9 + 0x4c) = 0;
  *(int *)(iVar7 + 0x23b8) = iVar9;
  iVar9 = iVar9 - unaff_r24;
  __saturate(iVar9);
  *(undefined1 *)(iVar9 + 0x39) = uVar5;
  iVar9 = *(int *)(iVar9 + 0xf8);
  *(int *)(iVar7 + 0x23ad) = iVar9;
  iVar9 = iVar9 + sVar2;
  __saturate(iVar9);
  *(undefined1 *)(iVar9 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar5;
  *(undefined1 *)(uVar6 + 0x2d) = uVar5;
  *(undefined1 *)(uVar6 + 0x2f) = uVar5;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dda4 @ 0003dda4 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dda4(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int unaff_r26;
  int iVar6;
  int unaff_ep;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lp;
  
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x35) = uVar5;
  uVar7 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar7 + 0x45) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  *(undefined1 *)(uVar7 + 0x32) = uVar5;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x32) = uVar5;
  uVar3 = *(ushort *)(unaff_r26 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x44) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  cVar1 = *(char *)(param_3 + -0xf84);
  *(undefined1 *)(uVar7 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x38) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((((((in_r16 / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar6 = (int)*(char *)(uVar7 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar6);
  __saturate(iVar6 + -0x23ac);
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  uVar7 = in_r1 | 0x23bb;
  __saturate(uVar7 - 0x23b6);
  *(undefined1 *)(uVar7 - 0x2374) = uVar5;
  __saturate(uVar7 - 0x23b7);
  *(undefined1 *)(uVar7 - 0x2372) = uVar5;
  __saturate(uVar7 - 0x23b8);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  __saturate(uVar7 - 0x23b9);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 - 0x23a1);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined4 *)(uVar7 + 0x40) = 0;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x42) = uVar5;
  *(undefined1 *)(uVar7 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x3c) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar7 + 0x14);
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar7 + 0x45) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  iVar6 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar7 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar7 + 2);
  iVar8 = (int)*(char *)(uVar7 + 0x7c);
  *(undefined1 *)(iVar8 + 0x3f) = uVar5;
  *(undefined1 *)(iVar8 + 0x40) = uVar5;
  uVar7 = (uint)*(ushort *)(iVar8 + 0x18);
  *(undefined1 *)(uVar7 + 0x3e) = uVar5;
  *(undefined4 *)(iVar6 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar7 + 0x42);
  iVar8 = *(int *)(uVar7 + 0xf8);
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(int *)(iVar6 + 0x23b8) = iVar8;
  iVar8 = iVar8 - unaff_r24;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  iVar8 = *(int *)(iVar8 + 0xf8);
  *(int *)(iVar6 + 0x23ad) = iVar8;
  iVar8 = iVar8 + sVar2;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar7 = (uint)uRam000023d6;
  *(undefined1 *)(uVar7 + 0x3d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2f) = uVar5;
  *(undefined2 *)(uVar7 + 0xe8) = *(undefined2 *)(uVar7 + 0x50);
  *(undefined2 *)(uVar7 + 0xa4) = *(undefined2 *)(uVar7 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003ddd8 @ 0003ddd8 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ddd8(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  uint unaff_r20;
  int unaff_r24;
  int unaff_r26;
  int iVar6;
  int unaff_ep;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lp;
  
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x32) = uVar5;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x6c) = 0;
  *(undefined1 *)(unaff_r26 + 0x32) = uVar5;
  uVar3 = *(ushort *)(unaff_r26 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x44) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  cVar1 = *(char *)(param_3 + -0xf84);
  *(undefined1 *)(uVar7 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x38) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((((in_r16 / 0) / unaff_r20) / 0) / 0) / 0) / 2) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar6 = (int)*(char *)(uVar7 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar6);
  __saturate(iVar6 + -0x23ac);
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  uVar7 = in_r1 | 0x23bb;
  __saturate(uVar7 - 0x23b6);
  *(undefined1 *)(uVar7 - 0x2374) = uVar5;
  __saturate(uVar7 - 0x23b7);
  *(undefined1 *)(uVar7 - 0x2372) = uVar5;
  __saturate(uVar7 - 0x23b8);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  __saturate(uVar7 - 0x23b9);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 - 0x23a1);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined4 *)(uVar7 + 0x40) = 0;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x42) = uVar5;
  *(undefined1 *)(uVar7 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x3c) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar7 + 0x14);
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar7 + 0x45) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  iVar6 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar7 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar7 + 2);
  iVar8 = (int)*(char *)(uVar7 + 0x7c);
  *(undefined1 *)(iVar8 + 0x3f) = uVar5;
  *(undefined1 *)(iVar8 + 0x40) = uVar5;
  uVar7 = (uint)*(ushort *)(iVar8 + 0x18);
  *(undefined1 *)(uVar7 + 0x3e) = uVar5;
  *(undefined4 *)(iVar6 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar7 + 0x42);
  iVar8 = *(int *)(uVar7 + 0xf8);
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(int *)(iVar6 + 0x23b8) = iVar8;
  iVar8 = iVar8 - unaff_r24;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  iVar8 = *(int *)(iVar8 + 0xf8);
  *(int *)(iVar6 + 0x23ad) = iVar8;
  iVar8 = iVar8 + sVar2;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar7 = (uint)uRam000023d6;
  *(undefined1 *)(uVar7 + 0x3d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2f) = uVar5;
  *(undefined2 *)(uVar7 + 0xe8) = *(undefined2 *)(uVar7 + 0x50);
  *(undefined2 *)(uVar7 + 0xa4) = *(undefined2 *)(uVar7 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003de0c @ 0003de0c (size 176) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003de0c(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  uint in_r1;
  ushort unaff_gp;
  uint in_r16;
  undefined4 in_r18;
  short in_r19;
  uint unaff_r20;
  int unaff_r24;
  int unaff_r26;
  int iVar6;
  int unaff_ep;
  uint uVar7;
  int iVar8;
  undefined4 unaff_lp;
  
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  *(undefined1 *)(unaff_ep + 0x6c) = 0;
  uVar5 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x32) = uVar5;
  uVar3 = *(ushort *)(unaff_r26 + 0x18);
  _DAT_00004760 = unaff_lp;
  *(undefined1 *)(uVar3 + 0x43) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x44) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  cVar1 = *(char *)(param_3 + -0xf84);
  *(undefined1 *)(uVar7 + 0x36) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x38) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x39) = uVar5;
  *(undefined4 *)(cVar1 + 0x23c0) = unaff_lp;
  __saturate((((((((in_r16 / 0) / 0) / 0) / unaff_r20) / 0) / 0) / 0) / 2 -
             (in_r1 - (int)DAT_ffffe180));
  iVar6 = (int)*(char *)(uVar7 + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar6);
  __saturate(iVar6 + -0x23ac);
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  *(undefined1 *)(iVar6 + -0x2379) = uVar5;
  uVar7 = in_r1 | 0x23bb;
  __saturate(uVar7 - 0x23b6);
  *(undefined1 *)(uVar7 - 0x2374) = uVar5;
  __saturate(uVar7 - 0x23b7);
  *(undefined1 *)(uVar7 - 0x2372) = uVar5;
  __saturate(uVar7 - 0x23b8);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  __saturate(uVar7 - 0x23b9);
  *(undefined1 *)(uVar7 - 0x2375) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 - 0x23a1);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined4 *)(uVar7 + 0x40) = 0;
  *(undefined1 *)(uVar7 + 0x33) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x42) = uVar5;
  *(undefined1 *)(uVar7 + 0x2c) = uVar5;
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar3 + 0x45) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar7 + 0x3a) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x37) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x3c) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  sVar2 = *(short *)(uVar7 + 0x14);
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 0x34) = uVar5;
  uVar4 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar4 + 0x34) = uVar5;
  uVar7 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar7 + 0x45) = uVar5;
  *(undefined1 *)(uVar7 + 0x6c) = 0;
  iVar6 = (int)*(char *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined1 *)(uVar7 + 0x40) = uVar5;
  sVar2 = *(short *)(uVar7 + 2);
  iVar8 = (int)*(char *)(uVar7 + 0x7c);
  *(undefined1 *)(iVar8 + 0x3f) = uVar5;
  *(undefined1 *)(iVar8 + 0x40) = uVar5;
  uVar7 = (uint)*(ushort *)(iVar8 + 0x18);
  *(undefined1 *)(uVar7 + 0x3e) = uVar5;
  *(undefined4 *)(iVar6 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar2 + 0x23ac) = (char)in_r18;
  sVar2 = *(short *)(uVar7 + 0x42);
  iVar8 = *(int *)(uVar7 + 0xf8);
  *(undefined4 *)(iVar8 + 0x4c) = 0;
  *(int *)(iVar6 + 0x23b8) = iVar8;
  iVar8 = iVar8 - unaff_r24;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  iVar8 = *(int *)(iVar8 + 0xf8);
  *(int *)(iVar6 + 0x23ad) = iVar8;
  iVar8 = iVar8 + sVar2;
  __saturate(iVar8);
  *(undefined1 *)(iVar8 + 0x39) = uVar5;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar7 = (uint)uRam000023d6;
  *(undefined1 *)(uVar7 + 0x3d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2d) = uVar5;
  *(undefined1 *)(uVar7 + 0x2f) = uVar5;
  *(undefined2 *)(uVar7 + 0xe8) = *(undefined2 *)(uVar7 + 0x50);
  *(undefined2 *)(uVar7 + 0xa4) = *(undefined2 *)(uVar7 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003debc @ 0003debc (size 150) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003debc(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint in_r1;
  ushort unaff_gp;
  int in_r16;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lp;
  
  iVar5 = in_r16 - DAT_ffffe700;
  __saturate(iVar5);
  __saturate(iVar5 + -0x23ac);
  uVar4 = (undefined1)unaff_gp;
  *(undefined1 *)(iVar5 + -0x2379) = uVar4;
  *(undefined1 *)(iVar5 + -0x2379) = uVar4;
  uVar6 = in_r1 | 0x23bb;
  __saturate(uVar6 - 0x23b6);
  *(undefined1 *)(uVar6 - 0x2374) = uVar4;
  __saturate(uVar6 - 0x23b7);
  *(undefined1 *)(uVar6 - 0x2372) = uVar4;
  __saturate(uVar6 - 0x23b8);
  *(undefined1 *)(uVar6 - 0x2375) = uVar4;
  __saturate(uVar6 - 0x23b9);
  *(undefined1 *)(uVar6 - 0x2375) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 - 0x23a1);
  *(undefined1 *)(uVar6 + 0x3a) = uVar4;
  *(undefined1 *)(uVar6 + 0x33) = uVar4;
  *(undefined1 *)(uVar6 + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined4 *)(uVar6 + 0x40) = 0;
  *(undefined1 *)(uVar6 + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x42) = uVar4;
  *(undefined1 *)(uVar6 + 0x2c) = uVar4;
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  sVar1 = *(short *)(uVar6 + 0x14);
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar4;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar5 = (int)*(char *)(sVar1 + -0x7d85);
  __saturate(uVar2 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar4;
  sVar1 = *(short *)(uVar6 + 2);
  iVar7 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar7 + 0x3f) = uVar4;
  *(undefined1 *)(iVar7 + 0x40) = uVar4;
  uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar4;
  *(undefined4 *)(iVar5 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar1 + 0x23ac) = (char)in_r18;
  sVar1 = *(short *)(uVar6 + 0x42);
  iVar7 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(int *)(iVar5 + 0x23b8) = iVar7;
  iVar7 = iVar7 - unaff_r24;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  iVar7 = *(int *)(iVar7 + 0xf8);
  *(int *)(iVar5 + 0x23ad) = iVar7;
  iVar7 = iVar7 + sVar1;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2f) = uVar4;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003df62 @ 0003df62 (size 38) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003df62(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort unaff_gp;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int iVar5;
  int unaff_ep;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lp;
  
  uVar4 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x33) = uVar4;
  *(undefined1 *)(unaff_ep + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar6 + 0x40) = 0;
  *(undefined1 *)(uVar6 + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x42) = uVar4;
  *(undefined1 *)(uVar6 + 0x2c) = uVar4;
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  sVar1 = *(short *)(uVar6 + 0x14);
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar4;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar5 = (int)*(char *)(sVar1 + -0x7d85);
  __saturate(uVar2 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar4;
  sVar1 = *(short *)(uVar6 + 2);
  iVar7 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar7 + 0x3f) = uVar4;
  *(undefined1 *)(iVar7 + 0x40) = uVar4;
  uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar4;
  *(undefined4 *)(iVar5 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar1 + 0x23ac) = (char)in_r18;
  sVar1 = *(short *)(uVar6 + 0x42);
  iVar7 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(int *)(iVar5 + 0x23b8) = iVar7;
  iVar7 = iVar7 - unaff_r24;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  iVar7 = *(int *)(iVar7 + 0xf8);
  *(int *)(iVar5 + 0x23ad) = iVar7;
  iVar7 = iVar7 + sVar1;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2f) = uVar4;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003df88 @ 0003df88 (size 52) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003df88(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort unaff_gp;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int iVar5;
  int unaff_ep;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lp;
  
  uVar4 = (undefined1)unaff_gp;
  *(undefined1 *)(unaff_ep + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar6 + 0x40) = 0;
  *(undefined1 *)(uVar6 + 0x33) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x42) = uVar4;
  *(undefined1 *)(uVar6 + 0x2c) = uVar4;
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar2 + 0x45) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  sVar1 = *(short *)(uVar6 + 0x14);
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar4;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar5 = (int)*(char *)(sVar1 + -0x7d85);
  __saturate(uVar2 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar4;
  sVar1 = *(short *)(uVar6 + 2);
  iVar7 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar7 + 0x3f) = uVar4;
  *(undefined1 *)(iVar7 + 0x40) = uVar4;
  uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar4;
  *(undefined4 *)(iVar5 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar1 + 0x23ac) = (char)in_r18;
  sVar1 = *(short *)(uVar6 + 0x42);
  iVar7 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(int *)(iVar5 + 0x23b8) = iVar7;
  iVar7 = iVar7 - unaff_r24;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  iVar7 = *(int *)(iVar7 + 0xf8);
  *(int *)(iVar5 + 0x23ad) = iVar7;
  iVar7 = iVar7 + sVar1;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2f) = uVar4;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003dfbc @ 0003dfbc (size 144) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003dfbc(void)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 uVar4;
  ushort unaff_gp;
  undefined4 in_r18;
  short in_r19;
  int unaff_r24;
  int iVar5;
  int unaff_ep;
  uint uVar6;
  int iVar7;
  undefined4 unaff_lp;
  
  uVar2 = *(ushort *)(unaff_ep + 0x18);
  uVar4 = (undefined1)unaff_gp;
  *(undefined1 *)(uVar2 + 0x45) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar2 + 0x18);
  *(undefined1 *)(uVar6 + 0x3a) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x37) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x3c) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  sVar1 = *(short *)(uVar6 + 0x14);
  uVar2 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar6 + 0x34) = uVar4;
  uVar3 = *(ushort *)(uVar6 + 0x18);
  *(undefined1 *)(uVar3 + 0x34) = uVar4;
  uVar6 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined1 *)(uVar6 + 0x45) = uVar4;
  *(undefined1 *)(uVar6 + 0x6c) = 0;
  iVar5 = (int)*(char *)(sVar1 + -0x7d85);
  __saturate(uVar2 + 0xb);
  *(undefined1 *)(uVar6 + 0x40) = uVar4;
  sVar1 = *(short *)(uVar6 + 2);
  iVar7 = (int)*(char *)(uVar6 + 0x7c);
  *(undefined1 *)(iVar7 + 0x3f) = uVar4;
  *(undefined1 *)(iVar7 + 0x40) = uVar4;
  uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined1 *)(uVar6 + 0x3e) = uVar4;
  *(undefined4 *)(iVar5 + 0x23ba) = unaff_lp;
  __saturate(6);
  *(char *)(sVar1 + 0x23ac) = (char)in_r18;
  sVar1 = *(short *)(uVar6 + 0x42);
  iVar7 = *(int *)(uVar6 + 0xf8);
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(int *)(iVar5 + 0x23b8) = iVar7;
  iVar7 = iVar7 - unaff_r24;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  iVar7 = *(int *)(iVar7 + 0xf8);
  *(int *)(iVar5 + 0x23ad) = iVar7;
  iVar7 = iVar7 + sVar1;
  __saturate(iVar7);
  *(undefined1 *)(iVar7 + 0x39) = uVar4;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r18 >> 0x1f);
  uVar6 = (uint)uRam000023d6;
  *(undefined1 *)(uVar6 + 0x3d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2d) = uVar4;
  *(undefined1 *)(uVar6 + 0x2f) = uVar4;
  *(undefined2 *)(uVar6 + 0xe8) = *(undefined2 *)(uVar6 + 0x50);
  *(undefined2 *)(uVar6 + 0xa4) = *(undefined2 *)(uVar6 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e04c @ 0003e04c (size 194) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e04c(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  ushort unaff_gp;
  undefined4 in_r16;
  short in_r19;
  int unaff_r20;
  int unaff_r24;
  int unaff_r28;
  int unaff_ep;
  uint uVar3;
  int iVar4;
  undefined4 unaff_lp;
  
  uVar3 = (uint)*(ushort *)(unaff_ep + 0x18);
  uVar2 = (undefined1)unaff_gp;
  *(undefined1 *)(uVar3 + 0x3e) = uVar2;
  *(undefined4 *)(unaff_r28 + 0x23ba) = unaff_lp;
  __saturate(unaff_r20 + 4);
  *(char *)(param_3 + 0x23ac) = (char)in_r16;
  sVar1 = *(short *)(uVar3 + 0x42);
  iVar4 = *(int *)(uVar3 + 0xf8);
  *(undefined4 *)(iVar4 + 0x4c) = 0;
  *(int *)(unaff_r28 + 0x23b8) = iVar4;
  iVar4 = iVar4 - unaff_r24;
  __saturate(iVar4);
  *(undefined1 *)(iVar4 + 0x39) = uVar2;
  iVar4 = *(int *)(iVar4 + 0xf8);
  *(int *)(unaff_r28 + 0x23ad) = iVar4;
  iVar4 = iVar4 + sVar1;
  __saturate(iVar4);
  *(undefined1 *)(iVar4 + 0x39) = uVar2;
  *(char *)((int)(short)(unaff_gp & 0x23bf) * (int)in_r19 + 0x23ac) = (char)((int)in_r16 >> 0x1f);
  uVar3 = (uint)uRam000023d6;
  *(undefined1 *)(uVar3 + 0x3d) = uVar2;
  *(undefined1 *)(uVar3 + 0x2d) = uVar2;
  *(undefined1 *)(uVar3 + 0x2f) = uVar2;
  *(undefined2 *)(uVar3 + 0xe8) = *(undefined2 *)(uVar3 + 0x50);
  *(undefined2 *)(uVar3 + 0xa4) = *(undefined2 *)(uVar3 + 4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e3c6 @ 0003e3c6 (size 102) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e3c6(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int in_r1;
  int unaff_tp;
  int in_r15;
  int in_r16;
  uint uVar11;
  int iVar12;
  uint in_r18;
  undefined1 unaff_r24;
  uint unaff_r27;
  int unaff_r29;
  int iVar13;
  int unaff_lp;
  
  __saturate(0);
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  uVar11 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar11;
  iVar12 = uVar11 + 2;
  __saturate(iVar12);
  uVar10 = (undefined1)iVar12;
  *(undefined1 *)(unaff_tp + 0x60) = uVar10;
  *(int *)((unaff_r29 >> 0xd) + 0x74) = unaff_lp << 0xe;
  iVar13 = (int)*(char *)((unaff_r29 >> 0xd) + 0x3b);
  __saturate(iVar13 + -5);
  *(char *)(iVar13 + 0x1b) = (char)param_3;
  uVar11 = (uint)*(ushort *)(*(char *)(iVar13 + 0x3d) + 0x18);
  uVar3 = *(undefined2 *)(uVar11 + 0x7c);
  *(undefined1 *)(in_r1 + -0x8000) = uVar10;
  __saturate(param_3 - in_r15);
  iVar13 = (int)*(char *)(uVar11 + 1);
  DAT_ffff8000 = uVar10;
  *(char *)(iVar13 + 0x20) = (char)uVar3;
  sVar4 = *(short *)(iVar13 + 0x7c);
  uVar9 = (undefined1)sVar4;
  DAT_00007fff = uVar10;
  *(undefined1 *)(iVar13 + 0x20) = uVar9;
  uVar11 = (uint)*(ushort *)(*(char *)(iVar13 + 0x42) + 0x18);
  *(undefined1 *)(uVar11 + 0x20) = uVar9;
  iVar13 = (int)*(char *)(*(char *)(uVar11 + 0x16) + 1);
  *(undefined1 *)(iVar13 + 0x20) = uVar9;
  uVar11 = (uint)*(ushort *)(*(char *)(iVar13 + 0x42) + 0x18);
  *(undefined1 *)(uVar11 + 0x20) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar11 + 0x24) = uVar9;
  sVar5 = *(short *)(uVar11 + 0x28);
  *(undefined1 *)(uVar11 + 0x24) = uVar9;
  uVar8 = *(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar8 + 0x24) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar11 + 0x28) = uVar9;
  iVar13 = (int)*(char *)(uVar11 + 1);
  *(undefined1 *)(iVar13 + 0x20) = uVar9;
  *(undefined1 *)(sVar5 + 0x23a0) = uVar10;
  iVar13 = (int)*(char *)(iVar13 + 1);
  *(undefined1 *)(iVar13 + 0x20) = uVar9;
  uVar11 = (uint)*(ushort *)(*(char *)(iVar13 + 0x42) + 0x18);
  *(undefined1 *)(uVar11 + 0x20) = uVar9;
  __saturate(0xb);
  *(undefined1 *)(sVar5 + 0x23a0) = uVar10;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar11 + 0x24) = uVar9;
  sVar5 = *(short *)(uVar11 + 0x28);
  *(undefined1 *)(uVar11 + 0x24) = uVar9;
  uVar8 = *(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar8 + 0x24) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar11 + 0x29) = uVar9;
  iVar13 = (int)*(char *)(*(char *)(uVar11 + 0x16) + 1);
  cVar1 = *(char *)(sVar5 + -0xf84);
  *(undefined1 *)(iVar13 + 0x21) = uVar9;
  uVar11 = (uint)*(ushort *)(iVar13 + 0x18);
  *(undefined1 *)(uVar11 + 0x26) = uVar9;
  __saturate(iVar12 + (in_r1 - cVar1));
  bVar2 = *(byte *)(uVar11 + 0x5d);
  iVar12 = (int)DAT_ffffe700;
  *(byte *)(sVar5 + 0x4740) = bVar2;
  __saturate((char)bVar2 - iVar12);
  iVar12 = sVar4 * 10;
  *(char *)(iVar12 + 0x6c) = (char)sVar5;
  bVar2 = bVar2 & (byte)unaff_r29;
  *(undefined1 *)(iVar12 + 0x21) = uVar9;
  *(undefined1 *)(iVar12 + 0x22) = uVar9;
  __saturate(2);
  __saturate(0xfffffffd);
  uVar8 = Ram00000015;
  uVar11 = (uint)uVar8;
  DAT_00000026 = uVar9;
  DAT_0000002a = uVar9;
  *(undefined1 *)(uVar11 + 0x27) = uVar9;
  *(undefined1 *)(uVar11 + 0x22) = uVar9;
  *(undefined1 *)(uVar11 + 0x22) = uVar9;
  uVar8 = *(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar8 + 0x22) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar11 + 0x28) = uVar9;
  *(undefined1 *)(uVar11 + 0x20) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar11 + 0x23) = uVar9;
  uVar3 = *(undefined2 *)(uVar11 + 0x28);
  *(undefined1 *)(uVar11 + 0x23) = uVar9;
  uVar8 = *(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar8 + 0x29) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar11 + 0x27) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar11 + 0x26) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined4 *)(uVar11 + 0x50) = 0;
  *(undefined1 *)(uVar11 + 0x23) = uVar9;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(undefined1 *)(uVar11 + 0x29) = uVar9;
  uVar6 = *(undefined2 *)(uVar11 + 2);
  *(short *)(uVar11 + 0x98) = (short)&stack0x00000000;
  *(undefined2 *)(uVar11 + 4) = uVar6;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  uVar7 = *(undefined2 *)(uVar11 + 0x7c);
  *(byte *)(param_2 + -0x8000) = bVar2;
  *(undefined1 *)(uVar11 + 8) = unaff_r24;
  *(byte *)(in_r1 + -0x8000) = bVar2;
  *(char *)(uVar11 + 0x2b) = (char)uVar7;
  *(undefined2 *)(uVar11 + 0x28) = uVar6;
  *(undefined2 *)(uVar11 + 0x80) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e42c @ 0003e42c (size 101) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e42c(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  int in_r1;
  undefined1 unaff_gp;
  int in_r16;
  undefined1 unaff_r24;
  byte unaff_r29;
  int unaff_ep;
  int iVar11;
  uint uVar12;
  
  iVar11 = (int)*(char *)(unaff_ep + 1);
  *(undefined1 *)(iVar11 + 0x20) = unaff_gp;
  uVar10 = (undefined1)in_r16;
  sVar3 = *(short *)(iVar11 + 0x7c);
  uVar9 = (undefined1)sVar3;
  DAT_00007fff = uVar10;
  *(undefined1 *)(iVar11 + 0x20) = uVar9;
  uVar12 = (uint)*(ushort *)(*(char *)(iVar11 + 0x42) + 0x18);
  *(undefined1 *)(uVar12 + 0x20) = uVar9;
  iVar11 = (int)*(char *)(*(char *)(uVar12 + 0x16) + 1);
  *(undefined1 *)(iVar11 + 0x20) = uVar9;
  uVar12 = (uint)*(ushort *)(*(char *)(iVar11 + 0x42) + 0x18);
  *(undefined1 *)(uVar12 + 0x20) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar12 + 0x24) = uVar9;
  sVar4 = *(short *)(uVar12 + 0x28);
  *(undefined1 *)(uVar12 + 0x24) = uVar9;
  uVar8 = *(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar8 + 0x24) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar12 + 0x28) = uVar9;
  iVar11 = (int)*(char *)(uVar12 + 1);
  *(undefined1 *)(iVar11 + 0x20) = uVar9;
  *(undefined1 *)(sVar4 + 0x23a0) = uVar10;
  iVar11 = (int)*(char *)(iVar11 + 1);
  *(undefined1 *)(iVar11 + 0x20) = uVar9;
  uVar12 = (uint)*(ushort *)(*(char *)(iVar11 + 0x42) + 0x18);
  *(undefined1 *)(uVar12 + 0x20) = uVar9;
  __saturate(0xb);
  *(undefined1 *)(sVar4 + 0x23a0) = uVar10;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar12 + 0x24) = uVar9;
  sVar4 = *(short *)(uVar12 + 0x28);
  *(undefined1 *)(uVar12 + 0x24) = uVar9;
  uVar8 = *(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar8 + 0x24) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar12 + 0x29) = uVar9;
  iVar11 = (int)*(char *)(*(char *)(uVar12 + 0x16) + 1);
  cVar1 = *(char *)(sVar4 + -0xf84);
  *(undefined1 *)(iVar11 + 0x21) = uVar9;
  uVar12 = (uint)*(ushort *)(iVar11 + 0x18);
  *(undefined1 *)(uVar12 + 0x26) = uVar9;
  __saturate(in_r16 + (in_r1 - cVar1));
  bVar2 = *(byte *)(uVar12 + 0x5d);
  iVar11 = (int)DAT_ffffe700;
  *(byte *)(sVar4 + 0x4740) = bVar2;
  __saturate((char)bVar2 - iVar11);
  iVar11 = sVar3 * 10;
  *(char *)(iVar11 + 0x6c) = (char)sVar4;
  *(undefined1 *)(iVar11 + 0x21) = uVar9;
  *(undefined1 *)(iVar11 + 0x22) = uVar9;
  __saturate(2);
  __saturate(0xfffffffd);
  uVar8 = Ram00000015;
  uVar12 = (uint)uVar8;
  DAT_00000026 = uVar9;
  DAT_0000002a = uVar9;
  *(undefined1 *)(uVar12 + 0x27) = uVar9;
  *(undefined1 *)(uVar12 + 0x22) = uVar9;
  *(undefined1 *)(uVar12 + 0x22) = uVar9;
  uVar8 = *(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar8 + 0x22) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar12 + 0x28) = uVar9;
  *(undefined1 *)(uVar12 + 0x20) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar12 + 0x23) = uVar9;
  uVar5 = *(undefined2 *)(uVar12 + 0x28);
  *(undefined1 *)(uVar12 + 0x23) = uVar9;
  uVar8 = *(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar8 + 0x29) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar8 + 0x18);
  *(undefined1 *)(uVar12 + 0x27) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar12 + 0x26) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined4 *)(uVar12 + 0x50) = 0;
  *(undefined1 *)(uVar12 + 0x23) = uVar9;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  *(undefined1 *)(uVar12 + 0x29) = uVar9;
  uVar6 = *(undefined2 *)(uVar12 + 2);
  *(short *)(uVar12 + 0x98) = (short)&stack0x00000000;
  *(undefined2 *)(uVar12 + 4) = uVar6;
  uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
  uVar7 = *(undefined2 *)(uVar12 + 0x7c);
  *(byte *)(param_2 + -0x8000) = bVar2 & unaff_r29;
  *(undefined1 *)(uVar12 + 8) = unaff_r24;
  *(byte *)(in_r1 + -0x8000) = bVar2 & unaff_r29;
  *(char *)(uVar12 + 0x2b) = (char)uVar7;
  *(undefined2 *)(uVar12 + 0x28) = uVar6;
  *(undefined2 *)(uVar12 + 0x80) = uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e492 @ 0003e492 (size 102) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e492(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined1 uVar8;
  int in_r1;
  int unaff_gp;
  undefined1 in_r15;
  int in_r16;
  byte unaff_r29;
  int unaff_ep;
  uint uVar9;
  int iVar10;
  
  uVar9 = (uint)*(ushort *)(unaff_ep + 0x18);
  uVar8 = (undefined1)unaff_gp;
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  sVar3 = *(short *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x24) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x28) = uVar8;
  iVar10 = (int)*(char *)(uVar9 + 1);
  *(undefined1 *)(iVar10 + 0x20) = uVar8;
  *(char *)(sVar3 + 0x23a0) = (char)in_r16;
  iVar10 = (int)*(char *)(iVar10 + 1);
  *(undefined1 *)(iVar10 + 0x20) = uVar8;
  uVar9 = (uint)*(ushort *)(*(char *)(iVar10 + 0x42) + 0x18);
  *(undefined1 *)(uVar9 + 0x20) = uVar8;
  __saturate(0xb);
  *(char *)(sVar3 + 0x23a0) = (char)in_r16;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  sVar3 = *(short *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x24) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x29) = uVar8;
  iVar10 = (int)*(char *)(*(char *)(uVar9 + 0x16) + 1);
  cVar1 = *(char *)(sVar3 + -0xf84);
  *(undefined1 *)(iVar10 + 0x21) = uVar8;
  uVar9 = (uint)*(ushort *)(iVar10 + 0x18);
  *(undefined1 *)(uVar9 + 0x26) = uVar8;
  __saturate(in_r16 + (in_r1 - cVar1));
  bVar2 = *(byte *)(uVar9 + 0x5d);
  iVar10 = (int)DAT_ffffe700;
  *(byte *)(sVar3 + 0x4740) = bVar2;
  __saturate((char)bVar2 - iVar10);
  iVar10 = unaff_gp * 10;
  *(char *)(iVar10 + 0x6c) = (char)sVar3;
  *(undefined1 *)(iVar10 + 0x21) = uVar8;
  *(undefined1 *)(iVar10 + 0x22) = uVar8;
  __saturate(2);
  __saturate(0xfffffffd);
  uVar7 = Ram00000015;
  uVar9 = (uint)uVar7;
  DAT_00000026 = uVar8;
  DAT_0000002a = uVar8;
  *(undefined1 *)(uVar9 + 0x27) = uVar8;
  *(undefined1 *)(uVar9 + 0x22) = uVar8;
  *(undefined1 *)(uVar9 + 0x22) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x22) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x28) = uVar8;
  *(undefined1 *)(uVar9 + 0x20) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar4 = *(undefined2 *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x29) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x27) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x26) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined4 *)(uVar9 + 0x50) = 0;
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x29) = uVar8;
  uVar5 = *(undefined2 *)(uVar9 + 2);
  *(short *)(uVar9 + 0x98) = (short)&stack0x00000000;
  *(undefined2 *)(uVar9 + 4) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  uVar6 = *(undefined2 *)(uVar9 + 0x7c);
  *(byte *)(param_2 + -0x8000) = bVar2 & unaff_r29;
  *(undefined1 *)(uVar9 + 8) = in_r15;
  *(byte *)(in_r1 + -0x8000) = bVar2 & unaff_r29;
  *(char *)(uVar9 + 0x2b) = (char)uVar6;
  *(undefined2 *)(uVar9 + 0x28) = uVar5;
  *(undefined2 *)(uVar9 + 0x80) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e4f8 @ 0003e4f8 (size 438) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003e4f8(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  undefined1 uVar8;
  int in_r1;
  int unaff_gp;
  undefined1 in_r15;
  int in_r16;
  int unaff_r20;
  byte unaff_r29;
  int unaff_ep;
  uint uVar9;
  int iVar10;
  
  cVar1 = *(char *)(unaff_ep + 1);
  uVar8 = (undefined1)unaff_gp;
  *(undefined1 *)(cVar1 + 0x20) = uVar8;
  uVar9 = (uint)*(ushort *)(*(char *)(cVar1 + 0x42) + 0x18);
  *(undefined1 *)(uVar9 + 0x20) = uVar8;
  __saturate(unaff_r20 + 4);
  *(char *)(param_3 + 0x23a0) = (char)in_r16;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  sVar3 = *(short *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x24) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x24) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x29) = uVar8;
  iVar10 = (int)*(char *)(*(char *)(uVar9 + 0x16) + 1);
  cVar1 = *(char *)(sVar3 + -0xf84);
  *(undefined1 *)(iVar10 + 0x21) = uVar8;
  uVar9 = (uint)*(ushort *)(iVar10 + 0x18);
  *(undefined1 *)(uVar9 + 0x26) = uVar8;
  __saturate(in_r16 + (in_r1 - cVar1));
  bVar2 = *(byte *)(uVar9 + 0x5d);
  iVar10 = (int)DAT_ffffe700;
  *(byte *)(sVar3 + 0x4740) = bVar2;
  __saturate((char)bVar2 - iVar10);
  iVar10 = unaff_gp * 10;
  *(char *)(iVar10 + 0x6c) = (char)sVar3;
  *(undefined1 *)(iVar10 + 0x21) = uVar8;
  *(undefined1 *)(iVar10 + 0x22) = uVar8;
  __saturate(2);
  __saturate(0xfffffffd);
  uVar7 = Ram00000015;
  uVar9 = (uint)uVar7;
  DAT_00000026 = uVar8;
  DAT_0000002a = uVar8;
  *(undefined1 *)(uVar9 + 0x27) = uVar8;
  *(undefined1 *)(uVar9 + 0x22) = uVar8;
  *(undefined1 *)(uVar9 + 0x22) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x22) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x28) = uVar8;
  *(undefined1 *)(uVar9 + 0x20) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar4 = *(undefined2 *)(uVar9 + 0x28);
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar7 = *(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar7 + 0x29) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar9 + 0x27) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x26) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined4 *)(uVar9 + 0x50) = 0;
  *(undefined1 *)(uVar9 + 0x23) = uVar8;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  *(undefined1 *)(uVar9 + 0x29) = uVar8;
  uVar5 = *(undefined2 *)(uVar9 + 2);
  *(short *)(uVar9 + 0x98) = (short)&stack0x00000000;
  *(undefined2 *)(uVar9 + 4) = uVar5;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  uVar6 = *(undefined2 *)(uVar9 + 0x7c);
  *(byte *)(param_2 + -0x8000) = bVar2 & unaff_r29;
  *(undefined1 *)(uVar9 + 8) = in_r15;
  *(byte *)(in_r1 + -0x8000) = bVar2 & unaff_r29;
  *(char *)(uVar9 + 0x2b) = (char)uVar6;
  *(undefined2 *)(uVar9 + 0x28) = uVar5;
  *(undefined2 *)(uVar9 + 0x80) = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003e854 @ 0003e854 (size 62) ====

void FUN_0003e854(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_tp;
  int in_r13;
  int in_r16;
  uint uVar1;
  int iVar2;
  uint in_r18;
  uint unaff_r27;
  int iVar3;
  short unaff_lp;
  
  __saturate(0);
  iVar3 = (int)DAT_ffff8f50;
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  uVar1 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar1;
  iVar2 = uVar1 + 2;
  __saturate(iVar2);
  *(char *)(unaff_tp + 0xe5) = (char)iVar2;
  *(short *)(iVar3 + 0x2387) = unaff_lp << 0xe;
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
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_ep;
  
  __saturate(unaff_r26 + 0xb);
  *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
  *(undefined1 *)(in_r10 + -0x72c8) = in_r16;
  *(undefined1 *)(unaff_ep + 0x13) = unaff_gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003ecb8 @ 0003ecb8 (size 394) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0003ecb8(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  ushort uVar4;
  int in_r1;
  int unaff_tp;
  int in_r10;
  int in_r16;
  uint uVar5;
  int iVar6;
  uint in_r18;
  uint unaff_r27;
  int iVar7;
  byte unaff_r29;
  undefined1 *puVar8;
  
  iVar7 = (int)DAT_ffff8f50;
  *(char *)(param_3 + 0x5928) = (char)in_r16;
  __saturate(in_r16 + 2U);
  uVar5 = in_r16 + 2U & in_r18 & unaff_r27;
  *(char *)(param_3 + 0x5928) = (char)uVar5;
  iVar6 = uVar5 + 2;
  __saturate(iVar6);
  *(char *)(unaff_tp + 0xe4) = (char)iVar6;
  uVar5 = iVar7 - 0x22U | 0xfd3b;
  __saturate(uVar5 - 5);
  uVar2 = (undefined1)param_3;
  *(undefined1 *)(uVar5 + 0xf) = uVar2;
  uVar5 = (uint)*(ushort *)(((uint)&stack0x00000000 & 0xe708) + 0x18);
  *(undefined1 *)(uVar5 + 0x14) = uVar2;
  *(undefined1 *)(uVar5 + 0x14) = uVar2;
  uVar5 = (uint)*(ushort *)(((uint)&stack0x00000000 & 0xe708) + 0x18);
  *(undefined1 *)(uVar5 + 0xc) = uVar2;
  __saturate(iVar6 - (in_r1 - DAT_ffffe180));
  bVar1 = *(byte *)(uVar5 + 0x5d);
  iVar6 = (int)(char)bVar1 - (int)DAT_ffffe700;
  __saturate(iVar6);
  __saturate(iVar6 + -0x2393);
  uVar2 = *(undefined1 *)(iVar6 + -0x2345);
  bVar1 = bVar1 & unaff_r29;
  *(undefined1 *)(iVar6 + -0x2388) = uVar2;
  *(undefined1 *)(iVar6 + -0x2385) = uVar2;
  *(undefined1 *)(iVar6 + -0x2385) = uVar2;
  uVar5 = (uint)*(ushort *)(*(ushort *)(iVar6 + -0x237b) + 0x18);
  *(undefined1 *)(uVar5 + 0x10) = uVar2;
  *(undefined1 *)(uVar5 + 0x14) = uVar2;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0xf) = uVar2;
  *(undefined1 *)(uVar5 + 0xf) = uVar2;
  uVar5 = (uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
  *(undefined1 *)(uVar5 + 0x10) = uVar2;
  uVar5 = (uint)*(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0xe) = uVar2;
  sVar3 = *(short *)(uVar5 + 10);
  uVar4 = *(ushort *)(uVar5 + 0x18);
  *(undefined1 *)(uVar5 + 0xe) = uVar2;
  puVar8 = (undefined1 *)(uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
  puVar8[0x10] = uVar2;
  __saturate(uVar4 + 0xb);
  *(uint *)(puVar8 + 0x7c) = unaff_r27;
  iVar6 = (int)sVar3 - (int)&stack0x00000000;
  __saturate(iVar6);
  *puVar8 = (char)*(undefined2 *)(puVar8 + 0x14);
  iVar6 = (int)puVar8 - iVar6;
  __saturate(iVar6);
  puVar8[8] = uVar2;
  *(byte *)(iVar6 + 0x46fc) = bVar1;
  *(byte *)(in_r10 + -0x7328) = bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0003f0de @ 0003f0de (size 654) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f0de(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  byte bVar5;
  int in_r10;
  undefined4 unaff_r27;
  int iVar6;
  byte unaff_r29;
  int unaff_ep;
  uint uVar7;
  undefined1 *puVar8;
  
  iVar6 = (int)(char)*(byte *)(unaff_ep + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar6);
  __saturate(iVar6 + -0x2388);
  bVar5 = *(byte *)(unaff_ep + 0x5d) & unaff_r29;
  uVar1 = *(undefined1 *)(iVar6 + -0x230a);
  *(undefined1 *)(iVar6 + -0x2386) = uVar1;
  sVar2 = *(short *)(iVar6 + -0x237e);
  *(undefined1 *)(iVar6 + -0x2386) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(iVar6 + -0x2370) + 0x18);
  *(undefined1 *)(uVar7 + 4) = uVar1;
  *(undefined1 *)(uVar7 + 9) = uVar1;
  *(byte *)(sVar2 + 0x46fc) = bVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 2) = uVar1;
  *(undefined1 *)(uVar7 + 2) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(undefined1 *)(uVar7 + 4) = uVar1;
  *(undefined1 *)(uVar7 + 9) = uVar1;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 3) = uVar1;
  *(undefined1 *)(uVar7 + 3) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(undefined1 *)(uVar7 + 4) = uVar1;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 2) = uVar1;
  sVar2 = *(short *)(uVar7 + 10);
  *(undefined1 *)(uVar7 + 2) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(undefined1 *)(uVar7 + 4) = uVar1;
  *(undefined1 *)(uVar7 + 9) = uVar1;
  __saturate(6);
  *(byte *)(sVar2 + 0x46fc) = bVar5;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 3) = uVar1;
  *(undefined1 *)(uVar7 + 3) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(undefined1 *)(uVar7 + 5) = uVar1;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 2) = uVar1;
  *(undefined1 *)(uVar7 + 2) = uVar1;
  uVar7 = (uint)*(ushort *)(*(ushort *)(uVar7 + 0x18) + 0x18);
  *(undefined1 *)(uVar7 + 4) = uVar1;
  uVar7 = (uint)*(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 10) = uVar1;
  sVar2 = *(short *)(uVar7 + 0x28);
  uVar3 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar7 + 10) = uVar1;
  uVar4 = *(ushort *)(uVar7 + 0x18);
  *(undefined1 *)(uVar4 + 5) = uVar1;
  uVar7 = (uint)*(ushort *)(uVar4 + 0x18);
  *(undefined1 *)(uVar7 + 1) = uVar1;
  puVar8 = (undefined1 *)(uint)*(ushort *)(uVar7 + 0x18);
  *puVar8 = uVar1;
  puVar8 = (undefined1 *)(uint)*(ushort *)(*(ushort *)(puVar8 + 0x18) + 0x18);
  puVar8[5] = uVar1;
  uVar1 = *(undefined1 *)(sVar2 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(undefined4 *)(puVar8 + 0x7c) = unaff_r27;
  *(byte *)(in_r10 + -0x7310) = bVar5;
  *puVar8 = uVar1;
  iVar6 = sVar2 + param_1;
  __saturate(iVar6);
  *(byte *)(in_r10 + -0x7310) = bVar5;
  uVar3 = *(ushort *)(puVar8 + 0x18);
  uVar7 = (int)DAT_ffffe700 - 0x37;
  *(undefined2 *)(DAT_ffffe700 + 0x2407) = 0;
  uVar3 = *(ushort *)(uVar3 + 0x18);
  *(char *)(uVar3 + 1) = (char)uVar7;
  sVar2 = *(short *)(*(ushort *)(uVar3 + 0x18) + 2);
  *(undefined4 *)((uVar7 >> 1) + 0x237a) = 0;
                    /* WARNING: Could not recover jumptable at 0x0003f36a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(_DAT_47088bf4 * 2 + 0x3f36c))(param_1,param_2,iVar6,(int)sVar2);
  return;
}


// ==== FUN_0003f994 @ 0003f994 (size 24) ====

void FUN_0003f994(void)

{
  uint unaff_r20;
  int unaff_r28;
  uint unaff_ep;
  
  __saturate(-unaff_r28);
                    /* WARNING: Could not recover jumptable at 0x0003f9aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003f9ac +
            *(short *)(&DAT_0003f9ac +
                      ((int)*(char *)((unaff_ep | unaff_r20) + 0x11) & *(uint *)(unaff_ep + 0x28)) *
                      2) * 2))();
  return;
}


// ==== FUN_0003ff9a @ 0003ff9a (size 22) ====

void FUN_0003ff9a(void)

{
  int in_r17;
  int unaff_r20;
  
  __saturate(in_r17 + -0xe);
                    /* WARNING: Could not recover jumptable at 0x0003ffae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0003ffb0 + *(short *)(&DAT_0003ffb0 + unaff_r20 * 2) * 2))();
  return;
}


// ==== FUN_00040678 @ 00040678 (size 1370) ====

/* WARNING: Instruction at (ram,0x00040a68) overlaps instruction at (ram,0x00040a66)
    */
/* WARNING: Removing unreachable block (ram,0x000407f6) */
/* WARNING: Removing unreachable block (ram,0x000407b6) */
/* WARNING: Removing unreachable block (ram,0x000407f8) */
/* WARNING: Removing unreachable block (ram,0x000407cc) */
/* WARNING: Removing unreachable block (ram,0x000407e4) */
/* WARNING: Removing unreachable block (ram,0x00040884) */
/* WARNING: Removing unreachable block (ram,0x00040880) */
/* WARNING: Removing unreachable block (ram,0x0004066c) */
/* WARNING: Removing unreachable block (ram,0x00040910) */
/* WARNING: Removing unreachable block (ram,0x00040912) */
/* WARNING: Removing unreachable block (ram,0x00040a68) */

uint FUN_00040678(int param_1,uint param_2,uint param_3,short param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  short sVar10;
  byte bVar11;
  uint in_r1;
  uint in_r2;
  int iVar12;
  undefined1 *puVar15;
  uint unaff_gp;
  int unaff_tp;
  short sVar16;
  uint in_r10;
  int iVar17;
  uint in_r12;
  uint in_r13;
  uint in_r14;
  int in_r15;
  uint uVar18;
  uint in_r16;
  uint in_r17;
  uint in_r18;
  uint uVar19;
  uint unaff_r21;
  uint uVar20;
  uint unaff_r22;
  uint unaff_r24;
  uint unaff_r25;
  int unaff_r26;
  int iVar21;
  uint uVar22;
  undefined4 unaff_r27;
  int unaff_r28;
  int iVar23;
  int iVar24;
  uint unaff_r29;
  short *unaff_ep;
  short *psVar25;
  uint uVar26;
  uint unaff_lp;
  uint in_PSW;
  uint uVar27;
  int iVar13;
  int iVar14;
  
  *(short *)(unaff_r28 + 0x1cc8) = (short)unaff_lp;
  uVar18 = in_PSW & 0xfffffff8;
  while( true ) {
    unaff_ep[0x47] = (short)register0x0000000c;
    *(char *)(in_r1 - 1) = (char)in_r16;
    unaff_ep[0x40] = param_4;
    sVar9 = unaff_ep[3];
    unaff_ep[0x40] = param_4;
    __saturate(unaff_r24 + 0x58fd);
    *(char *)(in_r1 + 0x15e0) = (char)in_r16;
    unaff_r21 = unaff_r21 | in_r14 | param_3 | in_r2;
    unaff_ep[0x40] = (short)param_3;
    bVar5 = ((bool)((byte)(uVar18 >> 4) & 1) || -1 < (int)unaff_r24 && (int)(unaff_r24 + 0x58fd) < 0
            ) || -1 < (int)unaff_r24 && (int)(unaff_r24 + 0x7fef) < 0;
    register0x0000000c = (BADSPACEBASE *)(unaff_r24 + 0x7fef);
    iVar12 = unaff_r24 + 0x7fef;
    puVar15 = (undefined1 *)(unaff_r24 + 0x7fef);
    iVar13 = unaff_r24 + 0x7fef;
    iVar14 = unaff_r24 + 0x7fef;
    __saturate(unaff_r24 + 0x7fef);
    bVar6 = (byte)(unaff_r22 >> 0x18);
    if (unaff_r24 == 0xffff8011) break;
    iVar17 = unaff_r26 - unaff_r22;
    uVar18 = (uint)unaff_r26 >> 0x1f;
    unaff_r26 = unaff_r26 - unaff_r22;
    __saturate(unaff_r26);
    *(undefined4 *)(unaff_ep + 0x3e) = unaff_r27;
    in_r16 = in_r16 ^ unaff_r25;
    bVar1 = CARRY4((int)sVar9,unaff_r24);
    unaff_r24 = unaff_r24 + (int)sVar9;
    if (bVar5 || (byte)uVar18 != bVar6 >> 7 && bVar6 >> 7 == (byte)((uint)iVar17 >> 0x1f))
    goto code_r0x00040664;
    uVar27 = 0;
    uVar18 = 0;
    if (!bVar1) {
LAB_000406c0:
      *(uint *)(unaff_ep + 0x3a) = unaff_lp;
LAB_000406c6:
      iVar17 = (int)(char)unaff_ep[0x29];
      do {
        *(char *)((int)unaff_ep + 0x17) = (char)iVar17;
        iVar17 = (char)(&DAT_ffffe256)[param_3] + -10;
        while( true ) {
          *(uint *)(iVar17 + 0x21f2) = unaff_lp;
          *(char *)(in_r1 - 1) = (char)in_r16;
          iVar17 = (int)unaff_ep[0x28];
          in_r16 = in_r17;
          if (unaff_gp == (int)(char)unaff_ep[1]) goto LAB_000406c6;
          bVar5 = SUB41(uVar27 >> 4,0) ||
                  (byte)((uint)unaff_r26 >> 0x1f) != bVar6 >> 7 &&
                  bVar6 >> 7 == (byte)(unaff_r26 - unaff_r22 >> 0x1f);
          uVar27 = (uint)bVar5 << 4;
          unaff_r26 = unaff_r26 - unaff_r22;
          __saturate(unaff_r26);
          bVar7 = *(byte *)(param_3 - 0x7d85);
          *(undefined4 *)(unaff_ep + 0x3e) = unaff_r27;
          in_r16 = in_r17 ^ unaff_r25;
          if (bVar5) goto LAB_000406c0;
          if (10 < bVar7) break;
          *(uint *)(unaff_ep + 0x3a) = unaff_lp;
          cVar8 = *(char *)(param_3 - 0x1be5);
          bVar11 = (byte)(in_r1 >> 0x18);
          bVar7 = (byte)(cVar8 >> 7) >> 7;
          __saturate(in_r1 - (int)cVar8);
          iVar17 = unaff_r26 - unaff_r22;
          uVar18 = (uint)unaff_r26 >> 0x1f;
          iVar21 = unaff_r26 - unaff_r22;
          __saturate(iVar21);
          unaff_r21 = unaff_r21 | in_r10;
          in_r17 = *(uint *)(unaff_ep + 0x48);
          bVar2 = bVar11 >> 7;
          unaff_r26 = iVar21 - in_r1;
          __saturate(unaff_r26);
          bVar3 = (byte)(in_r14 >> 0x1f);
          bVar5 = ((bVar11 >> 7 != bVar7 && bVar7 == (byte)(in_r1 - (int)cVar8 >> 0x1f) ||
                   (byte)uVar18 != bVar6 >> 7 && bVar6 >> 7 == (byte)((uint)iVar17 >> 0x1f)) ||
                  (byte)((uint)iVar21 >> 0x1f) != bVar2 && bVar2 == (byte)(iVar21 - in_r1 >> 0x1f))
                  || (byte)((uint)iVar14 >> 0x1f) != bVar3 &&
                     bVar3 == (byte)(iVar13 - in_r14 >> 0x1f);
          in_r14 = iVar12 - in_r14;
          __saturate(in_r14);
          unaff_ep[0x18] = param_4;
          do {
            uVar18 = in_r18 & 0xe708;
            bVar5 = bVar5 || SCARRY4(unaff_r26,0xb);
            __saturate(unaff_r26 + 0xb);
            unaff_r26 = (int)*(char *)((int)unaff_ep + 0x3f);
            unaff_r21 = unaff_r21 | in_r13 | (int)(char)unaff_ep[0x1b];
            in_r13 = 0xa2075e81;
          } while (9 < (uint)(int)DAT_ffffe700 >> 1);
          in_r16 = *(uint *)(unaff_ep + 0x12);
          iVar17 = (int)*(char *)((int)unaff_ep + 0x3b);
          uVar27 = (uint)(bVar5 || SCARRY4(iVar17,-5)) << 4;
          __saturate(iVar17 + -5);
          unaff_ep = (short *)(int)*(char *)(iVar17 + 0x50);
          if (iVar17 != 5) {
            uVar20 = unaff_r21 | in_r2;
            *(undefined4 *)(unaff_r29 + 0x1ffe) = unaff_r27;
            uVar19 = 0xb;
            iVar17 = (int)unaff_ep[0x18];
            do {
              DAT_fffffff0 = (undefined1)in_r16;
              *(undefined1 *)(in_r1 - 0x10) = DAT_fffffff0;
              bVar7 = (byte)(uVar18 >> 0x1f);
              __saturate(param_3 - uVar18);
              bVar2 = (byte)((uint)iVar17 >> 0x1f);
              uVar27 = (uint)((SUB41(uVar27 >> 4,0) ||
                              (byte)(param_3 >> 0x1f) != bVar7 &&
                              bVar7 == (byte)(param_3 - uVar18 >> 0x1f)) ||
                             (byte)(in_r10 >> 0x1f) != bVar2 &&
                             bVar2 == (byte)(in_r10 - iVar17 >> 0x1f)) << 4;
              __saturate(in_r10 - iVar17);
              uVar20 = uVar20 | param_3;
              psVar25 = (short *)((int)*(char *)(uVar19 + 0x54) | uVar19);
              bVar5 = -1 < (int)unaff_gp && (int)(unaff_gp + 0x7ae2a17f) < 0;
              bVar1 = (int)(unaff_gp + 0x7ae2a17f) < 0;
              bVar4 = unaff_gp == 0x851d5e81;
              uVar18 = unaff_r24;
              uVar22 = uVar19;
              while( true ) {
                unaff_gp = (uint)psVar25[0x7a];
                iVar17 = (int)*(char *)(param_3 - 0xf84);
                if (bVar5) goto LAB_000408da;
                uVar27 = (uint)(uVar22 < unaff_r22) << 3 |
                         (uint)(SUB41(uVar27 >> 4,0) ||
                               (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                               bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f)) << 4;
                uVar22 = uVar22 - unaff_r22;
                __saturate(uVar22);
                if (((byte)(uVar27 >> 3) & 1) == 1) break;
                iVar17 = (int)*(char *)(param_3 - 0x24a);
code_r0x0004089c:
                do {
                  in_r10 = in_r1 ^ 0xe080;
                  iVar17 = iVar17 + -0xb;
                  bVar7 = (byte)((uint)iVar17 >> 0x1f);
                  uVar27 = (uint)(SUB41(uVar27 >> 4,0) ||
                                 (byte)(in_r1 >> 0x1f) != bVar7 &&
                                 bVar7 == (byte)(in_r1 - iVar17 >> 0x1f)) << 4;
                  __saturate(in_r1 - iVar17);
                  in_r16 = *(uint *)(psVar25 + 0x10);
                  unaff_lp = (int)(short)unaff_lp * (int)(short)param_1;
                  uVar19 = 5;
                  unaff_r29 = 0xffffe255;
                  unaff_r24 = 0;
                  uVar20 = (int)psVar25[3] | in_r1;
                  while( true ) {
                    iVar17 = (int)*(char *)(param_3 - 0x1bf0);
                    param_3 = (uint)psVar25[0x47];
                    psVar25[3] = (short)in_r2;
                    bVar1 = (int)(in_r16 | unaff_r22) < 0;
                    bVar5 = false;
                    uVar27 = uVar27 & 0xfffffff8;
                    bVar4 = (in_r16 | unaff_r22) == 0;
                    in_r16 = in_r17;
LAB_000408da:
                    if (bVar4) break;
                    uVar27 = (uint)(SUB41(uVar27 >> 4,0) ||
                                   (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                                   bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f)) << 4;
                    uVar22 = uVar22 - unaff_r22;
                    __saturate(uVar22);
                    psVar25 = (short *)(int)(char)psVar25[0x2a];
                    while( true ) {
                      in_r10 = (uint)psVar25[0x6f];
                      iVar17 = (int)psVar25[10];
                      *(uint *)(psVar25 + 0x1c) = in_r16;
                      bVar5 = uVar22 < unaff_r22;
                      bVar1 = (bool)((byte)(uVar27 >> 4) & 1) ||
                              (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                              bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
                      uVar27 = (uint)bVar1 << 4;
                      uVar22 = uVar22 - unaff_r22;
                      __saturate(uVar22);
                      if (bVar5) {
                        iVar17 = *(char *)(param_3 - 0x78b8) + -0xb;
                        goto code_r0x0004089c;
                      }
                      bVar5 = (byte)(unaff_lp >> 0x1f) != bVar6 >> 7 &&
                              bVar6 >> 7 == (byte)(unaff_lp - unaff_r22 >> 0x1f);
                      uVar27 = (uint)bVar5 << 2 | (uint)((int)(unaff_lp - unaff_r22) < 0) << 1 |
                               (uint)(unaff_lp == unaff_r22) | (uint)(bVar1 || bVar5) << 4;
                      unaff_lp = unaff_lp - unaff_r22;
                      __saturate(unaff_lp);
                      if (((byte)(uVar27 >> 1) & 1) == ((byte)(uVar27 >> 2) & 1) &&
                          !(bool)((byte)uVar27 & 1)) break;
                      FUN_0005a10c();
                      uVar27 = uVar27 & 0xfffffff0;
                      bVar5 = false;
                      bVar1 = false;
                      while (bVar1 == bVar5) {
                        sVar9 = psVar25[0x28];
                        sVar16 = (short)param_1;
                        uVar22 = (int)*(short *)(param_1 + 2) * (int)sVar16;
                        bVar2 = (byte)(uVar22 >> 0x18);
                        bVar7 = (byte)((uint)param_1 >> 0x1f);
                        if ((int)(uVar22 - param_1) < 0 ==
                            (bVar2 >> 7 != bVar7 && bVar7 == (byte)(uVar22 - param_1 >> 0x1f)))
                        goto code_r0x00040958;
                        in_r12 = in_r1 - in_r12;
                        uVar26 = (uint)psVar25 / 0;
                        iVar17 = (int)*(short *)(uVar26 + 2);
                        uVar19 = 4;
                        uRam00041a63 = (undefined2)uVar26;
                        *(uint *)(uVar26 + 0xc) = in_r17;
                        uVar20 = uVar20 | unaff_gp;
                        psVar25 = *(short **)(uVar26 + 0xf8);
                        puVar15 = puVar15 + (-param_1 - (int)sVar9);
                        bVar5 = bVar2 >> 7 != bVar6 >> 7 &&
                                bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
                        bVar1 = (int)(uVar22 - unaff_r22) < 0;
                        uVar27 = (uint)((bool)((byte)(uVar27 >> 4) & 1) || bVar5) << 4;
                        uVar22 = uVar22 - unaff_r22;
                        __saturate(uVar22);
                        in_r16 = param_2;
                        psRam000422a9 = psVar25;
                      }
                    }
                  }
                } while (bVar1 == bVar5);
                psVar25 = (short *)(uint)(ushort)psVar25[0xc];
              }
            } while( true );
          }
          *(uint *)(in_r2 - 0x5682) = uVar18;
          iVar17 = (int)unaff_ep[0x10];
        }
        uVar27 = 0;
      } while( true );
    }
  }
  unaff_ep[0x67] = unaff_ep[0x28];
  uVar18 = 0xffff8011;
  bVar1 = bVar5;
  do {
    cVar8 = *(char *)(param_3 - 0x7d85);
    *(undefined4 *)(unaff_ep + 0x3e) = unaff_r27;
    uVar27 = in_r16 ^ unaff_r25;
    uVar20 = (int)cVar8 - 0xb;
    bVar4 = uVar18 < uVar20;
    uVar18 = uVar18 - uVar20;
    bVar6 = (byte)(in_r13 >> 0x18);
    if (bVar1) {
      *unaff_ep = (short)in_r15;
      sVar9 = *unaff_ep;
      bVar7 = (byte)(sVar9 >> 0xf) >> 7;
      iVar17 = in_r13 - (int)sVar9;
      __saturate(iVar17);
      unaff_lp = (int)(short)((short)unaff_lp * (short)param_1) * (int)(short)param_1;
      bVar2 = (byte)((uint)iVar17 >> 0x1f);
      in_r15 = in_r13 - iVar17;
      __saturate(in_r15);
      bVar5 = ((bVar5 || bVar6 >> 7 != bVar7 && bVar7 == (byte)(in_r13 - (int)sVar9 >> 0x1f)) ||
              bVar6 >> 7 != bVar2 && bVar2 == (byte)(in_r13 - iVar17 >> 0x1f)) ||
              -1 < (int)uVar27 && (int)(uVar27 + 0xf84) < 0;
      __saturate(uVar27 + 0xf84);
      bVar1 = bVar5;
LAB_000405fe:
      unaff_ep = (short *)(uint)(ushort)unaff_ep[0xc];
    }
    else {
      if (bVar4) goto LAB_000405fe;
      *(uint *)(unaff_ep + 0x3a) = unaff_lp;
      bVar6 = *(byte *)(param_3 - 0x7d85);
      *(undefined4 *)(unaff_ep + 0x3e) = unaff_r27;
      uVar18 = uVar18 & in_r14;
      uVar27 = in_r16;
      if (bVar6 < 0xb) {
        *(uint *)(unaff_ep + 0x3a) = unaff_lp;
code_r0x00040664:
        unaff_ep[0x40] = (short)param_3;
        return in_r10;
      }
    }
    unaff_ep[0x2d] = 0;
    in_r16 = uVar27;
  } while( true );
code_r0x00040958:
  sVar9 = psVar25[0x7a];
  uVar18 = uVar20 - 0xb;
  iVar21 = *(char *)(param_3 - 0x197f) + -10;
  *(char *)(param_3 + 0x1172) = (char)uVar19;
  bVar7 = -(char)(iVar21 >> 0x1f);
  bVar5 = (bool)((byte)(uVar27 >> 4) & 1) || bVar7 != 0 && bVar7 == (byte)((uint)-iVar21 >> 0x1f);
  __saturate(-iVar21);
  psVar25 = (short *)(int)*(char *)((int)psVar25 + 0x55);
  if ((in_r1 | 0x21ea) != 10) {
LAB_00040a2c:
    do {
      psVar25 = (short *)(uint)(ushort)psVar25[0xc];
      unaff_tp = unaff_tp + in_r1;
LAB_00040a44:
      psVar25[1] = (short)iVar17;
LAB_00040a50:
      iVar21 = (int)DAT_00004c01;
LAB_00040a5a:
      bVar3 = (byte)(in_r1 >> 0x18);
      bVar7 = (byte)((uint)iVar21 >> 0x1f);
      iVar23 = in_r1 - iVar21;
      __saturate(iVar23);
      iVar24 = uVar22 - unaff_r22;
      uVar18 = uVar22 >> 0x1f;
      uVar22 = uVar22 - unaff_r22;
      __saturate(uVar22);
      bVar2 = -(char)(iVar23 >> 0x1f);
      bVar5 = ((bVar5 || bVar3 >> 7 != bVar7 && bVar7 == (byte)(in_r1 - iVar21 >> 0x1f)) ||
              (byte)uVar18 != bVar6 >> 7 && bVar6 >> 7 == (byte)((uint)iVar24 >> 0x1f)) ||
              bVar2 != 0 && bVar2 == (byte)((uint)-iVar23 >> 0x1f);
      __saturate(-iVar23);
LAB_00040a62:
      bVar1 = uVar22 < unaff_r22;
      bVar4 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                       bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
      uVar22 = uVar22 - unaff_r22;
      __saturate(uVar22);
      uVar18 = unaff_r29;
      bVar5 = bVar4;
    } while (bVar1);
LAB_00040a72:
    sVar10 = psVar25[0x61];
    iVar17 = (int)psVar25[1];
    iVar21 = (int)DAT_ffffa203;
LAB_00040a7a:
    bVar7 = (byte)((uint)iVar21 >> 0x1f);
    iVar24 = in_r1 - iVar21;
    __saturate(iVar24);
    uVar27 = uVar22 - unaff_r22;
    __saturate(uVar27);
    bVar2 = -(char)(iVar24 >> 0x1f);
    __saturate(-iVar24);
    bVar1 = uVar27 < unaff_r22;
    bVar5 = (((bVar4 || bVar3 >> 7 != bVar7 && bVar7 == (byte)(in_r1 - iVar21 >> 0x1f)) ||
             (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
             bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f)) ||
            bVar2 != 0 && bVar2 == (byte)((uint)-iVar24 >> 0x1f)) ||
            (byte)(uVar27 >> 0x1f) != bVar6 >> 7 && bVar6 >> 7 == (byte)(uVar27 - unaff_r22 >> 0x1f)
    ;
    uVar22 = uVar27 - unaff_r22;
    __saturate(uVar22);
    uVar27 = uVar18;
LAB_00040a84:
    if (!bVar1) {
      *(int *)(psVar25 + 0x52) = (int)sVar9;
      bVar1 = unaff_r22 <= uVar22;
      bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                       bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
      uVar22 = uVar22 - unaff_r22;
      __saturate(uVar22);
      if (bVar1) {
        iVar21 = (int)*(char *)(param_3 - 0x703);
        uVar18 = uVar27;
LAB_00040a96:
        uVar27 = uVar18;
        param_2 = param_2 + unaff_tp;
        bVar1 = unaff_r22 <= uVar22;
        bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                         bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
        uVar22 = uVar22 - unaff_r22;
        __saturate(uVar22);
        if (bVar1) {
          bVar1 = uVar22 < unaff_r22;
          bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                           bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
          uVar22 = uVar22 - unaff_r22;
          __saturate(uVar22);
          if (bVar1) goto LAB_00040a62;
          uVar20 = (uint)*(char *)(param_3 - 0x7d85);
LAB_00040aa8:
          *(undefined4 *)(psVar25 + 0x3e) = unaff_r27;
          uVar18 = uVar27 ^ unaff_r25;
          if (!bVar5) {
            bVar4 = false;
            if (uVar20 < 0xb) {
              *(uint *)(psVar25 + 0x3a) = unaff_lp;
              *(undefined4 *)(psVar25 + 0x3e) = unaff_r27;
              bVar4 = in_r12 < unaff_r24;
              unaff_r24 = in_r12 - unaff_r24;
LAB_00040ac4:
              bVar1 = true;
              if (!bVar4) {
                *(uint *)(psVar25 + 0x3a) = unaff_lp;
                cVar8 = *(char *)(param_3 - 0x7d85);
                *(undefined4 *)(psVar25 + 0x3e) = unaff_r27;
                while( true ) {
                  iVar21 = cVar8 + -0xb;
                  bVar1 = unaff_r24 < param_2;
                  unaff_r24 = unaff_r24 - param_2;
                  bVar4 = true;
                  if (bVar5) break;
                  bVar5 = false;
                  if (bVar1) goto LAB_00040a96;
                  *(uint *)(psVar25 + 0x3a) = unaff_lp;
                  cVar8 = *(char *)(param_3 - 0x7d85);
                  *(undefined4 *)(psVar25 + 0x3e) = unaff_r27;
                  uVar20 = (int)cVar8 - 0xb;
                  bVar5 = false;
                  if (unaff_r24 < in_r18) goto LAB_00040aa8;
                  *(uint *)(psVar25 + 0x3a) = unaff_lp;
                  bVar5 = false;
                  bVar1 = false;
                  while( true ) {
                    unaff_lp = (int)(short)unaff_lp * (int)sVar16;
                    bVar4 = true;
                    if (bVar1) goto LAB_00040ac4;
                    cVar8 = *(char *)(param_3 - 0x703);
                    bVar1 = CARRY4(param_2,param_2);
                    param_2 = param_2 * 2;
                    if (bVar1) break;
                    bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                                     bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
                    iVar21 = uVar22 - unaff_r22;
                    __saturate(iVar21);
                    unaff_lp = (int)(short)((short)unaff_lp - (short)unaff_r22) *
                               (int)(short)unaff_r29;
                    while( true ) {
                      param_2 = param_2 + param_3;
                      iVar24 = iVar21 - unaff_r22;
                      __saturate(iVar24);
                      cVar8 = (&DAT_ffffe080)[param_3];
                      iVar23 = (int)cVar8;
                      *(char *)(param_3 + 0x22a8) = (char)uVar27;
                      __saturate(iVar24 - unaff_r22);
                      unaff_lp = (int)(short)unaff_lp * (int)sVar9;
                      bVar1 = iVar23 != 0;
                      bVar7 = -(cVar8 >> 7);
                      bVar5 = ((bVar5 || (byte)((uint)iVar21 >> 0x1f) != bVar6 >> 7 &&
                                         bVar6 >> 7 == (byte)(iVar21 - unaff_r22 >> 0x1f)) ||
                              (byte)((uint)iVar24 >> 0x1f) != bVar6 >> 7 &&
                              bVar6 >> 7 == (byte)(iVar24 - unaff_r22 >> 0x1f)) ||
                              bVar7 != 0 && bVar7 == (byte)((uint)-iVar23 >> 0x1f);
                      __saturate(-iVar23);
                      uVar22 = (int)(short)((short)(iVar24 - unaff_r22) * sVar16 * sVar16) *
                               (int)sVar16;
                      if (-iVar23 < 0) break;
                      bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                                       bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
                      iVar21 = uVar22 - unaff_r22;
                      __saturate(iVar21);
                      if (unaff_r22 <= uVar22) {
                        *(undefined4 *)(psVar25 + 0x3e) = unaff_r27;
                        return (int)sVar10;
                      }
                    }
                  }
                }
                goto LAB_00040a7a;
              }
              goto LAB_00040a84;
            }
            goto LAB_00040a72;
          }
          iVar17 = (int)psVar25[1];
          goto LAB_00040a50;
        }
        goto LAB_00040a5a;
      }
      goto LAB_00040a50;
    }
    goto LAB_00040a44;
  }
  __saturate(uVar20 - 0x7edd);
  iVar21 = *(char *)(param_3 + 0x7ed2) + -10;
  bVar7 = -(char)(iVar21 >> 0x1f);
  bVar5 = (bVar5 || (int)uVar18 < 0 && -1 < (int)(uVar20 - 0x7edd)) ||
          bVar7 != 0 && bVar7 == (byte)((uint)-iVar21 >> 0x1f);
  iVar21 = -iVar21;
  __saturate(iVar21);
  *(char *)(param_3 + 0x22a8) = (char)uVar19;
LAB_000409a2:
  __saturate(uVar22 - unaff_r22);
  unaff_lp = (int)(short)unaff_lp * (int)sVar9;
  bVar7 = -(char)(iVar21 >> 0x1f);
  uVar27 = (uint)((bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                            bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f)) ||
                 bVar7 != 0 && bVar7 == (byte)((uint)-iVar21 >> 0x1f)) << 4;
  __saturate(-iVar21);
  uVar22 = (int)(short)((short)(uVar22 - unaff_r22) * sVar16 * sVar16) * (int)sVar16;
  uVar20 = uVar18;
  if (-1 < -iVar21) {
    cVar8 = *(char *)(param_3 - 0x78b8);
    psVar25[0x66] = (short)puVar15;
LAB_000409c4:
    bVar5 = SUB41(uVar27 >> 4,0) ||
            (byte)(uVar22 >> 0x1f) != bVar6 >> 7 && bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f)
    ;
    __saturate(uVar22 - unaff_r22);
    uVar27 = (int)(short)(uVar22 - unaff_r22) * (int)sVar16;
    do {
      sVar10 = *(short *)(~uVar19 + 0x50);
      uVar22 = (int)(short)uVar27 * (int)sVar16;
      while( true ) {
        iVar21 = (int)cVar8;
        iVar17 = (int)sVar10;
        psVar25 = (short *)~uVar19;
        uVar22 = (int)(short)uVar22 * (int)sVar16;
        if (-1 < (int)uVar19) goto LAB_000409a2;
        cVar8 = *(char *)(param_3 - 0x78b8);
        psVar25[0x60] = (short)puVar15;
        bVar1 = uVar22 < unaff_r22;
        bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                         bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
        __saturate(uVar22 - unaff_r22);
        sVar10 = *(short *)(~uVar19 + 0x50);
        psVar25 = (short *)~uVar19;
        uVar27 = (uint)bVar5 << 4 | (uint)(psVar25 == (short *)0x0);
        uVar22 = (int)(short)((short)(uVar22 - unaff_r22) * sVar16) * (int)sVar16;
        if (bVar1 || (bool)((byte)uVar27 & 1)) goto LAB_000409c4;
        cVar8 = *(char *)(param_3 - 0x703);
        param_2 = param_2 + (int)sVar9;
        bVar5 = bVar5 || (byte)(uVar22 >> 0x1f) != bVar6 >> 7 &&
                         bVar6 >> 7 == (byte)(uVar22 - unaff_r22 >> 0x1f);
        uVar27 = uVar22 - unaff_r22;
        __saturate(uVar27);
        if (uVar22 < unaff_r22) break;
        cVar8 = *(char *)(param_3 - 0xf84);
        puVar15 = (undefined1 *)(int)*psVar25;
        bVar5 = bVar5 || (byte)(uVar27 >> 0x1f) != bVar6 >> 7 &&
                         bVar6 >> 7 == (byte)(uVar27 - unaff_r22 >> 0x1f);
        uVar22 = uVar27 - unaff_r22;
        __saturate(uVar22);
        if (unaff_r22 <= uVar27) {
          psVar25[0x4d] = sVar9;
          iVar17 = (int)*psVar25;
          goto LAB_00040a2c;
        }
      }
    } while( true );
  }
  goto code_r0x00040958;
}


// ==== FUN_00040b86 @ 00040b86 (size 1086) ====

/* WARNING: Instruction at (ram,0x00040eae) overlaps instruction at (ram,0x00040eac)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00040ba8) */
/* WARNING: Removing unreachable block (ram,0x00040bb4) */
/* WARNING: Removing unreachable block (ram,0x00040bb8) */
/* WARNING: Removing unreachable block (ram,0x00040bbc) */
/* WARNING: Removing unreachable block (ram,0x00040bd6) */
/* WARNING: Removing unreachable block (ram,0x00040be0) */
/* WARNING: Removing unreachable block (ram,0x00040be4) */
/* WARNING: Removing unreachable block (ram,0x00040be6) */
/* WARNING: Removing unreachable block (ram,0x00040bea) */
/* WARNING: Removing unreachable block (ram,0x00040bf6) */
/* WARNING: Removing unreachable block (ram,0x00040bf8) */
/* WARNING: Removing unreachable block (ram,0x00040bfa) */
/* WARNING: Removing unreachable block (ram,0x00040bfe) */
/* WARNING: Removing unreachable block (ram,0x00040c12) */
/* WARNING: Removing unreachable block (ram,0x00040c16) */
/* WARNING: Removing unreachable block (ram,0x00040c22) */
/* WARNING: Removing unreachable block (ram,0x00040bf4) */
/* WARNING: Removing unreachable block (ram,0x00040c36) */
/* WARNING: Removing unreachable block (ram,0x00040c3a) */
/* WARNING: Removing unreachable block (ram,0x00040c54) */
/* WARNING: Removing unreachable block (ram,0x00040c58) */
/* WARNING: Removing unreachable block (ram,0x00040c86) */
/* WARNING: Removing unreachable block (ram,0x00040c5e) */
/* WARNING: Removing unreachable block (ram,0x00040c64) */
/* WARNING: Removing unreachable block (ram,0x00040c66) */
/* WARNING: Removing unreachable block (ram,0x00040c7a) */
/* WARNING: Removing unreachable block (ram,0x00040c82) */
/* WARNING: Removing unreachable block (ram,0x00040c96) */
/* WARNING: Removing unreachable block (ram,0x00040ca8) */
/* WARNING: Removing unreachable block (ram,0x00040cb6) */
/* WARNING: Removing unreachable block (ram,0x00040cbc) */
/* WARNING: Removing unreachable block (ram,0x00040cc2) */
/* WARNING: Removing unreachable block (ram,0x00040cc4) */
/* WARNING: Removing unreachable block (ram,0x00040cf0) */
/* WARNING: Removing unreachable block (ram,0x00040cf8) */
/* WARNING: Removing unreachable block (ram,0x00040d04) */
/* WARNING: Removing unreachable block (ram,0x00040cd4) */
/* WARNING: Removing unreachable block (ram,0x00040d16) */
/* WARNING: Removing unreachable block (ram,0x00040d20) */
/* WARNING: Removing unreachable block (ram,0x00040d28) */
/* WARNING: Removing unreachable block (ram,0x00040d2a) */
/* WARNING: Removing unreachable block (ram,0x00040d32) */
/* WARNING: Removing unreachable block (ram,0x00040d3a) */
/* WARNING: Removing unreachable block (ram,0x00040d4e) */
/* WARNING: Removing unreachable block (ram,0x00040d56) */
/* WARNING: Removing unreachable block (ram,0x00040d62) */
/* WARNING: Removing unreachable block (ram,0x00040d6a) */
/* WARNING: Removing unreachable block (ram,0x00040d7c) */
/* WARNING: Removing unreachable block (ram,0x00040d90) */
/* WARNING: Removing unreachable block (ram,0x00040d98) */
/* WARNING: Removing unreachable block (ram,0x00040dc4) */
/* WARNING: Removing unreachable block (ram,0x00040de8) */
/* WARNING: Removing unreachable block (ram,0x00040e06) */
/* WARNING: Removing unreachable block (ram,0x00040e2a) */
/* WARNING: Removing unreachable block (ram,0x00040e5e) */
/* WARNING: Removing unreachable block (ram,0x00040e6a) */
/* WARNING: Removing unreachable block (ram,0x00040e80) */
/* WARNING: Removing unreachable block (ram,0x00040e88) */
/* WARNING: Removing unreachable block (ram,0x00040e9a) */
/* WARNING: Removing unreachable block (ram,0x00040ea0) */
/* WARNING: Removing unreachable block (ram,0x00040ed2) */
/* WARNING: Removing unreachable block (ram,0x00040ea6) */
/* WARNING: Removing unreachable block (ram,0x00040ea8) */
/* WARNING: Removing unreachable block (ram,0x00040eac) */
/* WARNING: Removing unreachable block (ram,0x00040eb6) */
/* WARNING: Removing unreachable block (ram,0x00040eb8) */
/* WARNING: Removing unreachable block (ram,0x00040ec2) */
/* WARNING: Removing unreachable block (ram,0x00040eca) */
/* WARNING: Removing unreachable block (ram,0x00040edc) */
/* WARNING: Removing unreachable block (ram,0x00040eea) */
/* WARNING: Removing unreachable block (ram,0x00040eae) */
/* WARNING: Removing unreachable block (ram,0x00040ef0) */
/* WARNING: Removing unreachable block (ram,0x00040ef8) */
/* WARNING: Removing unreachable block (ram,0x00040f28) */
/* WARNING: Removing unreachable block (ram,0x00040f2c) */
/* WARNING: Removing unreachable block (ram,0x00040f6a) */
/* WARNING: Removing unreachable block (ram,0x00040f78) */
/* WARNING: Removing unreachable block (ram,0x00040f82) */
/* WARNING: Removing unreachable block (ram,0x00040f92) */
/* WARNING: Removing unreachable block (ram,0x00040e66) */
/* WARNING: Removing unreachable block (ram,0x00040ce8) */

void FUN_00040b86(void)

{
  undefined4 unaff_r27;
  int unaff_r28;
  int unaff_ep;
  undefined4 unaff_lp;
  
  *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
  if ((unaff_r28 + -10 < 0xb) && (unaff_r28 + -0x14 < 0)) {
    *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
  }
  else {
    *(undefined4 *)(unaff_ep + 0x74) = unaff_lp;
  }
  return;
}


// ==== FUN_00040fc4 @ 00040fc4 (size 272) ====

void FUN_00040fc4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  uint in_r1;
  short unaff_gp;
  undefined2 in_r10;
  undefined4 in_r11;
  short in_r16;
  int unaff_r20;
  short unaff_r22;
  int unaff_r23;
  uint unaff_r25;
  int unaff_r28;
  int iVar5;
  short unaff_r29;
  int unaff_ep;
  uint uVar6;
  int iVar7;
  short unaff_lp;
  
  uVar1 = *(undefined2 *)(unaff_ep + 2);
  __saturate(unaff_r20 + -1);
  uVar6 = (uint)*(ushort *)(unaff_ep + 0x18);
  sVar3 = in_r16 - unaff_gp;
  *(short *)(uVar6 + 0x8e) = sVar3;
  *(undefined2 *)(uVar6 + 2) = uVar1;
  *(short *)(uVar6 + 0x44) = (short)in_r11;
  *(undefined2 *)(uVar6 + 0xc2) = in_r10;
  uVar4 = SUB42(&stack0x00000000,0);
  *(undefined2 *)(uVar6 + 0xd0) = uVar4;
  *(undefined2 *)(uVar6 + 2) = uVar1;
  *(short *)(uVar6 + 0x44) = (short)in_r11;
  *(undefined2 *)(uVar6 + 0xc2) = in_r10;
  *(undefined4 *)(uVar6 + 0xe0) = in_r11;
  *(undefined2 *)(uVar6 + 0x48) = uVar4;
  __saturate(param_1 - (*(uint *)(uVar6 + 0x24) & unaff_r25));
  __saturate(in_r1 - unaff_r28);
  *(short *)(uVar6 + 0x52) = sVar3;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined2 *)(uVar6 + 0x36) = uVar4;
  iVar5 = in_r1 - (in_r1 - unaff_r28);
  __saturate(iVar5);
  *(undefined4 *)(uVar6 + 0xe4) = in_r11;
  *(short *)(uVar6 + 0x50) = sVar3;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined2 *)(uVar6 + 0x38) = uVar4;
  iVar5 = in_r1 - iVar5;
  __saturate(iVar5);
  __saturate(param_1 - iVar5);
  sVar2 = *(short *)(uVar6 + 4);
  __saturate(3);
  iVar7 = *(int *)(uVar6 + 0xf8);
  sVar3 = unaff_r22 - sVar3;
  *(short *)(iVar7 + 0x8e) = sVar3;
  *(short *)((in_r1 | 0x247c) + 0x1ce8) = unaff_lp * unaff_r29 * unaff_r29;
  iVar5 = *(int *)(iVar7 + 4);
  *(short *)(iVar7 + 4) = (short)iVar5;
  *(undefined2 *)(iVar7 + 0xe2) = *(undefined2 *)(iVar7 + 0x44);
  uVar6 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined2 *)(uVar6 + 0x48) = uVar4;
  __saturate(iVar5 - sVar2);
  iVar5 = in_r1 - (in_r1 | 0x247c);
  __saturate(iVar5);
  *(short *)(uVar6 + 0x52) = sVar3;
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined2 *)(uVar6 + 0x36) = uVar4;
  iVar5 = in_r1 - iVar5;
  __saturate(iVar5);
  *(short *)(uVar6 + 0x50) = sVar3;
  *(undefined2 *)(*(ushort *)(uVar6 + 0x18) + 0x38) = uVar4;
  iVar5 = in_r1 - iVar5;
  __saturate(iVar5);
  __saturate(iVar5 - in_r1);
                    /* WARNING: Could not recover jumptable at 0x000410d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000410d4 + *(short *)(&DAT_000410d4 + unaff_r23 * 2) * 2))();
  return;
}


// ==== FUN_000419c8 @ 000419c8 (size 100) ====

void FUN_000419c8(void)

{
  ushort uVar1;
  undefined2 unaff_gp;
  undefined2 in_r14;
  int unaff_r28;
  int unaff_ep;
  uint uVar2;
  undefined2 unaff_lp;
  
  *(undefined2 *)(unaff_ep + 0x4e) = in_r14;
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  *(undefined2 *)(uVar1 + 0x52) = unaff_gp;
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar2 + 0x50) = unaff_gp;
  uVar1 = *(ushort *)(uVar2 + 0x18);
  *(undefined2 *)(unaff_r28 + 0x2490) = unaff_lp;
  *(undefined2 *)(*(ushort *)(*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18) + 0x18) + 0x4e) = in_r14
  ;
  (*(code *)&LAB_00000030)();
  return;
}


// ==== FUN_000423ee @ 000423ee (size 148) ====

void FUN_000423ee(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_r2;
  uint unaff_tp;
  undefined2 in_r15;
  undefined1 unaff_r22;
  int unaff_r29;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0x2c) = in_r15;
  *(short *)(unaff_ep + 0xfe) = (short)*(char *)(unaff_ep + 0x38);
  __saturate(0xffffdaf6);
  __saturate((uint)*(ushort *)(unaff_ep + 0x18) - unaff_r29);
  *(undefined1 *)(param_3 + 0xf2c) = unaff_r22;
                    /* WARNING: Could not recover jumptable at 0x0004249a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004249c + *(short *)(&DAT_0004249c + (in_r2 ^ unaff_tp) * 2) * 2))();
  return;
}


// ==== FUN_00042482 @ 00042482 (size 26) ====

void FUN_00042482(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r2;
  undefined1 in_r16;
  
  *(undefined1 *)(param_3 + 0xf2c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x0004249a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004249c + *(short *)(&DAT_0004249c + in_r2 * 2) * 2))();
  return;
}


// ==== FUN_0004251a @ 0004251a (size 160) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000425b4) overlaps instruction at (ram,0x000425b2)
    */

void FUN_0004251a(undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined4 unaff_gp;
  int unaff_tp;
  int in_r10;
  int in_r16;
  int iVar4;
  uint uVar5;
  uint unaff_r23;
  int unaff_r26;
  uint unaff_ep;
  uint uVar6;
  int unaff_lp;
  uint uVar7;
  
  sVar2 = *(short *)(unaff_ep + 0x88);
  *(undefined4 *)(unaff_ep + 0x3c) = unaff_gp;
  uVar5 = 9;
  *(short *)(unaff_ep + 0xd0) = (short)in_r10;
  uVar3 = (undefined1)in_r16;
  *(undefined1 *)(in_r10 + 0x5d48) = uVar3;
  *(undefined1 *)(unaff_tp + 0xb0) = uVar3;
  *(undefined1 *)(sVar2 + 0x5928) = uVar3;
  iVar4 = in_r16 + 4;
  __saturate(iVar4);
  uVar7 = (uint)(unaff_lp << 0xe) / 0;
  do {
    uVar6 = unaff_ep | uVar5;
    uVar5 = unaff_r23 | 0xfffffffa;
    iVar4 = iVar4 + 4;
    __saturate(iVar4);
    uVar3 = (undefined1)iVar4;
    unaff_ep = *(ushort *)(uVar6 + 0x18) | uVar5;
    DAT_000000ff = uVar3;
    *(undefined1 *)(*(short *)(unaff_ep + 0xd0) + 0x5d42) = uVar3;
    *(undefined1 *)(unaff_tp + 0xaf) = uVar3;
    uVar7 = uVar7 / 0 << 0xe;
  } while (-1 < (int)uVar7);
  FUN_00060bfe();
  *(undefined4 *)(unaff_ep + 0x3c) = 1;
  cVar1 = *(char *)(unaff_ep + 0x38);
  __saturate(unaff_ep - 5);
  iVar4 = (int)*(char *)(param_3 + -0x7d85);
  __saturate(unaff_r26 + 0xb);
  __saturate(iVar4 + -0x2324);
  *(int *)(iVar4 + -0x22e0) = (int)cVar1;
  __saturate(iVar4 + -0x2322);
  *(int *)(iVar4 + -0x22d2) = (int)cVar1;
  __saturate(iVar4 + -0x2190);
  __saturate(iVar4 + -0x218f);
  __saturate(iVar4 + -0x21b1);
  *(undefined4 *)(iVar4 + -0x2169) = *(undefined4 *)(iVar4 + -0x213f);
  __saturate(iVar4 + -0x2338);
  *(undefined4 *)(iVar4 + -0x22dc) = *(undefined4 *)(iVar4 + -0x213f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042650 @ 00042650 (size 176) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00042650(uint param_1,int param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int in_r1;
  uint in_r2;
  undefined4 unaff_gp;
  undefined4 uVar6;
  undefined4 unaff_tp;
  undefined2 in_r10;
  int iVar7;
  uint in_r14;
  int in_r15;
  int in_r16;
  int in_r17;
  int in_r18;
  int iVar8;
  uint unaff_r21;
  undefined4 *puVar9;
  int unaff_r22;
  int unaff_r23;
  undefined4 unaff_r27;
  short *unaff_ep;
  uint uVar10;
  int iVar11;
  int unaff_lp;
  
  __saturate(unaff_r23 - (in_r14 >> 0x17));
  __saturate(in_r15 + in_r16);
  __saturate(unaff_lp - in_r1);
  __saturate(*unaff_ep + -0x2524);
  *(short *)(*unaff_ep + -0x242c) = (short)unaff_gp;
  *(short *)(unaff_r21 + 0xfc) = (short)unaff_gp;
  puVar9 = (undefined4 *)(unaff_r21 | param_3);
  Ram00000000 = unaff_r27;
  uVar3 = *(ushort *)(unaff_r21 + 0x18);
  *(undefined4 *)(uVar3 + 0x50) = unaff_gp;
  *(undefined4 *)(uVar3 + 0x44) = unaff_gp;
  __saturate(unaff_lp - in_r1);
  param_1 = (uint)puVar9 | param_1;
  Ram00000000 = unaff_r27;
  *puVar9 = *puVar9;
  __saturate(0);
  uVar10 = *(uint *)(*(byte *)(((uint)puVar9 | param_1) + 1) + 0xf8) | param_1;
  *(undefined2 *)(uVar10 + 0x88) = in_r10;
  __saturate(0x24fc - in_r18);
  *(undefined4 *)(uVar10 + 0x40) = *(undefined4 *)(uVar10 + 0x44);
  __saturate(-in_r18);
  iVar7 = (int)*(short *)(*(byte *)((uVar10 | param_1) + 1) + 0x58);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  sVar2 = *(short *)(param_1 + 0xf8);
  *(undefined4 *)(sVar2 + 0x48) = uVar6;
  uVar10 = (uint)*(ushort *)(sVar2 + 0x18);
  *(undefined4 *)(uVar10 + 0x5c) = uVar6;
  uVar3 = *(ushort *)(uVar10 + 0x18);
  _DAT_00004a0b = *(undefined2 *)(*(ushort *)(uVar10 + 0x6d04) - 0x2fec);
  uVar4 = (ushort)((uint)unaff_tp >> 0x10);
  *(ushort *)(uVar3 + 0xc) = uVar4 >> 1;
  iVar8 = (int)*(short *)(uVar3 + 6);
  param_1 = param_1 ^ in_r2;
  *(int *)(iVar8 + 8) = iVar7;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  cVar1 = *(char *)(unaff_r22 + -0x56f2);
  *(int *)(iVar8 + 8) = iVar7;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  sVar2 = *(short *)(param_1 + 0x20);
  *(int *)(param_1 + 4) = (int)cVar1;
  iVar7 = -in_r18 - in_r2;
  __saturate(iVar7);
  *(undefined2 *)(sVar2 + 0x2520) = _DAT_00004a0b;
  *(int *)(param_1 + 4) = iVar8;
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x3e) = uVar4 >> 1;
  uVar3 = *(ushort *)(param_1 + 0x18);
  iVar7 = iVar7 - (in_r17 >> 0x1f);
  __saturate(iVar7);
  *(uint *)(uVar3 + 0x50) = param_1 | (uint)&stack0x00000000;
  uVar10 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar10 + 0x60) = uVar6;
  __saturate(iVar8 + 5);
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  __saturate(iVar8 + 6);
  *(undefined2 *)(sVar2 + 0x2502) = _DAT_00004a0b;
  *(int *)(uVar10 + 4) = iVar8 + 6;
  *(short *)(uVar10 + 0x3e) = (short)unaff_r22;
  iVar7 = iVar7 - (int)&stack0x00000000;
  __saturate(iVar7);
  iVar7 = iVar7 - (int)&stack0x00000000;
  __saturate(iVar7);
  uVar6 = *(undefined4 *)(*(ushort *)(uVar10 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar10 + 0x18) + 0x18) + 8) = uVar6;
  __saturate(5);
  Ram00000011 = uVar6;
  __saturate(1);
  uVar6 = Ram00000011;
  uVar5 = Ram00000007;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(iVar7 + DAT_ffffe0ff);
  _DAT_00004a27 = _DAT_00004a0b;
  *(char *)(param_3 + 0x49f8) = (char)(in_r17 >> 0x1f);
  __synchronize();
  uVar5 = Ram00000019;
  __saturate(0x2c);
  puVar9 = (undefined4 *)(uint)CONCAT11(DAT_00000045,DAT_00000044);
  puVar9[3] = _DAT_00000070;
  puVar9[4] = *puVar9;
  uVar3 = *(ushort *)(puVar9 + 6);
  *(undefined1 *)(param_3 + 0x49f8) = 0;
  iVar8 = *(int *)(uVar3 + 0x14);
  iVar11 = (int)(short)uVar3 * (int)(short)iVar8;
  __synchronize();
  uVar10 = (uint)*(ushort *)(iVar11 + 0x18);
  iVar7 = iVar7 - iVar8;
  __saturate(iVar7);
  iVar8 = *(int *)(uVar10 + 4);
  *(undefined4 *)(uVar10 + 4) = *(undefined4 *)(iVar11 + 0x18);
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  __saturate(iVar7 - iVar8);
  *(uint *)(uVar10 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar10 + 0x18) + 0x44) = *(undefined4 *)(uVar10 + 0x48);
  *(undefined1 *)(param_3 + 0x1078) = 0;
  __saturate(&stack0x252e0002);
  *(char *)(param_2 + 0x4000) = (char)&stack0x252e0002;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042700 @ 00042700 (size 44) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00042700(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  undefined2 uVar5;
  int in_r1;
  uint in_r2;
  undefined4 uVar6;
  undefined4 unaff_tp;
  undefined2 in_r10;
  int iVar7;
  int in_r17;
  int in_r18;
  int iVar8;
  uint unaff_r21;
  int unaff_r22;
  int unaff_r28;
  uint unaff_ep;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  
  *(undefined2 *)(unaff_ep + 0x88) = in_r10;
  __saturate(unaff_r28 - in_r18);
  *(undefined4 *)(unaff_ep + 0x40) = *(undefined4 *)(unaff_ep + 0x44);
  __saturate(in_r1 - in_r18);
  iVar7 = (int)*(short *)(*(byte *)((unaff_ep | unaff_r21) + 1) + 0x58);
  uVar6 = *(undefined4 *)(unaff_r21 + 0x40);
  sVar2 = *(short *)(unaff_r21 + 0xf8);
  *(undefined4 *)(sVar2 + 0x48) = uVar6;
  uVar9 = (uint)*(ushort *)(sVar2 + 0x18);
  *(undefined4 *)(uVar9 + 0x5c) = uVar6;
  uVar3 = *(ushort *)(uVar9 + 0x18);
  _DAT_00004a0b = *(undefined2 *)(*(ushort *)(uVar9 + 0x6d04) - 0x2fec);
  uVar4 = (ushort)((uint)unaff_tp >> 0x10);
  *(ushort *)(uVar3 + 0xc) = uVar4 >> 1;
  iVar8 = (int)*(short *)(uVar3 + 6);
  uVar9 = unaff_r21 ^ in_r2;
  *(int *)(iVar8 + 8) = iVar7;
  *(undefined2 *)(uVar9 + 0xc) = 0xffff;
  cVar1 = *(char *)(unaff_r22 + -0x56f2);
  *(int *)(iVar8 + 8) = iVar7;
  *(undefined2 *)(uVar9 + 0xc) = 0xffff;
  sVar2 = *(short *)(uVar9 + 0x20);
  *(int *)(uVar9 + 4) = (int)cVar1;
  iVar7 = (in_r1 - in_r18) - in_r2;
  __saturate(iVar7);
  *(undefined2 *)(sVar2 + 0x2520) = _DAT_00004a0b;
  *(int *)(uVar9 + 4) = iVar8;
  uVar6 = *(undefined4 *)(uVar9 + 0x40);
  *(ushort *)(uVar9 + 0x3e) = uVar4 >> 1;
  uVar3 = *(ushort *)(uVar9 + 0x18);
  iVar7 = iVar7 - (in_r17 >> 0x1f);
  __saturate(iVar7);
  *(uint *)(uVar3 + 0x50) = uVar9 | (uint)&stack0x00000000;
  uVar9 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar9 + 0x60) = uVar6;
  __saturate(iVar8 + 5);
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  __saturate(iVar8 + 6);
  *(undefined2 *)(sVar2 + 0x2502) = _DAT_00004a0b;
  *(int *)(uVar9 + 4) = iVar8 + 6;
  *(short *)(uVar9 + 0x3e) = (short)unaff_r22;
  iVar7 = iVar7 - (int)&stack0x00000000;
  __saturate(iVar7);
  iVar7 = iVar7 - (int)&stack0x00000000;
  __saturate(iVar7);
  uVar6 = *(undefined4 *)(*(ushort *)(uVar9 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar9 + 0x18) + 0x18) + 8) = uVar6;
  __saturate(5);
  Ram00000011 = uVar6;
  __saturate(1);
  uVar6 = Ram00000011;
  uVar5 = Ram00000007;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(iVar7 + DAT_ffffe0ff);
  _DAT_00004a27 = _DAT_00004a0b;
  *(char *)(param_3 + 0x49f8) = (char)(in_r17 >> 0x1f);
  __synchronize();
  uVar5 = Ram00000019;
  __saturate(0x2c);
  puVar10 = (undefined4 *)(uint)CONCAT11(DAT_00000045,DAT_00000044);
  puVar10[3] = _DAT_00000070;
  puVar10[4] = *puVar10;
  uVar3 = *(ushort *)(puVar10 + 6);
  *(undefined1 *)(param_3 + 0x49f8) = 0;
  iVar8 = *(int *)(uVar3 + 0x14);
  iVar11 = (int)(short)uVar3 * (int)(short)iVar8;
  __synchronize();
  uVar9 = (uint)*(ushort *)(iVar11 + 0x18);
  iVar7 = iVar7 - iVar8;
  __saturate(iVar7);
  iVar8 = *(int *)(uVar9 + 4);
  *(undefined4 *)(uVar9 + 4) = *(undefined4 *)(iVar11 + 0x18);
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  __saturate(iVar7 - iVar8);
  *(uint *)(uVar9 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar9 + 0x18) + 0x44) = *(undefined4 *)(uVar9 + 0x48);
  *(undefined1 *)(param_3 + 0x1078) = 0;
  __saturate(&stack0x252e0002);
  *(char *)(param_2 + 0x4000) = (char)&stack0x252e0002;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004272c @ 0004272c (size 52) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004272c(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int in_r1;
  int iVar5;
  uint in_r2;
  undefined4 uVar6;
  undefined4 unaff_tp;
  undefined4 in_r13;
  undefined2 in_r15;
  int in_r16;
  int in_r17;
  int iVar7;
  uint unaff_r21;
  undefined2 unaff_r22;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  
  uVar6 = *(undefined4 *)(unaff_r21 + 0x40);
  sVar2 = *(short *)(unaff_r21 + 0xf8);
  *(undefined4 *)(sVar2 + 0x48) = uVar6;
  uVar8 = (uint)*(ushort *)(sVar2 + 0x18);
  *(undefined4 *)(uVar8 + 0x5c) = uVar6;
  uVar3 = *(ushort *)(uVar8 + 0x18);
  _DAT_00004a0b = *(undefined2 *)(*(ushort *)(uVar8 + 0x6d04) - 0x2fec);
  *(undefined2 *)(uVar3 + 0xc) = in_r15;
  iVar7 = (int)*(short *)(uVar3 + 6);
  uVar8 = unaff_r21 ^ in_r2;
  *(undefined4 *)(iVar7 + 8) = in_r13;
  *(undefined2 *)(uVar8 + 0xc) = 0xffff;
  cVar1 = *(char *)(in_r16 + -0x56f2);
  *(undefined4 *)(iVar7 + 8) = in_r13;
  *(undefined2 *)(uVar8 + 0xc) = 0xffff;
  sVar2 = *(short *)(uVar8 + 0x20);
  *(int *)(uVar8 + 4) = (int)cVar1;
  __saturate(in_r1 - in_r2);
  *(undefined2 *)(sVar2 + 0x2520) = _DAT_00004a0b;
  *(int *)(uVar8 + 4) = iVar7;
  uVar6 = *(undefined4 *)(uVar8 + 0x40);
  *(ushort *)(uVar8 + 0x3e) = (ushort)((uint)unaff_tp >> 0x11);
  uVar3 = *(ushort *)(uVar8 + 0x18);
  iVar5 = (in_r1 - in_r2) - (in_r17 >> 0x1f);
  __saturate(iVar5);
  *(uint *)(uVar3 + 0x50) = uVar8 | (uint)&stack0x00000000;
  uVar8 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar8 + 0x60) = uVar6;
  __saturate(iVar7 + 5);
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  __saturate(iVar7 + 6);
  *(undefined2 *)(sVar2 + 0x2502) = _DAT_00004a0b;
  *(int *)(uVar8 + 4) = iVar7 + 6;
  *(undefined2 *)(uVar8 + 0x3e) = unaff_r22;
  iVar5 = iVar5 - (int)&stack0x00000000;
  __saturate(iVar5);
  iVar5 = iVar5 - (int)&stack0x00000000;
  __saturate(iVar5);
  uVar6 = *(undefined4 *)(*(ushort *)(uVar8 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar8 + 0x18) + 0x18) + 8) = uVar6;
  __saturate(5);
  Ram00000011 = uVar6;
  __saturate(1);
  uVar6 = Ram00000011;
  uVar4 = Ram00000007;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(iVar5 + DAT_ffffe0ff);
  _DAT_00004a27 = _DAT_00004a0b;
  *(char *)(param_3 + 0x49f8) = (char)(in_r17 >> 0x1f);
  __synchronize();
  uVar4 = Ram00000019;
  __saturate(0x2c);
  puVar9 = (undefined4 *)(uint)CONCAT11(DAT_00000045,DAT_00000044);
  puVar9[3] = _DAT_00000070;
  puVar9[4] = *puVar9;
  uVar3 = *(ushort *)(puVar9 + 6);
  *(undefined1 *)(param_3 + 0x49f8) = 0;
  iVar7 = *(int *)(uVar3 + 0x14);
  iVar10 = (int)(short)uVar3 * (int)(short)iVar7;
  __synchronize();
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  iVar5 = iVar5 - iVar7;
  __saturate(iVar5);
  iVar7 = *(int *)(uVar8 + 4);
  *(undefined4 *)(uVar8 + 4) = *(undefined4 *)(iVar10 + 0x18);
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  __saturate(iVar5 - iVar7);
  *(uint *)(uVar8 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar8 + 0x18) + 0x44) = *(undefined4 *)(uVar8 + 0x48);
  *(undefined1 *)(param_3 + 0x1078) = 0;
  __saturate(&stack0x252e0002);
  *(char *)(param_2 + 0x4000) = (char)&stack0x252e0002;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042760 @ 00042760 (size 150) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00042760(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int in_r1;
  int iVar5;
  uint in_r2;
  undefined4 uVar6;
  undefined4 unaff_tp;
  undefined4 in_r13;
  int in_r16;
  int in_r17;
  int iVar7;
  uint unaff_r21;
  uint uVar8;
  undefined2 unaff_r22;
  int unaff_ep;
  undefined4 *puVar9;
  int iVar10;
  undefined2 unaff_lp;
  
  iVar7 = (int)*(short *)(unaff_ep + 6);
  uVar8 = unaff_r21 ^ in_r2;
  *(undefined4 *)(iVar7 + 8) = in_r13;
  *(undefined2 *)(uVar8 + 0xc) = 0xffff;
  cVar1 = *(char *)(in_r16 + -0x56f2);
  *(undefined4 *)(iVar7 + 8) = in_r13;
  *(undefined2 *)(uVar8 + 0xc) = 0xffff;
  sVar2 = *(short *)(uVar8 + 0x20);
  *(int *)(uVar8 + 4) = (int)cVar1;
  __saturate(in_r1 - in_r2);
  *(undefined2 *)(sVar2 + 0x2520) = unaff_lp;
  *(int *)(uVar8 + 4) = iVar7;
  uVar6 = *(undefined4 *)(uVar8 + 0x40);
  *(ushort *)(uVar8 + 0x3e) = (ushort)((uint)unaff_tp >> 0x11);
  uVar3 = *(ushort *)(uVar8 + 0x18);
  iVar5 = (in_r1 - in_r2) - in_r17;
  __saturate(iVar5);
  *(uint *)(uVar3 + 0x50) = uVar8 | (uint)&stack0x00000000;
  uVar8 = (uint)*(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar8 + 0x60) = uVar6;
  __saturate(iVar7 + 5);
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  __saturate(iVar7 + 6);
  *(undefined2 *)(sVar2 + 0x2502) = unaff_lp;
  *(int *)(uVar8 + 4) = iVar7 + 6;
  *(undefined2 *)(uVar8 + 0x3e) = unaff_r22;
  iVar5 = iVar5 - (int)&stack0x00000000;
  __saturate(iVar5);
  iVar5 = iVar5 - (int)&stack0x00000000;
  __saturate(iVar5);
  uVar6 = *(undefined4 *)(*(ushort *)(uVar8 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar8 + 0x18) + 0x18) + 8) = uVar6;
  __saturate(5);
  Ram00000011 = uVar6;
  __saturate(1);
  uVar6 = Ram00000011;
  uVar4 = Ram00000007;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(iVar5 + DAT_ffffe0ff);
  _DAT_00004a0b = unaff_lp;
  _DAT_00004a27 = unaff_lp;
  *(char *)(param_3 + 0x49f8) = (char)in_r17;
  __synchronize();
  uVar4 = Ram00000019;
  __saturate(0x2c);
  puVar9 = (undefined4 *)(uint)CONCAT11(DAT_00000045,DAT_00000044);
  puVar9[3] = _DAT_00000070;
  puVar9[4] = *puVar9;
  uVar3 = *(ushort *)(puVar9 + 6);
  *(undefined1 *)(param_3 + 0x49f8) = 0;
  iVar7 = *(int *)(uVar3 + 0x14);
  iVar10 = (int)(short)uVar3 * (int)(short)iVar7;
  __synchronize();
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  iVar5 = iVar5 - iVar7;
  __saturate(iVar5);
  iVar7 = *(int *)(uVar8 + 4);
  *(undefined4 *)(uVar8 + 4) = *(undefined4 *)(iVar10 + 0x18);
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  __saturate(iVar5 - iVar7);
  *(uint *)(uVar8 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar8 + 0x18) + 0x44) = *(undefined4 *)(uVar8 + 0x48);
  *(undefined1 *)(param_3 + 0x1078) = 0;
  __saturate(&stack0x252e0002);
  *(char *)(param_2 + 0x4000) = (char)&stack0x252e0002;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000427f6 @ 000427f6 (size 284) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000427f6(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_r1;
  int iVar3;
  undefined4 unaff_gp;
  undefined4 uVar4;
  int iVar5;
  undefined2 in_r15;
  undefined1 in_r17;
  int unaff_r20;
  int unaff_r28;
  int unaff_ep;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 unaff_lp;
  
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar1 + 0x60) = unaff_gp;
  __saturate(unaff_r20 + 5);
  uVar6 = (uint)*(ushort *)(uVar1 + 0x18);
  __saturate(unaff_r20 + 6);
  *(undefined2 *)(unaff_r28 + 0x2502) = unaff_lp;
  *(int *)(uVar6 + 4) = unaff_r20 + 6;
  *(undefined2 *)(uVar6 + 0x3e) = in_r15;
  __saturate(in_r1 - (int)&stack0x00000000);
  iVar3 = (in_r1 - (int)&stack0x00000000) - (int)&stack0x00000000;
  __saturate(iVar3);
  uVar4 = *(undefined4 *)(*(ushort *)(uVar6 + 0x18) + 4);
  *(undefined4 *)(*(ushort *)(*(ushort *)(uVar6 + 0x18) + 0x18) + 8) = uVar4;
  __saturate(5);
  Ram00000011 = uVar4;
  __saturate(1);
  uVar4 = Ram00000011;
  uVar2 = Ram00000007;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(iVar3 + DAT_ffffe0ff);
  _DAT_00004a0b = unaff_lp;
  _DAT_00004a27 = unaff_lp;
  *(undefined1 *)(param_3 + 0x49f8) = in_r17;
  __synchronize();
  uVar2 = Ram00000019;
  __saturate(0x2c);
  puVar7 = (undefined4 *)(uint)CONCAT11(DAT_00000045,DAT_00000044);
  puVar7[3] = _DAT_00000070;
  puVar7[4] = *puVar7;
  uVar1 = *(ushort *)(puVar7 + 6);
  *(undefined1 *)(param_3 + 0x49f8) = 0;
  iVar5 = *(int *)(uVar1 + 0x14);
  iVar8 = (int)(short)uVar1 * (int)(short)iVar5;
  __synchronize();
  uVar6 = (uint)*(ushort *)(iVar8 + 0x18);
  iVar3 = iVar3 - iVar5;
  __saturate(iVar3);
  iVar5 = *(int *)(uVar6 + 4);
  *(undefined4 *)(uVar6 + 4) = *(undefined4 *)(iVar8 + 0x18);
  uVar6 = (uint)*(ushort *)(uVar6 + 0x18);
  __saturate(iVar3 - iVar5);
  *(uint *)(uVar6 + 0x4c) = ~(uint)&stack0x00000000;
  *(undefined4 *)(*(ushort *)(uVar6 + 0x18) + 0x44) = *(undefined4 *)(uVar6 + 0x48);
  *(undefined1 *)(param_3 + 0x1078) = 0;
  __saturate(&stack0x252e0002);
  *(char *)(param_2 + 0x4000) = (char)&stack0x252e0002;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c0a @ 00042c0a (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042c0a(void)

{
  int in_r2;
  undefined4 unaff_gp;
  undefined2 in_r9;
  undefined4 uVar1;
  undefined1 in_r14;
  uint in_r15;
  uint in_r16;
  int in_r18;
  undefined1 unaff_r23;
  int unaff_ep;
  int iVar2;
  
  *(undefined2 *)(unaff_ep + 0x60) = in_r9;
  *(undefined1 *)(unaff_ep + 0x17) = in_r14;
  *(undefined4 *)(unaff_ep + 0x28) = unaff_gp;
  uVar1 = *(undefined4 *)(unaff_ep + 0x80);
  DAT_ffffad02 = 0;
  *(undefined1 *)(in_r2 + 8000) = 0xf6;
  iVar2 = (int)*(char *)(*(ushort *)(unaff_ep + 0x18) + 0x7c);
  *(short *)(iVar2 + 0x60) = (short)uVar1;
  *(undefined1 *)(iVar2 + 0x17) = unaff_r23;
  __saturate(0);
  __saturate(in_r15 / in_r16 + in_r18);
  *(undefined2 *)(iVar2 + 0x60) = *(undefined2 *)(iVar2 + 0x60);
  *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c3a @ 00042c3a (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042c3a(void)

{
  undefined4 unaff_gp;
  undefined2 in_r9;
  int in_r14;
  int in_r15;
  int in_r18;
  int unaff_r23;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0x60) = in_r9;
  *(char *)(unaff_ep + 0x17) = (char)in_r14;
  __saturate(unaff_r23 - in_r14);
  __saturate(in_r15 + in_r18);
  *(undefined2 *)(unaff_ep + 0x60) = *(undefined2 *)(unaff_ep + 0x60);
  *(undefined4 *)(unaff_ep + 0x28) = unaff_gp;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00042c7c @ 00042c7c (size 106) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00042c7c(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  uint in_r1;
  uint in_r2;
  undefined4 uVar1;
  int unaff_tp;
  int in_r10;
  undefined1 in_r16;
  undefined4 in_r19;
  uint uVar2;
  int unaff_r22;
  uint uVar3;
  
  *(undefined1 *)(unaff_tp + 0xb0) = in_r16;
  uVar3 = in_r1 | 0x2517;
  __saturate(uVar3 - 0x2520);
  uVar1 = *(undefined4 *)(uVar3 - 0x24f0);
  if (-1 < (int)(uVar3 - 0x2520)) {
    *(undefined2 *)(uVar3 - 0x24c0) = param_4;
    *(undefined4 *)(uVar3 - 0x24f8) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((byte)(&DAT_ffffe680)[in_r1] < 0xb) {
    *(undefined4 *)(unaff_r22 + -0xcc6) = in_r19;
    __saturate(uVar3 - 0x2525);
                    /* WARNING: Could not recover jumptable at 0x00042cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00042cae + *(short *)(&DAT_00042cae + in_r10 * 2) * 2))();
    return;
  }
  *(undefined1 *)(param_3 + 0x251a) = in_r16;
  *(undefined1 *)(uVar3 - 0x24e0) = 0;
  *(undefined1 *)(param_3 + 0x251b) = in_r16;
  *(undefined1 *)(param_3 + 0x251c) = in_r16;
  *(undefined1 *)(param_3 + 0x251d) = in_r16;
  *(undefined2 *)(uVar3 - 0x24c0) = 0;
  *(undefined1 *)(param_3 + 0x251e) = in_r16;
  uVar2 = *(uint *)(uVar3 - 0x251c);
  __saturate(0xb);
  uVar3 = (uint)*(ushort *)(*(ushort *)(uVar3 - 0x2508) + 0x18);
  uRamffffffff = in_r16;
  *(short *)(uVar3 + 0x92) = (short)&stack0x00000000;
  *(short *)(*(ushort *)(uVar3 + 0x18) + 0x98) = (short)&stack0x00000000;
  *(undefined1 *)(param_3 + 0x1172) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x00042d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00042d9c + *(short *)(&DAT_00042d9c + (uVar2 | in_r2 | in_r2) * 2) * 2))();
  return;
}


// ==== FUN_00042d00 @ 00042d00 (size 156) ====

void FUN_00042d00(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_r2;
  undefined1 in_r16;
  uint uVar1;
  int unaff_ep;
  uint uVar2;
  
  *(undefined1 *)(param_3 + 0x251c) = in_r16;
  *(undefined1 *)(param_3 + 0x251d) = in_r16;
  *(undefined2 *)(unaff_ep + 0x60) = 0;
  *(undefined1 *)(param_3 + 0x251e) = in_r16;
  uVar1 = *(uint *)(unaff_ep + 4);
  __saturate(0xb);
  uVar2 = (uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
  uRamffffffff = in_r16;
  *(short *)(uVar2 + 0x92) = (short)&stack0x00000000;
  *(short *)(*(ushort *)(uVar2 + 0x18) + 0x98) = (short)&stack0x00000000;
  *(undefined1 *)(param_3 + 0x1172) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x00042d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00042d9c + *(short *)(&DAT_00042d9c + (uVar1 | in_r2 | in_r2) * 2) * 2))();
  return;
}


// ==== FUN_00043a40 @ 00043a40 (size 92) ====

void FUN_00043a40(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int in_r1;
  undefined4 unaff_gp;
  undefined4 uVar2;
  int unaff_tp;
  undefined2 in_r15;
  uint in_r16;
  int in_r18;
  uint unaff_r22;
  undefined1 unaff_r23;
  int unaff_r28;
  int unaff_ep;
  uint uVar3;
  
  *(undefined4 *)(unaff_ep + 0xc4) = unaff_gp;
  *(undefined2 *)(unaff_ep + 0xc) = in_r15;
  uVar3 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar3 + 0xcc) = unaff_gp;
  uVar2 = *(undefined4 *)(uVar3 + 0xc4);
  uVar1 = *(ushort *)(uVar3 + 0x18);
  *(undefined4 *)(uVar1 + 0x88) = uVar2;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined4 *)(uVar3 + 0xcc) = uVar2;
  *(short *)(uVar3 + 0xac) = (short)(in_r16 / unaff_r22);
  __saturate(in_r1 - in_r16 / unaff_r22);
  uVar2 = *(undefined4 *)(uVar3 + 0xc4);
  *(undefined4 *)(uVar3 + 0xc4) = uVar2;
  *(undefined4 *)(uVar3 + 0xc4) = uVar2;
  __saturate(unaff_r28 + -0x2545);
  __saturate(unaff_r28 + -0x254a);
  __saturate(&stack0x00000000 + in_r18);
  *(undefined1 *)(param_3 + 0x4a88) = unaff_r23;
  __saturate(-(int)*(char *)(param_3 + -0xf84));
                    /* WARNING: Could not recover jumptable at 0x00043a9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00043a9c + *(short *)(&DAT_00043a9c + unaff_tp * 2) * 2))();
  return;
}


// ==== FUN_00044c9c @ 00044c9c (size 844) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00044c9c(uint param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  short sVar6;
  undefined1 uVar7;
  uint in_r1;
  short in_r2;
  undefined1 *puVar8;
  uint unaff_tp;
  uint in_r10;
  undefined2 uVar9;
  int in_r13;
  uint in_r15;
  uint uVar10;
  uint in_r16;
  undefined2 uVar11;
  uint in_r17;
  uint uVar12;
  uint in_r18;
  uint unaff_r20;
  uint uVar13;
  uint unaff_r21;
  uint uVar14;
  uint unaff_r22;
  uint unaff_r23;
  uint unaff_r24;
  uint uVar15;
  undefined4 unaff_r27;
  int unaff_r28;
  uint unaff_ep;
  int iVar16;
  int *piVar17;
  uint uVar18;
  short *psVar19;
  int unaff_lp;
  int iVar20;
  uint uVar21;
  uint in_PSW;
  
  *(char *)(param_3 + 0x25ce) = (char)in_r16;
  sVar3 = *(short *)(unaff_ep + 0x48);
  *(short *)(unaff_r28 + 0x21b2) = (short)unaff_lp;
  sVar6 = in_r2 * 8;
  uVar13 = (uint)*(short *)(unaff_ep + 6);
  *(uint *)(unaff_ep + 0x5c) = in_r15 / in_r16;
  uVar14 = unaff_r21 | in_r1;
  do {
    *(short *)(unaff_ep + 0x82) = (short)param_2;
  } while (((byte)(in_PSW >> 4) & 1) == 1);
  *(undefined1 *)(in_r10 + 0x258c) = 0xf6;
  *(short *)(unaff_r28 + 0x2580) = (short)unaff_ep;
  if (in_r10 < 0xfffffff0 || (unaff_ep & unaff_r28 - 10U) == 0) {
    __saturate(*(ushort *)(unaff_ep + 0x18) + 0xb);
    *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
    sVar3 = *(short *)(unaff_ep + 0xf6);
    uVar7 = (undefined1)sVar3;
    *(undefined1 *)(in_r13 + 0x14) = uVar7;
    *(undefined1 *)(param_3 + 0x1078) = uVar7;
    __saturate(sVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x00044d06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00044d08 + *(short *)(&DAT_00044d08 + in_r2 * 0x10) * 2))();
    return;
  }
  iVar16 = (int)*(char *)(unaff_ep + 0x7c);
  puVar8 = &DAT_ffffe08a + unaff_tp;
  uVar9 = *(undefined2 *)(iVar16 + 0x62);
  __saturate(-10 - (int)puVar8);
  piVar17 = (int *)(int)*(short *)(iVar16 + 0x10);
  piVar17[0x10] = (int)(in_r17 | unaff_r22) >> 0x1c;
  iVar20 = (int)((longlong)unaff_lp * (longlong)iVar16) - param_2;
  __saturate(iVar20);
  *(char *)(sVar3 + 0x2608) = (char)((ulonglong)((longlong)unaff_lp * (longlong)iVar16) >> 0x20);
  sVar4 = *(short *)((int)piVar17 + 0xaa);
  *(short *)(piVar17 + 0x18) = sVar3;
  *(undefined1 *)((int)piVar17 + 0x17) = *(undefined1 *)((int)piVar17 + 0x17);
  *piVar17 = param_3;
  *(undefined2 *)((int)piVar17 + 0x92) = uVar9;
  uVar21 = iVar20 - param_1;
  uVar18 = (uint)piVar17 | uVar14;
  uVar9 = (undefined2)*(undefined4 *)(uVar18 + 0x60);
  *(undefined2 *)(uVar18 + 0x60) = uVar9;
  iVar20 = (int)DAT_00007347;
  *(char *)(uVar18 + 0x47) = (char)unaff_r23;
  __saturate(unaff_r23 + param_2);
  iVar16 = (in_r15 / in_r16) / ((uint)piVar17 ^ 0xfffffff3 | unaff_r23) - 0xf;
  __saturate(iVar16);
  uVar10 = -iVar16;
  __saturate(uVar10);
  __saturate(sVar4 - iVar20);
  sVar3 = *(short *)(uVar18 + 0x62);
  *(short *)(uVar18 + 0x5c) = (short)param_3;
  uVar12 = unaff_tp - 0x26d0;
  uVar15 = ~unaff_r20 | uVar21 | (int)*(short *)(uVar18 + 2);
  DAT_00000100 = SUB41(puVar8,0);
  *(undefined2 *)(uVar18 + 0x60) = uVar9;
  cVar2 = DAT_00007317;
  *(char *)(uVar18 + 0x17) = (char)(unaff_r23 + param_2);
  if (puVar8 < (undefined1 *)0x75a) {
    *(short *)(uVar18 + 0x9a) = sVar3;
    uVar18 = uVar18 | unaff_r24;
    uVar9 = (undefined2)*(undefined4 *)(uVar18 + 0x60);
    *(undefined2 *)(uVar18 + 0x60) = uVar9;
    *(char *)(uVar18 + 0x47) = (char)unaff_r23;
    __saturate(unaff_r23 + param_2);
    __saturate(uVar10 - 0xf);
    __saturate(-(uVar10 - 0xf));
    *(short *)(uVar18 + 0x5c) = (short)in_r1 + -0x7ee9;
    DAT_00000100 = *(undefined1 *)(uVar18 + 0x11);
    *(undefined2 *)(in_r1 - 0x7e89) = uVar9;
    uVar9 = *(undefined2 *)(in_r1 - 0x7e89);
    *(char *)(in_r1 - 0x7ed2) = (char)(unaff_r23 + param_2);
    *(undefined2 *)(in_r1 - 0x7e89) = uVar9;
    *(undefined1 *)(in_r1 - 0x7ed2) = *(undefined1 *)(in_r1 - 0x7ed2);
    uVar10 = unaff_tp | 0xe410;
    uVar12 = (int)(unaff_tp + 0x58da ^ in_r1) >> 10;
    iVar16 = *(int *)(&DAT_ffff820f + in_r1);
    *(uint *)(in_r1 - 0x7e75) = uVar21 - unaff_tp;
    uVar18 = (int)*(char *)(in_r1 - 0x7eae) - 5;
    __saturate(uVar18);
    cVar2 = *(char *)(in_r1 - 0xfc6e);
    __saturate(iVar16 + 0xb);
    uVar15 = (uint)*(char *)(*(char *)(in_r1 - 0x7eae) + 0x3a);
  }
  uVar21 = uVar13 - param_2;
  uVar9 = *(undefined2 *)(*(ushort *)(uVar18 + 0x18) + 0xe4);
  __saturate(in_r1 - uVar10);
  uVar18 = (uint)*(ushort *)(*(ushort *)(uVar18 + 0x18) + 0x18);
  if (((int)(in_r1 - uVar10) < 0) && (-1 < (int)(uVar15 & (int)cVar2 - 10U))) {
    *(short *)(uVar18 + 0x2c) = (short)(in_r1 - uVar10);
    if (uVar18 < 0xfffffffc) {
      *(undefined2 *)(uVar18 + 0x60) = *(undefined2 *)(uVar18 + 0xd0);
      uVar11 = (undefined2)((int)uVar12 >> 10);
      uVar5 = *(ushort *)(uVar18 + 0x18);
      if ((uVar12 & 0x200) == 0) {
        unaff_r23 = (uint)*(ushort *)(&DAT_ffffa402 + uVar13);
        ((short *)~uVar13)[0x1d] = sVar6;
        psVar19 = (short *)(int)*(short *)~uVar13;
        psVar19[0x1d] = sVar6;
        uVar18 = (uint)*psVar19;
        uVar14 = uVar14 | param_1;
        uVar9 = *(undefined2 *)(uVar18 + 0x86);
        *(short *)(uVar18 + 0x3a) = sVar6;
        goto LAB_00044eee;
      }
      *(short *)(uVar5 + 0xc) = (short)(unaff_tp | 0x8012);
      uVar18 = (uint)*(ushort *)(uVar5 + 0x1a);
      __saturate(in_r1 - (unaff_tp | 0x8012));
      goto LAB_00044e7e;
    }
  }
  else {
LAB_00044e7e:
    uVar12 = (uint)*(char *)(in_r18 - 0x5bff);
    *(int *)(uVar18 + 4) = (int)*(short *)(uVar18 + 0x8e);
    uVar9 = *(undefined2 *)(uVar18 + 0xc4);
    *(uint *)(uVar18 + 0x24) = in_r18;
  }
  uVar11 = (undefined2)uVar12;
  __saturate(in_r18 + 0xf84);
  if (in_r18 < 0xfffff07c) {
    *(undefined2 *)(uVar18 + 0x4c) = *(undefined2 *)(uVar18 + 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00044eee:
  uVar13 = (uint)*(ushort *)(*(int *)(uVar18 + 0xf8) + 0x18);
  *(char *)(uVar13 + 0x27) = (char)*(undefined2 *)(uVar18 + 0x4e);
  iVar16 = (int)*(short *)(uVar13 + 0xf8);
  *(ushort *)(iVar16 + 0xae) = (ushort)(~uVar21 / 0xfffffff0) | (ushort)uVar21;
  *(undefined2 *)(iVar16 + 0xae) = uVar11;
  bVar1 = (byte)(uVar14 >> 0x1f);
  if ((byte)(in_r18 >> 0x1f) != bVar1 && bVar1 == (byte)(in_r18 - uVar14 >> 0x1f)) {
    *(undefined2 *)(iVar16 + 0x42) = uVar9;
    *(undefined2 *)(iVar16 + 0x88) = *(undefined2 *)(iVar16 + 0x88);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(iVar16 + 0x40) = uVar11;
  __saturate(0);
  cVar2 = *(char *)(iVar16 + 0x17);
  *(char *)(iVar16 + 0x17) = cVar2;
  iVar20 = unaff_r23 - (int)cVar2;
  __saturate(iVar20);
  uVar13 = (uint)*(ushort *)(iVar16 + 0x18);
  __saturate(0xfffffff0);
  *(char *)(uVar13 + 0x17) = (char)iVar20;
  *(byte *)(uVar13 + 0x47) = (byte)unaff_r23;
  __saturate(unaff_r23 + uVar21);
  __saturate(*(int *)(uVar13 + 8) + 1);
  *(undefined2 *)(uVar13 + 0x50) = *(undefined2 *)(uVar13 + 0x60);
  iVar16 = (int)*(char *)(uVar13 + 0x7c);
  sVar6 = *(short *)(iVar16 + 0x60);
  *(short *)(iVar16 + 0x60) = sVar6;
  *(char *)(iVar16 + 0x27) = (char)(unaff_r23 + uVar21);
  uVar9 = *(undefined2 *)(iVar16 + 0x8e);
  bVar1 = *(byte *)(iVar16 + 0x17);
  *(byte *)(iVar16 + 0x17) = bVar1;
  uVar13 = (uint)*(ushort *)(iVar16 + 0x18);
  *(int *)(uVar13 + 0x40) = (int)sVar6;
  *(undefined2 *)(uVar13 + 0x8e) = uVar9;
  *(byte *)(uVar13 + 0x17) = bVar1 | (byte)unaff_r23;
                    /* WARNING: Could not recover jumptable at 0x00044fe2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00044fe4 + *(short *)(&DAT_00044fe4 + sVar3 * 2) * 2))
            (param_1,uVar21,(int)*(short *)(*(ushort *)(uVar13 + 0x18) + 0x88),
             (int)*(short *)(uVar13 + 0x50));
  return;
}


// ==== FUN_000452e6 @ 000452e6 (size 576) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000454a0) */
/* WARNING: Removing unreachable block (ram,0x000454d2) */

void FUN_000452e6(short param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  undefined1 uVar7;
  uint in_r1;
  undefined2 in_r2;
  undefined2 in_r10;
  int iVar8;
  uint uVar9;
  uint in_r16;
  uint in_r17;
  uint in_r19;
  undefined4 unaff_r20;
  int unaff_r23;
  undefined4 unaff_r27;
  int unaff_r29;
  int unaff_ep;
  uint uVar10;
  short *psVar11;
  int iVar12;
  undefined2 unaff_lp;
  
  *(undefined2 *)(unaff_ep + 0x54) = in_r2;
  *(undefined4 *)(unaff_ep + 0x7c) = param_4;
  *(short *)(unaff_ep + 0x60) = (short)param_4;
  *(undefined2 *)(unaff_ep + 0x54) = in_r2;
  uVar3 = *(undefined2 *)(unaff_ep + 0x86);
  *(undefined1 *)(unaff_ep + 0x7f) = 0;
  *(undefined2 *)(unaff_ep + 0x56) = in_r2;
  *(undefined2 *)(unaff_ep + 0x54) = in_r2;
  *(undefined4 *)(unaff_ep + 0x38) = unaff_r20;
  uVar10 = (uint)*(ushort *)(unaff_ep + 0x1a);
  *(undefined2 *)(uVar10 + 0x54) = in_r2;
  __saturate(param_2);
  uVar9 = 0xffffffff / in_r16 + in_r16;
  __saturate(uVar9);
  __saturate(param_2 - in_r19);
  *(undefined2 *)(uVar10 + 0x86) = uVar3;
  *(undefined1 *)(uVar10 + 0x7f) = 0;
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  *(undefined1 *)(uVar10 + 0x7f) = 0;
  *(undefined2 *)(uVar10 + 0x52) = in_r2;
  uVar10 = (uint)*(ushort *)(uVar10 + 0x1a);
  *(undefined2 *)(uVar10 + 0x54) = in_r2;
  __synchronize();
  iVar8 = param_2 - (~in_r19 >> 7);
  __saturate(iVar8);
  __saturate(uVar9 / in_r16 + in_r16);
  __saturate(iVar8 - in_r19);
  *(undefined2 *)(uVar10 + 0x54) = in_r2;
  *(undefined2 *)(uVar10 + 0x86) = *(undefined2 *)(uVar10 + 0x86);
  __synchronize();
  uVar9 = (uint)*(ushort *)(uVar10 + 0x18);
  uVar3 = *(undefined2 *)(uVar9 + 0x86);
  __synchronize();
  uVar6 = *(ushort *)(uVar9 + 0x1a);
  *(undefined2 *)(uVar9 + 0x52) = in_r2;
  *(undefined2 *)(unaff_r29 + 0x14aa) = unaff_lp;
  *(undefined2 *)(uVar9 + 0x56) = in_r2;
  *(undefined2 *)(uVar9 + 0x8e) = in_r10;
  *(undefined2 *)(uVar9 + 0x52) = in_r2;
  *(undefined2 *)(uVar9 + 0x52) = in_r2;
  *(undefined2 *)(uVar9 + 0x8e) = uVar3;
  *(undefined2 *)(uVar9 + 0x56) = in_r2;
  iVar8 = *(int *)(uVar9 + 0xf8);
  *(short *)(iVar8 + 0x3e) = (short)unaff_r23;
  uVar9 = uVar6 + 0x7c57 + unaff_r23 * -2;
  psVar11 = (short *)(uint)*(ushort *)(*(ushort *)(iVar8 + 0x18) + 0x18);
  bVar1 = uVar9 < (uint)(int)*psVar11;
  sVar4 = psVar11[100];
  psVar11[0x30] = sVar4;
  iVar8 = (int)psVar11[0x2a];
  iVar12 = *(int *)(psVar11 + 0x7c);
  if (bVar1 || uVar9 == (int)*psVar11) {
    sVar4 = *(short *)(iVar12 + 0xda);
    bVar1 = in_r1 < in_r17;
    __saturate(in_r1 - in_r17);
    uVar9 = (uint)*(ushort *)(iVar12 + 0x18);
    if (in_r1 == in_r17) {
      *(short *)(uVar9 + 0x50) = (short)*(char *)(uVar9 + 10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(ushort *)(iVar12 + 0x4e) = ~(ushort)in_r19;
    uVar9 = (uint)*(ushort *)(*(ushort *)(iVar12 + 0x18) + 0x18);
  }
  iVar12 = *(int *)(uVar9 + 0xf8);
  if (bVar1) {
    uVar9 = *(uint *)(iVar12 + 0xf8);
  }
  else {
    *(short *)(iVar12 + 0x80) = sVar4;
    uVar9 = (uint)*(ushort *)(iVar12 + 0x18);
  }
  *(short *)(unaff_r29 + 0x131c) = (short)unaff_r27;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
  sVar4 = *(short *)(uVar9 + 0xd4);
  __saturate(uVar9 - 5);
  cVar2 = *(char *)(iVar8 + -0x7d85);
  __saturate(*(ushort *)(uVar9 + 0x1a) + 0xb);
  *(undefined4 *)(uVar9 + 0x77) = unaff_r27;
  sVar5 = *(short *)(uVar9 + 0xf1);
  uVar7 = (undefined1)sVar5;
  *(undefined1 *)(*(short *)(uVar9 + 0x22) + 0x14) = uVar7;
  __saturate(cVar2 + -0x2190);
  *(undefined1 *)(iVar8 + 0x1078) = uVar7;
  __saturate(sVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00045534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00045536 + *(short *)(&DAT_00045536 + ~in_r19 * 2) * 2))
            ((int)param_1,param_2,iVar8,(int)sVar4);
  return;
}


// ==== FUN_00045df4 @ 00045df4 (size 80) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00045df4(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 in_r16;
  int unaff_r27;
  int unaff_ep;
  
  __saturate(*(char *)(unaff_ep + 0x3b) + -5);
  __saturate(*(ushort *)(unaff_ep + 0x1a) + 0xb);
  *(int *)(*(char *)(unaff_ep + 0x3b) + 0x77) = unaff_r27;
  __saturate(unaff_r27 + 0x78b8);
  *(undefined1 *)(param_3 + 0x14) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00046756 @ 00046756 (size 814) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00046acc) overlaps instruction at (ram,0x00046aca)
    */
/* WARNING: Removing unreachable block (ram,0x000467d2) */
/* WARNING: Removing unreachable block (ram,0x000467e6) */
/* WARNING: Removing unreachable block (ram,0x0004685c) */
/* WARNING: Removing unreachable block (ram,0x0004687a) */
/* WARNING: Removing unreachable block (ram,0x0004696e) */
/* WARNING: Removing unreachable block (ram,0x00046880) */
/* WARNING: Removing unreachable block (ram,0x0004688c) */
/* WARNING: Removing unreachable block (ram,0x0004689e) */
/* WARNING: Removing unreachable block (ram,0x0004696c) */
/* WARNING: Removing unreachable block (ram,0x0004697c) */
/* WARNING: Removing unreachable block (ram,0x00046982) */
/* WARNING: Removing unreachable block (ram,0x00046990) */
/* WARNING: Removing unreachable block (ram,0x0004699e) */
/* WARNING: Removing unreachable block (ram,0x000469a4) */
/* WARNING: Removing unreachable block (ram,0x000469c2) */
/* WARNING: Removing unreachable block (ram,0x000469c4) */
/* WARNING: Removing unreachable block (ram,0x000469d0) */
/* WARNING: Removing unreachable block (ram,0x00046a02) */
/* WARNING: Removing unreachable block (ram,0x00046a0c) */
/* WARNING: Removing unreachable block (ram,0x00046a2a) */
/* WARNING: Removing unreachable block (ram,0x00046a3c) */
/* WARNING: Removing unreachable block (ram,0x00046a4a) */
/* WARNING: Removing unreachable block (ram,0x00046a4e) */
/* WARNING: Removing unreachable block (ram,0x00046a9a) */
/* WARNING: Removing unreachable block (ram,0x00046a52) */
/* WARNING: Removing unreachable block (ram,0x00046a60) */
/* WARNING: Removing unreachable block (ram,0x00046a72) */
/* WARNING: Removing unreachable block (ram,0x00046a82) */
/* WARNING: Removing unreachable block (ram,0x00046a84) */
/* WARNING: Removing unreachable block (ram,0x00046a8a) */
/* WARNING: Removing unreachable block (ram,0x00046aa6) */
/* WARNING: Removing unreachable block (ram,0x00046aa8) */
/* WARNING: Removing unreachable block (ram,0x00046aaa) */
/* WARNING: Removing unreachable block (ram,0x00046ac2) */
/* WARNING: Removing unreachable block (ram,0x00046aca) */
/* WARNING: Removing unreachable block (ram,0x00046b8c) */
/* WARNING: Removing unreachable block (ram,0x00046b96) */
/* WARNING: Removing unreachable block (ram,0x00046bba) */
/* WARNING: Removing unreachable block (ram,0x00046acc) */
/* WARNING: Removing unreachable block (ram,0x00046ad0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00046756(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined1 uVar4;
  code *in_r1;
  uint in_r2;
  code *pcVar5;
  int unaff_tp;
  int in_r10;
  int in_r13;
  undefined4 in_r14;
  uint in_r15;
  uint uVar6;
  int iVar7;
  int unaff_r20;
  uint unaff_r22;
  uint unaff_r25;
  int unaff_r26;
  uint uVar8;
  uint unaff_r27;
  int unaff_r28;
  int iVar9;
  int unaff_ep;
  uint unaff_lp;
  ushort *unaff_CTBP;
  
  do {
    pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
    uVar6 = ~in_r2;
    in_r15 = in_r15 & unaff_r25;
    in_r1[100] = SUB41(uVar6,0);
    if (-1 < (int)in_r15) goto LAB_00046728;
    in_r10 = func_0xfff947ec();
    unaff_r28 = unaff_r28 + -0x14;
    pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
    iVar7 = uVar6 - (int)pcVar5;
    __saturate(iVar7);
    while( true ) {
      uVar6 = iVar7 + 2;
      __saturate(uVar6);
      in_r15 = in_r15 & unaff_r25;
      if (-1 < (int)in_r15) break;
      unaff_lp = (uint)(byte)(&DAT_ffffe081)[unaff_r20];
      iVar9 = (unaff_r20 - unaff_r28) + -10;
      iVar7 = uVar6 - (int)*(char *)(unaff_ep + 0x25);
      __saturate(iVar7);
      iVar7 = iVar7 + 2;
      __saturate(iVar7);
      while( true ) {
        in_r15 = in_r15 & unaff_r25;
        if (-1 < (int)in_r15) {
          unaff_r28 = in_r10 - iVar9;
          __saturate(unaff_r28);
          goto code_r0x00046754;
        }
        func_0xfff9481e();
        pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
        *(char *)(param_3 + 0x8c4) = (char)iVar7;
        __saturate(iVar7);
        __saturate(iVar7 - (int)pcVar5);
        iVar7 = (iVar7 - (int)pcVar5) + 2;
        __saturate(iVar7);
        in_r10 = (*(code *)((int)unaff_CTBP + (uint)unaff_CTBP[0x12]))();
        unaff_r28 = in_r10 - ((unaff_tp - iVar9) + -10);
        __saturate(unaff_r28);
        in_r15 = in_r15 & unaff_r25;
        if (-1 < (int)in_r15) break;
        in_r10 = func_0xfff8e8b6();
        cVar2 = *(char *)(unaff_ep + 0x25);
        iVar7 = iVar7 - cVar2;
        __saturate(iVar7);
        iVar7 = iVar7 + 2;
        __saturate(iVar7);
        unaff_r25 = unaff_r25 & 0xffff;
        *(char *)(param_3 + 0x8c4) = (char)iVar7;
        iVar9 = in_r10 - (unaff_r28 + -10);
        __saturate(iVar9);
        in_r15 = in_r15 & unaff_r25;
        unaff_lp = (uint)*(ushort *)(cVar2 + 0x194);
      }
    }
    in_r1 = in_r1 + (int)pcVar5;
    __saturate(in_r1);
    while( true ) {
      __saturate(uVar6);
      __saturate(uVar6 - (int)pcVar5);
      iVar7 = (uVar6 - (int)pcVar5) + 2;
      __saturate(iVar7);
      in_r15 = in_r15 & unaff_r25;
      uVar6 = (uint)((int)in_r15 < 0) << 1;
      if ((int)in_r15 < 0) break;
      in_r10 = (*pcVar5)();
      while( true ) {
        uVar8 = unaff_r27;
        if ((uVar6 >> 1 & 1) == 0) goto LAB_000466d0;
        unaff_lp = 0x46716;
        in_r10 = func_0xfff94794();
        pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
        *(char *)(param_3 + 0x8c4) = (char)iVar7;
        __saturate(iVar7);
        __saturate(iVar7 - (int)pcVar5);
        uVar6 = (iVar7 - (int)pcVar5) + 2;
        __saturate(uVar6);
LAB_00046728:
        unaff_r28 = unaff_r28 + -10;
        in_r15 = in_r15 & unaff_r25;
        bVar1 = false;
        uVar8 = unaff_r27;
        if ((int)in_r15 < 0) break;
        while (unaff_r27 = unaff_lp, !bVar1) {
          __saturate(unaff_r27 - (int)in_r1);
          uVar6 = (uint)(0xb < uVar6) << 3;
          *(short *)(unaff_ep + 0x28) = (short)&stack0x00000000;
          in_r15 = unaff_r22;
          in_r10 = (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
          if (((byte)(uVar6 >> 3) & 1) == 1) {
            FUN_0004e8a2();
                    /* WARNING: Could not recover jumptable at 0x00046684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_00046686 + *(short *)(&DAT_00046686 + in_r2 * 2) * 2))();
            return;
          }
          *(char *)(unaff_ep + 3) = (char)in_r14;
          unaff_r28 = (int)*(char *)(param_3 + -0x7d85);
          unaff_r26 = unaff_r26 + 0xb;
          __saturate(unaff_r26);
          *(uint *)(unaff_ep + 0x7c) = uVar8;
LAB_000466d0:
          sVar3 = *(short *)(unaff_ep + 0xf6);
          uVar4 = (undefined1)sVar3;
          *(undefined1 *)(in_r13 + 0x126) = uVar4;
          *(undefined1 *)(in_r13 + 0x14) = uVar4;
          iVar7 = (int)sVar3 - (int)pcVar5;
          __saturate(iVar7);
          bVar1 = iVar7 + 2 < 0;
          uVar6 = iVar7 + 2;
          __saturate(uVar6);
          unaff_r20 = 2;
          *(char *)(param_3 + 0x8c4) = (char)uVar6;
          unaff_lp = (uint)*(ushort *)(pcVar5 + 0x192);
        }
        __saturate(in_r2 - unaff_r28);
        unaff_r28 = (in_r10 - (in_r2 - unaff_r28)) + -10;
        pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
        *(char *)(param_3 + 0x8c4) = (char)uVar6;
        __saturate(uVar6);
        __saturate(uVar6 - (int)pcVar5);
        iVar7 = (uVar6 - (int)pcVar5) + 2;
        __saturate(iVar7);
        in_r15 = in_r15 & unaff_r25;
        uVar6 = (uint)((int)in_r15 < 0) << 1;
        in_r1[100] = SUB41(iVar7,0);
      }
      unaff_r28 = (unaff_r20 - unaff_r28) + -10;
      pcVar5 = (code *)(int)*(char *)(unaff_ep + 0x25);
      *(char *)(param_3 + 0x8c4) = (char)uVar6;
    }
    unaff_lp = 0x46754;
    in_r10 = func_0xfff947da();
code_r0x00046754:
    unaff_r28 = unaff_r20 - unaff_r28;
  } while( true );
}


// ==== FUN_000469d2 @ 000469d2 (size 410) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00046acc) overlaps instruction at (ram,0x00046aca)
    */
/* WARNING: Removing unreachable block (ram,0x00046a3c) */
/* WARNING: Removing unreachable block (ram,0x00046acc) */

void FUN_000469d2(undefined4 param_1,short param_2,short *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  int in_r1;
  short in_r2;
  uint unaff_gp;
  int iVar6;
  ushort uVar7;
  short in_r13;
  undefined1 in_r14;
  int iVar8;
  uint in_r16;
  uint uVar9;
  int iVar10;
  uint unaff_r20;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar11;
  short *unaff_ep;
  short unaff_lp;
  uint uVar12;
  uint uVar13;
  
  *(undefined1 *)((int)unaff_ep + 0x17) = in_r14;
  iVar10 = (int)*param_3;
  uVar9 = in_r16 - unaff_gp;
  __saturate(uVar9);
  uVar12 = (int)unaff_lp * (int)(short)unaff_gp;
  iVar6 = (int)param_2;
  unaff_ep[0x30] = unaff_ep[0x23];
  if (uVar9 == 0) {
    *(undefined1 *)((int)unaff_ep + 0x17) = *(undefined1 *)((int)unaff_ep + 0x17);
    uVar7 = unaff_ep[0x25];
    iVar10 = (int)*param_3;
    uVar9 = -unaff_gp;
    __saturate(uVar9);
    bVar1 = (byte)(unaff_gp >> 0x1f);
    uVar13 = (uint)(uVar12 < unaff_gp) << 3 | (uint)(uVar12 - unaff_gp == 0);
    if ((int)(uVar12 - unaff_gp) < 0 ==
        ((byte)(uVar12 >> 0x1f) != bVar1 && bVar1 == (byte)(uVar12 - unaff_gp >> 0x1f)) &&
        !(bool)((byte)uVar13 & 1)) {
      *(uint *)(unaff_ep + 0x10) = uVar9;
      uVar12 = (int)(short)uVar12 * (int)(short)unaff_gp;
    }
    else {
LAB_00046a72:
      unaff_ep[0x1d] = in_r13;
      in_r2 = in_r2 * 10;
      uVar9 = uVar9 | unaff_r23;
      param_3 = (short *)(int)unaff_ep[0x27];
      unaff_ep[0x30] = uVar7;
      uVar11 = *(uint *)(unaff_ep + 0x7c);
      if (SUB41(uVar13 >> 3,0) || uVar9 == 0) goto LAB_00046aca;
    }
    unaff_ep = *(short **)(unaff_ep + 0x7c);
code_r0x00046a8a:
    unaff_ep[8] = in_r2;
    iVar6 = (int)(char)unaff_ep[0x12];
    *(uint *)(unaff_ep + 0x3a) = uVar12;
    __saturate((ushort)unaff_ep[0xd] + 0xb);
    uVar11 = ~uVar12;
    bVar2 = -1 < (int)uVar12;
    uVar9 = unaff_r22;
    uVar13 = uVar11;
  }
  else {
    uVar7 = (ushort)*(byte *)(unaff_r20 + 0x4c22);
    if (unaff_gp <= in_r16) goto code_r0x00046a8a;
    unaff_ep = (short *)(uint)(ushort)unaff_ep[0xc];
    unaff_ep[0x29] = (short)&stack0x00000000;
    bVar2 = (int)uVar9 < 0;
    uVar11 = *(uint *)(unaff_ep + 0x7c);
    uVar13 = uVar9;
    if (!bVar2) {
      unaff_ep[0x30] = uVar7;
      sVar4 = *unaff_ep;
      unaff_ep = *(short **)(unaff_ep + 0x7c);
      unaff_ep[0x2a] = (short)&stack0x00000000;
      uVar13 = (uint)(unaff_r20 < (uint)(int)sVar4) << 3;
      goto LAB_00046a72;
    }
  }
  if (bVar2 || uVar13 == 0) {
    iVar6 = in_r1 - unaff_ep[0x30];
    __saturate(iVar6);
    *(undefined2 *)((uint)unaff_ep ^ unaff_r20) = (short)iVar6;
    ((undefined2 *)((uint)unaff_ep ^ unaff_r20))[0x21] = (short)param_3;
    __saturate(-iVar6);
  }
  else {
    *(char *)((int)unaff_ep + 0x27) = (char)unaff_ep[0x27];
    *(uint *)(unaff_ep + 0x12) = uVar9;
    if ((int)((uint)(int)unaff_ep[0x35] / uVar9) < 0 ==
        ((int)unaff_ep[0x35] == 0x80000000 && uVar9 == 0xffffffff || uVar9 == 0)) {
      unaff_r23 = (uint)*(char *)((int)unaff_ep + 0x77);
      *(char *)((int)unaff_ep + 0x77) = *(char *)((int)unaff_ep + 0x77);
LAB_00046aca:
      cVar3 = *(char *)(uVar9 + 0x7e85);
      *(int *)(unaff_ep + 4) = (int)cVar3;
      unaff_ep[0x56] = -1;
      cVar5 = DAT_ffffe4ff;
      unaff_ep[0x57] = -1;
      __saturate(unaff_r23 - iVar10);
      __saturate(-(int)DAT_ffffe0ff);
      __saturate(in_r1 + DAT_ffffe0ff);
      *unaff_ep = (short)DAT_ffffe4ff;
      unaff_ep[1] = (short)cVar5;
      iVar8 = (unaff_r23 - iVar10) + 7;
      __saturate(iVar8);
      __saturate((iVar8 >> 7) - iVar6);
      __saturate((int)unaff_ep[6] + (int)cVar3);
      *(int *)(unaff_ep + -0x663) = iVar10;
      __saturate((int)unaff_ep + -5);
      __saturate(uVar11 + 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00046bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00046bc4 + *(short *)(&DAT_00046bc4 + unaff_r22 * 2) * 2))();
  return;
}


// ==== FUN_000479a4 @ 000479a4 (size 326) ====

/* WARNING: Instruction at (ram,0x00047ad0) overlaps instruction at (ram,0x00047ace)
    */

void FUN_000479a4(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 in_r2;
  code *pcVar4;
  uint in_r12;
  code *in_r14;
  int in_r16;
  short sVar5;
  undefined4 unaff_r21;
  uint unaff_r24;
  undefined2 unaff_r27;
  int iVar6;
  int unaff_ep;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short *psVar10;
  undefined4 unaff_lp;
  
  iVar6 = (int)*(char *)(param_3 + -0x7d85);
  __saturate(*(int *)(unaff_ep + 0xf8) + -1);
  *(short *)(iVar6 + 0x1900) = (short)unaff_lp;
  sVar5 = (short)(char)(&DAT_ffffa209)[in_r16];
  *(undefined4 *)(*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18) + 0x88) = 0;
  __saturate(iVar6 + -0x2927);
  pcVar4 = (code *)(*in_r14)();
  *(undefined4 *)(iVar6 + 0x2924) = unaff_lp;
  (*pcVar4)();
  iVar7 = *(int *)(*(ushort *)(iVar6 + -0x290f) + 0xf8);
  *(undefined4 *)(iVar7 + 0x30) = unaff_r21;
  *(short *)(iVar6 + 0x2936) = (short)unaff_lp;
  uVar8 = (uint)*(ushort *)(iVar7 + 0x18);
  *(undefined2 *)(uVar8 + 0x60) = *(undefined2 *)(uVar8 + 0x60);
  *(undefined2 *)(uVar8 + 0x34) = in_r2;
  *(short *)(uVar8 + 0xae) = sVar5;
  uVar9 = (uint)*(ushort *)(*(ushort *)(uVar8 + 0x18) + 0x18);
  *(int *)(uVar9 + 0x8c) = (int)*(short *)(uVar8 + 0x8e);
  *(undefined2 *)(uVar9 + 0x34) = in_r2;
  uVar8 = (uint)*(ushort *)(uVar9 + 0x18);
  bVar1 = *(byte *)(uVar8 + 2);
  uVar2 = *(undefined2 *)(uVar8 + 0x8e);
  *(ushort *)(uVar8 + 0x34) = (ushort)bVar1;
  *(ushort *)(uVar8 + 0x34) = (ushort)bVar1;
  psVar10 = (short *)(uint)*(ushort *)(uVar8 + 0x18);
  psVar10[0x1a] = (ushort)bVar1;
  psVar10[0x44] = 0;
  psVar10[0x45] = 0;
  psVar10[0x30] = psVar10[0x6c];
  __saturate(param_2 - *psVar10);
  *psVar10 = (short)(param_2 - *psVar10);
  uVar3 = *(ushort *)(*(ushort *)((ushort)psVar10[0xc] + 0x18) + 0x18);
  *(undefined4 *)((~unaff_r24 | 0x2936) + 0x2924) = unaff_lp;
  *(undefined2 *)(*(ushort *)(uVar3 + 0x18) + 2) = uVar2;
  __saturate((~in_r12 | 0x2925) - 0x2927);
  __saturate((~in_r12 | 0x2925) - 0x292d);
                    /* WARNING: Could not recover jumptable at 0x00047aea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uRama304149a = unaff_r27;
  (*(code *)(&DAT_00047aec + *(short *)(&DAT_00047aec + param_1 * 2) * 2))();
  return;
}


// ==== FUN_00048db2 @ 00048db2 (size 288) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00048db2(void)

{
  bool bVar1;
  undefined2 uVar2;
  code *in_r2;
  int in_r16;
  int iVar3;
  undefined4 unaff_r22;
  uint unaff_r23;
  uint uVar4;
  uint unaff_r25;
  code *unaff_r26;
  uint unaff_r27;
  uint unaff_r29;
  int unaff_ep;
  uint unaff_lp;
  int unaff_CTBP;
  
  iVar3 = in_r16 >> 5;
  (*in_r2)();
  iVar3 = iVar3 >> 5;
  (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x24)))();
  iVar3 = iVar3 >> 5;
  (*unaff_r26)();
  iVar3 = iVar3 >> 5;
  (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x54)))();
  iVar3 = iVar3 >> 0x1e;
  __saturate(iVar3 + 1);
  __saturate(iVar3 + 2);
  __saturate(iVar3 + 3);
  __saturate(iVar3 + 4);
  iVar3 = iVar3 + 5;
  __saturate(iVar3);
  __saturate(iVar3);
  *(int *)(unaff_ep + 0x3c) = iVar3;
  __saturate(unaff_lp);
  *(short *)(unaff_r26 + -0x5dfe) = (short)(unaff_r23 / unaff_r25);
  *(undefined4 *)(unaff_ep + 0x3c) = unaff_r22;
  __saturate(unaff_lp);
  __saturate(unaff_lp);
  uRam0000009a = (undefined2)unaff_r25;
  *(undefined2 *)(unaff_ep + 0x9a) = uRam0000009a;
  *(undefined2 *)(unaff_ep + 0x98) = uRam0000009a;
  __saturate(unaff_lp);
  *(undefined2 *)(unaff_ep + 0x9a) = uRam0000009a;
  *(undefined2 *)(unaff_ep + 0x98) = uRam0000009a;
  uVar2 = Ram00000000;
  uRam0000003c = unaff_r22;
  uVar4 = (((((unaff_r23 / unaff_r25) / (uint)unaff_r26) /
            (unaff_r27 | (uint)&stack0x00000000 | (uint)&stack0x00000000 | (uint)&stack0x00000000 |
             (uint)&stack0x00000000 | (uint)&stack0x00000000 | (uint)&stack0x00000000 |
             (uint)&stack0x00000000 | (uint)&stack0x00000000 | (uint)&stack0x00000000 |
            (uint)&stack0x00000000)) / ((int)*(short *)(unaff_ep + 0x22) - 0xcU)) / unaff_r29) / 0;
  uVar2 = Ram0000001e;
  __saturate(unaff_lp);
  uVar2 = Ram00000000;
  do {
    bVar1 = uVar4 == 0x80000000;
    uVar4 = uVar4 / unaff_lp;
  } while (bVar1 && unaff_lp == 0xffffffff || unaff_lp == 0);
  uVar2 = Ram00000020;
  uRam00000098 = uRam0000009a;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00049fc2 @ 00049fc2 (size 20) ====

void FUN_00049fc2(void)

{
  uint in_r18;
  int unaff_r28;
  
  __saturate(-unaff_r28);
                    /* WARNING: Could not recover jumptable at 0x00049fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00049fd6 + *(short *)(&DAT_00049fd6 + (in_r18 & 0xfffffff1) * 2) * 2))();
  return;
}


// ==== FUN_0004b8d4 @ 0004b8d4 (size 916) ====

void FUN_0004b8d4(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int unaff_r21;
  int unaff_r23;
  int unaff_r26;
  int iVar4;
  int iVar5;
  int unaff_ep;
  
  __saturate(unaff_r26 - unaff_r23);
  iVar4 = (unaff_r26 - unaff_r23) - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  do {
    __saturate(iVar4 - unaff_r23);
    iVar5 = (iVar4 - unaff_r23) - unaff_r23;
    __saturate(iVar5);
    iVar5 = iVar5 - unaff_r23;
    __saturate(iVar5);
    bVar2 = (byte)((uint)unaff_r21 >> 0x18);
    bVar1 = bVar2 >> 7;
    iVar4 = iVar5 - unaff_r21;
    __saturate(iVar4);
  } while ((byte)((uint)iVar5 >> 0x1f) == bVar1 ||
           bVar1 != (byte)((uint)(iVar5 - unaff_r21) >> 0x1f));
  uVar3 = DAT_00000008;
  __saturate(iVar4 - unaff_r23);
  iVar4 = (iVar4 - unaff_r23) - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  iVar4 = iVar4 - unaff_r23;
  __saturate(iVar4);
  do {
    __saturate(iVar4 - unaff_r23);
    iVar5 = (iVar4 - unaff_r23) - unaff_r23;
    __saturate(iVar5);
    iVar5 = iVar5 - unaff_r23;
    __saturate(iVar5);
    bVar1 = bVar2 >> 7;
    iVar4 = iVar5 - unaff_r21;
    __saturate(iVar4);
  } while ((byte)((uint)iVar5 >> 0x1f) == bVar1 ||
           bVar1 != (byte)((uint)(iVar5 - unaff_r21) >> 0x1f));
  __saturate(*(char *)(unaff_ep + 0x68) + 1);
                    /* WARNING: Could not recover jumptable at 0x0004bc66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004bc68 + *(short *)(&DAT_0004bc68 + *(short *)(unaff_ep + 0xd0) * 2) * 2))();
  return;
}


// ==== FUN_0004c752 @ 0004c752 (size 30) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c752(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int in_r1;
  int iVar6;
  int unaff_gp;
  code *pcVar7;
  uint in_r14;
  undefined1 in_r16;
  int iVar8;
  code *pcVar9;
  uint in_r19;
  int unaff_r20;
  code *pcVar10;
  uint unaff_r25;
  undefined4 unaff_r27;
  int iVar11;
  uint unaff_r29;
  int unaff_ep;
  uint uVar12;
  undefined4 uVar13;
  
  __saturate(in_r1 + 5);
  __saturate(in_r1 + 0xb);
  __saturate(in_r1 + 0x13);
  __saturate(in_r1 + 0x1c);
  uVar12 = (uint)*(ushort *)
                  (*(ushort *)
                    (*(ushort *)(*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18) + 0x18) + 0x18) +
                  0x18);
  iVar6 = in_r1 + 0x23;
  __saturate(iVar6);
  *(undefined1 *)(param_4 + 0x5526) = in_r16;
  *(undefined1 *)(param_3 + 0x1078) = in_r16;
  *(undefined1 *)(param_4 + 0x5502) = in_r16;
  *(undefined1 *)(uVar12 + 10) = 0;
  *(undefined1 *)(param_4 + 0x54de) = in_r16;
  *(undefined1 *)(param_4 + 0x53ec) = in_r16;
  *(undefined1 *)(uVar12 + 0x5e) = 0;
  *(undefined1 *)(param_4 + 0x53ac) = in_r16;
  *(undefined1 *)(uVar12 + 0x7a) = 0;
  *(undefined1 *)(param_4 + 0x54ba) = in_r16;
  *(undefined1 *)(uVar12 + 0x26) = 0;
  *(undefined1 *)(param_4 + 0x5496) = in_r16;
  *(undefined1 *)(uVar12 + 0x42) = 0;
  *(undefined1 *)(uVar12 + 0x1a) = *(undefined1 *)(uVar12 + 0x6a);
  cVar1 = (&DAT_ffffe256)[unaff_gp];
  *(char *)(uVar12 + 0x42) = cVar1;
  pcVar7 = (code *)((uint)(int)cVar1 >> 0x1c);
  *(undefined2 *)(uVar12 + 0xd2) = 0;
  iVar11 = (int)*(char *)(param_3 + -0x984);
  __saturate(iVar11 + -0x225f);
  __saturate(iVar11 + -0x2262);
  __saturate(iVar11 + -0x2320);
  __saturate(iVar11 + -0x2e14);
  __saturate(iVar11 + -0x21d2);
  __saturate(iVar11 + -0x225c);
  __saturate(iVar11 + -0x2260);
  __saturate(iVar11 + -0x2b6b);
  __saturate(iVar11 + -0x2321);
  __saturate(iVar11 + -0x2ee3);
  __saturate(iVar11 + -0x25de);
  *(undefined4 *)(iVar11 + -0x2562) = unaff_r27;
  uVar13 = *(undefined4 *)(iVar11 + -0x255a);
  pcVar10 = (code *)~unaff_r29;
  sVar2 = *(short *)(iVar11 + -0x25d6);
  __saturate(param_3 + -0x1d9);
  *(undefined1 *)(iVar11 + -0x25ae) = in_r16;
  cVar1 = *(char *)(iVar11 + -0x2576);
  iVar8 = (int)cVar1;
  if (-1 < param_1) {
    *(int *)(iVar11 + -0x259e) = (int)*(short *)(iVar11 + -0x2528);
    *(short *)(iVar11 + -0x2578) = *(short *)(iVar11 + -0x2528);
    *(int *)(iVar11 + -0x254e) = iVar11 + -0x25de;
    iVar11 = (int)*(short *)(unaff_r29 + 2);
    *(undefined1 *)(iVar11 + 7) = 0xff;
    *(undefined1 *)(iVar11 + 6) = 0xff;
    *(undefined1 *)(iVar11 + 1) = 0xff;
    uVar5 = Ram0000001c;
    *(undefined1 *)(*(short *)(uVar5 + 10) + 5) = 0xff;
    *(short *)(iVar8 + -0x79b7) = cVar1 + 9;
    iVar8 = 0x10000;
    sVar2 = Ram0000000c;
    iVar11 = (int)(char)(&DAT_ffff8f07)[unaff_r29];
    unaff_r20 = (int)*(char *)(iVar11 + 0xd);
    *(int *)(iVar11 + 0x90) = iVar11;
  }
  iVar11 = (int)sVar2;
  iVar8 = iVar8 + -8;
  *(undefined1 *)(iVar11 + 7) = 0xff;
  *(undefined1 *)(iVar11 + 6) = 0xff;
  *(undefined1 *)(iVar11 + 1) = 0xff;
  *(undefined1 *)(*(short *)(*(ushort *)(unaff_r20 + 0x18) + 10) + 5) = 0xff;
  FUN_0006ac3a();
  *(short *)(iVar8 + -0x79b7) = (short)iVar8 + 9;
  __saturate(iVar8 + 0x79d2);
  _DAT_000054bd = (undefined2)uVar13;
  uVar12 = (uint)*(ushort *)(pcVar10 + 0x18) /
           (uint)(int)*(short *)(*(ushort *)(pcVar10 + 0x18) + 2);
  iVar11 = (int)*(short *)(uVar12 / (uint)(int)*(short *)(uVar12 + 6) + 8);
  *(undefined1 *)(iVar11 + 7) = 0xff;
  *(undefined1 *)(iVar11 + 6) = 0xff;
  *(undefined1 *)(iVar11 + 1) = 0xff;
  uVar5 = Ram0000001c;
  sVar2 = *(short *)(uVar5 + 10);
  *(undefined1 *)(sVar2 + 5) = 0xff;
  __saturate(0xfffffff8);
  *(short *)(iVar8 + 0x1b) = (short)iVar8 + 0x79db;
  __saturate(iVar8 + 0xf3a4);
  *(undefined1 *)(sVar2 + 1) = 0xff;
  pcVar9 = (code *)(int)*(char *)(iVar8 + 0x95ab);
  uVar5 = Ram00000010;
  uVar12 = (uint)uVar5 / (uint)(int)*(short *)(uVar5 + 2);
  uVar12 = uVar12 / (uint)(int)*(short *)(uVar12 + 6);
  *(undefined1 *)(*(short *)(uVar12 / (uint)(int)*(short *)(uVar12 + 8) + 10) + 3) = 0xff;
  (*pcVar10)();
  uVar4 = Ram0000000e;
  (*pcVar9)();
  (*pcVar7)();
  uVar12 = (uint)*(ushort *)(pcVar10 + 0x18) /
           (uint)(int)*(short *)(*(ushort *)(pcVar10 + 0x18) + 2);
  uVar12 = uVar12 / (uint)(int)*(short *)(uVar12 + 6);
  *(undefined4 *)(uVar12 / (uint)(int)*(short *)(uVar12 + 8) + 4) = 0xffffffff;
  iVar8 = (int)*(short *)(unaff_r29 + 0xa8);
  sVar2 = *(short *)(unaff_r29 + 0x7c);
  *(undefined1 *)(iVar8 + 7) = 0xff;
  *(undefined1 *)(iVar8 + 6) = 0xff;
  *(undefined1 *)(iVar8 + 1) = 0xff;
  uVar5 = Ram0000001c;
  uVar12 = (uint)uVar5;
  sVar3 = *(short *)(uVar12 + 6);
  *(undefined1 *)(*(short *)(uVar12 + 10) + 5) = 0xff;
  *(uint *)(uVar12 + 4) = (int)sVar2 | in_r19 | in_r14 | (int)sVar3 | 0xfffffff7 | unaff_r25;
  iVar8 = *(int *)(uVar12 + 0xe0);
  *(short *)(iVar8 + -0x79b7) = (short)iVar8 + 9;
  __saturate(iVar8 + 0x79d2);
  uVar4 = Ram00000020;
                    /* WARNING: Could not recover jumptable at 0x0004cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004cc5a + *(short *)(&DAT_0004cc5a + iVar6 * 2) * 2))();
  return;
}


// ==== FUN_0004c770 @ 0004c770 (size 115) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c770(int param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int in_r1;
  int iVar6;
  int unaff_gp;
  code *pcVar7;
  uint in_r14;
  undefined1 in_r16;
  int iVar8;
  code *pcVar9;
  uint in_r19;
  int unaff_r20;
  code *pcVar10;
  uint unaff_r25;
  undefined4 unaff_r27;
  int iVar11;
  uint unaff_r29;
  int unaff_ep;
  uint uVar12;
  undefined4 uVar13;
  
  __saturate(in_r1 + 9);
  uVar12 = (uint)*(ushort *)(unaff_ep + 0x18);
  iVar6 = in_r1 + 0x10;
  __saturate(iVar6);
  *(undefined1 *)(param_4 + 0x5526) = in_r16;
  *(undefined1 *)(param_3 + 0x1078) = in_r16;
  *(undefined1 *)(param_4 + 0x5502) = in_r16;
  *(undefined1 *)(uVar12 + 10) = 0;
  *(undefined1 *)(param_4 + 0x54de) = in_r16;
  *(undefined1 *)(param_4 + 0x53ec) = in_r16;
  *(undefined1 *)(uVar12 + 0x5e) = 0;
  *(undefined1 *)(param_4 + 0x53ac) = in_r16;
  *(undefined1 *)(uVar12 + 0x7a) = 0;
  *(undefined1 *)(param_4 + 0x54ba) = in_r16;
  *(undefined1 *)(uVar12 + 0x26) = 0;
  *(undefined1 *)(param_4 + 0x5496) = in_r16;
  *(undefined1 *)(uVar12 + 0x42) = 0;
  *(undefined1 *)(uVar12 + 0x1a) = *(undefined1 *)(uVar12 + 0x6a);
  cVar1 = (&DAT_ffffe256)[unaff_gp];
  *(char *)(uVar12 + 0x42) = cVar1;
  pcVar7 = (code *)((uint)(int)cVar1 >> 0x1c);
  *(undefined2 *)(uVar12 + 0xd2) = 0;
  iVar11 = (int)*(char *)(param_3 + -0x984);
  __saturate(iVar11 + -0x225f);
  __saturate(iVar11 + -0x2262);
  __saturate(iVar11 + -0x2320);
  __saturate(iVar11 + -0x2e14);
  __saturate(iVar11 + -0x21d2);
  __saturate(iVar11 + -0x225c);
  __saturate(iVar11 + -0x2260);
  __saturate(iVar11 + -0x2b6b);
  __saturate(iVar11 + -0x2321);
  __saturate(iVar11 + -0x2ee3);
  __saturate(iVar11 + -0x25de);
  *(undefined4 *)(iVar11 + -0x2562) = unaff_r27;
  uVar13 = *(undefined4 *)(iVar11 + -0x255a);
  pcVar10 = (code *)~unaff_r29;
  sVar2 = *(short *)(iVar11 + -0x25d6);
  __saturate(param_3 + -0x1d9);
  *(undefined1 *)(iVar11 + -0x25ae) = in_r16;
  cVar1 = *(char *)(iVar11 + -0x2576);
  iVar8 = (int)cVar1;
  if (-1 < param_1) {
    *(int *)(iVar11 + -0x259e) = (int)*(short *)(iVar11 + -0x2528);
    *(short *)(iVar11 + -0x2578) = *(short *)(iVar11 + -0x2528);
    *(int *)(iVar11 + -0x254e) = iVar11 + -0x25de;
    iVar11 = (int)*(short *)(unaff_r29 + 2);
    *(undefined1 *)(iVar11 + 7) = 0xff;
    *(undefined1 *)(iVar11 + 6) = 0xff;
    *(undefined1 *)(iVar11 + 1) = 0xff;
    uVar5 = Ram0000001c;
    *(undefined1 *)(*(short *)(uVar5 + 10) + 5) = 0xff;
    *(short *)(iVar8 + -0x79b7) = cVar1 + 9;
    iVar8 = 0x10000;
    sVar2 = Ram0000000c;
    iVar11 = (int)(char)(&DAT_ffff8f07)[unaff_r29];
    unaff_r20 = (int)*(char *)(iVar11 + 0xd);
    *(int *)(iVar11 + 0x90) = iVar11;
  }
  iVar11 = (int)sVar2;
  iVar8 = iVar8 + -8;
  *(undefined1 *)(iVar11 + 7) = 0xff;
  *(undefined1 *)(iVar11 + 6) = 0xff;
  *(undefined1 *)(iVar11 + 1) = 0xff;
  *(undefined1 *)(*(short *)(*(ushort *)(unaff_r20 + 0x18) + 10) + 5) = 0xff;
  FUN_0006ac3a();
  *(short *)(iVar8 + -0x79b7) = (short)iVar8 + 9;
  __saturate(iVar8 + 0x79d2);
  _DAT_000054bd = (undefined2)uVar13;
  uVar12 = (uint)*(ushort *)(pcVar10 + 0x18) /
           (uint)(int)*(short *)(*(ushort *)(pcVar10 + 0x18) + 2);
  iVar11 = (int)*(short *)(uVar12 / (uint)(int)*(short *)(uVar12 + 6) + 8);
  *(undefined1 *)(iVar11 + 7) = 0xff;
  *(undefined1 *)(iVar11 + 6) = 0xff;
  *(undefined1 *)(iVar11 + 1) = 0xff;
  uVar5 = Ram0000001c;
  sVar2 = *(short *)(uVar5 + 10);
  *(undefined1 *)(sVar2 + 5) = 0xff;
  __saturate(0xfffffff8);
  *(short *)(iVar8 + 0x1b) = (short)iVar8 + 0x79db;
  __saturate(iVar8 + 0xf3a4);
  *(undefined1 *)(sVar2 + 1) = 0xff;
  pcVar9 = (code *)(int)*(char *)(iVar8 + 0x95ab);
  uVar5 = Ram00000010;
  uVar12 = (uint)uVar5 / (uint)(int)*(short *)(uVar5 + 2);
  uVar12 = uVar12 / (uint)(int)*(short *)(uVar12 + 6);
  *(undefined1 *)(*(short *)(uVar12 / (uint)(int)*(short *)(uVar12 + 8) + 10) + 3) = 0xff;
  (*pcVar10)();
  uVar4 = Ram0000000e;
  (*pcVar9)();
  (*pcVar7)();
  uVar12 = (uint)*(ushort *)(pcVar10 + 0x18) /
           (uint)(int)*(short *)(*(ushort *)(pcVar10 + 0x18) + 2);
  uVar12 = uVar12 / (uint)(int)*(short *)(uVar12 + 6);
  *(undefined4 *)(uVar12 / (uint)(int)*(short *)(uVar12 + 8) + 4) = 0xffffffff;
  iVar8 = (int)*(short *)(unaff_r29 + 0xa8);
  sVar2 = *(short *)(unaff_r29 + 0x7c);
  *(undefined1 *)(iVar8 + 7) = 0xff;
  *(undefined1 *)(iVar8 + 6) = 0xff;
  *(undefined1 *)(iVar8 + 1) = 0xff;
  uVar5 = Ram0000001c;
  uVar12 = (uint)uVar5;
  sVar3 = *(short *)(uVar12 + 6);
  *(undefined1 *)(*(short *)(uVar12 + 10) + 5) = 0xff;
  *(uint *)(uVar12 + 4) = (int)sVar2 | in_r19 | in_r14 | (int)sVar3 | 0xfffffff7 | unaff_r25;
  iVar8 = *(int *)(uVar12 + 0xe0);
  *(short *)(iVar8 + -0x79b7) = (short)iVar8 + 9;
  __saturate(iVar8 + 0x79d2);
  uVar4 = Ram00000020;
                    /* WARNING: Could not recover jumptable at 0x0004cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004cc5a + *(short *)(&DAT_0004cc5a + iVar6 * 2) * 2))();
  return;
}


// ==== FUN_0004c7e4 @ 0004c7e4 (size 1088) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c7e4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  ushort uVar5;
  int in_r1;
  int unaff_gp;
  undefined1 in_r13;
  code *pcVar6;
  uint in_r14;
  undefined1 in_r16;
  int iVar7;
  code *pcVar8;
  uint in_r19;
  int unaff_r20;
  code *pcVar9;
  uint unaff_r25;
  undefined4 unaff_r27;
  int iVar10;
  uint unaff_r29;
  int unaff_ep;
  uint uVar11;
  undefined4 uVar12;
  
  *(undefined1 *)(unaff_ep + 0x1a) = in_r13;
  cVar1 = (&DAT_ffffe256)[unaff_gp];
  *(char *)(unaff_ep + 0x42) = cVar1;
  pcVar6 = (code *)((uint)(int)cVar1 >> 0x1c);
  *(undefined2 *)(unaff_ep + 0xd2) = 0;
  iVar10 = (int)*(char *)(param_3 + -0x984);
  __saturate(iVar10 + -0x225f);
  __saturate(iVar10 + -0x2262);
  __saturate(iVar10 + -0x2320);
  __saturate(iVar10 + -0x2e14);
  __saturate(iVar10 + -0x21d2);
  __saturate(iVar10 + -0x225c);
  __saturate(iVar10 + -0x2260);
  __saturate(iVar10 + -0x2b6b);
  __saturate(iVar10 + -0x2321);
  __saturate(iVar10 + -0x2ee3);
  __saturate(iVar10 + -0x25de);
  *(undefined4 *)(iVar10 + -0x2562) = unaff_r27;
  uVar12 = *(undefined4 *)(iVar10 + -0x255a);
  pcVar9 = (code *)~unaff_r29;
  sVar2 = *(short *)(iVar10 + -0x25d6);
  __saturate(param_3 + -0x1d9);
  *(undefined1 *)(iVar10 + -0x25ae) = in_r16;
  cVar1 = *(char *)(iVar10 + -0x2576);
  iVar7 = (int)cVar1;
  if (-1 < param_1) {
    *(int *)(iVar10 + -0x259e) = (int)*(short *)(iVar10 + -0x2528);
    *(short *)(iVar10 + -0x2578) = *(short *)(iVar10 + -0x2528);
    *(int *)(iVar10 + -0x254e) = iVar10 + -0x25de;
    iVar10 = (int)*(short *)(unaff_r29 + 2);
    *(undefined1 *)(iVar10 + 7) = 0xff;
    *(undefined1 *)(iVar10 + 6) = 0xff;
    *(undefined1 *)(iVar10 + 1) = 0xff;
    uVar5 = Ram0000001c;
    *(undefined1 *)(*(short *)(uVar5 + 10) + 5) = 0xff;
    *(short *)(iVar7 + -0x79b7) = cVar1 + 9;
    iVar7 = 0x10000;
    sVar2 = Ram0000000c;
    iVar10 = (int)(char)(&DAT_ffff8f07)[unaff_r29];
    unaff_r20 = (int)*(char *)(iVar10 + 0xd);
    *(int *)(iVar10 + 0x90) = iVar10;
  }
  iVar10 = (int)sVar2;
  iVar7 = iVar7 + -8;
  *(undefined1 *)(iVar10 + 7) = 0xff;
  *(undefined1 *)(iVar10 + 6) = 0xff;
  *(undefined1 *)(iVar10 + 1) = 0xff;
  *(undefined1 *)(*(short *)(*(ushort *)(unaff_r20 + 0x18) + 10) + 5) = 0xff;
  FUN_0006ac3a();
  *(short *)(iVar7 + -0x79b7) = (short)iVar7 + 9;
  __saturate(iVar7 + 0x79d2);
  _DAT_000054bd = (undefined2)uVar12;
  uVar11 = (uint)*(ushort *)(pcVar9 + 0x18) / (uint)(int)*(short *)(*(ushort *)(pcVar9 + 0x18) + 2);
  iVar10 = (int)*(short *)(uVar11 / (uint)(int)*(short *)(uVar11 + 6) + 8);
  *(undefined1 *)(iVar10 + 7) = 0xff;
  *(undefined1 *)(iVar10 + 6) = 0xff;
  *(undefined1 *)(iVar10 + 1) = 0xff;
  uVar5 = Ram0000001c;
  sVar2 = *(short *)(uVar5 + 10);
  *(undefined1 *)(sVar2 + 5) = 0xff;
  __saturate(0xfffffff8);
  *(short *)(iVar7 + 0x1b) = (short)iVar7 + 0x79db;
  __saturate(iVar7 + 0xf3a4);
  *(undefined1 *)(sVar2 + 1) = 0xff;
  pcVar8 = (code *)(int)*(char *)(iVar7 + 0x95ab);
  uVar5 = Ram00000010;
  uVar11 = (uint)uVar5 / (uint)(int)*(short *)(uVar5 + 2);
  uVar11 = uVar11 / (uint)(int)*(short *)(uVar11 + 6);
  *(undefined1 *)(*(short *)(uVar11 / (uint)(int)*(short *)(uVar11 + 8) + 10) + 3) = 0xff;
  (*pcVar9)();
  uVar4 = Ram0000000e;
  (*pcVar8)();
  (*pcVar6)();
  uVar11 = (uint)*(ushort *)(pcVar9 + 0x18) / (uint)(int)*(short *)(*(ushort *)(pcVar9 + 0x18) + 2);
  uVar11 = uVar11 / (uint)(int)*(short *)(uVar11 + 6);
  *(undefined4 *)(uVar11 / (uint)(int)*(short *)(uVar11 + 8) + 4) = 0xffffffff;
  iVar7 = (int)*(short *)(unaff_r29 + 0xa8);
  sVar2 = *(short *)(unaff_r29 + 0x7c);
  *(undefined1 *)(iVar7 + 7) = 0xff;
  *(undefined1 *)(iVar7 + 6) = 0xff;
  *(undefined1 *)(iVar7 + 1) = 0xff;
  uVar5 = Ram0000001c;
  uVar11 = (uint)uVar5;
  sVar3 = *(short *)(uVar11 + 6);
  *(undefined1 *)(*(short *)(uVar11 + 10) + 5) = 0xff;
  *(uint *)(uVar11 + 4) = (int)sVar2 | in_r19 | in_r14 | (int)sVar3 | 0xfffffff7 | unaff_r25;
  iVar7 = *(int *)(uVar11 + 0xe0);
  *(short *)(iVar7 + -0x79b7) = (short)iVar7 + 9;
  __saturate(iVar7 + 0x79d2);
  uVar4 = Ram00000020;
                    /* WARNING: Could not recover jumptable at 0x0004cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004cc5a + *(short *)(&DAT_0004cc5a + in_r1 * 2) * 2))();
  return;
}


// ==== FUN_0004cc24 @ 0004cc24 (size 54) ====

void FUN_0004cc24(void)

{
  int in_r1;
  int unaff_gp;
  int in_r16;
  int iVar1;
  
  iVar1 = in_r16 - unaff_gp;
  *(short *)(iVar1 + -0x79c0) = (short)iVar1;
  __saturate((iVar1 - unaff_gp) + 0x79c0);
                    /* WARNING: Could not recover jumptable at 0x0004cc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004cc5a + *(short *)(&DAT_0004cc5a + in_r1 * 2) * 2))();
  return;
}


// ==== FUN_0004d8e4 @ 0004d8e4 (size 81) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004d8e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_gp;
  int unaff_tp;
  int iVar1;
  int in_r11;
  undefined2 in_r13;
  int iVar2;
  undefined4 in_r19;
  int unaff_r22;
  code *unaff_r26;
  code *unaff_r27;
  int unaff_r28;
  uint uVar3;
  int unaff_lp;
  
  iVar2 = in_r11 + 0x10000;
  *(short *)(unaff_r28 + 0x218a) = (short)unaff_lp;
  do {
    *(char *)(param_3 + 0xf2c) = (char)iVar2;
  } while (unaff_tp + 1 < 0);
  iVar1 = (*unaff_r26)();
  *(char *)(iVar1 + 0x2a43) = (char)iVar2;
  *(undefined2 *)(unaff_lp + 0x6a) = in_r13;
  uVar3 = (uint)*(ushort *)(*(ushort *)(unaff_lp + 0x18) + 0x18);
  do {
    *(char *)(param_3 + 0xf2c) = (char)iVar2;
  } while (iVar1 - unaff_gp < 0);
  iVar1 = (*unaff_r27)();
  *(char *)(iVar1 + 0x2a44) = (char)iVar2;
  *(undefined2 *)(uVar3 + 0x6a) = in_r13;
  *(undefined4 *)(uVar3 - 0xcc6) = in_r19;
  __saturate(uVar3 - 5);
  *(int *)(unaff_r22 + 0x20) = iVar2;
  __saturate(unaff_tp + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004d936 @ 0004d936 (size 100) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004d936(undefined4 param_1,undefined4 param_2,int param_3)

{
  int unaff_tp;
  int iVar1;
  undefined2 in_r13;
  undefined4 in_r16;
  undefined4 in_r19;
  int unaff_r22;
  code *unaff_r27;
  int unaff_ep;
  uint in_PSW;
  
  do {
    *(char *)(param_3 + 0xf2c) = (char)in_r16;
  } while (((byte)(in_PSW >> 1) & 1) == 1);
  iVar1 = (*unaff_r27)();
  *(char *)(iVar1 + 0x2a44) = (char)in_r16;
  *(undefined2 *)(unaff_ep + 0x6a) = in_r13;
  *(undefined4 *)(unaff_ep + -0xcc6) = in_r19;
  __saturate(unaff_ep + -5);
  *(undefined4 *)(unaff_r22 + 0x20) = in_r16;
  __saturate(unaff_tp + -2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e80c @ 0004e80c (size 44) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e80c(void)

{
  int unaff_gp;
  undefined2 in_r11;
  undefined1 in_r14;
  char in_r15;
  byte unaff_r20;
  byte unaff_r22;
  int unaff_ep;
  uint uVar1;
  int unaff_lp;
  
  do {
  } while (unaff_lp - unaff_gp < 0);
  *(undefined2 *)(unaff_ep + 0xec) = in_r11;
  uVar1 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(char *)(uVar1 + 0x11) = in_r15 * -10;
  *(ushort *)(uVar1 + 0xae) = (ushort)(*(short *)(uVar1 + 0xe0) >> 0xf) >> 1;
  DAT_00000400 = unaff_r20 | unaff_r22;
  *(undefined2 *)(uVar1 + 0x60) = *(undefined2 *)(uVar1 + 0x4c);
  *(undefined1 *)(uVar1 + 0x17) = in_r14;
  *(byte *)(*(char *)(uVar1 + 0x76) + 0x400) = unaff_r22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e838 @ 0004e838 (size 62) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e838(void)

{
  int unaff_tp;
  undefined1 in_r14;
  undefined4 in_r15;
  byte in_r16;
  byte unaff_r22;
  int unaff_ep;
  
  *(ushort *)(unaff_ep + 0xae) = (ushort)((uint)in_r15 >> 0x11);
  DAT_00000400 = in_r16 | unaff_r22;
  *(undefined2 *)(unaff_ep + 0x60) = *(undefined2 *)(unaff_ep + 0x4c);
  *(undefined1 *)(unaff_ep + 0x17) = in_r14;
  *(byte *)(unaff_tp + 0x400) = unaff_r22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e880 @ 0004e880 (size 34) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e880(void)

{
  undefined4 in_r15;
  int unaff_r21;
  
  *(ushort *)(*(ushort *)(unaff_r21 + 0x18) + 0xc) = (ushort)((uint)in_r15 >> 0x11);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e8ac @ 0004e8ac (size 22) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e8ac(void)

{
  undefined2 in_r9;
  int in_r14;
  int in_r15;
  int in_r16;
  int in_r19;
  undefined4 unaff_r20;
  int unaff_r23;
  int unaff_ep;
  
  __saturate(unaff_r23 - in_r14);
  __saturate(in_r15 + in_r16);
  __saturate((unaff_r23 - in_r14) - in_r19);
  *(undefined4 *)(unaff_ep + 4) = unaff_r20;
  *(short *)(unaff_ep + 0x3e) = (short)(in_r15 + in_r16);
  *(undefined2 *)(unaff_ep + 0xd0) = in_r9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004e8c2 @ 0004e8c2 (size 26) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004e8c2(void)

{
  undefined2 in_r9;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0xd0) = in_r9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004ecf2 @ 0004ecf2 (size 36) ====

void FUN_0004ecf2(void)

{
                    /* WARNING: Could not recover jumptable at 0x0004ed14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004ed16 + *(short *)(&DAT_0004ed16 + (int)&stack0x00000000 * 2) * 2))();
  return;
}


// ==== FUN_0004eed2 @ 0004eed2 (size 114) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0004eed2(undefined4 param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  int in_r1;
  int iVar3;
  int unaff_r20;
  int unaff_r29;
  int unaff_ep;
  uint uVar4;
  
  __saturate(unaff_r20 + -4);
  uVar4 = (uint)*(ushort *)(unaff_ep + 0x18);
  iVar3 = (int)*(short *)(uVar4 + 2);
  __saturate(unaff_r20 + -0x11);
  func_0xfff1c46e();
  uVar1 = *(ushort *)(uVar4 + 4);
  *(char *)(iVar3 + 0x5928) = (char)unaff_r29;
  __saturate(unaff_r29 + 4);
  *(undefined2 *)(uVar4 + 0xcc) = 0;
  __saturate(unaff_r29 + 8);
  *(undefined2 *)(unaff_r20 + 0xd3) = 0;
  uVar2 = (undefined1)(unaff_r29 + 8);
  *(undefined1 *)(in_r1 + 0xff) = uVar2;
  param_3 = param_3 - (uint)uVar1;
  __saturate(param_3);
  *(undefined1 *)(param_2 + 0xff) = uVar2;
  uVar2 = (undefined1)param_3;
  *(undefined1 *)(unaff_r20 + -9) = uVar2;
  *(undefined1 *)(*(ushort *)(unaff_r20 + 7) + 0x19) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0004f73c @ 0004f73c (size 66) ====

void FUN_0004f73c(void)

{
  int in_r1;
  int in_r9;
  undefined1 in_r16;
  int in_r18;
  int unaff_r21;
  int unaff_r28;
  
  __saturate(in_r1 - unaff_r28);
  *(undefined1 *)(in_r1 + 0xff) = in_r16;
  *(undefined1 *)(in_r9 + 0x2c5c) = in_r16;
  __saturate(&stack0x00000000 + in_r18);
                    /* WARNING: Could not recover jumptable at 0x0004f77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004f77e + *(short *)(&DAT_0004f77e + unaff_r21 * 2) * 2))();
  return;
}


// ==== FUN_0004f856 @ 0004f856 (size 700) ====

/* WARNING: Removing unreachable block (ram,0x0004fa6c) */
/* WARNING: Removing unreachable block (ram,0x0004fab8) */
/* WARNING: Removing unreachable block (ram,0x0004fac4) */

void FUN_0004f856(undefined4 param_1,undefined4 param_2,int param_3,short param_4)

{
  char cVar1;
  short sVar2;
  short *in_r1;
  int iVar3;
  byte unaff_gp;
  ushort uVar4;
  byte bVar5;
  int in_r18;
  undefined4 in_r19;
  int iVar6;
  undefined4 uVar7;
  undefined1 unaff_r25;
  undefined4 unaff_r27;
  int unaff_r29;
  int unaff_ep;
  undefined1 *puVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int unaff_lp;
  ushort *unaff_CTBP;
  undefined1 auStack_3 [3];
  
  puVar8 = (undefined1 *)(int)*(char *)(unaff_ep + 0x3b);
  __saturate(puVar8 + -5);
  *(int *)(puVar8 + 0xf) = (int)*(short *)(unaff_ep + 0xe0);
  __saturate(unaff_lp - (int)in_r1);
  __saturate(auStack_3);
  cVar1 = *(char *)(param_3 + -0x7d85);
  __saturate(0xb);
  puVar8[0x1e] = (char)auStack_3;
  iVar11 = -(int)cVar1;
  __saturate(iVar11);
  iVar6 = *(int *)(puVar8 + 0x27);
  bVar5 = *(byte *)(in_r18 + -0x6882);
  __saturate((int)auStack_3 - (int)&stack0x00000000);
  puVar8[-5] = (char)iVar11;
  *(int *)(puVar8 + 0xf) = iVar6;
  __saturate(iVar11 + 8);
  *(short *)(puVar8 + 0x3d) = (short)(unaff_lp - (int)in_r1);
  *(byte *)(in_r18 + 0x7e7a) = *(byte *)(in_r18 + 0x7e7a) ^ 0x80;
  iVar6 = (uint)bVar5 - iVar6;
  __saturate(iVar6);
  *puVar8 = (char)iVar6;
  *(undefined4 *)(puVar8 + -0xccb) = in_r19;
  psVar9 = (short *)(puVar8 + -10);
  __saturate(psVar9);
  *psVar9 = (short)(char)(&DAT_000073a3)[param_3];
  *(int *)(puVar8 + 0xe) = (int)*(short *)(puVar8 + 0xd5);
  *(undefined2 *)(puVar8 + 10) = *(undefined2 *)(puVar8 + 0x9a);
  puVar8[0x3b] = (char)*(undefined2 *)(puVar8 + 0x9a);
  *psVar9 = (short)(char)(&DAT_000073a3)[param_3];
  *(int *)(puVar8 + 0xe) = (int)*(short *)(puVar8 + 0xe8);
  uVar10 = (uint)psVar9 | (uint)in_r1;
  *(undefined2 *)(uVar10 + 0x14) = *(undefined2 *)(uVar10 + 0xa4);
  *(char *)(uVar10 + 0x45) = (char)*(undefined2 *)(uVar10 + 0xa4);
  *(int *)(uVar10 + 0x14) = (int)*(short *)(uVar10 + 0xf2);
  __saturate(auStack_3);
  *in_r1 = (short)(char)(&DAT_000073a3)[param_3];
  *(int *)(in_r1 + 0xc) = (int)in_r1[0x7b];
  in_r1[10] = in_r1[0x52];
  *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
  *in_r1 = (short)(char)(&DAT_000073a3)[param_3];
  *(int *)(in_r1 + 0xc) = (int)in_r1[0x79];
  in_r1[10] = in_r1[0x52];
  *(char *)((int)in_r1 + 0x45) = (char)in_r1[0x52];
  __saturate(0xb);
  bVar5 = *(byte *)((int)in_r1 + 7);
  *in_r1 = (short)*(char *)(param_3 + -0x7d85);
  uVar7 = *(undefined4 *)(in_r1 + 0x12);
  psVar9 = in_r1;
  func_0xfff7df12();
  *(undefined4 *)(in_r1 + 8) = uVar7;
  iVar11 = (int)*(char *)((int)in_r1 + 0x3b);
  __saturate(iVar11 + -5);
  *(int *)(iVar11 + 0xf) = (int)in_r1[0x70];
  bVar5 = bVar5 ^ (byte)psVar9 ^ unaff_gp;
  __saturate(auStack_3);
  uVar4 = (ushort)(*(short *)(iVar11 + 0x1f) >> 0xf) >> 5;
  *(undefined4 *)(psVar9 + 0x3e) = unaff_r27;
  *(byte *)(param_3 + 0x126) = bVar5;
  *(byte *)(param_3 + 0x14) = bVar5;
  (*(code *)((int)unaff_CTBP + (uint)*unaff_CTBP))();
  psVar9[0x30] = param_4;
  *(byte *)(param_3 + 0x450) = bVar5;
  sVar2 = Ram00000020;
  iVar11 = -unaff_r29;
  __saturate(iVar11);
  *(ushort *)(iVar11 + 0x3e) = uVar4;
  *(ushort *)(iVar11 + 0x3e) = uVar4;
  iVar3 = (sVar2 + -0xc) * -0x1bf0;
  *(undefined1 *)(iVar11 + 0x5c) = unaff_r25;
  *(ushort *)(iVar11 + 0x2c) = uVar4;
  *(int *)iVar11 = iVar3;
  uVar4 = *(ushort *)(iVar11 + 0x18);
  do {
    *(int *)(uVar4 + 8) = iVar3;
  } while( true );
}


// ==== FUN_0004fe0c @ 0004fe0c (size 78) ====

/* WARNING: Instruction at (ram,0x0004fe32) overlaps instruction at (ram,0x0004fe30)
    */

void FUN_0004fe0c(undefined4 param_1,undefined4 param_2,int param_3,uint param_4)

{
  bool bVar1;
  char cVar2;
  uint in_r2;
  int unaff_tp;
  int in_r10;
  uint in_r14;
  uint in_r16;
  int iVar3;
  uint in_r17;
  uint uVar4;
  int in_r18;
  uint unaff_r21;
  int unaff_r26;
  int unaff_r27;
  int *unaff_ep;
  int unaff_lp;
  
  do {
    unaff_r26 = unaff_r26 + 0xb;
    __saturate(unaff_r26);
    unaff_ep[0x1f] = unaff_r27;
    cVar2 = (char)((int)in_r16 >> 0x1f);
    *(char *)(param_3 + 0x126) = cVar2;
    *(char *)(param_3 + 0x14) = cVar2;
    in_r17 = (int)in_r17 >> 0x15;
    while( true ) {
      uVar4 = in_r17 ^ in_r2 ^ unaff_r21;
      __saturate(in_r18 + 0x75e);
      *(char *)(unaff_tp + -0x8000) = (char)(in_r18 + 0x75e);
      __saturate((int)&stack0x00000000 - in_r14);
      *unaff_ep = unaff_r26;
      *(short *)(unaff_ep + 0x13) = (short)in_r10;
      in_r14 = (int)&stack0x00000000 - in_r14 | (uint)&stack0x00000000;
      unaff_ep[0x14] = in_r10;
      iVar3 = in_r18 + 0x80eb;
      __saturate(iVar3);
      *(char *)(param_3 + 0x1d0b) = (char)iVar3;
      in_r17 = (int)uVar4 >> 0x16;
      bVar1 = (uVar4 & 0x200000) != 0;
      uVar4 = (uint)bVar1 << 3;
      unaff_ep = (int *)(int)(short)unaff_ep;
      if (!bVar1) break;
      in_r10 = func_0x000be0ca();
      if ((uVar4 >> 3 & 1) != 0) {
        func_0x000b7e9e();
        __saturate(iVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x0004fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0004fe86 + *(short *)(&DAT_0004fe86 + in_r2 * 2) * 2))();
        return;
      }
    }
    in_r16 = ~param_4;
    unaff_r27 = unaff_lp;
  } while( true );
}


// ==== FUN_0004fe5a @ 0004fe5a (size 44) ====

void FUN_0004fe5a(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  uint in_r2;
  int unaff_tp;
  undefined4 in_r10;
  uint in_r14;
  uint uVar2;
  int in_r16;
  int iVar3;
  uint in_r17;
  uint uVar4;
  int in_r18;
  uint unaff_r21;
  undefined4 unaff_r26;
  undefined4 *unaff_ep;
  uint uVar5;
  
  while( true ) {
    uVar2 = in_r14 | (uint)&stack0x00000000;
    unaff_ep[0x14] = in_r10;
    iVar3 = in_r16 + 0x798d;
    __saturate(iVar3);
    *(char *)(param_3 + 0x1d0b) = (char)iVar3;
    uVar4 = (int)in_r17 >> 0x16;
    bVar1 = (in_r17 & 0x200000) != 0;
    uVar5 = (uint)bVar1 << 3;
    unaff_ep = (undefined4 *)(int)(short)unaff_ep;
    if ((bVar1) && (in_r10 = func_0x000be0ca(), (uVar5 >> 3 & 1) != 0)) break;
    in_r17 = uVar4 ^ in_r2 ^ unaff_r21;
    in_r16 = in_r18 + 0x75e;
    __saturate(in_r16);
    *(char *)(unaff_tp + -0x8000) = (char)in_r16;
    in_r14 = (int)&stack0x00000000 - uVar2;
    __saturate(in_r14);
    *unaff_ep = unaff_r26;
    *(short *)(unaff_ep + 0x13) = (short)in_r10;
  }
  func_0x000b7e9e();
  __saturate(iVar3 + 2);
                    /* WARNING: Could not recover jumptable at 0x0004fe84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0004fe86 + *(short *)(&DAT_0004fe86 + in_r2 * 2) * 2))();
  return;
}


// ==== FUN_0004ff00 @ 0004ff00 (size 219) ====

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ff00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  int in_r1;
  int iVar7;
  int in_r2;
  int unaff_gp;
  int iVar8;
  int in_r13;
  uint in_r14;
  int iVar9;
  undefined1 uVar10;
  int in_r16;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_r17;
  undefined4 in_r19;
  int unaff_r22;
  int unaff_r24;
  int unaff_r25;
  uint uVar15;
  undefined4 unaff_r27;
  int unaff_ep;
  uint *puVar16;
  uint *puVar17;
  int unaff_lp;
  uint in_PSW;
  undefined8 uVar18;
  
  while (uVar10 = (undefined1)in_r16, ((byte)(in_PSW >> 1) & 1) != ((byte)(in_PSW >> 2) & 1)) {
    while( true ) {
      unaff_ep = 0;
      uVar6 = Ram0000001e;
      Ram00000003 = (char)in_r14;
      __saturate(unaff_r22 + 0x6781);
      in_r16 = unaff_r24 + 0x5ea6;
      __saturate(in_r16);
      *(char *)(param_3 + 0x1d0b) = (char)in_r16;
      uVar11 = in_r17 & 0x200000;
      in_r17 = (int)in_r17 >> 0x16;
      in_PSW = 0;
      if (uVar11 != 0) break;
      unaff_lp = unaff_lp - in_r1;
      __saturate(unaff_lp);
      in_r14 = in_r14 >> 3;
      uRam00000060 = (undefined2)param_4;
      uVar6 = Ram00000000;
    }
    uVar18 = func_0x000be148();
    *(char *)((int)((ulonglong)uVar18 >> 0x20) + 0x87a) = (char)in_r16;
    *(char *)((int)uVar18 + 0x1f9c) = (char)in_r16;
  }
  uVar5 = *(ushort *)(unaff_ep + 0x18);
  __saturate(-in_r1);
  func_0x0020ef88();
  iVar7 = 0;
  __saturate(0);
  *(undefined1 *)(param_3 + 0x1078) = uVar10;
  func_0x001ff5fc();
  iVar8 = param_3 + -0x7e16666;
  __saturate(iVar8);
  puVar16 = (uint *)(uint)uVar5;
  do {
    uVar11 = puVar16[9];
    uVar10 = (undefined1)uVar11;
    *(undefined1 *)(param_3 + 0x1d0b) = uVar10;
    uVar15 = puVar16[0x20];
    *(char *)(param_3 + -0x2c5) = (char)in_r19;
    puVar17 = (uint *)((int)puVar16 - 5);
    __saturate(puVar17);
    __saturate(uVar15 + 0xb);
    *(undefined4 *)((int)puVar16 + 0x77) = unaff_r27;
    *(undefined1 *)(in_r13 + 0x14) = uVar10;
    iVar12 = uVar11 - unaff_gp;
    __saturate(iVar12);
    __saturate(iVar12 + 2);
    *(char *)(param_3 + 0x1d0b) = (char)(iVar12 + 2);
    iVar12 = iVar12 + 5;
    __saturate(iVar12);
    bVar1 = -(char)(param_4 >> 0x1f);
    bVar2 = bVar1 != 0 && bVar1 == (byte)((uint)-param_4 >> 0x1f);
    while (puVar16 = puVar17, bVar2) {
      func_0x0011e1ca();
      iVar9 = (int)(short)puVar17[0x11];
      *(char *)(param_3 + 0x1d0b) = (char)iVar12;
      iVar12 = iVar12 + 4;
      __saturate(iVar12);
      while( true ) {
        *(short *)((int)puVar17 + 0x9a) = (short)unaff_r25;
        *(short *)(puVar17 + 0x26) = (short)unaff_r25;
        puVar17 = (uint *)*puVar17;
        in_r14 = in_r14 | 0x4ff1c;
        uVar18 = CONCAT44(puVar17[0x16],0x42a5d);
        iVar13 = iVar12 - unaff_gp;
        __saturate(iVar13);
        iVar12 = iVar13 + 2;
        __saturate(iVar12);
        *(char *)(param_3 + 0x3a16) = (char)iVar12;
        bVar2 = SCARRY4(iVar12,3);
        iVar12 = iVar13 + 5;
        __saturate(iVar12);
        if (-1 < iVar13 + 5) break;
        *(char *)(puVar17 + 0x1e) = (char)iVar9;
        *(char *)(param_3 + 0x1078) = (char)iVar12;
        puVar17 = (uint *)(uint)(ushort)puVar17[6];
        iVar7 = in_r2 - iVar7;
        __saturate(iVar7);
        iVar9 = (int)*(short *)((int)puVar17 + 0x1e);
        iVar3 = iVar13 + 7;
        __saturate(iVar13 + 7);
        unaff_gp = (int)(char)unaff_gp;
        iVar12 = iVar13 + 7;
LAB_0004ffc6:
        iVar13 = (int)((ulonglong)uVar18 >> 0x20);
        *(char *)((int)uVar18 + 0x1f73) = (char)iVar12;
        if (-1 < iVar3) {
          (&DAT_ffffe256)[iVar8] = 0x1c;
          iVar9 = (int)*(short *)((int)puVar17 + 0x6a);
          *(char *)(param_3 + 0x1078) = (char)iVar12;
          puVar17 = (uint *)(unaff_gp * 0x1ae);
          do {
            *(undefined2 *)(&DAT_ffffe180 + iVar9) = 0xff1c;
            __saturate(iVar12);
            param_3 = (int)(char)param_3;
            __saturate((short)unaff_lp * 4);
            uVar18 = CONCAT44(iVar13,(int)*(short *)((int)puVar17 + 0xee));
            in_r14 = 0x4ff1c - in_r14;
            __saturate(in_r14);
            while( true ) {
              *(short *)(puVar17 + 0x12) = (short)((ulonglong)uVar18 >> 0x20);
              *(char *)(param_3 + 0x1078) = (char)iVar12;
              iVar3 = iVar12 + 2;
              iVar14 = iVar12 + 2;
              __saturate(iVar14);
              in_r14 = in_r14 & 0xff;
              *(char *)((int)uVar18 + 0x1f6b) = (char)iVar14;
              bVar2 = iVar12 < -2;
              iVar12 = iVar14;
              if (bVar2) goto LAB_0004ffc6;
              uVar18 = func_0x0009e25e();
              iVar13 = (int)((ulonglong)uVar18 >> 0x20);
              sVar4 = *(short *)((int)puVar17 + 0xd2);
              iVar9 = (int)sVar4;
              *(char *)(in_r13 + 0xf2c) = (char)iVar14;
              *(char *)(param_3 + 0x1078) = (char)iVar14;
              iVar12 = unaff_r25 + 0x7dde;
              __saturate(iVar12);
              uVar10 = (undefined1)iVar12;
              *(undefined1 *)((int)uVar18 + 0x1f53) = uVar10;
              if (-1 < param_1) break;
              *(short *)((int)puVar17 + 0x3a) = sVar4;
              *(undefined1 *)(iVar13 + 0x852) = uVar10;
              *(undefined1 *)((int)uVar18 + 0x1f4e) = uVar10;
            }
          } while( true );
        }
      }
    }
  } while( true );
}


// ==== FUN_0004ff9c @ 0004ff9c (size 31) ====

void FUN_0004ff9c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  int in_r1;
  int in_r2;
  int unaff_gp;
  uint in_r11;
  int in_r12;
  int in_r13;
  uint in_r14;
  int in_r15;
  int in_r16;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_r19;
  int unaff_r25;
  undefined4 unaff_r27;
  undefined4 *unaff_ep;
  undefined4 unaff_lp;
  undefined8 uVar8;
  
  do {
    in_r14 = in_r14 | (uint)&stack0x00000000;
    uVar8 = CONCAT44(unaff_ep[0x16],in_r11);
    iVar5 = in_r16 - unaff_gp;
    __saturate(iVar5);
    iVar6 = iVar5 + 2;
    __saturate(iVar6);
    *(char *)(param_3 + 0x3a16) = (char)iVar6;
    bVar1 = SCARRY4(iVar6,3);
    iVar6 = iVar5 + 5;
    __saturate(iVar6);
    if (iVar5 + 5 < 0) {
      *(char *)(unaff_ep + 0x1e) = (char)in_r15;
      *(char *)(param_3 + 0x1078) = (char)iVar6;
      unaff_ep = (undefined4 *)(uint)*(ushort *)(unaff_ep + 6);
      in_r1 = in_r2 - in_r1;
      __saturate(in_r1);
      in_r15 = (int)*(short *)((int)unaff_ep + 0x1e);
      iVar6 = iVar5 + 7;
      __saturate(iVar5 + 7);
      unaff_gp = (int)(char)unaff_gp;
      in_r16 = iVar5 + 7;
LAB_0004ffc6:
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      *(char *)((int)uVar8 + 0x1f73) = (char)in_r16;
      if (-1 < iVar6) {
        (&DAT_ffffe256)[in_r12] = 0;
        in_r15 = (int)*(short *)((int)unaff_ep + 0x6a);
        *(char *)(param_3 + 0x1078) = (char)in_r16;
        unaff_ep = (undefined4 *)(unaff_gp * 0x1ae);
        do {
          *(short *)(&DAT_ffffe180 + in_r15) = (short)&stack0x00000000;
          __saturate(in_r16);
          param_3 = (int)(char)param_3;
          __saturate(unaff_lp);
          uVar8 = CONCAT44(iVar5,(int)*(short *)((int)unaff_ep + 0xee));
          in_r14 = (int)&stack0x00000000 - in_r14;
          __saturate(in_r14);
          while( true ) {
            *(short *)(unaff_ep + 0x12) = (short)((ulonglong)uVar8 >> 0x20);
            *(char *)(param_3 + 0x1078) = (char)in_r16;
            iVar6 = in_r16 + 2;
            iVar7 = in_r16 + 2;
            __saturate(iVar7);
            in_r14 = in_r14 & 0xff;
            *(char *)((int)uVar8 + 0x1f6b) = (char)iVar7;
            bVar1 = in_r16 < -2;
            in_r16 = iVar7;
            if (bVar1) goto LAB_0004ffc6;
            uVar8 = func_0x0009e25e();
            iVar5 = (int)((ulonglong)uVar8 >> 0x20);
            sVar3 = *(short *)((int)unaff_ep + 0xd2);
            in_r15 = (int)sVar3;
            *(char *)(in_r13 + 0xf2c) = (char)iVar7;
            *(char *)(param_3 + 0x1078) = (char)iVar7;
            in_r16 = unaff_r25 + 0x7dde;
            __saturate(in_r16);
            uVar4 = (undefined1)in_r16;
            *(undefined1 *)((int)uVar8 + 0x1f53) = uVar4;
            if (-1 < param_1) break;
            *(short *)((int)unaff_ep + 0x3a) = sVar3;
            *(undefined1 *)(iVar5 + 0x852) = uVar4;
            *(undefined1 *)((int)uVar8 + 0x1f4e) = uVar4;
          }
        } while( true );
      }
    }
    else {
      while (!bVar1) {
        iVar6 = unaff_ep[9];
        uVar4 = (undefined1)iVar6;
        *(undefined1 *)(param_3 + 0x1d0b) = uVar4;
        iVar5 = unaff_ep[0x20];
        *(char *)(param_3 + -0x2c5) = (char)in_r19;
        __saturate((undefined4 *)((int)unaff_ep + -5));
        __saturate(iVar5 + 0xb);
        *(undefined4 *)((int)unaff_ep + 0x77) = unaff_r27;
        *(undefined1 *)(in_r13 + 0x14) = uVar4;
        iVar6 = iVar6 - unaff_gp;
        __saturate(iVar6);
        __saturate(iVar6 + 2);
        *(char *)(param_3 + 0x1d0b) = (char)(iVar6 + 2);
        iVar6 = iVar6 + 5;
        __saturate(iVar6);
        bVar2 = -(char)(param_4 >> 0x1f);
        unaff_ep = (undefined4 *)((int)unaff_ep + -5);
        bVar1 = bVar2 != 0 && bVar2 == (byte)((uint)-param_4 >> 0x1f);
      }
      func_0x0011e1ca();
      in_r15 = (int)*(short *)(unaff_ep + 0x11);
      *(char *)(param_3 + 0x1d0b) = (char)iVar6;
      in_r16 = iVar6 + 4;
      __saturate(in_r16);
    }
    *(short *)((int)unaff_ep + 0x9a) = (short)unaff_r25;
    *(short *)(unaff_ep + 0x26) = (short)unaff_r25;
    unaff_ep = (undefined4 *)*unaff_ep;
    in_r11 = (uint)&stack0x00000000 ^ 0xd541;
  } while( true );
}


// ==== FUN_0004ffbc @ 0004ffbc (size 121) ====

void FUN_0004ffbc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  undefined1 uVar4;
  int in_r1;
  int in_r2;
  int unaff_gp;
  undefined4 in_r10;
  int iVar5;
  uint in_r11;
  int in_r12;
  int in_r13;
  uint in_r14;
  int iVar6;
  int in_r16;
  int iVar7;
  int iVar8;
  undefined4 in_r19;
  int unaff_r25;
  undefined4 unaff_r27;
  int *unaff_ep;
  undefined4 unaff_lp;
  undefined8 uVar9;
  
  do {
    uVar9 = CONCAT44(in_r10,in_r11);
    unaff_ep = (int *)(uint)*(ushort *)((int)unaff_ep + 0x18);
    in_r1 = in_r2 - in_r1;
    __saturate(in_r1);
    iVar6 = (int)*(short *)((int)unaff_ep + 0x1e);
    __saturate(in_r16 + 2);
    unaff_gp = (int)(char)unaff_gp;
    iVar7 = in_r16 + 2;
LAB_0004ffc6:
    iVar8 = iVar7;
    iVar5 = (int)((ulonglong)uVar9 >> 0x20);
    *(char *)((int)uVar9 + 0x1f73) = (char)iVar8;
    if (-1 < in_r16 + 2) {
      (&DAT_ffffe256)[in_r12] = 0;
      iVar6 = (int)*(short *)((int)unaff_ep + 0x6a);
      *(char *)(param_3 + 0x1078) = (char)iVar8;
      unaff_ep = (int *)(unaff_gp * 0x1ae);
      do {
        *(short *)(&DAT_ffffe180 + iVar6) = (short)&stack0x00000000;
        __saturate(iVar8);
        param_3 = (int)(char)param_3;
        __saturate(unaff_lp);
        uVar9 = CONCAT44(iVar5,(int)*(short *)((int)unaff_ep + 0xee));
        in_r14 = (int)&stack0x00000000 - in_r14;
        __saturate(in_r14);
        while( true ) {
          *(short *)(unaff_ep + 0x12) = (short)((ulonglong)uVar9 >> 0x20);
          *(char *)(param_3 + 0x1078) = (char)iVar8;
          iVar7 = iVar8 + 2;
          __saturate(iVar7);
          in_r14 = in_r14 & 0xff;
          *(char *)((int)uVar9 + 0x1f6b) = (char)iVar7;
          in_r16 = iVar8;
          if (iVar8 < -2) goto LAB_0004ffc6;
          uVar9 = func_0x0009e25e();
          iVar5 = (int)((ulonglong)uVar9 >> 0x20);
          sVar3 = *(short *)((int)unaff_ep + 0xd2);
          iVar6 = (int)sVar3;
          *(char *)(in_r13 + 0xf2c) = (char)iVar7;
          *(char *)(param_3 + 0x1078) = (char)iVar7;
          iVar8 = unaff_r25 + 0x7dde;
          __saturate(iVar8);
          uVar4 = (undefined1)iVar8;
          *(undefined1 *)((int)uVar9 + 0x1f53) = uVar4;
          if (-1 < param_1) break;
          *(short *)((int)unaff_ep + 0x3a) = sVar3;
          *(undefined1 *)(iVar5 + 0x852) = uVar4;
          *(undefined1 *)((int)uVar9 + 0x1f4e) = uVar4;
        }
      } while( true );
    }
    while( true ) {
      *(short *)((int)unaff_ep + 0x9a) = (short)unaff_r25;
      *(short *)(unaff_ep + 0x26) = (short)unaff_r25;
      unaff_ep = (int *)*unaff_ep;
      in_r11 = (uint)&stack0x00000000 ^ 0xd541;
      in_r14 = in_r14 | (uint)&stack0x00000000;
      in_r10 = unaff_ep[0x16];
      iVar8 = iVar8 - unaff_gp;
      __saturate(iVar8);
      iVar7 = iVar8 + 2;
      __saturate(iVar7);
      *(char *)(param_3 + 0x3a16) = (char)iVar7;
      bVar1 = SCARRY4(iVar7,3);
      in_r16 = iVar8 + 5;
      __saturate(in_r16);
      if (iVar8 + 5 < 0) break;
      while (!bVar1) {
        iVar7 = unaff_ep[9];
        uVar4 = (undefined1)iVar7;
        *(undefined1 *)(param_3 + 0x1d0b) = uVar4;
        iVar6 = unaff_ep[0x20];
        *(char *)(param_3 + -0x2c5) = (char)in_r19;
        __saturate((int *)((int)unaff_ep + -5));
        __saturate(iVar6 + 0xb);
        *(undefined4 *)((int)unaff_ep + 0x77) = unaff_r27;
        *(undefined1 *)(in_r13 + 0x14) = uVar4;
        iVar7 = iVar7 - unaff_gp;
        __saturate(iVar7);
        __saturate(iVar7 + 2);
        *(char *)(param_3 + 0x1d0b) = (char)(iVar7 + 2);
        in_r16 = iVar7 + 5;
        __saturate(in_r16);
        bVar2 = -(char)(param_4 >> 0x1f);
        unaff_ep = (int *)((int)unaff_ep + -5);
        bVar1 = bVar2 != 0 && bVar2 == (byte)((uint)-param_4 >> 0x1f);
      }
      func_0x0011e1ca();
      iVar6 = (int)(short)unaff_ep[0x11];
      *(char *)(param_3 + 0x1d0b) = (char)in_r16;
      iVar8 = in_r16 + 4;
      __saturate(iVar8);
    }
    *(char *)(unaff_ep + 0x1e) = (char)iVar6;
    *(char *)(param_3 + 0x1078) = (char)in_r16;
  } while( true );
}


// ==== FUN_0005004e @ 0005004e (size 76) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005004e(void)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_r13;
  int unaff_r24;
  int unaff_r27;
  int unaff_r28;
  int unaff_r29;
  int unaff_ep;
  int unaff_lp;
  
  uVar2 = SUB42(&stack0x00000000,0);
  _DAT_fffff07c = uVar2;
  *(undefined1 *)(unaff_r29 + -0xf84) = 0;
  *(undefined1 *)(unaff_lp + -0xf84) = 0;
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(unaff_r28 + -0x984) = 0;
  *(undefined2 *)(unaff_ep + 0x3e) = uVar2;
  *(undefined1 *)(unaff_r27 + -0x984) = 0;
  *(undefined2 *)(unaff_ep + 0x3c) = uVar2;
  *(undefined1 *)(uVar1 - 0x943) = 0;
  *(undefined2 *)(unaff_ep + 0x50) = uVar2;
  *(undefined1 *)(unaff_r24 + -0x984) = 0;
  *(undefined2 *)(unaff_ep + 0x4c) = uVar2;
  *(undefined1 *)(in_r13 + -0x2c5) = 0;
  __saturate(unaff_ep + -5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000500f4 @ 000500f4 (size 24) ====

void FUN_000500f4(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int in_r15;
  int in_r16;
  int unaff_r21;
  code *unaff_r28;
  int unaff_ep;
  
  uVar2 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(in_r15 + -0x78b7) = *(byte *)(in_r15 + -0x78b7) | 1;
  (*(code *)(uint)uVar2)();
  *(byte *)(in_r16 + -0x2f84) = *(byte *)(in_r16 + -0x2f84) | 1;
  uVar2 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(unaff_r21 + 0x7c00) = *(byte *)(unaff_r21 + 0x7c00) | 1;
  iVar3 = (*unaff_r28)(param_1,0xf07c0000);
  sVar1 = *(short *)(uVar2 + 0xe6);
  *(char *)(iVar3 + 0x7e0) = (char)in_r16;
  *(char *)(sVar1 + 0x1f08) = (char)in_r16;
  FUN_000500f4();
  return;
}


// ==== FUN_0005010c @ 0005010c (size 42) ====

void FUN_0005010c(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int in_r16;
  int unaff_r21;
  code *unaff_r28;
  int unaff_ep;
  
  *(byte *)(in_r16 + -0x2f84) = *(byte *)(in_r16 + -0x2f84) | 1;
  uVar2 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(unaff_r21 + 0x7c00) = *(byte *)(unaff_r21 + 0x7c00) | 1;
  iVar3 = (*unaff_r28)();
  sVar1 = *(short *)(uVar2 + 0xe6);
  *(char *)(iVar3 + 0x7e0) = (char)in_r16;
  *(char *)(sVar1 + 0x1f08) = (char)in_r16;
  FUN_000500f4();
  return;
}


// ==== FUN_00050420 @ 00050420 (size 156) ====

void FUN_00050420(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  code *pcVar2;
  int extraout_r11;
  int in_r16;
  undefined4 in_r19;
  int unaff_ep;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  __saturate(0xfffffffd);
  uVar3 = (uint)*(ushort *)
                 (*(ushort *)
                   (*(ushort *)
                     (*(ushort *)
                       (*(ushort *)
                         (*(ushort *)
                           (*(ushort *)(*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18) + 0x18) +
                           0x18) + 0x18) + 0x18) + 0x18) + 0x18) + 0x18);
  pcVar2 = (code *)0x2;
  __saturate(2);
  do {
    __saturate(pcVar2 + 6);
    uVar3 = (uint)*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
    pcVar2 = pcVar2 + 0xe;
    __saturate(pcVar2);
    while( true ) {
      __saturate(pcVar2 + 9);
      uVar3 = (uint)*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
      pcVar2 = pcVar2 + 0x10;
      __saturate(pcVar2);
      uVar1 = *(ushort *)(uVar3 + 0x18);
      *(short *)(param_3 + -0x18f8) = (short)in_r19;
      *(ushort *)(uVar1 - 0x78b8) = uVar1;
      uVar4 = (uint)SCARRY4(in_r16,2) << 2 | (uint)(in_r16 + 2 < 0) << 1;
      in_r16 = in_r16 + 2;
      __saturate(in_r16);
      (*pcVar2)();
      *(char *)(extraout_r11 + 0x206d) = (char)in_r16;
      if (((byte)(uVar4 >> 1) & 1) != ((byte)(uVar4 >> 2) & 1)) break;
      uVar5 = func_0x000ae702();
      *(char *)((int)((ulonglong)uVar5 >> 0x20) + 0x313a) = (char)in_r16;
      *(char *)((int)uVar5 + 0x1eca) = (char)in_r16;
    }
  } while( true );
}


// ==== FUN_0005069c @ 0005069c (size 154) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005069c(uint param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint in_r1;
  int iVar5;
  int iVar6;
  int in_r12;
  int in_r13;
  int in_r14;
  uint uVar7;
  int iVar8;
  int in_r16;
  uint uVar9;
  int iVar10;
  undefined4 unaff_r20;
  uint unaff_r22;
  undefined4 unaff_r28;
  uint unaff_ep;
  uint uVar11;
  undefined8 uVar12;
  
  uVar11 = unaff_ep | param_3 | param_3 | param_3 | param_3 | param_3 | param_3 | param_3 | param_3;
  iVar5 = (int)*(short *)(uVar11 + 0x18);
  *(undefined4 *)(uVar11 + 0xd4) = unaff_r28;
  uVar12 = func_0xfff88e70();
  iVar6 = (int)((ulonglong)uVar12 >> 0x20);
  *(BADSPACEBASE **)(uVar11 + 0x14) = register0x0000000c;
  *(char *)(iVar6 + 0x1f62) = (char)in_r16;
  __saturate(in_r16 + 4);
  __saturate((int)&stack0x00000000 - in_r14);
  uVar2 = (undefined2)iVar5;
  Ram00000012 = uVar2;
  uVar3 = (undefined1)(in_r16 + 4);
  *(undefined1 *)(iVar6 + 0x204a) = uVar3;
  *(undefined1 *)(param_3 + 0x1d0b) = uVar3;
  uVar9 = in_r16 + 8;
  __saturate(uVar9);
  uVar7 = (int)&stack0x00000000 - ((int)&stack0x00000000 - in_r14);
  __saturate(uVar7);
  Ram0000000c = uVar2;
  _DAT_000000f4 = unaff_r20;
  *(char *)((int)uVar12 + 0x1d0b) = (char)uVar9;
  *(char *)(iVar6 + 0x20ff) = (char)uVar9;
  uVar11 = uRam000000dc;
  iVar4 = iRam00000050;
  uVar9 = uVar9 ^ in_r1;
  __saturate(uVar9);
  uVar7 = (int)&stack0x00000000 - (uVar7 >> 3);
  __saturate(uVar7);
  Ram00000018 = uVar2;
  uVar3 = (undefined1)uVar9;
  *(undefined1 *)(param_3 + 0x1d0b) = uVar3;
  *(undefined1 *)(param_3 + 0x200e) = uVar3;
  *(undefined1 *)(param_3 + 0x1fd8) = uVar3;
  *(undefined1 *)(param_3 + 0x1fa2) = uVar3;
  iRam00000054 = -iVar4;
  uVar3 = DAT_0000000e;
  uVar9 = uVar9 ^ unaff_r22;
  __saturate(uVar9 - 0x10);
  uVar3 = Ram0000000d;
  __saturate(uVar9 - 0x1f);
  __saturate(uVar9 - 0x26);
  uVar9 = uVar9 - 0x26 ^ unaff_r22 ^ uVar11;
  sVar1 = *(short *)(param_3 + 0x3e);
  iVar8 = (int)&stack0x00000000 - (uVar7 >> 3);
  __saturate(iVar8);
  __saturate(uVar9 + 0x27ef);
  __saturate(uVar9 + 0x4fde);
  __saturate(uVar9 + 0x77cd);
  iVar10 = uVar9 + 0x9fcc;
  __saturate(iVar10);
  *(undefined2 *)(param_3 + 0x12) = uVar2;
  *(uint *)(param_3 + 0x9c) = uVar11;
  uVar3 = (undefined1)iVar10;
  *(undefined1 *)(param_3 + 0x2054) = uVar3;
  *(undefined1 *)((param_1 | 0xa575) + 0x2068) = uVar3;
  *(undefined1 *)(iVar6 + 0x2063) = uVar3;
  *(undefined1 *)(iVar5 + 0x205e) = uVar3;
  *(undefined1 *)(in_r13 + 0x2059) = uVar3;
  *(undefined1 *)(in_r12 + 0x1d0b) = uVar3;
  __saturate(iVar10);
  __saturate((int)&stack0x00000000 - iVar8);
  *(undefined2 *)(param_3 + 10) = uVar2;
  *(uint *)(param_3 + 0xd0) = uVar11;
  *(char *)(iVar4 + -0x2c5) = (char)*(undefined2 *)(param_3 + 0xde);
  __saturate(param_3 + 0xb);
  __saturate(sVar1 + 0xf84);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050736 @ 00050736 (size 388) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050736(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint in_r1;
  int in_r10;
  int in_r11;
  int in_r12;
  int in_r13;
  int in_r14;
  uint uVar6;
  int iVar7;
  int in_r16;
  uint uVar8;
  int iVar9;
  undefined4 unaff_r20;
  uint unaff_r22;
  
  *(char *)(in_r10 + 0x1f62) = (char)in_r16;
  __saturate(in_r16 + 4);
  __saturate((int)&stack0x00000000 - in_r14);
  uVar2 = (undefined2)param_4;
  Ram00000012 = uVar2;
  uVar3 = (undefined1)(in_r16 + 4);
  *(undefined1 *)(in_r10 + 0x204a) = uVar3;
  *(undefined1 *)(param_3 + 0x1d0b) = uVar3;
  uVar8 = in_r16 + 8;
  __saturate(uVar8);
  uVar6 = (int)&stack0x00000000 - ((int)&stack0x00000000 - in_r14);
  __saturate(uVar6);
  Ram0000000c = uVar2;
  _DAT_000000f4 = unaff_r20;
  *(char *)(in_r11 + 0x1d0b) = (char)uVar8;
  *(char *)(in_r10 + 0x20ff) = (char)uVar8;
  uVar5 = uRam000000dc;
  iVar4 = iRam00000050;
  uVar8 = uVar8 ^ in_r1;
  __saturate(uVar8);
  uVar6 = (int)&stack0x00000000 - (uVar6 >> 3);
  __saturate(uVar6);
  Ram00000018 = uVar2;
  uVar3 = (undefined1)uVar8;
  *(undefined1 *)(param_3 + 0x1d0b) = uVar3;
  *(undefined1 *)(param_3 + 0x200e) = uVar3;
  *(undefined1 *)(param_3 + 0x1fd8) = uVar3;
  *(undefined1 *)(param_3 + 0x1fa2) = uVar3;
  iRam00000054 = -iVar4;
  uVar3 = DAT_0000000e;
  uVar8 = uVar8 ^ unaff_r22;
  __saturate(uVar8 - 0x10);
  uVar3 = Ram0000000d;
  __saturate(uVar8 - 0x1f);
  __saturate(uVar8 - 0x26);
  uVar8 = uVar8 - 0x26 ^ unaff_r22 ^ uVar5;
  sVar1 = *(short *)(param_3 + 0x3e);
  iVar7 = (int)&stack0x00000000 - (uVar6 >> 3);
  __saturate(iVar7);
  __saturate(uVar8 + 0x27ef);
  __saturate(uVar8 + 0x4fde);
  __saturate(uVar8 + 0x77cd);
  iVar9 = uVar8 + 0x9fcc;
  __saturate(iVar9);
  *(undefined2 *)(param_3 + 0x12) = uVar2;
  *(uint *)(param_3 + 0x9c) = uVar5;
  uVar3 = (undefined1)iVar9;
  *(undefined1 *)(param_3 + 0x2054) = uVar3;
  *(undefined1 *)((param_1 | 0xa575) + 0x2068) = uVar3;
  *(undefined1 *)(in_r10 + 0x2063) = uVar3;
  *(undefined1 *)(param_4 + 0x205e) = uVar3;
  *(undefined1 *)(in_r13 + 0x2059) = uVar3;
  *(undefined1 *)(in_r12 + 0x1d0b) = uVar3;
  __saturate(iVar9);
  __saturate((int)&stack0x00000000 - iVar7);
  *(undefined2 *)(param_3 + 10) = uVar2;
  *(uint *)(param_3 + 0xd0) = uVar5;
  *(char *)(iVar4 + -0x2c5) = (char)*(undefined2 *)(param_3 + 0xde);
  __saturate(param_3 + 0xb);
  __saturate(sVar1 + 0xf84);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005091c @ 0005091c (size 216) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005091c(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int in_r1;
  uint in_r12;
  uint in_r13;
  int in_r15;
  int iVar4;
  uint in_r19;
  undefined2 unaff_r27;
  int unaff_r28;
  int iVar5;
  int unaff_r29;
  int unaff_ep;
  undefined1 *puVar6;
  uint uVar7;
  int unaff_lp;
  
  cVar1 = *(char *)(in_r19 - 0x5ddd);
  *(short *)(unaff_r28 + 0x2186) = (short)unaff_lp;
  __saturate(unaff_r29 - 0xbU);
  uVar2 = *(ushort *)(unaff_ep + 0x18);
  uVar3 = SUB42(&stack0x00000000,0);
  *(undefined2 *)(in_r1 + 0x7826) = uVar3;
  _DAT_00007886 = uVar3;
  *(undefined1 *)(unaff_lp + -0xfe1) = 0;
  iVar4 = param_1 - in_r15;
  __saturate(iVar4);
  __saturate((unaff_r29 - 0xbU ^ (int)cVar1 ^ in_r12 ^ param_2) + 4);
  puVar6 = (undefined1 *)(uint)*(ushort *)(uVar2 + 0x18);
  *(undefined4 *)(puVar6 + 0xa8) = 0;
  do {
    iVar5 = (int)DAT_ffffe381;
    puVar6 = (undefined1 *)(uint)*(ushort *)(*(ushort *)(puVar6 + 0x18) + 0x18);
    puVar6[0x7826] = 0;
    (&DAT_00007886)[unaff_r29] = 0;
    *(undefined1 *)(iVar5 + -0xfe1) = 0;
    iVar4 = param_1 - iVar4;
    __saturate(iVar4);
    *puVar6 = DAT_ffffbf7e;
  } while (-1 < (int)(in_r13 | 0xfffffff1 | param_3 | (uint)&stack0x00000000));
  *(uint *)((char)puVar6[0x7c] + -0xcc6) = in_r19;
  __saturate(puVar6 + -5);
  *(undefined2 *)(puVar6 + 0x6b) = uVar3;
  uVar7 = (uint)*(ushort *)(puVar6 + 0x15);
  __saturate(*(int *)(uVar7 + 0xf8) + -1);
  __saturate(*(ushort *)(uVar7 + 0x1a) - 1);
  uVar7 = (uint)*(ushort *)(*(short *)(uVar7 + 0xf8) + 0x1a);
  *(undefined2 *)(unaff_r29 + 0x1622) = unaff_r27;
  __saturate(~in_r19 - in_r19);
  *(undefined2 *)(uVar7 + 0x86) = *(undefined2 *)(uVar7 + 0x86);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000509f4 @ 000509f4 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000509f4(void)

{
  uint in_r19;
  undefined2 unaff_r27;
  int unaff_r29;
  int unaff_ep;
  uint uVar1;
  
  __saturate(*(ushort *)(unaff_ep + 0x1a) - 1);
  uVar1 = (uint)*(ushort *)(*(short *)(unaff_ep + 0xf8) + 0x1a);
  *(undefined2 *)(unaff_r29 + 0x1622) = unaff_r27;
  __saturate(~in_r19 - in_r19);
  *(undefined2 *)(uVar1 + 0x86) = *(undefined2 *)(uVar1 + 0x86);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050e68 @ 00050e68 (size 40) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00050e68(void)

{
  undefined4 in_r15;
  int unaff_r21;
  undefined2 unaff_r23;
  int unaff_r29;
  int unaff_ep;
  
  *(char *)(unaff_ep + 0x10) = (char)in_r15;
  DAT_ffffe000 = DAT_ffffe000 ^ 1;
  *(undefined4 *)(unaff_r21 + 0x5c) = in_r15;
  *(undefined2 *)(unaff_r29 + -0x58d8) = unaff_r23;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00050ea6 @ 00050ea6 (size 44) ====

void FUN_00050ea6(int param_1)

{
  undefined4 unaff_tp;
  undefined4 unaff_r26;
  undefined4 *unaff_ep;
  
  unaff_ep[10] = unaff_r26;
  *unaff_ep = unaff_tp;
                    /* WARNING: Could not recover jumptable at 0x00050ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00050ed2 + *(short *)(&DAT_00050ed2 + param_1 * 2) * 2))();
  return;
}


// ==== FUN_000510aa @ 000510aa (size 332) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000510aa(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  uint in_r1;
  uint in_r2;
  undefined2 unaff_tp;
  short sVar6;
  int in_r10;
  int in_r14;
  undefined2 uVar7;
  int in_r16;
  int in_r18;
  int iVar8;
  int in_r19;
  int unaff_r20;
  uint unaff_r21;
  int unaff_r23;
  int iVar9;
  uint unaff_r29;
  int unaff_ep;
  uint uVar10;
  int iVar11;
  short *psVar12;
  uint in_PSW;
  
  iVar9 = (int)*(char *)(param_3 + -0xa84);
  *(undefined2 *)(unaff_ep + 0x94) = unaff_tp;
  *(undefined2 *)(unaff_ep + 0x96) = unaff_tp;
  uVar10 = (uint)*(ushort *)(unaff_ep + 0x18);
  uVar4 = (undefined1)*(undefined2 *)(uVar10 + 0x76);
  *(undefined1 *)(uVar10 + 0x4f) = uVar4;
  *(undefined1 *)(uVar10 + 0x50) = uVar4;
  bVar3 = (bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(unaff_r20,2);
  __saturate(unaff_r20 + 2);
  uVar7 = *(undefined2 *)(uVar10 + 0xa0);
  sVar6 = *(short *)(uVar10 + 0xc4);
  uVar5 = (undefined1)in_r16;
  if (unaff_r20 + 2 < 0) {
    uVar7 = *(undefined2 *)(uVar10 + 0x20);
    *(undefined1 *)(uVar10 + 0x51) = uVar4;
    *(undefined1 *)(uVar10 + 0x53) = uVar4;
    *(undefined1 *)(uVar10 + 0x55) = uVar4;
    *(undefined1 *)(uVar10 + 0x52) = uVar4;
    *(undefined1 *)(uVar10 + 0x54) = uVar4;
    *(undefined1 *)(uVar10 + 0x56) = uVar4;
    bVar2 = (int)unaff_r29 < 0 && -1 < (int)(unaff_r29 - 0x15ec);
    uVar10 = unaff_r29 - 0x15ec;
    __saturate(uVar10);
    if ((int)(unaff_r29 - 0x15ec) < 0 == bVar2) {
LAB_00051116:
      in_r18 = in_r18 - iVar9;
      __saturate(in_r18);
      *(short *)(iVar9 + 0x2bac) = (short)uVar10;
      *(undefined1 *)(in_r10 + 0x2bdc) = uVar5;
    }
    else {
      sVar6 = *(short *)(unaff_r29 - 0x1528);
      bVar1 = -1 < (int)(unaff_r29 - 0x15ee);
      bVar3 = (bVar3 || bVar2) || (int)unaff_r29 < 0 && bVar1;
      uVar10 = unaff_r29 - 0x15ee;
      __saturate(uVar10);
      if ((int)unaff_r29 >= 0 || !bVar1) goto LAB_000510f6;
    }
LAB_00051122:
    *(undefined1 *)(uVar10 + 0x51) = uVar4;
    iVar9 = iVar9 + -10;
    in_r18 = in_r18 - iVar9;
    __saturate(in_r18);
  }
  else {
LAB_000510f6:
    if (bVar3) goto LAB_00051122;
    uVar10 = unaff_r29 - 0x15ed;
    __saturate(uVar10);
    if ((int)(unaff_r29 - 0x15ed) < 0 != ((int)unaff_r29 < 0 && -1 < (int)(unaff_r29 - 0x15ed)) ||
        unaff_r29 == 0x15ed) {
      iVar11 = unaff_r29 - 0x15ef;
      __saturate(iVar11);
      if (unaff_r29 < 0x15ef) goto LAB_00051130;
      uVar10 = *(uint *)(unaff_r29 - 0x14f7);
      *(undefined1 *)(uVar10 + 0x4f) = uVar4;
      _DAT_000057e7 = (undefined2)uVar10;
      *(undefined1 *)(in_r10 + 0x2bd8) = uVar5;
      iVar9 = 0x2c31;
      goto LAB_00051116;
    }
  }
  *(undefined1 *)(uVar10 + 0x53) = uVar4;
  iVar11 = *(int *)(uVar10 + 0xf8);
  *(undefined1 *)(iVar11 + 0x50) = uVar4;
LAB_00051130:
  *(short *)(iVar9 + 0x2bac) = (short)iVar11;
  *(undefined1 *)(in_r10 + 0x2bda) = uVar5;
  iVar8 = in_r18 - (iVar9 + -10);
  __saturate(iVar8);
  *(short *)(iVar9 + 0x2ba2) = (short)iVar11;
  *(undefined1 *)(in_r10 + 0x2bde) = uVar5;
  *(undefined1 *)(iVar11 + 0x52) = uVar4;
  iVar8 = iVar8 - (iVar9 + -0x14);
  __saturate(iVar8);
  *(undefined1 *)(iVar11 + 0x54) = uVar4;
  iVar9 = (int)*(char *)(param_3 + -0xa84);
  *(undefined1 *)(iVar11 + 0x53) = uVar4;
  *(int *)(iVar9 + 0x2bac) = iVar11;
  *(undefined1 *)(in_r10 + 0x2be0) = uVar5;
  iVar8 = iVar8 - (iVar9 + -10);
  __saturate(iVar8);
  *(undefined1 *)(iVar11 + 0x55) = uVar4;
  iVar11 = *(int *)(iVar11 + 0xf8);
  *(undefined1 *)(iVar11 + 0x54) = uVar4;
  *(int *)(iVar9 + 0x2ba2) = iVar11;
  *(undefined1 *)(in_r10 + 0x2be2) = uVar5;
  __saturate(iVar8 - (iVar9 + -0x14));
  uVar10 = (uint)*(ushort *)(iVar11 + 0x18);
  *(undefined1 *)(uVar10 + 0x53) = uVar4;
  *(undefined2 *)(uVar10 + 0xc) = uVar7;
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  *(undefined1 *)(uVar10 + 0x55) = uVar4;
  __saturate(in_r1 - (int)*(short *)(uVar10 + 0xc));
  uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
  *(undefined1 *)(uVar10 + 0x30) = uVar4;
  *(undefined1 *)(uVar10 + 0x56) = uVar4;
  psVar12 = (short *)(uint)*(ushort *)(uVar10 + 0x18);
  *(undefined1 *)((int)psVar12 + 0x2f) = uVar4;
  *(int *)(psVar12 + 2) = (int)psVar12[3];
  *psVar12 = (short)DAT_ffffe481;
  *(undefined1 *)(psVar12 + 0x17) = uVar4;
  psVar12[0x30] = sVar6;
  *(char *)((int)psVar12 + 0x17) = (char)in_r14;
  __saturate(unaff_r23 - in_r14);
  __saturate(psVar12[0x57] + in_r16);
  *(uint *)(psVar12 + 2) = unaff_r21 | in_r1 | in_r2;
  __saturate((unaff_r23 - in_r14) - in_r19);
  psVar12[0x43] = (short)param_3;
  return;
}


// ==== FUN_0005139e @ 0005139e (size 81) ====

void FUN_0005139e(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 in_r14;
  undefined1 uVar1;
  undefined1 in_r16;
  int in_r17;
  code *unaff_r24;
  undefined2 unaff_r26;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0xee) = *(undefined2 *)(unaff_ep + 4);
  *(undefined1 *)(unaff_ep + 0x17) = in_r14;
  uVar1 = *(undefined1 *)(unaff_ep + 3);
  *(undefined1 *)(param_3 + 0x5754) = in_r16;
  *(undefined2 *)(unaff_ep + 200) = unaff_r26;
  (*unaff_r24)();
  (*(code *)&stack0x00000000)();
  *(undefined2 *)(unaff_ep + 0xee) = *(undefined2 *)(unaff_ep + 4);
  *(undefined1 *)(unaff_ep + 0x17) = uVar1;
  *(undefined1 *)(param_3 + 0x5754) = in_r16;
  *(undefined2 *)(unaff_ep + 200) = unaff_r26;
  (*unaff_r24)();
                    /* WARNING: Could not recover jumptable at 0x000513ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000513f0 + *(short *)(&DAT_000513f0 + in_r17 * 2) * 2))();
  return;
}


// ==== FUN_00051438 @ 00051438 (size 234) ====

void FUN_00051438(undefined4 param_1,byte *param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  int in_r1;
  int in_r2;
  short unaff_gp;
  int unaff_tp;
  undefined2 uVar7;
  int extraout_r11;
  undefined2 in_r13;
  undefined1 in_r14;
  undefined1 uVar8;
  uint in_r16;
  uint uVar9;
  int iVar10;
  undefined4 unaff_r20;
  int iVar11;
  uint unaff_r22;
  code *unaff_r24;
  int unaff_r26;
  int iVar12;
  int unaff_ep;
  uint uVar13;
  uint uVar14;
  code *pcVar15;
  short unaff_lp;
  int iVar16;
  undefined8 uVar17;
  
  cVar2 = *(char *)(unaff_tp + -0x7eea);
  *(undefined4 *)(unaff_ep + 4) = unaff_r20;
  *(undefined2 *)(unaff_ep + 0x60) = param_4;
  uVar7 = *(undefined2 *)(unaff_ep + 0x60);
  *(undefined1 *)(unaff_ep + 0x17) = in_r14;
  uVar8 = *(undefined1 *)(unaff_ep + 3);
  *(char *)(param_3 + 0x5754) = (char)in_r16;
  *(short *)(unaff_ep + 200) = (short)unaff_r26;
  (*unaff_r24)();
  *(undefined2 *)(unaff_ep + 0x60) = uVar7;
  uVar7 = *(undefined2 *)(unaff_ep + 0x60);
  *(undefined1 *)(unaff_ep + 0x17) = uVar8;
  *(char *)(param_3 + 0x5754) = (char)in_r16;
  *(short *)(unaff_ep + 200) = (short)unaff_r26;
  uVar17 = (*unaff_r24)();
  cVar3 = *(char *)(param_3 + -0x7d85);
  __saturate(unaff_r26 + 0xb);
  cVar4 = *(char *)(unaff_ep + 0x3f);
  uVar6 = *(ushort *)(unaff_ep + 0x18);
  *(char *)(uVar6 + 0x7c) = (char)unaff_tp;
  uVar13 = (uint)*(ushort *)(uVar6 + 0x18);
  *(undefined2 *)(uVar13 + 0x60) = uVar7;
  uVar9 = in_r16 | unaff_r22;
  uVar14 = (uint)*(ushort *)(uVar13 + 0x18);
  *(char *)(uVar14 + 0x38) = (char)*(undefined2 *)(uVar13 + 4);
  uVar7 = *(undefined2 *)(uVar14 + 0x28);
  uVar8 = (undefined1)uVar9;
  *(undefined1 *)(param_3 + 0x5754) = uVar8;
  uVar13 = in_r2 - cVar3;
  __saturate(uVar13);
  pcVar15 = (code *)(uint)*(ushort *)(uVar14 + 0x18);
  pcVar15[0x37] = SUB21(uVar7,0);
  sVar5 = *(short *)(pcVar15 + 0x12);
  iVar11 = (int)sVar5;
  *(undefined1 *)(param_3 + 0x5754) = uVar8;
  __saturate(in_r1 - (uVar13 & 0xffff));
  *(undefined1 *)((int)uVar17 + 0x5754) = uVar8;
  __saturate(uVar9 - 0xc);
  __saturate(uVar9 - 0x16);
  iVar16 = (int)(short)(unaff_lp * unaff_gp) * (int)unaff_gp -
           ((int)cVar2 | (uint)((ulonglong)uVar17 >> 0x20));
  __saturate(iVar16);
  iVar12 = (int)(short)(cVar4 * unaff_gp * unaff_gp * unaff_gp) * (int)unaff_gp -
           (unaff_r22 & 0xffff);
  __saturate(iVar12);
  iVar10 = uVar9 - 0x21;
  __saturate(iVar10);
  (*pcVar15)();
  iVar16 = (int)(short)iVar16 * (int)(short)param_2;
  bVar1 = (byte)(sVar5 >> 0xf) >> 7;
  __saturate(iVar12 - iVar11);
  *(char *)(extraout_r11 + 0xf2c) = (char)iVar10;
  uVar9 = (uint)((byte)((uint)iVar12 >> 0x1f) != bVar1 &&
                bVar1 == (byte)((uint)(iVar12 - iVar11) >> 0x1f)) << 2;
  do {
    bVar1 = *param_2;
    *param_2 = bVar1 ^ '\x01' << iVar16;
    uVar14 = uVar9 & 0xfffffffe | (uint)((bVar1 & '\x01' << iVar16) == 0);
    uVar13 = uVar9 >> 2;
    uVar9 = uVar14;
  } while (iVar12 - iVar11 < 0 != SUB41(uVar13,0) || (bool)((byte)uVar14 & 1));
  *(char *)(extraout_r11 + 0x5668) = (char)iVar10;
  *(undefined2 *)(*(ushort *)(pcVar15 + 0x18) + 0x22) = in_r13;
  __saturate(iVar10 + -9);
                    /* WARNING: Could not recover jumptable at 0x00051520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00051522 + *(short *)(&DAT_00051522 + (iVar12 - iVar11) * 2) * 2))();
  return;
}


// ==== FUN_0005157c @ 0005157c (size 20) ====

void FUN_0005157c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_r10;
  int in_r11;
  undefined4 in_r16;
  int unaff_r25;
  int unaff_ep;
  
  *(undefined4 *)(unaff_ep + 0x40) = in_r10;
  *(char *)(param_3 + 0x5668) = (char)in_r16;
  *(char *)(in_r11 + 0x5754) = (char)in_r16;
  __saturate(in_r16);
                    /* WARNING: Could not recover jumptable at 0x0005158e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00051590 + *(short *)(&DAT_00051590 + unaff_r25 * 2) * 2))();
  return;
}


// ==== FUN_000515c2 @ 000515c2 (size 32) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000515c2(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  uint in_r1;
  uint in_r2;
  undefined4 unaff_gp;
  undefined1 unaff_tp;
  int iVar6;
  ushort uVar7;
  uint in_r14;
  byte bVar8;
  uint in_r16;
  uint in_r19;
  uint unaff_r21;
  uint uVar9;
  int unaff_r22;
  undefined2 unaff_r26;
  ushort uVar10;
  int unaff_r28;
  int iVar11;
  int unaff_ep;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint unaff_lp;
  uint uVar15;
  
  iVar12 = *(int *)(unaff_ep + 0xf8);
  *(undefined1 *)(iVar12 + 0x65) = unaff_tp;
  *(uint *)(iVar12 + 0x84) = param_3;
  *(undefined4 *)(iVar12 + 0xc0) = param_4;
  *(uint *)(iVar12 + 0x48) = *(uint *)(iVar12 + 0xac) ^ in_r16;
  iVar12 = *(int *)(iVar12 + 0xf8);
  *(undefined1 *)(iVar12 + 0x36) = unaff_tp;
  *(undefined1 *)(*(int *)(iVar12 + 0xf8) + 0x35) = unaff_tp;
  __saturate(unaff_r28 + -0x2bb4);
  sVar3 = *(short *)(unaff_r28 + -0x2b82);
  uVar7 = (ushort)unaff_gp & 0x2bf4;
  __saturate(unaff_r28 + -0x2bb3);
  uVar13 = *(uint *)(unaff_r28 + -0x2abb);
  *(undefined4 *)(uVar13 + 4) = unaff_gp;
  iVar11 = (int)DAT_ffffe700;
  uVar9 = unaff_r21 | param_3 | (int)sVar3 | in_r1;
  uVar15 = (uint)((in_r14 ^ in_r19) < in_r19) << 3 | (uint)(uVar9 == 0);
  iVar12 = -0xe;
  if ((int)uVar9 < 0 || (bool)((byte)uVar15 & 1)) {
    iVar12 = *(int *)(uVar13 + 0xf8);
    uVar2 = *(undefined1 *)(iVar12 + 0x52);
    *(int *)(iVar11 + 0x2bc2) = iVar12;
    *(char *)(iVar12 + 0x46) = (char)uVar9 + '\x13';
    uVar15 = (uint)*(ushort *)(iVar12 + 0x18);
    *(undefined1 *)(uVar15 + 0x42) = uVar2;
    *(undefined1 *)(uVar15 + 0x73) = uVar2;
    __saturate(in_r1 - (int)DAT_ffffe080);
    __saturate(in_r1 - 0x2bf3);
    uVar4 = *(undefined2 *)(uVar15 + 2);
    uVar7 = *(ushort *)(uVar15 + 0x18);
    *(undefined1 *)(uVar7 + 0x33) = uVar2;
    *(undefined1 *)(*(ushort *)(uVar7 + 0x18) + 0x34) = uVar2;
    __saturate(in_r1 - 0x580c);
    iVar12 = (int)*(char *)(in_r1 - 0x57d1);
    __saturate(iVar12 + -5);
    uVar2 = (undefined1)*(undefined2 *)(in_r1 - 0x57f2);
    *(undefined1 *)(iVar12 + 0x77) = uVar2;
    *(undefined2 *)(iVar12 + 0x5b) = uVar4;
    *(undefined1 *)(iVar12 + 0x12) = *(undefined1 *)(iVar12 + 0x12);
    uVar7 = *(ushort *)(iVar12 + 0x4f);
    uVar14 = *(uint *)(iVar12 + 0xf3);
    *(undefined1 *)(uVar14 + 0x3a) = uVar2;
    cVar5 = DAT_ffffe700;
    uVar15 = uVar9 | param_2 | (uint)&stack0x00000000 | (uint)&stack0x00000000 | in_r1;
    *(char *)(param_3 + 0x5754) = (char)unaff_r22;
    __saturate(unaff_r22 + 1);
    bVar1 = uVar15 <= unaff_lp;
    unaff_lp = unaff_lp - uVar15;
    __saturate(unaff_lp);
    uVar10 = (ushort)*(undefined4 *)(uVar14 + 0xf8);
    DAT_ffffc000 = (byte)(unaff_r22 + 1);
    iVar6 = (int)*(short *)(uVar14 + 0x88);
    uVar14 = uVar14 / 0;
    if (bVar1 && uVar14 != 0) {
      uVar9 = (uint)*(ushort *)(uVar14 + 0x18);
      *(ushort *)(uVar9 + 0x60) = uVar7;
      *(undefined1 *)(uVar9 + 0x17) = *(undefined1 *)(uVar9 + 0x17);
      uVar7 = *(ushort *)(uVar9 + 0x54);
      uVar13 = *(uint *)(uVar9 + 0xf8);
      iVar11 = (int)DAT_ffffe700;
      uVar9 = uVar15 | in_r2 & 0xffff | in_r1;
      uVar15 = (uint)(unaff_lp < uVar9) << 3;
      unaff_lp = unaff_lp - uVar9;
      __saturate(unaff_lp);
      unaff_gp = 4;
      unaff_r26 = (undefined2)*(undefined4 *)(uVar13 + 0xf8);
      iVar12 = unaff_r22;
      goto LAB_0005170c;
    }
  }
  else {
LAB_0005170c:
    iVar6 = (int)*(short *)(uVar13 + 0x88);
    DAT_ffffc000 = (byte)iVar12;
    *(uint *)(iVar11 + 0x2b52) = uVar13;
    bVar8 = (byte)iVar12 | (byte)param_2;
    uVar13 = uVar13 / 0;
    if (SUB41(uVar15 >> 3,0) || uVar13 == 0) goto LAB_000517bc;
    uVar10 = *(ushort *)(uVar13 + 0x18);
    uVar14 = (uint)*(ushort *)(uVar13 + 0x18);
    *(undefined4 *)(uVar14 + 4) = unaff_gp;
    cVar5 = DAT_ffffe700;
    *(ushort *)(uVar14 + 0x3e) = (ushort)unaff_lp & 0x8f11;
    *(ushort *)(uVar14 + 0x80) = uVar7;
    register0x0000000c = (BADSPACEBASE *)((uint)uVar10 - (int)&stack0x00000000);
    *(ushort *)(uVar14 + 0x80) = uVar7;
    __saturate(param_1 + 0x5ffd);
    *(ushort *)(uVar14 + 0x80) = uVar7;
    param_1 = (int)*(char *)(uVar14 + 0x33);
  }
  *(ushort *)(uVar14 + 0x80) = uVar7;
  *(ushort *)(cVar5 + 0x2c0e) = uVar10;
  unaff_r26 = *(undefined2 *)(uVar14 + 0x18);
  uVar13 = (uint)*(ushort *)(uVar14 + 0x18);
  *(ushort *)(cVar5 + 0x2b58) = *(ushort *)(uVar14 + 0x18);
  bVar8 = (byte)*(undefined4 *)(uVar13 + 0x20);
  *(BADSPACEBASE **)(uVar13 + 4) = register0x0000000c;
  *(BADSPACEBASE **)(uVar13 + 4) = register0x0000000c;
  iVar11 = (int)DAT_ffffe700;
  *(ushort *)(uVar13 + 0x3e) = (ushort)unaff_lp & 0x8f11;
  *(ushort *)(uVar13 + 0x80) = uVar7;
  *(ushort *)(uVar13 + 0x80) = uVar7;
LAB_000517bc:
  __saturate(param_1 + 0x5ffd);
  *(ushort *)(uVar13 + 0x80) = uVar7;
  *(ushort *)(uVar13 + 0x80) = uVar7;
  *(undefined2 *)(iVar11 + 0x2c10) = unaff_r26;
  *(byte *)(iVar6 + 0x5754) = bVar8;
  *(short *)(uVar13 + 0x80) = (short)iVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000515e2 @ 000515e2 (size 538) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000515e2(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar5;
  uint in_r1;
  uint in_r2;
  undefined4 unaff_gp;
  undefined1 unaff_tp;
  ushort uVar6;
  uint in_r14;
  byte bVar7;
  int in_r16;
  uint in_r19;
  uint unaff_r21;
  uint uVar8;
  int unaff_r22;
  undefined2 unaff_r26;
  ushort uVar9;
  int unaff_r28;
  int iVar10;
  int unaff_ep;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint unaff_lp;
  uint uVar14;
  
  *(undefined1 *)(unaff_ep + 0x35) = unaff_tp;
  __saturate(unaff_r28 + -0x2bb4);
  sVar3 = *(short *)(unaff_r28 + -0x2b82);
  uVar6 = (ushort)unaff_gp & 0x2bf4;
  __saturate(unaff_r28 + -0x2bb3);
  uVar11 = *(uint *)(unaff_r28 + -0x2abb);
  *(undefined4 *)(uVar11 + 4) = unaff_gp;
  iVar10 = (int)DAT_ffffe700;
  uVar8 = unaff_r21 | param_3 | (int)sVar3 | in_r1;
  uVar14 = (uint)(in_r14 < in_r19) << 3 | (uint)(uVar8 == 0);
  if ((int)uVar8 < 0 || (bool)((byte)uVar14 & 1)) {
    iVar12 = *(int *)(uVar11 + 0xf8);
    uVar2 = *(undefined1 *)(iVar12 + 0x52);
    *(int *)(iVar10 + 0x2bc2) = iVar12;
    *(char *)(iVar12 + 0x46) = (char)uVar8 + '\x13';
    uVar14 = (uint)*(ushort *)(iVar12 + 0x18);
    *(undefined1 *)(uVar14 + 0x42) = uVar2;
    *(undefined1 *)(uVar14 + 0x73) = uVar2;
    __saturate(in_r1 - (int)DAT_ffffe080);
    __saturate(in_r1 - 0x2bf3);
    uVar4 = *(undefined2 *)(uVar14 + 2);
    uVar6 = *(ushort *)(uVar14 + 0x18);
    *(undefined1 *)(uVar6 + 0x33) = uVar2;
    *(undefined1 *)(*(ushort *)(uVar6 + 0x18) + 0x34) = uVar2;
    __saturate(in_r1 - 0x580c);
    iVar10 = (int)*(char *)(in_r1 - 0x57d1);
    __saturate(iVar10 + -5);
    uVar2 = (undefined1)*(undefined2 *)(in_r1 - 0x57f2);
    *(undefined1 *)(iVar10 + 0x77) = uVar2;
    *(undefined2 *)(iVar10 + 0x5b) = uVar4;
    *(undefined1 *)(iVar10 + 0x12) = *(undefined1 *)(iVar10 + 0x12);
    uVar6 = *(ushort *)(iVar10 + 0x4f);
    uVar13 = *(uint *)(iVar10 + 0xf3);
    *(undefined1 *)(uVar13 + 0x3a) = uVar2;
    cVar5 = DAT_ffffe700;
    uVar14 = uVar8 | param_2 | (uint)&stack0x00000000 | (uint)&stack0x00000000 | in_r1;
    *(char *)(param_3 + 0x5754) = (char)unaff_r22;
    __saturate(unaff_r22 + 1);
    bVar1 = uVar14 <= unaff_lp;
    unaff_lp = unaff_lp - uVar14;
    __saturate(unaff_lp);
    uVar9 = (ushort)*(undefined4 *)(uVar13 + 0xf8);
    DAT_ffffc000 = (byte)(unaff_r22 + 1);
    iVar12 = (int)*(short *)(uVar13 + 0x88);
    uVar13 = uVar13 / 0;
    if (bVar1 && uVar13 != 0) {
      uVar8 = (uint)*(ushort *)(uVar13 + 0x18);
      *(ushort *)(uVar8 + 0x60) = uVar6;
      *(undefined1 *)(uVar8 + 0x17) = *(undefined1 *)(uVar8 + 0x17);
      uVar6 = *(ushort *)(uVar8 + 0x54);
      uVar11 = *(uint *)(uVar8 + 0xf8);
      iVar10 = (int)DAT_ffffe700;
      uVar8 = uVar14 | in_r2 & 0xffff | in_r1;
      uVar14 = (uint)(unaff_lp < uVar8) << 3;
      unaff_lp = unaff_lp - uVar8;
      __saturate(unaff_lp);
      unaff_gp = 4;
      unaff_r26 = (undefined2)*(undefined4 *)(uVar11 + 0xf8);
      in_r16 = unaff_r22;
      goto LAB_0005170c;
    }
  }
  else {
LAB_0005170c:
    iVar12 = (int)*(short *)(uVar11 + 0x88);
    DAT_ffffc000 = (byte)in_r16;
    *(uint *)(iVar10 + 0x2b52) = uVar11;
    bVar7 = (byte)in_r16 | (byte)param_2;
    uVar11 = uVar11 / 0;
    if (SUB41(uVar14 >> 3,0) || uVar11 == 0) goto LAB_000517bc;
    uVar9 = *(ushort *)(uVar11 + 0x18);
    uVar13 = (uint)*(ushort *)(uVar11 + 0x18);
    *(undefined4 *)(uVar13 + 4) = unaff_gp;
    cVar5 = DAT_ffffe700;
    *(ushort *)(uVar13 + 0x3e) = (ushort)unaff_lp & 0x8f11;
    *(ushort *)(uVar13 + 0x80) = uVar6;
    register0x0000000c = (BADSPACEBASE *)((uint)uVar9 - (int)&stack0x00000000);
    *(ushort *)(uVar13 + 0x80) = uVar6;
    __saturate(param_1 + 0x5ffd);
    *(ushort *)(uVar13 + 0x80) = uVar6;
    param_1 = (int)*(char *)(uVar13 + 0x33);
  }
  *(ushort *)(uVar13 + 0x80) = uVar6;
  *(ushort *)(cVar5 + 0x2c0e) = uVar9;
  unaff_r26 = *(undefined2 *)(uVar13 + 0x18);
  uVar11 = (uint)*(ushort *)(uVar13 + 0x18);
  *(ushort *)(cVar5 + 0x2b58) = *(ushort *)(uVar13 + 0x18);
  bVar7 = (byte)*(undefined4 *)(uVar11 + 0x20);
  *(BADSPACEBASE **)(uVar11 + 4) = register0x0000000c;
  *(BADSPACEBASE **)(uVar11 + 4) = register0x0000000c;
  iVar10 = (int)DAT_ffffe700;
  *(ushort *)(uVar11 + 0x3e) = (ushort)unaff_lp & 0x8f11;
  *(ushort *)(uVar11 + 0x80) = uVar6;
  *(ushort *)(uVar11 + 0x80) = uVar6;
LAB_000517bc:
  __saturate(param_1 + 0x5ffd);
  *(ushort *)(uVar11 + 0x80) = uVar6;
  *(ushort *)(uVar11 + 0x80) = uVar6;
  *(undefined2 *)(iVar10 + 0x2c10) = unaff_r26;
  *(byte *)(iVar12 + 0x5754) = bVar7;
  *(short *)(uVar11 + 0x80) = (short)iVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00052634 @ 00052634 (size 74) ====

/* WARNING: Instruction at (ram,0x0005263e) overlaps instruction at (ram,0x0005263c)
    */

void FUN_00052634(void)

{
  undefined1 unaff_tp;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_ep;
  
  do {
    unaff_r26 = unaff_r26 + 0xb;
    __saturate(unaff_r26);
    *(undefined4 *)(unaff_ep + 0x7c) = unaff_r27;
    *(undefined1 *)(unaff_ep + 0x15) = unaff_tp;
  } while( true );
}


// ==== FUN_000535e2 @ 000535e2 (size 458) ====

/* WARNING: Removing unreachable block (ram,0x000535ba) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000535e2(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint in_r1;
  uint in_r2;
  undefined2 unaff_tp;
  undefined1 *puVar4;
  undefined2 uVar5;
  int iVar6;
  int in_r12;
  int in_r14;
  uint in_r15;
  undefined1 in_r16;
  undefined1 uVar7;
  uint unaff_r21;
  uint uVar8;
  uint unaff_r22;
  undefined4 unaff_r26;
  undefined1 unaff_r27;
  int iVar9;
  undefined1 *puVar10;
  int unaff_ep;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined8 uVar16;
  
  uVar11 = *(uint *)(*(int *)(unaff_ep + 0x2c) + 0x90);
  uVar8 = unaff_r21 | in_r1;
  *(undefined4 *)(uVar11 + 0x80) = unaff_r26;
  *(char *)(uVar11 + 3) = (char)in_r14;
  uVar5 = func_0xffecbd74();
  *(undefined1 *)(param_4 + 0x2c86) = in_r16;
  uVar7 = 0;
  *(undefined1 *)(in_r1 + 0x13) = unaff_r27;
  iVar12 = *(int *)(uVar11 / in_r1 + 0x84);
  in_r15 = in_r15 / unaff_r22;
  __saturate((int)&stack0x00000000 - in_r14);
  *(undefined2 *)(iVar12 + 0x4e) = uVar5;
  iVar15 = 0x53638;
  uVar16 = FUN_000226b0();
  iVar13 = (int)((ulonglong)uVar16 >> 0x20);
  iVar6 = (int)uVar16;
  *(undefined2 *)(iVar12 + 0x62) = unaff_tp;
  uVar5 = *(undefined2 *)(iVar12 + 2);
  uVar11 = in_r1 | 0x2c89;
  __saturate(uVar11 - 0x2c89);
  *(undefined2 *)(uVar11 - 0x2c27) = unaff_tp;
  cVar2 = *(char *)(param_3 + -0xe84);
  *(undefined2 *)(uVar11 - 0x2c87) = uVar5;
  *(undefined2 *)(cVar2 + 0x2294) = 0x3638;
  __saturate(8);
  uVar3 = *(ushort *)(uVar11 - 0x2c71);
  *(undefined2 *)(DAT_00004c83 + 0x2286) = 0x3638;
  uVar3 = *(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
  *(undefined2 *)(DAT_ffff8f11 + 0x2294) = 0x3638;
  *(undefined2 *)(*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18) + 0x5a) = unaff_tp;
  __saturate(0);
  iVar12 = (int)sRam00000088;
  __saturate(-in_r15);
  uVar3 = Ram00000018;
  _DAT_0000005a = unaff_tp;
  *(undefined2 *)(*(ushort *)(uVar3 + 0x18) + 0x5c) = unaff_tp;
  uVar8 = uVar8 | param_1 | in_r2 | in_r2;
  __saturate(0);
  iVar9 = (int)*(char *)(iVar12 + -0xf84);
  uVar5 = Ram00000002;
  __saturate(iVar9 + -0x231e);
  uRam0000005c = unaff_tp;
  *(undefined2 *)(iVar9 + -0x22d0) = unaff_tp;
  uVar3 = *(ushort *)(iVar9 + -0x2306);
  *(undefined2 *)(uVar3 + 0x4e) = unaff_tp;
  *(undefined1 *)(iVar13 + 0x6260) = in_r16;
  iVar9 = *(int *)(uVar3 + 0xf8);
  *(undefined2 *)(iVar9 + 0x4e) = unaff_tp;
  *(undefined1 *)(iVar6 + 0x1efd) = in_r16;
  *(undefined1 *)(in_r12 + 0x1f1a) = in_r16;
  *(undefined1 *)(iVar9 + 0x67) = uVar7;
  *(undefined2 *)(iVar9 + 0x44) = unaff_tp;
  *(undefined1 *)(iVar13 + 0x6264) = in_r16;
  iVar9 = *(int *)(iVar9 + 0xf8);
  *(undefined2 *)(iVar9 + 0x4e) = unaff_tp;
  *(undefined1 *)(iVar6 + 0x1efd) = in_r16;
  *(undefined1 *)(in_r12 + 0x1f15) = in_r16;
  *(undefined1 *)(iVar9 + 0x67) = uVar7;
  *(undefined2 *)(iVar9 + 0x46) = unaff_tp;
  *(undefined1 *)(iVar13 + 0x6268) = in_r16;
  iVar9 = *(int *)(iVar9 + 0xf8);
  *(undefined2 *)(iVar9 + 0x4e) = unaff_tp;
  *(undefined1 *)(iVar6 + 0x1efd) = in_r16;
  *(undefined1 *)(in_r12 + 0x1f0d) = in_r16;
  *(undefined1 *)(iVar9 + 0x67) = uVar7;
  *(undefined2 *)(iVar9 + 0x48) = unaff_tp;
  *(undefined1 *)(iVar13 + 0x626c) = in_r16;
  iVar13 = *(int *)(iVar9 + 0xf8);
  *(undefined2 *)(iVar13 + 0x4e) = unaff_tp;
  *(undefined1 *)(iVar6 + 0x1efd) = in_r16;
  *(undefined1 *)(in_r12 + 0x1f08) = in_r16;
  *(undefined1 *)(iVar13 + 0x67) = uVar7;
  *(undefined2 *)(iVar13 + 0x4a) = unaff_tp;
  cVar2 = *(char *)(iVar12 + -0xe84);
  *(undefined2 *)(iVar13 + 2) = uVar5;
  *(undefined4 *)(cVar2 + 0x2298) = 0x53638;
  __saturate(8);
  uVar3 = *(ushort *)(iVar13 + 0x18);
  *(undefined2 *)(DAT_00004c83 + 0x229a) = 0x3638;
  uVar11 = (uint)*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
  do {
    *(int *)(DAT_ffff8f11 + 0x2298) = iVar15;
    uVar14 = (uint)*(ushort *)(*(ushort *)(uVar11 + 0x18) + 0x18);
    *(undefined2 *)(uVar14 + 0x6c) = unaff_tp;
    uVar8 = uVar8 | in_r2;
    uVar11 = 0;
    __saturate(0);
    puVar10 = (undefined1 *)(int)*(char *)(iVar12 + -0x78b6);
    puVar4 = &DAT_ffffe180 + iVar12;
    iVar15 = iVar15 - in_r2;
    __saturate(iVar15);
    Ram00000000 = uVar8;
    bVar1 = (byte)(*(char *)(iVar12 + -0x78b6) >> 7) >> 7;
    __saturate((int)puVar4 - (int)puVar10);
    uVar5 = Ram00000004;
  } while ((int)puVar4 - (int)puVar10 < 0 !=
           ((byte)((uint)puVar4 >> 0x1f) != bVar1 &&
           bVar1 == (byte)((uint)((int)puVar4 - (int)puVar10) >> 0x1f)) || puVar4 == puVar10);
  uRam0000006c = unaff_tp;
  *(undefined1 *)(*(short *)(uVar14 + 2) + 0x590c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x000537e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000537ea + _DAT_000537ea * 2))();
  return;
}


// ==== FUN_00053786 @ 00053786 (size 100) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00053786(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  byte bVar1;
  undefined2 uVar2;
  uint in_r2;
  undefined2 unaff_tp;
  undefined1 *puVar3;
  undefined1 in_r16;
  uint unaff_r21;
  undefined1 *puVar4;
  int unaff_ep;
  uint uVar5;
  uint uVar6;
  int unaff_lp;
  
  *(undefined2 *)(unaff_ep + 4) = param_4;
  uVar5 = (uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
  do {
    *(int *)(DAT_ffff8f11 + 0x2298) = unaff_lp;
    uVar6 = (uint)*(ushort *)(*(ushort *)(uVar5 + 0x18) + 0x18);
    *(undefined2 *)(uVar6 + 0x6c) = unaff_tp;
    unaff_r21 = unaff_r21 | in_r2;
    uVar5 = 0;
    __saturate(0);
    puVar4 = (undefined1 *)(int)*(char *)(param_3 + -0x78b6);
    puVar3 = &DAT_ffffe180 + param_3;
    unaff_lp = unaff_lp - in_r2;
    __saturate(unaff_lp);
    Ram00000000 = unaff_r21;
    bVar1 = (byte)(*(char *)(param_3 + -0x78b6) >> 7) >> 7;
    __saturate((int)puVar3 - (int)puVar4);
    uVar2 = Ram00000004;
  } while ((int)puVar3 - (int)puVar4 < 0 !=
           ((byte)((uint)puVar3 >> 0x1f) != bVar1 &&
           bVar1 == (byte)((uint)((int)puVar3 - (int)puVar4) >> 0x1f)) || puVar3 == puVar4);
  uRam0000006c = unaff_tp;
  *(undefined1 *)(*(short *)(uVar6 + 2) + 0x590c) = in_r16;
                    /* WARNING: Could not recover jumptable at 0x000537e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000537ea + _DAT_000537ea * 2))();
  return;
}


// ==== FUN_000554f0 @ 000554f0 (size 270) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055d0c) overlaps instruction at (ram,0x00055d0a)
    */
/* WARNING: Removing unreachable block (ram,0x000559aa) */
/* WARNING: Removing unreachable block (ram,0x000559b2) */
/* WARNING: Removing unreachable block (ram,0x00055a0a) */
/* WARNING: Removing unreachable block (ram,0x00055a10) */
/* WARNING: Removing unreachable block (ram,0x00055a64) */
/* WARNING: Removing unreachable block (ram,0x0005584e) */
/* WARNING: Removing unreachable block (ram,0x00055860) */
/* WARNING: Removing unreachable block (ram,0x000558b4) */
/* WARNING: Removing unreachable block (ram,0x0005583e) */
/* WARNING: Removing unreachable block (ram,0x00055846) */
/* WARNING: Removing unreachable block (ram,0x000557f2) */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */
/* WARNING: Removing unreachable block (ram,0x0005556a) */
/* WARNING: Removing unreachable block (ram,0x00055570) */
/* WARNING: Removing unreachable block (ram,0x000555c8) */
/* WARNING: Removing unreachable block (ram,0x000557be) */
/* WARNING: Removing unreachable block (ram,0x000557cc) */
/* WARNING: Removing unreachable block (ram,0x0005584a) */
/* WARNING: Removing unreachable block (ram,0x00055834) */
/* WARNING: Removing unreachable block (ram,0x00055892) */
/* WARNING: Removing unreachable block (ram,0x00055932) */
/* WARNING: Removing unreachable block (ram,0x0005593a) */
/* WARNING: Removing unreachable block (ram,0x00055992) */
/* WARNING: Removing unreachable block (ram,0x000559e6) */
/* WARNING: Removing unreachable block (ram,0x00055b2c) */
/* WARNING: Removing unreachable block (ram,0x000555e0) */
/* WARNING: Removing unreachable block (ram,0x000555e8) */
/* WARNING: Removing unreachable block (ram,0x00055658) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000554f0(code *param_1,uint param_2,uint param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort *puVar7;
  char cVar8;
  char cVar9;
  byte *pbVar10;
  short sVar11;
  short sVar12;
  ushort uVar13;
  uint in_r1;
  uint in_r2;
  uint unaff_gp;
  code *unaff_tp;
  undefined4 uVar14;
  int iVar15;
  undefined2 uVar16;
  short sVar17;
  int in_r10;
  uint in_r12;
  uint in_r13;
  undefined1 in_r14;
  uint in_r15;
  code *pcVar18;
  uint uVar19;
  char cVar20;
  ushort uVar21;
  int in_r16;
  uint in_r17;
  short in_r18;
  byte bVar22;
  uint unaff_r21;
  uint uVar23;
  uint uVar24;
  uint unaff_r22;
  int unaff_r23;
  uint unaff_r25;
  code *unaff_r26;
  uint unaff_r28;
  uint uVar25;
  int iVar26;
  code *unaff_r29;
  undefined2 *unaff_ep;
  undefined2 *puVar27;
  uint uVar28;
  byte *pbVar29;
  uint uVar30;
  uint unaff_lp;
  uint uVar31;
  uint in_PSW;
  uint uVar32;
  uint uVar33;
  
  cVar20 = (char)in_r16;
  if (((byte)(in_PSW >> 1) & 1) == ((byte)(in_PSW >> 2) & 1)) {
    bVar6 = (bool)((byte)(in_PSW >> 4) & 1) || SCARRY4((int)unaff_ep,-5);
    uVar32 = (uint)(&DAT_00000004 < unaff_ep) << 3 | (uint)SCARRY4((int)unaff_ep,-5) << 2 |
             (uint)((int)((int)unaff_ep + -5) < 0) << 1 | (uint)bVar6 << 4;
    puVar27 = (undefined2 *)((int)unaff_ep + -5);
    __saturate(puVar27);
    if (((byte)(uVar32 >> 1) & 1) == ((byte)(uVar32 >> 2) & 1)) {
      param_4 = *puVar27;
      cVar8 = *(char *)(unaff_ep + 0x11);
      unaff_r21 = unaff_r21 | (uint)unaff_r26;
      *(char *)(param_3 + 0x5928) = cVar20;
      __saturate(in_r16);
      *(undefined2 *)((int)unaff_ep + 0x43) = 0;
      unaff_lp = unaff_lp / 0;
      *(char *)(in_r1 + 0xff) = cVar20;
      iVar15 = param_3 - in_r15;
      bVar1 = param_3 < in_r15;
      bVar22 = (byte)(in_r15 >> 0x1f);
      bVar2 = (byte)(param_3 >> 0x1f) != bVar22;
      bVar3 = bVar22 == (byte)(param_3 - in_r15 >> 0x1f);
      bVar4 = bVar2 && bVar3;
      bVar5 = param_3 != in_r15;
      in_PSW = (uint)(bVar6 || bVar4) << 4;
      in_r15 = param_3 - in_r15;
      __saturate(in_r15);
      unaff_ep = (undefined2 *)(uint)*(ushort *)(cVar8 + 0x18);
      if (iVar15 < 0 == bVar4 && bVar5) {
        in_r15 = (uint)(short)unaff_ep[7];
      }
      else {
        param_4 = unaff_ep[1];
        unaff_ep = (undefined2 *)(uint)(ushort)unaff_ep[0xc];
        if (!bVar2 || !bVar3) {
          unaff_ep[0x62] = (short)in_r10;
          unaff_ep[2] = unaff_ep[1];
          in_PSW = (uint)bVar1 << 3 | in_PSW;
          goto code_r0x0005554a;
        }
      }
      in_r16 = (int)*(char *)(unaff_ep + 0x34);
      unaff_r28 = (uint)*(char *)(unaff_lp - 0x5467);
code_r0x0005559e:
      uVar33 = in_PSW & 0xfffffff0 | (uint)(((int)*(char *)(unaff_ep + 0x1b) & 0x200U) != 0) << 3;
      goto LAB_000555aa;
    }
LAB_0005555a:
    sVar17 = (short)in_r15;
    uVar23 = unaff_r21 | in_r2;
    uVar33 = uVar32 & 0xfffffff8 | (uint)((unaff_gp & 0x2dab) == 0);
    if (((byte)uVar33 & 1) == 1) {
      if ((bool)((byte)(uVar32 >> 3) & 1) || (bool)((byte)uVar33 & 1)) goto code_r0x00055616;
      in_r10 = (*unaff_r29)();
      uVar16 = puVar27[0x44];
      cRamfffffffe = cVar20;
      if (((byte)(uVar33 >> 1) & 1) == ((byte)(uVar33 >> 2) & 1)) goto code_r0x000556ce;
      *(uint *)(puVar27 + 4) = uVar23;
      puVar27 = (undefined2 *)(uint)(ushort)puVar27[0xc];
      uVar28 = uVar33;
      goto LAB_00055678;
    }
code_r0x000555be:
    bVar22 = (byte)uVar23;
    sVar17 = (short)in_r15;
    cVar20 = (char)in_r16;
    *(short *)(DAT_00004c83 + 0x2db8) = (short)unaff_lp;
    uVar32 = uVar33 & 0xfffffffc;
    uVar13 = puVar27[0xc];
LAB_00055634:
    uVar33 = (uint)uVar13;
    unaff_tp = *(code **)(uVar33 + 0x78);
    uVar23 = (uint)*(ushort *)(uVar33 + 0x18);
    in_r1 = (int)(short)in_r1 * (int)sVar17;
    uVar16 = *(undefined2 *)(uVar23 + 0x88);
    if (((byte)(uVar32 >> 4) & 1) == 1) {
      *(undefined2 *)(uVar23 + 2) = uVar16;
code_r0x00055690:
      (*param_1)();
code_r0x0005569e:
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000556ae + sRam0005b208 * 2))();
      return;
    }
    puVar27 = (undefined2 *)(uint)*(ushort *)(uVar23 + 0x18);
    if ((int)((int)*(char *)(uVar33 + 0x11) | in_r12) < 0) goto code_r0x0005569e;
LAB_000556f0:
    bVar22 = bVar22 ^ (byte)in_r17;
    puVar27[3] = uVar16;
    uVar32 = uVar32 & 0xfffffff8;
LAB_00055722:
    in_r17 = (uint)*(char *)(in_r17 - 0x5de2);
    uVar32 = uVar32 & 0xfffffff8;
  }
  else {
    if ((in_PSW >> 2 & 1) == 0) goto code_r0x0005559e;
code_r0x0005554a:
    unaff_r28 = in_r2 | 0x2db6;
    uVar33 = in_PSW & 0xfffffff8 | (uint)(unaff_r21 == 0 && in_r10 == 0);
    unaff_ep = (undefined2 *)(uint)(ushort)unaff_ep[0xc];
    in_r1 = (int)(short)in_r1 * (int)(short)in_r10;
    param_4 = unaff_ep[0x44];
    if ((bool)((byte)(in_PSW >> 3) & 1) || (bool)((byte)uVar33 & 1)) {
      unaff_r21 = (uint)(short)unaff_ep[3];
      puVar27 = unaff_ep;
      uVar32 = uVar33;
      goto LAB_0005555a;
    }
LAB_000555aa:
    uVar23 = (uint)*(char *)((int)unaff_ep + 0x57);
    puVar27 = (undefined2 *)(uint)(ushort)unaff_ep[0xc];
    if (((byte)(uVar33 >> 3) & 1) != 1) {
      param_3 = (uint)(short)puVar27[0x40];
      puVar7 = (ushort *)(&DAT_00004c00 + unaff_lp);
      unaff_lp = (uint)*puVar7;
      uVar23 = (uint)(short)puVar27[0x11];
      *(ushort *)(unaff_r28 + 0x2dc2) = *puVar7;
      goto code_r0x000555be;
    }
    puVar27[1] = param_4;
    sVar17 = (short)(in_r15 / unaff_r22);
    in_r10 = (int)(char)in_r10;
    uVar33 = uVar33 & 0xfffffff0 | (uint)(DAT_00004c81 < 8) << 3;
code_r0x00055616:
    cVar20 = (char)in_r16;
    uVar28 = ((uint)unaff_tp | 0x2dac) & in_r12;
    uVar32 = uVar33 & 0xfffffffc;
    unaff_gp = (uint)(char)unaff_gp;
    uVar16 = puVar27[0x44];
    uVar28 = uVar32 | (uint)((int)uVar28 < 0) << 1 | (uint)(uVar28 == 0);
    cRamfffffffe = cVar20;
    if (((byte)(uVar33 >> 4) & 1) != 1) {
      bVar22 = (byte)*(undefined4 *)(puVar27 + 2);
      *(uint *)(((uint)unaff_tp | 0x2dac) + 0x2de0) = unaff_lp;
      uVar13 = puVar27[0xc];
      goto LAB_00055634;
    }
LAB_00055678:
    uVar32 = uVar28;
    bVar22 = (byte)uVar23;
    if (((byte)(uVar32 >> 1) & 1) == ((byte)(uVar32 >> 2) & 1)) {
      if ((uVar32 & 1) != 0) {
code_r0x000556ce:
                    /* WARNING: Could not recover jumptable at 0x000556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*(short *)(in_r10 * 2 + 0x556d2) * 2 + 0x556d2))();
        return;
      }
      goto LAB_00055722;
    }
    param_3 = (uint)(short)puVar27[8];
    unaff_r26 = (code *)(uint)(ushort)puVar27[0xc];
    if (((byte)(uVar32 >> 1) & 1) != ((byte)(uVar32 >> 2) & 1)) {
      unaff_tp = *(code **)((ushort)puVar27[0xc] + 0x78);
      puVar27 = (undefined2 *)(uint)*(ushort *)((ushort)puVar27[0xc] + 0x18);
      in_r1 = (int)(short)in_r1 * (int)(short)in_r13;
      uVar16 = puVar27[0x44];
      if (((byte)(uVar32 >> 1) & 1) == ((byte)(uVar32 >> 2) & 1)) goto LAB_000556f0;
      goto code_r0x00055690;
    }
    puVar27 = (undefined2 *)(uint)(ushort)puVar27[0xc];
    if (((byte)(uVar32 >> 3) & 1) != 1) {
      param_3 = (uint)(short)puVar27[0x40];
      unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
      bVar22 = (byte)puVar27[0x12];
      goto LAB_000556f0;
    }
  }
  uVar13 = puVar27[7];
  pcVar18 = (code *)(int)(short)uVar13;
  cVar9 = *(char *)(puVar27 + 0x34);
  uVar23 = (uint)cVar9;
  uVar33 = uVar32 & 0xfffffff8;
  cVar8 = *(char *)(unaff_lp - 0x52b8);
  cRamfffffffe = cVar20;
  *(byte *)((int)puVar27 + 0x5d) = bVar22 | (byte)unaff_r25;
  puVar27[0x17] = puVar27[0x3d];
  puVar27[0x17] = (short)*(undefined4 *)(puVar27 + 0x1a);
  puVar27[0x4c] = (short)*(undefined4 *)(puVar27 + 0x1a);
  uVar28 = (uint)*(ushort *)(*(int *)(puVar27 + 0x7c) + 0x18);
  if ((bool)((byte)(uVar32 >> 3) & 1) || param_1 == (code *)0xffffffff) {
    if ((uVar32 >> 3 & 1) == 0) {
      in_r17 = (uint)(char)unaff_tp[-0x5def];
      uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
      if (-1 < (int)param_1) {
        param_3 = (uint)*(short *)(uVar28 + 0x80);
        unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
        *(uint *)((int)cVar8 + 0x2dc2) = unaff_lp;
        goto LAB_000558d6;
      }
      goto LAB_00055922;
    }
    uVar25 = (uint)&stack0x00000000 | 0x2daf;
    cRamfffffffe = cVar9;
    if (!(bool)((byte)(uVar32 >> 3) & 1) && unaff_tp != (code *)0x0) {
      bVar6 = (unaff_gp & 0x2db3) == 0;
      goto LAB_00055888;
    }
LAB_000558d6:
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    if (-1 < (int)(in_r1 | 0xa30b)) {
code_r0x00055950:
      unaff_r22 = (uint)(char)unaff_r22;
      uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
      if ((int)(in_r1 | 0xa30b) < 0) {
        uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
        if (((byte)(uVar32 >> 3) & 1) != 1) goto LAB_00055968;
      }
      else {
        *(uint *)((in_r2 | 0x2daf) + 0x2dc2) = unaff_lp;
      }
      (*unaff_r26)();
      uVar33 = uVar33 & 0xfffffff8;
      uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
      if (-1 < (int)(in_r1 | 0xa30b)) {
                    /* WARNING: Could not recover jumptable at 0x00055a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055a34 + *(short *)(&DAT_00055a34 + param_3 * 2) * 2))();
        return;
      }
      goto LAB_000559d8;
    }
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    if (((byte)(uVar32 >> 3) & 1) != 1) goto code_r0x000558f8;
    if ((in_r1 | 0xa30b) != 0) goto code_r0x00055950;
code_r0x000559a6:
    uVar28 = *(uint *)(uVar28 + 0xf8);
LAB_000559fe:
                    /* WARNING: Could not recover jumptable at 0x00055a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00055a08 + *(short *)(&DAT_00055a08 + uVar28 * 2) * 2))();
    return;
  }
  uVar33 = (uint)((uint)(int)cVar8 < 8) << 3;
  uVar25 = 0x2db1;
  bVar6 = true;
LAB_00055888:
  uVar21 = *(ushort *)(uVar28 + 0x18);
  unaff_tp = *(code **)(uVar21 + 0xa4);
  cRamfffffffe = cVar9;
  *(short *)(uVar25 + 0x2260) = (short)unaff_lp;
  uVar28 = (uint)*(ushort *)(uVar21 + 0x18);
  in_r1 = (int)(short)in_r1 * (int)in_r18;
  if ((bool)((byte)(uVar33 >> 3) & 1) || bVar6) {
    *(undefined2 *)(uVar28 + 6) = *(undefined2 *)(uVar28 + 0x88);
code_r0x000558f8:
    unaff_r25 = unaff_r25 & 0xffff;
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055922;
LAB_00055968:
    uVar32 = 0x2db3;
    sVar17 = (short)(char)in_r1;
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055986;
LAB_000559d8:
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    if (((byte)(uVar33 >> 3) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0x2db3;
code_r0x000559f6:
    (*unaff_tp)();
    *(short *)(param_3 + 0x2daa) = (short)unaff_lp;
    goto LAB_000559fe;
  }
  uVar28 = *(uint *)(uVar28 + 0xf8);
LAB_00055922:
  sVar17 = (short)in_r1;
  pcVar18 = (code *)(uint)uVar13;
  uVar32 = param_2 | 0x2daf;
  uVar28 = *(uint *)(uVar28 + 0xf8);
LAB_00055986:
  bVar6 = uVar32 < 8;
  param_3 = param_3 | 0x2daf;
  uVar32 = unaff_r22 & 0xff;
  cRamfffffffe = cVar9;
  if (-1 < (int)(param_3 & in_r12)) goto code_r0x000559a6;
  if (!bVar6 && (param_3 & in_r12) != 0) goto code_r0x000559f6;
  sVar11 = *(short *)(uVar28 + 0x80);
  iVar15 = (int)sVar11;
  uVar13 = *(ushort *)(&DAT_00004c00 + unaff_lp);
  uVar31 = (uint)uVar13;
  sVar12 = *(short *)(uVar28 + 0x14);
  *(uint *)(param_3 + 0x2dc2) = uVar31;
  uVar24 = (int)sVar12 ^ in_r13;
  uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
  uVar25 = *(uint *)(uVar28 + 0xa4);
  *(ushort *)((in_r2 | 0x2daf) + 0x2260) = uVar13;
  uVar33 = (uint)*(char *)(uVar28 + 8);
  pbVar29 = (byte *)(uint)*(ushort *)(uVar28 + 0x18);
  uVar28 = (int)sVar17 * (int)sVar11;
  if (bVar6 || uVar24 == 0) goto code_r0x00055b0e;
  uVar24 = (int)*(short *)(pbVar29 + 0x3c) | unaff_r25;
  pbVar10 = pbVar29 + 0x88;
  if (bVar6) {
    uVar33 = uVar33 | (uint)&stack0x00000000;
    cRamfffffffe = cVar9;
    if (!bVar6) goto code_r0x00055b0e;
    uVar33 = 0x2db9;
    *(short *)(pbVar29 + 0x3e) = (short)pcVar18;
    pbVar29 = (byte *)(uint)*(ushort *)(pbVar29 + 0x18);
    bVar6 = true;
    sVar17 = *(short *)pbVar10;
    if (uVar24 != 0 || uVar28 != 0) goto LAB_00055b9c;
    sVar17 = *(short *)pbVar29;
    uVar33 = (uint)*(ushort *)(pbVar29 + 0x18);
    iVar15 = (int)*(short *)(uVar33 + 0x88);
    bVar1 = param_1 < pcVar18;
    __saturate((int)param_1 - (int)pcVar18);
    iVar26 = 0x2daa;
    pbVar29 = (byte *)(uint)*(ushort *)(uVar33 + 0x18);
    uVar21 = *(ushort *)(pbVar29 + 0x18);
    bVar6 = bVar1;
    if (!bVar1) goto LAB_00055bc4;
    uVar24 = *(uint *)(uVar33 + 0x30) | in_r17;
    pbVar29 = (byte *)(uint)*(ushort *)(pbVar29 + 0x18);
LAB_00055b78:
    *(uint *)(pbVar29 + 0x10) = uVar24;
    do {
      *(uint *)(iVar26 + 0x2da8) = uVar31;
code_r0x00055b80:
      uVar33 = (uint)(char)pbVar29[3];
      uVar23 = uVar28 | 0x2daa;
      pbVar29 = (byte *)(uint)*(ushort *)(pbVar29 + 0x18);
      if (bVar1) {
        uVar33 = (uint)*(char *)(iVar15 + -0x7d85);
        bVar6 = *(ushort *)(pbVar29 + 0x18) != 0;
        __saturate(*(ushort *)(pbVar29 + 0x18) - 1);
        sVar17 = (short)unaff_gp;
LAB_00055b9c:
        uVar28 = (int)(short)uVar28 * (int)(short)unaff_gp;
        if (bVar6 || ((uint)pbVar29 & uVar33) == 0) goto LAB_00055c78;
        *(short *)(pbVar29 + 0x60) = sVar17;
        iVar15 = (int)*(short *)(pbVar29 + 0x10);
        *(short *)(pbVar29 + 0x60) = sVar17;
        iVar26 = *(short *)(pbVar29 + 0x24) + -0xc;
        bVar6 = false;
        uVar21 = *(ushort *)(pbVar29 + 0x18);
        uVar23 = uVar32;
LAB_00055bc4:
        uVar33 = (uint)uVar21;
      }
      else {
LAB_00055be8:
        *(uint *)(*pbVar29 + 0xb8) = uVar25;
        pbVar29 = *(byte **)(uVar33 + 0xf8);
        uVar16 = *(undefined2 *)pbVar29;
        sVar17 = *(short *)(pbVar29 + 0x4c);
        iVar26 = uVar23 - 0xb;
        uVar23 = in_r17 & 0x200;
        in_r17 = (int)in_r17 >> 10;
        bVar6 = uVar23 != 0;
        *(char *)(param_2 + 0x400) = (char)uVar25;
        pbVar29[0x51] = (byte)uVar16;
        uVar23 = uVar25;
      }
      *(uint *)(iVar26 + 0x2d4c) = uVar33;
      iVar26 = (int)(char)(&DAT_ffffe256)[iVar15];
      bVar1 = false;
    } while (!bVar6);
    uVar30 = (uint)*(ushort *)(*(ushort *)(pbVar29 + 0x18) + 0x18);
    if (-1 < (int)uVar23) {
      *(short *)(uVar30 + 0x60) = sVar17;
      goto LAB_00055c2e;
    }
LAB_00055c7c:
    in_r10 = func_0xffe60584();
    *(uint *)(uVar30 + 0x9c) = uVar25;
    uVar28 = (uint)*(char *)(iVar15 + -0x7d85);
    __saturate(*(ushort *)(uVar30 + 0x18) - 1);
    DAT_00000047 = (undefined1)unaff_r22;
  }
  else {
    uVar24 = *(uint *)(pbVar29 + 4);
    pbVar29 = (byte *)(uint)*(ushort *)(pbVar29 + 0x18);
    uVar28 = (int)(short)uVar28 * (int)(short)in_r17;
    uVar33 = 9;
    _DAT_00005b71 = uVar13;
    cRamfffffffe = cVar9;
    _DAT_00005b7b = uVar31;
    _DAT_00005b97 = uVar13;
    if (bVar6) {
code_r0x00055b0e:
      iVar26 = (int)*(char *)(iVar15 + -0x784);
      bVar1 = in_r12 < 0xfffffff3;
      pbVar29 = *(byte **)(pbVar29 + 0xf8);
      if ((int)(in_r12 + 0xd) < 0) goto LAB_00055b78;
      bVar6 = ((uint)pcVar18 & 0x10000) != 0;
      pbVar29 = (byte *)(uint)*(byte *)((uint)pbVar29 | uVar33);
    }
    else {
      cVar20 = (&DAT_ffffe256)[iVar15];
      uVar24 = (int)(uVar24 >> 1) >> 0x13;
      bVar6 = 9 < (int)cVar20 - 10U;
      pbVar29[0x35] = (byte)uVar24;
      uVar33 = unaff_gp;
      if (bVar6 || cVar20 == 0x14) goto code_r0x00055b0e;
    }
    bVar1 = true;
    if (bVar6) goto code_r0x00055b80;
    uVar24 = *(uint *)(pbVar29 + 0xf8);
    bVar6 = 4 < uVar24;
    uVar30 = uVar24 - 5;
    __saturate(uVar30);
    if (-1 < (int)(uVar24 - 5)) {
      in_r17 = (uint)(char)(&DAT_ffffa503)[uVar25];
      uVar23 = (uint)DAT_ffffe700;
      pbVar29 = (byte *)(uVar30 | uVar33);
      goto LAB_00055be8;
    }
LAB_00055c2e:
    uVar28 = (uint)DAT_00007317;
    *(undefined1 *)(uVar30 + 0x17) = in_r14;
    *(uint *)(uVar30 + 0x98) = uVar25;
    *(undefined2 *)(uVar30 + 0x60) = *(undefined2 *)(uVar30 + 0x50);
    uVar33 = (uint)*(short *)(uVar30 + 0xae);
    if (!bVar6 && uVar23 != 0) {
      __saturate(unaff_r23 - 0x1ffU);
      bVar6 = SCARRY4(uVar33,uVar23);
      uVar19 = uVar33 + uVar23;
      __saturate(uVar19);
      *(undefined2 *)(uVar30 + 200) = *(undefined2 *)(uVar30 + 0x50);
      pbVar29 = *(byte **)(uVar30 + 0xf8);
      uVar24 = unaff_r23 - 0x1ffU;
      if (!CARRY4(uVar33,uVar23)) goto LAB_00055cb2;
      DAT_0000188b = (undefined1)uVar23;
      *(short *)(pbVar29 + 0x3e) = (short)uVar19;
      pbVar29 = (byte *)(uint)*pbVar29;
LAB_00055c78:
      uVar30 = (uint)*pbVar29;
      goto LAB_00055c7c;
    }
  }
  uVar19 = (uint)(int)*(short *)(uVar30 + 0xc) / uVar32;
  bVar6 = false;
  pbVar29 = (byte *)(uint)*(ushort *)(uVar30 + 0x18);
  uVar24 = param_2;
  uVar23 = uVar32;
LAB_00055cb2:
  uVar21 = (ushort)uVar23;
  if (!bVar6) {
    *(uint *)(uVar28 + 0x2d56) = uVar31;
    bVar6 = false;
    goto code_r0x00055d10;
  }
  bVar6 = false;
  uVar33 = 0xfffffff1;
  if (-1 < (int)((uint)pbVar29 & uVar28)) goto LAB_00055d0c_2;
  uVar16 = (undefined2)*(undefined4 *)(pbVar29 + 0x60);
  *(undefined2 *)(pbVar29 + 0x60) = uVar16;
  iVar26 = (int)DAT_00007347;
  pbVar29[0x47] = (byte)uVar24;
  __saturate(uVar24 + param_2);
  __saturate(uVar19 - 0xf);
  *(undefined2 *)(pbVar29 + 0x50) = uVar16;
  uVar21 = (ushort)unaff_r23 | 0xfff1;
  if (0xe < uVar19) goto LAB_00055d2a;
  *(undefined2 *)(pbVar29 + 0x60) = uVar16;
  do {
    pbVar29 = (byte *)(uint)*pbVar29;
    while( true ) {
      uVar33 = (uint)*pbVar29;
      in_r10 = func_0xffe605fe();
      uVar25 = *(uint *)(uVar33 + 0x9c);
      bVar6 = SCARRY4(uVar33,-5);
      pbVar29 = (byte *)(uVar33 - 5);
      __saturate(pbVar29);
      uVar28 = (uint)*(char *)(iVar15 + -0x84);
      uVar33 = uVar32;
LAB_00055d0c_2:
      uVar21 = (ushort)uVar33;
      *(uint *)(pbVar29 + 0xac) = uVar25;
code_r0x00055d10:
      pbVar29 = (byte *)(uint)*(ushort *)(pbVar29 + 0x18);
      *(char *)(in_r10 + 0x6278) = (char)uVar21;
      if (bVar6) break;
      iVar26 = uVar28 - 0xb;
      *(char *)(in_r10 + 0x6276) = (char)uVar21;
      if (SCARRY4(uVar28,-0xb)) break;
LAB_00055d2a:
      *(char *)(in_r10 + 0x627c) = (char)uVar21;
      if (!SCARRY4(iVar26,-0xb)) {
        *(short *)(pbVar29 + 0xaa) = (short)uVar32;
        uVar32 = (uint)*(ushort *)(pbVar29 + 0x18);
        *(uint *)(uVar32 + 0xac) = uVar25;
        *(ushort *)(iVar26 + 0x18b2) = uVar13;
        *(uint *)(iVar26 + 0x18e2) = uVar31;
        *(short *)(uVar32 + 0x88) = (short)iVar15;
        uVar14 = *(undefined4 *)(uVar32 + 0xac);
        uVar32 = (uint)*(ushort *)(uVar32 + 0x18);
        *(undefined4 *)(uVar32 + 0x9c) = uVar14;
        *(undefined4 *)(uVar32 + 0xa8) = uVar14;
        __saturate(*(ushort *)(uVar32 + 0x18) - 1);
        *(ushort *)(*(ushort *)(uVar32 + 0x18) + 0xc) = uVar21;
                    /* WARNING: Could not recover jumptable at 0x00055db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055db6 + *(short *)(&DAT_00055db6 + param_2 * 2) * 2))();
        return;
      }
    }
  } while( true );
}


// ==== FUN_000555fe @ 000555fe (size 40) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055d0c) overlaps instruction at (ram,0x00055d0a)
    */
/* WARNING: Removing unreachable block (ram,0x000559aa) */
/* WARNING: Removing unreachable block (ram,0x000559b2) */
/* WARNING: Removing unreachable block (ram,0x00055a0a) */
/* WARNING: Removing unreachable block (ram,0x00055a10) */
/* WARNING: Removing unreachable block (ram,0x00055a64) */
/* WARNING: Removing unreachable block (ram,0x0005584e) */
/* WARNING: Removing unreachable block (ram,0x00055860) */
/* WARNING: Removing unreachable block (ram,0x000558b4) */
/* WARNING: Removing unreachable block (ram,0x0005583e) */
/* WARNING: Removing unreachable block (ram,0x00055846) */
/* WARNING: Removing unreachable block (ram,0x000557f2) */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */
/* WARNING: Removing unreachable block (ram,0x000557be) */
/* WARNING: Removing unreachable block (ram,0x000557cc) */
/* WARNING: Removing unreachable block (ram,0x0005584a) */
/* WARNING: Removing unreachable block (ram,0x00055834) */
/* WARNING: Removing unreachable block (ram,0x00055892) */
/* WARNING: Removing unreachable block (ram,0x00055932) */
/* WARNING: Removing unreachable block (ram,0x0005593a) */
/* WARNING: Removing unreachable block (ram,0x00055992) */
/* WARNING: Removing unreachable block (ram,0x000559e6) */
/* WARNING: Removing unreachable block (ram,0x00055b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000555fe(code *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  uint in_r1;
  uint in_r2;
  uint unaff_gp;
  code *unaff_tp;
  undefined4 uVar9;
  int iVar10;
  undefined2 uVar11;
  short sVar12;
  char in_r10;
  int iVar13;
  uint in_r12;
  uint in_r13;
  undefined1 in_r14;
  uint in_r15;
  code *pcVar14;
  uint uVar15;
  char in_r16;
  ushort uVar16;
  uint uVar17;
  uint in_r17;
  short in_r18;
  byte bVar18;
  uint unaff_r21;
  uint uVar19;
  uint unaff_r22;
  int unaff_r23;
  uint unaff_r25;
  code *unaff_r26;
  uint unaff_r28;
  uint uVar20;
  uint uVar21;
  int iVar22;
  code *unaff_r29;
  int unaff_ep;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  uint unaff_lp;
  uint uVar27;
  uint in_PSW;
  
  uVar23 = (uint)*(ushort *)(unaff_ep + 0x18);
  if (((byte)(in_PSW >> 1) & 1) == ((byte)(in_PSW >> 2) & 1) && !(bool)((byte)in_PSW & 1)) {
    uVar21 = (uint)(DAT_00004c81 < 8) << 3;
    iVar13 = (int)in_r10;
    uVar24 = ((uint)unaff_tp | 0x2dac) & in_r12;
    unaff_gp = (uint)(char)unaff_gp;
    uVar11 = *(undefined2 *)(uVar23 + 0x88);
    uVar24 = uVar21 | (uint)((int)uVar24 < 0) << 1 | (uint)(uVar24 == 0);
    cRamfffffffe = in_r16;
    if (((byte)(in_PSW >> 4) & 1) == 1) goto LAB_00055678;
    unaff_r21 = *(uint *)(uVar23 + 4);
    *(uint *)(((uint)unaff_tp | 0x2dac) + 0x2de0) = unaff_lp;
    uVar24 = (uint)*(ushort *)(uVar23 + 0x18);
    unaff_tp = *(code **)(uVar24 + 0x78);
    uVar23 = (uint)*(ushort *)(uVar24 + 0x18);
    in_r1 = (int)(short)in_r1 * (int)(short)(in_r15 / unaff_r22);
    uVar11 = *(undefined2 *)(uVar23 + 0x88);
    if (((byte)(in_PSW >> 4) & 1) == 1) {
      *(undefined2 *)(uVar23 + 2) = uVar11;
code_r0x00055690:
      (*param_1)();
code_r0x0005569e:
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000556ae + sRam0005b208 * 2))();
      return;
    }
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if ((int)((int)*(char *)(uVar24 + 0x11) | in_r12) < 0) goto code_r0x0005569e;
    goto LAB_000556f0;
  }
  unaff_tp = (code *)((uint)unaff_tp & 0xff);
  uVar24 = (uint)(unaff_r28 < 8) << 3 | (uint)((in_r12 & 0x2dae) == 0);
  iVar13 = (*unaff_r29)();
  uVar11 = *(undefined2 *)(uVar23 + 0x88);
  cRamfffffffe = in_r16;
  if (((byte)(uVar24 >> 1) & 1) == ((byte)(uVar24 >> 2) & 1)) goto code_r0x000556ce;
  *(uint *)(uVar23 + 8) = unaff_r21;
  uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
LAB_00055678:
  uVar21 = uVar24;
  bVar18 = (byte)unaff_r21;
  if (((byte)(uVar21 >> 1) & 1) == ((byte)(uVar21 >> 2) & 1)) {
    if ((uVar21 & 1) != 0) {
code_r0x000556ce:
                    /* WARNING: Could not recover jumptable at 0x000556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(*(short *)(iVar13 * 2 + 0x556d2) * 2 + 0x556d2))();
      return;
    }
LAB_00055722:
    bVar18 = (byte)unaff_r21;
    in_r17 = (uint)*(char *)(in_r17 - 0x5de2);
    uVar21 = uVar21 & 0xfffffff8;
  }
  else {
    param_3 = (uint)*(short *)(uVar23 + 0x10);
    unaff_r26 = (code *)(uint)*(ushort *)(uVar23 + 0x18);
    if (((byte)(uVar21 >> 1) & 1) != ((byte)(uVar21 >> 2) & 1)) {
      unaff_tp = *(code **)(*(ushort *)(uVar23 + 0x18) + 0x78);
      uVar23 = (uint)*(ushort *)(*(ushort *)(uVar23 + 0x18) + 0x18);
      in_r1 = (int)(short)in_r1 * (int)(short)in_r13;
      uVar11 = *(undefined2 *)(uVar23 + 0x88);
      if (((byte)(uVar21 >> 1) & 1) != ((byte)(uVar21 >> 2) & 1)) goto code_r0x00055690;
LAB_000556f0:
      unaff_r21 = unaff_r21 ^ in_r17;
      *(undefined2 *)(uVar23 + 6) = uVar11;
      uVar21 = uVar21 & 0xfffffff8;
      goto LAB_00055722;
    }
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if (((byte)(uVar21 >> 3) & 1) != 1) {
      param_3 = (uint)*(short *)(uVar23 + 0x80);
      unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
      unaff_r21 = (uint)*(short *)(uVar23 + 0x24);
      goto LAB_000556f0;
    }
  }
  uVar6 = *(ushort *)(uVar23 + 0xe);
  pcVar14 = (code *)(int)(short)uVar6;
  cVar4 = *(char *)(uVar23 + 0x68);
  uVar17 = (uint)cVar4;
  uVar24 = uVar21 & 0xfffffff8;
  cVar3 = *(char *)(unaff_lp - 0x52b8);
  cRamfffffffe = in_r16;
  *(byte *)(uVar23 + 0x5d) = bVar18 | (byte)unaff_r25;
  *(undefined2 *)(uVar23 + 0x2e) = *(undefined2 *)(uVar23 + 0x7a);
  uVar11 = (undefined2)*(undefined4 *)(uVar23 + 0x34);
  *(undefined2 *)(uVar23 + 0x2e) = uVar11;
  *(undefined2 *)(uVar23 + 0x98) = uVar11;
  uVar23 = (uint)*(ushort *)(*(int *)(uVar23 + 0xf8) + 0x18);
  if ((bool)((byte)(uVar21 >> 3) & 1) || param_1 == (code *)0xffffffff) {
    if ((uVar21 >> 3 & 1) == 0) {
      in_r17 = (uint)(char)unaff_tp[-0x5def];
      uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
      if (-1 < (int)param_1) {
        param_3 = (uint)*(short *)(uVar23 + 0x80);
        unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
        *(uint *)((int)cVar3 + 0x2dc2) = unaff_lp;
        goto LAB_000558d6;
      }
      goto LAB_00055922;
    }
    uVar20 = (uint)&stack0x00000000 | 0x2daf;
    cRamfffffffe = cVar4;
    if (!(bool)((byte)(uVar21 >> 3) & 1) && unaff_tp != (code *)0x0) {
      bVar2 = (unaff_gp & 0x2db3) == 0;
      goto LAB_00055888;
    }
LAB_000558d6:
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if (-1 < (int)(in_r1 | 0xa30b)) {
code_r0x00055950:
      unaff_r22 = (uint)(char)unaff_r22;
      uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
      if ((int)(in_r1 | 0xa30b) < 0) {
        uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
        if (((byte)(uVar21 >> 3) & 1) != 1) goto LAB_00055968;
      }
      else {
        *(uint *)((in_r2 | 0x2daf) + 0x2dc2) = unaff_lp;
      }
      (*unaff_r26)();
      uVar24 = uVar24 & 0xfffffff8;
      uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
      if (-1 < (int)(in_r1 | 0xa30b)) {
                    /* WARNING: Could not recover jumptable at 0x00055a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055a34 + *(short *)(&DAT_00055a34 + param_3 * 2) * 2))();
        return;
      }
      goto LAB_000559d8;
    }
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if (((byte)(uVar21 >> 3) & 1) != 1) goto code_r0x000558f8;
    if ((in_r1 | 0xa30b) != 0) goto code_r0x00055950;
code_r0x000559a6:
    uVar23 = *(uint *)(uVar23 + 0xf8);
LAB_000559fe:
                    /* WARNING: Could not recover jumptable at 0x00055a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00055a08 + *(short *)(&DAT_00055a08 + uVar23 * 2) * 2))();
    return;
  }
  uVar24 = (uint)((uint)(int)cVar3 < 8) << 3;
  uVar20 = 0x2db1;
  bVar2 = true;
LAB_00055888:
  uVar16 = *(ushort *)(uVar23 + 0x18);
  unaff_tp = *(code **)(uVar16 + 0xa4);
  cRamfffffffe = cVar4;
  *(short *)(uVar20 + 0x2260) = (short)unaff_lp;
  uVar23 = (uint)*(ushort *)(uVar16 + 0x18);
  in_r1 = (int)(short)in_r1 * (int)in_r18;
  if ((bool)((byte)(uVar24 >> 3) & 1) || bVar2) {
    *(undefined2 *)(uVar23 + 6) = *(undefined2 *)(uVar23 + 0x88);
code_r0x000558f8:
    unaff_r25 = unaff_r25 & 0xffff;
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055922;
LAB_00055968:
    uVar21 = 0x2db3;
    sVar12 = (short)(char)in_r1;
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055986;
LAB_000559d8:
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    if (((byte)(uVar24 >> 3) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0x2db3;
code_r0x000559f6:
    (*unaff_tp)();
    *(short *)(param_3 + 0x2daa) = (short)unaff_lp;
    goto LAB_000559fe;
  }
  uVar23 = *(uint *)(uVar23 + 0xf8);
LAB_00055922:
  sVar12 = (short)in_r1;
  pcVar14 = (code *)(uint)uVar6;
  uVar21 = param_2 | 0x2daf;
  uVar23 = *(uint *)(uVar23 + 0xf8);
LAB_00055986:
  bVar2 = uVar21 < 8;
  param_3 = param_3 | 0x2daf;
  uVar24 = unaff_r22 & 0xff;
  cRamfffffffe = cVar4;
  if (-1 < (int)(param_3 & in_r12)) goto code_r0x000559a6;
  if (!bVar2 && (param_3 & in_r12) != 0) goto code_r0x000559f6;
  sVar7 = *(short *)(uVar23 + 0x80);
  iVar10 = (int)sVar7;
  uVar6 = *(ushort *)(&DAT_00004c00 + unaff_lp);
  uVar27 = (uint)uVar6;
  sVar8 = *(short *)(uVar23 + 0x14);
  *(uint *)(param_3 + 0x2dc2) = uVar27;
  uVar19 = (int)sVar8 ^ in_r13;
  uVar21 = (uint)*(ushort *)(uVar23 + 0x18);
  uVar20 = *(uint *)(uVar21 + 0xa4);
  *(ushort *)((in_r2 | 0x2daf) + 0x2260) = uVar6;
  uVar23 = (uint)*(char *)(uVar21 + 8);
  pbVar25 = (byte *)(uint)*(ushort *)(uVar21 + 0x18);
  uVar21 = (int)sVar12 * (int)sVar7;
  if (bVar2 || uVar19 == 0) goto code_r0x00055b0e;
  uVar19 = (int)*(short *)(pbVar25 + 0x3c) | unaff_r25;
  pbVar5 = pbVar25 + 0x88;
  if (bVar2) {
    uVar23 = uVar23 | (uint)&stack0x00000000;
    cRamfffffffe = cVar4;
    if (!bVar2) goto code_r0x00055b0e;
    uVar23 = 0x2db9;
    *(short *)(pbVar25 + 0x3e) = (short)pcVar14;
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
    bVar2 = true;
    sVar12 = *(short *)pbVar5;
    if (uVar19 != 0 || uVar21 != 0) goto LAB_00055b9c;
    sVar12 = *(short *)pbVar25;
    uVar23 = (uint)*(ushort *)(pbVar25 + 0x18);
    iVar10 = (int)*(short *)(uVar23 + 0x88);
    bVar1 = param_1 < pcVar14;
    __saturate((int)param_1 - (int)pcVar14);
    iVar22 = 0x2daa;
    pbVar25 = (byte *)(uint)*(ushort *)(uVar23 + 0x18);
    uVar16 = *(ushort *)(pbVar25 + 0x18);
    bVar2 = bVar1;
    if (!bVar1) goto LAB_00055bc4;
    uVar19 = *(uint *)(uVar23 + 0x30) | in_r17;
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
LAB_00055b78:
    *(uint *)(pbVar25 + 0x10) = uVar19;
    do {
      *(uint *)(iVar22 + 0x2da8) = uVar27;
code_r0x00055b80:
      uVar23 = (uint)(char)pbVar25[3];
      uVar17 = uVar21 | 0x2daa;
      pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
      if (bVar1) {
        uVar23 = (uint)*(char *)(iVar10 + -0x7d85);
        bVar2 = *(ushort *)(pbVar25 + 0x18) != 0;
        __saturate(*(ushort *)(pbVar25 + 0x18) - 1);
        sVar12 = (short)unaff_gp;
LAB_00055b9c:
        uVar21 = (int)(short)uVar21 * (int)(short)unaff_gp;
        if (bVar2 || ((uint)pbVar25 & uVar23) == 0) goto LAB_00055c78;
        *(short *)(pbVar25 + 0x60) = sVar12;
        iVar10 = (int)*(short *)(pbVar25 + 0x10);
        *(short *)(pbVar25 + 0x60) = sVar12;
        iVar22 = *(short *)(pbVar25 + 0x24) + -0xc;
        bVar2 = false;
        uVar16 = *(ushort *)(pbVar25 + 0x18);
        uVar17 = uVar24;
LAB_00055bc4:
        uVar23 = (uint)uVar16;
      }
      else {
LAB_00055be8:
        *(uint *)(*pbVar25 + 0xb8) = uVar20;
        pbVar25 = *(byte **)(uVar23 + 0xf8);
        uVar11 = *(undefined2 *)pbVar25;
        sVar12 = *(short *)(pbVar25 + 0x4c);
        iVar22 = uVar17 - 0xb;
        uVar17 = in_r17 & 0x200;
        in_r17 = (int)in_r17 >> 10;
        bVar2 = uVar17 != 0;
        *(char *)(param_2 + 0x400) = (char)uVar20;
        pbVar25[0x51] = (byte)uVar11;
        uVar17 = uVar20;
      }
      *(uint *)(iVar22 + 0x2d4c) = uVar23;
      iVar22 = (int)(char)(&DAT_ffffe256)[iVar10];
      bVar1 = false;
    } while (!bVar2);
    uVar26 = (uint)*(ushort *)(*(ushort *)(pbVar25 + 0x18) + 0x18);
    if (-1 < (int)uVar17) {
      *(short *)(uVar26 + 0x60) = sVar12;
      goto LAB_00055c2e;
    }
LAB_00055c7c:
    iVar13 = func_0xffe60584();
    *(uint *)(uVar26 + 0x9c) = uVar20;
    uVar21 = (uint)*(char *)(iVar10 + -0x7d85);
    __saturate(*(ushort *)(uVar26 + 0x18) - 1);
    DAT_00000047 = (undefined1)unaff_r22;
  }
  else {
    uVar19 = *(uint *)(pbVar25 + 4);
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
    uVar21 = (int)(short)uVar21 * (int)(short)in_r17;
    uVar23 = 9;
    _DAT_00005b71 = uVar6;
    cRamfffffffe = cVar4;
    _DAT_00005b7b = uVar27;
    _DAT_00005b97 = uVar6;
    if (bVar2) {
code_r0x00055b0e:
      iVar22 = (int)*(char *)(iVar10 + -0x784);
      bVar1 = in_r12 < 0xfffffff3;
      pbVar25 = *(byte **)(pbVar25 + 0xf8);
      if ((int)(in_r12 + 0xd) < 0) goto LAB_00055b78;
      bVar2 = ((uint)pcVar14 & 0x10000) != 0;
      pbVar25 = (byte *)(uint)*(byte *)((uint)pbVar25 | uVar23);
    }
    else {
      cVar3 = (&DAT_ffffe256)[iVar10];
      uVar19 = (int)(uVar19 >> 1) >> 0x13;
      bVar2 = 9 < (int)cVar3 - 10U;
      pbVar25[0x35] = (byte)uVar19;
      uVar23 = unaff_gp;
      if (bVar2 || cVar3 == 0x14) goto code_r0x00055b0e;
    }
    bVar1 = true;
    if (bVar2) goto code_r0x00055b80;
    uVar19 = *(uint *)(pbVar25 + 0xf8);
    bVar2 = 4 < uVar19;
    uVar26 = uVar19 - 5;
    __saturate(uVar26);
    if (-1 < (int)(uVar19 - 5)) {
      in_r17 = (uint)(char)(&DAT_ffffa503)[uVar20];
      uVar17 = (uint)DAT_ffffe700;
      pbVar25 = (byte *)(uVar26 | uVar23);
      goto LAB_00055be8;
    }
LAB_00055c2e:
    uVar21 = (uint)DAT_00007317;
    *(undefined1 *)(uVar26 + 0x17) = in_r14;
    *(uint *)(uVar26 + 0x98) = uVar20;
    *(undefined2 *)(uVar26 + 0x60) = *(undefined2 *)(uVar26 + 0x50);
    uVar23 = (uint)*(short *)(uVar26 + 0xae);
    if (!bVar2 && uVar17 != 0) {
      __saturate(unaff_r23 - 0x1ffU);
      bVar2 = SCARRY4(uVar23,uVar17);
      uVar15 = uVar23 + uVar17;
      __saturate(uVar15);
      *(undefined2 *)(uVar26 + 200) = *(undefined2 *)(uVar26 + 0x50);
      pbVar25 = *(byte **)(uVar26 + 0xf8);
      uVar19 = unaff_r23 - 0x1ffU;
      if (!CARRY4(uVar23,uVar17)) goto LAB_00055cb2;
      DAT_0000188b = (undefined1)uVar17;
      *(short *)(pbVar25 + 0x3e) = (short)uVar15;
      pbVar25 = (byte *)(uint)*pbVar25;
LAB_00055c78:
      uVar26 = (uint)*pbVar25;
      goto LAB_00055c7c;
    }
  }
  uVar15 = (uint)(int)*(short *)(uVar26 + 0xc) / uVar24;
  bVar2 = false;
  pbVar25 = (byte *)(uint)*(ushort *)(uVar26 + 0x18);
  uVar19 = param_2;
  uVar17 = uVar24;
LAB_00055cb2:
  uVar16 = (ushort)uVar17;
  if (!bVar2) {
    *(uint *)(uVar21 + 0x2d56) = uVar27;
    bVar2 = false;
    goto code_r0x00055d10;
  }
  bVar2 = false;
  uVar23 = 0xfffffff1;
  if (-1 < (int)((uint)pbVar25 & uVar21)) goto LAB_00055d0c_2;
  uVar11 = (undefined2)*(undefined4 *)(pbVar25 + 0x60);
  *(undefined2 *)(pbVar25 + 0x60) = uVar11;
  iVar22 = (int)DAT_00007347;
  pbVar25[0x47] = (byte)uVar19;
  __saturate(uVar19 + param_2);
  __saturate(uVar15 - 0xf);
  *(undefined2 *)(pbVar25 + 0x50) = uVar11;
  uVar16 = (ushort)unaff_r23 | 0xfff1;
  if (0xe < uVar15) goto LAB_00055d2a;
  *(undefined2 *)(pbVar25 + 0x60) = uVar11;
  do {
    pbVar25 = (byte *)(uint)*pbVar25;
    while( true ) {
      uVar23 = (uint)*pbVar25;
      iVar13 = func_0xffe605fe();
      uVar20 = *(uint *)(uVar23 + 0x9c);
      bVar2 = SCARRY4(uVar23,-5);
      pbVar25 = (byte *)(uVar23 - 5);
      __saturate(pbVar25);
      uVar21 = (uint)*(char *)(iVar10 + -0x84);
      uVar23 = uVar24;
LAB_00055d0c_2:
      uVar16 = (ushort)uVar23;
      *(uint *)(pbVar25 + 0xac) = uVar20;
code_r0x00055d10:
      pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
      *(char *)(iVar13 + 0x6278) = (char)uVar16;
      if (bVar2) break;
      iVar22 = uVar21 - 0xb;
      *(char *)(iVar13 + 0x6276) = (char)uVar16;
      if (SCARRY4(uVar21,-0xb)) break;
LAB_00055d2a:
      *(char *)(iVar13 + 0x627c) = (char)uVar16;
      if (!SCARRY4(iVar22,-0xb)) {
        *(short *)(pbVar25 + 0xaa) = (short)uVar24;
        uVar23 = (uint)*(ushort *)(pbVar25 + 0x18);
        *(uint *)(uVar23 + 0xac) = uVar20;
        *(ushort *)(iVar22 + 0x18b2) = uVar6;
        *(uint *)(iVar22 + 0x18e2) = uVar27;
        *(short *)(uVar23 + 0x88) = (short)iVar10;
        uVar9 = *(undefined4 *)(uVar23 + 0xac);
        uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
        *(undefined4 *)(uVar23 + 0x9c) = uVar9;
        *(undefined4 *)(uVar23 + 0xa8) = uVar9;
        __saturate(*(ushort *)(uVar23 + 0x18) - 1);
        *(ushort *)(*(ushort *)(uVar23 + 0x18) + 0xc) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00055db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055db6 + *(short *)(&DAT_00055db6 + param_2 * 2) * 2))();
        return;
      }
    }
  } while( true );
}


// ==== FUN_00055626 @ 00055626 (size 44) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055d0c) overlaps instruction at (ram,0x00055d0a)
    */
/* WARNING: Removing unreachable block (ram,0x000559aa) */
/* WARNING: Removing unreachable block (ram,0x000559b2) */
/* WARNING: Removing unreachable block (ram,0x00055a0a) */
/* WARNING: Removing unreachable block (ram,0x00055a10) */
/* WARNING: Removing unreachable block (ram,0x00055a64) */
/* WARNING: Removing unreachable block (ram,0x0005584e) */
/* WARNING: Removing unreachable block (ram,0x00055860) */
/* WARNING: Removing unreachable block (ram,0x000558b4) */
/* WARNING: Removing unreachable block (ram,0x0005583e) */
/* WARNING: Removing unreachable block (ram,0x00055846) */
/* WARNING: Removing unreachable block (ram,0x000557f2) */
/* WARNING: Removing unreachable block (ram,0x00055648) */
/* WARNING: Removing unreachable block (ram,0x00055656) */
/* WARNING: Removing unreachable block (ram,0x000556c6) */
/* WARNING: Removing unreachable block (ram,0x00055674) */
/* WARNING: Removing unreachable block (ram,0x000556cc) */
/* WARNING: Removing unreachable block (ram,0x000556ce) */
/* WARNING: Removing unreachable block (ram,0x0005567a) */
/* WARNING: Removing unreachable block (ram,0x00055680) */
/* WARNING: Removing unreachable block (ram,0x000556d2) */
/* WARNING: Removing unreachable block (ram,0x000556d6) */
/* WARNING: Removing unreachable block (ram,0x000556e2) */
/* WARNING: Removing unreachable block (ram,0x000557be) */
/* WARNING: Removing unreachable block (ram,0x000557cc) */
/* WARNING: Removing unreachable block (ram,0x0005584a) */
/* WARNING: Removing unreachable block (ram,0x00055834) */
/* WARNING: Removing unreachable block (ram,0x00055892) */
/* WARNING: Removing unreachable block (ram,0x00055932) */
/* WARNING: Removing unreachable block (ram,0x0005593a) */
/* WARNING: Removing unreachable block (ram,0x00055992) */
/* WARNING: Removing unreachable block (ram,0x000559e6) */
/* WARNING: Removing unreachable block (ram,0x00055b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00055626(code *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  short in_r1;
  uint uVar10;
  uint in_r2;
  uint unaff_gp;
  code *pcVar11;
  int iVar12;
  short sVar13;
  int in_r10;
  uint in_r12;
  uint in_r13;
  undefined1 in_r14;
  short in_r15;
  code *pcVar14;
  uint uVar15;
  char in_r16;
  ushort uVar16;
  int in_r17;
  short in_r18;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  byte unaff_r22;
  int unaff_r23;
  uint unaff_r25;
  code *unaff_r26;
  int unaff_r28;
  uint uVar20;
  int iVar21;
  int unaff_ep;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  uint unaff_lp;
  uint uVar26;
  uint in_PSW;
  
  uVar18 = *(undefined4 *)(unaff_ep + 4);
  *(uint *)(unaff_r28 + 0x2de0) = unaff_lp;
  uVar22 = (uint)*(ushort *)(unaff_ep + 0x18);
  pcVar11 = *(code **)(uVar22 + 0x78);
  uVar23 = (uint)*(ushort *)(uVar22 + 0x18);
  uVar10 = (int)in_r1 * (int)in_r15;
  if (((byte)(in_PSW >> 4) & 1) == 1) {
    *(undefined2 *)(uVar23 + 2) = *(undefined2 *)(uVar23 + 0x88);
    (*param_1)();
code_r0x0005569e:
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_000556ae + sRam0005b208 * 2))();
    return;
  }
  uVar17 = in_PSW & 0xfffffff8;
  uVar24 = (uint)*(ushort *)(uVar23 + 0x18);
  if ((int)((int)*(char *)(uVar22 + 0x11) | in_r12) < 0) goto code_r0x0005569e;
  *(undefined2 *)(uVar24 + 6) = *(undefined2 *)(uVar23 + 0x88);
  uVar23 = (uint)*(char *)(in_r17 + -0x5de2);
  uVar6 = *(ushort *)(uVar24 + 0xe);
  pcVar14 = (code *)(int)(short)uVar6;
  cVar4 = *(char *)(uVar24 + 0x68);
  uVar22 = (uint)cVar4;
  cVar3 = *(char *)(unaff_lp - 0x52b8);
  cRamfffffffe = in_r16;
  *(byte *)(uVar24 + 0x5d) = (byte)uVar18 ^ (byte)in_r17 | (byte)unaff_r25;
  *(undefined2 *)(uVar24 + 0x2e) = *(undefined2 *)(uVar24 + 0x7a);
  uVar9 = (undefined2)*(undefined4 *)(uVar24 + 0x34);
  *(undefined2 *)(uVar24 + 0x2e) = uVar9;
  *(undefined2 *)(uVar24 + 0x98) = uVar9;
  uVar24 = (uint)*(ushort *)(*(int *)(uVar24 + 0xf8) + 0x18);
  if ((bool)((byte)(in_PSW >> 3) & 1) || param_1 == (code *)0xffffffff) {
    if ((in_PSW >> 3 & 1) == 0) {
      uVar23 = (uint)(char)pcVar11[-0x5def];
      uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
      if (-1 < (int)param_1) {
        param_3 = (uint)*(short *)(uVar24 + 0x80);
        unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
        *(uint *)((int)cVar3 + 0x2dc2) = unaff_lp;
        goto LAB_000558d6;
      }
      goto LAB_00055922;
    }
    uVar20 = (uint)&stack0x00000000 | 0x2daf;
    cRamfffffffe = cVar4;
    if (!(bool)((byte)(in_PSW >> 3) & 1) && pcVar11 != (code *)0x0) {
      bVar2 = (unaff_gp & 0x2db3) == 0;
      goto LAB_00055888;
    }
LAB_000558d6:
    uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
    if (-1 < (int)(uVar10 | 0xa30b)) {
code_r0x00055950:
      uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
      if ((int)(uVar10 | 0xa30b) < 0) {
        uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
        if (((byte)(in_PSW >> 3) & 1) != 1) goto LAB_00055968;
      }
      else {
        *(uint *)((in_r2 | 0x2daf) + 0x2dc2) = unaff_lp;
      }
      (*unaff_r26)();
      uVar17 = uVar17 & 0xfffffff8;
      uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
      if (-1 < (int)(uVar10 | 0xa30b)) {
                    /* WARNING: Could not recover jumptable at 0x00055a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055a34 + *(short *)(&DAT_00055a34 + param_3 * 2) * 2))();
        return;
      }
      goto LAB_000559d8;
    }
    uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
    if (((byte)(in_PSW >> 3) & 1) != 1) goto code_r0x000558f8;
    if ((uVar10 | 0xa30b) != 0) goto code_r0x00055950;
code_r0x000559a6:
    uVar24 = *(uint *)(uVar24 + 0xf8);
LAB_000559fe:
                    /* WARNING: Could not recover jumptable at 0x00055a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00055a08 + *(short *)(&DAT_00055a08 + uVar24 * 2) * 2))();
    return;
  }
  uVar17 = (uint)((uint)(int)cVar3 < 8) << 3;
  uVar20 = 0x2db1;
  bVar2 = true;
LAB_00055888:
  uVar16 = *(ushort *)(uVar24 + 0x18);
  pcVar11 = *(code **)(uVar16 + 0xa4);
  cRamfffffffe = cVar4;
  *(short *)(uVar20 + 0x2260) = (short)unaff_lp;
  uVar24 = (uint)*(ushort *)(uVar16 + 0x18);
  uVar10 = (int)(short)uVar10 * (int)in_r18;
  if ((bool)((byte)(uVar17 >> 3) & 1) || bVar2) {
    *(undefined2 *)(uVar24 + 6) = *(undefined2 *)(uVar24 + 0x88);
code_r0x000558f8:
    unaff_r25 = unaff_r25 & 0xffff;
    uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055922;
LAB_00055968:
    uVar20 = 0x2db3;
    sVar13 = (short)(char)uVar10;
    uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055986;
LAB_000559d8:
    uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
    if (((byte)(uVar17 >> 3) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0x2db3;
code_r0x000559f6:
    (*pcVar11)();
    *(short *)(param_3 + 0x2daa) = (short)unaff_lp;
    goto LAB_000559fe;
  }
  uVar24 = *(uint *)(uVar24 + 0xf8);
LAB_00055922:
  sVar13 = (short)uVar10;
  pcVar14 = (code *)(uint)uVar6;
  uVar20 = param_2 | 0x2daf;
  uVar24 = *(uint *)(uVar24 + 0xf8);
LAB_00055986:
  bVar2 = uVar20 < 8;
  param_3 = param_3 | 0x2daf;
  uVar10 = (uint)unaff_r22;
  cRamfffffffe = cVar4;
  if (-1 < (int)(param_3 & in_r12)) goto code_r0x000559a6;
  if (!bVar2 && (param_3 & in_r12) != 0) goto code_r0x000559f6;
  sVar7 = *(short *)(uVar24 + 0x80);
  iVar12 = (int)sVar7;
  uVar6 = *(ushort *)(&DAT_00004c00 + unaff_lp);
  uVar26 = (uint)uVar6;
  sVar8 = *(short *)(uVar24 + 0x14);
  *(uint *)(param_3 + 0x2dc2) = uVar26;
  uVar19 = (int)sVar8 ^ in_r13;
  uVar24 = (uint)*(ushort *)(uVar24 + 0x18);
  uVar20 = *(uint *)(uVar24 + 0xa4);
  *(ushort *)((in_r2 | 0x2daf) + 0x2260) = uVar6;
  uVar17 = (uint)*(char *)(uVar24 + 8);
  pbVar25 = (byte *)(uint)*(ushort *)(uVar24 + 0x18);
  uVar24 = (int)sVar13 * (int)sVar7;
  if (bVar2 || uVar19 == 0) goto code_r0x00055b0e;
  uVar19 = (int)*(short *)(pbVar25 + 0x3c) | unaff_r25;
  pbVar5 = pbVar25 + 0x88;
  if (bVar2) {
    uVar17 = uVar17 | (uint)&stack0x00000000;
    cRamfffffffe = cVar4;
    if (!bVar2) goto code_r0x00055b0e;
    uVar17 = 0x2db9;
    *(short *)(pbVar25 + 0x3e) = (short)pcVar14;
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
    bVar2 = true;
    sVar13 = *(short *)pbVar5;
    if (uVar19 != 0 || uVar24 != 0) goto LAB_00055b9c;
    sVar13 = *(short *)pbVar25;
    uVar17 = (uint)*(ushort *)(pbVar25 + 0x18);
    iVar12 = (int)*(short *)(uVar17 + 0x88);
    bVar1 = param_1 < pcVar14;
    __saturate((int)param_1 - (int)pcVar14);
    iVar21 = 0x2daa;
    pbVar25 = (byte *)(uint)*(ushort *)(uVar17 + 0x18);
    uVar16 = *(ushort *)(pbVar25 + 0x18);
    bVar2 = bVar1;
    if (!bVar1) goto LAB_00055bc4;
    uVar19 = *(uint *)(uVar17 + 0x30) | uVar23;
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
LAB_00055b78:
    *(uint *)(pbVar25 + 0x10) = uVar19;
    do {
      *(uint *)(iVar21 + 0x2da8) = uVar26;
code_r0x00055b80:
      uVar17 = (uint)(char)pbVar25[3];
      uVar22 = uVar24 | 0x2daa;
      pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
      if (bVar1) {
        uVar17 = (uint)*(char *)(iVar12 + -0x7d85);
        bVar2 = *(ushort *)(pbVar25 + 0x18) != 0;
        __saturate(*(ushort *)(pbVar25 + 0x18) - 1);
        sVar13 = (short)unaff_gp;
LAB_00055b9c:
        uVar24 = (int)(short)uVar24 * (int)(short)unaff_gp;
        if (bVar2 || ((uint)pbVar25 & uVar17) == 0) goto LAB_00055c78;
        *(short *)(pbVar25 + 0x60) = sVar13;
        iVar12 = (int)*(short *)(pbVar25 + 0x10);
        *(short *)(pbVar25 + 0x60) = sVar13;
        iVar21 = *(short *)(pbVar25 + 0x24) + -0xc;
        bVar2 = false;
        uVar16 = *(ushort *)(pbVar25 + 0x18);
        uVar22 = uVar10;
LAB_00055bc4:
        uVar17 = (uint)uVar16;
      }
      else {
LAB_00055be8:
        *(uint *)(*pbVar25 + 0xb8) = uVar20;
        pbVar25 = *(byte **)(uVar17 + 0xf8);
        uVar9 = *(undefined2 *)pbVar25;
        sVar13 = *(short *)(pbVar25 + 0x4c);
        iVar21 = uVar22 - 0xb;
        uVar22 = uVar23 & 0x200;
        uVar23 = (int)uVar23 >> 10;
        bVar2 = uVar22 != 0;
        *(char *)(param_2 + 0x400) = (char)uVar20;
        pbVar25[0x51] = (byte)uVar9;
        uVar22 = uVar20;
      }
      *(uint *)(iVar21 + 0x2d4c) = uVar17;
      iVar21 = (int)(char)(&DAT_ffffe256)[iVar12];
      bVar1 = false;
    } while (!bVar2);
    uVar19 = (uint)*(ushort *)(*(ushort *)(pbVar25 + 0x18) + 0x18);
    if (-1 < (int)uVar22) {
      *(short *)(uVar19 + 0x60) = sVar13;
      goto LAB_00055c2e;
    }
LAB_00055c7c:
    in_r10 = func_0xffe60584();
    *(uint *)(uVar19 + 0x9c) = uVar20;
    uVar17 = (uint)*(char *)(iVar12 + -0x7d85);
    __saturate(*(ushort *)(uVar19 + 0x18) - 1);
    DAT_00000047 = unaff_r22;
  }
  else {
    uVar19 = *(uint *)(pbVar25 + 4);
    pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
    uVar24 = (int)(short)uVar24 * (int)(short)uVar23;
    uVar17 = 9;
    _DAT_00005b71 = uVar6;
    cRamfffffffe = cVar4;
    _DAT_00005b7b = uVar26;
    _DAT_00005b97 = uVar6;
    if (bVar2) {
code_r0x00055b0e:
      iVar21 = (int)*(char *)(iVar12 + -0x784);
      bVar1 = in_r12 < 0xfffffff3;
      pbVar25 = *(byte **)(pbVar25 + 0xf8);
      if ((int)(in_r12 + 0xd) < 0) goto LAB_00055b78;
      bVar2 = ((uint)pcVar14 & 0x10000) != 0;
      pbVar25 = (byte *)(uint)*(byte *)((uint)pbVar25 | uVar17);
    }
    else {
      cVar3 = (&DAT_ffffe256)[iVar12];
      uVar19 = (int)(uVar19 >> 1) >> 0x13;
      bVar2 = 9 < (int)cVar3 - 10U;
      pbVar25[0x35] = (byte)uVar19;
      uVar17 = unaff_gp;
      if (bVar2 || cVar3 == 0x14) goto code_r0x00055b0e;
    }
    bVar1 = true;
    if (bVar2) goto code_r0x00055b80;
    uVar23 = *(uint *)(pbVar25 + 0xf8);
    bVar2 = 4 < uVar23;
    uVar19 = uVar23 - 5;
    __saturate(uVar19);
    if (-1 < (int)(uVar23 - 5)) {
      uVar23 = (uint)(char)(&DAT_ffffa503)[uVar20];
      uVar22 = (uint)DAT_ffffe700;
      pbVar25 = (byte *)(uVar19 | uVar17);
      goto LAB_00055be8;
    }
LAB_00055c2e:
    uVar17 = (uint)DAT_00007317;
    *(undefined1 *)(uVar19 + 0x17) = in_r14;
    *(uint *)(uVar19 + 0x98) = uVar20;
    *(undefined2 *)(uVar19 + 0x60) = *(undefined2 *)(uVar19 + 0x50);
    uVar23 = (uint)*(short *)(uVar19 + 0xae);
    if (!bVar2 && uVar22 != 0) {
      __saturate(unaff_r23 - 0x1ffU);
      bVar2 = SCARRY4(uVar23,uVar22);
      uVar15 = uVar23 + uVar22;
      __saturate(uVar15);
      *(undefined2 *)(uVar19 + 200) = *(undefined2 *)(uVar19 + 0x50);
      pbVar25 = *(byte **)(uVar19 + 0xf8);
      uVar24 = unaff_r23 - 0x1ffU;
      if (!CARRY4(uVar23,uVar22)) goto LAB_00055cb2;
      DAT_0000188b = (undefined1)uVar22;
      *(short *)(pbVar25 + 0x3e) = (short)uVar15;
      pbVar25 = (byte *)(uint)*pbVar25;
LAB_00055c78:
      uVar19 = (uint)*pbVar25;
      goto LAB_00055c7c;
    }
  }
  uVar15 = (uint)(int)*(short *)(uVar19 + 0xc) / uVar10;
  bVar2 = false;
  pbVar25 = (byte *)(uint)*(ushort *)(uVar19 + 0x18);
  uVar24 = param_2;
  uVar22 = uVar10;
LAB_00055cb2:
  uVar16 = (ushort)uVar22;
  if (!bVar2) {
    *(uint *)(uVar17 + 0x2d56) = uVar26;
    bVar2 = false;
    goto code_r0x00055d10;
  }
  bVar2 = false;
  uVar22 = 0xfffffff1;
  if (-1 < (int)((uint)pbVar25 & uVar17)) goto LAB_00055d0c_2;
  uVar9 = (undefined2)*(undefined4 *)(pbVar25 + 0x60);
  *(undefined2 *)(pbVar25 + 0x60) = uVar9;
  iVar21 = (int)DAT_00007347;
  pbVar25[0x47] = (byte)uVar24;
  __saturate(uVar24 + param_2);
  __saturate(uVar15 - 0xf);
  *(undefined2 *)(pbVar25 + 0x50) = uVar9;
  uVar16 = (ushort)unaff_r23 | 0xfff1;
  if (0xe < uVar15) goto LAB_00055d2a;
  *(undefined2 *)(pbVar25 + 0x60) = uVar9;
  do {
    pbVar25 = (byte *)(uint)*pbVar25;
    while( true ) {
      uVar22 = (uint)*pbVar25;
      in_r10 = func_0xffe605fe();
      uVar20 = *(uint *)(uVar22 + 0x9c);
      bVar2 = SCARRY4(uVar22,-5);
      pbVar25 = (byte *)(uVar22 - 5);
      __saturate(pbVar25);
      uVar17 = (uint)*(char *)(iVar12 + -0x84);
      uVar22 = uVar10;
LAB_00055d0c_2:
      uVar16 = (ushort)uVar22;
      *(uint *)(pbVar25 + 0xac) = uVar20;
code_r0x00055d10:
      pbVar25 = (byte *)(uint)*(ushort *)(pbVar25 + 0x18);
      *(char *)(in_r10 + 0x6278) = (char)uVar16;
      if (bVar2) break;
      iVar21 = uVar17 - 0xb;
      *(char *)(in_r10 + 0x6276) = (char)uVar16;
      if (SCARRY4(uVar17,-0xb)) break;
LAB_00055d2a:
      *(char *)(in_r10 + 0x627c) = (char)uVar16;
      if (!SCARRY4(iVar21,-0xb)) {
        *(ushort *)(pbVar25 + 0xaa) = (ushort)unaff_r22;
        uVar10 = (uint)*(ushort *)(pbVar25 + 0x18);
        *(uint *)(uVar10 + 0xac) = uVar20;
        *(ushort *)(iVar21 + 0x18b2) = uVar6;
        *(uint *)(iVar21 + 0x18e2) = uVar26;
        *(short *)(uVar10 + 0x88) = (short)iVar12;
        uVar18 = *(undefined4 *)(uVar10 + 0xac);
        uVar10 = (uint)*(ushort *)(uVar10 + 0x18);
        *(undefined4 *)(uVar10 + 0x9c) = uVar18;
        *(undefined4 *)(uVar10 + 0xa8) = uVar18;
        __saturate(*(ushort *)(uVar10 + 0x18) - 1);
        *(ushort *)(*(ushort *)(uVar10 + 0x18) + 0xc) = uVar16;
                    /* WARNING: Could not recover jumptable at 0x00055db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055db6 + *(short *)(&DAT_00055db6 + param_2 * 2) * 2))();
        return;
      }
    }
  } while( true );
}


// ==== FUN_00055652 @ 00055652 (size 1684) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00055d0c) overlaps instruction at (ram,0x00055d0a)
    */
/* WARNING: Removing unreachable block (ram,0x000559aa) */
/* WARNING: Removing unreachable block (ram,0x000559b2) */
/* WARNING: Removing unreachable block (ram,0x00055a0a) */
/* WARNING: Removing unreachable block (ram,0x00055a10) */
/* WARNING: Removing unreachable block (ram,0x00055a64) */
/* WARNING: Removing unreachable block (ram,0x0005584e) */
/* WARNING: Removing unreachable block (ram,0x00055860) */
/* WARNING: Removing unreachable block (ram,0x000558b4) */
/* WARNING: Removing unreachable block (ram,0x0005583e) */
/* WARNING: Removing unreachable block (ram,0x00055846) */
/* WARNING: Removing unreachable block (ram,0x000557f2) */
/* WARNING: Removing unreachable block (ram,0x000557be) */
/* WARNING: Removing unreachable block (ram,0x000557cc) */
/* WARNING: Removing unreachable block (ram,0x0005584a) */
/* WARNING: Removing unreachable block (ram,0x00055834) */
/* WARNING: Removing unreachable block (ram,0x00055892) */
/* WARNING: Removing unreachable block (ram,0x00055932) */
/* WARNING: Removing unreachable block (ram,0x0005593a) */
/* WARNING: Removing unreachable block (ram,0x00055992) */
/* WARNING: Removing unreachable block (ram,0x000559e6) */
/* WARNING: Removing unreachable block (ram,0x00055b2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00055652(code *param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  byte *pbVar5;
  ushort uVar6;
  short sVar7;
  short sVar8;
  uint in_r1;
  uint in_r2;
  uint unaff_gp;
  uint unaff_tp;
  code *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined2 uVar12;
  short sVar13;
  int iVar14;
  uint in_r12;
  uint in_r13;
  undefined1 in_r14;
  code *pcVar15;
  uint uVar16;
  char in_r16;
  ushort uVar17;
  uint uVar18;
  uint in_r17;
  short in_r18;
  uint unaff_r21;
  byte unaff_r22;
  int unaff_r23;
  uint unaff_r25;
  code *unaff_r26;
  uint unaff_r28;
  uint uVar19;
  int iVar20;
  code *unaff_r29;
  int unaff_ep;
  uint uVar21;
  uint uVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint unaff_lp;
  uint uVar26;
  byte in_PSW;
  uint uVar27;
  
  uVar21 = (uint)*(ushort *)(unaff_ep + 0x18);
  if ((in_PSW & 1) == 1) {
LAB_000556ac:
                    /* WARNING: Could not recover jumptable at 0x000556ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_000556ae + *(short *)(&DAT_000556ae + unaff_r28 * 2) * 2))();
    return;
  }
  pcVar9 = (code *)(unaff_tp & 0xff);
  uVar27 = (uint)(unaff_r28 < 8) << 3 | (uint)((in_r12 & 0x2dae) == 0);
  iVar14 = (*unaff_r29)();
  uVar12 = *(undefined2 *)(uVar21 + 0x88);
  cRamfffffffe = in_r16;
  if (((byte)(uVar27 >> 1) & 1) == ((byte)(uVar27 >> 2) & 1)) {
code_r0x000556ce:
                    /* WARNING: Could not recover jumptable at 0x000556d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(short *)(iVar14 * 2 + 0x556d2) * 2 + 0x556d2))();
    return;
  }
  *(uint *)(uVar21 + 8) = unaff_r21;
  uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
  if (((byte)(uVar27 >> 1) & 1) == ((byte)(uVar27 >> 2) & 1)) {
    if ((uVar27 & 1) != 0) goto code_r0x000556ce;
LAB_00055722:
    in_r17 = (uint)*(char *)(in_r17 - 0x5de2);
    uVar27 = uVar27 & 0xfffffff8;
  }
  else {
    param_3 = (uint)*(short *)(uVar21 + 0x10);
    unaff_r26 = (code *)(uint)*(ushort *)(uVar21 + 0x18);
    if (((byte)(uVar27 >> 1) & 1) != ((byte)(uVar27 >> 2) & 1)) {
      pcVar9 = *(code **)(*(ushort *)(uVar21 + 0x18) + 0x78);
      uVar21 = (uint)*(ushort *)(*(ushort *)(uVar21 + 0x18) + 0x18);
      in_r1 = (int)(short)in_r1 * (int)(short)in_r13;
      uVar12 = *(undefined2 *)(uVar21 + 0x88);
      if (((byte)(uVar27 >> 1) & 1) != ((byte)(uVar27 >> 2) & 1)) {
        (*param_1)();
        unaff_r28 = 0x2dad;
        goto LAB_000556ac;
      }
LAB_000556e2:
      unaff_r21 = unaff_r21 ^ in_r17;
      *(undefined2 *)(uVar21 + 6) = uVar12;
      uVar27 = uVar27 & 0xfffffff8;
      goto LAB_00055722;
    }
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (((byte)(uVar27 >> 3) & 1) != 1) {
      param_3 = (uint)*(short *)(uVar21 + 0x80);
      unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
      unaff_r21 = (uint)*(short *)(uVar21 + 0x24);
      goto LAB_000556e2;
    }
  }
  uVar6 = *(ushort *)(uVar21 + 0xe);
  pcVar15 = (code *)(int)(short)uVar6;
  cVar4 = *(char *)(uVar21 + 0x68);
  uVar18 = (uint)cVar4;
  uVar22 = uVar27 & 0xfffffff8;
  cVar3 = *(char *)(unaff_lp - 0x52b8);
  cRamfffffffe = in_r16;
  *(byte *)(uVar21 + 0x5d) = (byte)unaff_r21 | (byte)unaff_r25;
  *(undefined2 *)(uVar21 + 0x2e) = *(undefined2 *)(uVar21 + 0x7a);
  uVar12 = (undefined2)*(undefined4 *)(uVar21 + 0x34);
  *(undefined2 *)(uVar21 + 0x2e) = uVar12;
  *(undefined2 *)(uVar21 + 0x98) = uVar12;
  uVar21 = (uint)*(ushort *)(*(int *)(uVar21 + 0xf8) + 0x18);
  if ((bool)((byte)(uVar27 >> 3) & 1) || param_1 == (code *)0xffffffff) {
    if ((uVar27 >> 3 & 1) == 0) {
      in_r17 = (uint)(char)pcVar9[-0x5def];
      uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
      if (-1 < (int)param_1) {
        param_3 = (uint)*(short *)(uVar21 + 0x80);
        unaff_lp = (uint)*(ushort *)(&DAT_00004c00 + unaff_lp);
        *(uint *)((int)cVar3 + 0x2dc2) = unaff_lp;
        goto LAB_000558d6;
      }
      goto LAB_00055922;
    }
    uVar19 = (uint)&stack0x00000000 | 0x2daf;
    cRamfffffffe = cVar4;
    if (!(bool)((byte)(uVar27 >> 3) & 1) && pcVar9 != (code *)0x0) {
      bVar2 = (unaff_gp & 0x2db3) == 0;
      goto LAB_00055888;
    }
LAB_000558d6:
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (-1 < (int)(in_r1 | 0xa30b)) {
code_r0x00055950:
      uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
      if ((int)(in_r1 | 0xa30b) < 0) {
        uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
        if (((byte)(uVar27 >> 3) & 1) != 1) goto LAB_00055968;
      }
      else {
        *(uint *)((in_r2 | 0x2daf) + 0x2dc2) = unaff_lp;
      }
      (*unaff_r26)();
      uVar22 = uVar22 & 0xfffffff8;
      uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
      if (-1 < (int)(in_r1 | 0xa30b)) {
                    /* WARNING: Could not recover jumptable at 0x00055a32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055a34 + *(short *)(&DAT_00055a34 + param_3 * 2) * 2))();
        return;
      }
      goto LAB_000559d8;
    }
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (((byte)(uVar27 >> 3) & 1) != 1) goto code_r0x000558f8;
    if ((in_r1 | 0xa30b) != 0) goto code_r0x00055950;
code_r0x000559a6:
    uVar21 = *(uint *)(uVar21 + 0xf8);
LAB_000559fe:
                    /* WARNING: Could not recover jumptable at 0x00055a06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00055a08 + *(short *)(&DAT_00055a08 + uVar21 * 2) * 2))();
    return;
  }
  uVar22 = (uint)((uint)(int)cVar3 < 8) << 3;
  uVar19 = 0x2db1;
  bVar2 = true;
LAB_00055888:
  uVar17 = *(ushort *)(uVar21 + 0x18);
  pcVar9 = *(code **)(uVar17 + 0xa4);
  cRamfffffffe = cVar4;
  *(short *)(uVar19 + 0x2260) = (short)unaff_lp;
  uVar21 = (uint)*(ushort *)(uVar17 + 0x18);
  in_r1 = (int)(short)in_r1 * (int)in_r18;
  if ((bool)((byte)(uVar22 >> 3) & 1) || bVar2) {
    *(undefined2 *)(uVar21 + 6) = *(undefined2 *)(uVar21 + 0x88);
code_r0x000558f8:
    unaff_r25 = unaff_r25 & 0xffff;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055922;
LAB_00055968:
    uVar27 = 0x2db3;
    sVar13 = (short)(char)in_r1;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if ((in_r12 & 0x2db3) == 0) goto LAB_00055986;
LAB_000559d8:
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (((byte)(uVar22 >> 3) & 1) == 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_3 = 0x2db3;
code_r0x000559f6:
    (*pcVar9)();
    *(short *)(param_3 + 0x2daa) = (short)unaff_lp;
    goto LAB_000559fe;
  }
  uVar21 = *(uint *)(uVar21 + 0xf8);
LAB_00055922:
  sVar13 = (short)in_r1;
  pcVar15 = (code *)(uint)uVar6;
  uVar27 = param_2 | 0x2daf;
  uVar21 = *(uint *)(uVar21 + 0xf8);
LAB_00055986:
  bVar2 = uVar27 < 8;
  param_3 = param_3 | 0x2daf;
  uVar27 = (uint)unaff_r22;
  cRamfffffffe = cVar4;
  if (-1 < (int)(param_3 & in_r12)) goto code_r0x000559a6;
  if (!bVar2 && (param_3 & in_r12) != 0) goto code_r0x000559f6;
  sVar7 = *(short *)(uVar21 + 0x80);
  iVar11 = (int)sVar7;
  uVar6 = *(ushort *)(&DAT_00004c00 + unaff_lp);
  uVar26 = (uint)uVar6;
  sVar8 = *(short *)(uVar21 + 0x14);
  *(uint *)(param_3 + 0x2dc2) = uVar26;
  in_r13 = (int)sVar8 ^ in_r13;
  uVar22 = (uint)*(ushort *)(uVar21 + 0x18);
  uVar19 = *(uint *)(uVar22 + 0xa4);
  *(ushort *)((in_r2 | 0x2daf) + 0x2260) = uVar6;
  uVar21 = (uint)*(char *)(uVar22 + 8);
  pbVar23 = (byte *)(uint)*(ushort *)(uVar22 + 0x18);
  uVar22 = (int)sVar13 * (int)sVar7;
  if (bVar2 || in_r13 == 0) goto code_r0x00055b0e;
  in_r13 = (int)*(short *)(pbVar23 + 0x3c) | unaff_r25;
  pbVar5 = pbVar23 + 0x88;
  if (bVar2) {
    uVar21 = uVar21 | (uint)&stack0x00000000;
    cRamfffffffe = cVar4;
    if (!bVar2) goto code_r0x00055b0e;
    uVar21 = 0x2db9;
    *(short *)(pbVar23 + 0x3e) = (short)pcVar15;
    pbVar23 = (byte *)(uint)*(ushort *)(pbVar23 + 0x18);
    bVar2 = true;
    sVar13 = *(short *)pbVar5;
    if (in_r13 != 0 || uVar22 != 0) goto LAB_00055b9c;
    sVar13 = *(short *)pbVar23;
    uVar21 = (uint)*(ushort *)(pbVar23 + 0x18);
    iVar11 = (int)*(short *)(uVar21 + 0x88);
    bVar1 = param_1 < pcVar15;
    __saturate((int)param_1 - (int)pcVar15);
    iVar20 = 0x2daa;
    pbVar23 = (byte *)(uint)*(ushort *)(uVar21 + 0x18);
    uVar17 = *(ushort *)(pbVar23 + 0x18);
    bVar2 = bVar1;
    if (!bVar1) goto LAB_00055bc4;
    in_r13 = *(uint *)(uVar21 + 0x30) | in_r17;
    pbVar23 = (byte *)(uint)*(ushort *)(pbVar23 + 0x18);
LAB_00055b78:
    *(uint *)(pbVar23 + 0x10) = in_r13;
    do {
      *(uint *)(iVar20 + 0x2da8) = uVar26;
code_r0x00055b80:
      uVar21 = (uint)(char)pbVar23[3];
      uVar18 = uVar22 | 0x2daa;
      pbVar23 = (byte *)(uint)*(ushort *)(pbVar23 + 0x18);
      if (bVar1) {
        uVar21 = (uint)*(char *)(iVar11 + -0x7d85);
        bVar2 = *(ushort *)(pbVar23 + 0x18) != 0;
        __saturate(*(ushort *)(pbVar23 + 0x18) - 1);
        sVar13 = (short)unaff_gp;
LAB_00055b9c:
        uVar22 = (int)(short)uVar22 * (int)(short)unaff_gp;
        if (bVar2 || ((uint)pbVar23 & uVar21) == 0) goto LAB_00055c78;
        *(short *)(pbVar23 + 0x60) = sVar13;
        iVar11 = (int)*(short *)(pbVar23 + 0x10);
        *(short *)(pbVar23 + 0x60) = sVar13;
        iVar20 = *(short *)(pbVar23 + 0x24) + -0xc;
        bVar2 = false;
        uVar17 = *(ushort *)(pbVar23 + 0x18);
        uVar18 = uVar27;
LAB_00055bc4:
        uVar21 = (uint)uVar17;
      }
      else {
LAB_00055be8:
        *(uint *)(*pbVar23 + 0xb8) = uVar19;
        pbVar23 = *(byte **)(uVar21 + 0xf8);
        uVar12 = *(undefined2 *)pbVar23;
        sVar13 = *(short *)(pbVar23 + 0x4c);
        iVar20 = uVar18 - 0xb;
        uVar18 = in_r17 & 0x200;
        in_r17 = (int)in_r17 >> 10;
        bVar2 = uVar18 != 0;
        *(char *)(param_2 + 0x400) = (char)uVar19;
        pbVar23[0x51] = (byte)uVar12;
        uVar18 = uVar19;
      }
      *(uint *)(iVar20 + 0x2d4c) = uVar21;
      iVar20 = (int)(char)(&DAT_ffffe256)[iVar11];
      bVar1 = false;
    } while (!bVar2);
    uVar24 = (uint)*(ushort *)(*(ushort *)(pbVar23 + 0x18) + 0x18);
    if (-1 < (int)uVar18) {
      *(short *)(uVar24 + 0x60) = sVar13;
      goto LAB_00055c2e;
    }
LAB_00055c7c:
    iVar14 = func_0xffe60584();
    *(uint *)(uVar24 + 0x9c) = uVar19;
    uVar22 = (uint)*(char *)(iVar11 + -0x7d85);
    __saturate(*(ushort *)(uVar24 + 0x18) - 1);
    DAT_00000047 = unaff_r22;
  }
  else {
    in_r13 = *(uint *)(pbVar23 + 4);
    pbVar23 = (byte *)(uint)*(ushort *)(pbVar23 + 0x18);
    uVar22 = (int)(short)uVar22 * (int)(short)in_r17;
    uVar21 = 9;
    _DAT_00005b71 = uVar6;
    cRamfffffffe = cVar4;
    _DAT_00005b7b = uVar26;
    _DAT_00005b97 = uVar6;
    if (bVar2) {
code_r0x00055b0e:
      iVar20 = (int)*(char *)(iVar11 + -0x784);
      bVar1 = in_r12 < 0xfffffff3;
      pbVar23 = *(byte **)(pbVar23 + 0xf8);
      if ((int)(in_r12 + 0xd) < 0) goto LAB_00055b78;
      bVar2 = ((uint)pcVar15 & 0x10000) != 0;
      pbVar23 = (byte *)(uint)*(byte *)((uint)pbVar23 | uVar21);
    }
    else {
      cVar3 = (&DAT_ffffe256)[iVar11];
      in_r13 = (int)(in_r13 >> 1) >> 0x13;
      bVar2 = 9 < (int)cVar3 - 10U;
      pbVar23[0x35] = (byte)in_r13;
      uVar21 = unaff_gp;
      if (bVar2 || cVar3 == 0x14) goto code_r0x00055b0e;
    }
    bVar1 = true;
    if (bVar2) goto code_r0x00055b80;
    uVar25 = *(uint *)(pbVar23 + 0xf8);
    bVar2 = 4 < uVar25;
    uVar24 = uVar25 - 5;
    __saturate(uVar24);
    if (-1 < (int)(uVar25 - 5)) {
      in_r17 = (uint)(char)(&DAT_ffffa503)[uVar19];
      uVar18 = (uint)DAT_ffffe700;
      pbVar23 = (byte *)(uVar24 | uVar21);
      goto LAB_00055be8;
    }
LAB_00055c2e:
    uVar22 = (uint)DAT_00007317;
    *(undefined1 *)(uVar24 + 0x17) = in_r14;
    *(uint *)(uVar24 + 0x98) = uVar19;
    *(undefined2 *)(uVar24 + 0x60) = *(undefined2 *)(uVar24 + 0x50);
    uVar21 = (uint)*(short *)(uVar24 + 0xae);
    if (!bVar2 && uVar18 != 0) {
      __saturate(unaff_r23 - 0x1ffU);
      bVar2 = SCARRY4(uVar21,uVar18);
      uVar16 = uVar21 + uVar18;
      __saturate(uVar16);
      *(undefined2 *)(uVar24 + 200) = *(undefined2 *)(uVar24 + 0x50);
      pbVar23 = *(byte **)(uVar24 + 0xf8);
      uVar25 = unaff_r23 - 0x1ffU;
      if (!CARRY4(uVar21,uVar18)) goto LAB_00055cb2;
      DAT_0000188b = (undefined1)uVar18;
      *(short *)(pbVar23 + 0x3e) = (short)uVar16;
      pbVar23 = (byte *)(uint)*pbVar23;
LAB_00055c78:
      uVar24 = (uint)*pbVar23;
      goto LAB_00055c7c;
    }
  }
  uVar16 = (uint)(int)*(short *)(uVar24 + 0xc) / uVar27;
  bVar2 = false;
  pbVar23 = (byte *)(uint)*(ushort *)(uVar24 + 0x18);
  uVar25 = param_2;
  uVar18 = uVar27;
LAB_00055cb2:
  uVar17 = (ushort)uVar18;
  if (!bVar2) {
    *(uint *)(uVar22 + 0x2d56) = uVar26;
    bVar2 = false;
    goto code_r0x00055d10;
  }
  bVar2 = false;
  uVar21 = 0xfffffff1;
  if (-1 < (int)((uint)pbVar23 & uVar22)) goto LAB_00055d0c_2;
  uVar12 = (undefined2)*(undefined4 *)(pbVar23 + 0x60);
  *(undefined2 *)(pbVar23 + 0x60) = uVar12;
  iVar20 = (int)DAT_00007347;
  pbVar23[0x47] = (byte)uVar25;
  __saturate(uVar25 + param_2);
  __saturate(uVar16 - 0xf);
  *(undefined2 *)(pbVar23 + 0x50) = uVar12;
  uVar17 = (ushort)unaff_r23 | 0xfff1;
  if (0xe < uVar16) goto LAB_00055d2a;
  *(undefined2 *)(pbVar23 + 0x60) = uVar12;
  do {
    pbVar23 = (byte *)(uint)*pbVar23;
    while( true ) {
      uVar21 = (uint)*pbVar23;
      iVar14 = func_0xffe605fe();
      uVar19 = *(uint *)(uVar21 + 0x9c);
      bVar2 = SCARRY4(uVar21,-5);
      pbVar23 = (byte *)(uVar21 - 5);
      __saturate(pbVar23);
      uVar22 = (uint)*(char *)(iVar11 + -0x84);
      uVar21 = uVar27;
LAB_00055d0c_2:
      uVar17 = (ushort)uVar21;
      *(uint *)(pbVar23 + 0xac) = uVar19;
code_r0x00055d10:
      pbVar23 = (byte *)(uint)*(ushort *)(pbVar23 + 0x18);
      *(char *)(iVar14 + 0x6278) = (char)uVar17;
      if (bVar2) break;
      iVar20 = uVar22 - 0xb;
      *(char *)(iVar14 + 0x6276) = (char)uVar17;
      if (SCARRY4(uVar22,-0xb)) break;
LAB_00055d2a:
      *(char *)(iVar14 + 0x627c) = (char)uVar17;
      if (!SCARRY4(iVar20,-0xb)) {
        *(ushort *)(pbVar23 + 0xaa) = (ushort)unaff_r22;
        uVar21 = (uint)*(ushort *)(pbVar23 + 0x18);
        *(uint *)(uVar21 + 0xac) = uVar19;
        *(ushort *)(iVar20 + 0x18b2) = uVar6;
        *(uint *)(iVar20 + 0x18e2) = uVar26;
        *(short *)(uVar21 + 0x88) = (short)iVar11;
        uVar10 = *(undefined4 *)(uVar21 + 0xac);
        uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
        *(undefined4 *)(uVar21 + 0x9c) = uVar10;
        *(undefined4 *)(uVar21 + 0xa8) = uVar10;
        __saturate(*(ushort *)(uVar21 + 0x18) - 1);
        *(ushort *)(*(ushort *)(uVar21 + 0x18) + 0xc) = uVar17;
                    /* WARNING: Could not recover jumptable at 0x00055db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00055db6 + *(short *)(&DAT_00055db6 + param_2 * 2) * 2))();
        return;
      }
    }
  } while( true );
}


// ==== FUN_000566f4 @ 000566f4 (size 218) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x00056cfc) */
/* WARNING: Removing unreachable block (ram,0x000567a6) */
/* WARNING: Removing unreachable block (ram,0x0005684e) */
/* WARNING: Removing unreachable block (ram,0x0005687e) */
/* WARNING: Removing unreachable block (ram,0x00056890) */
/* WARNING: Removing unreachable block (ram,0x000568c0) */
/* WARNING: Removing unreachable block (ram,0x000568f0) */
/* WARNING: Removing unreachable block (ram,0x00056924) */
/* WARNING: Removing unreachable block (ram,0x00056932) */
/* WARNING: Removing unreachable block (ram,0x0005695c) */
/* WARNING: Removing unreachable block (ram,0x00056966) */
/* WARNING: Removing unreachable block (ram,0x0005699e) */
/* WARNING: Removing unreachable block (ram,0x00056a5c) */
/* WARNING: Removing unreachable block (ram,0x00056b26) */
/* WARNING: Removing unreachable block (ram,0x00056b30) */
/* WARNING: Removing unreachable block (ram,0x00056b44) */
/* WARNING: Removing unreachable block (ram,0x00056b66) */
/* WARNING: Removing unreachable block (ram,0x00056b88) */
/* WARNING: Removing unreachable block (ram,0x00056baa) */
/* WARNING: Removing unreachable block (ram,0x00056bbe) */
/* WARNING: Removing unreachable block (ram,0x00056bc0) */
/* WARNING: Removing unreachable block (ram,0x00056bd4) */
/* WARNING: Removing unreachable block (ram,0x00056bdc) */
/* WARNING: Removing unreachable block (ram,0x00056be6) */
/* WARNING: Removing unreachable block (ram,0x00056bee) */
/* WARNING: Removing unreachable block (ram,0x00056bfe) */
/* WARNING: Removing unreachable block (ram,0x00056c10) */
/* WARNING: Removing unreachable block (ram,0x00056c12) */
/* WARNING: Removing unreachable block (ram,0x00056c14) */
/* WARNING: Removing unreachable block (ram,0x00056c20) */
/* WARNING: Removing unreachable block (ram,0x00056c2e) */
/* WARNING: Removing unreachable block (ram,0x00056c30) */
/* WARNING: Removing unreachable block (ram,0x00056c38) */
/* WARNING: Removing unreachable block (ram,0x00056c42) */
/* WARNING: Removing unreachable block (ram,0x00056ccc) */
/* WARNING: Removing unreachable block (ram,0x00056cd6) */
/* WARNING: Removing unreachable block (ram,0x00056cda) */
/* WARNING: Removing unreachable block (ram,0x00056cdc) */
/* WARNING: Removing unreachable block (ram,0x00056ca2) */
/* WARNING: Removing unreachable block (ram,0x00056cfe) */
/* WARNING: Removing unreachable block (ram,0x00056d06) */
/* WARNING: Removing unreachable block (ram,0x00056ca4) */
/* WARNING: Removing unreachable block (ram,0x00056caa) */
/* WARNING: Removing unreachable block (ram,0x00056cc4) */
/* WARNING: Removing unreachable block (ram,0x00056d26) */
/* WARNING: Removing unreachable block (ram,0x00056c68) */
/* WARNING: Removing unreachable block (ram,0x00056c52) */
/* WARNING: Removing unreachable block (ram,0x00056c6c) */
/* WARNING: Removing unreachable block (ram,0x00056c9a) */
/* WARNING: Removing unreachable block (ram,0x00056ce4) */
/* WARNING: Removing unreachable block (ram,0x00056d40) */
/* WARNING: Removing unreachable block (ram,0x00056d9c) */
/* WARNING: Removing unreachable block (ram,0x00056cec) */
/* WARNING: Removing unreachable block (ram,0x00056cf0) */
/* WARNING: Removing unreachable block (ram,0x00056cf4) */
/* WARNING: Removing unreachable block (ram,0x00056d56) */
/* WARNING: Removing unreachable block (ram,0x00056d24) */
/* WARNING: Removing unreachable block (ram,0x00056d2a) */
/* WARNING: Removing unreachable block (ram,0x00056d66) */
/* WARNING: Removing unreachable block (ram,0x00056d2c) */
/* WARNING: Removing unreachable block (ram,0x00056d30) */
/* WARNING: Removing unreachable block (ram,0x00056d6e) */
/* WARNING: Removing unreachable block (ram,0x00056d76) */
/* WARNING: Removing unreachable block (ram,0x00056d34) */
/* WARNING: Removing unreachable block (ram,0x00056d36) */
/* WARNING: Removing unreachable block (ram,0x00056d42) */
/* WARNING: Removing unreachable block (ram,0x00056da8) */
/* WARNING: Removing unreachable block (ram,0x00056dd6) */
/* WARNING: Removing unreachable block (ram,0x00056e02) */
/* WARNING: Removing unreachable block (ram,0x00056e0e) */
/* WARNING: Removing unreachable block (ram,0x00056d54) */
/* WARNING: Removing unreachable block (ram,0x00056e32) */
/* WARNING: Removing unreachable block (ram,0x00056e50) */
/* WARNING: Removing unreachable block (ram,0x00056e6a) */
/* WARNING: Removing unreachable block (ram,0x00056e9a) */
/* WARNING: Removing unreachable block (ram,0x00056ed6) */
/* WARNING: Removing unreachable block (ram,0x00056ee8) */
/* WARNING: Removing unreachable block (ram,0x00056eec) */
/* WARNING: Removing unreachable block (ram,0x00056f20) */
/* WARNING: Removing unreachable block (ram,0x00056f2e) */
/* WARNING: Removing unreachable block (ram,0x00056f78) */
/* WARNING: Removing unreachable block (ram,0x00056ff4) */
/* WARNING: Removing unreachable block (ram,0x00057072) */
/* WARNING: Removing unreachable block (ram,0x0005719c) */
/* WARNING: Removing unreachable block (ram,0x000571ac) */
/* WARNING: Removing unreachable block (ram,0x0005721c) */
/* WARNING: Removing unreachable block (ram,0x00057232) */
/* WARNING: Removing unreachable block (ram,0x0005729a) */
/* WARNING: Removing unreachable block (ram,0x00057240) */
/* WARNING: Removing unreachable block (ram,0x00057270) */
/* WARNING: Removing unreachable block (ram,0x000572de) */
/* WARNING: Removing unreachable block (ram,0x00057286) */
/* WARNING: Removing unreachable block (ram,0x000572e0) */
/* WARNING: Removing unreachable block (ram,0x000572e2) */
/* WARNING: Removing unreachable block (ram,0x000572e6) */
/* WARNING: Removing unreachable block (ram,0x0005728c) */
/* WARNING: Removing unreachable block (ram,0x00057294) */
/* WARNING: Removing unreachable block (ram,0x0005729e) */
/* WARNING: Removing unreachable block (ram,0x000572e8) */
/* WARNING: Removing unreachable block (ram,0x000572ea) */
/* WARNING: Removing unreachable block (ram,0x000572fa) */
/* WARNING: Removing unreachable block (ram,0x0005730a) */
/* WARNING: Removing unreachable block (ram,0x0005731c) */
/* WARNING: Removing unreachable block (ram,0x0005733e) */
/* WARNING: Removing unreachable block (ram,0x0005734e) */
/* WARNING: Removing unreachable block (ram,0x0005735e) */
/* WARNING: Removing unreachable block (ram,0x00057366) */
/* WARNING: Removing unreachable block (ram,0x000573fe) */
/* WARNING: Removing unreachable block (ram,0x00057402) */
/* WARNING: Removing unreachable block (ram,0x0005742c) */
/* WARNING: Removing unreachable block (ram,0x00057370) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057448) */
/* WARNING: Removing unreachable block (ram,0x00057456) */
/* WARNING: Removing unreachable block (ram,0x0005745e) */
/* WARNING: Removing unreachable block (ram,0x00057462) */
/* WARNING: Removing unreachable block (ram,0x00057480) */
/* WARNING: Removing unreachable block (ram,0x000574b6) */
/* WARNING: Removing unreachable block (ram,0x000575ec) */
/* WARNING: Removing unreachable block (ram,0x00057554) */
/* WARNING: Removing unreachable block (ram,0x00057590) */
/* WARNING: Removing unreachable block (ram,0x000575a4) */
/* WARNING: Removing unreachable block (ram,0x000575ae) */
/* WARNING: Removing unreachable block (ram,0x000575b2) */
/* WARNING: Removing unreachable block (ram,0x000575b8) */
/* WARNING: Removing unreachable block (ram,0x000575c2) */
/* WARNING: Removing unreachable block (ram,0x000575cc) */
/* WARNING: Removing unreachable block (ram,0x000575d2) */
/* WARNING: Removing unreachable block (ram,0x000575d6) */
/* WARNING: Removing unreachable block (ram,0x000575dc) */
/* WARNING: Removing unreachable block (ram,0x000575e6) */
/* WARNING: Removing unreachable block (ram,0x000575e8) */
/* WARNING: Removing unreachable block (ram,0x000575f0) */
/* WARNING: Removing unreachable block (ram,0x000575f2) */
/* WARNING: Removing unreachable block (ram,0x000575fa) */
/* WARNING: Removing unreachable block (ram,0x000575fc) */
/* WARNING: Removing unreachable block (ram,0x00057604) */
/* WARNING: Removing unreachable block (ram,0x0005760e) */
/* WARNING: Removing unreachable block (ram,0x00057612) */
/* WARNING: Removing unreachable block (ram,0x00057618) */
/* WARNING: Removing unreachable block (ram,0x0005762a) */
/* WARNING: Removing unreachable block (ram,0x00057634) */
/* WARNING: Removing unreachable block (ram,0x0005763e) */
/* WARNING: Removing unreachable block (ram,0x0005764a) */
/* WARNING: Removing unreachable block (ram,0x0005766a) */
/* WARNING: Removing unreachable block (ram,0x00057690) */
/* WARNING: Removing unreachable block (ram,0x000576c6) */
/* WARNING: Removing unreachable block (ram,0x0005759a) */

void FUN_000566f4(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4)

{
  code *in_r10;
  uint in_r11;
  uint in_r14;
  int unaff_r23;
  int unaff_ep;
  uint uVar1;
  
  *(undefined2 *)(unaff_ep + 0x8e) = param_3;
  if (((in_r11 & 0x4ce8) == 0) &&
     (uVar1 = (uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18), unaff_r23 != 0)) {
    *(undefined2 *)(uVar1 + 0x60) = param_4;
    __saturate(unaff_r23 - (in_r14 >> 0x17));
    __saturate(unaff_r23 * 2);
    *(short *)(uVar1 + 0x8e) = (short)in_r10;
    *(undefined2 *)(uVar1 + 0x8e) = param_3;
    __saturate(unaff_r23 + 4);
    (*in_r10)();
  }
  return;
}


// ==== FUN_00056806 @ 00056806 (size 2022) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x00056cfc) */
/* WARNING: Removing unreachable block (ram,0x00056ccc) */
/* WARNING: Removing unreachable block (ram,0x00056cd6) */
/* WARNING: Removing unreachable block (ram,0x00056e32) */
/* WARNING: Removing unreachable block (ram,0x00056e50) */
/* WARNING: Removing unreachable block (ram,0x00056ee8) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */
/* WARNING: Removing unreachable block (ram,0x00056f78) */
/* WARNING: Removing unreachable block (ram,0x00056ff4) */
/* WARNING: Removing unreachable block (ram,0x00057072) */
/* WARNING: Removing unreachable block (ram,0x0005721c) */
/* WARNING: Removing unreachable block (ram,0x00057232) */
/* WARNING: Removing unreachable block (ram,0x0005729a) */
/* WARNING: Removing unreachable block (ram,0x00057240) */
/* WARNING: Removing unreachable block (ram,0x00057270) */
/* WARNING: Removing unreachable block (ram,0x000572de) */
/* WARNING: Removing unreachable block (ram,0x00057286) */
/* WARNING: Removing unreachable block (ram,0x000572e0) */
/* WARNING: Removing unreachable block (ram,0x000572e2) */
/* WARNING: Removing unreachable block (ram,0x000572e6) */
/* WARNING: Removing unreachable block (ram,0x0005728c) */
/* WARNING: Removing unreachable block (ram,0x00057294) */
/* WARNING: Removing unreachable block (ram,0x0005729e) */
/* WARNING: Removing unreachable block (ram,0x000572e8) */
/* WARNING: Removing unreachable block (ram,0x000572ea) */
/* WARNING: Removing unreachable block (ram,0x000572fa) */
/* WARNING: Removing unreachable block (ram,0x0005730a) */
/* WARNING: Removing unreachable block (ram,0x0005731c) */
/* WARNING: Removing unreachable block (ram,0x0005733e) */
/* WARNING: Removing unreachable block (ram,0x0005734e) */
/* WARNING: Removing unreachable block (ram,0x0005735e) */
/* WARNING: Removing unreachable block (ram,0x00057366) */
/* WARNING: Removing unreachable block (ram,0x000573fe) */
/* WARNING: Removing unreachable block (ram,0x00057402) */
/* WARNING: Removing unreachable block (ram,0x0005742c) */
/* WARNING: Removing unreachable block (ram,0x00057456) */
/* WARNING: Removing unreachable block (ram,0x00057370) */
/* WARNING: Removing unreachable block (ram,0x0005745e) */
/* WARNING: Removing unreachable block (ram,0x00057462) */
/* WARNING: Removing unreachable block (ram,0x00057480) */
/* WARNING: Removing unreachable block (ram,0x000574b6) */
/* WARNING: Removing unreachable block (ram,0x000575e8) */
/* WARNING: Removing unreachable block (ram,0x000575f0) */
/* WARNING: Removing unreachable block (ram,0x000575ae) */
/* WARNING: Removing unreachable block (ram,0x0005764a) */
/* WARNING: Removing unreachable block (ram,0x0005766a) */
/* WARNING: Removing unreachable block (ram,0x00057612) */
/* WARNING: Removing unreachable block (ram,0x00057618) */
/* WARNING: Removing unreachable block (ram,0x0005762a) */
/* WARNING: Removing unreachable block (ram,0x000575f2) */
/* WARNING: Removing unreachable block (ram,0x000575fa) */
/* WARNING: Removing unreachable block (ram,0x00057634) */
/* WARNING: Removing unreachable block (ram,0x0005763e) */
/* WARNING: Removing unreachable block (ram,0x000575fc) */
/* WARNING: Removing unreachable block (ram,0x00057604) */
/* WARNING: Removing unreachable block (ram,0x0005760e) */
/* WARNING: Removing unreachable block (ram,0x00057690) */
/* WARNING: Removing unreachable block (ram,0x000576c6) */
/* WARNING: Removing unreachable block (ram,0x000575b2) */
/* WARNING: Removing unreachable block (ram,0x000575b8) */
/* WARNING: Removing unreachable block (ram,0x000575c2) */
/* WARNING: Removing unreachable block (ram,0x000575cc) */
/* WARNING: Removing unreachable block (ram,0x000575d2) */
/* WARNING: Removing unreachable block (ram,0x000575d6) */
/* WARNING: Removing unreachable block (ram,0x0005759a) */
/* WARNING: Removing unreachable block (ram,0x00057590) */
/* WARNING: Removing unreachable block (ram,0x000575dc) */
/* WARNING: Removing unreachable block (ram,0x000575e6) */
/* WARNING: Removing unreachable block (ram,0x000575a4) */
/* WARNING: Removing unreachable block (ram,0x00056b44) */
/* WARNING: Removing unreachable block (ram,0x00056d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00056806(uint param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  undefined1 uVar10;
  byte bVar11;
  bool bVar12;
  code *in_r1;
  uint uVar13;
  short unaff_gp;
  short unaff_tp;
  undefined4 uVar14;
  code *pcVar15;
  undefined2 uVar16;
  uint in_r12;
  int in_r14;
  code *pcVar17;
  int in_r15;
  int iVar18;
  int iVar19;
  uint in_r16;
  uint uVar20;
  int iVar21;
  code *in_r19;
  int iVar22;
  uint uVar23;
  int unaff_r22;
  int unaff_r23;
  uint unaff_r24;
  int unaff_r26;
  undefined2 unaff_r27;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint unaff_r29;
  int unaff_ep;
  uint uVar27;
  uint uVar28;
  short *psVar29;
  short *psVar30;
  uint uVar31;
  short unaff_lp;
  uint in_PSW;
  
  *(undefined1 *)(unaff_ep + 0x3b) = 0;
  uVar27 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar27 + 0x3c) = 0;
  bVar11 = (byte)(param_1 >> 0x18);
  bVar2 = (byte)((uint)in_r15 >> 0x1f);
  iVar18 = param_1 - in_r15;
  __saturate(iVar18);
  *(undefined1 *)(uVar27 + 0x3d) = 0;
  *(undefined1 *)(uVar27 + 0x50) = 0;
  uVar27 = (uint)*(ushort *)(uVar27 + 0x18);
  *(undefined1 *)(uVar27 + 0x51) = 0;
  bVar3 = (byte)((uint)iVar18 >> 0x1f);
  iVar19 = param_1 - iVar18;
  __saturate(iVar19);
  *(undefined1 *)(uVar27 + 0x52) = 0;
  *(undefined1 *)(uVar27 + 0x65) = 0;
  uVar28 = (uint)*(ushort *)(uVar27 + 0x18);
  *(undefined1 *)(uVar28 + 0x66) = 0;
  bVar4 = (byte)((uint)iVar19 >> 0x1f);
  uVar27 = (uint)((((bool)((byte)(in_PSW >> 4) & 1) ||
                   bVar11 >> 7 != bVar2 && bVar2 == (byte)(param_1 - in_r15 >> 0x1f)) ||
                  bVar11 >> 7 != bVar3 && bVar3 == (byte)(param_1 - iVar18 >> 0x1f)) ||
                 bVar11 >> 7 != bVar4 && bVar4 == (byte)(param_1 - iVar19 >> 0x1f)) << 4;
  iVar19 = param_1 - iVar19;
  __saturate(iVar19);
  *(undefined1 *)(uVar28 + 0x67) = 0;
  do {
    uVar20 = in_r16;
    *(undefined1 *)(uVar28 + 0x7a) = 0;
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    *(undefined1 *)(uVar28 + 0x7b) = 0;
    bVar4 = (byte)(param_1 >> 0x18);
    bVar2 = (byte)((uint)iVar19 >> 0x1f);
    iVar18 = param_1 - iVar19;
    __saturate(iVar18);
    *(undefined1 *)(uVar28 + 0x7c) = 0;
    uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
    bVar3 = (byte)((uint)iVar18 >> 0x1f);
    uVar23 = (uint)(((bool)((byte)(uVar27 >> 4) & 1) ||
                    bVar4 >> 7 != bVar2 && bVar2 == (byte)(param_1 - iVar19 >> 0x1f)) ||
                   bVar4 >> 7 != bVar3 && bVar3 == (byte)(param_1 - iVar18 >> 0x1f)) << 4;
    iVar19 = param_1 - iVar18;
    __saturate(iVar19);
    while( true ) {
      uVar27 = uVar23 & 0xfffffff0;
      in_r16 = uVar20 - 0xc;
      sVar7 = (short)&stack0x00000000;
      *(short *)(uVar28 + 0x2a) = sVar7;
      if (SCARRY4(uVar20,-0xc)) break;
      uVar27 = (uint)(0xfffffffb < in_r16) << 3 |
               (uint)((bool)((byte)(uVar23 >> 4) & 1) || SCARRY4(in_r16,4)) << 4;
      uVar20 = uVar20 - 8;
      __saturate(uVar20);
      (*in_r19)();
      param_3 = param_3 & 0xff;
      unaff_r29 = unaff_r29 & 0xff;
      uVar28 = 0;
      uVar23 = uVar27 & 0xfffffff8;
      if (((byte)(uVar27 >> 3) & 1) != 1) {
        bVar2 = (byte)((uint)in_r14 >> 0x1f);
        uVar27 = (uint)((bool)((byte)(uVar27 >> 4) & 1) ||
                       (byte)((uint)&stack0x00000000 >> 0x1f) != bVar2 &&
                       bVar2 == (byte)((uint)((int)&stack0x00000000 - in_r14) >> 0x1f)) << 4;
        pcVar17 = (code *)(&stack0x00000000 + -in_r14);
        __saturate(pcVar17);
        Ram00000008 = (short)param_4;
        *(char *)(param_3 + 0x6a8) = (char)uVar20;
        uVar13 = (uint)sVar7;
        (*pcVar17)();
        (*pcVar17)();
        uVar27 = uVar27 & 0xfffffff8;
        (*pcVar17)();
        iVar18 = (int)(short)(unaff_lp * unaff_gp * unaff_gp * unaff_gp) * (int)unaff_gp;
        uVar27 = uVar27 & 0xfffffff8;
        do {
          (*pcVar17)();
          uVar27 = uVar27 & 0xfffffff8;
          (*pcVar17)();
          uVar27 = uVar27 & 0xfffffff8;
          (*pcVar17)();
          uVar27 = uVar27 & 0xfffffff8;
          (*pcVar17)();
          uVar27 = uVar27 & 0xfffffff8;
          (*pcVar17)();
          iVar18 = (int)(short)((short)iVar18 * unaff_gp * unaff_gp * unaff_gp * unaff_gp) *
                   (int)unaff_gp;
          uVar27 = uVar27 & 0xfffffff0;
          (*pcVar17)();
          while( true ) {
            uVar23 = (uint)*(short *)(uVar28 + 10);
            iVar18 = (int)(short)iVar18 * (int)unaff_gp;
            uVar27 = uVar27 & 0xfffffff0;
            (*pcVar17)();
            if (((byte)(uVar27 >> 3) & 1) == 1) break;
            uVar9 = *(ushort *)(uVar28 + 0x18);
            *(undefined1 *)(uVar9 + 0x49) = 0;
            uVar28 = (uint)*(ushort *)(uVar9 + 0x18);
            *(undefined1 *)(uVar28 + 0x5e) = 0;
            uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
            *(undefined1 *)(uVar28 + 0x73) = 0;
            uVar31 = uVar27 & 0xfffffff8;
            uVar9 = *(ushort *)(*(ushort *)(uVar28 + 0x18) + 0x18);
            uVar28 = (uint)uVar9;
            while( true ) {
              uVar16 = *(undefined2 *)(uVar28 + 0x80);
              uVar27 = uVar31 & 0xfffffff8;
              if (((byte)(uVar31 >> 3) & 1) == 1) break;
              *(char *)(param_3 + 0x6a8) = (char)uVar20;
              (*pcVar17)();
              uVar27 = uVar27 & 0xfffffff8;
              (*pcVar17)();
              uVar27 = uVar27 & 0xfffffff8;
              (*pcVar17)();
              uVar27 = uVar27 & 0xfffffff8;
              (*pcVar17)();
              iVar18 = (int)(short)((short)iVar18 * unaff_gp * unaff_gp * unaff_gp * unaff_gp) *
                       (int)unaff_gp;
              uVar31 = uVar27 & 0xfffffff0;
              (*pcVar17)();
              if (((byte)(uVar31 >> 3) & 1) != 1) {
                *(short *)(uVar28 + 0x2a) = sVar7;
                cVar6 = *(char *)(param_3 - 0x7d85);
                bVar5 = (bool)((byte)(uVar31 >> 4) & 1) || SCARRY4(unaff_r26,-1);
                __saturate(unaff_r26 + -1);
                *(char *)(unaff_tp + 0x638) = (char)uVar20 + -0xc;
                *(ushort *)(cVar6 + 0x3b6) = uVar9;
                iVar19 = *(int *)(uVar28 + 0x7c);
                *(undefined2 *)(unaff_r29 + 0x16a0) = unaff_r27;
                uVar10 = (undefined1)unaff_r22;
                *(undefined1 *)(iVar19 + 0x13e5) = uVar10;
                _DAT_0000363b = uVar28;
                *(int *)(uVar28 + 0x88) = iVar19;
                uVar27 = (uint)*(ushort *)(uVar28 + 0x18);
                *(undefined1 *)(uVar27 + 0x35) = 0;
                uVar14 = *(undefined4 *)(uVar27 + 0x90);
                *(undefined2 *)(unaff_r29 + 0x16ac) = unaff_r27;
                *(undefined2 *)(uVar27 + 0x60) = uVar16;
                *(undefined2 *)(uVar27 + 0x60) = uVar16;
                *(undefined4 *)(uVar27 + 0xb8) = uVar14;
                psVar29 = (short *)(uint)*(ushort *)(uVar27 + 0x18);
                *(undefined1 *)((int)psVar29 + 0x4b) = 0;
                *(undefined2 *)(unaff_r29 + 0x16c2) = unaff_r27;
                *(undefined1 *)(psVar29 + 0x30) = 0;
                sVar7 = *psVar29;
                uVar28 = 0;
                iVar19 = (int)psVar29[0x23];
                uVar20 = (uint)(ushort)psVar29[0xd];
                psVar30 = psVar29;
                uVar27 = (int)sVar7;
                if ((int)(uVar13 ^ 0xd57c) < 0) goto LAB_00056c38;
                bVar5 = bVar5 || SCARRY4((int)psVar29,-5);
                psVar30 = (short *)((int)psVar29 + -5);
                __saturate(psVar30);
                pcVar15 = *(code **)((int)psVar29 + 0x4f);
                bVar1 = &DAT_00000004 < psVar29;
                goto LAB_00056bee;
              }
            }
          }
        } while( true );
      }
    }
  } while( true );
  while( true ) {
    psVar30 = (short *)(uint)*(ushort *)(uVar31 + 0x18);
    *(code **)(psVar30 + 0x3a) = pcVar15;
    bVar12 = !bVar1;
    bVar1 = true;
    if (bVar12) break;
LAB_00056bee:
    uVar31 = (uint)(ushort)psVar30[0xc];
    if (((int)DAT_ffffe700 & in_r12) != 0) goto code_r0x00056c52;
  }
  (&DAT_ffffe680)[unaff_r24] = uVar10;
  *(code **)(psVar30 + 0x3a) = pcVar15;
LAB_00056c38:
  uVar31 = (uint)(ushort)psVar30[0xc];
  pcVar15 = *(code **)(uVar31 + 0x58);
code_r0x00056c52:
  *(undefined1 *)(unaff_r24 - 0xf84) = uVar10;
  *(code **)(uVar31 + 0x54) = pcVar15;
  bVar12 = true;
  uVar23 = uVar23 ^ unaff_r24;
  uVar9 = *(ushort *)(uVar31 + 0x18);
  pcVar15 = *(code **)(uVar9 + 0x5c);
  iVar22 = 0xc;
  uVar24 = 0x2ded;
  *(undefined2 *)(unaff_r29 + 0x169c) = unaff_r27;
  uVar31 = (uint)*(ushort *)(uVar9 + 0x18);
  bVar1 = false;
  iVar21 = unaff_r22;
  if (bVar5) goto LAB_00056cf4;
LAB_00056c9a:
  *(short *)(uVar31 + 8) = (short)iVar19;
  iVar19 = (int)*(short *)(uVar31 + 0x88);
  do {
    if (!bVar1) {
      bVar2 = (byte)(uVar27 >> 0x1f);
      bVar5 = (byte)(param_1 >> 0x1f) != bVar2 && bVar2 == (byte)(param_1 - uVar27 >> 0x1f);
      __saturate(param_1 - uVar27);
      uVar23 = *(uint *)(uVar31 + 0x40);
      bVar1 = param_1 <= uVar27;
      uVar27 = param_1 - uVar27;
      if (bVar1) goto code_r0x00056c52;
      *(undefined1 *)(unaff_r24 - 0x56e4) = uVar10;
      uVar31 = (uint)*(ushort *)(uVar31 + 0x18);
      uVar24 = 0x2d2e;
LAB_00056cc4:
      uVar31 = (uint)*(ushort *)(uVar31 + 0x18);
      uVar28 = uVar24 | 0xa928;
      goto code_r0x00056d2a;
    }
    *(int *)(uVar24 + 0x2d2c) = iVar18;
    __saturate(iVar22 + -5);
    if (iVar22 + -5 < 0) goto LAB_00056cc4;
    *(undefined1 *)(unaff_r24 - 0x56c9) = uVar10;
    uVar26 = (uint)in_r1 | 0x2d3c;
    *(int *)(uVar26 + 0x2d2e) = iVar18;
    bVar5 = iVar22 == 0x15;
    bVar1 = true;
    iVar22 = iVar22 + -0x15;
    __saturate(iVar22);
    uVar24 = uVar26;
    if (bVar5) goto LAB_00056c9a;
    uVar24 = uVar26 - 10;
    *(undefined1 *)(unaff_r24 - 0x56fd) = uVar10;
    if (!SCARRY4(uVar26,-10)) {
      iVar25 = uVar26 - 0x14;
      *(undefined1 *)(unaff_r24 - 0xf84) = uVar10;
      if (uVar26 == 0x14) {
        uVar24 = 0;
        uVar27 = 10;
        break;
      }
      if ((int)uVar24 < 10) goto code_r0x00056d42;
      (*pcVar15)();
      *(int *)(uVar26 + 0x18ee) = iVar18;
      (*in_r1)();
      uVar9 = *(ushort *)(uVar31 + 0x18);
      goto LAB_00056da8;
    }
  } while( true );
LAB_00056cf0:
  bVar12 = 9 < uVar27;
  *(undefined1 *)(iVar19 + 0x1078) = uVar10;
LAB_00056cf4:
  *(undefined1 *)(iVar19 + 0x1078) = uVar10;
  pcVar17 = (code *)~uVar13;
  iVar22 = (int)*(char *)(uVar31 + 0xb);
  if (bVar12) {
    *(undefined2 *)(unaff_r29 + 0x169c) = unaff_r27;
code_r0x00056d2a:
    uVar31 = (uint)*(ushort *)(uVar31 + 0x18);
LAB_00056d2c:
    pcVar15 = *(code **)(uVar31 + 0x58);
    iVar22 = 6;
    goto code_r0x00056d36;
  }
  (&DAT_ffffa907)[unaff_r24] = uVar10;
  if (SCARRY4(uVar24,-10)) goto LAB_00056d2c;
  *(undefined1 *)(unaff_r24 - 0x56fd) = uVar10;
  if (SCARRY4(uVar24 - 10,-10)) {
    pcVar15 = *(code **)(uVar31 + 0x78);
code_r0x00056d36:
    iVar25 = 0x2d2c;
    *(undefined1 *)(iVar19 + 0x2def) = uVar10;
code_r0x00056d42:
    in_r1 = (code *)((int)(short)in_r1 * (int)(short)pcVar17);
    uVar23 = (uint)*(short *)(*(ushort *)(iVar22 + 0x18) + 0x2a);
    uVar9 = *(ushort *)(*(ushort *)(iVar22 + 0x18) + 0x18);
LAB_00056da8:
    psVar30 = (short *)(uint)uVar9;
    *(code **)(psVar30 + 0x2c) = pcVar15;
    cRam00005a54 = SUB41(iVar21,0);
    pcVar15[1000] = cRam00005a54;
    *(ushort *)(iVar25 + 0x362) = uVar9;
    pcVar15[1000] = cRam00005a54;
    *(short **)(iVar25 + 0x354) = psVar30;
    uVar27 = (uint)*(char *)(uVar13 - 0x78bb);
    *(undefined1 *)(psVar30 + 0x34) = 0;
    iVar18 = iVar21 + 1;
    __saturate(iVar18);
    uRam000006a8 = (undefined1)iVar18;
    sVar7 = *psVar30;
    if (iVar21 != -1) {
      sVar8 = psVar30[0x25];
      *(code **)(psVar30 + 0x2e) = pcVar15;
      if (!SCARRY4(iVar21,1)) {
        __saturate(*(int *)(psVar30 + 0x7c) - (uVar23 | param_1));
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar28 = (uint)*(byte *)(psVar30 + 1);
      uVar23 = (uint)*(ushort *)((ushort)psVar30[0xc] + 0x18);
      *(undefined4 *)(uVar23 + 0x60) = *(undefined4 *)((ushort)psVar30[0xc] + 0x60);
      *(short *)(uVar23 + 0x60) = sVar8;
      *(char *)(uVar23 + 0x17) = (char)pcVar17;
      iVar19 = unaff_r23 - (int)pcVar17;
      __saturate(iVar19);
      uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
      __saturate(sVar7 + iVar18);
      *(char *)(uVar23 + 0x17) = (char)iVar19;
      __saturate(unaff_r23 - iVar19);
      __saturate(sVar7 + iVar18 + iVar18);
      psVar30 = (short *)(uint)*(ushort *)(uVar23 + 0x18);
      pcVar15 = *(code **)(psVar30 + 0x34);
      psVar30[0x2d] = *(short *)(uVar23 + 0x60);
    }
    __saturate((undefined1 *)((int)psVar30 + -5));
    iVar18 = (int)*(short *)((int)psVar30 + 0x7b);
    uVar9 = *(ushort *)((int)psVar30 + 0x4bfb);
    *(code **)((int)psVar30 + 0x4f) = pcVar15;
    uVar14 = *(undefined4 *)((int)psVar30 + 0x4f);
    cVar6 = *(char *)(iVar18 + -0xf84);
    if (&DAT_00000004 < psVar30 || ((uint)in_r1 | 0x2d2c) == 0) {
      uVar27 = (uint)(char)psVar30[4];
      uVar9 = *(ushort *)((int)psVar30 + 0x13);
      *(undefined4 *)(uVar9 + 0x60) = uVar14;
      uVar23 = (uint)*(ushort *)(uVar9 + 0x18);
      *(undefined4 *)(uVar23 + 0x60) = uVar14;
      uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
      *(undefined4 *)(uVar23 + 0x60) = uVar14;
      cVar6 = *(char *)(iVar18 + -0x7d85);
      __saturate(*(ushort *)(uVar23 + 0x18) + 0xb);
      uVar9 = *(ushort *)(uVar23 + 0x18);
      *(undefined4 *)(*(char *)(*(byte *)(uVar23 | uVar27) + 0x7c) + 100) = uVar14;
    }
    *(undefined4 *)(uVar27 + 0x78) = uVar14;
    *(uint *)(cVar6 + 0x2d3c) = (uint)uVar9;
    *(uint *)(uVar27 + 4) = uVar27;
    *(undefined1 *)(iVar18 + 0x1078) = uVar10;
    __saturate(unaff_r22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00056f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00056f54 + *(short *)(&DAT_00056f54 + uVar28 * 2) * 2))();
    return;
  }
  uVar27 = uVar24 - 0x1e;
  *(undefined1 *)(unaff_r24 - 0x18f8) = uVar10;
  uVar20 = uVar20 - 1;
  __saturate(uVar20);
  uVar24 = uVar24 - 0x28;
  goto LAB_00056cf0;
}


// ==== FUN_00057054 @ 00057054 (size 38) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00057054(uint param_1,code *param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  short in_r1;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_r2;
  short sVar11;
  uint unaff_gp;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined2 uVar15;
  int in_r10;
  short in_r11;
  ushort uVar16;
  uint in_r12;
  uint in_r13;
  int in_r14;
  undefined1 uVar17;
  undefined2 in_r15;
  undefined2 uVar18;
  int iVar19;
  uint uVar20;
  uint in_r17;
  uint in_r18;
  int in_r19;
  undefined4 unaff_r20;
  uint unaff_r21;
  uint uVar21;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar22;
  uint unaff_r24;
  int unaff_r25;
  uint unaff_r27;
  int iVar23;
  int iVar24;
  code *unaff_r29;
  int unaff_ep;
  int iVar25;
  uint uVar26;
  uint uVar27;
  undefined2 *puVar28;
  uint unaff_lp;
  byte bStack_1900;
  
  __saturate(unaff_ep + -5);
  iVar25 = *(int *)(unaff_ep + 0xf3);
  uVar8 = (int)(short)(in_r1 * (short)in_r12) * (int)in_r11;
  *(undefined2 *)(iVar25 + 0xac) = in_r15;
  iVar19 = uVar8 - (int)*(short *)(iVar25 + 0xec);
  __saturate(iVar19);
  __saturate(in_r14 - in_r19);
  iVar25 = (int)*(short *)(iVar25 + 0xf8);
  *(undefined4 *)(iVar25 + 0x2c) = unaff_r20;
  *(char *)(iVar25 + 0x46) = (char)iVar19;
  uVar22 = unaff_r23 / unaff_r27;
  uVar7 = *(ushort *)(*(ushort *)(iVar25 + 0x18) + 0x18);
  uVar21 = unaff_r21 | unaff_r27 | in_r17 | in_r12;
  uVar26 = (uint)*(ushort *)(*(ushort *)(iVar25 + 0x18) + 0x18);
  *(uint *)(uVar26 + 4) = uVar21;
  __saturate(uVar7 - 1);
  uVar9 = (int)(short)uVar8 * (int)(short)in_r12;
  uVar26 = (uint)*(ushort *)(*(short *)(uVar26 + 0xf8) + 0x18);
  *(short *)(uVar26 + 0xc) = (short)(unaff_r22 / uVar9);
  uVar27 = (uint)*(ushort *)(uVar26 + 0x18);
  uVar20 = *(uint *)(uVar27 + 0x24);
  uVar10 = (int)(short)uVar9 * (int)in_r11;
  uVar26 = (int)*(short *)(uVar27 + 0xac) + uVar10;
  __saturate(uVar26);
  *(undefined2 *)(uVar27 + 0x60) = param_4;
  __saturate(uVar27 - 5);
  iVar19 = *(int *)(uVar27 + 0x4f);
  *(char *)(iVar19 + 0x13e5) = (char)*(undefined4 *)(uVar27 + 0x24);
  _DAT_0000362b = (undefined2)(uVar27 - 5);
  uVar14 = unaff_gp | 0x7cd7;
  uVar7 = *(ushort *)(uVar27 + 0x13);
  *(int *)(uVar27 + 0x5f) = iVar19;
  iVar19 = (int)*(char *)(uVar27 + 0x58) - (int)DAT_ffffe700;
  __saturate(iVar19);
  uVar15 = *(undefined2 *)(uVar27 + 0x1b);
  __saturate(iVar19 + -0x2d28);
  __saturate(iVar19 + -0x2db8);
  __saturate(iVar19 + -0x2daa);
  uVar12 = unaff_gp - 0x2d;
  uVar9 = (int)*(char *)(uVar27 + 0x58) & (uint)unaff_r29;
  uVar13 = *(undefined4 *)(iVar19 + -0x2d5a);
  uVar27 = uVar22 & uVar10 & (uVar21 | uVar8);
  uVar8 = (uint)*(ushort *)(iVar19 + -0x2d92);
  *(undefined4 *)(uVar8 + 0xa4) = uVar13;
  *(undefined4 *)(uVar8 + 0x40) = uVar13;
  iVar19 = param_1 - (uVar26 / uVar20 >> 1);
  __saturate(iVar19);
  uVar20 = param_1 - iVar19;
  __saturate(uVar20);
  uVar21 = (uint)(char)bStack_1900;
  iVar19 = *(int *)(uVar8 + 0x4c);
  bVar3 = *(byte *)(uVar14 - 0x78b8);
  uVar16 = *(ushort *)(uVar8 + 0xc4) ^ (ushort)uVar14;
  __saturate(uVar9);
  *(undefined2 *)(uVar8 + 0x48) = 0;
  uVar26 = unaff_lp / 0;
  *(char *)(iVar19 + 0xff) = (char)uVar9;
  uVar8 = uVar20;
  if ((bStack_1900 & bVar3) == 0) {
    uVar8 = uVar20 >> 8;
    bVar2 = (uVar20 & 0x80) != 0;
    *(undefined2 *)(uVar21 + 6) = uVar15;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    uVar20 = uVar12;
    cVar4 = DAT_00004c83;
    if (bVar2 || uVar8 == 0) {
      uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
      if (bVar2) goto code_r0x0005729e;
      uVar14 = (uint)(short)*(ushort *)(uVar21 + 0x80);
      uVar5 = *(ushort *)(&DAT_00004c00 + uVar26);
      uVar16 = uVar16 ^ *(ushort *)(uVar21 + 0x80);
      __saturate(uVar9);
      *(undefined2 *)(uVar21 + 0x48) = 0;
      uVar26 = uVar5 / 0;
      uVar21 = uVar21 | (int)*(char *)(uVar21 + 3);
      in_r10 = (int)*(short *)(uVar21 + 0xc4);
      uVar8 = unaff_r24;
      DAT_000000ff = (char)uVar9;
      goto LAB_00057270;
    }
LAB_00057286:
    sVar11 = (short)uVar20;
    uVar18 = (undefined2)uVar8;
    uVar8 = (uint)cVar4;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (!bVar2) {
      *(int *)(uVar21 + 0x40) = iVar19;
      goto code_r0x000572e2;
    }
    uVar15 = *(undefined2 *)(uVar21 + 6);
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (bVar2) {
code_r0x0005729e:
      __saturate(uVar7 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000572cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000572ce +
                *(short *)(&DAT_000572ce + (uint)*(ushort *)(uVar21 + 0x18) * 2) * 2))();
      return;
    }
    iVar19 = *(int *)(uVar21 + 0x44);
    bVar2 = false;
code_r0x000572ea:
    *(undefined2 *)(uVar21 + 2) = uVar15;
    *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
    *(uint *)(unaff_r29 + 0x16f8) = unaff_r27;
    puVar28 = (undefined2 *)(uint)*(ushort *)(uVar21 + 0x18);
    if (!bVar2) goto LAB_0005734e;
    uVar8 = in_r2 | 0x2d20;
    puVar28[2] = puVar28[1];
    puVar28 = (undefined2 *)(uint)(ushort)puVar28[0xc];
    if (!bVar2) goto LAB_0005735e;
    puVar28[4] = puVar28[1];
    uVar26 = uVar26 & 0xff;
    uVar21 = (uint)(ushort)puVar28[0xc];
    if (((uint)&stack0x00000000 | 0x2d20) < 8) {
      unaff_r22 = unaff_r22 & 0xff;
      *(ushort *)(uVar21 + 0xe8) = uVar16;
      iVar19 = *(int *)(uVar21 + 0x44);
      *(undefined2 *)(uVar21 + 0x60) = *(undefined2 *)(uVar21 + 8);
      in_r10 = (*unaff_r29)();
      uVar9 = in_r17;
      goto LAB_0005733e;
    }
LAB_00057370:
    *(undefined2 *)(uVar21 + 0x60) = uVar18;
    uVar15 = *(undefined2 *)(uVar21 + 0xc6);
    *(undefined2 *)(uVar21 + 0x7e) = uVar15;
    *(int *)(uVar21 + 0x40) = iVar19;
    uVar9 = unaff_r22;
    (*param_2)();
    uVar22 = (uint)*(ushort *)(uVar21 + 0x18);
    *(int *)(uVar22 + 0x40) = iVar19;
    *(undefined2 *)(uVar22 + 0x60) = uVar15;
    in_r10 = (*unaff_r29)();
    uVar8 = (uint)*(ushort *)(uVar22 + 0x18);
    bVar2 = true;
    uVar7 = *(ushort *)(uVar8 + 0x1a);
    uVar22 = uVar27;
    uVar12 = uVar26;
LAB_0005745e:
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    uVar26 = uVar12;
    if (!bVar2) goto LAB_000574b6;
    in_r10 = (*unaff_r29)();
    __saturate(uVar22 + 7);
  }
  else {
LAB_00057270:
    uVar18 = (undefined2)uVar8;
    uVar15 = *(undefined2 *)(uVar21 + 4);
    uVar21 = 0xfffffffe;
    __saturate(0xfffffffe);
    bVar2 = 3 < uVar12;
    uVar20 = unaff_gp - 0x31;
    sVar11 = (short)uVar20;
    cVar4 = *(char *)(uVar14 - 0x84);
    if ((int)uVar12 < 4) goto LAB_00057286;
    uVar8 = 0x2d21;
code_r0x000572e2:
    if ((int)(uVar21 & uVar8) < 0) goto code_r0x000572ea;
LAB_0005733e:
    bVar2 = true;
    puVar28 = (undefined2 *)(uint)*(ushort *)(uVar21 + 0x18);
    uVar22 = uVar27;
LAB_0005734e:
    uVar18 = *puVar28;
    uVar14 = (uint)(short)puVar28[0x47];
    uVar8 = in_r18 | 0xd07d;
LAB_0005735e:
    uVar7 = puVar28[0xd];
    if (!bVar2 && uVar8 != 0) {
      uVar21 = (uint)*(char *)((int)puVar28 + 0x7d);
      goto LAB_00057370;
    }
    uVar8 = (uint)(ushort)puVar28[0xc];
    if (!bVar2) {
LAB_00057456:
      uVar14 = (uint)*(short *)(uVar8 + 0x88);
      uVar12 = uVar26;
      goto LAB_0005745e;
    }
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0xa4) = iVar19;
    sVar6 = *(short *)(uVar8 + 0xc4);
    uVar15 = *(undefined2 *)(uVar8 + 0x88);
    *(int *)(uVar8 + 0x40) = iVar19;
    uVar7 = *(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0x40) = iVar19;
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0x40) = iVar19;
    uVar9 = (int)sVar6 + 0x10000;
    *(undefined2 *)(uVar8 + 4) = uVar15;
    uVar12 = (uint)*(ushort *)(uVar8 + 0x18);
    if (bVar2) {
      uVar9 = (uint)*(ushort *)(uVar12 + 0x18);
      *(int *)(uVar9 + 0xa4) = iVar19;
      uVar8 = (uint)*(ushort *)(uVar9 + 0x18);
      uVar9 = (int)*(short *)(uVar9 + 0xc4) + 0x10000;
      goto LAB_00057456;
    }
  }
  uVar7 = *(ushort *)(uVar12 + 0x1a);
  *(int *)(uVar12 - 0xcc6) = in_r19;
  uVar8 = uVar12 - 5;
  __saturate(uVar8);
  uVar27 = (uVar27 | (uint)&stack0x00000000) ^ in_r13;
  *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
LAB_000574b6:
  __saturate(uVar7 - 1);
  *(uint *)(uVar8 + 0x20) = uVar9;
  __saturate(param_1 - ((uVar26 & 0xf07c) >> 6));
  *(uint *)(uVar8 + 0x20) = uVar9;
  DAT_00000064 = (undefined1)uVar9;
  *(short *)(uVar8 + 0x1a) = (short)in_r13;
  *(short *)(uVar8 + 0x8e) = (short)in_r10;
  *(uint *)(uVar8 + 0x3c) = uVar9;
  iVar19 = (int)*(short *)(uVar8 + 0xca);
  *(int *)(uVar8 + 0x7c) = iVar19;
  __saturate(uVar8 - 5);
  uVar12 = *(ushort *)(uVar8 + 0x18) - 1;
  __saturate(uVar12);
  uVar20 = (uint)*(ushort *)(uVar8 + 0x13);
  *(short *)(uVar20 + 0x60) = *(short *)(uVar8 + 0xca);
  uVar9 = uVar27 | 0x1ff;
  iVar25 = (int)*(short *)(uVar20 + 0x22);
  uVar22 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar8 = unaff_r22;
LAB_000575e8:
  uVar21 = (uint)*(char *)(uVar20 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar8;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar25,-0xb);
    iVar24 = iVar25 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar15 = (undefined2)iVar19;
    uVar17 = (undefined1)uVar21;
    if (SUB41(uVar22 >> 3,0) || (bool)((byte)uVar22 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar20 + 6) = uVar17;
      uVar8 = (uint)*(char *)(uVar8 + 0x7083);
      iVar19 = (int)&stack0x00000000 - uVar9;
      bVar3 = (byte)(uVar9 >> 0x1f);
      uVar9 = (int)&stack0x00000000 - uVar9;
      __saturate(uVar9);
      iVar25 = (int)*(char *)(uVar14 - 0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar19 >> 0x1f))
      {
        iVar19 = (int)*(short *)(uVar20 + 2);
        *(short *)(iVar25 + 0x2e74) = (short)uVar26;
        *(short *)(iVar25 + 0x18d2) = (short)uVar26;
        *(uint *)(iVar25 + 0x1902) = uVar26;
        *(undefined2 *)(uVar20 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar20 + 0x5c);
        bVar2 = SCARRY4(iVar25 + -0x14,-10);
        iVar23 = iVar25 + -0x1e;
        uVar21 = unaff_r22;
        if (iVar25 + -0x1e < 0) {
          do {
            uVar15 = (undefined2)iVar19;
            uVar17 = (undefined1)uVar8;
            *(undefined1 *)(in_r10 + 0x628c) = uVar17;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar20 + 0x4d) = (char)unaff_r25;
            iVar25 = iVar23 + -0x1f;
            bVar1 = uVar12 == 0x80000000;
            uVar12 = uVar12 / uVar27;
            uVar22 = (uint)(9 < iVar23 - 0x15U) << 3 | (uint)(uVar12 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar17;
            bVar2 = true;
            if (bVar1 && uVar27 == 0xffffffff || uVar27 == 0) goto LAB_000575e8;
            iVar24 = iVar23 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar17;
            bVar2 = true;
            if (SCARRY4(iVar25,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar8;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar24,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar17;
              bVar2 = true;
              if (!SCARRY4(iVar24,-0xb)) goto code_r0x0005763e;
            }
            uVar21 = (uint)*(char *)(uVar20 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar8;
            if (bVar2) goto LAB_000575c2;
            iVar23 = iVar24 + -0x16;
            uVar21 = (uint)*(char *)(uVar20 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar8;
            bVar2 = true;
            if (SCARRY4(iVar24 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar23,-0xb);
            iVar23 = iVar24 + -0x21;
            uVar21 = (int)*(char *)(uVar20 + 0x10);
          } while( true );
        }
        *(short *)(uVar20 + 0x34) = sVar11 + -0x1daa;
        __saturate(uVar12 - 1);
        uVar20 = uVar20 | param_1;
        uVar8 = 0xfffffff1;
        uVar15 = (undefined2)*(undefined4 *)(uVar20 + 0x60);
        unaff_r22 = unaff_r22 | uVar10;
        *(short *)(uVar20 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar9 * 0x80);
      }
      __saturate(unaff_r22 + uVar8);
      *(undefined2 *)(uVar20 + 0xd0) = uVar15;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar19 = (int)*(short *)(uVar20 + 0xcc);
    *(int *)(uVar20 + 0x7c) = iVar19;
    uVar21 = 0xffffffff;
    uVar12 = (uint)*(ushort *)(uVar20 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar23 = (int)(char)(&DAT_ffffe256)[uVar14];
    *(short *)(uVar20 + 0x38) = (short)uVar27;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar8;
    if (bVar2) {
LAB_00057590:
      uVar21 = uVar21 / uVar8;
      uVar12 = (uint)*(ushort *)(uVar20 + 0x1a);
      *(short *)(uVar20 + 0x60) = (short)iVar19;
    }
    else {
      bVar1 = SCARRY4(iVar23,-0xb);
      iVar23 = iVar23 + -0xb;
      uVar21 = (uint)*(char *)(uVar20 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar8;
      if (bVar1) {
        uVar20 = (uint)*(ushort *)(uVar20 + 0x18);
        goto LAB_00057590;
      }
      uVar21 = (uint)*(char *)(uVar20 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar8;
      if (!SCARRY4(iVar23,-0xb)) goto code_r0x000575e6;
    }
    uVar9 = uVar27 | 0x1ff;
    uVar21 = uVar21 & uVar8;
    uVar22 = uVar21 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar17 = *(undefined1 *)(uVar20 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar23 - 0xbU,-0xb);
  uVar22 = (uint)(10 < iVar23 - 0xbU) << 3 | (uint)(iVar23 == 0x16);
  iVar25 = iVar23 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_0005707a @ 0005707a (size 181) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005707a(uint param_1,code *param_2,undefined4 param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  uint in_r1;
  uint uVar8;
  uint uVar9;
  uint in_r2;
  short sVar10;
  int unaff_gp;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined2 uVar16;
  int in_r10;
  short in_r11;
  ushort uVar17;
  uint in_r12;
  uint in_r13;
  undefined1 in_r15;
  undefined1 uVar18;
  undefined2 uVar19;
  int in_r16;
  uint uVar20;
  uint in_r17;
  uint in_r18;
  undefined4 in_r19;
  uint uVar21;
  uint unaff_r21;
  uint uVar22;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar23;
  uint uVar24;
  uint unaff_r24;
  int unaff_r25;
  uint unaff_r27;
  int iVar25;
  int iVar26;
  int iVar27;
  code *unaff_r29;
  int unaff_ep;
  uint uVar28;
  uint uVar29;
  undefined2 *puVar30;
  uint unaff_lp;
  byte bStack_1900;
  
  *(undefined1 *)(unaff_ep + 0x46) = in_r15;
  uVar23 = unaff_r23 / unaff_r27;
  uVar7 = *(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
  uVar22 = unaff_r21 | unaff_r27 | in_r17 | in_r12;
  uVar28 = (uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
  *(uint *)(uVar28 + 4) = uVar22;
  __saturate(uVar7 - 1);
  uVar8 = (int)(short)in_r1 * (int)(short)in_r12;
  uVar28 = (uint)*(ushort *)(*(short *)(uVar28 + 0xf8) + 0x18);
  uVar11 = in_r16 - unaff_gp;
  *(short *)(uVar28 + 0xc) = (short)(unaff_r22 / uVar8);
  uVar28 = (uint)*(ushort *)(uVar28 + 0x18);
  uVar20 = *(uint *)(uVar28 + 0x24);
  uVar9 = (int)(short)uVar8 * (int)in_r11;
  uVar8 = (int)*(short *)(uVar28 + 0xac) + uVar9;
  __saturate(uVar8);
  *(undefined2 *)(uVar28 + 0x60) = param_4;
  __saturate(uVar28 - 5);
  iVar13 = *(int *)(uVar28 + 0x4f);
  *(char *)(iVar13 + 0x13e5) = (char)*(undefined4 *)(uVar28 + 0x24);
  _DAT_0000362b = (undefined2)(uVar28 - 5);
  uVar15 = uVar11 | 0x7cd7;
  uVar7 = *(ushort *)(uVar28 + 0x13);
  *(int *)(uVar28 + 0x5f) = iVar13;
  iVar13 = (int)*(char *)(uVar28 + 0x58) - (int)DAT_ffffe700;
  __saturate(iVar13);
  uVar16 = *(undefined2 *)(uVar28 + 0x1b);
  __saturate(iVar13 + -0x2d28);
  __saturate(iVar13 + -0x2db8);
  __saturate(iVar13 + -0x2daa);
  uVar12 = uVar11 - 0x2d;
  uVar28 = (int)*(char *)(uVar28 + 0x58) & (uint)unaff_r29;
  uVar14 = *(undefined4 *)(iVar13 + -0x2d5a);
  uVar24 = uVar23 & uVar9 & (uVar22 | in_r1);
  uVar29 = (uint)*(ushort *)(iVar13 + -0x2d92);
  *(undefined4 *)(uVar29 + 0xa4) = uVar14;
  *(undefined4 *)(uVar29 + 0x40) = uVar14;
  iVar13 = param_1 - (uVar8 / uVar20 >> 1);
  __saturate(iVar13);
  uVar22 = param_1 - iVar13;
  __saturate(uVar22);
  uVar21 = (uint)(char)bStack_1900;
  iVar13 = *(int *)(uVar29 + 0x4c);
  bVar3 = *(byte *)(uVar15 - 0x78b8);
  uVar17 = *(ushort *)(uVar29 + 0xc4) ^ (ushort)uVar15;
  __saturate(uVar28);
  *(undefined2 *)(uVar29 + 0x48) = 0;
  uVar20 = unaff_lp / 0;
  *(char *)(iVar13 + 0xff) = (char)uVar28;
  uVar8 = uVar22;
  if ((bStack_1900 & bVar3) == 0) {
    uVar8 = uVar22 >> 8;
    bVar2 = (uVar22 & 0x80) != 0;
    *(undefined2 *)(uVar21 + 6) = uVar16;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    uVar22 = uVar12;
    cVar4 = DAT_00004c83;
    if (bVar2 || uVar8 == 0) {
      uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
      if (bVar2) goto code_r0x0005729e;
      uVar15 = (uint)(short)*(ushort *)(uVar21 + 0x80);
      uVar5 = *(ushort *)(&DAT_00004c00 + uVar20);
      uVar17 = uVar17 ^ *(ushort *)(uVar21 + 0x80);
      __saturate(uVar28);
      *(undefined2 *)(uVar21 + 0x48) = 0;
      uVar20 = uVar5 / 0;
      uVar21 = uVar21 | (int)*(char *)(uVar21 + 3);
      in_r10 = (int)*(short *)(uVar21 + 0xc4);
      uVar8 = unaff_r24;
      DAT_000000ff = (char)uVar28;
      goto LAB_00057270;
    }
LAB_00057286:
    sVar10 = (short)uVar22;
    uVar19 = (undefined2)uVar8;
    uVar8 = (uint)cVar4;
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (!bVar2) {
      *(int *)(uVar21 + 0x40) = iVar13;
      goto code_r0x000572e2;
    }
    uVar16 = *(undefined2 *)(uVar21 + 6);
    uVar21 = (uint)*(ushort *)(uVar21 + 0x18);
    if (bVar2) {
code_r0x0005729e:
      __saturate(uVar7 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000572cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000572ce +
                *(short *)(&DAT_000572ce + (uint)*(ushort *)(uVar21 + 0x18) * 2) * 2))();
      return;
    }
    iVar13 = *(int *)(uVar21 + 0x44);
    bVar2 = false;
code_r0x000572ea:
    *(undefined2 *)(uVar21 + 2) = uVar16;
    *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
    *(uint *)(unaff_r29 + 0x16f8) = unaff_r27;
    puVar30 = (undefined2 *)(uint)*(ushort *)(uVar21 + 0x18);
    if (!bVar2) goto LAB_0005734e;
    uVar8 = in_r2 | 0x2d20;
    puVar30[2] = puVar30[1];
    puVar30 = (undefined2 *)(uint)(ushort)puVar30[0xc];
    if (!bVar2) goto LAB_0005735e;
    puVar30[4] = puVar30[1];
    uVar20 = uVar20 & 0xff;
    uVar21 = (uint)(ushort)puVar30[0xc];
    if (((uint)&stack0x00000000 | 0x2d20) < 8) {
      unaff_r22 = unaff_r22 & 0xff;
      *(ushort *)(uVar21 + 0xe8) = uVar17;
      iVar13 = *(int *)(uVar21 + 0x44);
      *(undefined2 *)(uVar21 + 0x60) = *(undefined2 *)(uVar21 + 8);
      in_r10 = (*unaff_r29)();
      uVar28 = in_r17;
      goto LAB_0005733e;
    }
LAB_00057370:
    *(undefined2 *)(uVar21 + 0x60) = uVar19;
    uVar16 = *(undefined2 *)(uVar21 + 0xc6);
    *(undefined2 *)(uVar21 + 0x7e) = uVar16;
    *(int *)(uVar21 + 0x40) = iVar13;
    uVar28 = unaff_r22;
    (*param_2)();
    uVar23 = (uint)*(ushort *)(uVar21 + 0x18);
    *(int *)(uVar23 + 0x40) = iVar13;
    *(undefined2 *)(uVar23 + 0x60) = uVar16;
    in_r10 = (*unaff_r29)();
    uVar8 = (uint)*(ushort *)(uVar23 + 0x18);
    bVar2 = true;
    uVar7 = *(ushort *)(uVar8 + 0x1a);
    uVar23 = uVar24;
    uVar11 = uVar20;
LAB_0005745e:
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    uVar20 = uVar11;
    if (!bVar2) goto LAB_000574b6;
    in_r10 = (*unaff_r29)();
    __saturate(uVar23 + 7);
  }
  else {
LAB_00057270:
    uVar19 = (undefined2)uVar8;
    uVar16 = *(undefined2 *)(uVar21 + 4);
    uVar21 = 0xfffffffe;
    __saturate(0xfffffffe);
    bVar2 = 3 < uVar12;
    uVar22 = uVar11 - 0x31;
    sVar10 = (short)uVar22;
    cVar4 = *(char *)(uVar15 - 0x84);
    if ((int)uVar12 < 4) goto LAB_00057286;
    uVar8 = 0x2d21;
code_r0x000572e2:
    if ((int)(uVar21 & uVar8) < 0) goto code_r0x000572ea;
LAB_0005733e:
    bVar2 = true;
    puVar30 = (undefined2 *)(uint)*(ushort *)(uVar21 + 0x18);
    uVar23 = uVar24;
LAB_0005734e:
    uVar19 = *puVar30;
    uVar15 = (uint)(short)puVar30[0x47];
    uVar8 = in_r18 | 0xd07d;
LAB_0005735e:
    uVar7 = puVar30[0xd];
    if (!bVar2 && uVar8 != 0) {
      uVar21 = (uint)*(char *)((int)puVar30 + 0x7d);
      goto LAB_00057370;
    }
    uVar8 = (uint)(ushort)puVar30[0xc];
    if (!bVar2) {
LAB_00057456:
      uVar15 = (uint)*(short *)(uVar8 + 0x88);
      uVar11 = uVar20;
      goto LAB_0005745e;
    }
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0xa4) = iVar13;
    sVar6 = *(short *)(uVar8 + 0xc4);
    uVar16 = *(undefined2 *)(uVar8 + 0x88);
    *(int *)(uVar8 + 0x40) = iVar13;
    uVar7 = *(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0x40) = iVar13;
    uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
    *(int *)(uVar8 + 0x40) = iVar13;
    uVar28 = (int)sVar6 + 0x10000;
    *(undefined2 *)(uVar8 + 4) = uVar16;
    uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
    if (bVar2) {
      uVar28 = (uint)*(ushort *)(uVar11 + 0x18);
      *(int *)(uVar28 + 0xa4) = iVar13;
      uVar8 = (uint)*(ushort *)(uVar28 + 0x18);
      uVar28 = (int)*(short *)(uVar28 + 0xc4) + 0x10000;
      goto LAB_00057456;
    }
  }
  uVar7 = *(ushort *)(uVar11 + 0x1a);
  *(undefined4 *)(uVar11 - 0xcc6) = in_r19;
  uVar8 = uVar11 - 5;
  __saturate(uVar8);
  uVar24 = (uVar24 | (uint)&stack0x00000000) ^ in_r13;
  *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
LAB_000574b6:
  __saturate(uVar7 - 1);
  *(uint *)(uVar8 + 0x20) = uVar28;
  __saturate(param_1 - ((uVar20 & 0xf07c) >> 6));
  *(uint *)(uVar8 + 0x20) = uVar28;
  DAT_00000064 = (undefined1)uVar28;
  *(short *)(uVar8 + 0x1a) = (short)in_r13;
  *(short *)(uVar8 + 0x8e) = (short)in_r10;
  *(uint *)(uVar8 + 0x3c) = uVar28;
  iVar13 = (int)*(short *)(uVar8 + 0xca);
  *(int *)(uVar8 + 0x7c) = iVar13;
  __saturate(uVar8 - 5);
  uVar11 = *(ushort *)(uVar8 + 0x18) - 1;
  __saturate(uVar11);
  uVar12 = (uint)*(ushort *)(uVar8 + 0x13);
  *(short *)(uVar12 + 0x60) = *(short *)(uVar8 + 0xca);
  uVar28 = uVar24 | 0x1ff;
  iVar25 = (int)*(short *)(uVar12 + 0x22);
  uVar23 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar8 = unaff_r22;
LAB_000575e8:
  uVar22 = (uint)*(char *)(uVar12 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar8;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar25,-0xb);
    iVar27 = iVar25 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar16 = (undefined2)iVar13;
    uVar18 = (undefined1)uVar22;
    if (SUB41(uVar23 >> 3,0) || (bool)((byte)uVar23 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar12 + 6) = uVar18;
      uVar8 = (uint)*(char *)(uVar8 + 0x7083);
      iVar13 = (int)&stack0x00000000 - uVar28;
      bVar3 = (byte)(uVar28 >> 0x1f);
      uVar28 = (int)&stack0x00000000 - uVar28;
      __saturate(uVar28);
      iVar25 = (int)*(char *)(uVar15 - 0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar13 >> 0x1f))
      {
        iVar13 = (int)*(short *)(uVar12 + 2);
        *(short *)(iVar25 + 0x2e74) = (short)uVar20;
        *(short *)(iVar25 + 0x18d2) = (short)uVar20;
        *(uint *)(iVar25 + 0x1902) = uVar20;
        *(undefined2 *)(uVar12 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar12 + 0x5c);
        bVar2 = SCARRY4(iVar25 + -0x14,-10);
        iVar26 = iVar25 + -0x1e;
        uVar22 = unaff_r22;
        if (iVar25 + -0x1e < 0) {
          do {
            uVar16 = (undefined2)iVar13;
            uVar18 = (undefined1)uVar8;
            *(undefined1 *)(in_r10 + 0x628c) = uVar18;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar12 + 0x4d) = (char)unaff_r25;
            iVar25 = iVar26 + -0x1f;
            bVar1 = uVar11 == 0x80000000;
            uVar11 = uVar11 / uVar24;
            uVar23 = (uint)(9 < iVar26 - 0x15U) << 3 | (uint)(uVar11 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar18;
            bVar2 = true;
            if (bVar1 && uVar24 == 0xffffffff || uVar24 == 0) goto LAB_000575e8;
            iVar27 = iVar26 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar18;
            bVar2 = true;
            if (SCARRY4(iVar25,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar8;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar27,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar18;
              bVar2 = true;
              if (!SCARRY4(iVar27,-0xb)) goto code_r0x0005763e;
            }
            uVar22 = (uint)*(char *)(uVar12 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar8;
            if (bVar2) goto LAB_000575c2;
            iVar26 = iVar27 + -0x16;
            uVar22 = (uint)*(char *)(uVar12 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar8;
            bVar2 = true;
            if (SCARRY4(iVar27 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar26,-0xb);
            iVar26 = iVar27 + -0x21;
            uVar22 = (int)*(char *)(uVar12 + 0x10);
          } while( true );
        }
        *(short *)(uVar12 + 0x34) = sVar10 + -0x1daa;
        __saturate(uVar11 - 1);
        uVar12 = uVar12 | param_1;
        uVar8 = 0xfffffff1;
        uVar16 = (undefined2)*(undefined4 *)(uVar12 + 0x60);
        unaff_r22 = unaff_r22 | uVar9;
        *(short *)(uVar12 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar28 * 0x80);
      }
      __saturate(unaff_r22 + uVar8);
      *(undefined2 *)(uVar12 + 0xd0) = uVar16;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar13 = (int)*(short *)(uVar12 + 0xcc);
    *(int *)(uVar12 + 0x7c) = iVar13;
    uVar22 = 0xffffffff;
    uVar11 = (uint)*(ushort *)(uVar12 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar26 = (int)(char)(&DAT_ffffe256)[uVar15];
    *(short *)(uVar12 + 0x38) = (short)uVar24;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar8;
    if (bVar2) {
LAB_00057590:
      uVar22 = uVar22 / uVar8;
      uVar11 = (uint)*(ushort *)(uVar12 + 0x1a);
      *(short *)(uVar12 + 0x60) = (short)iVar13;
    }
    else {
      bVar1 = SCARRY4(iVar26,-0xb);
      iVar26 = iVar26 + -0xb;
      uVar22 = (uint)*(char *)(uVar12 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar8;
      if (bVar1) {
        uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
        goto LAB_00057590;
      }
      uVar22 = (uint)*(char *)(uVar12 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar8;
      if (!SCARRY4(iVar26,-0xb)) goto code_r0x000575e6;
    }
    uVar28 = uVar24 | 0x1ff;
    uVar22 = uVar22 & uVar8;
    uVar23 = uVar22 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar18 = *(undefined1 *)(uVar12 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar26 - 0xbU,-0xb);
  uVar23 = (uint)(10 < iVar26 - 0xbU) << 3 | (uint)(iVar26 == 0x16);
  iVar25 = iVar26 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_00057130 @ 00057130 (size 170) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057148) */
/* WARNING: Removing unreachable block (ram,0x00057158) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_00057130(uint param_1,code *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint in_r1;
  uint in_r2;
  short sVar7;
  int unaff_gp;
  uint uVar8;
  undefined4 unaff_tp;
  undefined4 uVar9;
  undefined2 uVar10;
  int in_r10;
  ushort uVar11;
  uint in_r12;
  uint in_r13;
  uint in_r14;
  undefined1 uVar12;
  undefined2 uVar13;
  int in_r15;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint in_r17;
  uint in_r18;
  undefined4 in_r19;
  uint uVar17;
  uint unaff_r21;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar18;
  uint unaff_r24;
  int unaff_r25;
  int unaff_r26;
  undefined4 unaff_r27;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  code *unaff_r29;
  int unaff_ep;
  uint uVar23;
  undefined2 *puVar24;
  uint unaff_lp;
  uint uVar25;
  byte bStack_1900;
  
  *(undefined4 *)(unaff_ep + 100) = unaff_tp;
  iVar19 = (int)*(char *)(unaff_ep + 0x5d) - (int)DAT_ffffe700;
  __saturate(iVar19);
  uVar10 = *(undefined2 *)(unaff_ep + 0x20);
  __saturate(iVar19 + -0x2d28);
  __saturate(iVar19 + -0x2db8);
  __saturate(iVar19 + -0x2daa);
  uVar8 = unaff_gp - 0x2d;
  uVar16 = (int)*(char *)(unaff_ep + 0x5d) & (uint)unaff_r29;
  uVar9 = *(undefined4 *)(iVar19 + -0x2d5a);
  uVar18 = unaff_r23 & in_r1 & unaff_r21;
  uVar23 = (uint)*(ushort *)(iVar19 + -0x2d92);
  *(undefined4 *)(uVar23 + 0xa4) = uVar9;
  *(undefined4 *)(uVar23 + 0x40) = uVar9;
  __saturate(param_1 - in_r15);
  uVar14 = param_1 - (param_1 - in_r15);
  __saturate(uVar14);
  uVar17 = (uint)(char)bStack_1900;
  iVar19 = *(int *)(uVar23 + 0x4c);
  bVar3 = *(byte *)(param_3 + -0x78b8);
  uVar11 = *(ushort *)(uVar23 + 0xc4) ^ (ushort)param_3;
  __saturate(uVar16);
  *(undefined2 *)(uVar23 + 0x48) = 0;
  uVar25 = unaff_lp / 0;
  *(char *)(iVar19 + 0xff) = (char)uVar16;
  uVar23 = uVar14;
  if ((bStack_1900 & bVar3) == 0) {
    uVar23 = uVar14 >> 8;
    bVar2 = (uVar14 & 0x80) != 0;
    *(undefined2 *)(uVar17 + 6) = uVar10;
    uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
    uVar14 = uVar8;
    cVar4 = DAT_00004c83;
    if (bVar2 || uVar23 == 0) {
      uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
      if (bVar2) goto code_r0x0005729e;
      param_3 = (int)(short)*(ushort *)(uVar17 + 0x80);
      uVar5 = *(ushort *)(&DAT_00004c00 + uVar25);
      uVar11 = uVar11 ^ *(ushort *)(uVar17 + 0x80);
      __saturate(uVar16);
      *(undefined2 *)(uVar17 + 0x48) = 0;
      uVar25 = uVar5 / 0;
      uVar17 = uVar17 | (int)*(char *)(uVar17 + 3);
      in_r10 = (int)*(short *)(uVar17 + 0xc4);
      uVar23 = unaff_r24;
      DAT_000000ff = (char)uVar16;
      goto LAB_00057270;
    }
LAB_00057286:
    sVar7 = (short)uVar14;
    uVar13 = (undefined2)uVar23;
    uVar23 = (uint)cVar4;
    uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
    if (!bVar2) {
      *(int *)(uVar17 + 0x40) = iVar19;
      goto code_r0x000572e2;
    }
    uVar10 = *(undefined2 *)(uVar17 + 6);
    uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
    if (bVar2) {
code_r0x0005729e:
      __saturate(unaff_r26 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000572cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000572ce +
                *(short *)(&DAT_000572ce + (uint)*(ushort *)(uVar17 + 0x18) * 2) * 2))();
      return;
    }
    iVar19 = *(int *)(uVar17 + 0x44);
    bVar2 = false;
code_r0x000572ea:
    *(undefined2 *)(uVar17 + 2) = uVar10;
    *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
    *(undefined4 *)(unaff_r29 + 0x16f8) = unaff_r27;
    puVar24 = (undefined2 *)(uint)*(ushort *)(uVar17 + 0x18);
    if (!bVar2) goto LAB_0005734e;
    uVar23 = in_r2 | 0x2d20;
    puVar24[2] = puVar24[1];
    puVar24 = (undefined2 *)(uint)(ushort)puVar24[0xc];
    if (!bVar2) goto LAB_0005735e;
    puVar24[4] = puVar24[1];
    uVar25 = uVar25 & 0xff;
    uVar17 = (uint)(ushort)puVar24[0xc];
    if (((uint)&stack0x00000000 | 0x2d20) < 8) {
      unaff_r22 = unaff_r22 & 0xff;
      *(ushort *)(uVar17 + 0xe8) = uVar11;
      iVar19 = *(int *)(uVar17 + 0x44);
      *(undefined2 *)(uVar17 + 0x60) = *(undefined2 *)(uVar17 + 8);
      in_r10 = (*unaff_r29)();
      uVar16 = in_r17;
      goto LAB_0005733e;
    }
LAB_00057370:
    *(undefined2 *)(uVar17 + 0x60) = uVar13;
    uVar10 = *(undefined2 *)(uVar17 + 0xc6);
    *(undefined2 *)(uVar17 + 0x7e) = uVar10;
    *(int *)(uVar17 + 0x40) = iVar19;
    uVar16 = unaff_r22;
    (*param_2)();
    uVar23 = (uint)*(ushort *)(uVar17 + 0x18);
    *(int *)(uVar23 + 0x40) = iVar19;
    *(undefined2 *)(uVar23 + 0x60) = uVar10;
    in_r10 = (*unaff_r29)();
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    bVar2 = true;
    uVar11 = *(ushort *)(uVar23 + 0x1a);
    in_r14 = uVar18;
    uVar8 = uVar25;
LAB_0005745e:
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    uVar25 = uVar8;
    if (!bVar2) goto LAB_000574b6;
    in_r10 = (*unaff_r29)();
    __saturate(in_r14 + 7);
  }
  else {
LAB_00057270:
    uVar13 = (undefined2)uVar23;
    uVar10 = *(undefined2 *)(uVar17 + 4);
    uVar17 = 0xfffffffe;
    __saturate(0xfffffffe);
    bVar2 = 3 < uVar8;
    uVar14 = unaff_gp - 0x31;
    sVar7 = (short)uVar14;
    cVar4 = *(char *)(param_3 + -0x84);
    if ((int)uVar8 < 4) goto LAB_00057286;
    uVar23 = 0x2d21;
code_r0x000572e2:
    if ((int)(uVar17 & uVar23) < 0) goto code_r0x000572ea;
LAB_0005733e:
    bVar2 = true;
    puVar24 = (undefined2 *)(uint)*(ushort *)(uVar17 + 0x18);
    in_r14 = uVar18;
LAB_0005734e:
    uVar13 = *puVar24;
    param_3 = (int)(short)puVar24[0x47];
    uVar23 = in_r18 | 0xd07d;
LAB_0005735e:
    uVar11 = puVar24[0xd];
    if (!bVar2 && uVar23 != 0) {
      uVar17 = (uint)*(char *)((int)puVar24 + 0x7d);
      goto LAB_00057370;
    }
    uVar23 = (uint)(ushort)puVar24[0xc];
    if (!bVar2) {
LAB_00057456:
      param_3 = (int)*(short *)(uVar23 + 0x88);
      uVar8 = uVar25;
      goto LAB_0005745e;
    }
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    *(int *)(uVar23 + 0xa4) = iVar19;
    sVar6 = *(short *)(uVar23 + 0xc4);
    uVar10 = *(undefined2 *)(uVar23 + 0x88);
    *(int *)(uVar23 + 0x40) = iVar19;
    uVar11 = *(ushort *)(uVar23 + 0x18);
    *(int *)(uVar23 + 0x40) = iVar19;
    uVar23 = (uint)*(ushort *)(uVar23 + 0x18);
    *(int *)(uVar23 + 0x40) = iVar19;
    uVar16 = (int)sVar6 + 0x10000;
    *(undefined2 *)(uVar23 + 4) = uVar10;
    uVar8 = (uint)*(ushort *)(uVar23 + 0x18);
    if (bVar2) {
      uVar16 = (uint)*(ushort *)(uVar8 + 0x18);
      *(int *)(uVar16 + 0xa4) = iVar19;
      uVar23 = (uint)*(ushort *)(uVar16 + 0x18);
      uVar16 = (int)*(short *)(uVar16 + 0xc4) + 0x10000;
      goto LAB_00057456;
    }
  }
  uVar11 = *(ushort *)(uVar8 + 0x1a);
  *(undefined4 *)(uVar8 - 0xcc6) = in_r19;
  uVar23 = uVar8 - 5;
  __saturate(uVar23);
  uVar18 = (uVar18 | (uint)&stack0x00000000) ^ in_r13;
  *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
LAB_000574b6:
  __saturate(uVar11 - 1);
  *(uint *)(uVar23 + 0x20) = uVar16;
  __saturate(param_1 - ((uVar25 & 0xf07c) >> 6));
  *(uint *)(uVar23 + 0x20) = uVar16;
  DAT_00000064 = (undefined1)uVar16;
  *(short *)(uVar23 + 0x1a) = (short)in_r13;
  *(short *)(uVar23 + 0x8e) = (short)in_r10;
  *(uint *)(uVar23 + 0x3c) = uVar16;
  iVar19 = (int)*(short *)(uVar23 + 0xca);
  *(int *)(uVar23 + 0x7c) = iVar19;
  __saturate(uVar23 - 5);
  uVar14 = *(ushort *)(uVar23 + 0x18) - 1;
  __saturate(uVar14);
  uVar17 = (uint)*(ushort *)(uVar23 + 0x13);
  *(short *)(uVar17 + 0x60) = *(short *)(uVar23 + 0xca);
  uVar8 = uVar18 | 0x1ff;
  iVar20 = (int)*(short *)(uVar17 + 0x22);
  uVar23 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar16 = unaff_r22;
LAB_000575e8:
  uVar15 = (uint)*(char *)(uVar17 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar16;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar20,-0xb);
    iVar22 = iVar20 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar10 = (undefined2)iVar19;
    uVar12 = (undefined1)uVar15;
    if (SUB41(uVar23 >> 3,0) || (bool)((byte)uVar23 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar17 + 6) = uVar12;
      uVar16 = (uint)*(char *)(uVar16 + 0x7083);
      iVar19 = (int)&stack0x00000000 - uVar8;
      bVar3 = (byte)(uVar8 >> 0x1f);
      uVar8 = (int)&stack0x00000000 - uVar8;
      __saturate(uVar8);
      iVar20 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar19 >> 0x1f))
      {
        iVar19 = (int)*(short *)(uVar17 + 2);
        *(short *)(iVar20 + 0x2e74) = (short)uVar25;
        *(short *)(iVar20 + 0x18d2) = (short)uVar25;
        *(uint *)(iVar20 + 0x1902) = uVar25;
        *(undefined2 *)(uVar17 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar17 + 0x5c);
        bVar2 = SCARRY4(iVar20 + -0x14,-10);
        iVar21 = iVar20 + -0x1e;
        uVar15 = unaff_r22;
        if (iVar20 + -0x1e < 0) {
          do {
            uVar10 = (undefined2)iVar19;
            uVar12 = (undefined1)uVar16;
            *(undefined1 *)(in_r10 + 0x628c) = uVar12;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar17 + 0x4d) = (char)unaff_r25;
            iVar20 = iVar21 + -0x1f;
            bVar1 = uVar14 == 0x80000000;
            uVar14 = uVar14 / uVar18;
            uVar23 = (uint)(9 < iVar21 - 0x15U) << 3 | (uint)(uVar14 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar12;
            bVar2 = true;
            if (bVar1 && uVar18 == 0xffffffff || uVar18 == 0) goto LAB_000575e8;
            iVar22 = iVar21 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar12;
            bVar2 = true;
            if (SCARRY4(iVar20,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar16;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar22,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar12;
              bVar2 = true;
              if (!SCARRY4(iVar22,-0xb)) goto code_r0x0005763e;
            }
            uVar15 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar16;
            if (bVar2) goto LAB_000575c2;
            iVar21 = iVar22 + -0x16;
            uVar15 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar16;
            bVar2 = true;
            if (SCARRY4(iVar22 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar21,-0xb);
            iVar21 = iVar22 + -0x21;
            uVar15 = (int)*(char *)(uVar17 + 0x10);
          } while( true );
        }
        *(short *)(uVar17 + 0x34) = sVar7 + -0x1daa;
        __saturate(uVar14 - 1);
        uVar17 = uVar17 | param_1;
        uVar16 = 0xfffffff1;
        uVar10 = (undefined2)*(undefined4 *)(uVar17 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar17 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar8 * 0x80);
      }
      __saturate(unaff_r22 + uVar16);
      *(undefined2 *)(uVar17 + 0xd0) = uVar10;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar19 = (int)*(short *)(uVar17 + 0xcc);
    *(int *)(uVar17 + 0x7c) = iVar19;
    uVar15 = 0xffffffff;
    uVar14 = (uint)*(ushort *)(uVar17 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar21 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar17 + 0x38) = (short)uVar18;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar16;
    if (bVar2) {
LAB_00057590:
      uVar15 = uVar15 / uVar16;
      uVar14 = (uint)*(ushort *)(uVar17 + 0x1a);
      *(short *)(uVar17 + 0x60) = (short)iVar19;
    }
    else {
      bVar1 = SCARRY4(iVar21,-0xb);
      iVar21 = iVar21 + -0xb;
      uVar15 = (uint)*(char *)(uVar17 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar16;
      if (bVar1) {
        uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
        goto LAB_00057590;
      }
      uVar15 = (uint)*(char *)(uVar17 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar16;
      if (!SCARRY4(iVar21,-0xb)) goto code_r0x000575e6;
    }
    uVar8 = uVar18 | 0x1ff;
    uVar15 = uVar15 & uVar16;
    uVar23 = uVar15 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar12 = *(undefined1 *)(uVar17 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar21 - 0xbU,-0xb);
  uVar23 = (uint)(10 < iVar21 - 0xbU) << 3 | (uint)(iVar21 == 0x16);
  iVar20 = iVar21 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_000571da @ 000571da (size 302) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_000571da(uint param_1,code *param_2,int param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  short sVar6;
  uint in_r1;
  uint in_r2;
  short sVar7;
  uint unaff_gp;
  undefined4 unaff_tp;
  int iVar8;
  int in_r10;
  ushort uVar9;
  uint in_r12;
  uint in_r13;
  uint in_r14;
  undefined1 uVar10;
  undefined2 uVar11;
  int in_r15;
  uint uVar12;
  uint uVar13;
  uint in_r16;
  uint in_r17;
  uint in_r18;
  undefined4 in_r19;
  uint uVar14;
  uint unaff_r21;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar15;
  uint unaff_r24;
  int unaff_r25;
  int unaff_r26;
  uint uVar16;
  undefined4 unaff_r27;
  int iVar17;
  int iVar18;
  int iVar19;
  code *unaff_r29;
  int unaff_ep;
  uint uVar20;
  undefined2 *puVar21;
  uint uVar22;
  uint unaff_lp;
  uint uVar23;
  byte local_1900;
  
  uVar15 = unaff_r23 & unaff_r21;
  uVar20 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar20 + 0xa4) = unaff_tp;
  *(undefined4 *)(uVar20 + 0x40) = unaff_tp;
  __saturate(param_1 - in_r15);
  uVar12 = param_1 - (param_1 - in_r15);
  __saturate(uVar12);
  uVar14 = (uint)(char)local_1900;
  iVar8 = *(int *)(uVar20 + 0x4c);
  bVar3 = *(byte *)(param_3 + -0x78b8);
  uVar9 = *(ushort *)(uVar20 + 0xc4) ^ (ushort)param_3;
  __saturate(in_r16);
  *(undefined2 *)(uVar20 + 0x48) = 0;
  uVar23 = unaff_lp / 0;
  *(char *)(iVar8 + 0xff) = (char)in_r16;
  uVar20 = uVar12;
  if ((local_1900 & bVar3) == 0) {
    uVar20 = uVar12 >> 8;
    bVar2 = (uVar12 & 0x80) != 0;
    *(undefined2 *)(uVar14 + 6) = param_4;
    uVar14 = (uint)*(ushort *)(uVar14 + 0x18);
    uVar12 = unaff_gp;
    cVar4 = DAT_00004c83;
    if (bVar2 || uVar20 == 0) {
      uVar14 = (uint)*(ushort *)(uVar14 + 0x18);
      if (bVar2) goto code_r0x0005729e;
      param_3 = (int)(short)*(ushort *)(uVar14 + 0x80);
      uVar5 = *(ushort *)(&DAT_00004c00 + uVar23);
      uVar9 = uVar9 ^ *(ushort *)(uVar14 + 0x80);
      __saturate(in_r16);
      *(undefined2 *)(uVar14 + 0x48) = 0;
      uVar23 = uVar5 / 0;
      uVar14 = uVar14 | (int)*(char *)(uVar14 + 3);
      in_r10 = (int)*(short *)(uVar14 + 0xc4);
      uVar20 = unaff_r24;
      DAT_000000ff = (char)in_r16;
      goto LAB_00057270;
    }
LAB_00057286:
    sVar7 = (short)uVar12;
    uVar11 = (undefined2)uVar20;
    uVar20 = (uint)cVar4;
    uVar14 = (uint)*(ushort *)(uVar14 + 0x18);
    if (!bVar2) {
      *(int *)(uVar14 + 0x40) = iVar8;
      goto code_r0x000572e2;
    }
    param_4 = *(undefined2 *)(uVar14 + 6);
    uVar14 = (uint)*(ushort *)(uVar14 + 0x18);
    if (bVar2) {
code_r0x0005729e:
      __saturate(unaff_r26 + 0xb);
                    /* WARNING: Could not recover jumptable at 0x000572cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_000572ce +
                *(short *)(&DAT_000572ce + (uint)*(ushort *)(uVar14 + 0x18) * 2) * 2))();
      return;
    }
    iVar8 = *(int *)(uVar14 + 0x44);
    bVar2 = false;
code_r0x000572ea:
    *(undefined2 *)(uVar14 + 2) = param_4;
    *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
    *(undefined4 *)(unaff_r29 + 0x16f8) = unaff_r27;
    puVar21 = (undefined2 *)(uint)*(ushort *)(uVar14 + 0x18);
    if (!bVar2) goto LAB_0005734e;
    uVar20 = in_r2 | 0x2d20;
    puVar21[2] = puVar21[1];
    puVar21 = (undefined2 *)(uint)(ushort)puVar21[0xc];
    if (!bVar2) goto LAB_0005735e;
    puVar21[4] = puVar21[1];
    uVar23 = uVar23 & 0xff;
    uVar14 = (uint)(ushort)puVar21[0xc];
    if (((uint)&stack0x00000000 | 0x2d20) < 8) {
      unaff_r22 = unaff_r22 & 0xff;
      *(ushort *)(uVar14 + 0xe8) = uVar9;
      iVar8 = *(int *)(uVar14 + 0x44);
      *(undefined2 *)(uVar14 + 0x60) = *(undefined2 *)(uVar14 + 8);
      in_r10 = (*unaff_r29)();
      in_r16 = in_r17;
      goto LAB_0005733e;
    }
LAB_00057370:
    *(undefined2 *)(uVar14 + 0x60) = uVar11;
    uVar11 = *(undefined2 *)(uVar14 + 0xc6);
    *(undefined2 *)(uVar14 + 0x7e) = uVar11;
    *(int *)(uVar14 + 0x40) = iVar8;
    in_r16 = unaff_r22;
    (*param_2)();
    uVar20 = (uint)*(ushort *)(uVar14 + 0x18);
    *(int *)(uVar20 + 0x40) = iVar8;
    *(undefined2 *)(uVar20 + 0x60) = uVar11;
    in_r10 = (*unaff_r29)();
    uVar20 = (uint)*(ushort *)(uVar20 + 0x18);
    bVar2 = true;
    uVar9 = *(ushort *)(uVar20 + 0x1a);
    in_r14 = uVar15;
    uVar12 = uVar23;
LAB_0005745e:
    uVar20 = (uint)*(ushort *)(uVar20 + 0x18);
    uVar23 = uVar12;
    if (!bVar2) goto LAB_000574b6;
    in_r10 = (*unaff_r29)();
    __saturate(in_r14 + 7);
  }
  else {
LAB_00057270:
    uVar11 = (undefined2)uVar20;
    param_4 = *(undefined2 *)(uVar14 + 4);
    uVar14 = 0xfffffffe;
    __saturate(0xfffffffe);
    bVar2 = 3 < unaff_gp;
    uVar12 = unaff_gp - 4;
    sVar7 = (short)uVar12;
    cVar4 = *(char *)(param_3 + -0x84);
    if ((int)unaff_gp < 4) goto LAB_00057286;
    uVar20 = 0x2d21;
code_r0x000572e2:
    if ((int)(uVar14 & uVar20) < 0) goto code_r0x000572ea;
LAB_0005733e:
    bVar2 = true;
    puVar21 = (undefined2 *)(uint)*(ushort *)(uVar14 + 0x18);
    in_r14 = uVar15;
LAB_0005734e:
    uVar11 = *puVar21;
    param_3 = (int)(short)puVar21[0x47];
    uVar20 = in_r18 | 0xd07d;
LAB_0005735e:
    uVar9 = puVar21[0xd];
    if (!bVar2 && uVar20 != 0) {
      uVar14 = (uint)*(char *)((int)puVar21 + 0x7d);
      goto LAB_00057370;
    }
    uVar20 = (uint)(ushort)puVar21[0xc];
    if (!bVar2) {
LAB_00057456:
      param_3 = (int)*(short *)(uVar20 + 0x88);
      uVar12 = uVar23;
      goto LAB_0005745e;
    }
    uVar20 = (uint)*(ushort *)(uVar20 + 0x18);
    *(int *)(uVar20 + 0xa4) = iVar8;
    sVar6 = *(short *)(uVar20 + 0xc4);
    uVar11 = *(undefined2 *)(uVar20 + 0x88);
    *(int *)(uVar20 + 0x40) = iVar8;
    uVar9 = *(ushort *)(uVar20 + 0x18);
    *(int *)(uVar20 + 0x40) = iVar8;
    uVar20 = (uint)*(ushort *)(uVar20 + 0x18);
    *(int *)(uVar20 + 0x40) = iVar8;
    in_r16 = (int)sVar6 + 0x10000;
    *(undefined2 *)(uVar20 + 4) = uVar11;
    uVar12 = (uint)*(ushort *)(uVar20 + 0x18);
    if (bVar2) {
      uVar12 = (uint)*(ushort *)(uVar12 + 0x18);
      *(int *)(uVar12 + 0xa4) = iVar8;
      uVar20 = (uint)*(ushort *)(uVar12 + 0x18);
      in_r16 = (int)*(short *)(uVar12 + 0xc4) + 0x10000;
      goto LAB_00057456;
    }
  }
  uVar9 = *(ushort *)(uVar12 + 0x1a);
  *(undefined4 *)(uVar12 - 0xcc6) = in_r19;
  uVar20 = uVar12 - 5;
  __saturate(uVar20);
  uVar15 = (uVar15 | (uint)&stack0x00000000) ^ in_r13;
  *(short *)(unaff_r29 + 0x1692) = (short)unaff_r27;
LAB_000574b6:
  __saturate(uVar9 - 1);
  *(uint *)(uVar20 + 0x20) = in_r16;
  __saturate(param_1 - ((uVar23 & 0xf07c) >> 6));
  *(uint *)(uVar20 + 0x20) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(short *)(uVar20 + 0x1a) = (short)in_r13;
  *(short *)(uVar20 + 0x8e) = (short)in_r10;
  *(uint *)(uVar20 + 0x3c) = in_r16;
  iVar8 = (int)*(short *)(uVar20 + 0xca);
  *(int *)(uVar20 + 0x7c) = iVar8;
  __saturate(uVar20 - 5);
  uVar16 = *(ushort *)(uVar20 + 0x18) - 1;
  __saturate(uVar16);
  uVar22 = (uint)*(ushort *)(uVar20 + 0x13);
  *(short *)(uVar22 + 0x60) = *(short *)(uVar20 + 0xca);
  uVar14 = uVar15 | 0x1ff;
  iVar17 = (int)*(short *)(uVar22 + 0x22);
  uVar20 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar12 = unaff_r22;
LAB_000575e8:
  uVar13 = (uint)*(char *)(uVar22 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar12;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar17,-0xb);
    iVar19 = iVar17 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar11 = (undefined2)iVar8;
    uVar10 = (undefined1)uVar13;
    if (SUB41(uVar20 >> 3,0) || (bool)((byte)uVar20 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar22 + 6) = uVar10;
      uVar12 = (uint)*(char *)(uVar12 + 0x7083);
      iVar8 = (int)&stack0x00000000 - uVar14;
      bVar3 = (byte)(uVar14 >> 0x1f);
      uVar14 = (int)&stack0x00000000 - uVar14;
      __saturate(uVar14);
      iVar17 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar8 >> 0x1f)) {
        iVar8 = (int)*(short *)(uVar22 + 2);
        *(short *)(iVar17 + 0x2e74) = (short)uVar23;
        *(short *)(iVar17 + 0x18d2) = (short)uVar23;
        *(uint *)(iVar17 + 0x1902) = uVar23;
        *(undefined2 *)(uVar22 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar22 + 0x5c);
        bVar2 = SCARRY4(iVar17 + -0x14,-10);
        iVar18 = iVar17 + -0x1e;
        uVar13 = unaff_r22;
        if (iVar17 + -0x1e < 0) {
          do {
            uVar11 = (undefined2)iVar8;
            uVar10 = (undefined1)uVar12;
            *(undefined1 *)(in_r10 + 0x628c) = uVar10;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar22 + 0x4d) = (char)unaff_r25;
            iVar17 = iVar18 + -0x1f;
            bVar1 = uVar16 == 0x80000000;
            uVar16 = uVar16 / uVar15;
            uVar20 = (uint)(9 < iVar18 - 0x15U) << 3 | (uint)(uVar16 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar10;
            bVar2 = true;
            if (bVar1 && uVar15 == 0xffffffff || uVar15 == 0) goto LAB_000575e8;
            iVar19 = iVar18 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar10;
            bVar2 = true;
            if (SCARRY4(iVar17,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar12;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar19,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar10;
              bVar2 = true;
              if (!SCARRY4(iVar19,-0xb)) goto code_r0x0005763e;
            }
            uVar13 = (uint)*(char *)(uVar22 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar12;
            if (bVar2) goto LAB_000575c2;
            iVar18 = iVar19 + -0x16;
            uVar13 = (uint)*(char *)(uVar22 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar12;
            bVar2 = true;
            if (SCARRY4(iVar19 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar18,-0xb);
            iVar18 = iVar19 + -0x21;
            uVar13 = (int)*(char *)(uVar22 + 0x10);
          } while( true );
        }
        *(short *)(uVar22 + 0x34) = sVar7 + -0x1daa;
        __saturate(uVar16 - 1);
        uVar22 = uVar22 | param_1;
        uVar12 = 0xfffffff1;
        uVar11 = (undefined2)*(undefined4 *)(uVar22 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar22 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar14 * 0x80);
      }
      __saturate(unaff_r22 + uVar12);
      *(undefined2 *)(uVar22 + 0xd0) = uVar11;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar8 = (int)*(short *)(uVar22 + 0xcc);
    *(int *)(uVar22 + 0x7c) = iVar8;
    uVar13 = 0xffffffff;
    uVar16 = (uint)*(ushort *)(uVar22 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar18 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar22 + 0x38) = (short)uVar15;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar12;
    if (bVar2) {
LAB_00057590:
      uVar13 = uVar13 / uVar12;
      uVar16 = (uint)*(ushort *)(uVar22 + 0x1a);
      *(short *)(uVar22 + 0x60) = (short)iVar8;
    }
    else {
      bVar1 = SCARRY4(iVar18,-0xb);
      iVar18 = iVar18 + -0xb;
      uVar13 = (uint)*(char *)(uVar22 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar12;
      if (bVar1) {
        uVar22 = (uint)*(ushort *)(uVar22 + 0x18);
        goto LAB_00057590;
      }
      uVar13 = (uint)*(char *)(uVar22 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar12;
      if (!SCARRY4(iVar18,-0xb)) goto code_r0x000575e6;
    }
    uVar14 = uVar15 | 0x1ff;
    uVar13 = uVar13 & uVar12;
    uVar20 = uVar13 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar10 = *(undefined1 *)(uVar22 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar18 - 0xbU,-0xb);
  uVar20 = (uint)(10 < iVar18 - 0xbU) << 3 | (uint)(iVar18 == 0x16);
  iVar17 = iVar18 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_0005731a @ 0005731a (size 76) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057366) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_0005731a(uint param_1,code *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint in_r1;
  short unaff_gp;
  undefined4 unaff_tp;
  undefined4 uVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined2 in_r11;
  uint in_r12;
  uint in_r13;
  uint uVar9;
  undefined1 uVar10;
  undefined2 in_r15;
  uint uVar11;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar12;
  int unaff_r25;
  uint uVar13;
  undefined2 unaff_r27;
  int iVar14;
  int iVar15;
  int iVar16;
  code *unaff_r29;
  int unaff_ep;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint unaff_lp;
  uint in_PSW;
  
  if ((in_PSW >> 3 & 1) == 0) {
    *(undefined2 *)(unaff_ep + 0x60) = in_r15;
    uVar6 = *(undefined2 *)(unaff_ep + 0xc6);
    *(undefined2 *)(unaff_ep + 0x7e) = uVar6;
    *(undefined4 *)(unaff_ep + 0x40) = unaff_tp;
    uVar17 = unaff_r22;
    (*param_2)();
    uVar4 = *(ushort *)(unaff_ep + 0x18);
    *(undefined4 *)(uVar4 + 0x40) = unaff_tp;
    *(undefined2 *)(uVar4 + 0x60) = uVar6;
    (*unaff_r29)();
  }
  else {
    unaff_r22 = unaff_r22 & 0xff;
    *(undefined2 *)(unaff_ep + 0xe8) = in_r11;
    uVar5 = *(undefined4 *)(unaff_ep + 0x44);
    *(undefined2 *)(unaff_ep + 0x60) = *(undefined2 *)(unaff_ep + 8);
    (*unaff_r29)();
    uVar17 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18) + 0x18);
    *(undefined4 *)(uVar17 + 0xa4) = uVar5;
    uVar6 = *(undefined2 *)(uVar17 + 0x88);
    *(undefined4 *)(uVar17 + 0x40) = uVar5;
    *(undefined4 *)(uVar17 + 0x40) = uVar5;
    uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
    *(undefined4 *)(uVar17 + 0x40) = uVar5;
    *(undefined2 *)(uVar17 + 4) = uVar6;
    uVar18 = (uint)*(ushort *)(*(ushort *)(uVar17 + 0x18) + 0x18);
    *(undefined4 *)(uVar18 + 0xa4) = uVar5;
    uVar17 = (int)*(short *)(uVar18 + 0xc4) + 0x10000;
    param_3 = (int)*(short *)(*(ushort *)(uVar18 + 0x18) + 0x88);
  }
  uVar18 = unaff_r23;
  iVar8 = (*unaff_r29)();
  __saturate(uVar18 + 7);
  uVar4 = *(ushort *)(unaff_lp + 0x1a);
  *(undefined4 *)(unaff_lp - 0xcc6) = in_r19;
  __saturate(unaff_lp - 5);
  uVar12 = (unaff_r23 | (uint)&stack0x00000000) ^ in_r13;
  *(undefined2 *)(unaff_r29 + 0x1692) = unaff_r27;
  __saturate(uVar4 - 1);
  *(uint *)(unaff_lp + 0x1b) = uVar17;
  __saturate(param_1 - ((unaff_lp & 0xf07c) >> 6));
  *(uint *)(unaff_lp + 0x1b) = uVar17;
  DAT_00000064 = (undefined1)uVar17;
  *(short *)(unaff_lp + 0x15) = (short)in_r13;
  *(short *)(unaff_lp + 0x89) = (short)iVar8;
  *(uint *)(unaff_lp + 0x37) = uVar17;
  iVar7 = (int)*(short *)(unaff_lp + 0xc5);
  *(int *)(unaff_lp + 0x77) = iVar7;
  __saturate(unaff_lp - 10);
  uVar13 = *(ushort *)(unaff_lp + 0x13) - 1;
  __saturate(uVar13);
  uVar19 = (uint)*(ushort *)(unaff_lp + 0xe);
  *(short *)(uVar19 + 0x60) = *(short *)(unaff_lp + 0xc5);
  uVar9 = uVar12 | 0x1ff;
  iVar14 = (int)*(short *)(uVar19 + 0x22);
  uVar17 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar18 = unaff_r22;
LAB_000575e8:
  uVar11 = (uint)*(char *)(uVar19 + 0x10);
  *(char *)(iVar8 + 0x6284) = (char)uVar18;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar14,-0xb);
    iVar16 = iVar14 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar6 = (undefined2)iVar7;
    uVar10 = (undefined1)uVar11;
    if (SUB41(uVar17 >> 3,0) || (bool)((byte)uVar17 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar19 + 6) = uVar10;
      uVar18 = (uint)*(char *)(uVar18 + 0x7083);
      iVar7 = (int)&stack0x00000000 - uVar9;
      bVar3 = (byte)(uVar9 >> 0x1f);
      uVar9 = (int)&stack0x00000000 - uVar9;
      __saturate(uVar9);
      iVar14 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar7 >> 0x1f)) {
        iVar7 = (int)*(short *)(uVar19 + 2);
        *(short *)(iVar14 + 0x2e74) = (short)unaff_lp;
        *(short *)(iVar14 + 0x18d2) = (short)unaff_lp;
        *(uint *)(iVar14 + 0x1902) = unaff_lp;
        *(undefined2 *)(uVar19 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar19 + 0x5c);
        bVar2 = SCARRY4(iVar14 + -0x14,-10);
        iVar15 = iVar14 + -0x1e;
        uVar11 = unaff_r22;
        if (iVar14 + -0x1e < 0) {
          do {
            uVar6 = (undefined2)iVar7;
            uVar10 = (undefined1)uVar18;
            *(undefined1 *)(iVar8 + 0x628c) = uVar10;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar19 + 0x4d) = (char)unaff_r25;
            iVar14 = iVar15 + -0x1f;
            bVar1 = uVar13 == 0x80000000;
            uVar13 = uVar13 / uVar12;
            uVar17 = (uint)(9 < iVar15 - 0x15U) << 3 | (uint)(uVar13 == 0);
            *(undefined1 *)(iVar8 + 0x628e) = uVar10;
            bVar2 = true;
            if (bVar1 && uVar12 == 0xffffffff || uVar12 == 0) goto LAB_000575e8;
            iVar16 = iVar15 + -0x2a;
            *(undefined1 *)(iVar8 + 0x6290) = uVar10;
            bVar2 = true;
            if (SCARRY4(iVar14,-0xb)) {
FUN_000575f2:
              *(char *)(iVar8 + 0x6286) = (char)uVar18;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar16,-0xb);
            }
            else {
              *(undefined1 *)(iVar8 + 0x6292) = uVar10;
              bVar2 = true;
              if (!SCARRY4(iVar16,-0xb)) goto code_r0x0005763e;
            }
            uVar11 = (uint)*(char *)(uVar19 + 0x10);
            *(char *)(iVar8 + 0x6288) = (char)uVar18;
            if (bVar2) goto LAB_000575c2;
            iVar15 = iVar16 + -0x16;
            uVar11 = (uint)*(char *)(uVar19 + 0x10);
            *(char *)(iVar8 + 0x628a) = (char)uVar18;
            bVar2 = true;
            if (SCARRY4(iVar16 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar15,-0xb);
            iVar15 = iVar16 + -0x21;
            uVar11 = (int)*(char *)(uVar19 + 0x10);
          } while( true );
        }
        *(short *)(uVar19 + 0x34) = unaff_gp + -0x1daa;
        __saturate(uVar13 - 1);
        uVar19 = uVar19 | param_1;
        uVar18 = 0xfffffff1;
        uVar6 = (undefined2)*(undefined4 *)(uVar19 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar19 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar9 * 0x80);
      }
      __saturate(unaff_r22 + uVar18);
      *(undefined2 *)(uVar19 + 0xd0) = uVar6;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar7 = (int)*(short *)(uVar19 + 0xcc);
    *(int *)(uVar19 + 0x7c) = iVar7;
    uVar11 = 0xffffffff;
    uVar13 = (uint)*(ushort *)(uVar19 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar15 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar19 + 0x38) = (short)uVar12;
LAB_000575cc:
    *(char *)(iVar8 + 0x627e) = (char)uVar18;
    if (bVar2) {
LAB_00057590:
      uVar11 = uVar11 / uVar18;
      uVar13 = (uint)*(ushort *)(uVar19 + 0x1a);
      *(short *)(uVar19 + 0x60) = (short)iVar7;
    }
    else {
      bVar1 = SCARRY4(iVar15,-0xb);
      iVar15 = iVar15 + -0xb;
      uVar11 = (uint)*(char *)(uVar19 + 0x10);
LAB_000575d6:
      *(char *)(iVar8 + 0x6280) = (char)uVar18;
      if (bVar1) {
        uVar19 = (uint)*(ushort *)(uVar19 + 0x18);
        goto LAB_00057590;
      }
      uVar11 = (uint)*(char *)(uVar19 + 0x10);
      *(char *)(iVar8 + 0x6282) = (char)uVar18;
      if (!SCARRY4(iVar15,-0xb)) goto code_r0x000575e6;
    }
    uVar9 = uVar12 | 0x1ff;
    uVar11 = uVar11 & uVar18;
    uVar17 = uVar11 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar10 = *(undefined1 *)(uVar19 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar15 - 0xbU,-0xb);
  uVar17 = (uint)(10 < iVar15 - 0xbU) << 3 | (uint)(iVar15 == 0x16);
  iVar14 = iVar15 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_00057366 @ 00057366 (size 190) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x000573f0) */
/* WARNING: Removing unreachable block (ram,0x00057402) */
/* WARNING: Removing unreachable block (ram,0x0005742c) */
/* WARNING: Removing unreachable block (ram,0x000573c6) */
/* WARNING: Removing unreachable block (ram,0x00057448) */
/* WARNING: Removing unreachable block (ram,0x00057456) */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_00057366(uint param_1,code *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint in_r1;
  short unaff_gp;
  undefined4 unaff_tp;
  undefined2 uVar5;
  int iVar6;
  uint in_r12;
  uint in_r13;
  uint uVar7;
  undefined1 uVar8;
  undefined2 in_r15;
  uint uVar9;
  uint uVar10;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar11;
  int unaff_r25;
  uint uVar12;
  undefined2 unaff_r27;
  int iVar13;
  int iVar14;
  int iVar15;
  code *unaff_r29;
  int unaff_ep;
  int iVar16;
  uint uVar17;
  uint unaff_lp;
  uint uVar18;
  
  iVar16 = (int)*(char *)(unaff_ep + 0x7d);
  *(undefined2 *)(iVar16 + 0x60) = in_r15;
  uVar5 = *(undefined2 *)(iVar16 + 0xc6);
  *(undefined2 *)(iVar16 + 0x7e) = uVar5;
  *(undefined4 *)(iVar16 + 0x40) = unaff_tp;
  uVar10 = unaff_r22;
  (*param_2)();
  uVar4 = *(ushort *)(iVar16 + 0x18);
  *(undefined4 *)(uVar4 + 0x40) = unaff_tp;
  *(undefined2 *)(uVar4 + 0x60) = uVar5;
  (*unaff_r29)();
  uVar18 = unaff_r23;
  iVar6 = (*unaff_r29)();
  __saturate(uVar18 + 7);
  uVar4 = *(ushort *)(unaff_lp + 0x1a);
  *(undefined4 *)(unaff_lp - 0xcc6) = in_r19;
  __saturate(unaff_lp - 5);
  uVar11 = (unaff_r23 | (uint)&stack0x00000000) ^ in_r13;
  *(undefined2 *)(unaff_r29 + 0x1692) = unaff_r27;
  __saturate(uVar4 - 1);
  *(uint *)(unaff_lp + 0x1b) = uVar10;
  __saturate(param_1 - ((unaff_lp & 0xf07c) >> 6));
  *(uint *)(unaff_lp + 0x1b) = uVar10;
  DAT_00000064 = (undefined1)uVar10;
  *(short *)(unaff_lp + 0x15) = (short)in_r13;
  *(short *)(unaff_lp + 0x89) = (short)iVar6;
  *(uint *)(unaff_lp + 0x37) = uVar10;
  iVar16 = (int)*(short *)(unaff_lp + 0xc5);
  *(int *)(unaff_lp + 0x77) = iVar16;
  __saturate(unaff_lp - 10);
  uVar12 = *(ushort *)(unaff_lp + 0x13) - 1;
  __saturate(uVar12);
  uVar17 = (uint)*(ushort *)(unaff_lp + 0xe);
  *(short *)(uVar17 + 0x60) = *(short *)(unaff_lp + 0xc5);
  uVar7 = uVar11 | 0x1ff;
  iVar13 = (int)*(short *)(uVar17 + 0x22);
  uVar18 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar10 = unaff_r22;
LAB_000575e8:
  uVar9 = (uint)*(char *)(uVar17 + 0x10);
  *(char *)(iVar6 + 0x6284) = (char)uVar10;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar13,-0xb);
    iVar15 = iVar13 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar5 = (undefined2)iVar16;
    uVar8 = (undefined1)uVar9;
    if (SUB41(uVar18 >> 3,0) || (bool)((byte)uVar18 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar17 + 6) = uVar8;
      uVar10 = (uint)*(char *)(uVar10 + 0x7083);
      iVar16 = (int)&stack0x00000000 - uVar7;
      bVar3 = (byte)(uVar7 >> 0x1f);
      uVar7 = (int)&stack0x00000000 - uVar7;
      __saturate(uVar7);
      iVar13 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar16 >> 0x1f))
      {
        iVar16 = (int)*(short *)(uVar17 + 2);
        *(short *)(iVar13 + 0x2e74) = (short)unaff_lp;
        *(short *)(iVar13 + 0x18d2) = (short)unaff_lp;
        *(uint *)(iVar13 + 0x1902) = unaff_lp;
        *(undefined2 *)(uVar17 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar17 + 0x5c);
        bVar2 = SCARRY4(iVar13 + -0x14,-10);
        iVar14 = iVar13 + -0x1e;
        uVar9 = unaff_r22;
        if (iVar13 + -0x1e < 0) {
          do {
            uVar5 = (undefined2)iVar16;
            uVar8 = (undefined1)uVar10;
            *(undefined1 *)(iVar6 + 0x628c) = uVar8;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar17 + 0x4d) = (char)unaff_r25;
            iVar13 = iVar14 + -0x1f;
            bVar1 = uVar12 == 0x80000000;
            uVar12 = uVar12 / uVar11;
            uVar18 = (uint)(9 < iVar14 - 0x15U) << 3 | (uint)(uVar12 == 0);
            *(undefined1 *)(iVar6 + 0x628e) = uVar8;
            bVar2 = true;
            if (bVar1 && uVar11 == 0xffffffff || uVar11 == 0) goto LAB_000575e8;
            iVar15 = iVar14 + -0x2a;
            *(undefined1 *)(iVar6 + 0x6290) = uVar8;
            bVar2 = true;
            if (SCARRY4(iVar13,-0xb)) {
FUN_000575f2:
              *(char *)(iVar6 + 0x6286) = (char)uVar10;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar15,-0xb);
            }
            else {
              *(undefined1 *)(iVar6 + 0x6292) = uVar8;
              bVar2 = true;
              if (!SCARRY4(iVar15,-0xb)) goto code_r0x0005763e;
            }
            uVar9 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(iVar6 + 0x6288) = (char)uVar10;
            if (bVar2) goto LAB_000575c2;
            iVar14 = iVar15 + -0x16;
            uVar9 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(iVar6 + 0x628a) = (char)uVar10;
            bVar2 = true;
            if (SCARRY4(iVar15 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar14,-0xb);
            iVar14 = iVar15 + -0x21;
            uVar9 = (int)*(char *)(uVar17 + 0x10);
          } while( true );
        }
        *(short *)(uVar17 + 0x34) = unaff_gp + -0x1daa;
        __saturate(uVar12 - 1);
        uVar17 = uVar17 | param_1;
        uVar10 = 0xfffffff1;
        uVar5 = (undefined2)*(undefined4 *)(uVar17 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar17 + 0xee) = (short)unaff_r22;
        __saturate(param_2 + uVar7 * 0x80);
      }
      __saturate(unaff_r22 + uVar10);
      *(undefined2 *)(uVar17 + 0xd0) = uVar5;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar16 = (int)*(short *)(uVar17 + 0xcc);
    *(int *)(uVar17 + 0x7c) = iVar16;
    uVar9 = 0xffffffff;
    uVar12 = (uint)*(ushort *)(uVar17 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar14 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar17 + 0x38) = (short)uVar11;
LAB_000575cc:
    *(char *)(iVar6 + 0x627e) = (char)uVar10;
    if (bVar2) {
LAB_00057590:
      uVar9 = uVar9 / uVar10;
      uVar12 = (uint)*(ushort *)(uVar17 + 0x1a);
      *(short *)(uVar17 + 0x60) = (short)iVar16;
    }
    else {
      bVar1 = SCARRY4(iVar14,-0xb);
      iVar14 = iVar14 + -0xb;
      uVar9 = (uint)*(char *)(uVar17 + 0x10);
LAB_000575d6:
      *(char *)(iVar6 + 0x6280) = (char)uVar10;
      if (bVar1) {
        uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
        goto LAB_00057590;
      }
      uVar9 = (uint)*(char *)(uVar17 + 0x10);
      *(char *)(iVar6 + 0x6282) = (char)uVar10;
      if (!SCARRY4(iVar14,-0xb)) goto code_r0x000575e6;
    }
    uVar7 = uVar11 | 0x1ff;
    uVar9 = uVar9 & uVar10;
    uVar18 = uVar9 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar8 = *(undefined1 *)(uVar17 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar14 - 0xbU,-0xb);
  uVar18 = (uint)(10 < iVar14 - 0xbU) << 3 | (uint)(iVar14 == 0x16);
  iVar13 = iVar14 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_00057424 @ 00057424 (size 76) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_00057424(uint param_1,int param_2,int param_3,undefined2 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint in_r1;
  short unaff_gp;
  undefined4 unaff_tp;
  undefined2 uVar4;
  int iVar5;
  int in_r10;
  uint in_r12;
  uint in_r13;
  int in_r14;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  int in_r16;
  uint uVar9;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  int unaff_r25;
  uint unaff_r26;
  uint uVar10;
  undefined2 unaff_r27;
  int iVar11;
  int iVar12;
  int iVar13;
  code *unaff_r29;
  int unaff_ep;
  uint uVar14;
  uint uVar15;
  uint unaff_lp;
  uint in_PSW;
  
  *(undefined2 *)(unaff_ep + 4) = param_4;
  uVar14 = (uint)*(ushort *)(unaff_ep + 0x18);
  if ((in_PSW >> 3 & 1) != 0) {
    uVar14 = (uint)*(ushort *)(*(ushort *)(unaff_ep + 0x18) + 0x18);
    *(undefined4 *)(uVar14 + 0xa4) = unaff_tp;
    in_r16 = *(short *)(uVar14 + 0xc4) + 0x10000;
    param_3 = (int)*(short *)(*(ushort *)(uVar14 + 0x18) + 0x88);
    uVar14 = (uint)*(ushort *)(*(ushort *)(uVar14 + 0x18) + 0x18);
    if ((in_PSW >> 3 & 1) == 0) goto LAB_000574b6;
    in_r10 = (*unaff_r29)();
    __saturate(in_r14 + 7);
    uVar14 = unaff_lp;
  }
  unaff_r26 = (uint)*(ushort *)(uVar14 + 0x1a);
  *(undefined4 *)(uVar14 - 0xcc6) = in_r19;
  uVar14 = uVar14 - 5;
  __saturate(uVar14);
  unaff_r23 = (unaff_r23 | (uint)&stack0x00000000) ^ in_r13;
  *(undefined2 *)(unaff_r29 + 0x1692) = unaff_r27;
LAB_000574b6:
  __saturate(unaff_r26 - 1);
  *(int *)(uVar14 + 0x20) = in_r16;
  __saturate(param_1 - ((unaff_lp & 0xf07c) >> 6));
  *(int *)(uVar14 + 0x20) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(short *)(uVar14 + 0x1a) = (short)in_r13;
  *(short *)(uVar14 + 0x8e) = (short)in_r10;
  *(int *)(uVar14 + 0x3c) = in_r16;
  iVar5 = (int)*(short *)(uVar14 + 0xca);
  *(int *)(uVar14 + 0x7c) = iVar5;
  __saturate(uVar14 - 5);
  uVar10 = *(ushort *)(uVar14 + 0x18) - 1;
  __saturate(uVar10);
  uVar15 = (uint)*(ushort *)(uVar14 + 0x13);
  *(short *)(uVar15 + 0x60) = *(short *)(uVar14 + 0xca);
  uVar6 = unaff_r23 | 0x1ff;
  iVar11 = (int)*(short *)(uVar15 + 0x22);
  uVar14 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar9 = unaff_r22;
LAB_000575e8:
  uVar8 = (uint)*(char *)(uVar15 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar9;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar11,-0xb);
    iVar13 = iVar11 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar4 = (undefined2)iVar5;
    uVar7 = (undefined1)uVar8;
    if (SUB41(uVar14 >> 3,0) || (bool)((byte)uVar14 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar15 + 6) = uVar7;
      uVar9 = (uint)*(char *)(uVar9 + 0x7083);
      iVar5 = (int)&stack0x00000000 - uVar6;
      bVar3 = (byte)(uVar6 >> 0x1f);
      uVar6 = (int)&stack0x00000000 - uVar6;
      __saturate(uVar6);
      iVar11 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar5 >> 0x1f)) {
        iVar5 = (int)*(short *)(uVar15 + 2);
        *(short *)(iVar11 + 0x2e74) = (short)unaff_lp;
        *(short *)(iVar11 + 0x18d2) = (short)unaff_lp;
        *(uint *)(iVar11 + 0x1902) = unaff_lp;
        *(undefined2 *)(uVar15 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar15 + 0x5c);
        bVar2 = SCARRY4(iVar11 + -0x14,-10);
        iVar12 = iVar11 + -0x1e;
        uVar8 = unaff_r22;
        if (iVar11 + -0x1e < 0) {
          do {
            uVar4 = (undefined2)iVar5;
            uVar7 = (undefined1)uVar9;
            *(undefined1 *)(in_r10 + 0x628c) = uVar7;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar15 + 0x4d) = (char)unaff_r25;
            iVar11 = iVar12 + -0x1f;
            bVar1 = uVar10 == 0x80000000;
            uVar10 = uVar10 / unaff_r23;
            uVar14 = (uint)(9 < iVar12 - 0x15U) << 3 | (uint)(uVar10 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar7;
            bVar2 = true;
            if (bVar1 && unaff_r23 == 0xffffffff || unaff_r23 == 0) goto LAB_000575e8;
            iVar13 = iVar12 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar7;
            bVar2 = true;
            if (SCARRY4(iVar11,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar9;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar13,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar7;
              bVar2 = true;
              if (!SCARRY4(iVar13,-0xb)) goto code_r0x0005763e;
            }
            uVar8 = (uint)*(char *)(uVar15 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar9;
            if (bVar2) goto LAB_000575c2;
            iVar12 = iVar13 + -0x16;
            uVar8 = (uint)*(char *)(uVar15 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar9;
            bVar2 = true;
            if (SCARRY4(iVar13 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar12,-0xb);
            iVar12 = iVar13 + -0x21;
            uVar8 = (int)*(char *)(uVar15 + 0x10);
          } while( true );
        }
        *(short *)(uVar15 + 0x34) = unaff_gp + -0x1daa;
        __saturate(uVar10 - 1);
        uVar15 = uVar15 | param_1;
        uVar9 = 0xfffffff1;
        uVar4 = (undefined2)*(undefined4 *)(uVar15 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar15 + 0xee) = (short)unaff_r22;
        __saturate(uVar6 * 0x80 + param_2);
      }
      __saturate(unaff_r22 + uVar9);
      *(undefined2 *)(uVar15 + 0xd0) = uVar4;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar5 = (int)*(short *)(uVar15 + 0xcc);
    *(int *)(uVar15 + 0x7c) = iVar5;
    uVar8 = 0xffffffff;
    uVar10 = (uint)*(ushort *)(uVar15 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar12 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar15 + 0x38) = (short)unaff_r23;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar9;
    if (bVar2) {
LAB_00057590:
      uVar8 = uVar8 / uVar9;
      uVar10 = (uint)*(ushort *)(uVar15 + 0x1a);
      *(short *)(uVar15 + 0x60) = (short)iVar5;
    }
    else {
      bVar1 = SCARRY4(iVar12,-0xb);
      iVar12 = iVar12 + -0xb;
      uVar8 = (uint)*(char *)(uVar15 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar9;
      if (bVar1) {
        uVar15 = (uint)*(ushort *)(uVar15 + 0x18);
        goto LAB_00057590;
      }
      uVar8 = (uint)*(char *)(uVar15 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar9;
      if (!SCARRY4(iVar12,-0xb)) goto code_r0x000575e6;
    }
    uVar6 = unaff_r23 | 0x1ff;
    uVar8 = uVar8 & uVar9;
    uVar14 = uVar8 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar7 = *(undefined1 *)(uVar15 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar12 - 0xbU,-0xb);
  uVar14 = (uint)(10 < iVar12 - 0xbU) << 3 | (uint)(iVar12 == 0x16);
  iVar11 = iVar12 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_00057470 @ 00057470 (size 72) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_00057470(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint in_r1;
  short unaff_gp;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint in_r12;
  uint in_r13;
  int in_r14;
  uint uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined4 in_r16;
  uint uVar11;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar12;
  int unaff_r25;
  uint uVar13;
  undefined2 unaff_r27;
  int iVar14;
  int iVar15;
  int iVar16;
  code *unaff_r29;
  uint uVar17;
  uint unaff_lp;
  uint uVar18;
  
  iVar7 = (*unaff_r29)();
  __saturate(in_r14 + 7);
  uVar4 = *(ushort *)(unaff_lp + 0x1a);
  *(undefined4 *)(unaff_lp - 0xcc6) = in_r19;
  __saturate(unaff_lp - 5);
  uVar12 = (unaff_r23 | (uint)&stack0x00000000) ^ in_r13;
  *(undefined2 *)(unaff_r29 + 0x1692) = unaff_r27;
  __saturate(uVar4 - 1);
  *(undefined4 *)(unaff_lp + 0x1b) = in_r16;
  __saturate(param_1 - ((unaff_lp & 0xf07c) >> 6));
  *(undefined4 *)(unaff_lp + 0x1b) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(short *)(unaff_lp + 0x15) = (short)in_r13;
  *(short *)(unaff_lp + 0x89) = (short)iVar7;
  *(undefined4 *)(unaff_lp + 0x37) = in_r16;
  iVar6 = (int)*(short *)(unaff_lp + 0xc5);
  *(int *)(unaff_lp + 0x77) = iVar6;
  __saturate(unaff_lp - 10);
  uVar13 = *(ushort *)(unaff_lp + 0x13) - 1;
  __saturate(uVar13);
  uVar17 = (uint)*(ushort *)(unaff_lp + 0xe);
  *(short *)(uVar17 + 0x60) = *(short *)(unaff_lp + 0xc5);
  uVar8 = uVar12 | 0x1ff;
  iVar14 = (int)*(short *)(uVar17 + 0x22);
  uVar18 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar11 = unaff_r22;
LAB_000575e8:
  uVar10 = (uint)*(char *)(uVar17 + 0x10);
  *(char *)(iVar7 + 0x6284) = (char)uVar11;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar14,-0xb);
    iVar16 = iVar14 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar5 = (undefined2)iVar6;
    uVar9 = (undefined1)uVar10;
    if (SUB41(uVar18 >> 3,0) || (bool)((byte)uVar18 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar17 + 6) = uVar9;
      uVar11 = (uint)*(char *)(uVar11 + 0x7083);
      iVar6 = (int)&stack0x00000000 - uVar8;
      bVar3 = (byte)(uVar8 >> 0x1f);
      uVar8 = (int)&stack0x00000000 - uVar8;
      __saturate(uVar8);
      iVar14 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar6 >> 0x1f)) {
        iVar6 = (int)*(short *)(uVar17 + 2);
        *(short *)(iVar14 + 0x2e74) = (short)unaff_lp;
        *(short *)(iVar14 + 0x18d2) = (short)unaff_lp;
        *(uint *)(iVar14 + 0x1902) = unaff_lp;
        *(undefined2 *)(uVar17 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar17 + 0x5c);
        bVar2 = SCARRY4(iVar14 + -0x14,-10);
        iVar15 = iVar14 + -0x1e;
        uVar10 = unaff_r22;
        if (iVar14 + -0x1e < 0) {
          do {
            uVar5 = (undefined2)iVar6;
            uVar9 = (undefined1)uVar11;
            *(undefined1 *)(iVar7 + 0x628c) = uVar9;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar17 + 0x4d) = (char)unaff_r25;
            iVar14 = iVar15 + -0x1f;
            bVar1 = uVar13 == 0x80000000;
            uVar13 = uVar13 / uVar12;
            uVar18 = (uint)(9 < iVar15 - 0x15U) << 3 | (uint)(uVar13 == 0);
            *(undefined1 *)(iVar7 + 0x628e) = uVar9;
            bVar2 = true;
            if (bVar1 && uVar12 == 0xffffffff || uVar12 == 0) goto LAB_000575e8;
            iVar16 = iVar15 + -0x2a;
            *(undefined1 *)(iVar7 + 0x6290) = uVar9;
            bVar2 = true;
            if (SCARRY4(iVar14,-0xb)) {
FUN_000575f2:
              *(char *)(iVar7 + 0x6286) = (char)uVar11;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar16,-0xb);
            }
            else {
              *(undefined1 *)(iVar7 + 0x6292) = uVar9;
              bVar2 = true;
              if (!SCARRY4(iVar16,-0xb)) goto code_r0x0005763e;
            }
            uVar10 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(iVar7 + 0x6288) = (char)uVar11;
            if (bVar2) goto LAB_000575c2;
            iVar15 = iVar16 + -0x16;
            uVar10 = (uint)*(char *)(uVar17 + 0x10);
            *(char *)(iVar7 + 0x628a) = (char)uVar11;
            bVar2 = true;
            if (SCARRY4(iVar16 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar15,-0xb);
            iVar15 = iVar16 + -0x21;
            uVar10 = (int)*(char *)(uVar17 + 0x10);
          } while( true );
        }
        *(short *)(uVar17 + 0x34) = unaff_gp + -0x1daa;
        __saturate(uVar13 - 1);
        uVar17 = uVar17 | param_1;
        uVar11 = 0xfffffff1;
        uVar5 = (undefined2)*(undefined4 *)(uVar17 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar17 + 0xee) = (short)unaff_r22;
        __saturate(uVar8 * 0x80 + param_2);
      }
      __saturate(unaff_r22 + uVar11);
      *(undefined2 *)(uVar17 + 0xd0) = uVar5;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar6 = (int)*(short *)(uVar17 + 0xcc);
    *(int *)(uVar17 + 0x7c) = iVar6;
    uVar10 = 0xffffffff;
    uVar13 = (uint)*(ushort *)(uVar17 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar15 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar17 + 0x38) = (short)uVar12;
LAB_000575cc:
    *(char *)(iVar7 + 0x627e) = (char)uVar11;
    if (bVar2) {
LAB_00057590:
      uVar10 = uVar10 / uVar11;
      uVar13 = (uint)*(ushort *)(uVar17 + 0x1a);
      *(short *)(uVar17 + 0x60) = (short)iVar6;
    }
    else {
      bVar1 = SCARRY4(iVar15,-0xb);
      iVar15 = iVar15 + -0xb;
      uVar10 = (uint)*(char *)(uVar17 + 0x10);
LAB_000575d6:
      *(char *)(iVar7 + 0x6280) = (char)uVar11;
      if (bVar1) {
        uVar17 = (uint)*(ushort *)(uVar17 + 0x18);
        goto LAB_00057590;
      }
      uVar10 = (uint)*(char *)(uVar17 + 0x10);
      *(char *)(iVar7 + 0x6282) = (char)uVar11;
      if (!SCARRY4(iVar15,-0xb)) goto code_r0x000575e6;
    }
    uVar8 = uVar12 | 0x1ff;
    uVar10 = uVar10 & uVar11;
    uVar18 = uVar10 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar9 = *(undefined1 *)(uVar17 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar15 - 0xbU,-0xb);
  uVar18 = (uint)(10 < iVar15 - 0xbU) << 3 | (uint)(iVar15 == 0x16);
  iVar14 = iVar15 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_000574b8 @ 000574b8 (size 312) ====

/* WARNING: Instruction at (ram,0x0005759a) overlaps instruction at (ram,0x00057598)
    */
/* WARNING: Removing unreachable block (ram,0x00057554) */

void FUN_000574b8(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint in_r1;
  short unaff_gp;
  undefined2 uVar4;
  int iVar5;
  int in_r10;
  uint in_r12;
  undefined2 in_r13;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 in_r16;
  uint uVar9;
  uint unaff_r22;
  uint unaff_r23;
  int unaff_r25;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int unaff_ep;
  uint uVar14;
  uint unaff_lp;
  uint uVar15;
  
  *(undefined4 *)(unaff_ep + 0x20) = in_r16;
  __saturate(param_1 - ((unaff_lp & 0xf07c) >> 6));
  *(undefined4 *)(unaff_ep + 0x20) = in_r16;
  DAT_00000064 = (undefined1)in_r16;
  *(undefined2 *)(unaff_ep + 0x1a) = in_r13;
  *(short *)(unaff_ep + 0x8e) = (short)in_r10;
  *(undefined4 *)(unaff_ep + 0x3c) = in_r16;
  iVar5 = (int)*(short *)(unaff_ep + 0xca);
  *(int *)(unaff_ep + 0x7c) = iVar5;
  __saturate(unaff_ep + -5);
  uVar10 = *(ushort *)(unaff_ep + 0x18) - 1;
  __saturate(uVar10);
  uVar14 = (uint)*(ushort *)(unaff_ep + 0x13);
  *(short *)(uVar14 + 0x60) = *(short *)(unaff_ep + 0xca);
  uVar6 = unaff_r23 | 0x1ff;
  iVar11 = (int)*(short *)(uVar14 + 0x22);
  uVar15 = (uint)(in_r12 >> 4 == 0) | (uint)((in_r12 & 8) != 0) << 3;
  bVar2 = false;
  uVar9 = unaff_r22;
LAB_000575e8:
  uVar8 = (uint)*(char *)(uVar14 + 0x10);
  *(char *)(in_r10 + 0x6284) = (char)uVar9;
  if (!bVar2) {
    bVar2 = SCARRY4(iVar11,-0xb);
    iVar13 = iVar11 + -0xb;
    goto FUN_000575f2;
  }
  do {
    uVar4 = (undefined2)iVar5;
    uVar7 = (undefined1)uVar8;
    if (SUB41(uVar15 >> 3,0) || (bool)((byte)uVar15 & 1)) {
LAB_0005764a:
      *(undefined1 *)(uVar14 + 6) = uVar7;
      uVar9 = (uint)*(char *)(uVar9 + 0x7083);
      iVar5 = (int)&stack0x00000000 - uVar6;
      bVar3 = (byte)(uVar6 >> 0x1f);
      uVar6 = (int)&stack0x00000000 - uVar6;
      __saturate(uVar6);
      iVar11 = (int)*(char *)(param_3 + -0xf84);
      if ((byte)((uint)&stack0x00000000 >> 0x1f) != bVar3 && bVar3 == (byte)((uint)iVar5 >> 0x1f)) {
        iVar5 = (int)*(short *)(uVar14 + 2);
        *(short *)(iVar11 + 0x2e74) = (short)unaff_lp;
        *(short *)(iVar11 + 0x18d2) = (short)unaff_lp;
        *(uint *)(iVar11 + 0x1902) = unaff_lp;
        *(undefined2 *)(uVar14 + 0x44) = 0xb;
        unaff_r25 = (int)*(short *)(uVar14 + 0x5c);
        bVar2 = SCARRY4(iVar11 + -0x14,-10);
        iVar12 = iVar11 + -0x1e;
        uVar8 = unaff_r22;
        if (iVar11 + -0x1e < 0) {
          do {
            uVar4 = (undefined2)iVar5;
            uVar7 = (undefined1)uVar9;
            *(undefined1 *)(in_r10 + 0x628c) = uVar7;
            bVar1 = true;
            if (bVar2) goto LAB_000575d6;
            *(char *)(uVar14 + 0x4d) = (char)unaff_r25;
            iVar11 = iVar12 + -0x1f;
            bVar1 = uVar10 == 0x80000000;
            uVar10 = uVar10 / unaff_r23;
            uVar15 = (uint)(9 < iVar12 - 0x15U) << 3 | (uint)(uVar10 == 0);
            *(undefined1 *)(in_r10 + 0x628e) = uVar7;
            bVar2 = true;
            if (bVar1 && unaff_r23 == 0xffffffff || unaff_r23 == 0) goto LAB_000575e8;
            iVar13 = iVar12 + -0x2a;
            *(undefined1 *)(in_r10 + 0x6290) = uVar7;
            bVar2 = true;
            if (SCARRY4(iVar11,-0xb)) {
FUN_000575f2:
              *(char *)(in_r10 + 0x6286) = (char)uVar9;
              if (bVar2) goto LAB_000575b8;
              bVar2 = SCARRY4(iVar13,-0xb);
            }
            else {
              *(undefined1 *)(in_r10 + 0x6292) = uVar7;
              bVar2 = true;
              if (!SCARRY4(iVar13,-0xb)) goto code_r0x0005763e;
            }
            uVar8 = (uint)*(char *)(uVar14 + 0x10);
            *(char *)(in_r10 + 0x6288) = (char)uVar9;
            if (bVar2) goto LAB_000575c2;
            iVar12 = iVar13 + -0x16;
            uVar8 = (uint)*(char *)(uVar14 + 0x10);
            *(char *)(in_r10 + 0x628a) = (char)uVar9;
            bVar2 = true;
            if (SCARRY4(iVar13 + -0xb,-0xb)) goto LAB_000575cc;
            bVar2 = SCARRY4(iVar12,-0xb);
            iVar12 = iVar13 + -0x21;
            uVar8 = (int)*(char *)(uVar14 + 0x10);
          } while( true );
        }
        *(short *)(uVar14 + 0x34) = unaff_gp + -0x1daa;
        __saturate(uVar10 - 1);
        uVar14 = uVar14 | param_1;
        uVar9 = 0xfffffff1;
        uVar4 = (undefined2)*(undefined4 *)(uVar14 + 0x60);
        unaff_r22 = unaff_r22 | in_r1;
        *(short *)(uVar14 + 0xee) = (short)unaff_r22;
        __saturate(uVar6 * 0x80 + param_2);
      }
      __saturate(unaff_r22 + uVar9);
      *(undefined2 *)(uVar14 + 0xd0) = uVar4;
      (*(code *)&LAB_00000030)();
      return;
    }
LAB_000575b8:
    iVar5 = (int)*(short *)(uVar14 + 0xcc);
    *(int *)(uVar14 + 0x7c) = iVar5;
    uVar8 = 0xffffffff;
    uVar10 = (uint)*(ushort *)(uVar14 + 0x1a);
LAB_000575c2:
    bVar2 = false;
    iVar12 = (int)(char)(&DAT_ffffe256)[param_3];
    *(short *)(uVar14 + 0x38) = (short)unaff_r23;
LAB_000575cc:
    *(char *)(in_r10 + 0x627e) = (char)uVar9;
    if (bVar2) {
LAB_00057590:
      uVar8 = uVar8 / uVar9;
      uVar10 = (uint)*(ushort *)(uVar14 + 0x1a);
      *(short *)(uVar14 + 0x60) = (short)iVar5;
    }
    else {
      bVar1 = SCARRY4(iVar12,-0xb);
      iVar12 = iVar12 + -0xb;
      uVar8 = (uint)*(char *)(uVar14 + 0x10);
LAB_000575d6:
      *(char *)(in_r10 + 0x6280) = (char)uVar9;
      if (bVar1) {
        uVar14 = (uint)*(ushort *)(uVar14 + 0x18);
        goto LAB_00057590;
      }
      uVar8 = (uint)*(char *)(uVar14 + 0x10);
      *(char *)(in_r10 + 0x6282) = (char)uVar9;
      if (!SCARRY4(iVar12,-0xb)) goto code_r0x000575e6;
    }
    uVar6 = unaff_r23 | 0x1ff;
    uVar8 = uVar8 & uVar9;
    uVar15 = uVar8 == 0 | 8;
  } while( true );
code_r0x0005763e:
  uVar7 = *(undefined1 *)(uVar14 + 0x10);
  goto LAB_0005764a;
code_r0x000575e6:
  bVar2 = SCARRY4(iVar12 - 0xbU,-0xb);
  uVar15 = (uint)(10 < iVar12 - 0xbU) << 3 | (uint)(iVar12 == 0x16);
  iVar11 = iVar12 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_000575f2 @ 000575f2 (size 236) ====

void FUN_000575f2(uint param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  uint in_r1;
  short unaff_gp;
  undefined2 uVar4;
  int in_r10;
  uint in_r14;
  undefined1 uVar5;
  uint uVar6;
  uint in_r16;
  uint unaff_r22;
  uint unaff_r23;
  int unaff_r25;
  uint unaff_r26;
  int unaff_r28;
  int iVar7;
  int iVar8;
  uint unaff_ep;
  undefined4 unaff_lp;
  uint uVar9;
  uint in_PSW;
  
code_r0x000575f2:
  *(char *)(in_r10 + 0x6286) = (char)in_r16;
  if (((byte)(in_PSW >> 2) & 1) == 1) goto LAB_000575b8;
  bVar1 = SCARRY4(unaff_r28,-0xb);
LAB_000575fc:
  uVar6 = (uint)*(char *)(unaff_ep + 0x10);
  *(char *)(in_r10 + 0x6288) = (char)in_r16;
  if (bVar1) goto LAB_000575c2;
  iVar7 = unaff_r28 + -0x16;
  uVar6 = (uint)*(char *)(unaff_ep + 0x10);
  *(char *)(in_r10 + 0x628a) = (char)in_r16;
  bVar1 = true;
  if (SCARRY4(unaff_r28 + -0xb,-0xb)) goto LAB_000575cc;
  bVar1 = SCARRY4(iVar7,-0xb);
  iVar7 = unaff_r28 + -0x21;
  uVar6 = (int)*(char *)(unaff_ep + 0x10);
  do {
    uVar4 = (undefined2)param_4;
    uVar5 = (undefined1)in_r16;
    *(undefined1 *)(in_r10 + 0x628c) = uVar5;
    bVar3 = true;
    if (bVar1) goto LAB_000575d6;
    *(char *)(unaff_ep + 0x4d) = (char)unaff_r25;
    iVar8 = iVar7 + -0x1f;
    bVar3 = unaff_r26 == 0x80000000;
    unaff_r26 = unaff_r26 / unaff_r23;
    uVar9 = (uint)(9 < iVar7 - 0x15U) << 3 | (uint)(unaff_r26 == 0);
    *(undefined1 *)(in_r10 + 0x628e) = uVar5;
    bVar1 = true;
    if (bVar3 && unaff_r23 == 0xffffffff || unaff_r23 == 0) {
LAB_000575e8:
      uVar6 = (uint)*(char *)(unaff_ep + 0x10);
      *(char *)(in_r10 + 0x6284) = (char)in_r16;
      if (bVar1) {
        do {
          uVar4 = (undefined2)param_4;
          uVar5 = (undefined1)uVar6;
          if (SUB41(uVar9 >> 3,0) || (bool)((byte)uVar9 & 1)) goto LAB_0005764a;
LAB_000575b8:
          param_4 = (int)*(short *)(unaff_ep + 0xcc);
          *(int *)(unaff_ep + 0x7c) = param_4;
          uVar6 = 0xffffffff;
          unaff_r26 = (uint)*(ushort *)(unaff_ep + 0x1a);
LAB_000575c2:
          bVar1 = false;
          iVar7 = (int)(char)(&DAT_ffffe256)[param_3];
          *(short *)(unaff_ep + 0x38) = (short)unaff_r23;
LAB_000575cc:
          *(char *)(in_r10 + 0x627e) = (char)in_r16;
          if (bVar1) {
            uVar6 = uVar6 / in_r16;
            unaff_r26 = (uint)*(ushort *)(unaff_ep + 0x1a);
code_r0x0005759c:
            *(short *)(unaff_ep + 0x60) = (short)param_4;
          }
          else {
            bVar3 = SCARRY4(iVar7,-0xb);
            iVar7 = iVar7 + -0xb;
            uVar6 = (uint)*(char *)(unaff_ep + 0x10);
LAB_000575d6:
            *(char *)(in_r10 + 0x6280) = (char)in_r16;
            if (bVar3) {
              unaff_ep = (uint)*(ushort *)(unaff_ep + 0x18);
              goto code_r0x0005759c;
            }
            uVar6 = (uint)*(char *)(unaff_ep + 0x10);
            *(char *)(in_r10 + 0x6282) = (char)in_r16;
            if (!SCARRY4(iVar7,-0xb)) goto code_r0x000575e6;
          }
          in_r14 = unaff_r23 | 0x1ff;
          uVar6 = uVar6 & in_r16;
          uVar9 = uVar6 == 0 | 8;
        } while( true );
      }
      in_PSW = (uint)SCARRY4(iVar8,-0xb) << 2;
      unaff_r28 = iVar8 + -0xb;
      goto code_r0x000575f2;
    }
    in_PSW = (uint)SCARRY4(iVar8,-0xb) << 2;
    unaff_r28 = iVar7 + -0x2a;
    *(undefined1 *)(in_r10 + 0x6290) = uVar5;
    if (SCARRY4(iVar8,-0xb)) goto code_r0x000575f2;
    *(undefined1 *)(in_r10 + 0x6292) = uVar5;
    bVar1 = true;
    if (SCARRY4(unaff_r28,-0xb)) goto LAB_000575fc;
    uVar5 = *(undefined1 *)(unaff_ep + 0x10);
LAB_0005764a:
    *(undefined1 *)(unaff_ep + 6) = uVar5;
    in_r16 = (uint)*(char *)(in_r16 + 0x7083);
    iVar7 = (int)&stack0x00000000 - in_r14;
    bVar2 = (byte)(in_r14 >> 0x1f);
    in_r14 = (int)&stack0x00000000 - in_r14;
    __saturate(in_r14);
    iVar8 = (int)*(char *)(param_3 - 0xf84);
    if ((byte)((uint)&stack0x00000000 >> 0x1f) == bVar2 || bVar2 != (byte)((uint)iVar7 >> 0x1f))
    goto LAB_000576c6;
    param_4 = (int)*(short *)(unaff_ep + 2);
    *(short *)(iVar8 + 0x2e74) = (short)unaff_lp;
    *(short *)(iVar8 + 0x18d2) = (short)unaff_lp;
    *(undefined4 *)(iVar8 + 0x1902) = unaff_lp;
    *(undefined2 *)(unaff_ep + 0x44) = 0xb;
    unaff_r25 = (int)*(short *)(unaff_ep + 0x5c);
    bVar1 = SCARRY4(iVar8 + -0x14,-10);
    iVar7 = iVar8 + -0x1e;
    uVar6 = unaff_r22;
    if (-1 < iVar8 + -0x1e) {
      *(short *)(unaff_ep + 0x34) = unaff_gp + -0x1daa;
      __saturate(unaff_r26 - 1);
      param_3 = in_r1 | 0x8e05;
      unaff_ep = unaff_ep | param_1;
      in_r16 = 0xfffffff1;
      uVar4 = (undefined2)*(undefined4 *)(unaff_ep + 0x60);
      unaff_r22 = unaff_r22 | in_r1;
      *(short *)(unaff_ep + 0xee) = (short)unaff_r22;
      __saturate(in_r14 * 0x80 + param_2);
LAB_000576c6:
      __saturate(unaff_r22 + in_r16);
      *(undefined2 *)(unaff_ep + 0xd0) = uVar4;
      (*(code *)&LAB_00000030)(param_1,param_2,param_3);
      return;
    }
  } while( true );
code_r0x000575e6:
  bVar1 = SCARRY4(iVar7 - 0xbU,-0xb);
  uVar9 = (uint)(10 < iVar7 - 0xbU) << 3 | (uint)(iVar7 == 0x16);
  iVar8 = iVar7 + -0x16;
  goto LAB_000575e8;
}


// ==== FUN_00057c0a @ 00057c0a (size 420) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00057c0a(int param_1,short param_2,undefined2 param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  int in_r1;
  int unaff_tp;
  undefined2 uVar4;
  int iVar5;
  int extraout_r11;
  int in_r12;
  short sVar6;
  uint uVar7;
  uint in_r15;
  uint uVar8;
  int in_r16;
  uint in_r17;
  int unaff_r22;
  uint unaff_r23;
  int unaff_r24;
  int unaff_ep;
  uint uVar9;
  uint uVar10;
  
  __saturate(unaff_tp - in_r16);
  *(char *)(in_r12 + -0x7afb) = (char)(in_r15 >> 0x11);
  uVar4 = *(undefined2 *)(unaff_ep + 0x60);
  *(ushort *)(unaff_ep + 0xac) = (ushort)(in_r15 >> 0x11);
  uVar8 = -(in_r15 >> 0x11);
  __saturate(uVar8);
  uVar2 = *(ushort *)(unaff_ep + 0x1a);
  func_0xfff8c048();
  FUN_00065e7a();
  func_0xffef6caa();
  *(char *)(in_r1 + 0x7c86) = (char)unaff_tp;
  uVar9 = (uint)*(ushort *)(uVar2 + 0x1a);
  uVar8 = uVar8 / in_r17;
  uVar7 = unaff_r23;
  func_0xfffb6054();
  sVar6 = (short)uVar7;
  func_0xfffb2052();
  uVar2 = *(ushort *)(unaff_r24 + 0x7e);
  uVar10 = (uint)uVar2;
  uVar7 = (int)(short)(sVar6 * 7) * (int)param_2;
  uVar8 = uVar8 + in_r17;
  __saturate(uVar8);
  *(undefined2 *)(uVar9 + 0xcc) = uVar4;
  uVar3 = *(ushort *)(uVar9 + 0x1a);
  uVar4 = 0x7c6e;
  func_0xfffac092();
  *(undefined2 *)(uVar3 + 0x86) = param_3;
  uVar9 = (uint)(uVar3 | uVar2);
  *(short *)(uVar9 + 0x2c) = (short)uVar8;
  *(char *)(*(short *)(uVar9 + 0x4e) + 0x1078) = (char)in_r17;
  *(undefined2 *)(uVar10 - 0x61c) = uVar4;
  uVar9 = (uint)*(ushort *)(uVar9 + 0x1a);
  iVar5 = func_0xfff5f924();
  if (CARRY4(in_r17,uVar8) || in_r17 + uVar8 == 0) {
    in_r1 = in_r1 + *(int *)(uVar9 + 0x54);
  }
  else if ((int)(in_r17 + uVar8) < 0 == SCARRY4(in_r17,uVar8)) {
    *(int *)(uVar9 + 0x7c) = (int)*(short *)(uVar9 + 0xc6);
    func_0x001af5be();
    __saturate(param_1 + -6);
    __saturate(param_1 + -6);
    (*(code *)&LAB_00000030)();
    return;
  }
  uVar8 = unaff_r23 - (uVar7 >> 0x17) | unaff_r23;
  *(int *)(uVar9 + 0x7c) = (int)*(short *)(uVar9 + 0xc6);
  *(undefined2 *)(uVar9 + 0xc) = 0xffff;
  func_0x00086186();
  __saturate(uVar8 + 7);
  func_0xfffa5fec();
  *(uint *)(iVar5 + 0x8995) = uVar10;
  bVar1 = (&DAT_ffffa503)[extraout_r11];
  uVar2 = *(ushort *)(uVar9 + 0x1a);
  *(uint *)(uVar10 - 0x56fe) = (uint)bVar1;
  uVar2 = *(ushort *)(uVar2 + 0x1a);
  *(uint *)(uVar10 + 0x7c0e) = (uint)bVar1;
  uVar8 = (uint)*(byte *)(extraout_r11 + 0x7887);
  *(uint *)(uVar10 - 0x5afe) = uVar8;
  *(uint *)(uVar10 - 0x56fe) = uVar8;
  *(uint *)(uVar10 + 0x7c9e) = uVar8;
  *(uint *)(iVar5 + 0x8995) = uVar10;
  *(uint *)(&DAT_ffffa402 + uVar10) = uVar8;
  __saturate(-(int)DAT_ffffe0ff);
  __saturate(in_r1 + DAT_ffffe0ff);
  __saturate(unaff_r23 - 0x1ff);
  __saturate(*(short *)(uVar2 + 0xc) + unaff_r22);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00058382 @ 00058382 (size 150) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00058382(undefined4 param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  int in_r2;
  int in_r10;
  uint uVar3;
  uint in_r16;
  int unaff_r23;
  undefined2 *unaff_ep;
  undefined2 *puVar4;
  
  *(byte *)(in_r16 - 0xf84) = *(byte *)(in_r16 - 0xf84) | 4;
  uVar2 = (undefined2)~in_r16;
  *unaff_ep = uVar2;
  unaff_ep[0x22] = param_3;
  puVar4 = (undefined2 *)(uint)(ushort)unaff_ep[0xd];
  *(byte *)(in_r16 + 0x7887) = *(byte *)(in_r16 + 0x7887) | 4;
  puVar4[0x10] = uVar2;
  puVar4[0x22] = param_3;
  uVar3 = param_2 - ~in_r16;
  __saturate(uVar3);
  *puVar4 = (short)uVar3;
  uVar1 = puVar4[0xc];
  *(byte *)(in_r16 - 0x2e83) = *(byte *)(in_r16 - 0x2e83) | 4;
  *(byte *)(in_r10 + 0x4ce8) = *(byte *)(in_r10 + 0x4ce8) | 4;
  *(byte *)(in_r2 + 0x4447) = *(byte *)(in_r2 + 0x4447) | 4;
  DAT_00007880 = DAT_00007880 | 4;
  __saturate(unaff_r23 + 9);
  __saturate(uVar3 / in_r16 + in_r16);
  *(uint *)(DAT_00007217 + 0x2ef2) = (uint)*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000584e6 @ 000584e6 (size 328) ====

void FUN_000584e6(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  uint uVar6;
  int in_r1;
  int iVar7;
  int in_r12;
  int in_r13;
  uint uVar8;
  int in_r19;
  undefined4 unaff_r27;
  int iVar9;
  int unaff_r29;
  int unaff_ep;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 unaff_lp;
  
  uVar8 = 0xfffffff0;
  uVar3 = *(ushort *)(unaff_ep + 0x18);
  func_0x00100170();
  uVar10 = (uint)*(ushort *)(uVar3 + 0x18);
  func_0xe705d120();
  uVar4 = (undefined2)*(undefined4 *)(uVar10 + 0x60);
  *(undefined2 *)(uVar10 + 0x60) = uVar4;
  iVar7 = *(int *)(uVar10 + 0x48);
  *(byte *)(param_1 + 0x7c20) = *(byte *)(param_1 + 0x7c20) | 4;
  (&DAT_00007817)[in_r13] = (&DAT_00007817)[in_r13] | 4;
  sVar2 = *(short *)(uVar10 + 0x40);
  *(byte *)(param_1 + 0x44a3) = *(byte *)(param_1 + 0x44a3) | 4;
  *(undefined2 *)(uVar10 + 0xc4) = uVar4;
  uVar5 = (undefined1)uVar8;
  *(undefined1 *)(iVar7 + 0x8c4) = uVar5;
  uVar6 = -(int)sVar2;
  __saturate(uVar6);
  *(byte *)(param_2 + -0xe1c) = *(byte *)(param_2 + -0xe1c) | 4;
  *(undefined1 *)(uVar10 + 1) = 0;
  *(short *)(uVar10 + 0x2c) = (short)uVar6;
  *(byte *)(in_r12 + 0x7297) = *(byte *)(in_r12 + 0x7297) | 4;
  uVar3 = *(ushort *)(uVar10 + 0x1a);
  __saturate(unaff_r29 + -0x17bd);
  __saturate(unaff_r29 + -0x17c7);
  (&DAT_ffff9f7e)[in_r13] = (&DAT_ffff9f7e)[in_r13] | 4;
  *(undefined4 *)(unaff_r29 + -0x1753) = unaff_lp;
  puVar11 = (undefined1 *)(int)*(char *)(unaff_r29 + -0x178c);
  __saturate(puVar11 + -5);
  cVar1 = *(char *)(iVar7 + -0x7d85);
  __saturate(uVar3 + 0xb);
  *(short *)(cVar1 + 0x2fa6) = (short)unaff_lp;
  *(short *)(cVar1 + 0x2fa2) = (short)unaff_lp;
  *(undefined1 *)(iVar7 + 0x8c4) = uVar5;
  *puVar11 = 0;
  uVar10 = (uint)DAT_ffffe481;
  *(short *)(puVar11 + -5) = (short)DAT_ffffe481;
  iVar12 = (int)(char)puVar11[0x77];
  *(uint *)(iVar12 + 0x5c) = uVar6 / uVar8;
  iVar9 = in_r1 - (uVar10 >> 2);
  __saturate(iVar9);
  __saturate(in_r1 - iVar9);
  *(int *)(iVar12 + 4) = (int)*(char *)(iVar12 + 0xb);
  *(ushort *)(iVar12 + 0x3e) = *(ushort *)(iVar12 + 0x1e) | (ushort)param_1;
  uVar3 = *(ushort *)(*(ushort *)(*(ushort *)(iVar12 + 0x18) + 0x18) + 0x18);
  *(undefined1 *)(iVar7 + 0x8c4) = uVar5;
  *(undefined1 *)(uVar3 + 5) = 0;
  __saturate(-(int)DAT_ffffe081);
  *(undefined4 *)(unaff_r29 + 0x178a) = unaff_r27;
                    /* WARNING: Could not recover jumptable at 0x0005862c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005862e + *(short *)(&DAT_0005862e + in_r19 * -0xb1f4) * 2))();
  return;
}


// ==== FUN_000588fa @ 000588fa (size 22) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00058b28) overlaps instruction at (ram,0x00058b26)
    */

void FUN_000588fa(undefined4 param_1,uint param_2,int param_3)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined1 uVar4;
  int in_r1;
  uint uVar5;
  int in_r2;
  int unaff_gp;
  int iVar6;
  undefined2 uVar7;
  int extraout_r11;
  uint in_r12;
  uint uVar8;
  uint in_r17;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  int iVar9;
  int unaff_r27;
  int unaff_r28;
  int unaff_ep;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  *(byte *)(unaff_r27 + 0x7397) = *(byte *)(unaff_r27 + 0x7397) | 4;
  uVar8 = 0xffffffff;
  uVar7 = *(undefined2 *)(unaff_ep + 0x50);
  *(byte *)(unaff_r28 + 0x4c28) = *(byte *)(unaff_r28 + 0x4c28) | 4;
  sVar3 = *(short *)(unaff_ep + 0x18);
  func_0xfff5105c();
  uVar5 = in_r1 + unaff_gp;
  __saturate(uVar5);
  func_0x00000a34();
  iVar10 = (int)sVar3 * (int)(short)unaff_gp;
  *(undefined1 *)(iVar10 + 0xb) = 0;
  __saturate(iVar10 + -5);
  __saturate(*(ushort *)(iVar10 + 0x18) - 1);
  uVar11 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(iVar10 + 0x13) + 0x18) + 0x18);
  *(undefined2 *)(uVar11 + 0xda) = uVar7;
  pbVar12 = (byte *)(uint)*(ushort *)(uVar11 + 0x18);
  __saturate(uVar8 | uVar5);
  uVar15 = (uint)*(ushort *)(pbVar12 + 0x18);
  uVar8 = (uint)*pbVar12;
  iVar13 = *(int *)(*(ushort *)(uVar8 + 0x18) + 0x28);
  *(undefined2 *)(iVar13 + 0x60) = *(undefined2 *)(uVar8 + 0xdc);
  *(short *)(iVar13 + 0x2c) = *(short *)(iVar13 + 0xac);
  uVar8 = unaff_r23 << 7 & param_2;
  uVar11 = (int)*(short *)(iVar13 + 0xac) & 0xfffffff1;
  *(short *)(iVar13 + 0x2c) = (short)uVar11;
  iVar10 = uVar11 - uVar5;
  __saturate(iVar10);
  *(undefined2 *)(iVar13 + 0xc4) = *(undefined2 *)(iVar13 + 200);
  iVar10 = -iVar10;
  __saturate(iVar10);
  uVar11 = (uint)*(ushort *)(iVar13 + 0x18);
  *(undefined2 *)(uVar11 + 0x60) = *(undefined2 *)(iVar13 + 200);
  uVar7 = *(undefined2 *)(uVar11 + 0x60);
  *(char *)(uVar11 + 0x17) = (char)uVar8;
  iVar13 = unaff_r23 - uVar8;
  __saturate(iVar13);
  __saturate(iVar10 + unaff_r23);
  *(undefined2 *)(uVar11 + 0x48) = uVar7;
  __saturate(unaff_gp - *(short *)(uVar11 + 0x22));
  iVar10 = *(int *)(*(ushort *)(uVar11 + 0x18) + 0xf8);
  sVar3 = *(short *)(iVar10 + 0xc);
  cVar1 = *(char *)(iVar10 + 0x78);
  *(char *)(param_3 + 0x8c4) = (char)unaff_r23;
  *(undefined1 *)(iVar10 + 7) = 0;
  sVar2 = *(short *)(iVar10 + 0x42);
  *(short *)(iVar10 + -0x984) = (short)in_r19;
  __saturate(unaff_gp);
  uVar11 = (uint)*(ushort *)(iVar10 + 0x18);
  iVar6 = 0x7c067d57;
  __saturate(iVar13 + 7);
  *(undefined2 *)(uVar11 + 0x60) = uVar7;
  uVar8 = (uint)(int)sVar3 / unaff_r23 & unaff_r23;
  *(short *)(uVar11 + 0x2c) = (short)uVar8;
  __saturate((~param_2 << 7 & param_2) * 0x80 + param_2);
  iVar10 = uVar8 + unaff_r23;
  __saturate(iVar10);
  *(undefined2 *)(uVar11 + 0xd4) = *(undefined2 *)(uVar11 + 0xde);
  __saturate(-iVar10);
  uVar8 = (uint)*(ushort *)(uVar11 + 0x18);
  *(int *)(uVar8 + 0x20) = (int)cVar1;
  iVar10 = 0x7c067d57 - (uVar15 & 0xf07c);
  __saturate(iVar10);
  iVar13 = (int)DAT_ffffe700;
  *(int *)(uVar8 + 0x20) = (int)cVar1;
  __saturate(unaff_gp - iVar13);
  iVar9 = (int)*(short *)(*(int *)(uVar8 + 0xf8) + 0x16);
  __saturate(iVar9);
  uVar8 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(*(int *)(uVar8 + 0xf8) + 0x18) + 0x18) + 0x18);
  __saturate(iVar10 + in_r17);
  in_r17 = (uint)(int)*(short *)(uVar8 + 0xc) / in_r17;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x18);
  *(short *)(uVar8 + 0x3e) = (short)in_r17;
  *(undefined4 *)(&DAT_ffffa702 + uVar8) = in_r19;
  in_r17 = in_r17 / 0x7c067d57;
  sVar3 = *(short *)(uVar8 + 6);
  iVar13 = (int)*(short *)(sVar3 + 0x2f2e);
  iVar14 = uVar8 - 5;
  __saturate(iVar14);
  iVar10 = unaff_gp;
  while( true ) {
    uVar8 = *(uint *)(iVar14 + 4);
    *(char *)(iVar13 + 0xff) = (char)iVar10;
    __saturate(iVar10);
    uVar15 = (short)uVar15 + iVar9;
    iVar10 = *(int *)(iVar14 + 0x20);
    *(int *)(iVar14 + 4) = (int)sVar3;
    iVar13 = (int)DAT_ffffe700;
    *(short *)(iVar14 + 0x3e) = (short)in_r17;
    uVar4 = (undefined1)iVar10;
    *(undefined1 *)(sVar2 + 0x32a) = uVar4;
    *(undefined1 *)(param_2 + 0x40) = uVar4;
    *(undefined1 *)(extraout_r11 + 0x2fbc) = uVar4;
    *(undefined1 *)((in_r12 >> 0xd) + 0x2fbd) = uVar4;
    if ((int)(uVar8 | uVar5) < 0) break;
    iVar14 = iVar13 + -0x2f34;
    __saturate(iVar14);
    iVar13 = *(int *)(iVar9 + -0xdc6);
  }
  iVar13 = uVar5 - iVar13;
  __saturate(iVar13);
  func_0x00016dc4();
  *(char *)(iVar14 + 0x2a) = (char)unaff_gp;
  iVar10 = *(int *)(iVar14 + 0xf8);
  FUN_000212c0();
  FUN_00057c0a();
  func_0x00013798();
  *(int *)(iVar13 + 0x2fbc) = iVar10;
  *(byte *)(in_r2 + -0xa84) = *(byte *)(in_r2 + -0xa84) | 0x20;
  FUN_000212f6();
  DAT_ffff8005 = DAT_ffff8005 | 0x20;
  sVar3 = *(short *)(iVar10 + 2);
  *(int *)(iVar13 + 0x2fb2) = iVar10;
  uVar7 = *(undefined2 *)(iVar10 + 0x18);
  (&DAT_ffffe256)[uVar5] = (&DAT_ffffe256)[uVar5] | 0x20;
  *(int *)(iVar13 + 0x2de) = iVar10;
  __saturate(iVar13 + -0x2f01);
  *(byte *)(unaff_gp + -0x2a84) = *(byte *)(unaff_gp + -0x2a84) | 0x20;
  *(byte *)(unaff_gp + 0x7c0f) = *(byte *)(unaff_gp + 0x7c0f) | 0x20;
  *(undefined2 *)(iVar13 + 0x2fba) = uVar7;
  *(char *)(iVar13 + -0x2eab) = (char)(in_r17 / unaff_r22);
  *(byte *)(unaff_gp + -0x56fe) = *(byte *)(unaff_gp + -0x56fe) | 0x20;
  *(byte *)(in_r2 + -0xf84) = *(byte *)(in_r2 + -0xf84) | 0x20;
  *(byte *)(unaff_gp + 0x6c11) = *(byte *)(unaff_gp + 0x6c11) | 0x20;
  *(uint *)(iVar13 + -0x2ee1) = param_2;
  DAT_00060636 = DAT_00060636 | 0x20;
  __saturate(iVar6 - (uVar15 & 0xd07c));
  *(uint *)(iVar13 + -0x2ee1) = unaff_r22;
  *(char *)(sVar3 + 0x8c4) = (char)unaff_r22;
  iVar10 = (int)(short)(iVar13 + -0x2f01) * (int)(short)unaff_gp;
  *(undefined1 *)(iVar10 + 0xc) = 0;
  bRam00050bc6 = bRam00050bc6 | 0x20;
  __saturate(*(ushort *)(iVar10 + 0x18) + 0xb);
  __synchronize();
  *(char *)(uVar5 - 0x754c) = (char)in_r2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00058910 @ 00058910 (size 840) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00058b28) overlaps instruction at (ram,0x00058b26)
    */

void FUN_00058910(undefined4 param_1,uint param_2,int param_3,undefined2 param_4)

{
  char cVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  int in_r1;
  uint uVar6;
  int in_r2;
  int unaff_gp;
  int iVar7;
  int extraout_r11;
  uint in_r12;
  uint in_r15;
  uint uVar8;
  uint in_r17;
  undefined4 in_r19;
  uint unaff_r22;
  uint unaff_r23;
  int iVar9;
  int unaff_ep;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  sVar4 = *(short *)(unaff_ep + 0x18);
  func_0xfff5105c();
  uVar6 = in_r1 + unaff_gp;
  __saturate(uVar6);
  func_0x00000a34();
  iVar10 = (int)sVar4 * (int)(short)unaff_gp;
  *(undefined1 *)(iVar10 + 0xb) = 0;
  __saturate(iVar10 + -5);
  __saturate(*(ushort *)(iVar10 + 0x18) - 1);
  uVar11 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(iVar10 + 0x13) + 0x18) + 0x18);
  *(undefined2 *)(uVar11 + 0xda) = param_4;
  pbVar12 = (byte *)(uint)*(ushort *)(uVar11 + 0x18);
  __saturate(in_r15 | uVar6);
  uVar15 = (uint)*(ushort *)(pbVar12 + 0x18);
  uVar11 = (uint)*pbVar12;
  iVar13 = *(int *)(*(ushort *)(uVar11 + 0x18) + 0x28);
  *(undefined2 *)(iVar13 + 0x60) = *(undefined2 *)(uVar11 + 0xdc);
  *(short *)(iVar13 + 0x2c) = *(short *)(iVar13 + 0xac);
  uVar11 = unaff_r23 << 7 & param_2;
  uVar8 = (int)*(short *)(iVar13 + 0xac) & 0xfffffff1;
  *(short *)(iVar13 + 0x2c) = (short)uVar8;
  iVar10 = uVar8 - uVar6;
  __saturate(iVar10);
  *(undefined2 *)(iVar13 + 0xc4) = *(undefined2 *)(iVar13 + 200);
  iVar10 = -iVar10;
  __saturate(iVar10);
  uVar8 = (uint)*(ushort *)(iVar13 + 0x18);
  *(undefined2 *)(uVar8 + 0x60) = *(undefined2 *)(iVar13 + 200);
  uVar2 = *(undefined2 *)(uVar8 + 0x60);
  *(char *)(uVar8 + 0x17) = (char)uVar11;
  iVar13 = unaff_r23 - uVar11;
  __saturate(iVar13);
  __saturate(iVar10 + unaff_r23);
  *(undefined2 *)(uVar8 + 0x48) = uVar2;
  __saturate(unaff_gp - *(short *)(uVar8 + 0x22));
  iVar10 = *(int *)(*(ushort *)(uVar8 + 0x18) + 0xf8);
  sVar4 = *(short *)(iVar10 + 0xc);
  cVar1 = *(char *)(iVar10 + 0x78);
  *(char *)(param_3 + 0x8c4) = (char)unaff_r23;
  *(undefined1 *)(iVar10 + 7) = 0;
  sVar3 = *(short *)(iVar10 + 0x42);
  *(short *)(iVar10 + -0x984) = (short)in_r19;
  __saturate(unaff_gp);
  uVar8 = (uint)*(ushort *)(iVar10 + 0x18);
  iVar7 = 0x7c067d57;
  __saturate(iVar13 + 7);
  *(undefined2 *)(uVar8 + 0x60) = uVar2;
  uVar11 = (uint)(int)sVar4 / unaff_r23 & unaff_r23;
  *(short *)(uVar8 + 0x2c) = (short)uVar11;
  __saturate((~param_2 << 7 & param_2) * 0x80 + param_2);
  iVar10 = uVar11 + unaff_r23;
  __saturate(iVar10);
  *(undefined2 *)(uVar8 + 0xd4) = *(undefined2 *)(uVar8 + 0xde);
  __saturate(-iVar10);
  uVar11 = (uint)*(ushort *)(uVar8 + 0x18);
  *(int *)(uVar11 + 0x20) = (int)cVar1;
  iVar10 = 0x7c067d57 - (uVar15 & 0xf07c);
  __saturate(iVar10);
  iVar13 = (int)DAT_ffffe700;
  *(int *)(uVar11 + 0x20) = (int)cVar1;
  __saturate(unaff_gp - iVar13);
  iVar9 = (int)*(short *)(*(int *)(uVar11 + 0xf8) + 0x16);
  __saturate(iVar9);
  uVar11 = (uint)*(ushort *)(*(ushort *)(*(ushort *)(*(int *)(uVar11 + 0xf8) + 0x18) + 0x18) + 0x18)
  ;
  __saturate(iVar10 + in_r17);
  in_r17 = (uint)(int)*(short *)(uVar11 + 0xc) / in_r17;
  uVar11 = (uint)*(ushort *)(uVar11 + 0x18);
  *(short *)(uVar11 + 0x3e) = (short)in_r17;
  *(undefined4 *)(&DAT_ffffa702 + uVar11) = in_r19;
  in_r17 = in_r17 / 0x7c067d57;
  sVar4 = *(short *)(uVar11 + 6);
  iVar13 = (int)*(short *)(sVar4 + 0x2f2e);
  iVar14 = uVar11 - 5;
  __saturate(iVar14);
  iVar10 = unaff_gp;
  while( true ) {
    uVar11 = *(uint *)(iVar14 + 4);
    *(char *)(iVar13 + 0xff) = (char)iVar10;
    __saturate(iVar10);
    uVar15 = (short)uVar15 + iVar9;
    iVar10 = *(int *)(iVar14 + 0x20);
    *(int *)(iVar14 + 4) = (int)sVar4;
    iVar13 = (int)DAT_ffffe700;
    *(short *)(iVar14 + 0x3e) = (short)in_r17;
    uVar5 = (undefined1)iVar10;
    *(undefined1 *)(sVar3 + 0x32a) = uVar5;
    *(undefined1 *)(param_2 + 0x40) = uVar5;
    *(undefined1 *)(extraout_r11 + 0x2fbc) = uVar5;
    *(undefined1 *)((in_r12 >> 0xd) + 0x2fbd) = uVar5;
    if ((int)(uVar11 | uVar6) < 0) break;
    iVar14 = iVar13 + -0x2f34;
    __saturate(iVar14);
    iVar13 = *(int *)(iVar9 + -0xdc6);
  }
  iVar13 = uVar6 - iVar13;
  __saturate(iVar13);
  func_0x00016dc4();
  *(char *)(iVar14 + 0x2a) = (char)unaff_gp;
  iVar10 = *(int *)(iVar14 + 0xf8);
  FUN_000212c0();
  FUN_00057c0a();
  func_0x00013798();
  *(int *)(iVar13 + 0x2fbc) = iVar10;
  *(byte *)(in_r2 + -0xa84) = *(byte *)(in_r2 + -0xa84) | 0x20;
  FUN_000212f6();
  DAT_ffff8005 = DAT_ffff8005 | 0x20;
  sVar4 = *(short *)(iVar10 + 2);
  *(int *)(iVar13 + 0x2fb2) = iVar10;
  uVar2 = *(undefined2 *)(iVar10 + 0x18);
  (&DAT_ffffe256)[uVar6] = (&DAT_ffffe256)[uVar6] | 0x20;
  *(int *)(iVar13 + 0x2de) = iVar10;
  __saturate(iVar13 + -0x2f01);
  *(byte *)(unaff_gp + -0x2a84) = *(byte *)(unaff_gp + -0x2a84) | 0x20;
  *(byte *)(unaff_gp + 0x7c0f) = *(byte *)(unaff_gp + 0x7c0f) | 0x20;
  *(undefined2 *)(iVar13 + 0x2fba) = uVar2;
  *(char *)(iVar13 + -0x2eab) = (char)(in_r17 / unaff_r22);
  *(byte *)(unaff_gp + -0x56fe) = *(byte *)(unaff_gp + -0x56fe) | 0x20;
  *(byte *)(in_r2 + -0xf84) = *(byte *)(in_r2 + -0xf84) | 0x20;
  *(byte *)(unaff_gp + 0x6c11) = *(byte *)(unaff_gp + 0x6c11) | 0x20;
  *(uint *)(iVar13 + -0x2ee1) = param_2;
  DAT_00060636 = DAT_00060636 | 0x20;
  __saturate(iVar7 - (uVar15 & 0xd07c));
  *(uint *)(iVar13 + -0x2ee1) = unaff_r22;
  *(char *)(sVar4 + 0x8c4) = (char)unaff_r22;
  iVar10 = (int)(short)(iVar13 + -0x2f01) * (int)(short)unaff_gp;
  *(undefined1 *)(iVar10 + 0xc) = 0;
  bRam00050bc6 = bRam00050bc6 | 0x20;
  __saturate(*(ushort *)(iVar10 + 0x18) + 0xb);
  __synchronize();
  *(char *)(uVar6 - 0x754c) = (char)in_r2;
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
  int unaff_r27;
  int unaff_ep;
  
  uVar1 = *(undefined1 *)(in_r18 + -0x2f84);
  uVar2 = *(undefined4 *)(*(ushort *)(unaff_ep + 0x18) + 0xf8);
  *(undefined1 *)(in_r10 + 0x2fc) = uVar1;
  *(short *)(&DAT_ffffe256 + unaff_r27) = (short)uVar2;
  *(undefined1 *)(in_r10 + 0x34b) = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005a10c @ 0005a10c (size 302) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005a10c(void)

{
  ushort uVar1;
  int unaff_gp;
  undefined2 in_r9;
  int in_r10;
  int unaff_r20;
  int unaff_r21;
  int unaff_r22;
  int unaff_r23;
  int unaff_r24;
  int unaff_r25;
  int unaff_r26;
  int unaff_r27;
  int unaff_r28;
  int unaff_r29;
  int unaff_ep;
  uint uVar2;
  
  __saturate(unaff_gp + 0x2083);
  __saturate(in_r10 + 0x2083);
  __saturate(unaff_r20 + 0x1980);
  __saturate(unaff_r21 + 0x1980);
  __saturate(unaff_r22 + 0x1980);
  __saturate(unaff_r23 + 0x1980);
  __saturate(unaff_r24 + 0x1980);
  __saturate(unaff_r25 + 0x1980);
  __saturate(unaff_r26 + 0x1980);
  __saturate(unaff_r27 + 0x1980);
  __saturate(unaff_r28 + 0x1980);
  __saturate(unaff_r29 + 0x1980);
  __saturate(unaff_ep + 0x18f8);
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  (&DAT_00004c01)[unaff_gp] = (char)(unaff_ep + 0x18f8);
  (*(code *)0x0)();
  uVar2 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar2 + 0xc4) = in_r9;
  *(undefined2 *)(uVar2 + 0x2c) = *(undefined2 *)(uVar2 + 0x1e);
  *(undefined2 *)(uVar2 + 0x80) = in_r9;
  return;
}


// ==== FUN_0005b2e2 @ 0005b2e2 (size 490) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005b2e2(int param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  int unaff_gp;
  int unaff_tp;
  ushort in_r16;
  undefined2 unaff_r25;
  int unaff_ep;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  
  uVar6 = (uint)*(ushort *)(unaff_ep + 0x1a);
  __saturate(param_2 - (uint)*(ushort *)(unaff_ep + 2));
  *(ushort *)(uVar6 + 0x1e) = in_r16;
  uVar7 = (uint)*(ushort *)(uVar6 + 0x1a);
  __saturate(param_3 - (uint)*(ushort *)(uVar6 + 4));
  uVar2 = *(ushort *)(param_2 + -0x11e2);
  *(ushort *)(uVar7 + 0x1e) = in_r16;
  __saturate(unaff_gp - (uint)*(ushort *)(uVar7 + 6));
  *(undefined1 *)(uVar7 + 0x17) = *(undefined1 *)(uVar7 + 0x17);
  uVar5 = (undefined1)*(undefined2 *)(uVar7 + 0x1c);
  *(undefined1 *)(uVar7 + 0x27) = uVar5;
  cVar3 = *(char *)(uVar7 + 0x17);
  __saturate(unaff_tp - (uint)*(byte *)(uVar7 + 0xf));
  puVar8 = (ushort *)~(uVar2 - 0x7b71);
  *(undefined1 *)((int)puVar8 + 0x17) = *(undefined1 *)((int)puVar8 + 0x17);
  *(undefined1 *)((int)puVar8 + 0x27) = uVar5;
  uVar2 = puVar8[0xd];
  puVar8[0xf] = in_r16;
  bVar1 = cVar3 < '\0';
  uVar6 = (uint)bVar1 * -4 + (uint)uVar2 * (uint)!bVar1;
  __saturate(param_1 - (uint)*puVar8);
  uVar7 = ~uVar6;
  *(undefined1 *)(uVar7 + 0x17) = *(undefined1 *)(uVar7 + 0x17);
  *(char *)(uVar7 + 0x27) = (char)uVar2;
  *(ushort *)(uVar7 + 0x1e) = in_r16;
  uVar6 = (uint)((int)uVar6 < 0) * -5 + (uint)*(ushort *)(uVar7 + 0x18) * (uint)((int)uVar6 >= 0);
  uVar4 = *(undefined2 *)(uVar7 + 0x1e);
  __saturate(param_2 - (uint)*(ushort *)(uVar7 + 2));
  uVar7 = ~uVar6;
  *(undefined1 *)(uVar7 + 0x17) = *(undefined1 *)(uVar7 + 0x17);
  *(char *)(uVar7 + 0x27) = (char)uVar4;
  *(ushort *)(uVar7 + 0x1e) = in_r16;
  uVar4 = *(undefined2 *)(uVar7 + 0x1c);
  __saturate(param_3 - (uint)*(ushort *)(uVar7 + 4));
  uVar6 = ~((uint)((int)uVar6 < 0) * -6 + (uint)*(ushort *)(uVar7 + 0x16) * (uint)((int)uVar6 >= 0))
  ;
  *(undefined1 *)(uVar6 + 0x17) = *(undefined1 *)(uVar6 + 0x17);
  uVar2 = *(ushort *)(uVar6 + 6);
  *(char *)(uVar6 + 0x27) = (char)uVar4;
  *(ushort *)(uVar6 + 0x1e) = in_r16;
  *(undefined2 *)(uVar6 + 0x9a) = unaff_r25;
  *(undefined2 *)(uVar6 + 0x98) = unaff_r25;
  *(undefined2 *)(~(uint)uVar2 + 0x9a) = unaff_r25;
  *(undefined2 *)(~(uint)uVar2 + 0x98) = unaff_r25;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005b590 @ 0005b590 (size 282) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005b590(void)

{
  ushort uVar1;
  short sVar2;
  int in_r1;
  int in_r2;
  undefined2 in_r15;
  undefined4 in_r16;
  int in_r17;
  undefined1 in_r19;
  int unaff_r20;
  int unaff_r26;
  undefined4 unaff_r27;
  int unaff_ep;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined1 *)(unaff_r20 + -0x2c5) = in_r19;
  iVar3 = (int)*(char *)(unaff_ep + 0x3b);
  __saturate(iVar3 + -5);
  __saturate(unaff_r26 + 0xb);
  *(undefined4 *)(iVar3 + 0x77) = unaff_r27;
  uVar4 = (uint)*(ushort *)(iVar3 + 0x15);
  *(undefined2 *)(uVar4 + 0x40) = in_r15;
  __saturate(-(uint)*(byte *)(uVar4 + 10));
  uVar4 = (uint)*(ushort *)(*(char *)(uVar4 + 0x7d) + 0x1a);
  *(undefined2 *)(uVar4 + 0x60) = in_r15;
  __saturate(in_r1 - (uint)*(byte *)(uVar4 + 0xb));
  uVar5 = (uint)*(ushort *)(*(ushort *)(uVar4 + 0x1a) + 0x1a);
  __saturate(in_r2 - (uint)*(byte *)(*(ushort *)(uVar4 + 0x1a) + 0xc));
  sVar2 = (short)((int)in_r16 >> 0x1f);
  *(short *)(uVar5 + 0x1e) = sVar2;
  uVar4 = (uint)*(ushort *)(uVar5 + 0x1a);
  __saturate(0);
  uVar1 = *(ushort *)((in_r17 >> 0x1f) + -0x11e2);
  *(short *)(uVar4 + 0x1e) = sVar2;
  *(undefined1 *)(uVar4 + 0x17) = *(undefined1 *)(uVar4 + 0x17);
  *(char *)(uVar4 + 0x27) = (char)*(undefined2 *)(uVar4 + 0x1c);
  __saturate(-(uint)*(byte *)(uVar4 + 10));
  uVar4 = ~(uVar1 - 0x7b71);
  *(undefined1 *)(uVar4 + 0x17) = *(undefined1 *)(uVar4 + 0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005b9ac @ 0005b9ac (size 70) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005b9ac(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 in_r16;
  int unaff_r23;
  int unaff_ep;
  uint uVar3;
  uint in_PSW;
  
  bVar1 = (in_PSW >> 1 & 1) == 0;
  uVar2 = *(undefined2 *)(unaff_ep + 0x1e);
  uVar3 = ~((uint)bVar1 * -5 + unaff_r23 * (uint)!bVar1);
  *(undefined1 *)(uVar3 + 0x17) = *(undefined1 *)(uVar3 + 0x17);
  *(char *)(uVar3 + 0x27) = (char)uVar2;
  *(undefined2 *)(uVar3 + 0x1e) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005ba06 @ 0005ba06 (size 426) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005ba06(undefined4 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined2 uVar4;
  ushort uVar5;
  undefined1 uVar6;
  short sVar7;
  uint in_r1;
  undefined1 in_r14;
  uint in_r15;
  uint uVar8;
  uint in_r16;
  uint unaff_r20;
  undefined2 unaff_r25;
  undefined4 unaff_r27;
  int unaff_ep;
  int iVar9;
  uint uVar10;
  
  *(undefined1 *)(unaff_ep + 0x27) = in_r14;
  uVar8 = (in_r15 | in_r1) / in_r16;
  *(short *)(unaff_ep + 0x1e) = (short)in_r16;
  uVar4 = *(undefined2 *)(unaff_ep + 0x14);
  *(undefined2 *)(unaff_ep + 0x9a) = unaff_r25;
  *(undefined2 *)(unaff_ep + 0x98) = unaff_r25;
  __saturate(-uVar8);
  *(undefined2 *)(~unaff_r20 + 0x9a) = unaff_r25;
  *(undefined2 *)(~unaff_r20 + 0x98) = unaff_r25;
  __saturate(uVar8);
  *(undefined2 *)(~unaff_r20 + 0x9a) = unaff_r25;
  *(undefined2 *)(~unaff_r20 + 0x98) = unaff_r25;
  __saturate(-uVar8);
  *(undefined2 *)(~unaff_r20 + 0x9a) = unaff_r25;
  *(undefined2 *)(~unaff_r20 + 0x98) = unaff_r25;
  __saturate(uVar8);
  *(undefined2 *)(~unaff_r20 + 0x9a) = unaff_r25;
  *(undefined2 *)(~unaff_r20 + 0x98) = unaff_r25;
  __saturate(-uVar8);
  uRamfffffd3a = (undefined1)uVar4;
  iVar9 = (int)DAT_0000003a;
  __saturate(iVar9 + -5);
  __saturate(~unaff_r20 + 0xb);
  *(undefined4 *)(iVar9 + 0x77) = unaff_r27;
  uVar5 = *(ushort *)(iVar9 + 0x15);
  uVar4 = (undefined2)-uVar8;
  *(undefined2 *)(uVar5 + 0x40) = uVar4;
  uVar8 = (uint)*(ushort *)(*(char *)(uVar5 + 0x7d) + 0x1a);
  *(undefined2 *)(uVar8 + 0x60) = uVar4;
  uVar8 = (uint)*(ushort *)(*(ushort *)(uVar8 + 0x1a) + 0x1a);
  sVar7 = (short)((int)in_r16 >> 0x1f);
  *(short *)(uVar8 + 0x1e) = sVar7;
  uVar8 = (uint)*(ushort *)(uVar8 + 0x1a);
  uVar5 = *(ushort *)(param_2 + -0x11e2);
  *(short *)(uVar8 + 0x1e) = sVar7;
  *(undefined1 *)(uVar8 + 0x17) = *(undefined1 *)(uVar8 + 0x17);
  uVar6 = (undefined1)*(undefined2 *)(uVar8 + 0x1c);
  *(undefined1 *)(uVar8 + 0x27) = uVar6;
  cVar2 = *(char *)(uVar8 + 0x17);
  uVar8 = ~(uVar5 - 0x7b71);
  *(undefined1 *)(uVar8 + 0x17) = *(undefined1 *)(uVar8 + 0x17);
  *(undefined1 *)(uVar8 + 0x27) = uVar6;
  uVar5 = *(ushort *)(uVar8 + 0x1a);
  *(short *)(uVar8 + 0x1e) = sVar7;
  bVar1 = cVar2 < '\0';
  uVar8 = (uint)bVar1 * -4 + (uint)uVar5 * (uint)!bVar1;
  uVar10 = ~uVar8;
  *(undefined1 *)(uVar10 + 0x17) = *(undefined1 *)(uVar10 + 0x17);
  *(char *)(uVar10 + 0x27) = (char)uVar5;
  *(short *)(uVar10 + 0x1e) = sVar7;
  uVar8 = (uint)((int)uVar8 < 0) * -5 + (uint)*(ushort *)(uVar10 + 0x18) * (uint)((int)uVar8 >= 0);
  uVar4 = *(undefined2 *)(uVar10 + 0x1e);
  uVar10 = ~uVar8;
  *(undefined1 *)(uVar10 + 0x17) = *(undefined1 *)(uVar10 + 0x17);
  *(char *)(uVar10 + 0x27) = (char)uVar4;
  *(short *)(uVar10 + 0x1e) = sVar7;
  uVar4 = *(undefined2 *)(uVar10 + 0x1c);
  uVar8 = ~((uint)((int)uVar8 < 0) * -6 + (uint)*(ushort *)(uVar10 + 0x16) * (uint)((int)uVar8 >= 0)
           );
  *(undefined1 *)(uVar8 + 0x17) = *(undefined1 *)(uVar8 + 0x17);
  bVar3 = *(byte *)(uVar8 + 4);
  *(char *)(uVar8 + 0x27) = (char)uVar4;
  *(short *)(uVar8 + 0x1e) = sVar7;
  *(undefined2 *)(uVar8 + 0x9a) = unaff_r25;
  *(undefined2 *)(uVar8 + 0x98) = unaff_r25;
  *(undefined2 *)(~(uint)bVar3 + 0x9a) = unaff_r25;
  *(undefined2 *)(~(uint)bVar3 + 0x98) = unaff_r25;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005bbb0 @ 0005bbb0 (size 335) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005bbb0(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 in_r14;
  undefined2 in_r16;
  undefined1 unaff_r23;
  undefined2 unaff_r25;
  int unaff_ep;
  uint uVar6;
  uint uVar7;
  int unaff_lp;
  
  *(undefined1 *)(unaff_ep + 0x27) = in_r14;
  cVar2 = *(char *)(unaff_ep + 0x17);
  uVar6 = ~(unaff_lp - 0x7b71U);
  *(undefined1 *)(uVar6 + 0x17) = *(undefined1 *)(uVar6 + 0x17);
  *(undefined1 *)(uVar6 + 0x27) = unaff_r23;
  uVar4 = *(ushort *)(uVar6 + 0x1a);
  *(undefined2 *)(uVar6 + 0x1e) = in_r16;
  bVar1 = cVar2 < '\0';
  uVar6 = (uint)bVar1 * -4 + (uint)uVar4 * (uint)!bVar1;
  uVar7 = ~uVar6;
  *(undefined1 *)(uVar7 + 0x17) = *(undefined1 *)(uVar7 + 0x17);
  *(char *)(uVar7 + 0x27) = (char)uVar4;
  *(undefined2 *)(uVar7 + 0x1e) = in_r16;
  uVar6 = (uint)((int)uVar6 < 0) * -5 + (uint)*(ushort *)(uVar7 + 0x18) * (uint)((int)uVar6 >= 0);
  uVar5 = *(undefined2 *)(uVar7 + 0x1e);
  uVar7 = ~uVar6;
  *(undefined1 *)(uVar7 + 0x17) = *(undefined1 *)(uVar7 + 0x17);
  *(char *)(uVar7 + 0x27) = (char)uVar5;
  *(undefined2 *)(uVar7 + 0x1e) = in_r16;
  uVar5 = *(undefined2 *)(uVar7 + 0x1c);
  uVar6 = ~((uint)((int)uVar6 < 0) * -6 + (uint)*(ushort *)(uVar7 + 0x16) * (uint)((int)uVar6 >= 0))
  ;
  *(undefined1 *)(uVar6 + 0x17) = *(undefined1 *)(uVar6 + 0x17);
  bVar3 = *(byte *)(uVar6 + 4);
  *(char *)(uVar6 + 0x27) = (char)uVar5;
  *(undefined2 *)(uVar6 + 0x1e) = in_r16;
  *(undefined2 *)(uVar6 + 0x9a) = unaff_r25;
  *(undefined2 *)(uVar6 + 0x98) = unaff_r25;
  *(undefined2 *)(~(uint)bVar3 + 0x9a) = unaff_r25;
  *(undefined2 *)(~(uint)bVar3 + 0x98) = unaff_r25;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005bd80 @ 0005bd80 (size 184) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005bd80(void)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 in_r16;
  undefined1 in_r19;
  uint unaff_r20;
  undefined4 unaff_r27;
  int iVar4;
  uint uVar5;
  
  uVar1 = *(ushort *)(~unaff_r20 + 0x1a);
  *(undefined1 *)(unaff_r20 - 0x2c5) = in_r19;
  iVar4 = (int)*(char *)(~unaff_r20 + 0x3b);
  __saturate(iVar4 + -5);
  __saturate(uVar1 + 0xb);
  *(undefined4 *)(iVar4 + 0x77) = unaff_r27;
  __synchronize();
  uVar1 = *(ushort *)(iVar4 + 0x15);
  uVar2 = (undefined2)in_r16;
  *(undefined2 *)(uVar1 + 0x40) = uVar2;
  uVar5 = (uint)*(ushort *)(uVar1 + 0x1a);
  *(undefined2 *)(uVar5 + 0x40) = uVar2;
  *(undefined2 *)(uVar5 + 0x40) = uVar2;
  *(undefined2 *)(uVar5 + 0x40) = uVar2;
  sVar3 = (short)((int)in_r16 >> 0x1f);
  *(short *)(uVar5 + 0x1e) = sVar3;
  *(undefined2 *)(uVar5 + 0x40) = uVar2;
  uVar1 = *(ushort *)(*(ushort *)(uVar5 + 0x1c) - 0x11e2);
  *(short *)(uVar5 + 0x1e) = sVar3;
  *(undefined1 *)(uVar5 + 0x17) = *(undefined1 *)(uVar5 + 0x17);
  *(char *)(*(char *)(uVar5 + 0x7d) + 0x37) = (char)*(ushort *)(uVar5 + 0x1c);
  uVar5 = ~(uVar1 - 0x7b71);
  *(undefined1 *)(uVar5 + 0x17) = *(undefined1 *)(uVar5 + 0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005be38 @ 0005be38 (size 144) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005be38(void)

{
  ushort uVar1;
  undefined2 in_r15;
  undefined2 in_r16;
  int unaff_ep;
  uint uVar2;
  
  *(undefined2 *)(unaff_ep + 0x40) = in_r15;
  *(undefined2 *)(unaff_ep + 0x1e) = in_r16;
  *(undefined2 *)(unaff_ep + 0x40) = in_r15;
  uVar1 = *(ushort *)(*(ushort *)(unaff_ep + 0x1c) - 0x11e2);
  *(undefined2 *)(unaff_ep + 0x1e) = in_r16;
  *(undefined1 *)(unaff_ep + 0x17) = *(undefined1 *)(unaff_ep + 0x17);
  *(char *)(*(char *)(unaff_ep + 0x7d) + 0x37) = (char)*(ushort *)(unaff_ep + 0x1c);
  uVar2 = ~(uVar1 - 0x7b71);
  *(undefined1 *)(uVar2 + 0x17) = *(undefined1 *)(uVar2 + 0x17);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005bf0c @ 0005bf0c (size 110) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005bf0c(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 in_r14;
  undefined2 in_r16;
  int unaff_ep;
  int iVar3;
  uint uVar4;
  
  iVar3 = (int)*(char *)(unaff_ep + 0x7d);
  *(undefined1 *)(iVar3 + 0x37) = in_r14;
  *(undefined2 *)(iVar3 + 0x1e) = in_r16;
  uVar2 = *(undefined2 *)(iVar3 + 0x1e);
  uVar4 = ~(int)*(char *)(iVar3 + 0x18);
  *(undefined1 *)(uVar4 + 0x17) = *(undefined1 *)(uVar4 + 0x17);
  cVar1 = *(char *)(uVar4 + 0x7d);
  *(char *)(cVar1 + 0x37) = (char)uVar2;
  *(undefined2 *)(cVar1 + 0x1e) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005d4f0 @ 0005d4f0 (size 322) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005d4f0(void)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  int iVar5;
  int in_r1;
  int in_r9;
  int in_r10;
  int iVar6;
  int in_r12;
  int in_r13;
  int in_r14;
  uint uVar7;
  int iVar8;
  int in_r15;
  undefined1 in_r16;
  undefined2 in_r18;
  uint in_r19;
  int unaff_r22;
  int unaff_r23;
  int unaff_r28;
  uint uVar9;
  int unaff_lp;
  
  *(undefined2 *)(unaff_lp + -0x2f84) = in_r18;
  __saturate(in_r10 - unaff_r28);
  *(short *)(unaff_r22 + 0x70) = (short)&stack0x00000000;
  uVar9 = (uint)*(ushort *)(unaff_r22 + 0x18);
  __saturate(in_r1 - in_r15);
  DAT_000001f4 = in_r16;
  *(short *)(uVar9 + 0x22) = (short)in_r13;
  __saturate(&stack0x00000000 + unaff_r23);
  __saturate(&stack0x00000000 + unaff_r23 * 2);
  sVar3 = *(short *)(uVar9 + 0x2c);
  uVar9 = (uint)*(char *)(uVar9 + 0x7c);
  *(short *)(uVar9 + 0x70) = (short)&stack0x00000000 + (short)unaff_r23 * 2;
  bVar2 = *(byte *)(uVar9 + 0x71);
  bVar1 = *(byte *)(in_r19 - 0x983);
  __saturate(&stack0x00000000 + unaff_r23 * 3);
  iVar8 = in_r9 + unaff_r23 * 3;
  __saturate(&stack0x00000000 + in_r9 + unaff_r23 * 3);
  if ((int)(&stack0x00000000 + in_r9 + unaff_r23 * 3) < 0 !=
      SCARRY4((int)(&stack0x00000000 + unaff_r23 * 3),in_r9) ||
      &stack0x00000000 + in_r9 + unaff_r23 * 3 == (undefined1 *)0x0) {
    iVar6 = (int)*(short *)(uVar9 + 0xe4);
    if (-1 < (int)(uVar9 & (int)sVar3)) {
      uVar4 = *(undefined2 *)(uVar9 + 6);
      *(int *)(uVar9 + 0xc) = (int)*(short *)(uVar9 + 2);
      uVar9 = (uint)*(ushort *)(uVar9 + 0x18);
      __saturate(&stack0x00000000 + in_r14 + in_r9 + unaff_r23 * 3);
      sVar3 = *(short *)(uVar9 + 0x60);
      *(undefined2 *)(uVar9 + 0x60) = *(undefined2 *)(uVar9 + 0xd2);
      *(undefined2 *)(uVar9 + 0x80) = uVar4;
      *(short *)(uVar9 + 0x2c) = sVar3;
      __saturate(unaff_r23 + -0x1ff);
      __saturate((int)sVar3 + (int)(char)(bVar1 | bVar2));
      __saturate((unaff_r23 + -0x1ff) - in_r19);
      *(undefined2 *)(uVar9 + 0x86) = uVar4;
      return;
    }
    iVar5 = in_r12 + iVar8;
    __saturate(&stack0x00000000 + in_r12 + in_r9 + unaff_r23 * 3);
    *(short *)(uVar9 + 0x60) = (short)in_r9;
    uVar7 = ~in_r19;
    __saturate(&stack0x00000000 + uVar7 + in_r12 + iVar8);
    iVar8 = (uVar7 - 9) * 0x800000 + unaff_r23;
    __saturate(iVar8);
    __saturate(in_r1);
    __saturate(iVar8 - in_r19);
    __saturate(&stack0x00000000 + iVar6 + uVar7 + iVar5);
    __saturate(&stack0x00000000 + in_r13 + iVar6 + uVar7 + iVar5);
    *(undefined2 *)(uVar9 + 0x86) = *(undefined2 *)(uVar9 + 0x52);
    __saturate(&stack0x00000000 + ((in_r13 + iVar6 + uVar7 + iVar5) - (int)*(short *)(uVar9 + 4)));
  }
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


// ==== FUN_0005da60 @ 0005da60 (size 34) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005da60(void)

{
  undefined2 in_r9;
  int in_r10;
  undefined2 in_r16;
  int unaff_r20;
  undefined2 unaff_r23;
  int unaff_r28;
  int unaff_ep;
  
  *(undefined2 *)(unaff_ep + 0x48) = in_r9;
  __saturate((int)&stack0x00000000 - (int)*(short *)(unaff_ep + 0x42));
  __saturate(in_r10 - unaff_r28);
  *(undefined2 *)(unaff_r20 + -0x4e8c) = unaff_r23;
  *(undefined2 *)(unaff_ep + 0x3e) = in_r16;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005df70 @ 0005df70 (size 152) ====

void FUN_0005df70(int param_1,int param_2)

{
  ushort uVar1;
  uint in_r1;
  int iVar2;
  int unaff_r27;
  uint uVar3;
  int unaff_r29;
  int unaff_ep;
  int unaff_lp;
  
  __saturate((int)&stack0x00000000 - unaff_r27);
  __saturate(&stack0x00000000 + unaff_r27 * -2);
  __saturate(&stack0x00000000 + unaff_r27 * -3);
  iVar2 = param_2 - *(short *)(uint)*(ushort *)(unaff_ep + 0x18);
  __saturate(iVar2);
  *(short *)(uint)*(ushort *)(unaff_ep + 0x18) = (short)iVar2;
  uVar3 = in_r1 | 0x3174;
  uVar1 = *(ushort *)(unaff_lp + 0x18);
  *(int *)(uVar3 + 0x3174) = unaff_lp;
  iVar2 = (int)*(short *)(*(ushort *)(*(ushort *)(uVar1 + 0x18) + 0x18) + 4);
  __saturate(uVar3 - 0x235e);
  __saturate(uVar3 - 0x317e);
  *(int *)(unaff_r29 + 0x18ba) = unaff_r27;
                    /* WARNING: Could not recover jumptable at 0x0005e006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005e008 + *(short *)(&DAT_0005e008 + iVar2 * 2) * 2))
            (-param_1,param_2,iVar2,(int)*(short *)(*(ushort *)(uVar3 - 0x3166) + 2));
  return;
}


// ==== FUN_0005e7b4 @ 0005e7b4 (size 441) ====

void FUN_0005e7b4(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  ushort uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined1 *in_r1;
  int unaff_gp;
  uint unaff_tp;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  int in_r14;
  int in_r15;
  undefined4 in_r18;
  undefined4 in_r19;
  uint unaff_r21;
  uint unaff_r22;
  uint unaff_r23;
  uint uVar16;
  undefined4 unaff_r27;
  int iVar17;
  int iVar18;
  uint unaff_r29;
  int unaff_ep;
  uint uVar19;
  int iVar20;
  int unaff_lp;
  uint in_PSW;
  
  uVar16 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined4 *)(uVar16 - 0xcc6) = in_r19;
  __saturate(unaff_ep + -5);
  iVar17 = (int)*(char *)(param_3 + -0x7d85);
  __saturate(uVar16 - 1);
  bVar11 = *(char *)(param_3 + -0x7d85) >> 7;
  __saturate(iVar17 + -0x196a);
  *(int *)(iVar17 + 0x31a4) = unaff_lp;
  uVar16 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(unaff_ep,-5)) || SCARRY4(uVar16,-1))
                  || (char)bVar11 < '\0' && -1 < iVar17 + -0x196a) ||
                 (char)bVar11 < '\0' && -1 < iVar17 + -0x196c) << 4;
  __saturate(iVar17 + -0x196c);
  uVar10 = (undefined1)unaff_r22;
  iVar12 = (((param_1 - unaff_ep) - unaff_tp) - in_r15) - (int)in_r1;
  DAT_00000320 = uVar10;
  iVar15 = func_0x000b6f2c();
  *(short *)(iVar17 + -0x18ac) = (short)param_2;
  *(int *)(iVar17 + -0x1930) = iVar17 + -0x196c;
  *(int *)(iVar17 + -0x1930) = unaff_lp;
  __saturate(iVar17 + -0x31ba);
  uVar19 = (uint)*(ushort *)(iVar17 + -0x31a2);
  bVar3 = (byte)((uint)in_r1 >> 0x1f);
  __saturate(iVar17 - (int)in_r1);
  *(int *)(uVar19 + 0x20) = (int)*(short *)(iVar17 + -0x194a);
  __saturate(param_2 - 0x6666);
  *(int *)(uVar19 + 0x7c) = (int)*(short *)(uVar19 + 200);
  sVar7 = *(short *)(uVar19 + 0x20);
  *(undefined2 *)(uVar19 + 0x2c) = 0xffff;
  *(undefined1 *)(unaff_tp + 0x7fff) = uVar10;
  uVar19 = (uint)*(ushort *)(uVar19 + 0x18);
  *(short *)(uVar19 + 0xc) = (short)(unaff_tp | 0xa902);
  *(uint *)(sVar7 + 0x31ae) = uVar19;
  *(uint *)(uVar19 + 0x3c) = uVar19;
  uVar14 = *(undefined4 *)(uVar19 + 0xdc);
  iVar18 = (int)DAT_00007227;
  *(undefined4 *)(uVar19 + 0xdc) = uVar14;
  iVar20 = *(int *)(uVar19 + 0xf8);
  *(undefined2 *)(iVar20 + 0x46) = 0;
  cVar6 = *(char *)(unaff_tp + 0x5ee3);
  *(short *)(iVar18 + 0x31c2) = (short)unaff_lp;
  *(short *)(iVar18 + 0x31bc) = (short)iVar20;
  *(int *)(iVar20 + 0x3c) = iVar20;
  *(char *)(iVar20 + 0x51) = cVar6 * -0x10;
  iVar18 = (((int)((in_r14 + 7) * 0x80 & param_2) >> 7 ^ param_2) + 7) * 0x80;
  __saturate(iVar18 + param_2);
  bVar5 = (((((bool)((byte)(uVar16 >> 4) & 1) || (char)bVar11 < '\0' && -1 < iVar17 + -0x31ba) ||
            bVar11 >> 7 != bVar3 && bVar3 == (byte)((uint)(iVar17 - (int)in_r1) >> 0x1f)) ||
           (int)param_2 < 0 && -1 < (int)(param_2 - 0x6666)) || SCARRY4(iVar18,param_2)) ||
          SCARRY4(*(int *)(iVar20 + 0xec),unaff_r22);
  iVar18 = *(int *)(iVar20 + 0xec) + unaff_r22;
  __saturate(iVar18);
  *(short *)(iVar20 + 0xdc) = (short)uVar14;
  *(short *)(iVar20 + 0x2c) = (short)iVar18;
  *(undefined2 *)(iVar20 + 0x44) = 0;
  puVar13 = &stack0x00000000 +
            (((((iVar12 - (int)in_r1) - unaff_r29) - (unaff_tp | 0xa902)) - unaff_r22) - unaff_r23);
  uVar16 = (uint)*(ushort *)(unaff_lp + 0x18);
  bVar1 = puVar13 < in_r1;
  bVar4 = puVar13 == in_r1;
  *(undefined4 *)(unaff_lp + -0xdc6) = in_r19;
  iVar12 = *(int *)(unaff_lp + 0x80);
  if (in_r1 < puVar13) {
    while (cVar6 = cRamffff827b, !bVar1 && !bVar4) {
      iVar18 = (int)cRamffff827b;
      bVar2 = SCARRY4(uVar16,0xb);
      __saturate(uVar16 + 0xb);
      uVar16 = (uint)*(char *)(*(int *)(iVar12 + 0x80) + 0x2b);
      *(undefined4 *)(*(int *)(iVar12 + 0x80) + 0x7c) = unaff_r27;
      uVar9 = (undefined1)(param_2 - 0x6666);
      uRam000032c0 = uVar10;
      *(undefined1 *)(unaff_gp * 0x1a + 0x48) = uVar9;
      __saturate(iVar18 + -0x196e);
      __saturate(iVar18 + -0x1972);
      *(undefined1 *)(unaff_gp * 0x1b + 0x4c) = uVar9;
      bVar1 = unaff_r29 < 0xcb8;
      bVar4 = unaff_r29 == 0xcb8;
      bVar5 = (((bVar5 || bVar2) || cVar6 >> 7 < '\0' && -1 < iVar18 + -0x196e) ||
              cVar6 >> 7 < '\0' && -1 < iVar18 + -0x1972) ||
              (int)unaff_r29 < 0 && -1 < (int)(unaff_r29 - 0xcb8);
      iVar12 = unaff_r29 - 0xcb8;
      __saturate(iVar12);
      if (!bVar4) {
        *(char *)(unaff_r29 - 0xc54) = (char)unaff_lp;
        do {
        } while (bVar5);
        *(undefined1 *)(unaff_r29 - 0xc6c) = uVar9;
        *(int *)(iVar18 + 0x31da) = iVar12;
        iVar12 = (int)(short)iVar12 * (int)(short)unaff_r29;
        *(undefined1 *)(iVar12 + 0x48) = uVar9;
        do {
          iVar17 = iVar18 + -0x14;
          *(int *)(iVar12 + 0xa4) = iVar12;
          uVar8 = *(ushort *)(iVar12 + 0x1a);
          *(undefined4 *)(uVar8 + 0xfc) = in_r18;
          iVar20 = iVar18 + -0x1e;
          iVar12 = *(int *)(uVar8 + 0x14);
          *(uint *)(iVar12 + 0x3c) = uVar16;
          iVar12 = *(int *)(iVar12 + 0xf8);
          iVar18 = iVar17;
        } while (9 < iVar20 && iVar17 != 0x14);
                    /* WARNING: Could not recover jumptable at 0x0005e954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0005e956 +
                  *(short *)(&DAT_0005e956 + (unaff_r21 | (uint)&stack0x00000000) * 2) * 2))
                  (puVar13 + (iVar15 - (int)in_r1));
        return;
      }
    }
  }
  else {
    __saturate(unaff_r22 | unaff_r23);
    *(uint *)(iVar12 + 0x38) = unaff_r23;
    __saturate((unaff_r22 | unaff_r23) - unaff_tp);
    unaff_r22 = (uint)*(char *)(unaff_tp - 0x7c8f);
  }
                    /* WARNING: Could not recover jumptable at 0x0005e97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005e97c + *(short *)(&DAT_0005e97c + unaff_r22 * 2) * 2))();
  return;
}


// ==== FUN_0005f0f4 @ 0005f0f4 (size 762) ====

/* WARNING: Instruction at (ram,0x0005f322) overlaps instruction at (ram,0x0005f320)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005f0f4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  uint in_r1;
  short in_r2;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint unaff_tp;
  int iVar13;
  undefined4 uVar14;
  uint extraout_r11;
  undefined1 in_r12;
  ushort uVar15;
  uint uVar16;
  uint in_r16;
  undefined1 in_r18;
  undefined4 in_r19;
  undefined4 unaff_r20;
  uint uVar17;
  int unaff_r22;
  ushort unaff_r23;
  int unaff_r24;
  uint unaff_r25;
  int unaff_r27;
  int iVar18;
  int iVar19;
  uint uVar20;
  short sVar21;
  int unaff_r29;
  int unaff_ep;
  uint uVar22;
  undefined4 *puVar23;
  undefined1 *puVar24;
  short unaff_lp;
  uint uVar25;
  undefined4 uVar26;
  int iVar27;
  uint in_PSW;
  
  *(undefined4 *)(unaff_ep + 4) = unaff_r20;
  *(short *)(unaff_r29 + 0x18fc) = unaff_lp;
  *(short *)(unaff_r29 + 0x18fc) = unaff_lp;
  sVar21 = (short)unaff_r29;
  sVar10 = unaff_lp * sVar21;
  iVar18 = (int)DAT_ffffa61c;
  uVar17 = (uint)((bool)((byte)(in_PSW >> 4) & 1) ||
                 DAT_ffffa61c >> 7 < '\0' && -1 < iVar18 + -0x1f8e) << 4;
  __saturate(iVar18 + -0x1f8e);
  iVar18 = *(int *)(iVar18 + -0x1e96);
  func_0x00146c18(param_1,_DAT_00005c72);
  *(undefined4 *)(iVar18 + 4) = 0xfffffff4;
  *(short *)(unaff_r29 + 0x18fc) = sVar10;
  *(short *)(unaff_r29 + 0x18fc) = sVar10;
  *(int *)(DAT_ffffa603 + 0x3206) = (int)sVar10 * (int)sVar21;
  uVar22 = (uint)*(ushort *)(iVar18 + 0x18);
  *(short *)(uVar22 + 0x60) = (short)param_4;
  cVar5 = *(char *)(uVar22 + 0x17);
  *(char *)(uVar22 + 0x17) = cVar5;
  uVar15 = (short)cVar5 | unaff_r23;
  uVar8 = *(ushort *)(uVar22 + 0x18);
  *(undefined2 *)(uint)uVar8 = (short)unaff_r22;
  uVar22 = (uint)(ushort)((undefined2 *)(uint)uVar8)[0xc];
  *(undefined4 *)(uVar22 + 0x40) = param_4;
  *(short *)(uVar22 + 0xc6) = (short)param_4;
  iVar13 = (int)*(short *)(uVar22 + 0xc2);
  *(short *)(uVar22 + 0x40) = (short)in_r16;
  *(undefined2 *)(uVar22 + 0x40) = *(undefined2 *)(uVar22 + 0x60);
  uVar9 = (ushort)((int)sVar10 * (int)sVar21);
  cVar5 = *(char *)(in_r16 - 0x5cfa);
  *(ushort *)(DAT_ffff8f10 + 0x21e4) = uVar9;
  *(int *)(unaff_r29 + 0x10f0) = unaff_r27;
  __saturate(unaff_r29 + -0x190c);
  cVar4 = (&DAT_00007d00)[unaff_r24];
  uVar22 = (uint)cVar4;
  iVar18 = *(int *)(unaff_r29 + -0x18c8);
  uVar7 = (undefined2)~in_r16;
  *(undefined2 *)(unaff_r29 + -0x18cc) = uVar7;
  puVar23 = (undefined4 *)(uint)*(ushort *)(unaff_r29 + -0x18f2);
  *(undefined2 *)((int)puVar23 + 0x3e) = uVar7;
  uVar16 = ~in_r16 | uVar22;
  iVar19 = (int)DAT_ffffe700;
  bVar2 = (byte)(uVar16 >> 0x1f);
  __saturate(uVar22 - uVar16);
  bVar3 = (byte)(DAT_ffffe700 >> 7) >> 7;
  __saturate(in_r1 - iVar19);
  puVar11 = (undefined4 *)((int)(short)(in_r2 * cVar5 * (short)cVar5) * (int)(short)*puVar23);
  *(undefined1 *)(puVar23 + 0x1d) = in_r12;
  *(undefined4 *)((int)puVar23 + -0xcc6) = in_r19;
  uVar17 = (uint)(((((bool)((byte)(uVar17 >> 4) & 1) || unaff_r29 < 0 && -1 < unaff_r29 + -0x190c)
                   || (byte)(cVar4 >> 7) >> 7 != bVar2 && bVar2 == (byte)(uVar22 - uVar16 >> 0x1f))
                  || (byte)(in_r1 >> 0x1f) != bVar3 && bVar3 == (byte)(in_r1 - iVar19 >> 0x1f)) ||
                 SCARRY4((int)puVar23,-5)) << 4;
  __saturate((int)puVar23 + -5);
  *(ushort *)(*(char *)(iVar18 + -0xf84) + 0x3200) = uVar9 * sVar21;
  uVar22 = (uint)DAT_ffffe580;
  *(short *)(uVar22 + 0x31fe) = (short)((int)puVar23 + -5);
  uVar8 = *(ushort *)(*(int *)((int)puVar23 + 0xf3) + 0x18);
  puVar12 = (undefined1 *)0x5f234;
  func_0x00136aa6();
  uVar17 = uVar17 & 0xfffffff8;
  iVar18 = 0x5f23a;
  func_0x0007c3b2();
  *(int *)(uVar22 + 0x31fa) = (int)(short)~uVar9 * (int)sVar21;
  uVar22 = (uint)*(ushort *)(*(ushort *)(uVar8 + 0x18) + 0x18);
  __saturate(0);
  uVar20 = in_r1 | 0x3205;
  __saturate(uVar20 - 0x31fd);
  puVar23 = (undefined4 *)(uVar20 - 0x3205);
  __saturate(puVar23);
  __saturate(uVar22 + 0xb);
  uVar16 = (uint)*(char *)(uVar20 - 0x31c6);
  uVar25 = (int)(short)~in_r1 * (int)sVar21;
  cVar5 = *(char *)(unaff_r24 + -0x7cf0);
  sVar10 = *(short *)(uVar20 - 0x31b7);
  if (9 < (int)*(char *)(iVar18 + -0x7d85) - 0x14U || ~in_r1 == 0) {
    puVar11 = (undefined4 *)((int)(short)puVar11 * (int)(short)uVar15);
    *(undefined4 *)(uVar20 - 0x31a9) = *puVar23;
    uVar16 = (uint)*(ushort *)(uVar20 - 0x31eb);
    sVar10 = *(short *)(uVar20 - 0x31bd);
    *(short *)(uVar20 - 0x313d) = (short)iVar13;
    puVar12 = (undefined1 *)(extraout_r11 | 0x5f234 | extraout_r11 | extraout_r11);
    iVar18 = (int)*(char *)(uVar20 - 0x31ca);
    puVar23 = (undefined4 *)(iVar18 + -5);
    __saturate(puVar23);
    *(int *)(iVar18 + 0x77) = unaff_r27;
    *(short *)(iVar18 + 0xc3) = (short)puVar11;
    uVar25 = (uint)*(ushort *)(iVar18 + 0x13);
    do {
      puVar23 = (undefined4 *)(uint)*(ushort *)((int)puVar23 + 0x1a);
    } while (((((bool)((byte)(uVar17 >> 4) & 1) || (int)in_r1 < 0 && -1 < (int)(uVar20 - 0x31fd)) ||
              (int)in_r1 < 0 && -1 < (int)(uVar20 - 0x3205)) || SCARRY4(uVar22,0xb)) ||
             SCARRY4(iVar18,-5));
  }
  iVar19 = (int)sVar10;
  puVar23[0x1d] = uVar25;
  __saturate(uVar16 + 0xb);
  puVar23[0x1f] = unaff_r27;
  *(short *)(puVar23 + 0x32) = (short)puVar11;
  uVar22 = (uint)*(ushort *)((int)puVar23 + 0x1a);
  *(uint *)(uVar22 + 0x74) = (uint)*(ushort *)(puVar23 + 6);
  puVar23 = (undefined4 *)(uVar22 - 5);
  __saturate(puVar23);
  uVar26 = *(undefined4 *)(uVar22 + 0x47);
  uVar6 = (undefined1)unaff_r22;
  *(undefined1 *)(iVar13 + 0x11dc) = uVar6;
  sVar10 = (short)in_r1;
  uVar14 = (*(code *)0x0)(1,(int)cVar5);
  uVar17 = unaff_tp | 0xfffffff1;
  iVar27 = (int)(short)uVar26 * (int)sVar10 - uVar17;
  __saturate(iVar27);
  iVar18 = ((int)(uVar16 + 0xb) >> 0x1d) - uVar17;
  __saturate(iVar18);
  iVar27 = iVar27 - uVar17;
  __saturate(iVar27);
  cVar5 = *(char *)(uVar22 + 0x4b);
  __saturate(iVar18 - uVar17);
  *(short *)(uVar22 + 0xe3) = (short)iVar27;
  *(int *)(uVar22 + 0x47) = iVar27;
  __saturate(-(int)*(char *)(iVar19 + -0x78b8));
  *(char *)(iVar19 + 0x11e4) = cVar5;
  uVar17 = (uint)*(short *)(uVar22 - 1);
  *(undefined4 **)(uVar22 + 0x37) = puVar23;
  iVar18 = (int)cVar5;
  iVar13 = iVar27;
  do {
    uVar22 = uVar17 >> 0x10;
    puVar23[0xf] = iVar13;
    __saturate((*(short *)(puVar23 + 8) + -0xc) - iVar18);
    sVar10 = *(short *)(iVar27 + 0x1a);
    *(int *)(iVar27 + 0x3c) = iVar27;
    uVar17 = 0;
    *(int *)(iVar27 + 0x3c) = iVar13;
    *(undefined1 *)(iVar19 + 0x11e5) = uVar6;
    iVar13 = 0;
    iVar18 = unaff_r22;
    puVar23 = puVar11;
  } while ((uVar22 & 1) != 0);
  *(undefined1 *)(iVar19 + 0x11e4) = uVar6;
  do {
    *(undefined2 *)(puVar11 + -0x63e) = 0;
    __saturate(iVar13 + 0xb);
    iVar13 = (int)*(char *)((int)puVar11 + 0x2b);
    puVar11[0x1f] = unaff_r27;
    *puVar11 = uVar14;
    uVar6 = *(undefined1 *)((int)puVar11 + 5);
    bVar2 = *(byte *)((int)puVar11 + 0x12);
    unaff_r27 = iVar27;
    do {
      *(undefined1 *)(sVar10 + 0x11dc) = uVar6;
      bVar1 = SCARRY4(unaff_r27,9);
      unaff_r27 = unaff_r27 + 9;
    } while (bVar1);
    iVar27 = in_r1 - unaff_r27;
  } while (bVar2 < 0xe);
  *(undefined4 *)((int)puVar11 + -0x2c6) = 0;
  puVar24 = (undefined1 *)(int)*(char *)((int)puVar11 + 0x3b);
  __saturate(puVar24 + -5);
  __saturate(iVar13 + 0xb);
  *(int *)(puVar24 + 0x77) = unaff_r27;
  *(undefined4 *)(puVar24 + -5) = uVar14;
  uVar7 = *(undefined2 *)(puVar24 + 0x5f);
  *(undefined1 *)(sVar10 + 0x11dc) = *puVar24;
  *(undefined4 *)(puVar24 + -0x2cb) = 0;
  __saturate((char)puVar24[0x36] + -5);
  iVar18 = (int)(char)DAT_ffffe580;
  *(undefined2 *)((char)puVar24[0x36] + 0x9f) = uVar7;
  __saturate(iVar18 - ~(uint)puVar12);
  *(undefined1 *)((unaff_r25 & 5) + 0x12a6) = in_r18;
  __saturate(~in_r1 + 4);
                    /* WARNING: Could not recover jumptable at 0x0005f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005f498 + *(short *)(&DAT_0005f498 + (iVar18 - ~(uint)puVar12) * 2) * 2))();
  return;
}


// ==== FUN_0005f3ee @ 0005f3ee (size 170) ====

void FUN_0005f3ee(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  uint in_r1;
  undefined4 in_r10;
  int in_r13;
  undefined1 in_r18;
  undefined4 in_r19;
  uint unaff_r25;
  int unaff_r27;
  int iVar6;
  undefined4 *unaff_ep;
  undefined1 *puVar7;
  int unaff_lp;
  
  while( true ) {
    cVar2 = *(char *)((int)unaff_ep + 0x2b);
    unaff_ep[0x1f] = unaff_r27;
    *unaff_ep = in_r10;
    uVar3 = *(undefined1 *)((int)unaff_ep + 5);
    bVar4 = *(byte *)((int)unaff_ep + 0x12);
    unaff_r27 = unaff_lp;
    do {
      *(undefined1 *)(in_r13 + 0x11dc) = uVar3;
      bVar1 = SCARRY4(unaff_r27,9);
      unaff_r27 = unaff_r27 + 9;
    } while (bVar1);
    unaff_lp = in_r1 - unaff_r27;
    if (0xd < bVar4) break;
    *(short *)(unaff_ep + -0x63e) = (short)in_r19;
    __saturate(cVar2 + 0xb);
  }
  *(undefined4 *)((int)unaff_ep + -0x2c6) = in_r19;
  puVar7 = (undefined1 *)(int)*(char *)((int)unaff_ep + 0x3b);
  __saturate(puVar7 + -5);
  __saturate(cVar2 + 0xb);
  *(int *)(puVar7 + 0x77) = unaff_r27;
  *(undefined4 *)(puVar7 + -5) = in_r10;
  uVar5 = *(undefined2 *)(puVar7 + 0x5f);
  *(undefined1 *)(in_r13 + 0x11dc) = *puVar7;
  *(undefined4 *)(puVar7 + -0x2cb) = in_r19;
  __saturate((char)puVar7[0x36] + -5);
  iVar6 = (int)DAT_ffffe580;
  *(undefined2 *)((char)puVar7[0x36] + 0x9f) = uVar5;
  __saturate(iVar6 - ~(uint)&stack0x00000000);
  *(undefined1 *)((unaff_r25 & 5) + 0x12a6) = in_r18;
  __saturate(~in_r1 + 4);
                    /* WARNING: Could not recover jumptable at 0x0005f496. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0005f498 + *(short *)(&DAT_0005f498 + (iVar6 - ~(uint)&stack0x00000000) * 2) * 2))
            ();
  return;
}


// ==== FUN_0005f7d4 @ 0005f7d4 (size 180) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0005f7d4(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  short sVar1;
  undefined4 in_r1;
  short in_r2;
  byte unaff_gp;
  short in_r13;
  undefined1 in_r16;
  undefined1 uVar2;
  byte bVar3;
  int in_r17;
  uint unaff_r20;
  uint uVar4;
  int unaff_r28;
  int unaff_r29;
  undefined2 *unaff_ep;
  short sVar5;
  int unaff_lp;
  int iVar6;
  int iVar7;
  int unaff_CTBP;
  
  sVar1 = (short)in_r1;
  *(undefined1 *)(param_3 + 0x11dc) = in_r16;
  __saturate(-unaff_r28);
  __saturate(unaff_lp - unaff_r20);
  DAT_000000fe = *(undefined1 *)(unaff_ep + 0x28);
  __saturate(-unaff_r20);
  iVar6 = (unaff_lp - unaff_r20) - unaff_r20;
  __saturate(iVar6);
  __saturate(unaff_r20 * -2);
  *(undefined1 *)(param_3 + 0x11dc) = DAT_000000fe;
  __saturate(unaff_r28);
  sVar5 = (short)iVar6 * in_r13;
  __saturate(in_r17 + 0x79c0);
  DAT_000000ff = DAT_000000fe;
  *(int *)(unaff_ep + 0x34) = in_r17 + 0x79c0;
  (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x4e)))();
  *(char *)(param_4 + 0x11dc) = (char)in_r1;
  bVar3 = (byte)*unaff_ep;
  uVar4 = unaff_r20 | param_3;
  iVar7 = (int)sVar5 * (int)sVar1 - uVar4;
  __saturate(iVar7);
  iVar6 = unaff_r20 * -2 - uVar4;
  __saturate(iVar6);
  iVar7 = iVar7 - uVar4;
  __saturate(iVar7);
  uVar2 = *(undefined1 *)(unaff_ep + 0x28);
  __saturate(iVar6 - uVar4);
  iVar6 = (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x2c)))();
  *(undefined1 *)(iVar6 + 0x11dc) = uVar2;
  bVar3 = ~bVar3 ^ unaff_gp;
  (*(code *)(unaff_CTBP + (uint)*(ushort *)(unaff_CTBP + 0x10)))();
  DAT_000000ff = bVar3;
  __saturate(-unaff_r28);
  __saturate((int)(short)((short)iVar7 * in_r2) * (int)in_r13 - unaff_r29);
  __saturate(param_3 - 500);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0005fe00 @ 0005fe00 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0005fe00(void)

{
  __saturate(0x1565);
  __saturate(2);
  _DAT_00006441 = 0x1565;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000604a8 @ 000604a8 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000604a8(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 in_r16;
  int in_r17;
  undefined2 unaff_r21;
  byte unaff_r22;
  undefined4 unaff_r27;
  int iVar1;
  int unaff_r29;
  int unaff_ep;
  
  *(char *)(param_3 + 0x8c4) = (char)in_r16;
  __saturate(in_r16);
  iVar1 = (int)DAT_ffffa606;
  *(byte *)(unaff_ep + 0x51) = ~unaff_r22;
  *(undefined2 *)(iVar1 + 0x325e) = unaff_r21;
  __saturate(unaff_r29 + -0x192a);
  *(undefined4 *)(unaff_r29 + 0x1930) = unaff_r27;
  __saturate(8);
  __saturate(((uint)&stack0x00000000 ^ in_r17 >> 0x15) - 0x325d);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006076a @ 0006076a (size 198) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006076a(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  short unaff_tp;
  int iVar2;
  char unaff_r29;
  uint uVar3;
  int unaff_lp;
  int iVar4;
  
  *(int *)(unaff_lp + 0x3c) = unaff_lp;
  *(int *)(unaff_lp + 0x3c) = unaff_lp;
  *(int *)(unaff_lp + 0x3c) = unaff_lp;
  *(int *)(unaff_lp + 0x3c) = unaff_lp;
  cVar1 = (&DAT_ffffa403)[unaff_lp];
  iVar4 = (int)cVar1;
  *(undefined2 *)(iVar4 + 0x80) = param_3;
  *(undefined2 *)(iVar4 + 0x60) = *(undefined2 *)(iVar4 + 200);
  *(short *)(iVar4 + 0xc) = unaff_tp + -0xfe1;
  *(undefined1 *)(iVar4 + 0x17) = *(undefined1 *)(iVar4 + 0x17);
  *(undefined2 *)(iVar4 + 0x60) = *(undefined2 *)(iVar4 + 0x5a);
  *(undefined1 *)(iVar4 + 0x17) = *(undefined1 *)(iVar4 + 0x17);
  iVar2 = *(int *)(iVar4 + 0xc);
  *(undefined2 *)(iVar4 + 0x60) = *(undefined2 *)(iVar4 + 0x4a);
  uVar3 = (uint)*(ushort *)(iVar4 + 0x18);
  *(undefined2 *)(uVar3 + 0x60) = *(undefined2 *)(iVar4 + 0x4a);
  *(undefined1 *)(uVar3 + 0x17) = *(undefined1 *)(uVar3 + 0x17);
  *(char *)(iVar2 + 0x59) = cVar1 * unaff_r29;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060862 @ 00060862 (size 50) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060862(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  undefined2 in_r12;
  undefined1 unaff_r20;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lp;
  uint in_PSW;
  uint uVar8;
  
  cVar3 = DAT_ffff8f11 >> 7;
  __saturate(DAT_ffff8f11 + -0x1cdb);
  __saturate(DAT_ffff8f11 + -0x1cdc);
  __saturate(DAT_ffff8f11 + -0x1cdd);
  __saturate(DAT_ffff8f11 + -0x1cdb);
  iVar6 = (int)DAT_ffff8f11;
  __saturate(iVar6 + -0x1cdc);
  uVar8 = (uint)(((((((bool)((byte)(in_PSW >> 4) & 1) || cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdb
                     ) || cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdc) ||
                   cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdd) ||
                  cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdb) ||
                 cVar3 < '\0' && -1 < iVar6 + -0x1cdc) || cVar3 < '\0' && -1 < iVar6 + -0x326d) << 4
  ;
  __saturate(iVar6 + -0x326d);
  iVar4 = func_0x3271f950();
  uVar2 = (undefined2)unaff_lp;
  *(undefined2 *)(iVar6 + -7) = uVar2;
  *(undefined2 *)(iVar6 + -7) = uVar2;
  iVar5 = *(int *)(*(int *)(iVar6 + -0x3175) + 0xf8);
  __saturate(iVar5 + -1);
  uVar7 = (uint)*(ushort *)(*(int *)(iVar6 + -0x3175) + 0x18);
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  uVar1 = *(ushort *)(uVar7 + 0x18);
  *(undefined2 *)(DAT_ffff820f + 0x325e) = uVar2;
  uVar1 = *(ushort *)(uVar1 + 0x18);
  iVar6 = (int)DAT_ffff8f10;
  *(undefined4 *)(iVar6 + 0x1cd6) = unaff_lp;
  uVar7 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  *(undefined4 *)(uVar7 + 0x18) = 0;
  uVar1 = *(ushort *)(uVar7 + 0x18);
  uVar7 = (uint)uVar1;
  do {
  } while ((bool)((byte)(uVar8 >> 4) & 1) || SCARRY4(iVar5,-1));
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  *(undefined1 *)(iVar4 + 0x3274) = unaff_r20;
  *(ushort *)(iVar6 + 0x326d) = uVar1;
  __saturate(uVar7 - 5);
  __saturate(*(ushort *)(uVar7 + 0x18) - 1);
  iVar4 = *(char *)(param_3 + -0x7d85) + -0x21a1;
  __saturate(iVar4);
  *(short *)(*(char *)(param_3 + -0x7d85) + 0x327a) = (short)iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060894 @ 00060894 (size 122) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060894(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  undefined2 in_r12;
  undefined1 in_r16;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_lp;
  uint in_PSW;
  uint uVar8;
  
  cVar3 = DAT_ffff8f11 >> 7;
  __saturate(DAT_ffff8f11 + -0x1cdd);
  __saturate(DAT_ffff8f11 + -0x1cdb);
  iVar6 = (int)DAT_ffff8f11;
  __saturate(iVar6 + -0x1cdc);
  uVar8 = (uint)(((((bool)((byte)(in_PSW >> 4) & 1) || cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdd)
                  || cVar3 < '\0' && -1 < DAT_ffff8f11 + -0x1cdb) ||
                 cVar3 < '\0' && -1 < iVar6 + -0x1cdc) || cVar3 < '\0' && -1 < iVar6 + -0x326d) << 4
  ;
  __saturate(iVar6 + -0x326d);
  iVar4 = func_0x3271f950();
  uVar2 = (undefined2)unaff_lp;
  *(undefined2 *)(iVar6 + -7) = uVar2;
  *(undefined2 *)(iVar6 + -7) = uVar2;
  iVar5 = *(int *)(*(int *)(iVar6 + -0x3175) + 0xf8);
  __saturate(iVar5 + -1);
  uVar7 = (uint)*(ushort *)(*(int *)(iVar6 + -0x3175) + 0x18);
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  uVar1 = *(ushort *)(uVar7 + 0x18);
  *(undefined2 *)(DAT_ffff820f + 0x325e) = uVar2;
  uVar1 = *(ushort *)(uVar1 + 0x18);
  iVar6 = (int)DAT_ffff8f10;
  *(undefined4 *)(iVar6 + 0x1cd6) = unaff_lp;
  uVar7 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  *(undefined4 *)(uVar7 + 0x18) = 0;
  uVar1 = *(ushort *)(uVar7 + 0x18);
  uVar7 = (uint)uVar1;
  do {
  } while ((bool)((byte)(uVar8 >> 4) & 1) || SCARRY4(iVar5,-1));
  *(undefined2 *)(uVar7 + 0xb8) = in_r12;
  *(undefined1 *)(iVar4 + 0x3274) = in_r16;
  *(ushort *)(iVar6 + 0x326d) = uVar1;
  __saturate(uVar7 - 5);
  __saturate(*(ushort *)(uVar7 + 0x18) - 1);
  iVar4 = *(char *)(param_3 + -0x7d85) + -0x21a1;
  __saturate(iVar4);
  *(short *)(*(char *)(param_3 + -0x7d85) + 0x327a) = (short)iVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006090e @ 0006090e (size 154) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006090e(undefined4 param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int in_r10;
  undefined2 in_r12;
  undefined1 in_r16;
  int unaff_r26;
  int iVar2;
  int unaff_ep;
  uint uVar3;
  undefined4 unaff_lp;
  uint in_PSW;
  
  __saturate(unaff_r26 + -1);
  uVar1 = *(ushort *)(unaff_ep + 0x18);
  *(undefined2 *)(uVar1 + 0xb8) = in_r12;
  uVar1 = *(ushort *)(uVar1 + 0x18);
  *(short *)(DAT_ffff820f + 0x325e) = (short)unaff_lp;
  uVar1 = *(ushort *)(uVar1 + 0x18);
  iVar2 = (int)DAT_ffff8f10;
  *(undefined4 *)(iVar2 + 0x1cd6) = unaff_lp;
  uVar3 = (uint)*(ushort *)(uVar1 + 0x18);
  *(undefined2 *)(uVar3 + 0xb8) = in_r12;
  *(undefined4 *)(uVar3 + 0x18) = 0;
  uVar1 = *(ushort *)(uVar3 + 0x18);
  uVar3 = (uint)uVar1;
  do {
  } while ((bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(unaff_r26,-1));
  *(undefined2 *)(uVar3 + 0xb8) = in_r12;
  *(undefined1 *)(in_r10 + 0x3274) = in_r16;
  *(ushort *)(iVar2 + 0x326d) = uVar1;
  __saturate(uVar3 - 5);
  __saturate(*(ushort *)(uVar3 + 0x18) - 1);
  iVar2 = *(char *)(param_3 + -0x7d85) + -0x21a1;
  __saturate(iVar2);
  *(short *)(*(char *)(param_3 + -0x7d85) + 0x327a) = (short)iVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060bfe @ 00060bfe (size 238) ====

void FUN_00060bfe(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  int unaff_tp;
  undefined2 in_r13;
  int in_r14;
  undefined1 unaff_r23;
  int iVar3;
  int unaff_ep;
  int iVar4;
  uint uVar5;
  uint unaff_lp;
  char local_1900;
  
  *(undefined2 *)(unaff_ep + 0x60) = *(undefined2 *)(unaff_ep + 0x46);
  *(undefined2 *)(unaff_ep + 0x86) = param_3;
  iVar3 = (int)DAT_00007c26;
  cVar1 = *(char *)(*(int *)(*(int *)(*(ushort *)(unaff_ep + 0x18) + 0xf8) + 0xf8) + 0x7c);
  iVar4 = (int)cVar1;
  *(short *)(iVar3 + 0x21a8) = (short)cVar1;
  *(undefined1 *)(iVar4 + 0x50) = unaff_r23;
  *(short *)(iVar3 + 0x21aa) = (short)cVar1;
  *(undefined1 *)(iVar4 + 0x50) = unaff_r23;
  uVar2 = *(undefined2 *)(iVar4 + 2);
  __saturate(unaff_lp & 0xf17c);
  *(int *)(iVar4 + 4) = (int)local_1900;
  __saturate(in_r14 - (int)&stack0x00000000);
  uVar5 = (uint)*(ushort *)(*(ushort *)(*(int *)(*(int *)(iVar4 + 0xf8) + 0xf8) + 0x18) + 0x18);
  *(short *)(uVar5 + 0xc) = (short)(unaff_lp & 0xf17c);
  *(char *)(unaff_tp + 0x40) = (char)uVar2;
  *(undefined2 *)(uVar5 + 0x3a) = in_r13;
  (*(code *)&LAB_00000030)(0,param_2,*(undefined4 *)(uVar5 + 0x80));
  return;
}


// ==== FUN_00060d8a @ 00060d8a (size 50) ====

void FUN_00060d8a(uint param_1,undefined4 param_2)

{
  int unaff_r29;
  int unaff_ep;
  
                    /* WARNING: Could not recover jumptable at 0x00060dba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00060dbc + *(short *)(&DAT_00060dbc + unaff_r29 * 2) * 2))
            (param_1 >> 0x1c,param_2,
             (int)*(short *)(*(char *)(*(int *)(unaff_ep + 0xf8) + 0x1f) + 0x80));
  return;
}


// ==== FUN_00060efe @ 00060efe (size 32) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060efe(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  int unaff_gp;
  int iVar1;
  uint unaff_r23;
  int unaff_ep;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(unaff_ep + 0x18);
  while( true ) {
    *(short *)(uVar2 + 0x60) = (short)param_4;
    __saturate(*(short *)(uVar2 + 0x1e) - param_2);
    iVar1 = unaff_gp + unaff_r23 * 2;
    unaff_gp = iVar1 + unaff_r23;
    if (unaff_r23 + iVar1 != 0) break;
    param_4 = *(undefined4 *)(uVar2 + 0xcc);
    *(uint *)(uVar2 + 0x5c) = (int)*(short *)(uVar2 + 0x4a) & unaff_r23;
  }
  __saturate(uVar2 - 5);
  *(uint *)(*(char *)(param_3 + -0x7d85) + 0x21a0) = uVar2 - 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00060f10 @ 00060f10 (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00060f10(undefined4 param_1,int param_2,int param_3)

{
  int unaff_gp;
  int iVar1;
  uint unaff_r23;
  int unaff_ep;
  
  while( true ) {
    iVar1 = unaff_gp + unaff_r23 * 2;
    unaff_gp = iVar1 + unaff_r23;
    if (unaff_r23 + iVar1 != 0) break;
    *(uint *)(unaff_ep + 0x5c) = (int)*(short *)(unaff_ep + 0x4a) & unaff_r23;
    *(short *)(unaff_ep + 0x60) = (short)*(undefined4 *)(unaff_ep + 0xcc);
    __saturate(*(short *)(unaff_ep + 0x1e) - param_2);
  }
  __saturate(unaff_ep + -5);
  *(int *)(*(char *)(param_3 + -0x7d85) + 0x21a0) = unaff_ep + -5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00061312 @ 00061312 (size 42) ====

void FUN_00061312(void)

{
  code *unaff_gp;
  code *in_r12;
  int in_r16;
  int unaff_r25;
  undefined4 unaff_r28;
  int unaff_ep;
  
  (*in_r12)();
  *(int *)(unaff_ep + 0x80) = unaff_ep;
  __saturate(unaff_r28);
  (*unaff_gp)();
  (*(code *)0x0)();
  __saturate(in_r16 + 4);
  (*(code *)0x0)();
                    /* WARNING: Could not recover jumptable at 0x0006133a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006133c + *(short *)(&DAT_0006133c + unaff_r25 * 2) * 2))();
  return;
}


// ==== FUN_00061968 @ 00061968 (size 248) ====

void FUN_00061968(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int in_r1;
  uint in_r2;
  int unaff_gp;
  uint in_r11;
  uint in_r14;
  int iVar5;
  undefined2 in_r15;
  undefined4 in_r19;
  int unaff_r25;
  int iVar6;
  int unaff_r28;
  uint unaff_r29;
  int iVar7;
  uint uVar8;
  
  iVar7 = unaff_gp * 6;
  cVar2 = *(char *)(iVar7 + 0xd);
  __saturate(unaff_r25 + 0x5d8d);
  __saturate(-unaff_r29);
  __saturate(((in_r14 ^ (uint)&stack0x00000000 | in_r11) ^ (uint)&stack0x00000000) -
             (int)&stack0x00000000);
  *(undefined2 *)(iVar7 + 0x24) = in_r15;
  param_4 = param_4 - unaff_r28;
  __saturate(param_4);
  sVar4 = *(short *)(iVar7 + 2);
  *(undefined2 *)(iVar7 + 4) = *(undefined2 *)(iVar7 + 4);
  cVar3 = *(char *)(iVar7 + 5);
  __saturate(in_r11 - ~(uint)&stack0x00000000);
  __saturate(-param_4);
  iVar5 = (in_r11 - ~(uint)&stack0x00000000) - (int)&stack0x00000000;
  __saturate(iVar5);
  iVar6 = (int)*(char *)(iVar7 + 8) - in_r2;
  __saturate(iVar6);
  __saturate(unaff_r29);
  uVar8 = (uint)*(ushort *)(iVar7 + 0x18);
  *(short *)(uVar8 + 2) = sVar4;
  __saturate(param_4);
  iVar6 = iVar6 - in_r1;
  __saturate(iVar6);
  __saturate(*(short *)(uVar8 + 0xe4) - iVar5);
  __saturate(in_r1 - param_4);
  __saturate(iVar6 - cVar3);
  *(uint *)(uVar8 + 0x3c) = uVar8;
  *(undefined4 *)((in_r1 - param_4) + -0x2c6) = in_r19;
  __saturate(*(char *)(uVar8 + 0x3b) + -5);
  uVar1 = *(ushort *)((((unaff_r29 / in_r2 + 1) / 0 & in_r2) / 0) / 0 - 0x1f7e);
  iVar5 = unaff_gp - *(char *)(sVar4 + -0x7d85);
  __saturate(iVar5);
  __saturate(in_r2 - iVar5);
  *(short *)(in_r2 - 0x18f8) = (short)cVar2;
  __saturate(~(int)cVar2 - 0xc);
  __saturate((uint)uVar1 - (int)cVar3);
                    /* WARNING: Could not recover jumptable at 0x00061a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00061a60 + *(short *)(&DAT_00061a60 + param_2 * 2) * 2))();
  return;
}


// ==== FUN_00061cd4 @ 00061cd4 (size 560) ====

/* WARNING: Instruction at (ram,0x00061ed6) overlaps instruction at (ram,0x00061ed4)
    */
/* WARNING: Removing unreachable block (ram,0x00061d6e) */
/* WARNING: Removing unreachable block (ram,0x00061d72) */

void FUN_00061cd4(int param_1,undefined4 param_2,code *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 in_r1;
  code *in_r2;
  undefined2 in_r10;
  undefined2 in_r11;
  uint extraout_r11;
  int iVar5;
  int in_r15;
  int iVar6;
  uint in_r18;
  uint uVar7;
  uint unaff_r21;
  uint uVar8;
  uint unaff_r24;
  int unaff_r25;
  int unaff_r29;
  uint unaff_ep;
  
  uVar4 = -unaff_r29;
  *(undefined2 *)(unaff_ep + 0x44) = in_r11;
  __saturate(&stack0x00000000 + ~(uint)&stack0x00000000);
  *(undefined2 *)(unaff_ep + 0xc2) = in_r10;
  *(short *)(unaff_ep + 0x24) = (short)in_r15;
  *(undefined2 *)(unaff_ep + 0x42) = in_r10;
  iVar6 = in_r15 - unaff_r24;
  __saturate(iVar6);
  *(short *)(unaff_ep + 0x24) = (short)iVar6;
  iVar5 = (int)(&stack0x00000000 + ~(uint)&stack0x00000000) - (int)&stack0x00000000;
  __saturate(iVar5);
  (*in_r2)();
  *(short *)(unaff_ep + 2) = (short)param_4;
  uVar2 = (undefined1)uVar4;
  *(undefined1 *)(unaff_ep + 0x34) = uVar2;
  __saturate(iVar6 - unaff_r24);
  *(undefined1 *)(unaff_ep + 0x3c) = uVar2;
  iVar6 = (iVar6 - unaff_r24) - unaff_r25;
  __saturate(iVar6);
  __saturate(&stack0x00000000 + iVar5);
  *(undefined1 *)(unaff_ep + 0x3c) = uVar2;
  *(short *)(unaff_ep + 0x24) = (short)iVar6;
  iVar6 = iVar6 - unaff_r24;
  __saturate(iVar6);
  __saturate(&stack0x00000000 + (int)(&stack0x00000000 + iVar5));
  *(undefined1 *)(unaff_ep + 0x3c) = uVar2;
  *(short *)(unaff_ep + 0x24) = (short)iVar6;
  iVar6 = iVar6 - unaff_r24;
  __saturate(iVar6);
  *(undefined1 *)(unaff_ep + 0x37) = uVar2;
  *(int *)(unaff_ep + 0x78) = (int)*(char *)(unaff_ep + 0x12);
  cVar1 = *(char *)(unaff_ep + 0x10);
  __saturate(*(char *)(unaff_ep + 0x12) - param_1);
  __saturate(unaff_r29);
  *(undefined1 *)(param_4 + -0x784) = in_r1;
  param_1 = param_1 >> 8;
  __saturate(uVar4);
  pbVar3 = (byte *)((unaff_r21 ^ unaff_ep ^ in_r18 ^ extraout_r11) + 0x29f8);
  *pbVar3 = *pbVar3 | 2;
  uVar8 = (uint)*(ushort *)(unaff_ep + 0x1e);
  __saturate(*(undefined4 *)(unaff_ep + 0x68));
  uVar7 = (uint)*(ushort *)(unaff_ep + 0x1e);
  *(uint *)(unaff_ep - 0x2c6) = uVar7;
  __saturate(*(char *)(unaff_ep + 0x3b) + -5);
  *(uint *)(*(char *)(unaff_ep + 0x3b) + 0x77) = uVar4 ^ (int)cVar1;
  do {
    param_1 = param_1 >> 3;
  } while (param_1 < 0);
  do {
    iVar6 = iVar6 + unaff_r24;
    __saturate(iVar6);
    (*param_3)();
    uVar8 = uVar8 ^ unaff_r24;
  } while ((int)uVar8 < 0);
  __saturate(iVar6 + unaff_r25);
                    /* WARNING: Could not recover jumptable at 0x00061f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00061f04 + *(short *)(&DAT_00061f04 + uVar7 * 2) * 2))();
  return;
}


// ==== FUN_00062bbc @ 00062bbc (size 280) ====

void FUN_00062bbc(undefined1 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int in_r1;
  uint in_r2;
  undefined1 *puVar7;
  code *unaff_gp;
  undefined2 uVar8;
  uint in_r11;
  undefined4 in_r12;
  uint uVar9;
  undefined4 uVar10;
  int in_r13;
  undefined1 uVar11;
  code *in_r16;
  int in_r17;
  undefined2 in_r19;
  int unaff_r22;
  int unaff_r23;
  int unaff_r26;
  uint unaff_r27;
  int iVar12;
  int iVar13;
  short sVar14;
  int unaff_r29;
  uint uVar15;
  short sVar16;
  int unaff_lp;
  uint in_PSW;
  
  *(undefined2 *)(unaff_lp + -0x1ae6) = in_r19;
  uVar15 = ~unaff_r27;
  *(undefined4 *)(uVar15 + 0xc4) = in_r12;
  *(undefined4 *)(uVar15 + 0xb8) = in_r12;
  bVar1 = (byte)((uint)unaff_r22 >> 0x1f);
  bVar3 = (bool)((byte)(in_PSW >> 4) & 1) ||
          (byte)((uint)unaff_r26 >> 0x1f) != bVar1 &&
          bVar1 == (byte)((uint)(unaff_r26 - unaff_r22) >> 0x1f);
  __saturate(unaff_r26 - unaff_r22);
  sVar14 = (short)unaff_r29;
  sVar16 = ~(ushort)unaff_r27 * sVar14;
  uVar9 = *(uint *)(uVar15 + 0xbc);
  do {
    *(uint *)(uVar15 + 0xbc) = uVar9;
    uVar10 = *(undefined4 *)(uVar15 + 0xc0);
    sVar16 = sVar16 * sVar14 * sVar14 * sVar14;
    *(undefined4 *)(uVar15 + 0xc0) = uVar10;
    cVar5 = (&DAT_ffffe081)[param_3];
    iVar12 = (int)cVar5;
    *(undefined4 *)(uVar15 + 0xb8) = uVar10;
    bVar1 = -(cVar5 >> 7);
    bVar4 = bVar3 || bVar1 != 0 && bVar1 == (byte)((uint)-iVar12 >> 0x1f);
    __saturate(-iVar12);
    *(undefined4 *)(uVar15 + 0xbc) = *(undefined4 *)(uVar15 + 0xbc);
    *(undefined4 *)(uVar15 + 0xc0) = *(undefined4 *)(uVar15 + 0xc0);
    iVar13 = in_r1 + iVar12;
    uVar6 = (uint)in_r1 >> 0x1f;
    bVar1 = (byte)((uint)-iVar12 >> 0x1f);
    __saturate(in_r1 + iVar12);
    *(char *)(in_r11 + 0x32b3) = (char)in_r16;
    *(undefined4 *)(uVar15 + 0xc4) = *(undefined4 *)(uVar15 + 0xc4);
    in_r1 = in_r1 >> 0xe;
    uVar9 = *(uint *)(uVar15 + 0xb8) >> 0x14;
    bVar3 = true;
  } while (bVar4 || (byte)uVar6 != bVar1 && bVar1 == (byte)((uint)iVar13 >> 0x1f));
  do {
    cVar5 = *(char *)(param_3 + -0x7d85);
    uRamffffffff = (char)in_r16;
    *(uint *)(uVar15 + 0x7c) = unaff_r27;
    __saturate(in_r1 - cVar5);
    uVar9 = *(uint *)(uVar15 + 0xa8);
    sVar16 = sVar16 * sVar14;
    *(uint *)(uVar15 + 0xc4) = uVar9;
    in_r2 = (in_r2 ^ in_r11) & 0xff;
    puVar2 = (undefined1 *)((int)register0x0000000c + uVar9);
    bVar3 = CARRY4((uint)register0x0000000c,uVar9);
    puVar7 = (undefined1 *)((int)register0x0000000c + uVar9);
    register0x0000000c = (BADSPACEBASE *)((int)register0x0000000c + uVar9);
    __saturate(puVar7);
  } while (bVar3 || puVar2 == (undefined1 *)0x0);
  *(uint *)(unaff_r23 + 0x56a0) = in_r2;
  *(uint *)(uVar15 + 0xc4) = uVar9;
  iVar13 = (int)DAT_00005426;
  (*in_r16)(param_1);
  uVar11 = SUB41(in_r16,0);
  *(undefined1 *)(in_r13 + 0x6556) = uVar11;
  iVar12 = (int)sVar16 * (int)sVar14 - unaff_r29;
  __saturate(iVar12);
  *(int *)(iVar13 + 0x32a3) = iVar12;
  uVar8 = (*unaff_gp)();
  *(uint *)(uVar15 + 0xc4) = uVar9;
  *(undefined2 *)(uVar15 + 0x54) = uVar8;
  __saturate(0xc);
                    /* WARNING: Could not recover jumptable at 0x00062cd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uRamffffffff = uVar11;
  (*(code *)(&DAT_00062cd4 + *(short *)(&DAT_00062cd4 + in_r17 * 2) * 2))();
  return;
}


// ==== FUN_00062f8e @ 00062f8e (size 96) ====

/* WARNING: Instruction at (ram,0x00063072) overlaps instruction at (ram,0x00063070)
    */
/* WARNING: Removing unreachable block (ram,0x000630b4) */

void FUN_00062f8e(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  undefined4 in_r12;
  undefined4 uVar8;
  undefined1 in_r16;
  int in_r17;
  int unaff_r21;
  int unaff_r25;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 unaff_r27;
  int unaff_r28;
  int iVar13;
  short sVar14;
  int unaff_r29;
  int unaff_ep;
  int iVar15;
  int unaff_lp;
  int iVar16;
  int iVar17;
  uint in_PSW;
  uint uVar18;
  
  *(undefined4 *)(unaff_ep + 0xc4) = in_r12;
  uVar18 = in_PSW & 0xfffffff0;
  func_0x001f169c();
  *(int *)(unaff_r28 + 0x32b1) = unaff_lp;
  iVar13 = unaff_r28 + -0x12;
  uVar9 = *(undefined4 *)(unaff_ep + 0xf8);
  bVar1 = -(char)(iVar13 >> 0x1f);
  __saturate(-iVar13);
  sVar14 = (short)unaff_r29;
  uVar8 = *(undefined4 *)(unaff_ep + 0xc0);
  iVar16 = unaff_lp + -9;
  __saturate(iVar16);
  *(undefined1 *)(param_4 + 0x655f) = in_r16;
  iVar10 = (int)(short)((short)uVar9 * sVar14) * (int)sVar14;
  *(undefined4 *)(unaff_ep + 0xc0) = uVar8;
  bVar3 = (byte)((uint)unaff_r21 >> 0x18);
  bVar2 = bVar3 >> 7;
  iVar17 = iVar16 - unaff_r21;
  __saturate(iVar17);
  iVar11 = iVar10 + -9;
  __saturate(iVar11);
  *(undefined1 *)(param_3 + 0x655e) = in_r16;
  __saturate(iVar17 + -9);
  bVar3 = bVar3 >> 7;
  iVar12 = iVar11 - unaff_r21;
  __saturate(iVar12);
  *(undefined4 *)(unaff_ep + 0xb8) = uVar8;
  __saturate(iVar12 + -9);
  iVar15 = unaff_r29 * 0x6563;
  *(undefined4 *)(iVar15 + 0xb8) = uVar8;
  sVar7 = *(short *)(iVar15 + 0x80);
  bVar4 = ((((((((bool)((byte)(uVar18 >> 4) & 1) ||
                bVar1 != 0 && bVar1 == (byte)((uint)-iVar13 >> 0x1f)) ||
               unaff_lp < 0 && -1 < unaff_lp + -9) ||
              (byte)((uint)iVar16 >> 0x1f) != bVar2 &&
              bVar2 == (byte)((uint)(iVar16 - unaff_r21) >> 0x1f)) || iVar10 < 0 && -1 < iVar10 + -9
             ) || iVar17 < 0 && -1 < iVar17 + -9) ||
           (byte)((uint)iVar11 >> 0x1f) != bVar3 &&
           bVar3 == (byte)((uint)(iVar11 - unaff_r21) >> 0x1f)) || iVar12 < 0 && -1 < iVar12 + -9)
          || SCARRY4(iVar12 + -9,-1);
  __saturate(iVar12 + -10);
  iVar10 = *(char *)(sVar7 + -0x7d85) + -9;
  *(uint *)(iVar15 + 0xc4) = *(uint *)(iVar15 + 0xb8) >> 0x17;
  do {
    bVar1 = (byte)((uint)iVar10 >> 0x1f);
    bVar5 = bVar4 || (byte)((byte)(param_1 >> 0x1f) >> 7) != bVar1 &&
                     bVar1 == (byte)((uint)((param_1 >> 0xd) - iVar10) >> 0x1f);
    iVar10 = (param_1 >> 0xd) - iVar10;
    __saturate(iVar10);
    bVar4 = true;
  } while (bVar5);
  uVar8 = *(undefined4 *)(iVar15 + 0x74);
  *(undefined4 *)(iVar15 + 0xc4) = 0;
  iVar10 = *(int *)(iVar15 + 0x84);
  param_1 = param_1 >> 0x19;
  *(undefined4 *)(iVar15 + 0xa8) = 0;
  __saturate(iVar15 + -5);
  __saturate(&stack0x00000000 + unaff_r29);
  do {
  } while (SCARRY4(iVar15,-5) || SCARRY4((int)&stack0x00000000,unaff_r29));
  do {
    *(undefined4 *)(iVar15 + 0x6f) = uVar8;
    *(undefined4 *)(iVar15 + 0xbf) = 0;
    uVar9 = *(undefined4 *)(iVar15 + 0xf3);
    param_1 = param_1 >> 0xc;
    *(undefined4 *)(iVar15 + 0xa3) = 0;
    *(undefined4 *)(iVar15 + 0xbf) = 0;
    *(undefined4 *)(iVar15 + 0xbf) = 0;
    iVar11 = (int)DAT_ffffe091;
    *(undefined4 *)(iVar15 + 0xbf) = 0;
    __saturate(*(short *)(iVar15 + 0x5b) - iVar11);
    *(undefined4 *)(iVar15 + 0xbf) = 0;
    *(byte *)(unaff_r25 + -0x18f8) = *(byte *)(unaff_r25 + -0x18f8) | 4;
    cVar6 = *(char *)(sVar7 + -0x7d85);
    __saturate((int)(short)((short)uVar9 * sVar14 * sVar14) * (int)sVar14 + 0xb);
    *(undefined4 *)(iVar15 + 0x77) = unaff_r27;
    *(char *)(iVar10 + 0x654c) = '\x05' - (char)param_1;
    __saturate(in_r17 - (cVar6 + -0x12));
  } while( true );
}


// ==== FUN_00062fee @ 00062fee (size 284) ====

/* WARNING: Instruction at (ram,0x00063072) overlaps instruction at (ram,0x00063070)
    */
/* WARNING: Removing unreachable block (ram,0x000630b4) */

void FUN_00062fee(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint in_r12;
  int in_r17;
  undefined4 uVar5;
  int unaff_r25;
  int unaff_r26;
  undefined4 uVar6;
  undefined4 unaff_r27;
  int iVar7;
  int iVar8;
  short sVar9;
  int unaff_r29;
  int unaff_ep;
  uint in_PSW;
  
  bVar2 = (bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(unaff_r26,-1);
  __saturate(unaff_r26 + -1);
  iVar7 = *(char *)(param_3 + -0x7d85) + -9;
  sVar9 = (short)unaff_r29;
  *(uint *)(unaff_ep + 0xc4) = in_r12 >> 0x17;
  do {
    bVar1 = (byte)((uint)iVar7 >> 0x1f);
    bVar3 = bVar2 || (byte)((uint)param_1 >> 0x1f) != bVar1 &&
                     bVar1 == (byte)((uint)(param_1 - iVar7) >> 0x1f);
    iVar7 = param_1 - iVar7;
    __saturate(iVar7);
    bVar2 = true;
  } while (bVar3);
  uVar5 = *(undefined4 *)(unaff_ep + 0x74);
  *(undefined4 *)(unaff_ep + 0xc4) = 0;
  iVar7 = *(int *)(unaff_ep + 0x84);
  param_1 = param_1 >> 0xc;
  *(undefined4 *)(unaff_ep + 0xa8) = 0;
  __saturate(unaff_ep + -5);
  __saturate(&stack0x00000000 + unaff_r29);
  do {
  } while (SCARRY4(unaff_ep,-5) || SCARRY4((int)&stack0x00000000,unaff_r29));
  do {
    *(undefined4 *)(unaff_ep + 0x6f) = uVar5;
    *(undefined4 *)(unaff_ep + 0xbf) = 0;
    uVar6 = *(undefined4 *)(unaff_ep + 0xf3);
    param_1 = param_1 >> 0xc;
    *(undefined4 *)(unaff_ep + 0xa3) = 0;
    *(undefined4 *)(unaff_ep + 0xbf) = 0;
    *(undefined4 *)(unaff_ep + 0xbf) = 0;
    iVar8 = (int)DAT_ffffe091;
    *(undefined4 *)(unaff_ep + 0xbf) = 0;
    __saturate(*(short *)(unaff_ep + 0x5b) - iVar8);
    *(undefined4 *)(unaff_ep + 0xbf) = 0;
    *(byte *)(unaff_r25 + -0x18f8) = *(byte *)(unaff_r25 + -0x18f8) | 4;
    cVar4 = *(char *)(param_3 + -0x7d85);
    __saturate((int)(short)((short)uVar6 * sVar9 * sVar9) * (int)sVar9 + 0xb);
    *(undefined4 *)(unaff_ep + 0x77) = unaff_r27;
    *(char *)(iVar7 + 0x654c) = '\x05' - (char)param_1;
    __saturate(in_r17 - (cVar4 + -0x12));
  } while( true );
}


// ==== FUN_00063362 @ 00063362 (size 410) ====

/* WARNING: Instruction at (ram,0x00063440) overlaps instruction at (ram,0x0006343e)
    */
/* WARNING: Removing unreachable block (ram,0x0006333a) */
/* WARNING: Removing unreachable block (ram,0x00063308) */
/* WARNING: Removing unreachable block (ram,0x0006334a) */

void FUN_00063362(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint in_r1;
  int iVar7;
  int in_r10;
  undefined2 *in_r11;
  int in_r16;
  int iVar8;
  uint unaff_r22;
  int unaff_r26;
  int iVar9;
  uint uVar10;
  uint unaff_r27;
  uint uVar11;
  int unaff_r29;
  int unaff_ep;
  uint uVar12;
  int unaff_lp;
  uint in_PSW;
  
  *in_r11 = (short)unaff_r27;
  iVar7 = (int)*(short *)(*(ushort *)(unaff_ep + 0x18) + 8);
  bVar2 = (byte)(unaff_r22 >> 0x18);
  bVar1 = bVar2 >> 7;
  iVar9 = unaff_r26 - unaff_r22;
  __saturate(iVar9);
  uVar5 = *(ushort *)(unaff_ep + 0x18) ^ *(ushort *)(unaff_lp + -0x67f0);
  uVar12 = (uint)uVar5;
  bVar2 = bVar2 >> 7;
  __saturate(iVar9 - unaff_r22);
  bVar3 = -(char)(unaff_r29 >> 0x1f);
  uVar6 = -unaff_r29;
  __saturate(uVar6);
  iVar8 = 0x13750003;
  *(short *)(uVar12 - 0x18f8) = (short)in_r1;
  DAT_000000ff = '\x03';
  uVar10 = (int)(short)(iVar9 - unaff_r22) * (int)(short)uVar6;
  if ((unaff_r22 < 0xffffa17f) && (in_r10 = (int)*(short *)(uVar12 + 0x42), unaff_r27 != uVar6)) {
    *(undefined1 *)(param_3 + 0x1320) = 3;
    __saturate(0xffffecdf);
    cVar4 = *(char *)(uVar12 + 0x50);
    iVar8 = (int)cVar4;
    *(char *)(param_3 + 0x1320) = cVar4;
    uVar11 = 0x1321;
    __saturate(0x1321);
    if ((uVar6 < unaff_r27) &&
       (uVar10 = (int)(short)uVar10 * (int)(short)uVar6, DAT_000000ff = cVar4, unaff_r27 <= uVar6))
    {
      *(char *)(param_3 + 0x12ee) = cVar4;
      __saturate(0xffffecdf);
      *(char *)(param_3 + 0x12ef) = cVar4;
      *(char *)(param_3 + 0x1320) = cVar4;
      goto LAB_00063410;
    }
  }
  else {
LAB_00063410:
    uVar11 = in_r1 | 0x1322;
    if (((!(bool)((byte)(in_PSW >> 4) & 1) &&
         ((byte)((uint)unaff_r26 >> 0x1f) == bVar1 || bVar1 != (byte)(unaff_r26 - unaff_r22 >> 0x1f)
         )) && ((byte)((uint)iVar9 >> 0x1f) == bVar2 || bVar2 != (byte)(iVar9 - unaff_r22 >> 0x1f)))
        && (bVar3 == 0 || bVar3 != (byte)((uint)-unaff_r29 >> 0x1f))) {
      *(short *)(uVar6 + 0x970) = (short)unaff_r27;
      return;
    }
    *(char *)(iVar7 + 0x2646) = (char)iVar8;
    iVar8 = iVar8 + 6;
    __saturate(iVar8);
    DAT_0000007f = (undefined1)iVar8;
    __saturate(uVar10 - unaff_r22);
    *(undefined1 *)(param_3 + 0x12f2) = DAT_0000007f;
    *(char *)(uVar12 + 0xe) = (char)uVar5 + -3;
    if (unaff_r22 < uVar10) {
      uVar11 = 0x1321;
      goto LAB_0006348c;
    }
  }
  if (unaff_r27 < uVar6) {
    *(char *)(in_r10 + 0x1323) = (char)iVar8;
    (*(code *)&LAB_00000030)(param_1 + in_r16,param_2,(int)*(short *)(uVar12 + 0x80));
    return;
  }
LAB_0006348c:
  *(char *)(iVar7 + 0x1320) = (char)iVar8;
  __saturate(-uVar11);
  *(byte *)(iVar8 + -0x67ff) = *(byte *)(iVar8 + -0x67ff) | 1;
  (*(code *)&LAB_00000030)();
  return;
}


// ==== FUN_0006364c @ 0006364c (size 20) ====

void FUN_0006364c(void)

{
  int in_r1;
  short unaff_r26;
  int unaff_r28;
  short unaff_r29;
  int unaff_ep;
  
  __saturate(in_r1 - unaff_r28);
  if (in_r1 != unaff_r28) {
                    /* WARNING: Could not recover jumptable at 0x0006365c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0006365e + *(short *)(&DAT_0006365e + (int)unaff_r26 * (int)unaff_r29 * 2) * 2))
              ();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00063618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006361a + *(short *)(&DAT_0006361a + unaff_ep * 2) * 2))();
  return;
}


// ==== FUN_000637be @ 000637be (size 258) ====

void FUN_000637be(undefined2 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  int unaff_gp;
  int iVar3;
  int iVar4;
  undefined2 in_r11;
  int in_r14;
  undefined1 in_r16;
  int in_r18;
  int in_r19;
  uint unaff_r21;
  int unaff_r24;
  int unaff_r26;
  int iVar5;
  uint unaff_r27;
  int iVar6;
  int unaff_ep;
  int unaff_lp;
  
  while( true ) {
    iVar3 = unaff_gp;
    __saturate(unaff_ep + -5);
    *(undefined1 *)(param_3 + 0x12f2) = in_r16;
    iVar4 = (int)*(short *)(unaff_ep + -1);
    if (SCARRY4(unaff_ep,-5)) {
      return;
    }
    *(undefined1 *)(param_3 + 0x2646) = in_r16;
    iVar6 = in_r19 - *(char *)(param_3 + -0xf84);
    __saturate(iVar6);
    iVar5 = (int)(short)unaff_r26 * (int)(short)iVar3;
    in_r14 = in_r14 - (int)&stack0x00000000;
    __saturate(in_r14);
    *(undefined1 *)(param_3 + 0x1323) = in_r16;
    __saturate(-iVar6);
    in_r16 = 9;
    if (iVar6 == 0) break;
    unaff_r21 = unaff_r21 | unaff_r27 | (uint)&stack0x00000000;
    __saturate(in_r18 + iVar6);
    bVar1 = (byte)(unaff_r21 >> 0x1f);
    unaff_r26 = iVar5 - unaff_r21;
    __saturate(unaff_r26);
    if ((byte)((uint)iVar5 >> 0x1f) != bVar1 && bVar1 == (byte)(iVar5 - unaff_r21 >> 0x1f)) {
      *(undefined1 *)(param_3 + 0x1323) = 9;
      DAT_0000007f = 9;
      return;
    }
    *(int *)(unaff_ep + 0x6f) = unaff_lp;
    unaff_gp = unaff_lp + -0x1a7e;
    in_r19 = iVar3;
    unaff_ep = unaff_ep + -5;
  }
  *(undefined2 *)(unaff_ep + 0x7f) = in_r11;
  *(undefined1 *)(param_3 + 0x2646) = 0xf1;
  __saturate(in_r18);
  cVar2 = *(char *)(param_3 + -0x603);
  (*(code *)(param_3 + -0x703))();
  *(undefined2 *)(unaff_r24 + -0x18f8) = param_1;
  *(int *)(cVar2 + 0x1395) = unaff_lp;
  __saturate(0xfffffffd);
  DAT_1319d0fa = DAT_1319d0fa | 1;
  *(undefined1 *)(iVar4 + 0x1320) = 0xfd;
  *(undefined1 *)(*(ushort *)(unaff_ep + 0x13) + 0x68) = 0;
  (*(code *)&LAB_00000030)();
  return;
}


// ==== FUN_00063c08 @ 00063c08 (size 36) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00063c08(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int in_r1;
  undefined2 unaff_tp;
  uint in_r12;
  byte bVar4;
  uint in_r17;
  int in_r19;
  uint unaff_r21;
  undefined4 uVar5;
  int unaff_r22;
  uint unaff_r24;
  int iVar6;
  uint uVar7;
  uint unaff_r29;
  byte *unaff_ep;
  undefined2 unaff_lp;
  
  sVar2 = *(short *)(unaff_ep + 2);
  *(undefined2 *)(DAT_ffffa204 + 0x1318) = unaff_lp;
  bVar4 = (byte)(in_r17 / 4);
  *(byte *)(param_3 + 0x1320) = bVar4;
  *(undefined2 *)(unaff_ep + 0x5e) = *(undefined2 *)(unaff_ep + 0x5e);
  *(short *)(unaff_ep + 2) = sVar2;
  if ((unaff_r21 ^ unaff_r24) != (int)sVar2 || in_r19 != 0) {
    *(byte *)(param_3 + 0x4736) = bVar4;
    uVar5 = *(undefined4 *)(unaff_ep + 4);
    uVar3 = *(ushort *)(unaff_ep + 0x18);
    iVar6 = (int)DAT_00007c82;
    __saturate(param_1 - iVar6);
    *(char *)(param_3 + 0x4736) = (char)((unaff_r22 - 0xcU) / 0xe);
    bVar4 = ~(byte)in_r1;
    __saturate(-(unaff_r29 & 0xffff));
    unaff_ep = (byte *)(uint)*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
    bVar1 = unaff_ep[0x13];
    *(undefined4 *)(unaff_ep + 0xc) = uVar5;
    *(byte *)(param_3 + 0x2646) = bVar4;
    uVar7 = (param_1 - iVar6) - (int)(char)bVar1;
    __saturate(uVar7);
    if ((uVar7 & in_r12) != 0) goto FUN_00063d34;
  }
  *(byte *)(param_3 + 0x12ef) = bVar4;
  *(byte *)(param_3 + 0x12f2) = bVar4;
  iVar6 = (int)DAT_ffffa207;
  *(byte *)(param_3 + 0x2646) = bVar4;
  __saturate(iVar6 - in_r1);
FUN_00063d34:
  *(byte *)(param_3 + 0x12f2) = bVar4;
  *(undefined2 *)(unaff_ep + 0xe8) = unaff_tp;
  *(byte *)(param_3 + 0x4736) = bVar4;
  bVar1 = *unaff_ep;
  bVar4 = unaff_ep[5];
  *(byte *)(param_3 + 0x1320) = bVar4;
  _DAT_0000719b = (ushort)bVar1;
  *(byte *)(param_3 + 0x1320) = bVar4;
  uVar3 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(param_3 + 0x2646) = bVar4;
  return CONCAT44((int)*(short *)(uVar3 + 100),(int)*(short *)(uVar3 + 0x84));
}


// ==== FUN_00063c2c @ 00063c2c (size 264) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00063c2c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int in_r1;
  undefined2 unaff_tp;
  uint in_r12;
  byte in_r16;
  int in_r19;
  int unaff_r21;
  undefined4 uVar4;
  int unaff_r22;
  int unaff_r28;
  int iVar5;
  uint uVar6;
  uint unaff_r29;
  byte *unaff_ep;
  undefined2 unaff_lp;
  
  *(undefined2 *)(unaff_r28 + 0x1318) = unaff_lp;
  *(byte *)(param_3 + 0x1320) = in_r16;
  *(undefined2 *)(unaff_ep + 0x5e) = *(undefined2 *)(unaff_ep + 0x5e);
  *(short *)(unaff_ep + 2) = (short)param_4;
  if (unaff_r21 != param_4 || in_r19 != 0) {
    *(byte *)(param_3 + 0x4736) = in_r16;
    uVar4 = *(undefined4 *)(unaff_ep + 4);
    uVar3 = *(ushort *)(unaff_ep + 0x18);
    iVar5 = (int)DAT_00007c82;
    __saturate(param_1 - iVar5);
    *(char *)(param_3 + 0x4736) = (char)((unaff_r22 - 0xcU) / 0xe);
    in_r16 = ~(byte)in_r1;
    __saturate(-(unaff_r29 & 0xffff));
    unaff_ep = (byte *)(uint)*(ushort *)(*(ushort *)(uVar3 + 0x18) + 0x18);
    bVar1 = unaff_ep[0x13];
    *(undefined4 *)(unaff_ep + 0xc) = uVar4;
    *(byte *)(param_3 + 0x2646) = in_r16;
    uVar6 = (param_1 - iVar5) - (int)(char)bVar1;
    __saturate(uVar6);
    if ((uVar6 & in_r12) != 0) goto FUN_00063d34;
  }
  *(byte *)(param_3 + 0x12ef) = in_r16;
  *(byte *)(param_3 + 0x12f2) = in_r16;
  iVar5 = (int)DAT_ffffa207;
  *(byte *)(param_3 + 0x2646) = in_r16;
  __saturate(iVar5 - in_r1);
FUN_00063d34:
  *(byte *)(param_3 + 0x12f2) = in_r16;
  *(undefined2 *)(unaff_ep + 0xe8) = unaff_tp;
  *(byte *)(param_3 + 0x4736) = in_r16;
  bVar2 = *unaff_ep;
  bVar1 = unaff_ep[5];
  *(byte *)(param_3 + 0x1320) = bVar1;
  _DAT_0000719b = (ushort)bVar2;
  *(byte *)(param_3 + 0x1320) = bVar1;
  uVar3 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(param_3 + 0x2646) = bVar1;
  return CONCAT44((int)*(short *)(uVar3 + 100),(int)*(short *)(uVar3 + 0x84));
}


// ==== FUN_00063d34 @ 00063d34 (size 134) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00063d34(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 unaff_tp;
  undefined1 in_r16;
  byte *unaff_ep;
  
  *(undefined1 *)(param_3 + 0x12f2) = in_r16;
  *(undefined2 *)(unaff_ep + 0xe8) = unaff_tp;
  *(undefined1 *)(param_3 + 0x4736) = in_r16;
  bVar2 = *unaff_ep;
  bVar1 = unaff_ep[5];
  *(byte *)(param_3 + 0x1320) = bVar1;
  _DAT_0000719b = (ushort)bVar2;
  *(byte *)(param_3 + 0x1320) = bVar1;
  uVar3 = *(ushort *)(unaff_ep + 0x18);
  *(byte *)(param_3 + 0x2646) = bVar1;
  return CONCAT44((int)*(short *)(uVar3 + 100),(int)*(short *)(uVar3 + 0x84));
}


// ==== FUN_000642b6 @ 000642b6 (size 114) ====

void FUN_000642b6(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint in_r1;
  int in_r13;
  float fVar2;
  uint in_r18;
  uint uVar3;
  float unaff_r22;
  code *unaff_r23;
  int unaff_r26;
  int iVar4;
  int unaff_r29;
  uint unaff_ep;
  float unaff_lp;
  
  do {
    (*unaff_r23)();
    *(char *)(param_4 + 0x62a4) = (char)in_r18;
    unaff_ep = (uint)*(ushort *)(unaff_ep + 0x18);
    uVar3 = in_r18;
    while( true ) {
      in_r18 = in_r18 ^ in_r1;
      *(short *)(unaff_ep + 8) = (short)param_3;
      bVar1 = (byte)((uint)unaff_r29 >> 0x1f);
      iVar4 = unaff_r26 - unaff_r29;
      __saturate(iVar4);
      if ((byte)((uint)unaff_r26 >> 0x1f) != bVar1 &&
          bVar1 == (byte)((uint)(unaff_r26 - unaff_r29) >> 0x1f)) break;
      fVar2 = unaff_r22;
      (*(code *)register0x0000000c)();
      unaff_lp = (float)((int)SUB42(unaff_lp,0) * (int)(short)in_r1);
      param_3 = (int)*(short *)(unaff_ep + 0x80);
      register0x0000000c = (BADSPACEBASE *)(unaff_lp * unaff_lp + fVar2);
      unaff_r29 = in_r1 + 0x7c3e;
      bVar1 = (byte)((uint)unaff_r29 >> 0x1f);
      unaff_r26 = iVar4 - unaff_r29;
      __saturate(unaff_r26);
      if ((byte)((uint)iVar4 >> 0x1f) == bVar1 || bVar1 != (byte)((uint)(iVar4 - unaff_r29) >> 0x1f)
         ) {
                    /* WARNING: Could not recover jumptable at 0x0006430a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_0006430c + *(short *)(&DAT_0006430c + in_r13 * 2) * 2))();
        return;
      }
    }
    __saturate(-unaff_r29);
    DAT_0000007f = ~(byte)in_r18;
    unaff_r26 = iVar4 + unaff_r29;
    __saturate(unaff_r26);
    in_r18 = uVar3;
    unaff_r29 = -unaff_r29;
  } while( true );
}


// ==== FUN_00064b9c @ 00064b9c (size 542) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00064bf4) overlaps instruction at (ram,0x00064bf2)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064b9c(code *param_1,int param_2,undefined4 param_3,short param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  char cVar5;
  uint in_r1;
  uint unaff_gp;
  int unaff_tp;
  undefined1 uVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  undefined4 in_r10;
  undefined4 in_r11;
  undefined4 extraout_r11;
  int in_r12;
  int in_r13;
  int in_r14;
  uint in_r15;
  undefined1 uVar10;
  uint in_r16;
  uint in_r17;
  uint uVar11;
  int iVar12;
  undefined1 *in_r19;
  code *unaff_r20;
  int *piVar13;
  uint unaff_r21;
  uint uVar14;
  int unaff_r24;
  code *unaff_r25;
  short sVar15;
  uint uVar16;
  undefined1 unaff_r27;
  uint unaff_r28;
  int iVar17;
  int unaff_r29;
  int *unaff_ep;
  int *piVar18;
  int iVar19;
  int unaff_lp;
  undefined8 uVar20;
  
  uVar20 = CONCAT44(in_r10,in_r11);
  iVar7 = (int)(short)unaff_ep[1];
  iVar9 = param_4 * -3;
  uVar4 = *(ushort *)(unaff_ep + 6);
  bVar2 = (byte)((uint)unaff_r29 >> 0x1f);
  if ((byte)((uint)unaff_lp >> 0x1f) == bVar2 ||
      bVar2 != (byte)((uint)(unaff_lp - unaff_r29) >> 0x1f)) {
    if (-1 < unaff_lp - unaff_r29) goto code_r0x00064bf6;
  }
  else {
    bVar2 = (byte)(in_r15 >> 0x1f);
    uVar11 = (uint)((byte)((uint)unaff_tp >> 0x1f) != bVar2 &&
                   bVar2 == (byte)(unaff_tp - in_r15 >> 0x1f)) << 2;
    in_r15 = unaff_tp - in_r15;
    __saturate(in_r15);
    unaff_lp = 0x64bb4;
    FUN_000532b0();
    uVar20 = CONCAT44((int)*(short *)((int)unaff_ep + 0x42),extraout_r11);
    unaff_r20 = (code *)0xf;
    unaff_r28 = (uint)DAT_00004581;
    if (((byte)(uVar11 >> 2) & 1) == 1) goto LAB_00064c56;
    unaff_ep[3] = unaff_r21;
    __saturate((uint)uVar4 - unaff_r29);
    unaff_r20 = (code *)0x0;
    unaff_r21 = unaff_r21 | (uint)param_1 | (uint)&stack0x00000000;
    unaff_r28 = (in_r1 | 0x131e) - in_r17;
    __saturate(unaff_r28);
    __saturate(((uint)uVar4 - unaff_r29) - unaff_r29);
    iVar9 = unaff_ep[1];
    while( true ) {
      uVar11 = (uint)(unaff_r28 < 8) << 3;
      uVar20 = (*unaff_r20)();
      *(char *)((int)unaff_ep + 0x7d) = (char)unaff_lp;
      if ((uVar11 >> 3 & 1) == 0) break;
      uVar20 = (*param_1)();
      unaff_ep = (int *)(uint)*(ushort *)(unaff_ep + 6);
      in_r17 = in_r17 | in_r16;
      *(char *)((int)((ulonglong)uVar20 >> 0x20) + 0x25e4) = (char)in_r16;
code_r0x00064bf6:
      in_r16 = in_r16 ^ unaff_gp;
      uVar11 = in_r17 ^ in_r16;
      *(undefined1 *)((int)uVar20 + -7) = unaff_r27;
      in_r17 = (int)uVar11 >> 0x17;
      unaff_lp = (int)*(short *)(unaff_r25 + -0x76d0) * (int)(short)unaff_tp;
      *(char *)((int)((ulonglong)uVar20 >> 0x20) + -0x3aa0) = (char)in_r16;
      iVar9 = (int)(short)unaff_ep[0x18];
      in_r19 = (undefined1 *)register0x0000000c;
      if ((uVar11 & 0x400000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    in_r15 = (int)param_1 - in_r15;
    __saturate(in_r15);
    unaff_r20 = unaff_r20 + 0xb;
    __saturate(unaff_r20);
    *(char *)((int)uVar20 + 0x2646) = (char)in_r16;
    *(char *)(in_r12 + 0x131e) = (char)in_r16;
  }
  *(char *)((int)((ulonglong)uVar20 >> 0x20) + 0x25e4) = (char)in_r16;
  *(char *)(iVar7 + 0x131d) = (char)in_r16;
  unaff_ep = (int *)(unaff_r28 | (uint)unaff_r20);
  unaff_ep[8] = -0x10;
  *unaff_ep = iVar7;
LAB_00064c56:
  __saturate(-4 - param_2);
  *(ushort *)((int)unaff_ep + 2) = (ushort)in_r1 | 0xf8e5;
  iVar12 = unaff_tp + -0x71b;
  __saturate((unaff_r28 | (uint)unaff_r20) - param_2);
  __saturate((int)unaff_r20 - param_2);
  piVar18 = (int *)(uint)*(ushort *)(unaff_ep + 6);
  iVar7 = (int)(short)piVar18[1];
  sVar15 = (short)piVar18[6];
  uVar14 = unaff_r21 | (uint)((ulonglong)uVar20 >> 0x20) | unaff_gp;
  piVar18[0xf] = (int)piVar18;
  bVar1 = unaff_tp - 0x169fU < 0xffff8205;
  uVar11 = unaff_tp + 0x675c;
  __saturate(uVar11);
  piVar13 = (int *)0x0;
  do {
    uVar6 = (undefined1)param_2;
    uVar10 = (undefined1)iVar12;
    *(char *)((int)piVar18 + 0x7d) = (char)sVar15;
    if (!bVar1) goto LAB_00064cfc;
    iVar12 = (int)&stack0x00000000 - in_r14;
    bVar2 = (byte)((uint)in_r14 >> 0x1f);
    in_r14 = (int)&stack0x00000000 - in_r14;
    unaff_lp = (int)(short)unaff_lp * (int)(short)unaff_r29;
    if ((byte)((uint)&stack0x00000000 >> 0x1f) == bVar2 || bVar2 != (byte)((uint)iVar12 >> 0x1f))
    goto LAB_00064d02;
    in_r15 = ~uVar14;
    piVar18[2] = uVar14;
    unaff_lp = 0x64cca;
    uVar20 = func_0x001a33c6();
    uVar6 = (undefined1)param_2;
    *piVar18 = iVar9;
    piVar13 = (int *)&DAT_00000004;
    uVar4 = *(ushort *)(piVar18 + 6);
    uVar16 = (uint)*(ushort *)(uVar4 + 0x18);
    *(undefined1 **)(unaff_r24 + -0x2c6) = in_r19;
    iVar19 = (int)*(char *)(uVar4 + 0x3b);
    piVar18 = (int *)(iVar19 + -5);
    __saturate(piVar18);
    __saturate(uVar16 + 0xb);
    sVar15 = (short)*(char *)(iVar19 + 0x3a);
    iVar12 = (int)*(short *)(iVar19 + 5);
    uVar10 = (undefined1)*(short *)(iVar19 + 5);
    bVar1 = true;
  } while (0xfffffff4 < uVar16);
  piVar13 = (int *)~(uint)&stack0x00000000;
  *(undefined1 *)((int)uVar20 + 0x25e4) = uVar10;
  *(undefined1 *)(iVar7 + 0x131e) = uVar10;
LAB_00064cfc:
  *(undefined1 *)((int)((ulonglong)uVar20 >> 0x20) + 0x2646) = uVar10;
  piVar18 = piVar13;
LAB_00064d02:
  *(undefined1 *)(in_r12 + 0x131d) = uVar10;
  piVar18 = (int *)(int)(char)piVar18[7];
  *piVar18 = iVar7;
  *(short *)((int)piVar18 + 2) = (short)iVar7;
  __saturate(unaff_lp - uVar14);
  __saturate((int)((uint)piVar13 | 0xfffffffc) - (int)param_1);
  if ((code *)((uint)piVar13 | 0xfffffffc) < param_1) {
    *(undefined1 *)(*(short *)((int)piVar18 + 2) + 0x2646) = 0xf3;
    uVar16 = (uint)*(ushort *)(piVar18 + 6);
    while( true ) {
      iVar7 = (int)((ulonglong)uVar20 >> 0x20);
      bVar1 = uVar16 < uVar11;
      uVar16 = uVar16 - uVar11;
      __saturate(uVar16);
      if (bVar1) break;
      uVar14 = uVar14 ^ (uint)uVar20;
      uVar4 = *(ushort *)((int)piVar18 + 0x1a);
      param_1 = param_1 + iVar7;
      *(undefined1 *)(iVar7 + 0x25e4) = 0xff;
      piVar18 = (int *)(uint)*(ushort *)(piVar18 + 6);
      while( true ) {
        cVar3 = *(char *)((int)piVar18 + 6);
        uVar20 = func_0xffe92e5a();
        cVar5 = DAT_ffffe0fe;
        iVar7 = (int)((ulonglong)uVar20 >> 0x20);
        if (SCARRY4((int)cVar3,-0x70fb)) break;
        iVar17 = (int)DAT_ffffe0fe;
        iVar12 = piVar18[0x22];
        iVar19 = piVar18[6];
        cVar3 = *(char *)((int)piVar18 + 0x1e);
        uVar14 = uVar14 | in_r15 | (uint)param_1;
        *(undefined1 *)((short)iVar12 + 0x2646) = 5;
        bVar2 = (byte)(cVar3 >> 7) >> 7;
        __saturate(iVar17 - cVar3);
        uVar16 = (int)(short)iVar19 * (int)(short)uVar11;
        iVar19 = (int)cVar3;
        if ((byte)(cVar5 >> 7) >> 7 == bVar2 || bVar2 != (byte)((uint)(iVar17 - cVar3) >> 0x1f)) {
          __saturate(*(char *)((int)piVar18 + 0x3b) + -5);
          __saturate(uVar16 - 1);
          *(undefined1 *)(((uint)&stack0x00000000 | 0xa20d) + 0x25e4) = 5;
          *(undefined1 *)(in_r12 + 0x131e) = 5;
          *(undefined1 *)(iVar7 + 0x2646) = 5;
          *(undefined1 *)((short)iVar12 + 0x131d) = 5;
          uVar14 = uVar4 - uVar14;
          uVar16 = (uint)_DAT_0000002c;
          do {
            uVar16 = uVar16 | 5;
            _DAT_fffffff6 = (short)in_r1 + -0x76cb;
            while( true ) {
              cVar3 = DAT_00005ff1;
              __saturate(uVar14 - 5);
              uVar16 = uVar16 - (int)param_1;
              __saturate(uVar16);
              uVar4 = Ram0000000e;
              uVar14 = (uint)uVar4;
              param_1 = param_1 + iVar7;
              iVar17 = (int)DAT_00005ff1;
              *(undefined1 *)(iVar9 + 0x471e) = 0xff;
              _DAT_00000038 = (short)cVar3;
              bVar2 = -(cVar3 >> 7);
              iVar12 = -iVar17;
              __saturate(iVar12);
              if (bVar2 != 0 && bVar2 == (byte)((uint)-iVar17 >> 0x1f)) break;
              iVar17 = iVar12 - iVar19;
              bVar2 = (byte)((uint)iVar19 >> 0x1f);
              __saturate(iVar12 - iVar19);
              uVar16 = (int)(short)uVar16 * (int)(short)param_1;
              iVar19 = (int)(char)iVar19;
              if ((byte)((uint)iVar12 >> 0x1f) == bVar2 || bVar2 != (byte)((uint)iVar17 >> 0x1f)) {
                __saturate(0xffffffef);
                DAT_ffffffef = *(char *)(in_r1 - 0xf450);
                iVar7 = (int)DAT_ffffffef;
                __saturate(uVar16 + 0xb);
                *(undefined1 *)(in_r1 - 0x63d9) = 5;
                uVar6 = DAT_00000010;
                __saturate(5);
                *(undefined1 *)(in_r1 - 0x63a8) = 5;
                DAT_0000000b = 0;
                uVar4 = Ram00000007;
                uVar8 = *(undefined2 *)((undefined1 *)(uint)uVar4 + 4);
                *(undefined1 *)(in_r1 - 0x5085) = 5;
                iVar7 = uVar11 - (iVar7 + -0xb);
                __saturate(iVar7);
                *(undefined1 *)(uint)uVar4 = (char)iVar7;
                (*unaff_r25)();
                *(short *)(uVar14 + 4) = (short)in_r15;
                *(undefined2 *)(uVar14 + 0x80) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00064eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_00064eec + *(short *)(&DAT_00064eec + unaff_r24 * 2) * 2))();
                return;
              }
            }
          } while( true );
        }
      }
    }
  }
  else {
    do {
      *(undefined1 *)(iVar9 + 0x62b0) = uVar6;
      cVar3 = DAT_00007c02;
      iVar7 = (int)DAT_00007c02;
      *(undefined1 *)((short)piVar18[0x20] + 0x2646) = uVar6;
      bVar2 = (byte)((uint)in_r19 >> 0x1f);
      __saturate(iVar7 - (int)in_r19);
    } while ((byte)(cVar3 >> 7) >> 7 != bVar2 &&
             bVar2 == (byte)((uint)(iVar7 - (int)in_r19) >> 0x1f));
  }
                    /* WARNING: Could not recover jumptable at 0x00064d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00064d76 + *(short *)(&DAT_00064d76 + in_r13 * 2) * 2))();
  return;
}


// ==== FUN_00064df0 @ 00064df0 (size 252) ====

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064df0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined1 uVar8;
  char cVar9;
  int in_r1;
  int iVar10;
  uint unaff_gp;
  undefined2 uVar11;
  int in_r10;
  int in_r12;
  int in_r13;
  uint in_r15;
  undefined1 in_r16;
  uint unaff_r20;
  uint unaff_r21;
  uint uVar12;
  int unaff_r24;
  code *unaff_r25;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint unaff_ep;
  uint unaff_lp;
  undefined8 uVar16;
  
  while( true ) {
    cVar9 = DAT_ffffe0fe;
    iVar14 = (int)DAT_ffffe0fe;
    sVar4 = *(short *)(unaff_ep + 0x88);
    sVar5 = *(short *)(unaff_ep + 0x18);
    cVar3 = *(char *)(unaff_ep + 0x1e);
    uVar12 = unaff_r21 | param_1;
    *(undefined1 *)(sVar4 + 0x2646) = in_r16;
    bVar2 = (byte)(cVar3 >> 7) >> 7;
    __saturate(iVar14 - cVar3);
    uVar13 = (int)sVar5 * (int)(short)unaff_gp;
    iVar10 = (int)cVar3;
    if ((byte)(cVar9 >> 7) >> 7 == bVar2 || bVar2 != (byte)((uint)(iVar14 - cVar3) >> 0x1f)) break;
    while( true ) {
      cVar3 = *(char *)(unaff_ep + 6);
      uVar16 = func_0xffe92e5a();
      in_r10 = (int)((ulonglong)uVar16 >> 0x20);
      unaff_r20 = 5;
      in_r16 = 5;
      if (!SCARRY4((int)cVar3,-0x70fb)) break;
      bVar1 = uVar13 < unaff_gp;
      uVar13 = uVar13 - unaff_gp;
      __saturate(uVar13);
      if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x00064d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00064d76 + *(short *)(&DAT_00064d76 + in_r13 * 2) * 2))();
        return;
      }
      uVar12 = uVar12 ^ (uint)uVar16;
      unaff_lp = (uint)*(ushort *)(unaff_ep + 0x1a);
      param_1 = param_1 + in_r10;
      *(undefined1 *)(in_r10 + 0x25e4) = 0xff;
      unaff_ep = (uint)*(ushort *)(unaff_ep + 0x18);
    }
    unaff_r21 = uVar12 | in_r15;
  }
  __saturate(*(char *)(unaff_ep + 0x3b) + -5);
  __saturate(uVar13 - 1);
  *(undefined1 *)(((uint)&stack0x00000000 | 0xa20d) + 0x25e4) = in_r16;
  *(undefined1 *)(in_r12 + 0x131e) = in_r16;
  *(undefined1 *)(in_r10 + 0x2646) = in_r16;
  *(undefined1 *)(sVar4 + 0x131d) = in_r16;
  uVar12 = unaff_lp - uVar12;
  uVar13 = (uint)_DAT_0000002c;
  do {
    uVar13 = uVar13 | unaff_r20;
    _DAT_fffffff6 = (short)in_r1 + -0x76cb;
    while( true ) {
      cVar3 = DAT_00005ff1;
      __saturate(uVar12 - unaff_r20);
      uVar13 = uVar13 - param_1;
      __saturate(uVar13);
      uVar7 = Ram0000000e;
      uVar12 = (uint)uVar7;
      param_1 = param_1 + in_r10;
      iVar15 = (int)DAT_00005ff1;
      *(undefined1 *)(param_4 + 0x471e) = 0xff;
      _DAT_00000038 = (short)cVar3;
      bVar2 = -(cVar3 >> 7);
      iVar14 = -iVar15;
      __saturate(iVar14);
      uVar6 = (undefined1)unaff_r20;
      if (bVar2 != 0 && bVar2 == (byte)((uint)-iVar15 >> 0x1f)) break;
      iVar15 = iVar14 - iVar10;
      bVar2 = (byte)((uint)iVar10 >> 0x1f);
      __saturate(iVar14 - iVar10);
      uVar13 = (int)(short)uVar13 * (int)(short)param_1;
      iVar10 = (int)(char)iVar10;
      if ((byte)((uint)iVar14 >> 0x1f) == bVar2 || bVar2 != (byte)((uint)iVar15 >> 0x1f)) {
        __saturate(0xffffffef);
        DAT_ffffffef = *(char *)(in_r1 + -0xf450);
        iVar10 = (int)DAT_ffffffef;
        __saturate(uVar13 + 0xb);
        *(undefined1 *)(in_r1 + -0x63d9) = uVar6;
        uVar8 = DAT_00000010;
        __saturate(unaff_r20);
        *(undefined1 *)(in_r1 + -0x63a8) = uVar6;
        DAT_0000000b = 0;
        uVar7 = Ram00000007;
        uVar11 = *(undefined2 *)((undefined1 *)(uint)uVar7 + 4);
        *(undefined1 *)(in_r1 + -0x5085) = uVar6;
        iVar10 = unaff_gp - (iVar10 + -0xb);
        __saturate(iVar10);
        *(undefined1 *)(uint)uVar7 = (char)iVar10;
        (*unaff_r25)();
        *(short *)(uVar12 + 4) = (short)in_r15;
        *(undefined2 *)(uVar12 + 0x80) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00064eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00064eec + *(short *)(&DAT_00064eec + unaff_r24 * 2) * 2))();
        return;
      }
    }
  } while( true );
}


// ==== FUN_000652a8 @ 000652a8 (size 256) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000652a8(uint param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint unaff_gp;
  int unaff_tp;
  uint uVar6;
  uint in_r16;
  uint uVar7;
  int in_r17;
  code *in_r18;
  uint in_r19;
  uint unaff_r21;
  uint unaff_r22;
  int unaff_r25;
  int iVar8;
  int unaff_r28;
  uint unaff_r29;
  uint unaff_ep;
  int iVar9;
  int unaff_lp;
  
  do {
    uVar7 = in_r16 - 0xc;
    iVar8 = (int)*(char *)(unaff_ep + 0x7c);
    if (in_r16 < 0xc) {
      if (0xb < in_r16 || (unaff_r21 | param_1) == 0) goto LAB_0006527a;
      unaff_r21 = unaff_r21 | param_1 | unaff_gp;
      bVar1 = SCARRY4(uVar7,-0xc);
      uVar7 = in_r16 - 0x18;
      if (in_r16 == 0x18) goto LAB_00065284;
      *(uint *)(unaff_r28 + -0x2c6) = in_r19;
      iVar9 = (int)*(char *)(unaff_ep + 0x3b);
      unaff_ep = iVar9 - 5;
      __saturate(unaff_ep);
      unaff_r28 = (int)*(char *)(param_3 + -0x7d85);
      __saturate(iVar8 + 0xb);
      cVar5 = *(char *)(iVar9 + 0x3a);
      uVar7 = (uint)*(short *)(iVar9 + 0xf1);
      DAT_000000ff = (undefined1)*(short *)(iVar9 + 0xf1);
      bVar2 = (byte)((uint)unaff_lp >> 0x1f);
      bVar1 = (byte)(cVar5 >> 7) >> 7 != bVar2 && bVar2 == (byte)((uint)(cVar5 - unaff_lp) >> 0x1f);
      iVar8 = cVar5 - unaff_lp;
      __saturate(iVar8);
      while( true ) {
        *(code **)(unaff_ep + 0xfc) = in_r18;
        unaff_ep = (uint)*(ushort *)(unaff_ep + 0x18);
        uVar6 = (uint)*(short *)(unaff_ep + 4);
        if (bVar1) break;
        *(char *)(param_3 + 0x2646) = (char)uVar7;
        iVar9 = in_r19 - unaff_r28;
        __saturate(iVar9);
        iVar8 = (int)(short)iVar8 * (int)(short)unaff_gp;
        (*in_r18)();
        iVar9 = iVar9 + -0xb;
        unaff_r28 = unaff_tp - iVar9;
        unaff_r22 = (uint)*(ushort *)(unaff_ep + 0x1e);
        if (unaff_tp == iVar9) {
          *(char *)(param_3 + 0x2646) = (char)uVar7;
          __saturate(in_r19 - unaff_r28);
          *(char *)(param_3 + 0x12f2) = (char)uVar7;
          __saturate((int)(short)iVar8 * (int)(short)unaff_gp - (uint)_DAT_ffff980f);
          *(uint *)(&DAT_ffffe254 + unaff_r25) = ~uVar6;
          *(undefined1 *)(unaff_ep + 0x12) = 0;
          *(undefined1 *)(unaff_ep + 0xf) = 0;
          *(undefined2 *)(unaff_ep + 0xe4) = 0;
          *(undefined4 *)(unaff_ep + 0xf8) = *(undefined4 *)(unaff_ep + 0xf4);
          *(undefined1 *)(unaff_ep + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0006544c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_0006544e + *(short *)(&DAT_0006544e + (int)&stack0x00000000 * 2) * 2))();
          return;
        }
LAB_00065304:
        uVar7 = unaff_r22;
        param_3 = (int)*(short *)(unaff_ep + 4);
        unaff_r21 = *(uint *)(unaff_ep + 0x10);
        *(char *)(param_3 + 0x2646) = (char)uVar7;
        bVar2 = (byte)((uint)in_r17 >> 0x1f);
        bVar3 = (byte)((uint)unaff_r28 >> 0x1f) != bVar2;
        bVar4 = bVar2 == (byte)((uint)(unaff_r28 - in_r17) >> 0x1f);
        bVar1 = bVar3 && bVar4;
        unaff_r28 = unaff_r28 - in_r17;
        __saturate(unaff_r28);
        iVar8 = (int)(short)iVar8 * (int)(short)unaff_gp;
        unaff_r22 = uVar7;
        if (!bVar3 || !bVar4) {
                    /* WARNING: Could not recover jumptable at 0x00065322. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_00065324 + *(short *)(&DAT_00065324 + unaff_r28 * 2) * 2))();
          return;
        }
      }
    }
    else {
      unaff_gp = param_1 + 0xd07c0000;
LAB_0006527a:
      in_r17 = in_r17 + -0x2a5c;
      bVar1 = false;
LAB_00065284:
      if (!bVar1) goto LAB_00065304;
      unaff_r28 = (int)DAT_ffffe581;
      unaff_r21 = (int)*(short *)(unaff_r29 + 6) | in_r19;
      *(int *)(unaff_r28 + 0x12ea) = unaff_lp;
      unaff_ep = unaff_r29;
    }
    in_r16 = uVar7 - 0xc;
  } while( true );
}


// ==== FUN_00065600 @ 00065600 (size 40) ====

void FUN_00065600(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  short unaff_gp;
  int in_r11;
  undefined1 in_r16;
  undefined4 in_r18;
  int in_r19;
  int unaff_r25;
  short unaff_r26;
  undefined4 unaff_r27;
  uint unaff_r28;
  int unaff_ep;
  
  *(undefined4 *)(in_r11 + -4) = unaff_r27;
  *(undefined1 *)(param_3 + 0x2646) = in_r16;
  __saturate(in_r19 - (unaff_r28 >> 1));
  *(undefined1 *)(param_3 + 0x12f2) = in_r16;
  __saturate((int)unaff_r26 * (int)unaff_gp - (uint)*(ushort *)(unaff_r25 + -0x67f0));
  *(uint *)(&DAT_ffffe254 + unaff_r25) = ~param_4;
  *(undefined1 *)(unaff_ep + 0x12) = 0;
  *(undefined4 *)(unaff_ep + 0xf4) = in_r18;
  *(undefined2 *)(unaff_ep + 0xe4) = 0;
  *(undefined4 *)(unaff_ep + 0xf8) = in_r18;
  *(undefined1 *)(unaff_ep + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0006564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006564e + *(short *)(&DAT_0006564e + param_2 * 2) * 2))();
  return;
}


// ==== FUN_00065628 @ 00065628 (size 38) ====

void FUN_00065628(undefined4 param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 in_r18;
  int unaff_r25;
  int unaff_r26;
  int unaff_ep;
  int unaff_lp;
  
  __saturate(unaff_r26 - unaff_lp);
  *(uint *)(&DAT_ffffe254 + unaff_r25) = ~param_4;
  *(undefined1 *)(unaff_ep + 0x12) = 0;
  *(undefined4 *)(unaff_ep + 0xf4) = in_r18;
  *(undefined2 *)(unaff_ep + 0xe4) = 0;
  *(undefined4 *)(unaff_ep + 0xf8) = in_r18;
  *(undefined1 *)(unaff_ep + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x0006564c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0006564e + *(short *)(&DAT_0006564e + param_2 * 2) * 2))();
  return;
}


// ==== FUN_00065d4c @ 00065d4c (size 302) ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00065df4) overlaps instruction at (ram,0x00065df2)
    */
/* WARNING: Removing unreachable block (ram,0x00065d68) */
/* WARNING: Removing unreachable block (ram,0x00065d74) */
/* WARNING: Removing unreachable block (ram,0x00065dc8) */
/* WARNING: Removing unreachable block (ram,0x00065d84) */

void FUN_00065d4c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined2 *puVar7;
  short sVar8;
  byte bVar9;
  uint uVar10;
  int in_r1;
  char cVar11;
  uint in_r2;
  int unaff_tp;
  undefined2 in_r11;
  undefined1 in_r14;
  int in_r15;
  undefined1 in_r16;
  undefined1 in_r19;
  int unaff_r20;
  int iVar12;
  uint unaff_r21;
  int unaff_r22;
  short unaff_r26;
  uint uVar13;
  uint uVar14;
  int unaff_r28;
  short unaff_r29;
  undefined1 *unaff_ep;
  int unaff_lp;
  uint uVar15;
  uint uVar16;
  uint in_PSW;
  uint uVar17;
  
  iVar12 = unaff_r20 + 0xc;
  __saturate(iVar12);
  iVar1 = (int)((ulonglong)((longlong)unaff_lp * 0x1f) >> 0x20);
  unaff_ep[3] = (char)unaff_r28;
  bVar9 = (byte)((uint)unaff_r22 >> 0x18);
  bVar2 = bVar9 >> 7;
  uVar17 = (uint)(((bool)((byte)(in_PSW >> 4) & 1) || SCARRY4(unaff_r20,0xc)) ||
                 (byte)((ulonglong)((longlong)unaff_lp * 0x1f) >> 0x3f) != bVar2 &&
                 bVar2 == (byte)((uint)(iVar1 - unaff_r22) >> 0x1f)) << 4;
  uVar15 = iVar1 - unaff_r22;
  __saturate(uVar15);
  bVar5 = uVar15 == 0;
  uVar13 = (int)unaff_r26 * (int)unaff_r29;
  while( true ) {
    uVar13 = (int)(short)uVar13 * (int)(short)(param_1 + -0x1f5e0000);
    cVar11 = (char)in_r2;
    in_r2 = (uint)cVar11;
    *unaff_ep = (char)unaff_r28;
    if ((bool)((byte)(uVar17 >> 3) & 1) || bVar5) goto LAB_00065e46;
    uVar15 = (int)(short)uVar15 * (int)unaff_r29;
    if (unaff_r28 + -8 < 0 == (unaff_r28 < 0 && -1 < unaff_r28 + -8)) goto LAB_00065e04;
    sVar8 = *(short *)(unaff_ep + 0x42);
    uVar14 = uVar13 & 0xffff;
    *(undefined1 *)(param_3 + 0x25b5) = in_r16;
    if (-1 < unaff_r28 || unaff_r28 + -8 < 0) break;
    iVar6 = uVar15 - unaff_r22;
    iVar1 = uVar15 - unaff_r22;
    uVar10 = uVar15 >> 0x1f;
    bVar2 = bVar9 >> 7;
    uVar15 = uVar15 - unaff_r22;
    __saturate(uVar15);
    uVar14 = (int)(short)uVar13 * (int)unaff_r29;
    if (-1 < iVar6) goto LAB_00065dd8;
    uVar16 = uVar15 / 0;
    bVar3 = (byte)((uint)iVar12 >> 0x1f);
    bVar5 = (byte)(uVar16 >> 0x1f) != bVar3 && bVar3 == (byte)(uVar16 - iVar12 >> 0x1f);
    uVar15 = uVar16 - iVar12;
    __saturate(uVar15);
    uVar13 = (int)(short)uVar14 * (int)unaff_r29;
    if ((SUB41(uVar17 >> 4,0) || (byte)uVar10 != bVar2 && bVar2 == (byte)((uint)iVar1 >> 0x1f)) ||
        bVar5) {
      if ((int)(uVar16 - iVar12) < 0 != bVar5) goto code_r0x00065e28;
      goto LAB_00065de8;
    }
    bVar2 = (byte)((uint)unaff_r28 >> 0x1f);
    bVar4 = (byte)((uint)in_r1 >> 0x1f) != bVar2 &&
            bVar2 == (byte)((uint)(in_r1 - unaff_r28) >> 0x1f);
    uVar14 = in_r1 - unaff_r28;
    __saturate(uVar14);
    uVar13 = (int)(short)uVar13 * (int)unaff_r29;
    if (in_r1 - unaff_r28 < 0 == bVar4) goto LAB_00065de8;
    unaff_r21 = unaff_r21 | param_3;
    *(undefined1 *)(param_3 + 0x2646) = in_r16;
    bVar2 = (byte)(cVar11 >> 7) >> 7;
    bVar5 = uVar14 == in_r2;
    uVar17 = (uint)(uVar14 < in_r2) << 3 |
             (uint)(bVar4 || (byte)(uVar14 >> 0x1f) != bVar2 &&
                             bVar2 == (byte)(uVar14 - in_r2 >> 0x1f)) << 4;
    unaff_r28 = uVar14 - in_r2;
    __saturate(unaff_r28);
  }
  uVar15 = (uint)*(byte *)(unaff_r20 + -0x56bf);
  *(undefined1 *)(param_4 + 0x12d8) = in_r16;
  unaff_ep = (undefined1 *)((uint)unaff_ep ^ unaff_r21);
  in_r15 = (int)*(short *)(unaff_ep + 0x20);
LAB_00065dd8:
  *(short *)(unaff_ep + 0x42) = (short)param_4;
  uVar13 = uVar14 ^ unaff_r21;
  *(short *)(unaff_ep + 0xe4) = (short)in_r15;
  *(undefined2 *)(unaff_ep + 0x46) = in_r11;
  *(undefined1 *)(sVar8 + 0x25b6) = in_r16;
LAB_00065de8:
  while( true ) {
    *(short *)(unaff_ep + 0x6c) = (short)uVar15;
    *(undefined2 *)(unaff_ep + 0xc2) = in_r11;
    __saturate(in_r1 + 0x2e4a);
    *(short *)(unaff_ep + 0x84) = (short)in_r15;
    *(short *)(unaff_ep + 4) = (short)uVar13;
    *(byte *)(param_1 + -0x1f5e0081) = (byte)unaff_r22 | (byte)(param_1 + -0x1f5e0000);
    unaff_r22 = unaff_tp;
LAB_00065e04:
    in_r15 = unaff_r22;
    sVar8 = *(short *)(unaff_ep + 0x24);
    puVar7 = (undefined2 *)(unaff_ep + 0xc2);
    in_r11 = *(undefined2 *)(unaff_ep + 0xee);
    unaff_ep = (undefined1 *)~unaff_r21;
    *(undefined2 *)(unaff_ep + 0x42) = *puVar7;
    *(undefined2 *)(unaff_ep + 0xfa) = 4;
    *(undefined2 *)(unaff_ep + 0xfc) = 4;
    uVar15 = uVar15 - 4;
    __saturate(uVar15);
    *(short *)(unaff_ep + 0xe4) = (short)((uint)(int)sVar8 / param_4);
    param_3 = (uint)*(short *)(unaff_ep + 0x20);
code_r0x00065e28:
    unaff_r22 = uVar15 * 0x96c;
    if (4 < uVar13) break;
    uVar13 = (uVar13 - 5) + uVar15 * -0x96c;
  }
  unaff_ep[3] = DAT_00004481;
  unaff_ep[3] = in_r14;
  *(byte *)(in_r2 + 0x40) = *(byte *)(in_r2 + 0x40) ^ 8;
LAB_00065e46:
  *(byte *)(in_r2 + 0x40) = *(byte *)(in_r2 + 0x40) ^ 8;
  __saturate(param_3 - in_r15);
  *(undefined1 *)(unaff_tp + -0xf1) = in_r19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00065e7a @ 00065e7a (size 24) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00065e7a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00066116 @ 00066116 (size 58) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066116(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int unaff_gp;
  undefined1 unaff_tp;
  int iVar2;
  undefined1 in_r14;
  int unaff_r26;
  undefined1 unaff_r29;
  int unaff_ep;
  int unaff_lp;
  
  uVar1 = *(undefined1 *)(unaff_ep + 0x79);
  FUN_0006e00a();
  *(undefined1 *)(param_3 + 0x26f0) = unaff_tp;
  *(undefined1 *)(param_3 + -0x71d8) = unaff_tp;
  __saturate(unaff_lp - unaff_gp);
  *(undefined1 *)(unaff_ep + 3) = in_r14;
  *(undefined1 *)(param_3 + 0x26f0) = unaff_tp;
  *(undefined1 *)(param_3 + 0x1379) = unaff_r29;
  __saturate(unaff_r26 + 0xb);
  DAT_0000000a = *(undefined1 *)(param_3 + -0x7d85);
  iVar2 = (int)DAT_000056ab;
  *(undefined1 *)(_DAT_00000022 + 0x1e) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000661dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000661de + *(short *)(&DAT_000661de + param_2 * 2) * 2))(iVar2);
  return;
}


// ==== FUN_00066150 @ 00066150 (size 142) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066150(undefined4 param_1,int param_2,int param_3)

{
  undefined1 in_r2;
  undefined1 unaff_tp;
  int iVar1;
  int unaff_r26;
  undefined1 unaff_r29;
  uint uVar2;
  
  *(undefined1 *)(param_3 + 0x26f0) = unaff_tp;
  *(undefined1 *)(param_3 + 0x1379) = unaff_r29;
  __saturate(unaff_r26 + 0xb);
  DAT_0000000a = *(undefined1 *)(param_3 + -0x7d85);
  iVar1 = (int)DAT_000056ab;
  uVar2 = (uint)_DAT_00000022;
  *(undefined1 *)(uVar2 + 0x1e) = in_r2;
                    /* WARNING: Could not recover jumptable at 0x000661dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_000661de + *(short *)(&DAT_000661de + param_2 * 2) * 2))
            (iVar1,param_2,(int)(short)param_3,(int)*(short *)(uVar2 + 0x80));
  return;
}


// ==== FUN_00066560 @ 00066560 (size 348) ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066560(undefined2 param_1,uint param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int in_r1;
  undefined1 uVar3;
  code *pcVar4;
  uint uVar5;
  uint in_r14;
  undefined1 in_r18;
  uint unaff_r21;
  uint uVar6;
  int unaff_r26;
  int iVar7;
  int unaff_r29;
  int unaff_ep;
  uint uVar8;
  uint in_PSW;
  
  uVar3 = *(undefined1 *)(unaff_ep + 0x76);
  while( true ) {
    unaff_r26 = (int)(short)unaff_r26 * (int)(short)unaff_r29;
    *(int *)(unaff_ep + 0x20) = (int)*(char *)(unaff_ep + 0x50);
    cVar1 = *(char *)(*(char *)(unaff_ep + 0x50) + -0x5901);
    if (((byte)(in_PSW >> 4) & 1) != 1) break;
    *(undefined2 *)(unaff_ep + 0xc4) = param_1;
    uVar3 = *(undefined1 *)(unaff_ep + 0x77);
    in_PSW = in_PSW & 0xfffffff0;
    *(undefined1 *)(param_3 + 0x1376) = uVar3;
  }
  *(undefined2 *)(unaff_ep + 0xc4) = param_1;
  uVar6 = unaff_r21 | in_r14;
  uVar8 = (uint)*(ushort *)(unaff_ep + 0x18);
  *(undefined1 *)(uVar8 + 0x16) = uVar3;
  *(undefined1 *)(uVar8 + 0x17) = uVar3;
  *(uint *)(uVar8 + 0x10) = uVar6;
  sVar2 = *(short *)(uVar8 + 0x42);
  *(char *)(*(short *)(uVar8 + 0x88) + 0x1395) = cVar1;
  *(char *)(param_3 + 0x2721) = cVar1;
  *(char *)(sVar2 + 0x25e4) = cVar1;
  __saturate(0xffffffff);
  iVar7 = unaff_r26 - (int)&stack0x00000000;
  __saturate(iVar7);
  __saturate((int)&stack0x00000000 - in_r14);
  *(int *)((uVar8 | uVar6) + 0x24) = (int)cVar1;
  uVar5 = (uVar6 | (uint)&stack0x00000000) & 0x7a96;
  uVar6 = (uint)*(ushort *)((uVar8 | uVar6) + 0x18);
  uVar3 = *(undefined1 *)(uVar6 + 0x13);
  sVar2 = *(short *)(uVar6 + 0x42);
  *(char *)(uVar5 + 0x26f0) = cVar1;
  __saturate(iVar7 + 7);
  *(undefined1 *)(sVar2 + 0x1376) = in_r18;
  _DAT_000026e9 = (short)unaff_r29 * 0xd;
  __saturate(iVar7 + 0xe);
  *(undefined1 *)(uVar6 + 0x16) = uVar3;
  sVar2 = *(short *)(uVar6 + 0x88);
  *(undefined1 *)(uVar6 + 0x17) = uVar3;
  *(undefined1 *)(uVar5 + 0x1376) = *(undefined1 *)(uVar6 + 0x50);
  __saturate(in_r1 + -0x1373);
  pcVar4 = (code *)(int)*(char *)(uVar6 + 0x77);
  (*(code *)(param_2 & 0xff))(uVar6 + 0xf07c0000,(code *)(param_2 & 0xff),uVar5,(int)sVar2);
  *(char *)(*(ushort *)(uVar6 + 0x18) + 0xd) = (char)pcVar4;
  (*pcVar4)();
                    /* WARNING: Could not recover jumptable at 0x0006668e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00066690 + *(short *)(&DAT_00066690 + unaff_r29 * 2) * 2))();
  return;
}


// ==== FUN_00066bbc @ 00066bbc (size 66) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00066bbc(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_r2;
  int in_r10;
  int in_r14;
  undefined1 in_r16;
  int unaff_r26;
  short unaff_r29;
  int unaff_lp;
  
  __saturate(unaff_lp - (int)&stack0x00000000);
  __saturate(unaff_r26 - in_r2);
  __saturate((int)&stack0x00000000 - in_r14);
  *(undefined1 *)(in_r10 + 10000) = in_r16;
  *(undefined4 *)(param_3 + -0x604) = param_1;
  *(undefined1 *)(param_3 + 0x1376) = in_r16;
  __saturate((int)(short)(unaff_r26 - in_r2) * (int)unaff_r29 + 0xb);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006731a @ 0006731a (size 6776) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006731a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00068d96 @ 00068d96 (size 2477) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00068d96(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00069746 @ 00069746 (size 5364) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00069746(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006ac3a @ 0006ac3a (size 8383) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006ac3a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006ccfa @ 0006ccfa (size 1908) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006ccfa(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006d46e @ 0006d46e (size 764) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006d46e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006d76a @ 0006d76a (size 1011) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006d76a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006db62 @ 0006db62 (size 36) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006db62(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006db86 @ 0006db86 (size 1155) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006db86(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e00a @ 0006e00a (size 60) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e00a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e046 @ 0006e046 (size 1876) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e046(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006e79a @ 0006e79a (size 2336) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006e79a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f0be @ 0006f0be (size 92) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f0be(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f11a @ 0006f11a (size 316) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f11a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f256 @ 0006f256 (size 1888) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f256(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006f9b6 @ 0006f9b6 (size 1224) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006f9b6(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0006fe7e @ 0006fe7e (size 1222) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0006fe7e(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00070346 @ 00070346 (size 2044) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00070346(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00070b42 @ 00070b42 (size 1992) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00070b42(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007130a @ 0007130a (size 3296) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007130a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00071fea @ 00071fea (size 4709) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00071fea(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00073252 @ 00073252 (size 5413) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00073252(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007477a @ 0007477a (size 1140) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007477a(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00074bf0 @ 00074bf0 (size 1346) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00074bf0(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00075134 @ 00075134 (size 1924) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00075134(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_000758bc @ 000758bc (size 3768) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_000758bc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_00076774 @ 00076774 (size 10965) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_00076774(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007924c @ 0007924c (size 14110) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007924c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007c96c @ 0007c96c (size 1390) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007c96c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007cedc @ 0007cedc (size 48) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007cedc(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007cf0c @ 0007cf0c (size 8735) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007cf0c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f12c @ 0007f12c (size 348) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f12c(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f288 @ 0007f288 (size 188) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f288(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f344 @ 0007f344 (size 512) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f344(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ==== FUN_0007f544 @ 0007f544 (size 2747) ====

/* WARNING: Control flow encountered bad instruction data */

void FUN_0007f544(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


