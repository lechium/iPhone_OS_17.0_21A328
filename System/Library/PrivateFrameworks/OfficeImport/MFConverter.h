//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFConverter : NSObject
{
}

+ (struct CGRect)boundsInLogicalUnits:(id)arg1;	// IMP=0x008000000035d794
+ (struct CGRect)boundsInPoints:(id)arg1;	// IMP=0x008000000023b79f
+ (_Bool)mapToPdf:(id)arg1;	// IMP=0x00800000000f6187
+ (void)playInCurrentContext:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;	// IMP=0x00800000000f65be
+ (id)play:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;	// IMP=0x00800000000f5f83
+ (id)playToBitmap:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;	// IMP=0x008000000035d78b
+ (id)playToPDF:(id)arg1 frame:(struct CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4;	// IMP=0x00800000000f6190
+ (void)fromBinary:(id)arg1 toXml:(id)arg2;	// IMP=0x008000000035d859

@end

