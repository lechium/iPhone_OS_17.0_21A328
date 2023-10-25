//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SteppingSignSizeAttributesCache : NSObject
{
    NSMutableDictionary *_attributesCache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000a2aabf
- (void)invalidateSizeAttributesForSignAtIndex:(long long)arg1;	// IMP=0x0010000000a2aa6b
- (void)invalidateSizeAttributes;	// IMP=0x0010000000a2aa55
- (void)setSizeAttributes:(id)arg1 forSignAtIndex:(long long)arg2 fittingSize:(struct CGSize)arg3;	// IMP=0x0010000000a2a913
- (id)sizeAttributesForSignAtIndex:(long long)arg1 fittingSize:(struct CGSize)arg2;	// IMP=0x0010000000a2a853
- (id)init;	// IMP=0x0010000000a2a7fd

@end
