uint FUN_0044c2ac(uint param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined in_CL;
  uint uVar5;
  int iVar6;
  int local_14;
  uint local_10;
  
  if ((*(char *)(param_1 + 0x1f) == '\0') || (3 < *(ushort *)(param_2 + 4))) {
    uVar3 = SEXT24(*(short *)(param_2 + 4));
    if (uVar3 < 8) {
      switch(uVar3) {
      case 0:
        uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - (uint)*(ushort *)(param_1 + 8));
        break;
      case 1:
        uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 8));
        break;
      case 2:
        iVar6 = FUN_0044c1b4(param_1);
        uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - iVar6);
        break;
      case 3:
        iVar6 = FUN_0044c1b4(param_1);
        uVar3 = FUN_0044c61c(param_1,iVar6 + *(int *)(param_1 + 0xc));
        break;
      case 4:
        if (*(int *)(param_1 + 0x14) < 0x8000) {
          uVar3 = FUN_0044c61c(param_1,(int)*(short *)(param_2 + 6));
        }
        else {
          iVar6 = FUN_0044c24c((char)param_1,(char)param_2,in_CL,&stack0xfffffffc);
          uVar3 = FUN_0044c61c(param_1,iVar6);
        }
        break;
      case 5:
        uVar3 = param_1;
        if (*(char *)(param_1 + 0x1d) != '\0') {
          if (*(int *)(param_1 + 0x14) < 0x8000) {
            uVar3 = FUN_0044c61c(param_1,(int)*(short *)(param_2 + 6));
          }
          else {
            iVar6 = FUN_0044c24c((char)param_1,(char)param_2,in_CL,&stack0xfffffffc);
            uVar3 = FUN_0044c61c(param_1,iVar6);
          }
        }
        break;
      case 6:
        uVar3 = FUN_0044c61c(param_1,0);
        break;
      case 7:
        uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0x14));
      }
    }
  }
  else {
    if (*(ushort *)(param_2 + 4) < 2) {
      uVar5 = (uint)*(ushort *)(param_1 + 8);
      iVar6 = *(int *)(param_1 + 0x40);
      local_10 = (uint)((longlong)(ulonglong)uVar5 / (longlong)iVar6);
      uVar3 = (uint)((longlong)(ulonglong)uVar5 / (longlong)iVar6);
      local_14 = (int)((longlong)(ulonglong)uVar5 % (longlong)iVar6);
    }
    else {
      if ((ushort)(*(ushort *)(param_2 + 4) - 2) < 2) {
        iVar6 = *(int *)(param_1 + 0x3c);
        local_14 = (int)(uint)*(ushort *)(param_1 + 10) % iVar6;
        uVar3 = (int)(uint)*(ushort *)(param_1 + 10) / iVar6;
        local_10 = uVar3;
      }
      else {
        iVar6 = 0;
        local_10 = 0;
        uVar3 = 0;
        local_14 = 0;
      }
    }
    iVar2 = 0;
    while (0 < iVar6) {
      iVar4 = FUN_00406ef8();
      if (iVar4 - iVar2 < *(int *)(param_1 + 0x20)) {
        Sleep(*(int *)(param_1 + 0x20) - (iVar4 - iVar2));
      }
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - local_10);
      }
      else {
        if (sVar1 == 1) {
          FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) + local_10);
        }
        else {
          if (sVar1 == 2) {
            FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - local_10);
          }
          else {
            if (sVar1 == 3) {
              FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) + local_10);
            }
          }
        }
      }
      uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x88))();
      iVar6 = iVar6 + -1;
      iVar2 = iVar4;
    }
    if (0 < local_14) {
      sVar1 = *(short *)(param_2 + 4);
      if (sVar1 == 0) {
        uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - local_14);
      }
      else {
        if (sVar1 == 1) {
          uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) + local_14);
        }
        else {
          if (sVar1 == 2) {
            uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) - local_14);
          }
          else {
            uVar3 = param_2 & 0xffff0000 | (uint)(ushort)(sVar1 - 3U);
            if ((ushort)(sVar1 - 3U) == 0) {
              uVar3 = FUN_0044c61c(param_1,*(int *)(param_1 + 0xc) + local_14);
            }
          }
        }
      }
    }
  }
  return uVar3;
}
