//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PULayoutSectionSampler : NSObject
{
}

- (void)dumpInternalMemory;	// IMP=0x0000000000309460
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000309404
- (long long)unsampledIndexForIndex:(long long)arg1;	// IMP=0x00000000003093fb
- (long long)indexForUnsampledIndex:(long long)arg1 isMainItem:(_Bool *)arg2;	// IMP=0x00000000003093ea

@end

