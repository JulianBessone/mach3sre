
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Could not reconcile some variable overlaps */

void UndefinedFunction_00440fec(uint param_1,int param_2,int param_3)

{
  ushort *puVar1;
  byte bVar2;
  char cVar7;
  uint uVar5;
  char *pcVar6;
  byte bVar8;
  char cVar9;
  byte bVar10;
  byte *unaff_EBX;
  int unaff_EBP;
  undefined *unaff_ESI;
  int *piVar11;
  byte *unaff_EDI;
  undefined4 uStack28;
  byte bVar3;
  uint uVar4;
  
  bVar3 = (byte)param_1;
  bVar2 = bVar3 % 0xa9;
  uVar5 = CONCAT11(bVar3 / 0xa9,bVar3) & 0xffffff00;
  uVar4 = param_1 & 0xffff0000 | uVar5 | (uint)bVar2;
  pcVar6 = (char *)(param_2 + unaff_EBP * 4);
  *pcVar6 = *pcVar6 + (char)param_3 + '\x01';
  pcVar6 = (char *)(param_2 + 0x41 + unaff_EBP * 4);
  *pcVar6 = *pcVar6 + (char)((uint)(param_3 + 2) >> 8);
  *(char *)(uVar4 - 0x56) = *(char *)(uVar4 - 0x56) + bVar2;
  cVar9 = (char)((uint)param_2 >> 8);
  *(char *)(uVar4 - 0x56) = *(char *)(uVar4 - 0x56) + cVar9;
  bVar8 = (byte)param_2;
  *(char *)(uVar4 + 0x240041a9) = *(char *)(uVar4 + 0x240041a9) + bVar8;
  *unaff_EDI = bVar2;
  bVar10 = (byte)((uint)unaff_EBX >> 8);
  *(char *)(uVar4 - 0x56) = *(char *)(uVar4 - 0x56) + bVar10;
  bVar3 = (byte)(uVar5 >> 8);
  uVar5 = (param_1 & 0xffff0000 | (uint)CONCAT11(bVar3 + bVar8,bVar2)) + 0x15e80044 +
          (uint)CARRY1(bVar3,bVar8);
  bVar2 = (byte)(uVar5 >> 8);
  pcVar6 = (char *)((uVar5 & 0xffff0000 | (uint)CONCAT11(bVar2 + bVar10,(char)uVar5)) + 0x16100044 +
                   (uint)CARRY1(bVar2,bVar10));
  cVar7 = (char)((uint)pcVar6 >> 8);
  unaff_ESI[param_2] = unaff_ESI[param_2] + cVar7;
  *pcVar6 = *pcVar6 + bVar10;
  bVar3 = (byte)(param_3 + 6);
  unaff_ESI[param_2 + 0x44] = unaff_ESI[param_2 + 0x44] + bVar3;
  pcVar6[0x16] = pcVar6[0x16] + cVar7;
  unaff_ESI[param_2 + 0x44] = unaff_ESI[param_2 + 0x44] + cVar9;
  pcVar6[-0x63ffbbea] = pcVar6[-0x63ffbbea] + bVar3;
  pcVar6[-0x5bffbbea] = pcVar6[-0x5bffbbea] + cVar7;
  pcVar6[-0x53ffbbea] = pcVar6[-0x53ffbbea] + (char)((uint)(param_3 + 6) >> 8);
  pcVar6[-0x4bffbbea] = pcVar6[-0x4bffbbea] + cVar9;
  pcVar6[-0x43ffbbea] = pcVar6[-0x43ffbbea] + bVar10;
  cVar9 = (char)pcVar6 * '\x02';
  uVar5 = (uint)pcVar6 & 0xffff0000 | CONCAT11(cVar7 + cVar9,cVar9) & 0xffffff00 |
          (uint)(byte)(cVar9 + bVar3);
  bVar2 = *unaff_EBX;
  *unaff_EBX = *unaff_EBX + bVar3;
  puVar1 = (ushort *)(param_3 + 0x76 + unaff_EBP * 2);
  *puVar1 = *puVar1 + (ushort)CARRY1(bVar2,bVar3) * (((ushort)unaff_ESI & 3) - (*puVar1 & 3));
  out(*unaff_ESI,(short)param_2);
  *(int *)(unaff_EBX + -0x740f7426) = *(int *)(unaff_EBX + -0x740f7426) + -1;
  piVar11 = (int *)(unaff_ESI + 2);
  if (uVar5 != 0) {
    *uStack28 = 0x441089;
    FUN_00441484(uVar5,(int)piVar11,*(undefined *)uStack28);
  }
  *uStack28 = 0x441095;
  FUN_0041aac8(piVar11,(byte)unaff_EBX & 0xfc,*(undefined *)uStack28);
  if ('\0' < (char)(byte)unaff_EBX) {
    *uStack28 = 0x4410a0;
    FUN_00403b9c(piVar11,*(undefined *)uStack28);
  }
  return;
}