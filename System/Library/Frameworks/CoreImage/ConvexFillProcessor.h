//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIImageProcessorKernel.h"

__attribute__((visibility("hidden")))
@interface ConvexFillProcessor : CIImageProcessorKernel
{
}

+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;	// IMP=0x008000000007a171
+ (_Bool)allowPartialOutputRegion;	// IMP=0x008000000007a169
+ (int)formatForInputAtIndex:(int)arg1;	// IMP=0x008000000007a146
+ (_Bool)canReduceOutputChannels;	// IMP=0x008000000007a13e
+ (int)outputFormat;	// IMP=0x008000000007a12f
+ (_Bool)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000079b1c

@end

