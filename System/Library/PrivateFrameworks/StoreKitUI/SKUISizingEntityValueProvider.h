//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SKUISizingEntityValueProvider : NSObject
{
    NSMutableDictionary *_tallestValues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002aaad2
- (void)_insertTallestValueForViewElement:(id)arg1;	// IMP=0x00000000002aa8e0
- (id)valuesForEntityProperties:(id)arg1;	// IMP=0x00000000002aa706
- (id)valueForEntityProperty:(id)arg1;	// IMP=0x00000000002aa6f0
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;	// IMP=0x00000000002aa6e8
- (id)entityUniqueIdentifier;	// IMP=0x00000000002aa6e0
- (id)initForViewElement:(id)arg1;	// IMP=0x00000000002aa5ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

