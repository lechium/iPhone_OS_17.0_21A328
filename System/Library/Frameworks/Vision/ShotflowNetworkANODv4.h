//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowNetworkANODv4
{
}

+ (_Bool)inputBGR;	// IMP=0x008000000028a62f
+ (tuple_8dc74180)inputBiasRGB;	// IMP=0x008000000028a5fe
+ (float)inputScale;	// IMP=0x008000000028a5f0
+ (_Bool)hasPose;	// IMP=0x008000000028a5e8
+ (const void *)importantClasses;	// IMP=0x008000000028a5bc
+ (unsigned long long)mumberPosClasses;	// IMP=0x008000000028a5b1
+ (id)inputLayerName;	// IMP=0x008000000028a5a4
+ (id)modelName;	// IMP=0x008000000028a597
- (id)processVImage:(struct vImage_Buffer)arg1 inputIsBGR:(_Bool)arg2;	// IMP=0x000000000028b05b
- (int)setInputShape:(unsigned long long)arg1 height:(unsigned long long)arg2;	// IMP=0x000000000028aeba
- (void)initializeBuffers;	// IMP=0x000000000028a6dc

@end
