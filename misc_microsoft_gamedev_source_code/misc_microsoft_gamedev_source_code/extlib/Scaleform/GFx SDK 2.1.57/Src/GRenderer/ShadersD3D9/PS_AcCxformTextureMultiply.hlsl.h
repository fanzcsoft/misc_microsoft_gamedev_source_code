#if 0
//
// Generated by 2.0.7776.0
//
//   fxc /T ps_1_1 /E PS_AcCxformTextureMultiply scaleform.hlsl /Fh
//    PS_AcCxformTextureMultiply.hlsl.h
//
//
// Parameters:
//
//   float4 cxadd;
//   float4 cxmul;
//   sampler2D tex0;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   cxmul        c2       1
//   cxadd        c3       1
//   tex0         s0       1
//

// Shader type: pixel 

xps_3_0
defconst cxadd, float, vector, [1, 4], c3
defconst cxmul, float, vector, [1, 4], c2
defconst tex0, sampler2d, object, [1, 1], s0
config AutoSerialize=false
config AutoResource=false
config PsMaxReg=1
// PsExportColorCount=1
// PsSampleControl=centers

dcl_texcoord r0.xy

def c252, 0, 0, 0, 0
def c253, 0, 0, 0, 0
def c254, 0, 0, 0, 0
def c255, 0, -1, 1, 0


    exec
    tfetch2D r0, r0.xy, tf0
    alloc colors
    exec
    add r1.xyz, c3.xyz, c255.y
    mad r0.xyz, r0.xyz, c2.xyz, r1.xyz
    mad r1.xy, r0.w, c2.w, c255.yx
    add r1.xy, r1.yx, c3.w
    mad r0.xyz, r0.xyz, r1.x, c255.z
    mad r0.w, r1.y, r1.x, c255.z
    exece
    mul r0.xyz, r0.xyz, r0.w
    mov oC0, r0

// PDB hint 00000000-00000000-00000000

#endif

// This microcode is in native DWORD byte order.

const DWORD g_xps_PS_AcCxformTextureMultiply[] =
{
    0x102a1100, 0x00000114, 0x000000d0, 0x00000000, 0x00000024, 0x000000c8, 
    0x000000f0, 0x00000000, 0x00000000, 0x000000a0, 0x0000001c, 0x00000093, 
    0xffff0300, 0x00000003, 0x0000001c, 0x00000000, 0x0000008c, 0x00000058, 
    0x00020003, 0x00010000, 0x00000060, 0x00000000, 0x00000070, 0x00020002, 
    0x00010000, 0x00000060, 0x00000000, 0x00000076, 0x00030000, 0x00010000, 
    0x0000007c, 0x00000000, 0x63786164, 0x6400abab, 0x00010003, 0x00010004, 
    0x00010000, 0x00000000, 0x63786d75, 0x6c007465, 0x783000ab, 0x0004000c, 
    0x00010001, 0x00010000, 0x00000000, 0x70735f33, 0x5f300032, 0x2e302e37, 
    0x3737362e, 0x3000abab, 0x00000000, 0x00000001, 0x00000000, 0x00000000, 
    0x00000014, 0x01fc0010, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000040, 0x00000090, 0x10000100, 0x00000004, 0x00000000, 0x00000821, 
    0x00010001, 0x00000001, 0x00003050, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xbf800000, 0x3f800000, 
    0x00000000, 0x00011002, 0x00001200, 0xc4000000, 0x00006003, 0x20091200, 
    0x22000000, 0x10080001, 0x1f1ff688, 0x00004000, 0xc8070001, 0x00c0b100, 
    0x2003ff00, 0xc8070000, 0x00c0c0c0, 0xab000201, 0xc8030001, 0x001b1b6d, 
    0x8b0002ff, 0xc8030001, 0x006d1b00, 0xa0010300, 0xc8070000, 0x00c06cc6, 
    0xcb0001ff, 0xc8080000, 0x00b16cc6, 0xcb0101ff, 0xc8070000, 0x00c01b00, 
    0xe1000000, 0xc80f8000, 0x00000000, 0xe2000000, 0x00000000, 0x00000000, 
    0x00000000
};